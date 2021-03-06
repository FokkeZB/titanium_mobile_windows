var appc = require('node-appc'),
	fs = require('fs'),
	os = require('os'),
	path = require('path'),
	ti = require('titanium-sdk'),
	__ = appc.i18n(__dirname).__;

/*
 Public API.
 */
exports.mixin = mixin;

/*
 Implementation.
 */
function mixin(WindowsBuilder) {
	WindowsBuilder.prototype.initialize = initialize;
}

/**
 * Initializes common build settings that will be available to build hooks.
 *
 * @param {Function} next - A function to call after the builder object has been initialized.
 */
function initialize(next) {
	var argv = this.cli.argv;

	this.buildOnly = argv['build-only'];
	this.debugHost = this.allowDebugging && argv['debug-host'];
	this.profilerHost = this.allowProfiling && argv['profiler-host'];
	this.deviceId = argv['device-id'];

	// cmake
	this.cmakeDir = path.resolve(__dirname, '..', '..', 'vendor', 'cmake');
	this.cmake = path.join(this.cmakeDir, 'bin', 'cmake.exe');
	if (this.target == 'wp-emulator' || this.target == 'wp-device' || this.target == 'dist-phonestore') {
		if (this.target == 'wp-device' || this.target == 'dist-phonestore') {
			this.cmakeArch = 'ARM';
		} else {
			this.cmakeArch = 'Win32';
		}
		this.cmakePlatform = 'WindowsPhone';
		this.cmakePlatformAbbrev = 'phone';
	} else {
		this.cmakeArch = 'Win32';
		this.cmakePlatform = 'WindowsStore';
		this.cmakePlatformAbbrev = 'store';
	}
	this.arch = this.cmakeArch == 'Win32' ? 'x86' : this.cmakeArch;
	this.cmakeTarget = this.cmakePlatformAbbrev + '.' + this.arch;

	// directories
	// FIXME If we're building to temp, we need to copy the build results back over to the original build dir!
	this.outputDir = argv['output-dir'] ? appc.fs.resolvePath(argv['output-dir']) : null;
	this.wsCert = argv['ws-cert'] ? argv['ws-cert'] : null;
	this.pfxPassword = argv['pfx-password'] ? argv['pfx-password'] : null;

	this.buildSrcDir = path.join(this.buildDir, 'src'); // Where the src files go
	this.cmakeTargetDir = path.join(this.buildDir, this.cmakeTarget); // where cmake generates the VS solution
	this.buildTargetAssetsDir = path.join(this.buildDir, 'Assets');
	this.buildTargetStringsDir = path.join(this.buildDir, 'Strings');

	// files
	this.buildManifestFile = path.join(this.buildDir, 'build-manifest.json');
	this.cmakeListFile = path.join(this.buildDir, 'CMakeLists.txt'); // lives above the buildSrcDir
	this.cmakeFinderDir = path.join(this.buildDir, 'cmake');

	next();
}
