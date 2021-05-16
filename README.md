# `@rescript-react-native/image-picker`

[![Build Status](https://github.com/rescript-react-native/image-picker/workflows/Build/badge.svg)](https://github.com/rescript-react-native/image-picker/actions)
[![Version](https://img.shields.io/npm/v/@rescript-react-native/image-picker.svg)](https://www.npmjs.com/@rescript-react-native/image-picker)
[![ReScript Forum](https://img.shields.io/discourse/posts?color=e6484f&label=ReScript%20Forum&server=https%3A%2F%2Fforum.rescript-lang.org)](https://forum.rescript-lang.org/)

[ReScript](https://rescript-lang.org) bindings for
[`react-native-image-picker`](https://github.com/react-native-image-picker/react-native-image-picker).

Exposed as `ReactNativeImagePicker` module.

`@rescript-react-native/image-picker` X.y.\* means it's compatible with
`react-native-image-picker` X.y.\*

## Installation

When
[`react-native-image-picker`](https://github.com/react-native-image-picker/react-native-image-picker)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @rescript-react-native/image-picker
# or
yarn add @rescript-react-native/image-picker
```

`@rescript-react-native/image-picker` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "@rescript/react",
    "rescript-react-native",
    // ...
+    "@rescript-react-native/image-picker"
  ],
  //...
}
```

## Usage

```rescript
open ReactNativeImagePicker

launchCamera(
  options(
    ~cameraType=#back,
    ~mediaType=#photo,
  ()),
  res => {
    Js.log(res.uri)
  }
)
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/rescript-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/rescript-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
