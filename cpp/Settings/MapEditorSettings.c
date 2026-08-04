// Type: Settings.MapEditorSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/MapEditorSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// --------------------------------

// Settings.MapEditorSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorSettings__get_FileName (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x41f6e60

System_String_o *
Settings_MapEditorSettings__get_FileName(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad872 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapEditor.json");
    g_data_057ad872 = '\x01';
  }
  return "MapEditor.json";
}


// Settings.MapEditorSettings$$Apply
// il2cpp: void Settings_MapEditorSettings__Apply (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x41f6e90

void Settings_MapEditorSettings__Apply(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_MapEditorCamera_o *__this_00;
  
  if (g_data_057ad873 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad873 = '\x01';
  }
  __this_00 = *(Cameras_MapEditorCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_MapEditorCamera_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorCamera)) {
      Cameras_MapEditorCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.MapEditorSettings$$.ctor
// il2cpp: void Settings_MapEditorSettings___ctor (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x41f6f10

void Settings_MapEditorSettings___ctor(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  int32_t iVar1;
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  Settings_IntSetting_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  
  if (g_data_057ad874 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ad874 = '\x01';
  }
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this_00,defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this_00->fields).MaxLength = 100;
  (__this->fields).CurrentMap = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CurrentMap,__this_00);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x437a0000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraMoveSpeed = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CameraMoveSpeed,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x42480000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraSlowMoveSpeed = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CameraSlowMoveSpeed,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x443b8000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraFastMoveSpeed = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CameraFastMoveSpeed,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x43960000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraRotateSpeed = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CameraRotateSpeed,pSVar2);
  __this_01 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (__this_01->fields).MinValue = -0x80000000;
  (__this_01->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)__this_01,MethodInfo_TypedSetting_1_System_Int32);
  (__this_01->fields).MinValue = 10;
  (__this_01->fields).MaxValue = 1000000;
  iVar1 = (*(__this_01->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this_01,0x5dc,(__this_01->klass->vtable)._10_SanitizeValue.method);
  (__this_01->fields).DefaultValue = iVar1;
  (*(__this_01->klass->vtable)._4_SetDefault.methodPtr)
            (__this_01,(__this_01->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderDistance = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RenderDistance,__this_01);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x41200000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapMove = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SnapMove,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x41700000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapRotate = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SnapRotate,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x3dcccccd,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapScale = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SnapScale,pSVar2);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar2,MethodInfo_TypedSetting_1_System_Single);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (float)(*(pSVar2->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x42480000,pSVar2,(pSVar2->klass->vtable)._10_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).PlacementDistance = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PlacementDistance,pSVar2);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)method_00,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).PlaceOnFirstSurface = (Settings_BoolSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PlaceOnFirstSurface);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,method_00);
  return;
}


