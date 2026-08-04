// Type: Settings.UISettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/UISettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/UISettings.cs
// --------------------------------

// Settings.UISettings$$get_FileName
// il2cpp: System_String_o* Settings_UISettings__get_FileName (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x42041f0

System_String_o * Settings_UISettings__get_FileName(Settings_UISettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad8cf == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI.json");
    g_data_057ad8cf = '\x01';
  }
  return "UI.json";
}


// Settings.UISettings$$Apply
// il2cpp: void Settings_UISettings__Apply (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x4204220

void Settings_UISettings__Apply(Settings_UISettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  UI_ChatPanel_o *pUVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  uint uVar8;
  UI_InGameMenu_o *__this_01;
  
  if (g_data_057ad8d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_FindObjectsByType_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad8d0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 != (UI_BaseMenu_o *)0x0) {
    UI_BaseMenu__ApplyScale(__this_00,*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = UnityEngine_Object__FindObjectsByType_object__2589b50(1,0,MethodInfo_GisketchUIRoot_FindObjectsByType_GisketchUIRoot);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (0 < (int)uVar5) {
        __this_01 = (UI_InGameMenu_o *)0x0;
        do {
          uVar8 = (uint)__this_01;
          if (uVar5 <= uVar8) goto label_042044b0;
          pSVar2 = (__this->fields).UIMasterScale;
          if ((pSVar2 == (Settings_FloatSetting_o *)0x0) ||
             ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar6->m_Items[(int)uVar8] ==
              (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) goto label_042044ab;
          Gisketch_Aottg2UI_GisketchUIRoot__SetScale_3a2c960
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar6->m_Items[(int)uVar8],(pSVar2->fields)._value
                     ,(MethodInfo *)0x0);
          __this_01 = (UI_InGameMenu_o *)(ulong)(uVar8 + 1);
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)(uVar8 + 1) < (int)uVar5);
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      else {
        __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      if (__this_01 == (UI_InGameMenu_o *)0x0) {
        return;
      }
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((__this_01->klass->_2).naturalAligment < bVar1) {
        return;
      }
      if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu) {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_042044ab;
      }
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_042044b5;
      UI_InGameMenu__ApplyUISettings(__this_01,(MethodInfo *)0x0);
      pUVar3 = (__this_01->fields).ChatPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      pUVar3 = (__this_01->fields).ChatPanel;
      if (pUVar3 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_042044ab:
  il2cpp_runtime_helper_022b2c90();
label_042044b0:
  il2cpp_runtime_helper_022b2ca0();
label_042044b5:
  il2cpp_runtime_helper_022b2fd0(__this_01);
  if (g_data_057ad8d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ReplayManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
    g_data_057ad8d2 = '\x01';
  }
  pIVar7 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_ReplayManager + 0xb8),MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
  **(undefined8 **)(TypeInfo_ReplayManager + 0xb8) = pIVar7;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ReplayManager + 0xb8),pIVar7);
  return;
}


// Settings.UISettings$$.ctor
// il2cpp: void Settings_UISettings___ctor (Settings_UISettings_o* __this, const MethodInfo* method);
// 0x41fad40

