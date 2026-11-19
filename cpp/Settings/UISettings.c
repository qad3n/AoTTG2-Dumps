// Type: Settings.UISettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/UISettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/UISettings.cs
// --------------------------------

// Settings.UISettings$$get_FileName
// il2cpp: System_String_o* Settings_UISettings__get_FileName (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x5c7f690

System_String_o * Settings_UISettings__get_FileName(Settings_UISettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754799c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI.json");
    Il2CppMethodInitialized_0754799c = '\x01';
  }
  return "UI.json";
}


// Settings.UISettings$$get_AppliedMasterScale
// il2cpp: float Settings_UISettings__get_AppliedMasterScale (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x5c7f6c0

float Settings_UISettings__get_AppliedMasterScale(Settings_UISettings_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754799d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754799d = '\x01';
  }
  pSVar1 = (__this->fields).UIMasterScale;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = (pSVar1->fields)._value;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    fVar2 = Gisketch_Aottg2UI_AottgUiScale__AppliedValue(fVar2,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = Gisketch_Aottg2UI_AottgUiScale__AppliedValue(fVar2,(MethodInfo *)0x0);
  return fVar2;
}


// Settings.UISettings$$Apply
// il2cpp: void Settings_UISettings__Apply (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x5c7f740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7f8e9: jmp 0x5c7f9d0
// asm:   0x5c7f95f: mov rsi, qword ptr [r14]

void Settings_UISettings__Apply(Settings_UISettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_ChatPanel_o *pUVar4;
  bool bVar5;
  uint uVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_0754799e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_FindObjectsByType_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754799e = '\x01';
  }
  Settings_BaseSettingsContainer__Apply((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    UI_BaseMenu__ApplyScale
              (pUVar2,TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pSVar7 = UnityEngine_Object__FindObjectsByType_object__35a3fa0
                       (1,0,(MethodInfo_35A3FA0 *)
                            MethodInfo_UnityEngine_Object_FindObjectsByType_GisketchUIRoot);
    if (pSVar7 != (System_Object_array *)0x0) {
      uVar6 = (uint)pSVar7->max_length;
      if (0 < (int)uVar6) {
        uVar8 = 0;
        do {
          if (uVar6 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = (__this->fields).UIMasterScale;
          if ((pSVar3 == (Settings_FloatSetting_o *)0x0) ||
             ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar7->m_Items[(int)uVar8] ==
              (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) goto label_05c7f9da;
          Gisketch_Aottg2UI_GisketchUIRoot__SetScale_521b170
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar7->m_Items[(int)uVar8],(pSVar3->fields)._value
                     ,(MethodInfo *)0x0);
          uVar8 = uVar8 + 1;
          uVar6 = (uint)pSVar7->max_length;
        } while ((int)uVar8 < (int)uVar6);
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      else {
        __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      if (__this_00 == (UI_InGameMenu_o *)0x0) {
        return;
      }
      bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
      if ((((UI_BaseMenu_c *)__this_00->klass)->_2).typeHierarchyDepth < bVar1) {
        return;
      }
      if ((((UI_BaseMenu_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_InGameMenu) {
        return;
      }
      if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_05c7f9da;
      }
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      UI_InGameMenu__ApplyUISettings(__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this_00->fields).ChatPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pUVar4 = (__this_00->fields).ChatPanel;
      if (pUVar4 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c7f9da:
  ThrowNullReferenceException();
}


// Settings.UISettings$$.ctor
// il2cpp: void Settings_UISettings___ctor (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x5c7da40

void Settings_UISettings___ctor(Settings_UISettings_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  System_String_o *defaultValue_00;
  Settings_FloatSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Utility_Color255_o *pUVar5;
  Settings_ToggleColorSetting_o *__this_00;
  Settings_ColorSetting_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754799f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    Il2CppMethodInitialized_0754799f = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,0.032,0.0,0.08,(MethodInfo *)0x0);
  (__this->fields).MobileHorizontalSafePadding = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileHorizontalSafePadding);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue_00 = "Dark";
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)defaultValue_00,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x7fffffff;
  (__this->fields).UITheme = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UITheme);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).GameFeed = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameFeed);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).FeedConsole = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedConsole);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ShowStylebar = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowStylebar);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.5,1.5,(MethodInfo *)0x0);
  (__this->fields).UIMasterScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UIMasterScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,3.0,(MethodInfo *)0x0);
  (__this->fields).CrosshairScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CrosshairTextScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairTextScale);
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)pSVar2,defaultValue,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 200;
  (__this->fields).CrosshairSkin = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairSkin);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).HUDScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HUDScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).MinimapScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).StylebarScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StylebarScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).KillScoreScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillScoreScale);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).KillFeedScale = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillFeedScale);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ShowCrosshairDistance = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowCrosshairDistance);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CrosshairStyle = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairStyle);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Speedometer = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Speedometer);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ShowInterpolation = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowInterpolation);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ShowCrosshairArrows = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowCrosshairArrows);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).KDR = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KDR);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ShowPing = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowPing);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ShowEmotes = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowEmotes);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ShowGameTime = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowGameTime);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ShowSongPopup = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowSongPopup);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShowNames = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowNames);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShowHealthbars = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowHealthbars);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,500,0,100000,(MethodInfo *)0x0);
  (__this->fields).HumanNameDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumanNameDistance);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).NameOverrideTarget = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameOverrideTarget);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).NameBackgroundType = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameBackgroundType);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  method_00 = (MethodInfo *)&g_data_000000ff;
  Utility_Color255___ctor(pUVar5,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ToggleColorSetting);
  Settings_ToggleColorSetting___ctor_5b7cba0(__this_00,false,pUVar5,method_00);
  (__this->fields).ForceNameColor = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForceNameColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0,0,0,100,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(pSVar6,pUVar5,0,(MethodInfo *)0x0);
  (__this->fields).ForceBackgroundColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForceBackgroundColor);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,0,100,(MethodInfo *)0x0);
  (__this->fields).MinNameLength = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinNameLength);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0x14,0,100,(MethodInfo *)0x0);
  (__this->fields).MaxNameLength = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MaxNameLength);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).FadeMainMenu = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FadeMainMenu);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).FadeLoadscreen = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FadeLoadscreen);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0x140,0,1000,(MethodInfo *)0x0);
  (__this->fields).ChatWidth = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatWidth);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0x127,0,500,(MethodInfo *)0x0);
  (__this->fields).ChatHeight = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatHeight);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0x12,1,0x32,(MethodInfo *)0x0);
  (__this->fields).ChatFontSize = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatFontSize);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,10,1,0x32,(MethodInfo *)0x0);
  (__this->fields).ChatScrollSensitivity = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatScrollSensitivity);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,3,0,10,(MethodInfo *)0x0);
  (__this->fields).KillFeedCount = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillFeedCount);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).JoinNotifications = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoinNotifications);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar4,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Coordinates = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Coordinates);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ShowChatTimestamp = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowChatTimestamp);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ChatHidden = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatHidden);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x26,0x26,0x26,0,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(pSVar6,pUVar5,0,(MethodInfo *)0x0);
  (__this->fields).ChatBackgroundColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatBackgroundColor);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).ChatCLErrors = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatCLErrors);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar7,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).FavoriteExperiences = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FavoriteExperiences);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar7,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).FavoriteSandboxPresets = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FavoriteSandboxPresets);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


