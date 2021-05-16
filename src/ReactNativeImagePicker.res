type options

@obj
external options: (
  ~cameraType: [#front | #back]=?,
  ~durationLimit: int=?,
  ~includeBase64: bool=?,
  ~maxHeight: float=?,
  ~maxWidth: float=?,
  ~mediaType: [#photo | #video]=?,
  ~quality: float=?,
  ~saveToPhotos: bool=?,
  ~videoQuality: [#low | #medium | #high]=?,
  unit,
) => options = ""

type response = {
  base64: option<string>,
  didCancel: option<bool>,
  duration: option<float>,
  errorCode: option<[#camera_unavailable | #permission | #others]>,
  errorMessage: option<string>,
  fileName: option<string>,
  fileSize: option<float>,
  height: option<float>,
  uri: option<string>,
  width: option<float>,
  @as("type") type_: option<string>,
}

@module("react-native-image-picker")
external launchCamera: (options, response => unit) => unit = "launchCamera"

@module("react-native-image-picker")
external launchImageLibrary: (options, response => unit) => unit = "launchImageLibrary"
