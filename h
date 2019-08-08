[33mcommit af4d3d28c076fd06fab9545d67794af86bddc2c4[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: boulida hamza <boulida.hamza@gmail.com>
Date:   Thu Aug 8 15:24:16 2019 +0100

    first commit

[1mdiff --git a/.editorconfig b/.editorconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..e89330a[m
[1m--- /dev/null[m
[1m+++ b/.editorconfig[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m# Editor configuration, see https://editorconfig.org[m
[32m+[m[32mroot = true[m
[32m+[m
[32m+[m[32m[*][m
[32m+[m[32mcharset = utf-8[m
[32m+[m[32mindent_style = space[m
[32m+[m[32mindent_size = 2[m
[32m+[m[32minsert_final_newline = true[m
[32m+[m[32mtrim_trailing_whitespace = true[m
[32m+[m
[32m+[m[32m[*.md][m
[32m+[m[32mmax_line_length = off[m
[32m+[m[32mtrim_trailing_whitespace = false[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..f4f46a5[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,46 @@[m
[32m+[m[32m# See http://help.github.com/ignore-files/ for more about ignoring files.[m
[32m+[m
[32m+[m[32m# compiled output[m
[32m+[m[32m/dist[m
[32m+[m[32m/tmp[m
[32m+[m[32m/out-tsc[m
[32m+[m[32m# Only exists if Bazel was run[m
[32m+[m[32m/bazel-out[m
[32m+[m
[32m+[m[32m# dependencies[m
[32m+[m[32m/node_modules[m
[32m+[m
[32m+[m[32m# profiling files[m
[32m+[m[32mchrome-profiler-events.json[m
[32m+[m[32mspeed-measure-plugin.json[m
[32m+[m
[32m+[m[32m# IDEs and editors[m
[32m+[m[32m/.idea[m
[32m+[m[32m.project[m
[32m+[m[32m.classpath[m
[32m+[m[32m.c9/[m
[32m+[m[32m*.launch[m
[32m+[m[32m.settings/[m
[32m+[m[32m*.sublime-workspace[m
[32m+[m
[32m+[m[32m# IDE - VSCode[m
[32m+[m[32m.vscode/*[m
[32m+[m[32m!.vscode/settings.json[m
[32m+[m[32m!.vscode/tasks.json[m
[32m+[m[32m!.vscode/launch.json[m
[32m+[m[32m!.vscode/extensions.json[m
[32m+[m[32m.history/*[m
[32m+[m
[32m+[m[32m# misc[m
[32m+[m[32m/.sass-cache[m
[32m+[m[32m/connect.lock[m
[32m+[m[32m/coverage[m
[32m+[m[32m/libpeerconnection.log[m
[32m+[m[32mnpm-debug.log[m
[32m+[m[32myarn-error.log[m
[32m+[m[32mtestem.log[m
[32m+[m[32m/typings[m
[32m+[m
[32m+[m[32m# System Files[m
[32m+[m[32m.DS_Store[m
[32m+[m[32mThumbs.db[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..be9024f[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32m# Crud[m
[32m+[m
[32m+[m[32mThis project was generated with [Angular CLI](https://github.com/angular/angular-cli) version 8.1.2.[m
[32m+[m
[32m+[m[32m## Development server[m
[32m+[m
[32m+[m[32mRun `ng serve` for a dev server. Navigate to `http://localhost:4200/`. The app will automatically reload if you change any of the source files.[m
[32m+[m
[32m+[m[32m## Code scaffolding[m
[32m+[m
[32m+[m[32mRun `ng generate component component-name` to generate a new component. You can also use `ng generate directive|pipe|service|class|guard|interface|enum|module`.[m
[32m+[m
[32m+[m[32m## Build[m
[32m+[m
[32m+[m[32mRun `ng build` to build the project. The build artifacts will be stored in the `dist/` directory. Use the `--prod` flag for a production build.[m
[32m+[m
[32m+[m[32m## Running unit tests[m
[32m+[m
[32m+[m[32mRun `ng test` to execute the unit tests via [Karma](https://karma-runner.github.io).[m
[32m+[m
[32m+[m[32m## Running end-to-end tests[m
[32m+[m
[32m+[m[32mRun `ng e2e` to execute the end-to-end tests via [Protractor](http://www.protractortest.org/).[m
[32m+[m
[32m+[m[32m## Further help[m
[32m+[m
[32m+[m[32mTo get more help on the Angular CLI use `ng help` or go check out the [Angular CLI README](https://github.com/angular/angular-cli/blob/master/README.md).[m
[1mdiff --git a/angular.json b/angular.json[m
[1mnew file mode 100644[m
[1mindex 0000000..30ce87b[m
[1m--- /dev/null[m
[1m+++ b/angular.json[m
[36m@@ -0,0 +1,120 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "$schema": "./node_modules/@angular/cli/lib/config/schema.json",[m
[32m+[m[32m  "version": 1,[m
[32m+[m[32m  "newProjectRoot": "projects",[m
[32m+[m[32m  "projects": {[m
[32m+[m[32m    "crud": {[m
[32m+[m[32m      "projectType": "application",[m
[32m+[m[32m      "schematics": {},[m
[32m+[m[32m      "root": "",[m
[32m+[m[32m      "sourceRoot": "src",[m
[32m+[m[32m      "prefix": "app",[m
[32m+[m[32m      "architect": {[m
[32m+[m[32m        "build": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:browser",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "outputPath": "dist/crud",[m
[32m+[m[32m            "index": "src/index.html",[m
[32m+[m[32m            "main": "src/main.ts",[m
[32m+[m[32m            "polyfills": "src/polyfills.ts",[m
[32m+[m[32m            "tsConfig": "tsconfig.app.json",[m
[32m+[m[32m            "aot": false,[m
[32m+[m[32m            "assets": [[m
[32m+[m[32m              "src/favicon.ico",[m
[32m+[m[32m              "src/assets"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "styles": [[m
[32m+[m[32m              "src/styles.css"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "scripts": [][m
[32m+[m[32m          },[m
[32m+[m[32m          "configurations": {[m
[32m+[m[32m            "production": {[m
[32m+[m[32m              "fileReplacements": [[m
[32m+[m[32m                {[m
[32m+[m[32m                  "replace": "src/environments/environment.ts",[m
[32m+[m[32m                  "with": "src/environments/environment.prod.ts"[m
[32m+[m[32m                }[m
[32m+[m[32m              ],[m
[32m+[m[32m              "optimization": true,[m
[32m+[m[32m              "outputHashing": "all",[m
[32m+[m[32m              "sourceMap": false,[m
[32m+[m[32m              "extractCss": true,[m
[32m+[m[32m              "namedChunks": false,[m
[32m+[m[32m              "aot": true,[m
[32m+[m[32m              "extractLicenses": true,[m
[32m+[m[32m              "vendorChunk": false,[m
[32m+[m[32m              "buildOptimizer": true,[m
[32m+[m[32m              "budgets": [[m
[32m+[m[32m                {[m
[32m+[m[32m                  "type": "initial",[m
[32m+[m[32m                  "maximumWarning": "2mb",[m
[32m+[m[32m                  "maximumError": "5mb"[m
[32m+[m[32m                }[m
[32m+[m[32m              ][m
[32m+[m[32m            }[m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "serve": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:dev-server",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "browserTarget": "crud:build"[m
[32m+[m[32m          },[m
[32m+[m[32m          "configurations": {[m
[32m+[m[32m            "production": {[m
[32m+[m[32m              "browserTarget": "crud:build:production"[m
[32m+[m[32m            }[m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "extract-i18n": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:extract-i18n",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "browserTarget": "crud:build"[m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "test": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:karma",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "main": "src/test.ts",[m
[32m+[m[32m            "polyfills": "src/polyfills.ts",[m
[32m+[m[32m            "tsConfig": "tsconfig.spec.json",[m
[32m+[m[32m            "karmaConfig": "karma.conf.js",[m
[32m+[m[32m            "assets": [[m
[32m+[m[32m              "src/favicon.ico",[m
[32m+[m[32m              "src/assets"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "styles": [[m
[32m+[m[32m              "src/styles.css"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "scripts": [][m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "lint": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:tslint",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "tsConfig": [[m
[32m+[m[32m              "tsconfig.app.json",[m
[32m+[m[32m              "tsconfig.spec.json",[m
[32m+[m[32m              "e2e/tsconfig.json"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "exclude": [[m
[32m+[m[32m              "**/node_modules/**"[m
[32m+[m[32m            ][m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "e2e": {[m
[32m+[m[32m          "builder": "@angular-devkit/build-angular:protractor",[m
[32m+[m[32m          "options": {[m
[32m+[m[32m            "protractorConfig": "e2e/protractor.conf.js",[m
[32m+[m[32m            "devServerTarget": "crud:serve"[m
[32m+[m[32m          },[m
[32m+[m[32m          "configurations": {[m
[32m+[m[32m            "production": {[m
[32m+[m[32m              "devServerTarget": "crud:serve:production"[m
[32m+[m[32m            }[m
[32m+[m[32m          }[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    }},[m
[32m+[m[32m  "defaultProject": "crud"[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/browserslist b/browserslist[m
[1mnew file mode 100644[m
[1mindex 0000000..8084853[m
[1m--- /dev/null[m
[1m+++ b/browserslist[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m# This file is used by the build system to adjust CSS and JS output to support the specified browsers below.[m
[32m+[m[32m# For additional information regarding the format and rule options, please see:[m
[32m+[m[32m# https://github.com/browserslist/browserslist#queries[m
[32m+[m
[32m+[m[32m# You can see what browsers were selected by your queries by running:[m
[32m+[m[32m#   npx browserslist[m
[32m+[m
[32m+[m[32m> 0.5%[m
[32m+[m[32mlast 2 versions[m
[32m+[m[32mFirefox ESR[m
[32m+[m[32mnot dead[m
[32m+[m[32mnot IE 9-11 # For IE 9-11 support, remove 'not'.[m
\ No newline at end of file[m
[1mdiff --git a/e2e/protractor.conf.js b/e2e/protractor.conf.js[m
[1mnew file mode 100644[m
[1mindex 0000000..73e4e68[m
[1m--- /dev/null[m
[1m+++ b/e2e/protractor.conf.js[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32m// @ts-check[m
[32m+[m[32m// Protractor configuration file, see link for more information[m
[32m+[m[32m// https://github.com/angular/protractor/blob/master/lib/config.ts[m
[32m+[m
[32m+[m[32mconst { SpecReporter } = require('jasmine-spec-reporter');[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * @type { import("protractor").Config }[m
[32m+[m[32m */[m
[32m+[m[32mexports.config = {[m
[32m+[m[32m  allScriptsTimeout: 11000,[m
[32m+[m[32m  specs: [[m
[32m+[m[32m    './src/**/*.e2e-spec.ts'[m
[32m+[m[32m  ],[m
[32m+[m[32m  capabilities: {[m
[32m+[m[32m    'browserName': 'chrome'[m
[32m+[m[32m  },[m
[32m+[m[32m  directConnect: true,[m
[32m+[m[32m  baseUrl: 'http://localhost:4200/',[m
[32m+[m[32m  framework: 'jasmine',[m
[32m+[m[32m  jasmineNodeOpts: {[m
[32m+[m[32m    showColors: true,[m
[32m+[m[32m    defaultTimeoutInterval: 30000,[m
[32m+[m[32m    print: function() {}[m
[32m+[m[32m  },[m
[32m+[m[32m  onPrepare() {[m
[32m+[m[32m    require('ts-node').register({[m
[32m+[m[32m      project: require('path').join(__dirname, './tsconfig.json')[m
[32m+[m[32m    });[m
[32m+[m[32m    jasmine.getEnv().addReporter(new SpecReporter({ spec: { displayStacktrace: true } }));[m
[32m+[m[32m  }[m
[32m+[m[32m};[m
\ No newline at end of file[m
[1mdiff --git a/e2e/src/app.e2e-spec.ts b/e2e/src/app.e2e-spec.ts[m
[1mnew file mode 100644[m
[1mindex 0000000..90b1ee8[m
[1m--- /dev/null[m
[1m+++ b/e2e/src/app.e2e-spec.ts[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32mimport { AppPage } from './app.po';[m
[32m+[m[32mimport { browser, logging } from 'protractor';[m
[32m+[m
[32m+[m[32mdescribe('workspace-project App', () => {[m
[32m+[m[32m  let page: AppPage;[m
[32m+[m
[32m+[m[32m  beforeEach(() => {[m
[32m+[m[32m    page = new AppPage();[m
[32m+[m[32m  });[m
[32m+[m
[32m+[m[32m  it('should display welcome message', () => {[m
[32m+[m[32m    page.navigateTo();[m
[32m+[m[32m    expect(page.getTitleText()).toEqual('Welcome to crud!');[m
[32m+[m[32m  });[m
[32m+[m
[32m+[m[32m  afterEach(async () => {[m
[32m+[m[32m    // Assert that there are no errors emitted from the browser[m
[32m+[m[32m    const logs = await browser.manage().logs().get(logging.Type.BROWSER);[m
[32m+[m[32m    expect(logs).not.toContain(jasmine.objectContaining({[m
[32m+[m[32m      level: logging.Level.SEVERE,[m
[32m+[m[32m    } as logging.Entry));[m
[32m+[m[32m  });[m
[32m+[m[32m});[m
[1mdiff --git a/e2e/src/app.po.ts b/e2e/src/app.po.ts[m
[1mnew file mode 100644[m
[1mindex 0000000..5776aa9[m
[1m--- /dev/null[m
[1m+++ b/e2e/src/app.po.ts[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32mimport { browser, by, element } from 'protractor';[m
[32m+[m
[32m+[m[32mexport class AppPage {[m
[32m+[m[32m  navigateTo() {[m
[32m+[m[32m    return browser.get(browser.baseUrl) as Promise<any>;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  getTitleText() {[m
[32m+[m[32m    return element(by.css('app-root h1')).getText() as Promise<string>;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/e2e/tsconfig.json b/e2e/tsconfig.json[m
[1mnew file mode 100644[m
[1mindex 0000000..39b800f[m
[1m--- /dev/null[m
[1m+++ b/e2e/tsconfig.json[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "extends": "../tsconfig.json",[m
[32m+[m[32m  "compilerOptions": {[m
[32m+[m[32m    "outDir": "../out-tsc/e2e",[m
[32m+[m[32m    "module": "commonjs",[m
[32m+[m[32m    "target": "es5",[m
[32m+[m[32m    "types": [[m
[32m+[m[32m      "jasmine",[m
[32m+[m[32m      "jasminewd2",[m
[32m+[m[32m      "node"[m
[32m+[m[32m    ][m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/karma.conf.js b/karma.conf.js[m
[1mnew file mode 100644[m
[1mindex 0000000..da5950c[m
[1m--- /dev/null[m
[1m+++ b/karma.conf.js[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32m// Karma configuration file, see link for more information[m
[32m+[m[32m// https://karma-runner.github.io/1.0/config/configuration-file.html[m
[32m+[m
[32m+[m[32mmodule.exports = function (config) {[m
[32m+[m[32m  config.set({[m
[32m+[m[32m    basePath: '',[m
[32m+[m[32m    frameworks: ['jasmine', '@angular-devkit/build-angular'],[m
[32m+[m[32m    plugins: [[m
[32m+[m[32m      require('karma-jasmine'),[m
[32m+[m[32m      require('karma-chrome-launcher'),[m
[32m+[m[32m      require('karma-jasmine-html-reporter'),[m
[32m+[m[32m      require('karma-coverage-istanbul-reporter'),[m
[32m+[m[32m      require('@angular-devkit/build-angular/plugins/karma')[m
[32m+[m[32m    ],[m
[32m+[m[32m    client: {[m
[32m+[m[32m      clearContext: false // leave Jasmine Spec Runner output visible in browser[m
[32m+[m[32m    },[m
[32m+[m[32m    coverageIstanbulReporter: {[m
[32m+[m[32m      dir: require('path').join(__dirname, './coverage/crud'),[m
[32m+[m[32m      reports: ['html', 'lcovonly', 'text-summary'],[m
[32m+[m[32m      fixWebpackSourcePaths: true[m
[32m+[m[32m    },[m
[32m+[m[32m    reporters: ['progress', 'kjhtml'],[m
[32m+[m[32m    port: 9876,[m
[32m+[m[32m    colors: true,[m
[32m+[m[32m    logLevel: config.LOG_INFO,[m
[32m+[m[32m    autoWatch: true,[m
[32m+[m[32m    browsers: ['Chrome'],[m
[32m+[m[32m    singleRun: false,[m
[32m+[m[32m    restartOnFileChange: true[m
[32m+[m[32m  });[m
[32m+[m[32m};[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mnew file mode 100644[m
[1mindex 0000000..c0eca8f[m
[1m--- /dev/null[m
[1m+++ b/package-lock.json[m
[36m@@ -0,0 +1,11953 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "crud",[m
[32m+[m[32m  "version": "0.0.0",[m
[32m+[m[32m  "lockfileVersion": 1,[m
[32m+[m[32m  "requires": true,[m
[32m+[m[32m  "dependencies": {[m
[32m+[m[32m    "@angular-devkit/architect": {[m
[32m+[m[32m      "version": "0.801.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@angular-devkit/architect/-/architect-0.801.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-gg6ZyJMiRYuzzmbpuDszrsE/hpwzoUnlOVoLNNzbACGBSDiqelC1mvGHb9JQM56Sy8gSjZn6RT0K2/Og79GoSg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@angular-devkit/core": "8.1.3",[m
[32m+[m[32m        "rxjs": "6.4.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@angular-devkit/build-angular": {[m
[32m+[m[32m      "version": "0.801.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@angular-devkit/build-angular/-/build-angular-0.801.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-BmN48xepRzQN2h2L7k9MhEWSAmEJj8celtD9Tu9Gn2DeM0yh2TFW9OKFKJlqyF3vGd3at24bqHOXI4MtDeltQQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "@angular-devkit/architect": "0.801.3",[m
[32m+[m[32m        "@angular-devkit/build-optimizer": "0.801.3",[m
[32m+[m[32m        "@angular-devkit/build-webpack": "0.801.3",[m
[32m+[m[32m        "@angular-devkit/core": "8.1.3",[m
[32m+[m[32m        "@ngtools/webpack": "8.1.3",[m
[32m+[m[32m        "ajv": "6.10.0",[m
[32m+[m[32m        "autoprefixer": "9.6.0",[m
[32m+[m[32m        "browserslist": "4.6.3",[m
[32m+[m[32m        "caniuse-lite": "1.0.30000979",[m
[32m+[m[32m        "circular-dependency-plugin": "5.0.2",[m
[32m+[m[32m        "clean-css": "4.2.1",[m
[32m+[m[32m        "copy-webpack-plugin": "5.0.3",[m
[32m+[m[32m        "core-js": "3.1.4",[m
[32m+[m[32m        "file-loader": "4.0.0",[m
[32m+[m[32m        "glob": "7.1.4",[m
[32m+[m[32m        "istanbul-instrumenter-loader": "3.0.1",[m
[32m+[m[32m        "karma-source-map-support": "1.4.0",[m
[32m+[m[32m        "less": "3.9.0",[m
[32m+[m[32m        "less-loader": "5.0.0",[m
[32m+[m[32m        "license-webpack-plugin": "2.1.1",[m
[32m+[m[32m        "loader-utils": "1.2.3",[m
[32m+[m[32m        "mini-css-extract-plugin": "0.7.0",[m
[32m+[m[32m        "minimatch": "3.0.4",[m
[32m+[m[32m        "open": "6.4.0",[m
[32m+[m[32m        "parse5": "4.0.0",[m
[32m+[m[32m        "postcss": "7.0.17",[m
[32m+[m[32m        "postcss-import": "12.0.1",[m
[32m+[m[32m        "postcss-loader": "3.0.0",[m
[32m+[m[32m        "raw-loader": "1.0.0",[m
[32m+[m[32m        "rxjs": "6.4.0",[m
[32m+[m[32m        "sass": "1.22.2",[m
[32m+[m[32m        "sass-loader": "7.1.0",[m
[32m+[m[32m        "semver": "6.2.0",[m
[32m+[m[32m        "source-map-loader": "0.2.4",[m
[32m+[m[32m        "source-map-support": "0.5.12",[m
[32m+[m[32m        "speed-measure-webpack-plugin": "1.3.1",[m
[32m+[m[32m        "style-loader": "0.23.1",[m
[32m+[m[32m        "stylus": "0.54.5",[m
[32m+[m[32m        "stylus-loader": "3.0.2",[m
[32m+[m[32m        "terser-webpack-plugin": "1.3.0",[m
[32m+[m[32m        "tree-kill": "1.2.1",[m
[32m+[m[32m        "webpack": "4.35.2",[m
[32m+[m[32m        "webpack-dev-middleware": "3.7.0",[m
[32m+[m[32m        "webpack-dev-server": "3.7.2",[m
[32m+[m[32m        "webpack-merge": "4.2.1",[m
[32m+[m[32m        "webpack-sources": "1.3.0",[m
[32m+[m[32m        "webpack-subresource-integrity": "1.1.0-rc.6",[m
[32m+[m[32m        "worker-plugin": "3.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "@angular-devkit/build-optimizer": {[m
[32m+[m[32m      "version": "0.801.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@angular-devkit/build-optimizer/-/build-optimizer-0.801.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-5wyzek1Ls7T9bh24yGDC/3Ss1YePpnOyBu0D8mJkByjPJjQr0xXR6UP