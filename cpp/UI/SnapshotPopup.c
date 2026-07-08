// Type: UI.SnapshotPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SnapshotPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.SnapshotPopup$$get_AnimationTime
// il2cpp: float UI_SnapshotPopup__get_AnimationTime (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x40d7050

float UI_SnapshotPopup__get_AnimationTime(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.SnapshotPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SnapshotPopup__get_PopupAnimationType (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x40d7060

int32_t UI_SnapshotPopup__get_PopupAnimationType(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SnapshotPopup$$Setup
// il2cpp: void UI_SnapshotPopup__Setup (UI_SnapshotPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d7070

void UI_SnapshotPopup__Setup(UI_SnapshotPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  
  if (DAT_05704756 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&"Image");
    DAT_05704756 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = (UnityEngine_UI_RawImage_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
      (__this->fields)._image = pUVar2;
      il2cpp_runtime_glue(&(__this->fields)._image,pUVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotPopup$$Load
// il2cpp: void UI_SnapshotPopup__Load (UI_SnapshotPopup_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x40d7100

void UI_SnapshotPopup__Load
               (UI_SnapshotPopup_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  
  __this_00 = (__this->fields)._image;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture
              (__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotPopup$$.ctor
// il2cpp: void UI_SnapshotPopup___ctor (UI_SnapshotPopup_o* __this, const MethodInfo* method);
// 0x40d7120

void UI_SnapshotPopup___ctor(UI_SnapshotPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


