// Type: UI.SnapshotPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs
// --------------------------------

// UI.SnapshotPopup$$get_AnimationTime
// il2cpp: float UI_SnapshotPopup__get_AnimationTime (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x43e9a70

float UI_SnapshotPopup__get_AnimationTime(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.SnapshotPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SnapshotPopup__get_PopupAnimationType (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x43e9a80

int32_t UI_SnapshotPopup__get_PopupAnimationType(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SnapshotPopup$$Setup
// il2cpp: void UI_SnapshotPopup__Setup (UI_SnapshotPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e9a90

void UI_SnapshotPopup__Setup(UI_SnapshotPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_SnapshotPopup_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar1;
  System_String_o *value;
  UI_SnapshotPopup_o *pUVar2;
  
  if (g_data_057ae4e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae4e7 = '\x01';
  }
  value = (System_String_o *)0x0;
  pUVar2 = __this;
  __this_00 = (UI_SnapshotPopup_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UI_SnapshotPopup_o *)0x0) {
    value = "Image";
    __this_01 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)__this_00,"Image",(MethodInfo *)0x0);
    pUVar2 = __this_00;
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = (UnityEngine_UI_RawImage_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_RawImage_GetComponent_RawImage);
      (__this->fields)._image = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._image,pUVar1);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (pUVar2->fields)._image;
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(pUVar1,(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor((UI_TooltipPopup_o *)pUVar1,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotPopup$$Load
// il2cpp: void UI_SnapshotPopup__Load (UI_SnapshotPopup_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x43e9b20

void UI_SnapshotPopup__Load(UI_SnapshotPopup_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  
  __this_00 = (__this->fields)._image;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotPopup$$.ctor
// il2cpp: void UI_SnapshotPopup___ctor (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x43e9b40

void UI_SnapshotPopup___ctor(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