void Settings_UISettings___ctor(Settings_UISettings_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t iVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Utility_Color255_o *pUVar7;
  Settings_ToggleColorSetting_o *__this_00;
  Settings_ColorSetting_o *pSVar8;
  MethodInfo *pMVar9;
  float fVar10;
  
  if (g_data_057ad8d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToggleColorSetting);
    il2cpp_runtime_helper_023445d0(&"Dark");
    g_data_057ad8d1 = '\x01';
  }
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pIVar1 = "Dark";
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar3,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar3->fields).MaxLength = 0x7fffffff;
  (__this->fields).UITheme = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).UITheme);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).GameFeed = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GameFeed);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).FeedConsole = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FeedConsole,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowStylebar = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowStylebar,pSVar4);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.75;
  (pSVar5->fields).MaxValue = 1.5;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).UIMasterScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).UIMasterScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 3.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).CrosshairScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CrosshairScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).CrosshairTextScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CrosshairTextScale,pSVar5);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar3,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar3->fields).MaxLength = 200;
  (__this->fields).CrosshairSkin = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CrosshairSkin,pSVar3);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).HUDScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HUDScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).MinimapScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MinimapScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).StylebarScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).StylebarScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).KillScoreScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).KillScoreScale,pSVar5);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar5->fields).MinValue = -3.4028235e+38;
  (pSVar5->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar5,MethodInfo_TypedSetting_1_System_Single);
  (pSVar5->fields).MinValue = 0.0;
  (pSVar5->fields).MaxValue = 2.0;
  fVar10 = (float)(*(pSVar5->klass->vtable)._10_SanitizeValue.methodPtr)
                            (0x3f800000,pSVar5,(pSVar5->klass->vtable)._10_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = fVar10;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).KillFeedScale = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).KillFeedScale,pSVar5);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowCrosshairDistance = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowCrosshairDistance,pSVar4);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).CrosshairStyle = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CrosshairStyle,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Speedometer = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Speedometer);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowInterpolation = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowInterpolation);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowCrosshairArrows = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowCrosshairArrows,pSVar4);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).KDR = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).KDR);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowPing = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowPing,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowEmotes = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowEmotes,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowKeybindTip = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowKeybindTip);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowGameTime = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowGameTime,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowSongPopup = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowSongPopup,pSVar4);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShowNames = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowNames,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShowHealthbars = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowHealthbars,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100000;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,500,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).HumanNameDistance = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumanNameDistance,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,3,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).NameOverrideTarget = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NameOverrideTarget,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).NameBackgroundType = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NameBackgroundType,pSVar6);
  pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  pMVar9 = (MethodInfo *)&g_data_000000ff;
  Utility_Color255___ctor(pUVar7,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_00 = (Settings_ToggleColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToggleColorSetting);
  Settings_ToggleColorSetting___ctor_4103830(__this_00,0,pUVar7,pMVar9);
  (__this->fields).ForceNameColor = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ForceNameColor);
  pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar7,0,0,0,100,(MethodInfo *)0x0);
  pSVar8 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)pSVar8,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar8->fields).MinAlpha = 0;
  pUVar7 = (Utility_Color255_o *)
           (*(pSVar8->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar8,pUVar7,(pSVar8->klass->vtable)._10_SanitizeValue.method);
  (pSVar8->fields).DefaultValue = pUVar7;
  il2cpp_runtime_helper_022b4080(&pSVar8->fields,pUVar7);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)(pSVar8->fields).DefaultValue,MethodInfo_Void_set_Value);
  (__this->fields).ForceBackgroundColor = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ForceBackgroundColor,pSVar8);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).MinNameLength = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MinNameLength,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 100;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0x14,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).MaxNameLength = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MaxNameLength);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).FadeMainMenu = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FadeMainMenu,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).FadeLoadscreen = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FadeLoadscreen,pSVar4);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 1000;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0x140,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatWidth = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatWidth,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 500;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0x127,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatHeight = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatHeight,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 1;
  (pSVar6->fields).MaxValue = 0x32;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0x12,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatFontSize = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatFontSize,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 400;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatPoolSize = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatPoolSize,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 1;
  (pSVar6->fields).MaxValue = 0x32;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,10,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChatScrollSensitivity = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatScrollSensitivity,pSVar6);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 10;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,3,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).KillFeedCount = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).KillFeedCount,pSVar6);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).JoinNotifications = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).JoinNotifications,pSVar4);
  pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar2;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Coordinates = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Coordinates);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ShowChatTimestamp = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowChatTimestamp);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ChatHidden = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatHidden,pSVar4);
  pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar7,0x26,0x26,0x26,0,(MethodInfo *)0x0);
  pSVar8 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  if (g_data_057ad89a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad89a = '\x01';
  }
  Settings_TypedSetting_object____ctor((Settings_TypedSetting_T__o *)pSVar8,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar8->fields).MinAlpha = 0;
  pUVar7 = (Utility_Color255_o *)
           (*(pSVar8->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar8,pUVar7,(pSVar8->klass->vtable)._10_SanitizeValue.method);
  (pSVar8->fields).DefaultValue = pUVar7;
  il2cpp_runtime_helper_022b4080(&pSVar8->fields,pUVar7);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)(pSVar8->fields).DefaultValue,MethodInfo_Void_set_Value);
  (__this->fields).ChatBackgroundColor = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatBackgroundColor);
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pMVar9,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ChatCLErrors = (Settings_BoolSetting_o *)pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChatCLErrors);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,pMVar9);
  return;
}


