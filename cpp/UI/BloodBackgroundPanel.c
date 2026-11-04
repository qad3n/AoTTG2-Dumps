// Type: UI.BloodBackgroundPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/BloodBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// --------------------------------

// UI.BloodBackgroundPanel$$get_EscapeBehavior
// il2cpp: int32_t UI_BloodBackgroundPanel__get_EscapeBehavior (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_BloodBackgroundPanel__get_EscapeBehavior(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.BloodBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_BloodBackgroundPanel__get_Title (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_BloodBackgroundPanel__get_Title(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.BloodBackgroundPanel$$get_Width
// il2cpp: float UI_BloodBackgroundPanel__get_Width (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BloodBackgroundPanel__get_Width(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_Height
// il2cpp: float UI_BloodBackgroundPanel__get_Height (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BloodBackgroundPanel__get_Height(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_TopBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BloodBackgroundPanel__get_TopBarHeight(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_BottomBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BloodBackgroundPanel__get_BottomBarHeight(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_BloodBackgroundPanel__get_PopupAnimationType (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_BloodBackgroundPanel__get_PopupAnimationType(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.BloodBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_BloodBackgroundPanel__get_AnimationTime (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x1821779b0

float
UI_BloodBackgroundPanel__get_AnimationTime(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.5;
}


// UI.BloodBackgroundPanel$$Setup
// il2cpp: void UI_BloodBackgroundPanel__Setup (UI_BloodBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18221d010

void UI_BloodBackgroundPanel__Setup
               (UI_BloodBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_RawImage_o *value;
  
  if (Il2CppMethodInitialized_18434717a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MainBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_18434717a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        value = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        (__this->fields)._loadingBackground = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._loadingBackground,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BloodBackgroundPanel$$Show
// il2cpp: void UI_BloodBackgroundPanel__Show (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x18221d0e0

void UI_BloodBackgroundPanel__Show(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  System_String_o *pSVar1;
  UnityEngine_Texture_o *pUVar2;
  UnityEngine_Texture_o *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434717b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/Blood/Blood");
    Il2CppMethodInitialized_18434717b = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields).IsActive == false) {
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,6,(MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70
                       ("Backgrounds/Blood/Blood",pSVar1,"BackgroundTexture",(MethodInfo *)0x0);
    __this_00 = (__this->fields)._loadingBackground;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar2 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,true,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar2 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar2->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar2;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_Texture2D);
      }
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.BloodBackgroundPanel$$.ctor
// il2cpp: void UI_BloodBackgroundPanel___ctor (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_BloodBackgroundPanel___ctor(UI_BloodBackgroundPanel_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


