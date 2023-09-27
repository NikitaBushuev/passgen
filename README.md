# Password Generator (passgen)

## Description

This is a simple command-line password generator written in C++ using CMake for building. It allows you to create strong and random passwords with customizable parameters.

## Features

- Generate random passwords with various options.
- Customize character sets to include in the generated password.
- Control the length of the generated passwords.
- Specify the number of passwords to generate at once.

## Usage

```bash
passgen [-s <charset>] [-n <count>] [<len>]
```

## Installation

Clone this repository to your local machine.

```bash
git clone https://github.com/nikitabushuev/passgen.git
```

Build the project using CMake.

```bash
cd passgen
mkdir build
cd build
cmake ..
make
```

Run the password generator.

```bash
./passgen [-s <charset>] [-n <count>] [<len>]
```

Options
    
- `-s <charset>` Specify a custom character set for password generation.
- `-n <count>` Specify the number of passwords to generate.
- `<len>` Optionally, set the length of the generated passwords.

## Example

Generate 5 passwords with a length of 8 characters using a custom character set:

```bash
./passgen 8 -s "abcdefghijklmnopqrstuvwxyz1234567890!@#$%" -n 5
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
