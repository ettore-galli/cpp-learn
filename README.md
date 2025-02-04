# cpp-learn

Let's see if i can learn some c++

## Useful debian commands

Locate where a package is installed
dpkg -L <package-name>

## Environment setup (c++ devocontainer)

sudo apt-get update
sudo apt-get install build-essential gdb

apt install libfmt-dev

## Mixed Useful Links

<https://github.com/fmtlib/fmt/issues/2157>
<https://github.com/fmtlib/fmt/issues/2157#issuecomment-1117930229>

<https://fmt.dev/11.0/get-started/#building-from-source>

## Environment setup

Use gcc Docker image as devcontainer

<https://hub.docker.com/_/gcc>

```.devcontainer/Dockerfile```

```dockerfile
FROM gcc:latest
```

```.devcontainer/devcontainer.json```

```json
{
 "name": "C++",
 "build": {
  "dockerfile": "Dockerfile"
 }
}
```

```.vscode/c_cpp_properties.json```

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/clang",
            "cStandard": "c23",
            "cppStandard": "gnu++23",
            "intelliSenseMode": "linux-clang-arm64"
        }
    ],
    "version": 4
}
```
