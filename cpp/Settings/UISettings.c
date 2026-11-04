// Type: Settings.UISettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/UISettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/UISettings.cs
// --------------------------------

// Settings.UISettings$$get_FileName
// il2cpp: System_String_o* Settings_UISettings__get_FileName (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x181f2be70

System_String_o * Settings_UISettings__get_FileName(Settings_UISettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843454cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI.json");
    Il2CppMethodInitialized_1843454cf = '\x01';
  }
  return "UI.json";
}


// Settings.UISettings$$Apply
// il2cpp: void Settings_UISettings__Apply (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x181f2a650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f2a8cf: mov rdi, qword ptr [rsp + 0x30]

void Settings_UISettings__Apply(Settings_UISettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_BaseMenu_c *pUVar4;
  UI_InGameMenu_o *__this_00;
  UI_ChatPanel_o *pUVar5;
  bool bVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843454d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_FindObjectsByType_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843454d0 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
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
    pSVar7 = UnityEngine_Object__FindObjectsByType_object__745290
                       (1,0,(MethodInfo_745290 *)
                            MethodInfo_UnityEngine_Object_FindObjectsByType_GisketchUIRoot);
    if (pSVar7 != (System_Object_array *)0x0) {
      for (uVar8 = 0; (int)uVar8 < (int)pSVar7->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pSVar7->max_length <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = (__this->fields).UIMasterScale;
        if ((pSVar3 == (Settings_FloatSetting_o *)0x0) ||
           ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar7->m_Items[(int)uVar8] ==
            (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) goto label_181f2a8df;
        Gisketch_Aottg2UI_GisketchUIRoot__SetScale_189adb0
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar7->m_Items[(int)uVar8],(pSVar3->fields)._value,
                   (MethodInfo *)0x0);
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        pUVar4 = pUVar2->klass;
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
           ((pUVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_181f2a8df;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
          }
          UI_InGameMenu__ApplyUISettings(__this_00,(MethodInfo *)0x0);
          pUVar5 = (__this_00->fields).ChatPanel;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pUVar5 = (__this_00->fields).ChatPanel;
            if (pUVar5 == (UI_ChatPanel_o *)0x0) goto label_181f2a8df;
            UI_ChatPanel__Sync(pUVar5,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
label_181f2a8df:
  ThrowNullReferenceException();
}


// Settings.UISettings$$.ctor
// il2cpp: void Settings_UISettings___ctor (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x181f2a900

void Settings_UISettings___ctor(Settings_UISettings_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  Settings_IntSetting_c *pSVar1;
  System_String_o *defaultValue_00;
  int32_t iVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Utility_Color255_o *pUVar7;
  Settings_ToggleColorSetting_o *__this_00;
  Utility_Color255_o *defaultValue_01;
  Settings_ColorSetting_o *pSVar8;
  Settings_ListSetting_StringSetting__o *pSVar9;
  
  if (Il2CppMethodInitialized_1843454d1 == '\0') {
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
    Il2CppMethodInitialized_1843454d1 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue_00 = "Dark";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)defaultValue_00,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar3->fields).MaxLength = 0x7fffffff;
  (__this->fields).UITheme = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UITheme,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GameFeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameFeed,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).FeedConsole = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedConsole,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowStylebar = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowStylebar,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.5,1.5,(MethodInfo *)0x0);
  (__this->fields).UIMasterScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UIMasterScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,3.0,(MethodInfo *)0x0);
  (__this->fields).CrosshairScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CrosshairTextScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairTextScale,pSVar5);
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar3,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar3->fields).MaxLength = 200;
  (__this->fields).CrosshairSkin = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairSkin,pSVar3);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).HUDScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HUDScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).MinimapScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).StylebarScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StylebarScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).KillScoreScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillScoreScale,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar5,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).KillFeedScale = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillFeedScale,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowCrosshairDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowCrosshairDistance,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).CrosshairStyle = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrosshairStyle,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Speedometer = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Speedometer,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowInterpolation = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowInterpolation,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowCrosshairArrows = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowCrosshairArrows,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).KDR = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KDR,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowPing = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowPing,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowEmotes = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowEmotes,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowGameTime = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowGameTime,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowSongPopup = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowSongPopup,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShowNames = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowNames,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShowHealthbars = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowHealthbars,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100000;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,500,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).HumanNameDistance = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumanNameDistance,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).NameOverrideTarget = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameOverrideTarget,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).NameBackgroundType = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameBackgroundType,pSVar6);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ToggleColorSetting);
  if (Il2CppMethodInitialized_1843454be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_1843454be = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this_00->fields).Enabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Enabled,pSVar4);
  defaultValue_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)defaultValue_01,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,defaultValue_01,0,(MethodInfo *)0x0);
  (__this_00->fields).Color = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Color,pSVar8);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this_00->fields).Enabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Enabled,pSVar4);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this_00->fields).Color = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Color,pSVar8);
  (__this->fields).ForceNameColor = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForceNameColor,__this_00);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0,0,0,100,(MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).ForceBackgroundColor = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForceBackgroundColor,pSVar8);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).MinNameLength = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinNameLength,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,0x14,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).MaxNameLength = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MaxNameLength,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).FadeMainMenu = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FadeMainMenu,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).FadeLoadscreen = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FadeLoadscreen,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 1000;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,0x140,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatWidth = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatWidth,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 500;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,0x127,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatHeight = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatHeight,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 1;
  (pSVar6->fields).MaxValue = 0x32;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,0x12,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatFontSize = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatFontSize,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 400;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatPoolSize = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatPoolSize,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 1;
  (pSVar6->fields).MaxValue = 0x32;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,10,(pSVar1->vtable)._11_SanitizeValue.method)
  ;
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatScrollSensitivity = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatScrollSensitivity,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 10;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).KillFeedCount = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).KillFeedCount,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).JoinNotifications = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoinNotifications,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Coordinates = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Coordinates,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowChatTimestamp = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowChatTimestamp,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ChatHidden = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatHidden,pSVar4);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0x26,0x26,0x26,0,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).ChatBackgroundColor = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatBackgroundColor,pSVar8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ChatCLErrors = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChatCLErrors,pSVar4);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar9,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).FavoriteExperiences = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FavoriteExperiences,pSVar9);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar9,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).FavoriteSandboxPresets = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FavoriteSandboxPresets,pSVar9);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


