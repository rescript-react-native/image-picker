module ImagePicker = {
  module Options = {
    type t;

    module PermissionDenied = {
      type t;

      [@bs.obj]
      external options:
        (
          ~title: string=?,
          ~text: string=?,
          ~reTryTitle: string=?,
          ~okTitle: string=?,
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
        unit
      ) =>
      t =
      "";
  };

  type response = {. "didCancel": bool};

  [@bs.module "react-native-image-picker"] [@bs.scope "default"]
  external launchCamera: Options.t => response = "launchCamera";
};
