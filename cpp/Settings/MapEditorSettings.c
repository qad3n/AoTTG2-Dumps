// Type: Settings.MapEditorSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/MapEditorSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// --------------------------------

// Settings.MapEditorSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorSettings__get_FileName (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x5b50f60

System_String_o *
Settings_MapEditorSettings__get_FileName(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.json");
    Il2CppMethodInitialized_075472b4 = '\x01';
  }
  return "MapEditor.json";
}


// Settings.MapEditorSettings$$get_CurrentVersion
// il2cpp: int32_t Settings_MapEditorSettings__get_CurrentVersion (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x5b50f90

int32_t Settings_MapEditorSettings__get_CurrentVersion
                  (Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  return 1;
}


// Settings.MapEditorSettings$$Migrate
// il2cpp: bool Settings_MapEditorSettings__Migrate (Settings_MapEditorSettings_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x5b50fa0

bool Settings_MapEditorSettings__Migrate
               (Settings_MapEditorSettings_o *__this,int32_t fromVersion,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_IntSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075472b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistance");
    Il2CppMethodInitialized_075472b5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05b5101f:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)"RenderDistance",
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if ((bVar2) && (fromVersion < 1)) {
    pSVar1 = (__this->fields).RenderDistance;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_05b5101f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
  }
  return bVar2;
}


// Settings.MapEditorSettings$$Apply
// il2cpp: void Settings_MapEditorSettings__Apply (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x5b51030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b510d8: jmp 0x5b51136

void Settings_MapEditorSettings__Apply(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Cameras_MapEditorCamera_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_075472b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MapEditorCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075472b6 = '\x01';
  }
  __this_00 = (Cameras_MapEditorCamera_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this_00 != (Cameras_MapEditorCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_MapEditorCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Cameras_MapEditorCamera)) {
      Cameras_MapEditorCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
      uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05b510c6;
    }
  }
  uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
joined_r0x05b510c6:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_01 = *(UI_MapEditorMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_MapEditorMenu)->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      UI_MapEditorMenu__ApplyHUDScale(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.MapEditorSettings$$.ctor
// il2cpp: void Settings_MapEditorSettings___ctor (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x5b51140

void Settings_MapEditorSettings___ctor(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  int32_t iVar1;
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  Settings_IntSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  float fVar3;
  
  if (Il2CppMethodInitialized_075472b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_075472b7 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,100,(MethodInfo *)0x0);
  (__this->fields).CurrentMap = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentMap);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,250.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraMoveSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraMoveSpeed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,50.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraSlowMoveSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraSlowMoveSpeed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,750.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraFastMoveSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraFastMoveSpeed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,300.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraRotateSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraRotateSpeed);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (__this_01->fields).MinValue = -0x80000000;
  (__this_01->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)__this_01,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (__this_01->fields).MinValue = 10;
  (__this_01->fields).MaxValue = 1000000;
  iVar1 = (*(__this_01->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this_01,10000,(__this_01->klass->vtable)._11_SanitizeValue.method);
  (__this_01->fields).DefaultValue = iVar1;
  (*(__this_01->klass->vtable)._4_SetDefault.methodPtr)
            (__this_01,(__this_01->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderDistance = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RenderDistance);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,10.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapMove = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapMove);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,15.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapRotate = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapRotate);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0.1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapScale = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapScale);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,50.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).PlacementDistance = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlacementDistance);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this_02,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).PlaceOnFirstSurface = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlaceOnFirstSurface);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 150.0;
  (pSVar2->fields).MaxValue = 600.0;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,325.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).HierarchyPanelWidth = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HierarchyPanelWidth);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 200.0;
  (pSVar2->fields).MaxValue = 700.0;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,400.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).InspectorPanelWidth = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorPanelWidth);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.4;
  (pSVar2->fields).MaxValue = 2.0;
  fVar3 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar3;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).HUDScale = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HUDScale);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


