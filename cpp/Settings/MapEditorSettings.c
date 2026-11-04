// Type: Settings.MapEditorSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/MapEditorSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// --------------------------------

// Settings.MapEditorSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorSettings__get_FileName (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x181f21ca0

System_String_o *
Settings_MapEditorSettings__get_FileName(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434546a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.json");
    Il2CppMethodInitialized_18434546a = '\x01';
  }
  return "MapEditor.json";
}


// Settings.MapEditorSettings$$get_CurrentVersion
// il2cpp: int32_t Settings_MapEditorSettings__get_CurrentVersion (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Settings_MapEditorSettings__get_CurrentVersion(Settings_MapEditorSettings_o* __this, MethodInfo* method)

{
  return 1;
}


// Settings.MapEditorSettings$$Migrate
// il2cpp: bool Settings_MapEditorSettings__Migrate (Settings_MapEditorSettings_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x181f214c0

bool Settings_MapEditorSettings__Migrate
               (Settings_MapEditorSettings_o *__this,int32_t fromVersion,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_IntSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434546b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistance");
    Il2CppMethodInitialized_18434546b = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)"RenderDistance",
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar2) {
      return false;
    }
    pSVar1 = (__this->fields).RenderDistance;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Settings.MapEditorSettings$$Apply
// il2cpp: void Settings_MapEditorSettings__Apply (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x181f21380

void Settings_MapEditorSettings__Apply(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_BaseCamera_c *pCVar3;
  Cameras_MapEditorCamera_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_18434546c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MapEditorCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434546c = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Cameras_MapEditorCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Cameras_MapEditorCamera))
    {
      __this_00 = (Cameras_MapEditorCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      bVar1 = (TypeInfo_Cameras_MapEditorCamera->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Cameras_MapEditorCamera)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Cameras_MapEditorCamera);
      }
      Cameras_MapEditorCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_MapEditorMenu
       )) {
      UI_MapEditorMenu__ApplyHUDScale(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.MapEditorSettings$$.ctor
// il2cpp: void Settings_MapEditorSettings___ctor (Settings_MapEditorSettings_o* __this, const MethodInfo* method);
// 0x181f21540

void Settings_MapEditorSettings___ctor(Settings_MapEditorSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  Settings_FloatSetting_c *pSVar1;
  Settings_IntSetting_c *pSVar2;
  int32_t iVar3;
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar4;
  Settings_IntSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434546d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_18434546d = '\x01';
  }
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this_00,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this_00->fields).MaxLength = 100;
  (__this->fields).CurrentMap = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentMap,__this_00);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,250.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).CameraMoveSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraMoveSpeed,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,50.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).CameraSlowMoveSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraSlowMoveSpeed,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,750.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).CameraFastMoveSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraFastMoveSpeed,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,300.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).CameraRotateSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraRotateSpeed,pSVar4);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (__this_01->fields).MinValue = -0x80000000;
  (__this_01->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this_01,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar2 = __this_01->klass;
  (__this_01->fields).MinValue = 10;
  (__this_01->fields).MaxValue = 1000000;
  iVar3 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (__this_01,10000,(pSVar2->vtable)._11_SanitizeValue.method);
  (__this_01->fields).DefaultValue = iVar3;
  (*(__this_01->klass->vtable)._4_SetDefault.methodPtr)
            (__this_01,(__this_01->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderDistance = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RenderDistance,__this_01);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,10.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).SnapMove = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapMove,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,15.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).SnapRotate = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapRotate,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0.1,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).SnapScale = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapScale,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,50.0,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar1->vtable)._4_SetDefault.method);
  (__this->fields).PlacementDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlacementDistance,pSVar4);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_02,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).PlaceOnFirstSurface = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlaceOnFirstSurface,__this_02);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,325.0,150.0,600.0,(MethodInfo *)0x0);
  (__this->fields).HierarchyPanelWidth = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HierarchyPanelWidth,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,400.0,200.0,700.0,(MethodInfo *)0x0);
  (__this->fields).InspectorPanelWidth = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorPanelWidth,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.4,2.0,(MethodInfo *)0x0);
  (__this->fields).HUDScale = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HUDScale,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


