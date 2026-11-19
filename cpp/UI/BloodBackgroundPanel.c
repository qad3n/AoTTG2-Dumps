// Type: UI.BloodBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/BloodBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// --------------------------------

// UI.BloodBackgroundPanel$$get_EscapeBehavior
// il2cpp: int32_t UI_BloodBackgroundPanel__get_EscapeBehavior (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc2d0

int32_t UI_BloodBackgroundPanel__get_EscapeBehavior(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.BloodBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_BloodBackgroundPanel__get_Title (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc2e0

System_String_o * UI_BloodBackgroundPanel__get_Title(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.BloodBackgroundPanel$$get_Width
// il2cpp: float UI_BloodBackgroundPanel__get_Width (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc300

float UI_BloodBackgroundPanel__get_Width(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_Height
// il2cpp: float UI_BloodBackgroundPanel__get_Height (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc310

float UI_BloodBackgroundPanel__get_Height(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_TopBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc320

float UI_BloodBackgroundPanel__get_TopBarHeight(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_BottomBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc330

float UI_BloodBackgroundPanel__get_BottomBarHeight(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_BloodBackgroundPanel__get_PopupAnimationType (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc340

int32_t UI_BloodBackgroundPanel__get_PopupAnimationType(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.BloodBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_BloodBackgroundPanel__get_AnimationTime (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc350

float UI_BloodBackgroundPanel__get_AnimationTime(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BloodBackgroundPanel$$Setup
// il2cpp: void UI_BloodBackgroundPanel__Setup (UI_BloodBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cfc360

void UI_BloodBackgroundPanel__Setup
               (UI_BloodBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_RawImage_o *method_00;
  
  if (Il2CppMethodInitialized_07547ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MainBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_07547ce3 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndBind(pUVar3,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Image",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        method_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar3,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        (__this->fields)._loadingBackground = method_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._loadingBackground);
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
        if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).BloodSplatterEnabled, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar2->fields)._value == false) {
            return;
          }
          UI_BloodBackgroundPanel__LoadBloodTexture(1,(MethodInfo *)method_00);
          UI_BloodBackgroundPanel__LoadBloodTexture(2,(MethodInfo *)method_00);
          UI_BloodBackgroundPanel__LoadBloodTexture(3,(MethodInfo *)method_00);
          UI_BloodBackgroundPanel__LoadBloodTexture(4,(MethodInfo *)method_00);
          UI_BloodBackgroundPanel__LoadBloodTexture(5,(MethodInfo *)method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BloodBackgroundPanel$$Show
// il2cpp: void UI_BloodBackgroundPanel__Show (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc5c0

void UI_BloodBackgroundPanel__Show(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  int32_t index;
  UnityEngine_Texture_o *value;
  MethodInfo *method_00;
  
  if ((__this->fields).IsActive != false) {
    return;
  }
  __this_00 = (__this->fields)._loadingBackground;
  method_00 = (MethodInfo *)&g_data_00000006;
  index = UnityEngine_Random__Range_690e2b0(1,6,(MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)UI_BloodBackgroundPanel__LoadBloodTexture(index,method_00);
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.BloodBackgroundPanel$$LoadBloodTexture
// il2cpp: UnityEngine_Texture2D_o* UI_BloodBackgroundPanel__LoadBloodTexture (int32_t index, const MethodInfo* method);
// 0x5cfc4c0

UnityEngine_Texture2D_o * UI_BloodBackgroundPanel__LoadBloodTexture(int32_t index,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *pSVar1;
  UnityEngine_Texture2D_o *pUVar2;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07547ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/Blood/Blood");
    Il2CppMethodInitialized_07547ce4 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("Backgrounds/Blood/Blood",pSVar1,"BackgroundTexture",(MethodInfo *)0x0)
  ;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = (UnityEngine_Texture2D_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,false,true,(MethodInfo *)0x0);
  if ((pUVar2 != (UnityEngine_Texture2D_o *)0x0) && (pUVar2->klass != TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
  }
  return pUVar2;
}


// UI.BloodBackgroundPanel$$.ctor
// il2cpp: void UI_BloodBackgroundPanel___ctor (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5cfc620

void UI_BloodBackgroundPanel___ctor(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


