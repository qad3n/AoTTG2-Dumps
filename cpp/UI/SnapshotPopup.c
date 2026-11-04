// Type: UI.SnapshotPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/SnapshotPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs
// --------------------------------

// UI.SnapshotPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_SnapshotPopup__get_EscapeBehavior (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_SnapshotPopup__get_EscapeBehavior(UI_SnapshotPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.SnapshotPopup$$get_AnimationTime
// il2cpp: float UI_SnapshotPopup__get_AnimationTime (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x1821bc890

float
UI_SnapshotPopup__get_AnimationTime(UI_SnapshotPopup_o* __this, MethodInfo* method)

{
  return 0.1;
}


// UI.SnapshotPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SnapshotPopup__get_PopupAnimationType (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_SnapshotPopup__get_PopupAnimationType(UI_SnapshotPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.SnapshotPopup$$Setup
// il2cpp: void UI_SnapshotPopup__Setup (UI_SnapshotPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18227f160

void UI_SnapshotPopup__Setup(UI_SnapshotPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_RawImage_o *value;
  
  if (Il2CppMethodInitialized_18434737e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_18434737e = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      (__this->fields)._image = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._image,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotPopup$$Load
// il2cpp: void UI_SnapshotPopup__Load (UI_SnapshotPopup_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x18227f130

void UI_SnapshotPopup__Load(UI_SnapshotPopup_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  
  __this_00 = (__this->fields)._image;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SnapshotPopup$$.ctor
// il2cpp: void UI_SnapshotPopup___ctor (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_SnapshotPopup___ctor(UI_SnapshotPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


