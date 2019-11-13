module ImagePicker = {
  module Options = {
    type t;

    module Button = {
      type t;

      [@bs.obj]
      external make: (~title: string=?, ~name: string=?, unit) => t = "";
    };

    module PermissionDenied = {
      type t;

      [@bs.obj]
      external options:
        (
          ~title: string,
          ~text: string,
          ~reTryTitle: string,
          ~okTitle: string,
          unit
        ) =>
        t =
        "";
    };

    module Storage = {
      type t;

      [@bs.obj]
      external options:
        (
          ~skipBackup: bool=?,
          ~path: string=?,
          ~cameraRoll: bool=?,
          ~waitUntilSaved: bool=?,
          unit
        ) =>
        t =
        "";
    };

    [@bs.obj]
    external make:
      (
        ~title: string=?,
        ~cancelButtonTitle: string=?,
        ~takePhotoButtonTitle: string=?,
        ~chooseFromLibraryButtonTitle: string=?,
        ~chooseWhichLibraryTitle: string=?,
        ~tintColor: string=?,
        ~cameraType: [@bs.string] [ | `front | `back]=?,
        ~mediaType: [@bs.string] [ | `photo | `video | `mixed]=?,
        ~maxWidth: float=?,
        ~maxHeight: float=?,
        ~quality: float=?,
        ~durationLimit: int=?,
        ~rotation: float=?,
        ~allowsEditing: bool=?,
        ~noData: bool=?,
        ~videoQuality: [@bs.string] [ | `low | `medium | `high]=?,
        ~storageOptions: Storage.t=?,
        ~permissionDenied: PermissionDenied.t=?,
        ~customButtons: array(Button.t)=?,
        unit
      ) =>
      t =
      "";
  };

  type response = {
    .
    "didCancel": bool,
    "error": string,
    "customButton": string,
    "data": string,
    "uri": string,
    "origURL": option(string),
    "isVertical": bool,
    "width": int,
    "height": int,
    "fileSize": int,
    "type": option(string),
    "fileName": option(string),
    "path": option(string),
    "latitude": option(float),
    "longitude": option(float),
    "timestamp": int,
    "originalRotation": float,
  };

  [@bs.module "react-native-image-picker"] [@bs.scope "default"]
  external launchCamera: (Options.t, response => unit) => unit =
    "launchCamera";

  [@bs.module "react-native-image-picker"] [@bs.scope "default"]
  external showImagePicker: (Options.t, response => unit) => unit =
    "showImagePicker";

  [@bs.module "react-native-image-picker"] [@bs.scope "default"]
  external launchImageLibrary: (Options.t, response => unit) => unit =
    "launchImageLibrary";
};
