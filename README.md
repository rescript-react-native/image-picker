# `@reason-react-native/image-picker`

[![Build Status](https://github.com/reason-react-native/image-picker/workflows/Build/badge.svg)](https://github.com/reason-react-native/image-picker/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/image-picker.svg)](https://www.npmjs.com/@reason-react-native/image-picker)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/something`](https://github.com/react-native-community/something).

Exposed as `ReactNativeImagePicker` module.

`@reason-react-native/image-picker` X.y._ means it's compatible with
`react-native-image-picker` X.y._

## Installation
1. Install
[`react-native-image-picker`](https://github.com/react-native-community/react-native-image-picker)
  by following their installation instructions.

2.  Install `@reason-react-native/image-picker`
```console
npm install @reason-react-native/image-picker
# or
yarn add @reason-react-native/image-picker
```

3.  Add `@reason-react-native/image-picker` to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/image-picker"
  ],
  //...
}
```
## Usage

```reason
open ReactNativeImagePicker;

ImagePicker.(
  launchCamera(
    Options.make(
      ~title="Take a picture",
      ~cameraType=`back,
      ~mediaType=`photo,
      ~permissionDenied=
        Options.PermissionDenied.options(
          ~title="Permission denied !",
          ~text="text",
          ~reTryTitle="Retry",
          ~okTitle="Ok !",
          (),
        ),
      (),
    ),
    res => {
      Js.log(res##uri);
      Js.log(res##path);
    }
  )
);
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
