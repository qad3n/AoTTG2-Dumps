// Type: UI.MapEditorTopPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorTopPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs
// --------------------------------

// UI.MapEditorTopPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTopPanel___c___cctor (const MethodInfo* method);
// 0x1822ea960

void UI_MapEditorTopPanel___c___cctor(MethodInfo *method)

{
  UI_MapEditorTopPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184347608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c);
    Il2CppMethodInitialized_184347608 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorTopPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c___ctor (UI_MapEditorTopPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c___ctor(UI_MapEditorTopPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c$$<OnFileClick>b__48_8
// il2cpp: System_String_o* UI_MapEditorTopPanel___c___OnFileClick_b__48_8 (UI_MapEditorTopPanel___c_o* __this, System_String_o* c, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
UI_MapEditorTopPanel___c___OnFileClick_b__48_8(UI_MapEditorTopPanel___c_o* __this, System_String_o* c, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// UI.MapEditorTopPanel.<>c$$<Autosave>b__50_0
// il2cpp: System_DateTime_o UI_MapEditorTopPanel___c___Autosave_b__50_0 (UI_MapEditorTopPanel___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x18203d0e0

System_DateTime_o
UI_MapEditorTopPanel___c___Autosave_b__50_0
          (UI_MapEditorTopPanel___c_o *__this,System_IO_FileInfo_o *x,MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (x != (System_IO_FileInfo_o *)0x0) {
    SVar1 = System_IO_FileSystemInfo__get_LastWriteTime((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
    return (System_DateTime_o)SVar1.fields._dateData;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass78_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass78_0___ctor (UI_MapEditorTopPanel___c__DisplayClass78_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c__DisplayClass78_0___ctor(UI_MapEditorTopPanel___c__DisplayClass78_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass78_0$$<OnOpenFinish>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass78_0___OnOpenFinish_b__0 (UI_MapEditorTopPanel___c__DisplayClass78_0_o* __this, const MethodInfo* method);
// 0x1822ea4e0

void UI_MapEditorTopPanel___c__DisplayClass78_0___OnOpenFinish_b__0
               (UI_MapEditorTopPanel___c__DisplayClass78_0_o *__this,MethodInfo *method)

{
  System_String_o *name;
  Map_MapScript_o *script;
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *__this_00;
  Settings_MapEditorSettings_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184347609 = '\x01';
  }
  name = (__this->fields).mapName;
  script = (__this->fields).script;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorTopPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._currentMap, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(__this->fields).mapName,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (pSVar2 != (Settings_MapEditorSettings_o *)0x0) {
      (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
      ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass80_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass80_0___ctor (UI_MapEditorTopPanel___c__DisplayClass80_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c__DisplayClass80_0___ctor(UI_MapEditorTopPanel___c__DisplayClass80_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass80_0$$<OnImportConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass80_0___OnImportConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass80_0_o* __this, const MethodInfo* method);
// 0x1822ea5f0

void UI_MapEditorTopPanel___c__DisplayClass80_0___OnImportConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass80_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  Map_MapScript_o *script;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434760a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434760a = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorTopPanel_o *)0x0) &&
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    script = (__this->fields).script;
    name = (pSVar2->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
    ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass83_0___ctor (UI_MapEditorTopPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c__DisplayClass83_0___ctor(UI_MapEditorTopPanel___c__DisplayClass83_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$<OnImportPresetConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass83_0___OnImportPresetConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x1822ea690

void UI_MapEditorTopPanel___c__DisplayClass83_0___OnImportPresetConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  Map_MapScript_o *script;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434760b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434760b = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorTopPanel_o *)0x0) &&
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    script = (__this->fields).script;
    name = (pSVar2->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
    ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass84_0___ctor (UI_MapEditorTopPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c__DisplayClass84_0___ctor(UI_MapEditorTopPanel___c__DisplayClass84_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$<OnImportAutosaveConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass84_0___OnImportAutosaveConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x1822ea730

void UI_MapEditorTopPanel___c__DisplayClass84_0___OnImportAutosaveConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  Map_MapScript_o *script;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434760c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434760c = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorTopPanel_o *)0x0) &&
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    script = (__this->fields).script;
    name = (pSVar2->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
    ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass85_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass85_0___ctor (UI_MapEditorTopPanel___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTopPanel___c__DisplayClass85_0___ctor(UI_MapEditorTopPanel___c__DisplayClass85_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass85_0$$<ContinueAfterVersionConfirmation>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass85_0___ContinueAfterVersionConfirmation_b__0 (UI_MapEditorTopPanel___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x1822ea7d0

void UI_MapEditorTopPanel___c__DisplayClass85_0___ContinueAfterVersionConfirmation_b__0
               (UI_MapEditorTopPanel___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapVersionConversionResult_o *pMVar2;
  System_String_o *version;
  System_String_o *map;
  System_String_o *name;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434760d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_18434760d = '\x01';
  }
  pMVar1 = (__this->fields).script;
  if ((pMVar1 != (Map_MapScript_o *)0x0) &&
     (pMVar2 = (pMVar1->fields)._LastUpgradeResult_k__BackingField,
     pMVar2 != (Map_MapVersionConversionResult_o *)0x0)) {
    version = (pMVar2->fields)._OriginalVersion_k__BackingField;
    map = (pMVar1->fields)._OriginalCSV_k__BackingField;
    name = (__this->fields).backupName;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__BackupCustomMap(name,map,version,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).continuation;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$get_Width
// il2cpp: float UI_MapEditorTopPanel__get_Width (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x182236ed0

float UI_MapEditorTopPanel__get_Width(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 1960.0;
}


// UI.MapEditorTopPanel$$get_Height
// il2cpp: float UI_MapEditorTopPanel__get_Height (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1821c11c0

float
UI_MapEditorTopPanel__get_Height(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 60.0;
}


// UI.MapEditorTopPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_TopBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorTopPanel__get_TopBarHeight(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_BottomBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorTopPanel__get_BottomBarHeight(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorTopPanel__get_VerticalSpacing (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorTopPanel__get_VerticalSpacing(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_HorizontalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_MapEditorTopPanel__get_HorizontalPadding(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.MapEditorTopPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_VerticalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_MapEditorTopPanel__get_VerticalPadding(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.MapEditorTopPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorTopPanel__get_ThemePanel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbe70

System_String_o * UI_MapEditorTopPanel__get_ThemePanel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843475d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    Il2CppMethodInitialized_1843475d8 = '\x01';
  }
  return "MapEditor";
}


// UI.MapEditorTopPanel$$Setup
// il2cpp: void UI_MapEditorTopPanel__Setup (UI_MapEditorTopPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822d9ad0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822da69d: nop dword ptr [rax]
// asm:   0x1822db43f: mov rdx, qword ptr [rip + 0x1dc2582]  ; "None"

void UI_MapEditorTopPanel__Setup(UI_MapEditorTopPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_MapEditorSettings_o *pSVar4;
  Il2CppClass *pIVar5;
  Settings_IntSetting_o *pSVar6;
  System_Collections_Generic_List_DropdownSelectElement__o *pSVar7;
  UI_DropdownSelectElement_array *pUVar8;
  Settings_HashSetSetting_int__o *pSVar9;
  GameManagers_MapEditorGameManager_o *pGVar10;
  System_Object_array *pSVar11;
  Settings_StringSetting_o *pSVar12;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  Il2CppType *handle;
  bool bVar15;
  System_String_o *pSVar16;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_List_string__o *pSVar18;
  Il2CppObject *pIVar19;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar20;
  UnityEngine_Events_UnityAction_o *pUVar21;
  UI_DropdownSelectElement_o *pUVar22;
  UI_HoverTooltip_o *pUVar23;
  System_String_array *pSVar24;
  System_Type_array *components;
  System_Type_o *pSVar25;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar26;
  UI_MultiSelectDropdownElement_o *pUVar27;
  UnityEngine_UI_RawImage_o *pUVar28;
  System_Action_o *pSVar29;
  System_Collections_Generic_List_TSource__o *__this_02;
  Settings_StringSetting_o *pSVar30;
  uint uVar31;
  UI_MapEditorMenu_o *pUVar32;
  UI_MapEditorMenu_o *pUVar33;
  System_Nullable_float__Fields local_res10 [2];
  System_Nullable_float__Fields local_res20;
  System_Nullable_float__Fields local_a8;
  System_Nullable_float__Fields local_a0;
  System_Nullable_float__Fields local_98 [12];
  
  if (Il2CppMethodInitialized_1843475d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_MultiSelectDropdownElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorTopPanel_LayerOption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_10);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_11);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Setup_b__41_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Play map");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"TutorialButton");
    il2cpp_codegen_initialize_runtime_metadata(&"File");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Spacer");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLogic");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadAutosave");
    il2cpp_codegen_initialize_runtime_metadata(&"MapInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LightOff");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"Open");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Lighting");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Tools");
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LayersOn");
    il2cpp_codegen_initialize_runtime_metadata(&"Redo");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/Play");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Paste");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"Undo");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"New");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"Cut");
    il2cpp_codegen_initialize_runtime_metadata(&"Intro");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"Snap");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmo orientation");
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475d9 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar33 = (UI_MapEditorMenu_o *)0x0;
  pUVar32 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar32 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
    pUVar32 = pUVar33;
  }
  else {
    bVar2 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar32);
    }
    (__this->fields)._menu = pUVar32;
    bVar2 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar32);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar32);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (pSVar4 == (Settings_MapEditorSettings_o *)0x0) goto label_1822db8a0;
  pSVar30 = (pSVar4->fields).CurrentMap;
  (__this->fields)._currentMap = pSVar30;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentMap,pSVar30);
  pUVar32 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar32 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    pUVar32 = pUVar33;
  }
  else {
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar32);
    }
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar32;
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)pUVar32->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar32);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pUVar32);
  local_a8 = (System_Nullable_float__Fields)"MapEditor";
  pSVar16 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,pSVar16,(MethodInfo *)0x0);
  pUVar17 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_1822db8a0;
  parent_00 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
  pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar19 = SZArrayNew(TypeInfo_string_array,10);
  pSVar16 = "New";
  if (pIVar19 == (Il2CppObject *)0x0) goto label_1822db8a0;
  if (*(int *)&pIVar19[1].monitor == 0) {
label_1822db888:
    ThrowIndexOutOfRangeException();
  }
  pIVar19[2].klass = (Il2CppClass *)"New";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar16);
  pSVar16 = "Open";
  if (*(uint *)&pIVar19[1].monitor < 2) goto label_1822db888;
  pIVar19[2].monitor = "Open";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar16);
  pSVar16 = "Rename";
  if (*(uint *)&pIVar19[1].monitor < 3) goto label_1822db888;
  pIVar19[3].klass = (Il2CppClass *)"Rename";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar16);
  pSVar16 = "Save";
  if (*(uint *)&pIVar19[1].monitor < 4) goto label_1822db888;
  pIVar19[3].monitor = "Save";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].monitor,pSVar16);
  pSVar16 = "Import";
  if (*(uint *)&pIVar19[1].monitor < 5) goto label_1822db888;
  pIVar19[4].klass = (Il2CppClass *)"Import";
  Il2CppCodeGenWriteBarrier(&pIVar19[4].klass,pSVar16);
  pSVar16 = "Export";
  if (*(uint *)&pIVar19[1].monitor < 6) goto label_1822db888;
  pIVar19[4].monitor = "Export";
  Il2CppCodeGenWriteBarrier(&pIVar19[4].monitor,pSVar16);
  pSVar16 = "LoadPreset";
  if (*(uint *)&pIVar19[1].monitor < 7) goto label_1822db888;
  pIVar19[5].klass = (Il2CppClass *)"LoadPreset";
  Il2CppCodeGenWriteBarrier(&pIVar19[5].klass,pSVar16);
  pSVar16 = "LoadAutosave";
  if (*(uint *)&pIVar19[1].monitor < 8) goto label_1822db888;
  pIVar19[5].monitor = "LoadAutosave";
  Il2CppCodeGenWriteBarrier(&pIVar19[5].monitor,pSVar16);
  pSVar16 = "Quit";
  if (*(uint *)&pIVar19[1].monitor < 9) goto label_1822db888;
  pIVar19[6].klass = (Il2CppClass *)"Quit";
  Il2CppCodeGenWriteBarrier(&pIVar19[6].klass,pSVar16);
  pSVar16 = "SaveQuit";
  if (*(uint *)&pIVar19[1].monitor < 10) goto label_1822db888;
  pIVar19[6].monitor = "SaveQuit";
  Il2CppCodeGenWriteBarrier(&pIVar19[6].monitor,pSVar16);
  pUVar32 = pUVar33;
  while (uVar31 = (uint)pUVar32, (int)uVar31 < *(int *)&pIVar19[1].monitor) {
    if (*(uint *)&pIVar19[1].monitor <= uVar31) goto label_1822db888;
    pIVar5 = (&pIVar19[2].klass)[(int)uVar31];
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar16 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar5,(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar18 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822db8a0;
    piVar1 = &(pSVar18->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar24 = (pSVar18->fields)._items;
    if (pSVar24 == (System_String_array *)0x0) goto label_1822db8a0;
    uVar3 = (pSVar18->fields)._size;
    if (uVar3 < (uint)pSVar24->max_length) {
      (pSVar18->fields)._size = uVar3 + 1;
      if ((uint)pSVar24->max_length <= uVar3) goto label_1822db888;
      pSVar24->m_Items[(int)uVar3] = pSVar16;
      Il2CppCodeGenWriteBarrier(pSVar24->m_Items + (int)uVar3,pSVar16);
      pUVar32 = (UI_MapEditorMenu_o *)(ulonglong)(uVar31 + 1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar18,(Il2CppObject *)pSVar16,
                 (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
      pUVar32 = (UI_MapEditorMenu_o *)(ulonglong)(uVar31 + 1);
    }
  }
  pSVar6 = (__this->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar16 = UI_UIManager__GetLocale
                      ((System_String_o *)local_a8,"Top","File",
                       "","",(MethodInfo *)0x0);
  if (pSVar18 == (System_Collections_Generic_List_string__o *)0x0) {
label_1822db882:
    ThrowNullReferenceException();
  }
  pUVar20 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                      ((System_Collections_Generic_List_T__o *)pSVar18,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  local_res10[0].hasValue = false;
  local_res10[0]._1_3_ = 0;
  local_res10[0].value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)local_res10,180.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_0,(MethodInfo *)0x0);
  pUVar17 = UI_ElementFactory__CreateDropdownSelect
                      (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar16,
                       (System_String_array *)pUVar20,"",100.0,40.0,500.0,
                       (System_Nullable_float__o)local_res10[0],pUVar21,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_1822db882;
  pSVar7 = (__this->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar17,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar13 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_1822db882;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_1822db882;
  uVar31 = (pSVar7->fields)._size;
  if (uVar31 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar31 + 1;
    if ((uint)pUVar8->max_length <= uVar31) goto label_1822db87c;
    pUVar8->m_Items[(int)uVar31] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar31,pUVar22);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
  }
  pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar19 = SZArrayNew(TypeInfo_string_array,6);
  pSVar16 = "Undo";
  if (pIVar19 == (Il2CppObject *)0x0) goto label_1822db882;
  if (*(int *)&pIVar19[1].monitor == 0) {
label_1822db87c:
    ThrowIndexOutOfRangeException();
  }
  pIVar19[2].klass = (Il2CppClass *)"Undo";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar16);
  pSVar16 = "Redo";
  if (*(uint *)&pIVar19[1].monitor < 2) goto label_1822db87c;
  pIVar19[2].monitor = "Redo";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar16);
  pSVar16 = "Copy";
  if (*(uint *)&pIVar19[1].monitor < 3) goto label_1822db87c;
  pIVar19[3].klass = (Il2CppClass *)"Copy";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar16);
  pSVar16 = "Paste";
  if (*(uint *)&pIVar19[1].monitor < 4) goto label_1822db87c;
  pIVar19[3].monitor = "Paste";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].monitor,pSVar16);
  pSVar16 = "Cut";
  if (*(uint *)&pIVar19[1].monitor < 5) goto label_1822db87c;
  pIVar19[4].klass = (Il2CppClass *)"Cut";
  Il2CppCodeGenWriteBarrier(&pIVar19[4].klass,pSVar16);
  pSVar16 = "Delete";
  if (*(uint *)&pIVar19[1].monitor < 6) goto label_1822db87c;
  pIVar19[4].monitor = "Delete";
  Il2CppCodeGenWriteBarrier(&pIVar19[4].monitor,pSVar16);
  while (uVar31 = (uint)pUVar33, (int)uVar31 < *(int *)&pIVar19[1].monitor) {
    if (*(uint *)&pIVar19[1].monitor <= uVar31) goto label_1822db888;
    pIVar5 = (&pIVar19[2].klass)[(int)uVar31];
    bVar15 = System_String__op_Equality((System_String_o *)pIVar5,"Copy",(MethodInfo *)0x0);
    if ((bVar15) ||
       (bVar15 = System_String__op_Equality((System_String_o *)pIVar5,"Delete",(MethodInfo *)0x0)
       , bVar15)) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__GetLocaleCommon((System_String_o *)pIVar5,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__GetLocale
                ("MapEditorSettings","Keybinds",(System_String_o *)pIVar5,"",
                 "",(MethodInfo *)0x0);
    }
    if (pSVar18 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822db8a0;
    il2cpp_runtime_helper_180012890(pSVar18);
    pUVar33 = (UI_MapEditorMenu_o *)(ulonglong)(uVar31 + 1);
  }
  pSVar6 = (__this->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar16 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  if (pSVar18 == (System_Collections_Generic_List_string__o *)0x0) {
label_1822db876:
    ThrowNullReferenceException();
  }
  pUVar20 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                      ((System_Collections_Generic_List_T__o *)pSVar18,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  local_res20.hasValue = false;
  local_res20._1_3_ = 0;
  local_res20.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_res20,180.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_1,(MethodInfo *)0x0);
  pUVar17 = UI_ElementFactory__CreateDropdownSelect
                      (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar16,
                       (System_String_array *)pUVar20,"",100.0,40.0,500.0,
                       (System_Nullable_float__o)local_res20,pUVar21,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_1822db876;
  pSVar7 = (__this->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar17,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar13 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_1822db876;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_1822db876;
  uVar31 = (pSVar7->fields)._size;
  if (uVar31 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar31 + 1;
    if ((uint)pUVar8->max_length <= uVar31) goto label_1822db870;
    pUVar8->m_Items[(int)uVar31] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar31,pUVar22);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
  }
  pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar19 = SZArrayNew(TypeInfo_string_array,5);
  pSVar16 = "Editor";
  if (pIVar19 == (Il2CppObject *)0x0) goto label_1822db876;
  if (*(int *)&pIVar19[1].monitor == 0) {
label_1822db870:
    ThrowIndexOutOfRangeException();
  }
  pIVar19[2].klass = (Il2CppClass *)"Editor";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar16);
  pSVar16 = "MapInfo";
  if (*(uint *)&pIVar19[1].monitor < 2) goto label_1822db870;
  pIVar19[2].monitor = "MapInfo";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar16);
  pSVar16 = "Weather";
  if (*(uint *)&pIVar19[1].monitor < 3) goto label_1822db870;
  pIVar19[3].klass = (Il2CppClass *)"Weather";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar16);
  pSVar16 = "CustomLogic";
  if (*(uint *)&pIVar19[1].monitor < 4) goto label_1822db870;
  pIVar19[3].monitor = "CustomLogic";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].monitor,pSVar16);
  pSVar16 = "CustomAssets";
  if (*(uint *)&pIVar19[1].monitor < 5) goto label_1822db870;
  pIVar19[4].klass = (Il2CppClass *)"CustomAssets";
  Il2CppCodeGenWriteBarrier(&pIVar19[4].klass,pSVar16);
  uVar31 = 0;
  while ((int)uVar31 < *(int *)&pIVar19[1].monitor) {
    if (*(uint *)&pIVar19[1].monitor <= uVar31) goto label_1822db888;
    pIVar5 = (&pIVar19[2].klass)[(int)uVar31];
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar16 = UI_UIManager__GetLocale
                        ((System_String_o *)local_a8,"Top",(System_String_o *)pIVar5,
                         "","",(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar18 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822db8a0;
    piVar1 = &(pSVar18->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar24 = (pSVar18->fields)._items;
    if (pSVar24 == (System_String_array *)0x0) goto label_1822db8a0;
    uVar3 = (pSVar18->fields)._size;
    if (uVar3 < (uint)pSVar24->max_length) {
      (pSVar18->fields)._size = uVar3 + 1;
      if ((uint)pSVar24->max_length <= uVar3) goto label_1822db888;
      pSVar24->m_Items[(int)uVar3] = pSVar16;
      Il2CppCodeGenWriteBarrier(pSVar24->m_Items + (int)uVar3,pSVar16);
      uVar31 = uVar31 + 1;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar18,(Il2CppObject *)pSVar16,
                 (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
      uVar31 = uVar31 + 1;
    }
  }
  pSVar6 = (__this->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar16 = UI_UIManager__GetLocaleCommon("Options",(MethodInfo *)0x0);
  if (pSVar18 != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar20 = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)pSVar18,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    local_res10[0].hasValue = false;
    local_res10[0]._1_3_ = 0;
    local_res10[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_res10,180.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_2,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__CreateDropdownSelect
                        (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar16,
                         (System_String_array *)pUVar20,"",130.0,40.0,500.0,
                         (System_Nullable_float__o)local_res10[0],pUVar21,(MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_1822db86a;
    pSVar7 = (__this->fields)._dropdowns;
    pUVar22 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar17,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
    pMVar13 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
    if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_1822db86a;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar8 = (pSVar7->fields)._items;
    if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_1822db86a;
    uVar31 = (pSVar7->fields)._size;
    if (uVar31 < (uint)pUVar8->max_length) {
      (pSVar7->fields)._size = uVar31 + 1;
      if ((uint)pUVar8->max_length <= uVar31) goto label_1822db864;
      pUVar8->m_Items[(int)uVar31] = pUVar22;
      Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar31,pUVar22);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
                 (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
    }
    pSVar16 = UI_UIManager__GetLocale
                        ("MapEditorSettings","Keybinds","AddObject",
                         "","",(MethodInfo *)0x0);
    pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_3,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(parent_00,__this_00,pSVar16,0.0,40.0,pUVar21,(MethodInfo *)0x0);
    pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_4,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__CreateDefaultButton
                        (parent_00,__this_00,"Center",88.0,40.0,pUVar21,(MethodInfo *)0x0);
    (__this->fields)._gizmoOrientationButton = pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gizmoOrientationButton,pUVar17);
    pUVar17 = (__this->fields)._gizmoOrientationButton;
    if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar23 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar17,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip),
       pUVar23 != (UI_HoverTooltip_o *)0x0)) {
      (pUVar23->fields).Message = "Gizmo orientation";
      Il2CppCodeGenWriteBarrier(&(pUVar23->fields).Message,"Gizmo orientation");
      pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_5,(MethodInfo *)0x0);
      pUVar17 = UI_ElementFactory__CreateDefaultButton
                          (parent_00,__this_00,"Snap",72.0,40.0,pUVar21,(MethodInfo *)0x0);
      (__this->fields)._snapButton = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._snapButton,pUVar17);
      pSVar6 = (__this->fields)._toolDropdownSelection;
      pSVar24 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
      pSVar16 = "Camera";
      if (pSVar24 != (System_String_array *)0x0) {
        if ((int)pSVar24->max_length != 0) {
          pSVar24->m_Items[0] = "Camera";
          Il2CppCodeGenWriteBarrier(pSVar24->m_Items,pSVar16);
          pSVar16 = "Brush";
          if (1 < (uint)pSVar24->max_length) {
            pSVar24->m_Items[1] = "Brush";
            Il2CppCodeGenWriteBarrier(pSVar24->m_Items + 1,pSVar16);
            pSVar16 = "Ruler";
            if (2 < (uint)pSVar24->max_length) {
              pSVar24->m_Items[2] = "Ruler";
              Il2CppCodeGenWriteBarrier(pSVar24->m_Items + 2,pSVar16);
              pSVar16 = UI_UIManager__GetLocale
                                  ("MainMenu","Intro","TutorialButton",
                                   "","",(MethodInfo *)0x0);
              if (3 < (uint)pSVar24->max_length) {
                pSVar24->m_Items[3] = pSVar16;
                Il2CppCodeGenWriteBarrier(pSVar24->m_Items + 3,pSVar16);
                local_a8.hasValue = false;
                local_a8._1_3_ = 0;
                local_a8.value = 0.0;
                System_Nullable_float____ctor
                          ((System_Nullable_float__o *)&local_a8,120.0,
                           (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_6,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__CreateDropdownSelect
                                    (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar6,
                                     "Tools",pSVar24,"",90.0,40.0,200.0,
                                     (System_Nullable_float__o)local_a8,pUVar21,(MethodInfo *)0x0);
                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                  pSVar7 = (__this->fields)._dropdowns;
                  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar17,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement
                                      );
                  pMVar13 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
                  if (pSVar7 != (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) {
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar8 = (pSVar7->fields)._items;
                    if (pUVar8 != (UI_DropdownSelectElement_array *)0x0) {
                      uVar31 = (pSVar7->fields)._size;
                      if (uVar31 < (uint)pUVar8->max_length) {
                        (pSVar7->fields)._size = uVar31 + 1;
                        if ((uint)pUVar8->max_length <= uVar31) goto label_1822db864;
                        pUVar8->m_Items[(int)uVar31] = pUVar22;
                        Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar31,pUVar22);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22
                                   ,(MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
                      }
                      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                      handle = TypeRef_UnityEngine_RectTransform;
                      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                      }
                      pSVar25 = System_Type__GetTypeFromHandle
                                          ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
                      if (components != (System_Type_array *)0x0) {
                        if ((pSVar25 != (System_Type_o *)0x0) &&
                           (pIVar19 = il2cpp_vm_Object_IsInst
                                                ((Il2CppObject *)pSVar25,
                                                 (((components->obj).klass)->_1).element_class),
                           pIVar19 == (Il2CppObject *)0x0)) {
                          pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
                        }
                        if ((int)components->max_length != 0) {
                          components->m_Items[0] = pSVar25;
                          Il2CppCodeGenWriteBarrier(components->m_Items,pSVar25);
                          pSVar25 = System_Type__GetTypeFromHandle
                                              ((System_RuntimeTypeHandle_o)
                                               TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
                          if ((pSVar25 != (System_Type_o *)0x0) &&
                             (pIVar19 = il2cpp_vm_Object_IsInst
                                                  ((Il2CppObject *)pSVar25,
                                                   (((components->obj).klass)->_1).element_class),
                             pIVar19 == (Il2CppObject *)0x0)) {
                            pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
                          }
                          if (1 < (uint)components->max_length) {
                            components->m_Items[1] = pSVar25;
                            Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar25);
                            pUVar17 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor_2f1abe0
                                      (pUVar17,"Spacer",components,(MethodInfo *)0x0);
                            if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                               (__this_01 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                               __this_01 != (UnityEngine_Transform_o *)0x0)) {
                              UnityEngine_Transform__SetParent_2f5a7e0
                                        (__this_01,parent_00,false,(MethodInfo *)0x0);
                              pUVar26 = UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                  );
                              if (pUVar26 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar26->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                          (pUVar26,1.0,(pUVar26->klass->vtable)._40_set_flexibleWidth.method);
                                if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
                                }
                                pSVar9 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
                                pSVar16 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                                pSVar24 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                                pSVar14 = "X";
                                if (pSVar24 != (System_String_array *)0x0) {
                                  if ((int)pSVar24->max_length != 0) {
                                    pSVar24->m_Items[0] = "X";
                                    Il2CppCodeGenWriteBarrier(pSVar24->m_Items,pSVar14);
                                    pSVar14 = "Y";
                                    if (1 < (uint)pSVar24->max_length) {
                                      pSVar24->m_Items[1] = "Y";
                                      Il2CppCodeGenWriteBarrier(pSVar24->m_Items + 1,pSVar14);
                                      pSVar14 = "Z";
                                      if (2 < (uint)pSVar24->max_length) {
                                        pSVar24->m_Items[2] = "Z";
                                        Il2CppCodeGenWriteBarrier(pSVar24->m_Items + 2,pSVar14);
                                        local_a0.hasValue = false;
                                        local_a0._1_3_ = 0;
                                        local_a0.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_a0,100.0,
                                                   (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor)
                                        ;
                                        pUVar21 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UnityEngine_Events_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor
                                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,
                                                   (Il2CppObject *)__this,
                                                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_7,
                                                   (MethodInfo *)0x0);
                                        pUVar17 = UI_ElementFactory__CreateMultiSelectDropdown
                                                            (parent_00,__this_00,pSVar9,pSVar16,pSVar24,
                                                             "",64.0,40.0,160.0,
                                                             (System_Nullable_float__o)local_a0,pUVar21,
                                                             (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                                              (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_MultiSelectDropdownElement
                                                       );
                                          (__this->fields)._gridDropdown = pUVar27;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._gridDropdown,pUVar27);
                                          pUVar28 = UI_MapEditorTopPanel__AddDropdownIcon
                                                              (__this,pUVar17,"Icons/Navigation/GridOff",
                                                               (MethodInfo *)0x0);
                                          (__this->fields)._gridIcon = pUVar28;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._gridIcon,pUVar28);
                                          pSVar29 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)TypeInfo_System_Action);
                                          System_Action___ctor
                                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar29,
                                                     (Il2CppObject *)__this,
                                                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_8,
                                                     (MethodInfo *)0x0);
                                          pUVar17 = UI_MapEditorTopPanel__CreateStateIconButton
                                                              (__this,parent_00,"Icons/Navigation/LightOff",
                                                               "Lighting",pSVar29,(MethodInfo *)0x0
                                                              );
                                          (__this->fields)._lightButton = pUVar17;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._lightButton,pUVar17);
                                          pSVar9 = TypeInfo_UI_MapEditorTopPanel->static_fields->
                                                   _layerSelection;
                                          pSVar16 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                                          ;
                                          pSVar25 = System_Type__GetTypeFromHandle
                                                              ((System_RuntimeTypeHandle_o)
                                                               TypeRef_UI_MapEditorTopPanel_LayerOption,
                                                               (MethodInfo *)0x0);
                                          if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init(g_data_184354e58);
                                          }
                                          pSVar24 = System_Enum__GetNames(pSVar25,(MethodInfo *)0x0);
                                          local_98[0].hasValue = false;
                                          local_98[0]._1_3_ = 0;
                                          local_98[0].value = 0.0;
                                          System_Nullable_float____ctor
                                                    ((System_Nullable_float__o *)local_98,180.0,
                                                     (MethodInfo_AE2920 *)
                                                     MethodInfo_System_Nullable_float_ctor);
                                          pUVar21 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UnityEngine_Events_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor
                                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21,
                                                     (Il2CppObject *)__this,
                                                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_9,
                                                     (MethodInfo *)0x0);
                                          pUVar17 = UI_ElementFactory__CreateMultiSelectDropdown
                                                              (parent_00,__this_00,pSVar9,pSVar16,pSVar24,
                                                               "",64.0,40.0,500.0,
                                                               (System_Nullable_float__o)local_98[0],pUVar21,
                                                               (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_MultiSelectDropdownElement
                                                       );
                                            (__this->fields)._layerDropdown = pUVar27;
                                            Il2CppCodeGenWriteBarrier
                                                      (&(__this->fields)._layerDropdown,pUVar27);
                                            pUVar28 = UI_MapEditorTopPanel__AddDropdownIcon
                                                                (__this,pUVar17,"Icons/Navigation/LayersOn",
                                                                 (MethodInfo *)0x0);
                                            (__this->fields)._layersIcon = pUVar28;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields)._layersIcon,pUVar28);
                                            pSVar30 = (__this->fields)._currentMap;
                                            if (pSVar30 != (Settings_StringSetting_o *)0x0) {
                                              pSVar16 = System_String__Concat_1969e50
                                                                  ((pSVar30->fields)._value,
                                                                   ".txt",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateDefaultLabel
                                                        (parent_00,__this_00,pSVar16,0,4,(MethodInfo *)0x0);
                                              pGVar10 = (__this->fields)._gameManager;
                                              if (pGVar10 != (GameManagers_MapEditorGameManager_o *)0x0) {
                                                if ((pGVar10->fields).MapScript == (Map_MapScript_o *)0x0) {
                                                  pSVar30 = (__this->fields)._playMode;
                                                  pSVar16 = "None";
                                                }
                                                else {
                                                  bVar15 = System_String__IsNullOrWhiteSpace
                                                                     ((((((__this->fields)._gameManager)->
                                                                        fields).MapScript)->fields).Logic,
                                                                      (MethodInfo *)0x0);
                                                  pSVar30 = (__this->fields)._playMode;
                                                  pSVar16 = "None";
                                                  if (!bVar15) {
                                                    if ((TypeInfo_Map_BuiltinLevels->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                                                    }
                                                    pSVar16 = TypeInfo_Map_BuiltinLevels->static_fields->
                                                              UseMapLogic;
                                                  }
                                                }
                                                if (pSVar30 != (Settings_StringSetting_o *)0x0) {
                                                  Settings_TypedSetting_object___set_Value
                                                            ((Settings_TypedSetting_T__o *)pSVar30,
                                                             (Il2CppObject *)pSVar16,
                                                             (MethodInfo_E8F4C0 *)
                                                             MethodInfo_Settings_TypedSetting_string_set_Value
                                                            );
                                                  pSVar30 = (__this->fields)._currentMap;
                                                  if (pSVar30 != (Settings_StringSetting_o *)0x0) {
                                                    pSVar16 = (pSVar30->fields)._value;
                                                    if ((TypeInfo_Map_BuiltinLevels->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                                                    }
                                                    pSVar24 = Map_BuiltinLevels__GetGameModes
                                                                        ("Custom",pSVar16,true,
                                                                         (MethodInfo *)0x0);
                                                    __this_02 = System_Linq_Enumerable__ToList_object_
                                                                          ((
                                                       System_Collections_Generic_IEnumerable_TSource__o *)
                                                       pSVar24,(MethodInfo_6C9C10 *)
                                                               MethodInfo_System_Linq_Enumerable_ToList_string
                                                       );
                                                    if (__this_02 !=
                                                        (System_Collections_Generic_List_TSource__o *)0x0) {
                                                      bVar15 = 
                                                       System_Collections_Generic_List_object___Contains
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_02,
                                                                  (Il2CppObject *)"None",
                                                                  (MethodInfo_93FC70 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_Contains
                                                       );
                                                      pMVar13 = 
                                                      MethodInfo_System_Collections_Generic_List_string_Add;
                                                      pSVar16 = "None";
                                                      if (!bVar15) {
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar11 = (__this_02->fields)._items;
                                                        if (pSVar11 == (System_Object_array *)0x0)
                                                        goto label_1822db8a0;
                                                        uVar31 = (__this_02->fields)._size;
                                                        if (uVar31 < (uint)pSVar11->max_length) {
                                                          (__this_02->fields)._size = uVar31 + 1;
                                                          if ((uint)pSVar11->max_length <= uVar31)
                                                          goto label_1822db888;
                                                          pSVar11->m_Items[(int)uVar31] =
                                                               (Il2CppObject *)pSVar16;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar11->m_Items + (int)uVar31,pSVar16);
                                                        }
                                                        else {
                                                                                                                    
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_02,(Il2CppObject *)pSVar16,
                                                                  (MethodInfo_93DD50 *)
                                                                  pMVar13->klass->rgctx_data[0xe].method);
                                                       }
                                                      }
                                                      pSVar30 = (__this->fields)._playMode;
                                                      if (Il2CppMethodInitialized_1843475f0 == '\0') {
                                                        il2cpp_codegen_initialize_runtime_metadata
                                                                  (&
                                                       MethodInfo_Settings_TypedSetting_string_get_Value);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"Mode: ");
                                                       Il2CppMethodInitialized_1843475f0 = '\x01';
                                                      }
                                                      pSVar12 = (__this->fields)._playMode;
                                                      if (pSVar12 != (Settings_StringSetting_o *)0x0) {
                                                        pSVar16 = System_String__Concat_1969e50
                                                                            ("Mode: ",
                                                                             (pSVar12->fields)._value,
                                                                             (MethodInfo *)0x0);
                                                        pUVar20 = 
                                                       System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                                                 ((System_Collections_Generic_List_T__o *)
                                                                  __this_02,
                                                                  (MethodInfo_929FE0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_ToArray
                                                       );
                                                       local_res10[0].hasValue = false;
                                                       local_res10[0]._1_3_ = 0;
                                                       local_res10[0].value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)local_res10,
                                                                  180.0,(MethodInfo_AE2920 *)
                                                                        MethodInfo_System_Nullable_float_ctor)
                                                       ;
                                                       pUVar21 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar21
                                                       ,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_MapEditorTopPanel_Setup_b__41_10,
                                                       (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDropdownSelect
                                                                           (parent_00,__this_00,
                                                                            (Settings_BaseSetting_o *)pSVar30,
                                                                            pSVar16,(System_String_array *)
                                                                                    pUVar20,
                                                                            "",130.0,40.0,
                                                                            500.0,(System_Nullable_float__o)
                                                                                  local_res10[0],pUVar21,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar22 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement
                                                       );
                                                       (__this->fields)._playModeDropdown = pUVar22;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._playModeDropdown,pUVar22)
                                                       ;
                                                       pMVar13 = 
                                                       MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add
                                                       ;
                                                       pSVar7 = (__this->fields)._dropdowns;
                                                       if (pSVar7 != (
                                                       System_Collections_Generic_List_DropdownSelectElement__o
                                                       *)0x0) {
                                                         pUVar22 = (__this->fields)._playModeDropdown;
                                                         piVar1 = &(pSVar7->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar8 = (pSVar7->fields)._items;
                                                         if (pUVar8 != (UI_DropdownSelectElement_array *)0x0)
                                                         {
                                                           uVar31 = (pSVar7->fields)._size;
                                                           if (uVar31 < (uint)pUVar8->max_length) {
                                                             (pSVar7->fields)._size = uVar31 + 1;
                                                             if ((uint)pUVar8->max_length <= uVar31) {
                                                               ThrowIndexOutOfRangeException();
                                                             }
                                                             pUVar8->m_Items[(int)uVar31] = pUVar22;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar8->m_Items + (int)uVar31,pUVar22)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar7,(Il2CppObject *)pUVar22,
                                                                  (MethodInfo_93DD50 *)
                                                                  pMVar13->klass->rgctx_data[0xe].method);
                                                       }
                                                       pSVar29 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                            TypeInfo_System_Action);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar29
                                                       ,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_MapEditorTopPanel_Setup_b__41_11,
                                                       (MethodInfo *)0x0);
                                                       pUVar17 = UI_MapEditorTopPanel__CreateStateIconButton
                                                                           (__this,parent_00,
                                                                            "Icons/Navigation/Play",
                                                                            "Play map",pSVar29,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar23 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip
                                                       );
                                                       if (pUVar23 == (UI_HoverTooltip_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       (pUVar23->fields).Offset = 4.0;
                                                       UI_MapEditorTopPanel__SetButtonActive
                                                                 (__this,pUVar17,false,false,false,
                                                                  (MethodInfo *)0x0);
                                                       UI_MapEditorTopPanel__CreateSideToolbar
                                                                 (__this,(MethodInfo *)0x0);
                                                       UI_MapEditorTopPanel__RefreshControlStates
                                                                 (__this,(MethodInfo *)0x0);
                                                       return;
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      ThrowNullReferenceException();
                                                    }
                                                  }
                                                }
label_1822db8a0:
                                                ThrowNullReferenceException();
                                              }
                                            }
                                          }
                                        }
                                        goto label_1822db86a;
                                      }
                                    }
                                  }
                                  goto label_1822db864;
                                }
                              }
                            }
                            goto label_1822db86a;
                          }
                        }
                        goto label_1822db864;
                      }
                    }
                  }
                }
                goto label_1822db86a;
              }
            }
          }
        }
label_1822db864:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822db86a:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$CreateStateIconButton
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorTopPanel__CreateStateIconButton (UI_MapEditorTopPanel_o* __this, UnityEngine_Transform_o* parent, System_String_o* icon, System_String_o* tooltip, System_Action_o* onClick, const MethodInfo* method);
// 0x1822d55e0

UnityEngine_GameObject_o *
UI_MapEditorTopPanel__CreateStateIconButton
          (UI_MapEditorTopPanel_o *__this,UnityEngine_Transform_o *parent,System_String_o *icon,
          System_String_o *tooltip,System_Action_o *onClick,MethodInfo *method)

{
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UI_HoverTooltip_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843475da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Action_Invoke);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_1843475da = '\x01';
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  if (onClick == (System_Action_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityAction_o *)0x0;
  }
  else {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)onClick,
               (intptr_t)MethodInfo_System_Action_Invoke,(MethodInfo *)0x0);
  }
  __this_02 = UI_ElementFactory__CreateIconButton(parent,__this_00,icon,36.0,36.0,__this_01,(MethodInfo *)0x0)
  ;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this_02,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    if (pUVar1 != (UI_HoverTooltip_o *)0x0) {
      (pUVar1->fields).Message = tooltip;
      Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Message,tooltip);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$AddDropdownIcon
// il2cpp: UnityEngine_UI_RawImage_o* UI_MapEditorTopPanel__AddDropdownIcon (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* dropdown, System_String_o* icon, const MethodInfo* method);
// 0x1822d4060

UnityEngine_UI_RawImage_o *
UI_MapEditorTopPanel__AddDropdownIcon
          (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *dropdown,System_String_o *icon,
          MethodInfo *method)

{
  System_String_o *path;
  Il2CppType *handle;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *pUVar6;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_1843475db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"StateIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/SelectedButton");
    Il2CppMethodInitialized_1843475db = '\x01';
  }
  if (dropdown != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(dropdown,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Dropdown/SelectedButton",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
            handle = TypeRef_UnityEngine_RectTransform;
            if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354ea0);
            }
            pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
            if (components != (System_Type_array *)0x0) {
              if (pSVar4 != (System_Type_o *)0x0) {
                pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
                if (pIVar5 == (Il2CppObject *)0x0) {
                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                }
              }
              if ((int)components->max_length != 0) {
                components->m_Items[0] = pSVar4;
                Il2CppCodeGenWriteBarrier(components->m_Items,pSVar4);
                pSVar4 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RawImage,
                                    (MethodInfo *)0x0);
                if (pSVar4 != (System_Type_o *)0x0) {
                  pIVar5 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
                  if (pIVar5 == (Il2CppObject *)0x0) {
                    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                  }
                }
                if (1 < (uint)components->max_length) {
                  components->m_Items[1] = pSVar4;
                  Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar4);
                  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                  UnityEngine_GameObject___ctor_2f1abe0
                            (pUVar3,"StateIcon",components,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,pUVar1,false,(MethodInfo *)0x0);
                      __this_00 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar3,(MethodInfo_6F5650 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                            );
                      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_anchorMin
                                  (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_sizeDelta
                                  (__this_00,(UnityEngine_Vector2_o)0x41c0000041c00000,(MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (__this_00,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        __this_01 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar3,(MethodInfo_6F5650 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_RawImage)
                        ;
                        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                        }
                        path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
                        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0
                           ) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                        }
                        pUVar6 = (UnityEngine_Texture_o *)
                                 ApplicationManagers_ResourceManager__LoadAsset
                                           (path,icon,true,(MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
                          value = (UnityEngine_Texture_o *)0x0;
                          if (pUVar6 != (UnityEngine_Texture_o *)0x0) {
                            if (pUVar6->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                              value = pUVar6;
                            }
                            if (value == (UnityEngine_Texture_o *)0x0) {
                              il2cpp_codegen_raise_invalid_cast_exception
                                        (pUVar6,TypeInfo_UnityEngine_Texture2D);
                            }
                          }
                          UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
                          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
                          return __this_01;
                        }
                      }
                    }
                  }
                  goto label_1822d43ed;
                }
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_1822d43ed:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$CreateSideToolbar
// il2cpp: void UI_MapEditorTopPanel__CreateSideToolbar (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d4ee0

void UI_MapEditorTopPanel__CreateSideToolbar(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  UI_MapEditorMenu_o *__this_00;
  UnityEngine_Object_o *x;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_MapEditorTopPanel_c *pUVar4;
  Il2CppType *handle;
  bool bVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_UI_Image_o *pUVar11;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_RectOffset_o *__this_02;
  System_Action_o *pSVar12;
  undefined4 extraout_XMM0_Da;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843475dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotate");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/Rotate");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSideToolbar");
    Il2CppMethodInitialized_1843475dc = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1822d55a1:
    ThrowNullReferenceException();
  }
  if ((pSVar6 != (System_Type_o *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar6;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar6);
    pSVar6 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar6 != (System_Type_o *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class)
       , pIVar7 == (Il2CppObject *)0x0)) {
      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar6;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar6);
      pSVar6 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                          (MethodInfo *)0x0);
      if ((pSVar6 != (System_Type_o *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar6;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar6);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar8,"MapEditorSideToolbar",components,(MethodInfo *)0x0);
        (__this->fields)._sideToolbar = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._sideToolbar,pUVar8);
        pUVar8 = (__this->fields)._sideToolbar;
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._menu;
          if ((__this_00 != (UI_MapEditorMenu_o *)0x0) &&
             (parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             pUVar9 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar9,parent,false,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._sideToolbar;
            if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar8,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
               pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar10,(UnityEngine_Vector2_o)0x4230000043020000,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._sideToolbar;
              if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar8,(MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_Image),
                 pUVar11 != (UnityEngine_UI_Image_o *)0x0)) {
                local_38[0].r = 0.0;
                local_38[0].g = 0.0;
                local_38[0].b = 0.0;
                local_38[0].a = 0.72;
                (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                          (pUVar11,(UnityEngine_Color_o *)local_38,
                           (pUVar11->klass->vtable)._23_set_color.method);
                pUVar8 = (__this->fields)._sideToolbar;
                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                  __this_01 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar8,(MethodInfo_6F5650 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup
                                        );
                  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                  UnityEngine_RectOffset___ctor_2ed1030(__this_02,6,6,4,4,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                    UnityEngine_UI_LayoutGroup__set_padding
                              ((UnityEngine_UI_LayoutGroup_o *)__this_01,__this_02,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,5.0,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,
                               (MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._sideToolbar;
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                      pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar12,
                                 (Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_0,
                                 (MethodInfo *)0x0);
                      pUVar8 = UI_MapEditorTopPanel__CreateStateIconButton
                                         (__this,pUVar9,"Icons/Navigation/Position","Position",pSVar12,
                                          (MethodInfo *)0x0);
                      (__this->fields)._positionButton = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._positionButton,pUVar8);
                      pUVar8 = (__this->fields)._sideToolbar;
                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                        pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar12,
                                   (Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_1,
                                   (MethodInfo *)0x0);
                        pUVar8 = UI_MapEditorTopPanel__CreateStateIconButton
                                           (__this,pUVar9,"Icons/Navigation/Rotate","Rotate",pSVar12,
                                            (MethodInfo *)0x0);
                        (__this->fields)._rotationButton = pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationButton,pUVar8);
                        pUVar8 = (__this->fields)._sideToolbar;
                        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                          pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar12,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_2,
                                     (MethodInfo *)0x0);
                          pUVar8 = UI_MapEditorTopPanel__CreateStateIconButton
                                             (__this,pUVar9,"Icons/Navigation/Scale","Scale",
                                              pSVar12,(MethodInfo *)0x0);
                          (__this->fields)._scaleButton = pUVar8;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleButton,pUVar8);
                          if (Il2CppMethodInitialized_1843475dd == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_Settings_TypedSetting_float_get_Value);
                            Il2CppMethodInitialized_1843475dd = '\x01';
                          }
                          x = (UnityEngine_Object_o *)(__this->fields)._sideToolbar;
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar5 = UnityEngine_Object__op_Equality
                                            (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if (bVar5) {
                            return;
                          }
                          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
                          if (((pSVar2 != (Settings_MapEditorSettings_o *)0x0) &&
                              (pSVar3 = (pSVar2->fields).HierarchyPanelWidth,
                              pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
                             (pUVar8 = (__this->fields)._sideToolbar,
                             pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                            fVar1 = (pSVar3->fields)._value;
                            pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                (pUVar8,(MethodInfo_6F5650 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                );
                            pUVar4 = __this->klass;
                            (*(pUVar4->vtable)._34_GetHeight.methodPtr)
                                      (__this,(System_Int32_array *)(pUVar4->vtable)._34_GetHeight.method,
                                       (MethodInfo *)pUVar4);
                            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar10,(UnityEngine_Vector2_o)
                                                 (CONCAT44(extraout_XMM0_Da,fVar1 + 8.0) ^ 0x8000000000000000)
                                         ,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_1822d55a1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorTopPanel$$RefreshSideToolbarPosition
// il2cpp: void UI_MapEditorTopPanel__RefreshSideToolbarPosition (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d8b40

void UI_MapEditorTopPanel__RefreshSideToolbarPosition(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *x;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  UI_MapEditorTopPanel_c *pUVar4;
  bool bVar5;
  UnityEngine_RectTransform_o *__this_01;
  undefined4 extraout_XMM0_Da;
  
  if (Il2CppMethodInitialized_1843475dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843475dd = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._sideToolbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (((pSVar2 != (Settings_MapEditorSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).HierarchyPanelWidth, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._sideToolbar, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (pSVar3->fields)._value;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    pUVar4 = __this->klass;
    (*(pUVar4->vtable)._34_GetHeight.methodPtr)
              (__this,(System_Int32_array *)(pUVar4->vtable)._34_GetHeight.method,(MethodInfo *)pUVar4);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (__this_01,
                 (UnityEngine_Vector2_o)(CONCAT44(extraout_XMM0_Da,fVar1 + 8.0) ^ 0x8000000000000000),
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$IsPointerOverSideToolbar
// il2cpp: bool UI_MapEditorTopPanel__IsPointerOverSideToolbar (UI_MapEditorTopPanel_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x1822d5980

bool UI_MapEditorTopPanel__IsPointerOverSideToolbar
               (UI_MapEditorTopPanel_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *rect;
  
  if (Il2CppMethodInitialized_1843475de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_1843475de = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._sideToolbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pUVar1 = (__this->fields)._sideToolbar;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    pUVar1 = (__this->fields)._sideToolbar;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      rect = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_32c16a0
                        (rect,screenPosition,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$IsDropdownOpen
// il2cpp: bool UI_MapEditorTopPanel__IsDropdownOpen (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5790
// eh: try 0x1822d5850..0x1822d5975 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d58a3: mov rdx, qword ptr [rip + 0x1da7f9e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose
// asm:   0x1822d58aa: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d58af: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d58b4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822d58b9: test rcx, rcx
// asm:   0x1822d58bc: jne 0x1822d5975
// asm:   0x1822d58c2: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1822d5975: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool UI_MapEditorTopPanel__IsDropdownOpen(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DropdownSelectElement__o *__this_00;
  UI_MultiSelectDropdownElement_o *pUVar1;
  bool bVar2;
  undefined1 local_40 [16];
  UI_DropdownSettingElement_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UI_DropdownSettingElement_o *local_18;
  
  if (Il2CppMethodInitialized_1843475df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DropdownSelectElement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475df = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UI_DropdownSettingElement_o *)0x0;
  __this_00 = (__this->fields)._dropdowns;
  if (__this_00 != (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_DropdownSelectElement_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_MoveNext
                             ), bVar2) {
      if (local_18 == (UI_DropdownSettingElement_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = UI_DropdownSettingElement__IsOpen(local_18,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
        return true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
    pUVar1 = (__this->fields)._layerDropdown;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._layerDropdown;
      if (pUVar1 == (UI_MultiSelectDropdownElement_o *)0x0) goto label_1822d5969;
      bVar2 = UI_MultiSelectDropdownElement__IsOpen(pUVar1,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
    pUVar1 = (__this->fields)._gridDropdown;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._gridDropdown;
      if (pUVar1 == (UI_MultiSelectDropdownElement_o *)0x0) goto label_1822d5969;
      bVar2 = UI_MultiSelectDropdownElement__IsOpen(pUVar1,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
    return false;
  }
label_1822d5969:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnFileClick
// il2cpp: void UI_MapEditorTopPanel__OnFileClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6160
// eh: try 0x1822d6930..0x1822d6d74 -> pad 0x183331790 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d66a6: xor eax, eax
// asm:   0x1822d66a8: nop dword ptr [rax + rax]
// asm:   0x1822d671b: nop dword ptr [rax + rax]
// asm:   0x1822d69cc: mov rdx, qword ptr [rip + 0x1dd9475]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x1822d69d3: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1822d69d8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d69dd: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1822d69e2: test rcx, rcx
// asm:   0x1822d69e5: jne 0x1822d6d74
// asm:   0x1822d69eb: mov r13, qword ptr [rsp + 0xd0]
// asm:   0x1822d69f3: mov rsi, qword ptr [rsp + 0xe8]
// asm:   0x1822d6b31: xor eax, eax
// asm:   0x1822d6b33: mov qword ptr [rsp + 0x40], rax
// asm:   0x1822d6b38: mov qword ptr [rsp + 0x38], rdi
// asm:   0x1822d6b3d: mov qword ptr [rsp + 0x30], r15
// asm:   0x1822d6b42: mov qword ptr [rsp + 0x28], rax
// asm:   0x1822d6b47: mov qword ptr [rsp + 0x20], r14
// asm:   0x1822d6b4c: mov r9, qword ptr [rip + 0x1da83d5]  ; ""
// asm:   0x1822d6b53: mov r8, r12
// asm:   0x1822d6b56: mov rdx, rsi
// asm:   0x1822d6b59: mov rcx, rbx
// asm:   0x1822d6c02: xor eax, eax
// asm:   0x1822d6c04: mov qword ptr [rsp + 0x30], rax
// asm:   0x1822d6c09: mov qword ptr [rsp + 0x28], rdi
// asm:   0x1822d6c0e: mov qword ptr [rsp + 0x20], r15
// asm:   0x1822d6c13: mov r9, r14
// asm:   0x1822d6c16: mov r8, r12
// asm:   0x1822d6c19: mov rdx, rsi
// asm:   0x1822d6c1c: mov rcx, rbx
// asm:   0x1822d6c1f: call 0x1821ca2b0  ; UI_SelectListPopup__ShowLoad()
// asm:   0x1822d6c24: jmp 0x1822d6b61
// asm:   0x1822d6d2c: xor eax, eax
// asm:   0x1822d6d2e: mov qword ptr [rsp + 0x40], rax
// asm:   0x1822d6d33: mov qword ptr [rsp + 0x38], rdi
// asm:   0x1822d6d38: mov qword ptr [rsp + 0x30], r12
// asm:   0x1822d6d3d: mov qword ptr [rsp + 0x28], rax
// asm:   0x1822d6d42: mov qword ptr [rsp + 0x20], r15
// asm:   0x1822d6d47: mov r9, rbx
// asm:   0x1822d6d4a: mov r8, qword ptr [rsp + 0xd0]
// asm:   0x1822d6d52: mov rdx, rsi
// asm:   0x1822d6d55: mov rcx, r14
// asm:   0x1822d6d58: jmp 0x1822d6b5c
// asm:   0x1822d6d74: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331790: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331795: push rbp
// asm:   0x183331796: sub rsp, 0x50
// asm:   0x18333179a: mov rbp, rdx
// asm:   0x18333179d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833317a1: mov rcx, qword ptr [rax]
// asm:   0x1833317a4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833317a8: movabs rax, 0
// asm:   0x1833317b2: add rsp, 0x50
// asm:   0x1833317b6: pop rbp
// asm:   0x1833317b7: ret 

void UI_MapEditorTopPanel__OnFileClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  int32_t length;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Il2CppObject *object;
  UI_MapEditorMenu_o *pUVar6;
  UI_SelectListPopup_o *pUVar7;
  GameManagers_MapEditorGameManager_o *pGVar8;
  Map_MapScript_o *pMVar9;
  Map_MapScriptObjects_o *pMVar10;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_01;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar11;
  UI_ExportPopup_o *__this_02;
  UI_ImportPopup_o *__this_03;
  MethodInfo *pMVar12;
  bool bVar13;
  System_String_array *pSVar14;
  System_Collections_Generic_List_string__o *pSVar15;
  System_Collections_Generic_List_string__o *disallowedDelete;
  System_Func_string__string__o *__this_04;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_String_o *pSVar16;
  UnityEngine_Events_UnityAction_o *pUVar17;
  System_String_array *pSVar18;
  Map_MapScript_o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  System_String_o *pSVar19;
  UnityEngine_Events_UnityAction_o *pUVar20;
  uint uVar21;
  uint uVar22;
  int32_t local_res18 [2];
  Map_MapScript_o *local_res20;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_1843475e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_c_OnFileClick_b__48_8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning: importing will override current save.");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadAutosave");
    il2cpp_codegen_initialize_runtime_metadata(&"Open");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Untitled");
    il2cpp_codegen_initialize_runtime_metadata(&"New");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843475e0 = '\x01';
  }
  uVar22 = 0;
  local_res18[0] = 0;
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar14 = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  pSVar15 = (System_Collections_Generic_List_string__o *)
            System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  pSVar4 = (__this->fields)._dropdownSelection;
  if (pSVar4 != (Settings_IntSetting_o *)0x0) {
    iVar3 = (pSVar4->fields)._value;
    disallowedDelete =
         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)disallowedDelete,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar5 = (__this->fields)._currentMap;
    if ((pSVar5 != (Settings_StringSetting_o *)0x0) &&
       (disallowedDelete != (System_Collections_Generic_List_string__o *)0x0)) {
      pSVar16 = (pSVar5->fields)._value;
      piVar1 = &(disallowedDelete->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar14 = (disallowedDelete->fields)._items;
      if (pSVar14 != (System_String_array *)0x0) {
        uVar21 = (disallowedDelete->fields)._size;
        if (uVar21 < (uint)pSVar14->max_length) {
          (disallowedDelete->fields)._size = uVar21 + 1;
          if ((uint)pSVar14->max_length <= uVar21) {
label_1822d6d7a:
            ThrowIndexOutOfRangeException();
          }
          pSVar14->m_Items[(int)uVar21] = pSVar16;
          Il2CppCodeGenWriteBarrier(pSVar14->m_Items + (int)uVar21,pSVar16);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)disallowedDelete,(Il2CppObject *)pSVar16,
                     (MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
        }
        pSVar16 = "Untitled";
        if (iVar3 == 0) {
          local_res18[0] = 1;
          pSVar19 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
          pSVar19 = System_String__Concat_1969e50(pSVar16,pSVar19,(MethodInfo *)0x0);
          if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822d6d5d;
          while (bVar13 = System_Collections_Generic_List_object___Contains
                                    ((System_Collections_Generic_List_object__o *)pSVar15,
                                     (Il2CppObject *)pSVar19,
                                     (MethodInfo_93FC70 *)
                                     MethodInfo_System_Collections_Generic_List_string_Contains), bVar13) {
            local_res18[0] = local_res18[0] + 1;
            pSVar19 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
            pSVar19 = System_String__Concat_1969e50(pSVar16,pSVar19,(MethodInfo *)0x0);
          }
          pUVar6 = (__this->fields)._menu;
          if (pUVar6 == (UI_MapEditorMenu_o *)0x0) goto label_1822d6d5d;
          pUVar7 = (pUVar6->fields).SelectListPopup;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar19 = UI_UIManager__GetLocaleCommon("New",(MethodInfo *)0x0);
          pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_5,(MethodInfo *)0x0);
          pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar20,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_6,(MethodInfo *)0x0);
        }
        else {
          if (iVar3 == 1) {
            pUVar6 = (__this->fields)._menu;
            if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
              pUVar7 = (pUVar6->fields).SelectListPopup;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar16 = UI_UIManager__GetLocaleCommon("Open",(MethodInfo *)0x0);
              pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_0,(MethodInfo *)0x0);
              pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar20,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_1,(MethodInfo *)0x0);
              if (pUVar7 != (UI_SelectListPopup_o *)0x0) {
                UI_SelectListPopup__ShowLoad
                          (pUVar7,pSVar15,pSVar16,pUVar17,pUVar20,disallowedDelete,(MethodInfo *)0x0);
                return;
              }
            }
            goto label_1822d6d5d;
          }
          if (iVar3 != 2) {
            if (iVar3 == 3) {
              UI_MapEditorTopPanel__Save(__this,(MethodInfo *)0x0);
              return;
            }
            if (iVar3 == 4) {
              pUVar6 = (__this->fields)._menu;
              if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
                __this_03 = (pUVar6->fields).ImportPopup;
                pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_4,(MethodInfo *)0x0);
                if (__this_03 != (UI_ImportPopup_o *)0x0) {
                  UI_ImportPopup__Show
                            (__this_03,pUVar17,true,"Warning: importing will override current save.","",
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
            else if (iVar3 == 5) {
              __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
              local_res20 = __this_05;
              Map_MapScript___ctor(__this_05,(MethodInfo *)0x0);
              pGVar8 = (__this->fields)._gameManager;
              if (((pGVar8 != (GameManagers_MapEditorGameManager_o *)0x0) &&
                  (pMVar9 = (pGVar8->fields).MapScript, pMVar9 != (Map_MapScript_o *)0x0)) &&
                 (pSVar16 = (*(pMVar9->klass->vtable)._4_Serialize.methodPtr)
                                      (pMVar9,(pMVar9->klass->vtable)._4_Serialize.method),
                 __this_05 != (Map_MapScript_o *)0x0)) {
                (*(__this_05->klass->vtable)._5_Deserialize.methodPtr)
                          (__this_05,pSVar16,(__this_05->klass->vtable)._5_Deserialize.method);
                pMVar10 = (__this_05->fields).Objects;
                if ((pMVar10 != (Map_MapScriptObjects_o *)0x0) &&
                   (__this_00 = (pMVar10->fields).Objects,
                   __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  length = (__this_00->fields)._size;
                  (__this_00->fields)._size = 0;
                  if (0 < length) {
                    System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,
                                        (MethodInfo *)0x0);
                  }
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  __this_01 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if ((__this_01 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
                     (__this_06 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             __this_01,
                                             (MethodInfo_13C65A0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values
                                            ),
                     __this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
                     )) {
                    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                *)local_70,__this_06,
                               (MethodInfo_F1E4D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                              );
                    local_58 = (undefined1  [8])local_70._0_8_;
                    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
                    local_48 = local_60;
                    local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
                    while (bVar13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                                *)local_58,
                                               (MethodInfo_155CFB0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                              ),
                          pMVar12 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add, bVar13
                          ) {
                      if (local_48 == (Il2CppObject *)0x0) {
                        ThrowNullReferenceException();
                      }
                      item = local_48[2].klass;
                      piVar1 = &(__this_00->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pMVar11 = (__this_00->fields)._items;
                      if (pMVar11 == (Map_MapScriptBaseObject_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar22 = (__this_00->fields)._size;
                      if (uVar22 < (uint)pMVar11->max_length) {
                        (__this_00->fields)._size = uVar22 + 1;
                        if ((uint)pMVar11->max_length <= uVar22) {
                          ThrowIndexOutOfRangeException();
                        }
                        pMVar11->m_Items[(int)uVar22] = (Map_MapScriptBaseObject_o *)item;
                        Il2CppCodeGenWriteBarrier(pMVar11->m_Items + (int)uVar22,item);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item
                                   ,(MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
                      }
                    }
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                              );
                    pUVar6 = (__this->fields)._menu;
                    if ((pUVar6 != (UI_MapEditorMenu_o *)0x0) &&
                       (__this_02 = (pUVar6->fields).ExportPopup, __this_02 != (UI_ExportPopup_o *)0x0)) {
                      UI_ExportPopup__Show_21c1660(__this_02,__this_05,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            else if (iVar3 == 6) {
              pSVar15 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)pSVar15,
                         (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              pSVar14 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
              if (pSVar14 != (System_String_array *)0x0) {
                for (; (int)uVar22 < (int)pSVar14->max_length; uVar22 = uVar22 + 1) {
                  if ((uint)pSVar14->max_length <= uVar22) goto label_1822d6d7a;
                  pSVar16 = pSVar14->m_Items[(int)uVar22];
                  bVar13 = System_String__op_Equality(pSVar16,"Custom",(MethodInfo *)0x0);
                  if (!bVar13) {
                    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                    }
                    pSVar18 = Map_BuiltinLevels__GetMapNames(pSVar16,(MethodInfo *)0x0);
                    uVar21 = 0;
                    if (pSVar18 == (System_String_array *)0x0) goto label_1822d6d5d;
                    for (; uVar2 = (uint)pSVar18->max_length, (int)uVar21 < (int)uVar2; uVar21 = uVar21 + 1) {
                      if (uVar2 <= uVar21) goto label_1822d6d7a;
                      System_String__Concat_1969b70
                                (pSVar16,"/",pSVar18->m_Items[(int)uVar21],(MethodInfo *)0x0
                                );
                      if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822d6d5d;
                      il2cpp_runtime_helper_180012890(pSVar15);
                    }
                  }
                }
                pUVar6 = (__this->fields)._menu;
                if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
                  pUVar7 = (pUVar6->fields).SelectListPopup;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  pSVar16 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
                  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_7,(MethodInfo *)0x0);
                  if (pUVar7 != (UI_SelectListPopup_o *)0x0) {
                    UI_SelectListPopup__ShowLoad
                              (pUVar7,pSVar15,pSVar16,pUVar17,(UnityEngine_Events_UnityAction_o *)0x0,
                               (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else {
              if (iVar3 != 7) {
                if (iVar3 != 8) {
                  if (iVar3 != 9) {
                    return;
                  }
                  UI_MapEditorTopPanel__Save(__this,(MethodInfo *)0x0);
                }
                ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
                return;
              }
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              pSVar14 = Map_BuiltinLevels__GetAutosaveNames((MethodInfo *)0x0);
              if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
              }
              __this_04 = TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__48_8;
              if (__this_04 == (System_Func_string__string__o *)0x0) {
                if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
                }
                object = (Il2CppObject *)TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9;
                __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
                System_Func_object__object____ctor
                          ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_04,object,
                           (intptr_t)MethodInfo_UI_MapEditorTopPanel_c_OnFileClick_b__48_8,
                           (MethodInfo_16E67D0 *)0x0);
                TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__48_8 = __this_04;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__48_8,__this_04);
              }
              source = System_Linq_Enumerable__OrderByDescending_object__object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                                  (System_Func_TSource__TKey__o *)__this_04,
                                  (MethodInfo_6C1060 *)
                                  MethodInfo_System_Linq_Enumerable_OrderByDescending_string_string);
              pSVar15 = (System_Collections_Generic_List_string__o *)
                        System_Linq_Enumerable__ToList_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
              pUVar6 = (__this->fields)._menu;
              if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
                pUVar7 = (pUVar6->fields).SelectListPopup;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar16 = UI_UIManager__GetLocaleCommon("LoadAutosave",(MethodInfo *)0x0);
                pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_9,(MethodInfo *)0x0);
                if (pUVar7 != (UI_SelectListPopup_o *)0x0) {
                  UI_SelectListPopup__ShowLoad
                            (pUVar7,pSVar15,pSVar16,pUVar17,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto label_1822d6d5d;
          }
          pUVar6 = (__this->fields)._menu;
          if (pUVar6 == (UI_MapEditorMenu_o *)0x0) goto label_1822d6d5d;
          pUVar7 = (pUVar6->fields).SelectListPopup;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar19 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
          pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_2,(MethodInfo *)0x0);
          pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar20,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_3,(MethodInfo *)0x0);
          pSVar16 = "";
        }
        if (pUVar7 != (UI_SelectListPopup_o *)0x0) {
          UI_SelectListPopup__ShowSave
                    (pUVar7,pSVar15,pSVar19,pSVar16,pUVar17,(System_Collections_Generic_List_string__o *)0x0,
                     pUVar20,disallowedDelete,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1822d6d5d:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$Save
// il2cpp: void UI_MapEditorTopPanel__Save (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d8c60
// eh: try 0x1822d8de0..0x1822d8f3a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d8eb3: mov rdx, qword ptr [rip + 0x1daf42e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822d8eba: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d8ebf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d8ec4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822d8ec9: test rcx, rcx
// asm:   0x1822d8ecc: jne 0x1822d8f3a
// asm:   0x1822d8ece: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1822d8f3a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorTopPanel__Save(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  Map_MapScript_o *pMVar4;
  Map_MapScriptObjects_o *pMVar5;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar6;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *name;
  bool bVar9;
  uint64_t uVar10;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_1843475e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843475e1 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields)._gameManager;
  if ((((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar4 = (pGVar3->fields).MapScript, pMVar4 != (Map_MapScript_o *)0x0)) &&
      (pMVar5 = (pMVar4->fields).Objects, pMVar5 != (Map_MapScriptObjects_o *)0x0)) &&
     (pSVar6 = (pMVar5->fields).Objects,
     pSVar6 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar9 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                           (MethodInfo_1530180 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar9) break;
        iVar2 = (int32_t)local_38;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar7 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar7 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar9 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar7,iVar2,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar7 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar10 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar7,iVar2,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          if (uVar10 == 0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar6,*(undefined8 *)(uVar10 + 0x20));
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      pSVar8 = (__this->fields)._currentMap;
      if ((pSVar8 != (Settings_StringSetting_o *)0x0) &&
         (pGVar3 = (__this->fields)._gameManager, pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0)) {
        name = (pSVar8->fields)._value;
        pMVar4 = (pGVar3->fields).MapScript;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        Map_BuiltinLevels__SaveCustomMap(name,pMVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$Autosave
// il2cpp: void UI_MapEditorTopPanel__Autosave (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d4550
// eh: try 0x1822d4780..0x1822d4c1b -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d4853: mov rdx, qword ptr [rip + 0x1db3a8e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822d485a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822d485f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d4864: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d4869: test rcx, rcx
// asm:   0x1822d486c: jne 0x1822d4c05
// asm:   0x1822d4872: xor esi, esi
// asm:   0x1822d4874: mov r15, qword ptr [rsp + 0x90]
// asm:   0x1822d4a79: nop dword ptr [rax]
// asm:   0x1822d4b1d: mov r8, qword ptr [rsp + 0x38]
// asm:   0x1822d4b22: cmp qword ptr [r8], 0
// asm:   0x1822d4b26: je 0x1822d4b39
// asm:   0x1822d4b28: xor ecx, ecx
// asm:   0x1822d4b2a: mov r8, qword ptr [r8]
// asm:   0x1822d4b2d: mov rdx, qword ptr [rip + 0x1dc47cc]  ; TypeInfo_System_IDisposable
// asm:   0x1822d4b34: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822d4b39: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d4b3e: test rcx, rcx
// asm:   0x1822d4b41: jne 0x1822d4c1b
// asm:   0x1822d4b47: mov r15, qword ptr [rsp + 0x90]
// asm:   0x1822d4c05: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822d4c1b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_MapEditorTopPanel__Autosave(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  int32_t iVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptObjects_o *pMVar6;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar7;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Settings_StringSetting_o *pSVar11;
  bool bVar12;
  ushort uVar13;
  uint64_t uVar14;
  System_IO_DirectoryInfo_o *__this_01;
  System_IO_FileInfo_array *source;
  System_Func_FileInfo__DateTime__o *__this_02;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  Il2CppObject *pIVar15;
  VirtualInvokeData *pVVar16;
  System_String_o *str1;
  System_String_o *pSVar17;
  ushort uVar18;
  Il2CppObject *local_res18;
  System_DateTime_Fields local_res20;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_1843475e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_DirectoryInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_c_Autosave_b__50_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MM-dd-yyyy-HH-mm");
    Il2CppMethodInitialized_1843475e2 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Il2CppObject *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  local_res20._dateData = 0;
  pGVar4 = (__this->fields)._gameManager;
  if ((((pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar5 = (pGVar4->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) &&
      (pMVar6 = (pMVar5->fields).Objects, pMVar6 != (Map_MapScriptObjects_o *)0x0)) &&
     (pSVar7 = (pMVar6->fields).Objects,
     pSVar7 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_00,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar12 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                           ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                            (MethodInfo_1530180 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar12) break;
        iVar3 = (int32_t)local_30;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar8 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar12 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                           (pSVar8,iVar3,
                            (MethodInfo_1407110 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar12) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar8 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar14 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar8,iVar3,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          if (uVar14 == 0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar7,*(undefined8 *)(uVar14 + 0x20));
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      pSVar17 = TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
      System_IO_DirectoryInfo___ctor(__this_01,pSVar17,(MethodInfo *)0x0);
      if (__this_01 != (System_IO_DirectoryInfo_o *)0x0) {
        source = System_IO_DirectoryInfo__GetFiles(__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
        }
        __this_02 = TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__50_0;
        if (__this_02 == (System_Func_FileInfo__DateTime__o *)0x0) {
          if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
          }
          pIVar15 = (Il2CppObject *)TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FileInfo_DateTime);
          System_Func_object__DateTime____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,pIVar15,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_c_Autosave_b__50_0,(MethodInfo_16E67D0 *)0x0);
          TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__50_0 = __this_02;
          Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9__50_0,__this_02);
        }
        source_00 = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__TKey__o *)__this_02,
                               (MethodInfo_6C0FE0 *)
                               MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
        pIVar15 = (Il2CppObject *)
                  System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                             (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
        if (pIVar15 != (Il2CppObject *)0x0) {
          local_res18 = InterfaceInvoker0_Invoke
                                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_FileInfo,
                                   pIVar15);
          local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_58._8_8_ = &local_res18;
          do {
            pIVar15 = local_res18;
            if (local_res18 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar9 = local_res18->klass;
            uVar2 = (pIVar9->_2).interface_offsets_count;
            uVar13 = 0;
            if (uVar2 != 0) {
              pIVar10 = (pIVar9->_1).interfaceOffsets;
              uVar18 = uVar13;
              do {
                if (pIVar10[uVar18].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                  pVVar16 = pIVar9->vtable + pIVar10[uVar18].offset;
                  goto label_1822d4a36;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar2);
            }
            pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1822d4a36:
            bVar12 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
            pIVar15 = local_res18;
            if (!bVar12) {
              if (local_res18 != (Il2CppObject *)0x0) {
                InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
              }
              pSVar11 = (__this->fields)._currentMap;
              if (pSVar11 != (Settings_StringSetting_o *)0x0) {
                pSVar17 = (pSVar11->fields)._value;
                if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
                }
                local_res20._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                str1 = System_DateTime__ToString_1b1f6f0
                                 ((System_DateTime_o *)&local_res20,"MM-dd-yyyy-HH-mm",(MethodInfo *)0x0);
                pSVar17 = System_String__Concat_1969e50(pSVar17,str1,(MethodInfo *)0x0);
                pGVar4 = (__this->fields)._gameManager;
                if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
                  pMVar5 = (pGVar4->fields).MapScript;
                  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                  }
                  Map_BuiltinLevels__AutosaveCustomMap(pSVar17,pMVar5,(MethodInfo *)0x0);
                  return;
                }
              }
              break;
            }
            if (local_res18 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar9 = local_res18->klass;
            uVar2 = (pIVar9->_2).interface_offsets_count;
            if (uVar2 != 0) {
              pIVar10 = (pIVar9->_1).interfaceOffsets;
              do {
                if (pIVar10[uVar13].interfaceType ==
                    (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FileInfo) {
                  pVVar16 = pIVar9->vtable + pIVar10[uVar13].offset;
                  goto label_1822d4aa2;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar2);
            }
            pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_res18,
                                 (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FileInfo,0);
label_1822d4aa2:
            pIVar15 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
            if (pIVar15 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            (*pIVar15->klass->vtable[0xb].methodPtr)(pIVar15,pIVar15->klass->vtable[0xb].method);
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnEditClick
// il2cpp: void UI_MapEditorTopPanel__OnEditClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6040

void
UI_MapEditorTopPanel__OnEditClick(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  int iVar1;
  UI_MapEditorMenu_o *__this_00;
  Settings_IntSetting_o *pSVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843475e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843475e3 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar4 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pSVar2 = (__this->fields)._dropdownSelection;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      iVar1 = (pSVar2->fields)._value;
      if (iVar1 == 0) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Undo(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 1) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Redo(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 2) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Copy(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 3) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Paste(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 4) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Cut(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (iVar1 != 5) {
          return;
        }
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Delete(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnOptionsClick
// il2cpp: void UI_MapEditorTopPanel__OnOptionsClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d79c0

void
UI_MapEditorTopPanel__OnOptionsClick(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  int iVar1;
  UI_MapEditorMenu_o *pUVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  UI_MapEditorCustomAssetPopup_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843475e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843475e4 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
    bVar4 = UI_MapEditorMenu__IsPopupActive(pUVar2,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pSVar3 = (__this->fields)._dropdownSelection;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      iVar1 = (pSVar3->fields)._value;
      if (iVar1 == 0) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).SettingsPopup;
      }
      else if (iVar1 == 1) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).InfoPopup;
      }
      else if (iVar1 == 2) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).WeatherPopup;
      }
      else if (iVar1 == 3) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).CustomLogicPopup;
      }
      else {
        if (iVar1 != 4) {
          return;
        }
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (pUVar2->fields).CustomAssetsPopup;
      }
      if (pUVar5 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        (*(pUVar5->klass->vtable)._21_Show.methodPtr)(pUVar5,(pUVar5->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
label_1822d7ab7:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnButtonClick
// il2cpp: void UI_MapEditorTopPanel__OnButtonClick (UI_MapEditorTopPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822d5bf0

void UI_MapEditorTopPanel__OnButtonClick
               (UI_MapEditorTopPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ExternalLinkPopup_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MapEditor_BaseGizmo_o *pMVar3;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  UI_MapEditorCameraPopup_o *pUVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_1843475e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoOrientation");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"https://aottg2.gitbook.io/custom-maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmo");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"Snap");
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475e5 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"AddObject",(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_1822d5fa3;
  if (bVar5) {
    UI_MapEditorMenu__ToggleAddObjectPopup(pUVar1,(MethodInfo *)0x0);
    return;
  }
  bVar5 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
  if (!bVar5) {
    bVar5 = System_String__op_Equality(name,"Camera",(MethodInfo *)0x0);
    if (bVar5) {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar4 = (pUVar1->fields).CameraPopup, pUVar4 != (UI_MapEditorCameraPopup_o *)0x0)) {
        (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
        return;
      }
      goto label_1822d5fa3;
    }
    bVar5 = System_String__op_Equality(name,"Gizmo",(MethodInfo *)0x0);
    if (bVar5) {
      if (Il2CppMethodInitialized_1843475ea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"Scale");
        il2cpp_codegen_initialize_runtime_metadata(&"Position");
        il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
        Il2CppMethodInitialized_1843475ea = '\x01';
      }
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d5fa3;
      pMVar3 = (pGVar2->fields).CurrentGizmo;
      y = (pGVar2->fields)._positionGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d5fa3;
      if (bVar5) {
        GameManagers_MapEditorGameManager__SetGizmo(pGVar2,"Rotation",(MethodInfo *)0x0);
      }
      else {
        pMVar3 = (pGVar2->fields).CurrentGizmo;
        y_00 = (pGVar2->fields)._rotationGizmo;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pMVar3,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d5fa3;
        if (bVar5) {
          GameManagers_MapEditorGameManager__SetGizmo(pGVar2,"Scale",(MethodInfo *)0x0);
        }
        else {
          GameManagers_MapEditorGameManager__SetGizmo(pGVar2,"Position",(MethodInfo *)0x0);
        }
      }
    }
    else {
      bVar5 = System_String__op_Equality(name,"GizmoOrientation",(MethodInfo *)0x0);
      if (bVar5) {
        UI_MapEditorTopPanel___Setup_b__41_4(__this,(MethodInfo *)0x0);
        return;
      }
      bVar5 = System_String__op_Equality(name,"Snap",(MethodInfo *)0x0);
      if (!bVar5) {
        bVar5 = System_String__op_Equality(name,"Brush",(MethodInfo *)0x0);
        if (bVar5) {
          if (Il2CppMethodInitialized_1843475e8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"Brush");
            Il2CppMethodInitialized_1843475e8 = '\x01';
          }
          UI_MapEditorTopPanel__SelectTool(__this,"Brush",(MethodInfo *)0x0);
          return;
        }
        bVar5 = System_String__op_Equality(name,"Light",(MethodInfo *)0x0);
        if (bVar5) {
          UI_MapEditorTopPanel__ToggleLights(__this,(MethodInfo *)0x0);
          return;
        }
        bVar5 = System_String__op_Equality(name,"Tutorial",(MethodInfo *)0x0);
        if (!bVar5) {
          return;
        }
        pUVar1 = (__this->fields)._menu;
        if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
           (__this_00 = (pUVar1->fields).ExternalLinkPopup, __this_00 != (UI_ExternalLinkPopup_o *)0x0)) {
          UI_ExternalLinkPopup__Show(__this_00,"https://aottg2.gitbook.io/custom-maps",(MethodInfo *)0x0);
          return;
        }
label_1822d5fa3:
        ThrowNullReferenceException();
      }
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d5fa3;
      (pGVar2->fields).Snap = (pGVar2->fields).Snap == false;
    }
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorTopPanel$$ToggleSnap
// il2cpp: void UI_MapEditorTopPanel__ToggleSnap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822db990

void
UI_MapEditorTopPanel__ToggleSnap(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar1->fields).Snap = (pGVar1->fields).Snap == false;
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ToggleLights
// il2cpp: void UI_MapEditorTopPanel__ToggleLights (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822db8f0

void UI_MapEditorTopPanel__ToggleLights(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_1843475e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_1843475e6 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__ToggleLights(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
      bVar1 = (pGVar2->fields)._lightsOn;
      if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      TypeInfo_UI_MapEditorTopPanel->static_fields->_lightsEnabled = bVar1;
      UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ApplyViewSettings
// il2cpp: void UI_MapEditorTopPanel__ApplyViewSettings (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d4430

void UI_MapEditorTopPanel__ApplyViewSettings(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_HashSetSetting_int__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843475e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    Il2CppMethodInitialized_1843475e7 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar2 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  if ((pSVar2 != (Settings_HashSetSetting_int__o *)0x0) &&
     (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__SetGridAxes
              (pGVar1,(System_Collections_Generic_HashSet_int__o *)(pSVar2->fields)._value,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
      if ((pGVar1->fields)._lightsOn != TypeInfo_UI_MapEditorTopPanel->static_fields->_lightsEnabled) {
        GameManagers_MapEditorGameManager__ToggleLights(pGVar1,(MethodInfo *)0x0);
      }
      pGVar1 = (__this->fields)._gameManager;
      if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
        GameManagers_MapEditorGameManager__SetLayerVisibility
                  (pGVar1,TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection,(MethodInfo *)0x0);
        UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ToggleBrush
// il2cpp: void UI_MapEditorTopPanel__ToggleBrush (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822db8b0

void UI_MapEditorTopPanel__ToggleBrush(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843475e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475e8 = '\x01';
  }
  UI_MapEditorTopPanel__SelectTool(__this,"Brush",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$OnLayersChanged
// il2cpp: void UI_MapEditorTopPanel__OnLayersChanged (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7640

void
UI_MapEditorTopPanel__OnLayersChanged(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843475e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_1843475e9 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_01 = (__this->fields)._gameManager;
      if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      if (__this_01 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d76d7;
      GameManagers_MapEditorGameManager__SetLayerVisibility
                (__this_01,TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection,(MethodInfo *)0x0);
      UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    }
    return;
  }
label_1822d76d7:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$NextGizmoOrientation
// il2cpp: void UI_MapEditorTopPanel__NextGizmoOrientation (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5a80

void
UI_MapEditorTopPanel__NextGizmoOrientation(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmoMode
              (__this_00,(uint)((__this_00->fields).CurrentGizmoMode == 0),(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$NextGizmo
// il2cpp: void UI_MapEditorTopPanel__NextGizmo (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5ac0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d5bab: mov rdx, qword ptr [rip + 0x1da5cfe]  ; "Scale"
// asm:   0x1822d5bb2: jmp 0x1822d5bbe
// asm:   0x1822d5bb4: mov rdx, qword ptr [rip + 0x1d9bdbd]  ; "Rotation"
// asm:   0x1822d5bbb: xor r8d, r8d

void UI_MapEditorTopPanel__NextGizmo(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MapEditor_BaseGizmo_o *pMVar1;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  bool bVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_String_o *gizmo;
  
  if (Il2CppMethodInitialized_1843475ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_1843475ea = '\x01';
  }
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
    pMVar1 = (pGVar3->fields).CurrentGizmo;
    y = (pGVar3->fields)._positionGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
      gizmo = "Rotation";
      if (!bVar2) {
        pMVar1 = (pGVar3->fields).CurrentGizmo;
        y_00 = (pGVar3->fields)._rotationGizmo;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d5bdc;
        gizmo = "Scale";
        if (!bVar2) {
          gizmo = "Position";
        }
      }
      GameManagers_MapEditorGameManager__SetGizmo(pGVar3,gizmo,(MethodInfo *)0x0);
      UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1822d5bdc:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SelectGizmo
// il2cpp: void UI_MapEditorTopPanel__SelectGizmo (UI_MapEditorTopPanel_o* __this, System_String_o* gizmo, const MethodInfo* method);
// 0x1822d8f40

void UI_MapEditorTopPanel__SelectGizmo
               (UI_MapEditorTopPanel_o *__this,System_String_o *gizmo,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmo(__this_00,gizmo,(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SelectTool
// il2cpp: void UI_MapEditorTopPanel__SelectTool (UI_MapEditorTopPanel_o* __this, System_String_o* tool, const MethodInfo* method);
// 0x1822d8f80

void UI_MapEditorTopPanel__SelectTool(UI_MapEditorTopPanel_o *__this,System_String_o *tool,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorCameraPopup_o *pUVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  MapEditor_MapEditorBrush_o *pMVar4;
  MapEditor_MapEditorRuler_o *pMVar5;
  System_String_o *value;
  bool bVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_1843475eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475eb = '\x01';
  }
  bVar6 = System_String__op_Equality((__this->fields)._selectedTool,tool,(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality((__this->fields)._selectedTool,"Camera",(MethodInfo *)0x0);
  if (bVar7) {
    if (!bVar6) {
      bVar7 = System_String__op_Inequality(tool,"Camera",(MethodInfo *)0x0);
      if (!bVar7) goto label_1822d9043;
    }
    pUVar1 = (__this->fields)._menu;
    if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).CameraPopup, pUVar2 == (UI_MapEditorCameraPopup_o *)0x0))
    goto label_1822d9271;
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
  }
label_1822d9043:
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pMVar4 = (pGVar3->fields).Brush, pMVar4 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_1822d9271;
  if ((pMVar4->fields).Active != false) {
    if (!bVar6) {
      bVar7 = System_String__op_Inequality(tool,"Brush",(MethodInfo *)0x0);
      if (!bVar7) goto label_1822d909b;
    }
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d9271;
    GameManagers_MapEditorGameManager__ToggleBrush(pGVar3,(MethodInfo *)0x0);
  }
label_1822d909b:
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pMVar5 = (pGVar3->fields).Ruler, pMVar5 == (MapEditor_MapEditorRuler_o *)0x0)) goto label_1822d9271;
  if ((pMVar5->fields)._Active_k__BackingField == false) {
label_1822d9124:
    if (bVar6) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      (__this->fields)._selectedTool = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool,value);
      goto label_1822d9258;
    }
  }
  else {
    if (bVar6) {
label_1822d90dc:
      pGVar3 = (__this->fields)._gameManager;
      if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pMVar5 = (pGVar3->fields).Ruler, pMVar5 == (MapEditor_MapEditorRuler_o *)0x0)) goto label_1822d9271;
      MapEditor_MapEditorRuler__SetActive(pMVar5,false,(__this->fields)._menu,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_1822d9271;
      UI_MapEditorMenu__HideRulerPanel(pUVar1,(MethodInfo *)0x0);
      goto label_1822d9124;
    }
    bVar7 = System_String__op_Inequality(tool,"Ruler",(MethodInfo *)0x0);
    if (bVar7) goto label_1822d90dc;
  }
  (__this->fields)._selectedTool = tool;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool,tool);
  if (!bVar6) {
    bVar6 = System_String__op_Equality(tool,"Camera",(MethodInfo *)0x0);
    if (bVar6) {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).CameraPopup, pUVar2 == (UI_MapEditorCameraPopup_o *)0x0))
      goto label_1822d9271;
      (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
      goto label_1822d9258;
    }
    bVar6 = System_String__op_Equality(tool,"Brush",(MethodInfo *)0x0);
    if (bVar6) {
      pGVar3 = (__this->fields)._gameManager;
      if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pMVar4 = (pGVar3->fields).Brush, pMVar4 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_1822d9271;
      if ((pMVar4->fields).Active == false) {
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__ToggleBrush(pGVar3,(MethodInfo *)0x0);
          goto label_1822d9258;
        }
        goto label_1822d9271;
      }
    }
    bVar6 = System_String__op_Equality(tool,"Ruler",(MethodInfo *)0x0);
    if (bVar6) {
      pGVar3 = (__this->fields)._gameManager;
      if ((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pMVar5 = (pGVar3->fields).Ruler, pMVar5 != (MapEditor_MapEditorRuler_o *)0x0)) {
        MapEditor_MapEditorRuler__SetActive(pMVar5,true,(__this->fields)._menu,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__ShowRulerPanel(pUVar1,(MethodInfo *)0x0);
          goto label_1822d9258;
        }
      }
label_1822d9271:
      ThrowNullReferenceException();
    }
  }
label_1822d9258:
  UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$CloseRulerTool
// il2cpp: void UI_MapEditorTopPanel__CloseRulerTool (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d4cd0

void UI_MapEditorTopPanel__CloseRulerTool(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorRuler_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  System_String_o *value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    Il2CppMethodInitialized_1843475ec = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Ruler, __this_00 != (MapEditor_MapEditorRuler_o *)0x0)) {
    if ((__this_00->fields)._Active_k__BackingField != false) {
      MapEditor_MapEditorRuler__SetActive(__this_00,false,(__this->fields)._menu,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__HideRulerPanel(__this_01,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality
                        ((__this->fields)._selectedTool,"Ruler",(MethodInfo *)0x0);
      if (bVar2) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (__this->fields)._selectedTool = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool,value);
      }
      UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnToolSelected
// il2cpp: void UI_MapEditorTopPanel__OnToolSelected (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7c50

void
UI_MapEditorTopPanel__OnToolSelected(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  uint uVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_1843475ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475ed = '\x01';
  }
  pSVar2 = (__this->fields)._toolDropdownSelection;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value == 3) {
      UI_MapEditorTopPanel__OnButtonClick(__this,"Tutorial",(MethodInfo *)0x0);
      return;
    }
    pIVar5 = SZArrayNew(TypeInfo_string_array,3);
    pSVar3 = "Camera";
    if (pIVar5 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar5[1].monitor != 0) {
        pIVar5[2].klass = (Il2CppClass *)"Camera";
        Il2CppCodeGenWriteBarrier(&pIVar5[2].klass,pSVar3);
        pSVar3 = "Brush";
        if (1 < *(uint *)&pIVar5[1].monitor) {
          pIVar5[2].monitor = "Brush";
          Il2CppCodeGenWriteBarrier(&pIVar5[2].monitor,pSVar3);
          pSVar3 = "Ruler";
          if (2 < *(uint *)&pIVar5[1].monitor) {
            pIVar5[3].klass = (Il2CppClass *)"Ruler";
            Il2CppCodeGenWriteBarrier(&pIVar5[3].klass,pSVar3);
            pSVar2 = (__this->fields)._toolDropdownSelection;
            if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_1822d7da6;
            uVar1 = (pSVar2->fields)._value;
            if ((((int)uVar1 < 0) || (uVar4 = *(int *)&pIVar5[1].monitor - 1, (int)uVar1 <= (int)uVar4)) &&
               (uVar4 = uVar1, (int)uVar1 < 0)) {
              uVar4 = 0;
            }
            if (uVar4 < *(uint *)&pIVar5[1].monitor) {
              UI_MapEditorTopPanel__SelectTool
                        (__this,(System_String_o *)(&pIVar5[2].klass)[(int)uVar4],(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1822d7da6:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$CloseBrushTool
// il2cpp: void UI_MapEditorTopPanel__CloseBrushTool (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d4c30

void UI_MapEditorTopPanel__CloseBrushTool(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar1;
  System_String_o *value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475ee = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if ((__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pMVar1 = (__this_00->fields).Brush, pMVar1 != (MapEditor_MapEditorBrush_o *)0x0)) {
    if ((pMVar1->fields).Active != false) {
      GameManagers_MapEditorGameManager__ToggleBrush(__this_00,(MethodInfo *)0x0);
    }
    bVar2 = System_String__op_Equality((__this->fields)._selectedTool,"Brush",(MethodInfo *)0x0)
    ;
    if (bVar2) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      (__this->fields)._selectedTool = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool,value);
    }
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnGridChanged
// il2cpp: void UI_MapEditorTopPanel__OnGridChanged (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6d80

void
UI_MapEditorTopPanel__OnGridChanged(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  Settings_HashSetSetting_int__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843475ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    Il2CppMethodInitialized_1843475ef = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar1 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  if ((pSVar1 != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__SetGridAxes
              (__this_00,(System_Collections_Generic_HashSet_int__o *)(pSVar1->fields)._value,
               (MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$GetPlayModeLabel
// il2cpp: System_String_o* UI_MapEditorTopPanel__GetPlayModeLabel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5730

System_String_o * UI_MapEditorTopPanel__GetPlayModeLabel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843475f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Mode: ");
    Il2CppMethodInitialized_1843475f0 = '\x01';
  }
  pSVar1 = (__this->fields)._playMode;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50("Mode: ",(pSVar1->fields)._value,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$RefreshPlayModeLabel
// il2cpp: void UI_MapEditorTopPanel__RefreshPlayModeLabel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d8a00

void UI_MapEditorTopPanel__RefreshPlayModeLabel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_DropdownSelectElement_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_1843475f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/SelectedButton/Label");
    Il2CppMethodInitialized_1843475f1 = '\x01';
  }
  pUVar1 = (__this->fields)._playModeDropdown;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar1 = (__this->fields)._playModeDropdown;
  if (((pUVar1 != (UI_DropdownSelectElement_o *)0x0) &&
      (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
      pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Dropdown/SelectedButton/Label",(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    if (Il2CppMethodInitialized_1843475f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&"Mode: ");
      Il2CppMethodInitialized_1843475f0 = '\x01';
    }
    pSVar2 = (__this->fields)._playMode;
    if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
       (pSVar6 = System_String__Concat_1969e50
                           ("Mode: ",(pSVar2->fields)._value,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnPlayModeSelected
// il2cpp: void UI_MapEditorTopPanel__OnPlayModeSelected (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7ac0

void
UI_MapEditorTopPanel__OnPlayModeSelected(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  (__this->fields)._playModeExplicitlySelected = true;
  UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$PlayMap
// il2cpp: void UI_MapEditorTopPanel__PlayMap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7dc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d7e8d: mov rdx, qword ptr [rip + 0x1dc5b34]  ; "None"
// asm:   0x1822d7e94: jmp 0x1822d7ec0

void UI_MapEditorTopPanel__PlayMap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Map_MapScript_o *pMVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *gameMode;
  Settings_InGameMiscSettings_o *settings;
  Settings_InGameModeSettings_o *pSVar7;
  Settings_InGameSet_o *pSVar8;
  Settings_MultiplayerSettings_o *pSVar9;
  bool bVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *value;
  
  if (Il2CppMethodInitialized_1843475f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_1843475f2 = '\x01';
  }
  UI_MapEditorTopPanel__Save(__this,(MethodInfo *)0x0);
  if ((__this->fields)._playModeExplicitlySelected == false) {
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar2 = (pGVar1->fields).MapScript, pMVar2 == (Map_MapScript_o *)0x0)) goto label_1822d8189;
    pSVar3 = (__this->fields)._playMode;
    bVar10 = System_String__IsNullOrWhiteSpace((pMVar2->fields).Logic,(MethodInfo *)0x0);
    pSVar11 = "None";
    if (!bVar10) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar11 = TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
    }
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822d8189;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar11,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,(MethodInfo *)0x0);
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (pSVar4 != (Settings_InGameSet_o *)0x0) {
    (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
    pSVar5 = (pSVar4->fields).General;
    if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar3 = (pSVar5->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)"Custom",
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar5 = (pSVar4->fields).General;
      if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
         ((pSVar3 = (__this->fields)._currentMap, pSVar3 != (Settings_StringSetting_o *)0x0 &&
          (pSVar6 = (pSVar5->fields).MapName, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar5 = (pSVar4->fields).General;
        if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
           ((pSVar3 = (__this->fields)._playMode, pSVar3 != (Settings_StringSetting_o *)0x0 &&
            (pSVar6 = (pSVar5->fields).GameMode, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar5 = (pSVar4->fields).General;
          if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
             ((pSVar3 = (__this->fields)._playMode, pSVar3 != (Settings_StringSetting_o *)0x0 &&
              (pSVar6 = (pSVar5->fields).PrevGameMode, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar3 = (__this->fields)._currentMap;
            if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
               (pSVar6 = (__this->fields)._playMode, pSVar6 != (Settings_StringSetting_o *)0x0)) {
              pSVar11 = (pSVar3->fields)._value;
              gameMode = (pSVar6->fields)._value;
              settings = (pSVar4->fields).Misc;
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              Map_BuiltinLevels__LoadSandboxMiscSettings
                        ("Custom",pSVar11,gameMode,settings,(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._playMode;
              if (pSVar3 != (Settings_StringSetting_o *)0x0) {
                pSVar11 = Map_BuiltinLevels__LoadLogic((pSVar3->fields)._value,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   (pSVar11,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                                    (MethodInfo *)0x0);
                if (bVar10) {
                  pGVar1 = (__this->fields)._gameManager;
                  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
                     (pMVar2 = (pGVar1->fields).MapScript, pMVar2 == (Map_MapScript_o *)0x0))
                  goto label_1822d8189;
                  pSVar11 = (pMVar2->fields).Logic;
                }
                pSVar7 = (pSVar4->fields).Mode;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                value = CustomLogic_CustomLogicManager__GetModeSettings(pSVar11,(MethodInfo *)0x0);
                if (pSVar7 != (Settings_InGameModeSettings_o *)0x0) {
                  (pSVar7->fields).Current = value;
                  Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current,value);
                  pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                  if (pSVar8 != (Settings_InGameSet_o *)0x0) {
                    (*(pSVar8->klass->vtable)._10_Copy.methodPtr)
                              (pSVar8,(Settings_BaseSetting_o *)pSVar4,(pSVar8->klass->vtable)._10_Copy.method
                              );
                    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                    }
                    GameManagers_InGameManager__StartMapEditorPlaytest((MethodInfo *)0x0);
                    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                    if (pSVar9 != (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__ConnectOffline(pSVar9,(MethodInfo *)0x0);
                      pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                      if (pSVar9 != (Settings_MultiplayerSettings_o *)0x0) {
                        Settings_MultiplayerSettings__StartRoom(pSVar9,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1822d8189:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$RefreshControlStates
// il2cpp: void UI_MapEditorTopPanel__RefreshControlStates (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d8190

void UI_MapEditorTopPanel__RefreshControlStates(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UnityEngine_GameObject_o *pUVar3;
  MapEditor_BaseGizmo_o *pMVar4;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  MapEditor_ScaleGizmo_o *y_01;
  UnityEngine_Object_o *pUVar5;
  Settings_HashSetSetting_int__o *pSVar6;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  bool bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UI_HoverTooltip_o *pUVar11;
  System_String_o *pSVar12;
  UnityEngine_UI_RawImage_o *pUVar13;
  UnityEngine_Texture_o *pUVar14;
  UnityEngine_Texture_o *pUVar15;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar16;
  float fVar17;
  UnityEngine_Color_o local_28;
  
  if (Il2CppMethodInitialized_1843475f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LayersOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LightOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOn");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmo orientation: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LayersOn");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LightOn");
    il2cpp_codegen_initialize_runtime_metadata(&"Local");
    Il2CppMethodInitialized_1843475f3 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    pUVar3 = (__this->fields)._positionButton;
    pMVar4 = (pGVar2->fields).CurrentGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      bVar8 = true;
    }
    else {
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d89ca;
      pMVar4 = (pGVar2->fields).CurrentGizmo;
      y = (pGVar2->fields)._positionGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    }
    value = (UnityEngine_Texture_o *)0x0;
    UI_MapEditorTopPanel__SetButtonActive(__this,pUVar3,bVar8,true,true,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pUVar3 = (__this->fields)._rotationButton;
      pMVar4 = (pGVar2->fields).CurrentGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d89ca;
        pMVar4 = (pGVar2->fields).CurrentGizmo;
        y_00 = (pGVar2->fields)._rotationGizmo;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
      }
      else {
        bVar8 = false;
      }
      UI_MapEditorTopPanel__SetButtonActive(__this,pUVar3,bVar8,true,true,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
        pUVar3 = (__this->fields)._scaleButton;
        pMVar4 = (pGVar2->fields).CurrentGizmo;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pGVar2 = (__this->fields)._gameManager;
          if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d89ca;
          pMVar4 = (pGVar2->fields).CurrentGizmo;
          y_01 = (pGVar2->fields)._scaleGizmo;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)y_01,(MethodInfo *)0x0);
        }
        else {
          bVar8 = false;
        }
        UI_MapEditorTopPanel__SetButtonActive(__this,pUVar3,bVar8,true,true,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          UI_MapEditorTopPanel__SetTextButtonActive
                    (__this,(__this->fields)._snapButton,(pGVar2->fields).Snap,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Object_o *)(__this->fields)._gizmoOrientationButton;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar3 = (__this->fields)._gizmoOrientationButton;
            if (((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
                (pUVar9 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
                pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
               (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Text",(MethodInfo *)0x0),
               pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_1822d89ca;
            pUVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar9,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            pGVar2 = (__this->fields)._gameManager;
            if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d89ca;
            pSVar12 = "Local";
            if ((pGVar2->fields).CurrentGizmoMode == 0) {
              pSVar12 = "Center";
            }
            if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_1822d89ca;
            (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                      (pUVar10,pSVar12,(pUVar10->klass->vtable)._75_set_text.method);
            pUVar3 = (__this->fields)._gizmoOrientationButton;
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1822d89ca;
            pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar3,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip);
            pGVar2 = (__this->fields)._gameManager;
            if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d89ca;
            pSVar12 = "Center";
            if ((pGVar2->fields).CurrentGizmoMode != 0) {
              pSVar12 = "Local";
            }
            pSVar12 = System_String__Concat_1969e50("Gizmo orientation: ",pSVar12,(MethodInfo *)0x0);
            if (pUVar11 == (UI_HoverTooltip_o *)0x0) goto label_1822d89ca;
            (pUVar11->fields).Message = pSVar12;
            Il2CppCodeGenWriteBarrier(&(pUVar11->fields).Message,pSVar12);
          }
          pGVar2 = (__this->fields)._gameManager;
          if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
            pSVar12 = "Icons/Navigation/LightOff";
            if ((pGVar2->fields)._lightsOn != false) {
              pSVar12 = "Icons/Navigation/LightOn";
            }
            pUVar5 = (UnityEngine_Object_o *)(__this->fields)._lightButton;
            if (Il2CppMethodInitialized_1843475f6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
              Il2CppMethodInitialized_1843475f6 = '\x01';
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar8) {
              if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_1822d89ca;
              pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pUVar5,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pUVar14 = (UnityEngine_Texture_o *)
                        ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar12,true,(MethodInfo *)0x0)
              ;
              if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822d89ca;
              pUVar15 = value;
              if (pUVar14 != (UnityEngine_Texture_o *)0x0) {
                if (pUVar14->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                  pUVar15 = pUVar14;
                }
                if (pUVar15 == (UnityEngine_Texture_o *)0x0) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar14,TypeInfo_UnityEngine_Texture2D);
                }
              }
              UnityEngine_UI_RawImage__set_texture(pUVar13,pUVar15,(MethodInfo *)0x0);
            }
            pGVar2 = (__this->fields)._gameManager;
            if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
              UI_MapEditorTopPanel__SetButtonActive
                        (__this,(__this->fields)._lightButton,(pGVar2->fields)._lightsOn,true,false,
                         (MethodInfo *)0x0);
              pUVar13 = (__this->fields)._gridIcon;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (bVar8) {
                if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
                }
                pSVar6 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
                if ((pSVar6 == (Settings_HashSetSetting_int__o *)0x0) ||
                   (pSVar7 = (pSVar6->fields)._value, pSVar7 == (System_Collections_Generic_HashSet_T__o *)0x0
                   )) goto label_1822d89ca;
                iVar1 = (pSVar7->fields)._count;
                pUVar13 = (__this->fields)._gridIcon;
                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                }
                pSVar12 = "Icons/Navigation/GridOff";
                if (0 < iVar1) {
                  pSVar12 = "Icons/Navigation/GridOn";
                }
                pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                pUVar14 = (UnityEngine_Texture_o *)
                          ApplicationManagers_ResourceManager__LoadAsset
                                    (pSVar16,pSVar12,true,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822d89ca;
                pUVar15 = value;
                if (pUVar14 != (UnityEngine_Texture_o *)0x0) {
                  if (pUVar14->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                    pUVar15 = pUVar14;
                  }
                  if (pUVar15 == (UnityEngine_Texture_o *)0x0) {
                    il2cpp_codegen_raise_invalid_cast_exception(pUVar14,TypeInfo_UnityEngine_Texture2D);
                  }
                }
                UnityEngine_UI_RawImage__set_texture(pUVar13,pUVar15,(MethodInfo *)0x0);
                pUVar13 = (__this->fields)._gridIcon;
                fVar17 = 1.0;
                if (iVar1 < 1) {
                  fVar17 = 0.75;
                }
                if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822d89ca;
                local_28.fields.a = 1.0;
                local_28.fields.r = fVar17;
                local_28.fields.g = fVar17;
                local_28.fields.b = fVar17;
                (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                          (pUVar13,&local_28,(pUVar13->klass->vtable)._23_set_color.method);
              }
              pUVar13 = (__this->fields)._layersIcon;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (!bVar8) {
                return;
              }
              pUVar13 = (__this->fields)._layersIcon;
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              pSVar12 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
              if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
              }
              pSVar6 = TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection;
              if ((pSVar6 != (Settings_HashSetSetting_int__o *)0x0) &&
                 (pSVar7 = (pSVar6->fields)._value, pSVar7 != (System_Collections_Generic_HashSet_T__o *)0x0))
              {
                pSVar16 = "Icons/Navigation/LayersOff";
                if (0 < (pSVar7->fields)._count) {
                  pSVar16 = "Icons/Navigation/LayersOn";
                }
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                pUVar14 = (UnityEngine_Texture_o *)
                          ApplicationManagers_ResourceManager__LoadAsset
                                    (pSVar12,pSVar16,true,(MethodInfo *)0x0);
                if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
                  if (pUVar14 != (UnityEngine_Texture_o *)0x0) {
                    if (pUVar14->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                      value = pUVar14;
                    }
                    if (value == (UnityEngine_Texture_o *)0x0) {
                      il2cpp_codegen_raise_invalid_cast_exception(pUVar14,TypeInfo_UnityEngine_Texture2D);
                    }
                  }
                  UnityEngine_UI_RawImage__set_texture(pUVar13,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1822d89ca:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SetButtonActive
// il2cpp: void UI_MapEditorTopPanel__SetButtonActive (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, bool active, bool dimWhenInactive, bool highlightBackground, const MethodInfo* method);
// 0x1822d9280

void UI_MapEditorTopPanel__SetButtonActive
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,bool active,
               bool dimWhenInactive,bool highlightBackground,MethodInfo *method)

{
  undefined8 uVar1;
  bool bVar2;
  UnityEngine_UI_Button_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  UnityEngine_UI_ColorBlock_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_Color_o *pUVar8;
  System_String_o *category;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  UnityEngine_Color_o local_a8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_1843475f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843475f4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (buttonObject == (UnityEngine_GameObject_o *)0x0) goto label_1822d9718;
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (buttonObject,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (buttonObject,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    category = "DefaultButton";
    if (bVar2) {
      category = "IconButton";
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar5 = UI_UIManager__GetThemeColorBlock
                       (&local_98,pSVar3,category,"","DefaultPanel",
                        (MethodInfo *)0x0);
    fVar13 = (pUVar5->fields).m_HighlightedColor.fields.r;
    fVar14 = (pUVar5->fields).m_HighlightedColor.fields.g;
    fVar26 = (pUVar5->fields).m_HighlightedColor.fields.b;
    fVar15 = (pUVar5->fields).m_HighlightedColor.fields.a;
    uVar24._0_4_ = (pUVar5->fields).m_DisabledColor.fields.r;
    uVar24._4_4_ = (pUVar5->fields).m_DisabledColor.fields.g;
    uVar25._0_4_ = (pUVar5->fields).m_DisabledColor.fields.b;
    uVar25._4_4_ = (pUVar5->fields).m_DisabledColor.fields.a;
    uVar1._0_4_ = (pUVar5->fields).m_ColorMultiplier;
    uVar1._4_4_ = (pUVar5->fields).m_FadeDuration;
    if (highlightBackground) {
      fVar16 = (pUVar5->fields).m_PressedColor.fields.r;
      fVar17 = (pUVar5->fields).m_PressedColor.fields.g;
      fVar18 = (pUVar5->fields).m_PressedColor.fields.b;
      fVar19 = (pUVar5->fields).m_PressedColor.fields.a;
      fVar20 = (pUVar5->fields).m_SelectedColor.fields.r;
      fVar21 = (pUVar5->fields).m_SelectedColor.fields.g;
      fVar22 = (pUVar5->fields).m_SelectedColor.fields.b;
      fVar23 = (pUVar5->fields).m_SelectedColor.fields.a;
      fVar9 = (pUVar5->fields).m_NormalColor.fields.r;
      fVar10 = (pUVar5->fields).m_NormalColor.fields.g;
      fVar11 = (pUVar5->fields).m_NormalColor.fields.b;
      fVar12 = (pUVar5->fields).m_NormalColor.fields.a;
      if (active) {
        if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
        }
        goto label_1822d94e1;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      uVar24._0_4_ = 1.0;
      uVar24._4_4_ = 1.0;
      uVar25._0_4_ = 1.0;
      uVar25._4_4_ = 0.5;
label_1822d94e1:
      fVar13 = 1.0;
      fVar14 = 1.0;
      fVar26 = 1.0;
      fVar15 = 1.0;
      fVar16 = fVar13;
      fVar17 = fVar14;
      fVar18 = fVar26;
      fVar19 = fVar15;
      fVar20 = fVar13;
      fVar21 = fVar14;
      fVar22 = fVar26;
      fVar23 = fVar15;
      fVar9 = fVar13;
      fVar10 = fVar14;
      fVar11 = fVar26;
      fVar12 = fVar15;
    }
    if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822d9718;
    local_98.fields.m_NormalColor.fields.r = fVar9;
    local_98.fields.m_NormalColor.fields.g = fVar10;
    local_98.fields.m_NormalColor.fields.b = fVar11;
    local_98.fields.m_NormalColor.fields.a = fVar12;
    local_98.fields.m_HighlightedColor.fields.r = fVar13;
    local_98.fields.m_HighlightedColor.fields.g = fVar14;
    local_98.fields.m_HighlightedColor.fields.b = fVar26;
    local_98.fields.m_HighlightedColor.fields.a = fVar15;
    local_98.fields.m_PressedColor.fields.r = fVar16;
    local_98.fields.m_PressedColor.fields.g = fVar17;
    local_98.fields.m_PressedColor.fields.b = fVar18;
    local_98.fields.m_PressedColor.fields.a = fVar19;
    local_98.fields.m_SelectedColor.fields.r = fVar20;
    local_98.fields.m_SelectedColor.fields.g = fVar21;
    local_98.fields.m_SelectedColor.fields.b = fVar22;
    local_98.fields.m_SelectedColor.fields.a = fVar23;
    local_98.fields.m_DisabledColor.fields._0_8_ = uVar24;
    local_98.fields.m_DisabledColor.fields._8_8_ = uVar25;
    local_98.fields._80_8_ = uVar1;
    UnityEngine_UI_Selectable__set_colors
              ((UnityEngine_UI_Selectable_o *)__this_00,&local_98,(MethodInfo *)0x0);
  }
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (buttonObject,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar26 = 0.75;
  fVar13 = 1.0;
  fVar14 = 1.0;
  if (bVar2) {
    if ((active) || (!dimWhenInactive)) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = 0.75;
    }
    if (pUVar4 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822d9718;
    local_a8.fields.r = 1.0;
    local_a8.fields.g = 1.0;
    local_a8.fields.b = 1.0;
    local_a8.fields.a = fVar15;
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
              (pUVar4,&local_a8,(pUVar4->klass->vtable)._23_set_color.method);
  }
  pUVar6 = UnityEngine_GameObject__get_transform(buttonObject,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar6,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if ((active) || (!dimWhenInactive)) {
        pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar8 = UI_UIManager__GetThemeColor
                           (&local_a8,pSVar3,"DefaultButton","TextColor","DefaultPanel"
                            ,(MethodInfo *)0x0);
        fVar13 = (pUVar8->fields).r;
        fVar15 = (pUVar8->fields).g;
        fVar14 = (pUVar8->fields).b;
        fVar26 = (pUVar8->fields).a;
      }
      else {
        fVar15 = 1.0;
      }
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        local_a8.fields.r = fVar13;
        local_a8.fields.g = fVar15;
        local_a8.fields.b = fVar14;
        local_a8.fields.a = fVar26;
        (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                  (pUVar7,&local_a8,(pUVar7->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
label_1822d9718:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SetTextButtonActive
// il2cpp: void UI_MapEditorTopPanel__SetTextButtonActive (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, bool active, const MethodInfo* method);
// 0x1822d9860

void UI_MapEditorTopPanel__SetTextButtonActive
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,bool active,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_o *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Color_o local_d8;
  UnityEngine_UI_ColorBlock_o local_c8;
  UnityEngine_UI_ColorBlock_o local_68;
  
  if (Il2CppMethodInitialized_1843475f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843475f5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (buttonObject != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (buttonObject,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = UI_UIManager__GetThemeColorBlock
                         (&local_68,panel,"DefaultButton","","DefaultPanel",
                          (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822d9abf;
      local_c8.fields.m_NormalColor.fields.r = (pUVar2->fields).m_NormalColor.fields.r;
      local_c8.fields.m_NormalColor.fields.g = (pUVar2->fields).m_NormalColor.fields.g;
      local_c8.fields.m_NormalColor.fields.b = (pUVar2->fields).m_NormalColor.fields.b;
      local_c8.fields.m_NormalColor.fields.a = (pUVar2->fields).m_NormalColor.fields.a;
      local_c8.fields.m_HighlightedColor.fields.r = (pUVar2->fields).m_HighlightedColor.fields.r;
      local_c8.fields.m_HighlightedColor.fields.g = (pUVar2->fields).m_HighlightedColor.fields.g;
      local_c8.fields.m_HighlightedColor.fields.b = (pUVar2->fields).m_HighlightedColor.fields.b;
      local_c8.fields.m_HighlightedColor.fields.a = (pUVar2->fields).m_HighlightedColor.fields.a;
      local_c8.fields.m_PressedColor.fields.r = (pUVar2->fields).m_PressedColor.fields.r;
      local_c8.fields.m_PressedColor.fields.g = (pUVar2->fields).m_PressedColor.fields.g;
      local_c8.fields.m_PressedColor.fields.b = (pUVar2->fields).m_PressedColor.fields.b;
      local_c8.fields.m_PressedColor.fields.a = (pUVar2->fields).m_PressedColor.fields.a;
      local_c8.fields.m_SelectedColor.fields.r = (pUVar2->fields).m_SelectedColor.fields.r;
      local_c8.fields.m_SelectedColor.fields.g = (pUVar2->fields).m_SelectedColor.fields.g;
      local_c8.fields.m_SelectedColor.fields.b = (pUVar2->fields).m_SelectedColor.fields.b;
      local_c8.fields.m_SelectedColor.fields.a = (pUVar2->fields).m_SelectedColor.fields.a;
      local_c8.fields.m_DisabledColor.fields.r = (pUVar2->fields).m_DisabledColor.fields.r;
      local_c8.fields.m_DisabledColor.fields.g = (pUVar2->fields).m_DisabledColor.fields.g;
      local_c8.fields.m_DisabledColor.fields.b = (pUVar2->fields).m_DisabledColor.fields.b;
      local_c8.fields.m_DisabledColor.fields.a = (pUVar2->fields).m_DisabledColor.fields.a;
      local_c8.fields.m_ColorMultiplier = (pUVar2->fields).m_ColorMultiplier;
      local_c8.fields.m_FadeDuration = (pUVar2->fields).m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors
                ((UnityEngine_UI_Selectable_o *)__this_00,&local_c8,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_GameObject__get_transform(buttonObject,(MethodInfo *)0x0);
    if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      local_d8.fields.r = 1.0;
      if (!active) {
        local_d8.fields.r = 0.5;
      }
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        local_d8.fields.a = 1.0;
        local_d8.fields.g = local_d8.fields.r;
        local_d8.fields.b = local_d8.fields.r;
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,&local_d8,(pUVar4->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
label_1822d9abf:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SetIcon
// il2cpp: void UI_MapEditorTopPanel__SetIcon (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* button, System_String_o* icon, const MethodInfo* method);
// 0x1822d9720

void UI_MapEditorTopPanel__SetIcon
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *button,System_String_o *icon,
               MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *pUVar2;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_1843475f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843475f6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (button != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (button,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                          );
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar2 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(path,icon,true,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
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
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnDeleteMap
// il2cpp: void UI_MapEditorTopPanel__OnDeleteMap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5fb0

void UI_MapEditorTopPanel__OnDeleteMap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_1843475f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843475f7 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    name = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__DeleteCustomMap(name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnNewFinish
// il2cpp: void UI_MapEditorTopPanel__OnNewFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d76e0

void
UI_MapEditorTopPanel__OnNewFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  System_String_o *name;
  Settings_MapEditorSettings_o *pSVar4;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_1843475f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843475f8 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._currentMap, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar3->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      name = (pSVar3->fields)._value;
      script = Map_MapScript__CreateDefault((MethodInfo *)0x0);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (pSVar4 != (Settings_MapEditorSettings_o *)0x0) {
        (*(pSVar4->klass->vtable)._18_Save.methodPtr)(pSVar4,(pSVar4->klass->vtable)._18_Save.method);
        ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnRenameFinish
// il2cpp: void UI_MapEditorTopPanel__OnRenameFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7ad0

void
UI_MapEditorTopPanel__OnRenameFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  Settings_StringSetting_o *pSVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *a;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *script;
  System_String_o *name;
  Settings_MapEditorSettings_o *pSVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_1843475f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843475f9 = '\x01';
  }
  pSVar1 = (__this->fields)._currentMap;
  if ((((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pUVar2 = (__this->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) &&
      (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar4 = (pUVar3->fields).FinishSetting, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    a = (pSVar1->fields)._value;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)(__this->fields)._currentMap,
               (Il2CppObject *)(pSVar4->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar1 = (__this->fields)._currentMap;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pGVar5 = (__this->fields)._gameManager, pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0)) {
      script = (pGVar5->fields).MapScript;
      name = (pSVar1->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (pSVar6 != (Settings_MapEditorSettings_o *)0x0) {
        (*(pSVar6->klass->vtable)._18_Save.methodPtr)(pSVar6,(pSVar6->klass->vtable)._18_Save.method);
        pSVar1 = (__this->fields)._currentMap;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          bVar7 = System_String__op_Inequality(a,(pSVar1->fields)._value,(MethodInfo *)0x0);
          if (bVar7) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            Map_BuiltinLevels__DeleteCustomMap(a,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnOpenFinish
// il2cpp: void UI_MapEditorTopPanel__OnOpenFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7800

void
UI_MapEditorTopPanel__OnOpenFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass78_0_o *object;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_1843475fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass78_0_OnOpenFinish_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass78_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_1843475fa = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass78_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass78_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      (object->fields).mapName = pSVar5;
      Il2CppCodeGenWriteBarrier(&(object->fields).mapName,pSVar5);
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (object->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar4);
      pMVar4 = (object->fields).script;
      pSVar5 = (object->fields).mapName;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadMap("Custom",pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (object->fields).script;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass78_0_OnOpenFinish_b__0,
                   (MethodInfo *)0x0);
        UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                  (__this,pMVar4,__this_00,(object->fields).mapName,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d72c0

void
UI_MapEditorTopPanel__OnImportFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__79_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Importing will overwrite current save.");
    Il2CppMethodInitialized_1843475fb = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__79_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Importing will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7090
// eh: try 0x1822d7149..0x1822d72b1 -> pad 0x1833157d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d721a: mov rax, qword ptr [rsp + 0x80]
// asm:   0x1822d7222: mov rdx, qword ptr [rax + 0x98]
// asm:   0x1822d7229: test rdx, rdx
// asm:   0x1822d722c: je 0x1822d7286
// asm:   0x1822d722e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822d7233: test rcx, rcx
// asm:   0x1822d7236: je 0x1822d7286
// asm:   0x1822d7238: mov rdi, qword ptr [rdx + 0x70]
// asm:   0x1822d723c: mov rax, qword ptr [rcx]
// asm:   0x1822d723f: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1822d7246: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1822d724c: mov rbx, rax
// asm:   0x1822d724f: lea rcx, [rip + 0x1df723a]  ; "Error importing: "
// asm:   0x1822d7256: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822d725b: mov rcx, rax
// asm:   0x1822d725e: xor r8d, r8d
// asm:   0x1822d7261: mov rdx, rbx
// asm:   0x1822d7264: call 0x181969e50  ; System_String__Concat()
// asm:   0x1822d7269: test rdi, rdi
// asm:   0x1822d726c: je 0x1822d7286
// asm:   0x1822d726e: xor r8d, r8d
// asm:   0x1822d7271: mov rdx, rax
// asm:   0x1822d7274: mov rcx, rdi
// asm:   0x1822d7277: call 0x1821c4b10  ; UI_ImportPopup__ShowError()
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

void UI_MapEditorTopPanel__OnImportConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass80_0_o *object;
  Map_MapScript_o *pMVar4;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_1843475fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass80_0_OnImportConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass80_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_1843475fc = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass80_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (UI_MapEditorTopPanel___c__DisplayClass80_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
  (object->fields).script = pMVar4;
  Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar4);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (pUVar1->fields).ImportPopup;
  if (pUVar2 == (UI_ImportPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pUVar2->fields).ImportSetting;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar4 = (object->fields).script;
  if (pMVar4 == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
            (pMVar4,(pSVar3->fields)._value,(pMVar4->klass->vtable)._5_Deserialize.method);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (pUVar1->fields).ImportPopup;
  if (pUVar2 != (UI_ImportPopup_o *)0x0) {
    (*(pUVar2->klass->vtable)._58_HideImmediate.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._58_HideImmediate.method);
    pMVar4 = (object->fields).script;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass80_0_OnImportConfirm_b__0,
               (MethodInfo *)0x0);
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                (__this,pMVar4,__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportPresetFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7580

void
UI_MapEditorTopPanel__OnImportPresetFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__81_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading preset will overwrite current save.");
    Il2CppMethodInitialized_1843475fd = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__81_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading preset will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportAutosaveFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportAutosaveFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6fd0

void
UI_MapEditorTopPanel__OnImportAutosaveFinish(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__82_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading autosave will overwrite current save.");
    Il2CppMethodInitialized_1843475fe = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__82_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading autosave will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportPresetConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7380

void UI_MapEditorTopPanel__OnImportPresetConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  UI_MapEditorTopPanel___c__DisplayClass83_0_o *object;
  System_String_array *pSVar4;
  Map_MapScript_o *pMVar5;
  System_String_o *pSVar6;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_1843475ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass83_0_OnImportPresetConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass83_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_1843475ff = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass83_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass83_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
        (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar6 = (pSVar3->fields)._value, pSVar6 != (System_String_o *)0x0)) {
      pSVar4 = System_String__Split(pSVar6,0x2f,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        if (((int)pSVar4->max_length == 0) || ((uint)pSVar4->max_length < 2)) {
          ThrowIndexOutOfRangeException();
        }
        pSVar6 = pSVar4->m_Items[0];
        name = pSVar4->m_Items[1];
        pMVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
        Map_MapScript___ctor(pMVar5,(MethodInfo *)0x0);
        (object->fields).script = pMVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar5);
        pMVar5 = (object->fields).script;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar6 = Map_BuiltinLevels__LoadMap(pSVar6,name,(MethodInfo *)0x0);
        if (pMVar5 != (Map_MapScript_o *)0x0) {
          (*(pMVar5->klass->vtable)._5_Deserialize.methodPtr)
                    (pMVar5,pSVar6,(pMVar5->klass->vtable)._5_Deserialize.method);
          pMVar5 = (object->fields).script;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass83_0_OnImportPresetConfirm_b__0,
                     (MethodInfo *)0x0);
          pSVar3 = (__this->fields)._currentMap;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                      (__this,pMVar5,__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportAutosaveConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportAutosaveConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6e20

void
UI_MapEditorTopPanel__OnImportAutosaveConfirm(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass84_0_o *object;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_184347600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnImportAutosaveConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184347600 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass84_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (object->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar4);
      pMVar4 = (object->fields).script;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadAutosave(pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (object->fields).script;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnImportAutosaveConfirm_b__0,
                   (MethodInfo *)0x0);
        pSVar3 = (__this->fields)._currentMap;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                    (__this,pMVar4,__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ContinueAfterVersionConfirmation
// il2cpp: void UI_MapEditorTopPanel__ContinueAfterVersionConfirmation (UI_MapEditorTopPanel_o* __this, Map_MapScript_o* script, UnityEngine_Events_UnityAction_o* continuation, System_String_o* backupName, const MethodInfo* method);
// 0x1822d4d90

void UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
               (UI_MapEditorTopPanel_o *__this,Map_MapScript_o *script,
               UnityEngine_Events_UnityAction_o *continuation,System_String_o *backupName,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorVersionConversionPopup_o *__this_00;
  Map_MapVersionConversionResult_o *result;
  int32_t iVar3;
  UI_MapEditorTopPanel___c__DisplayClass85_0_o *object;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (Il2CppMethodInitialized_184347601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass85_0_ContinueAfterVersionConfirmation_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass85_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184347601 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass85_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass85_0_o *)0x0) {
    (object->fields).backupName = backupName;
    Il2CppCodeGenWriteBarrier(&(object->fields).backupName,backupName);
    (object->fields).script = script;
    Il2CppCodeGenWriteBarrier(&(object->fields).script,script);
    (object->fields).continuation = continuation;
    Il2CppCodeGenWriteBarrier(&(object->fields).continuation,continuation);
    pMVar1 = (object->fields).script;
    if (pMVar1 != (Map_MapScript_o *)0x0) {
      if ((pMVar1->fields)._LastUpgradeResult_k__BackingField != (Map_MapVersionConversionResult_o *)0x0) {
        iVar3 = Map_MapVersionConversionResult__get_VersionCount
                          ((pMVar1->fields)._LastUpgradeResult_k__BackingField,(MethodInfo *)0x0);
        if (0 < iVar3) {
          pUVar2 = (__this->fields)._menu;
          if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
             (pMVar1 = (object->fields).script, pMVar1 != (Map_MapScript_o *)0x0)) {
            __this_00 = (pUVar2->fields).VersionConversionPopup;
            result = (pMVar1->fields)._LastUpgradeResult_k__BackingField;
            pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_MapEditorTopPanel_c__DisplayClass85_0_ContinueAfterVersionConfirmation_b__0
                       ,(MethodInfo *)0x0);
            if (__this_00 != (UI_MapEditorVersionConversionPopup_o *)0x0) {
              UI_MapEditorVersionConversionPopup__Show(__this_00,result,pUVar4,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_1822d4ed3;
        }
      }
      pUVar4 = (object->fields).continuation;
      if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        return;
      }
    }
  }
label_1822d4ed3:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$.ctor
// il2cpp: void UI_MapEditorTopPanel___ctor (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbce0

void UI_MapEditorTopPanel___ctor(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_String_o *value;
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_DropdownSelectElement__o *__this_01;
  
  if (Il2CppMethodInitialized_184347602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DropdownSelectElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_DropdownSelectElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347602 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._dropdownSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdownSelection,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._toolDropdownSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toolDropdownSelection,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._playMode = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._playMode,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DropdownSelectElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_DropdownSelectElement_ctor);
  (__this->fields)._dropdowns = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdowns,__this_01);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._selectedTool = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool,value);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$.cctor
// il2cpp: void UI_MapEditorTopPanel___cctor (const MethodInfo* method);
// 0x1822dbb80

void UI_MapEditorTopPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  Settings_ListSetting_T__o *pSVar2;
  
  if (Il2CppMethodInitialized_184347603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_184347603 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar1,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pSVar2 = (Settings_ListSetting_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
  Settings_HashSetSetting_int____ctor
            (pSVar2,(System_Collections_Generic_List_T__o *)pSVar1,
             (MethodInfo_1755D40 *)MethodInfo_Settings_HashSetSetting_int_ctor);
  TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection = (Settings_HashSetSetting_int__o *)pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection,pSVar2);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar1,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_int___Add
              (pSVar1,0,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    pSVar2 = (Settings_ListSetting_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
    Settings_HashSetSetting_int____ctor
              (pSVar2,(System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_1755D40 *)MethodInfo_Settings_HashSetSetting_int_ctor);
    TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection = (Settings_HashSetSetting_int__o *)pSVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection,pSVar2);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_0
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbb10

void UI_MapEditorTopPanel___Setup_b__41_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnFileClick(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_1
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6040

void UI_MapEditorTopPanel___Setup_b__41_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *__this_00;
  Settings_IntSetting_o *pSVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843475e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843475e3 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar4 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pSVar2 = (__this->fields)._dropdownSelection;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      iVar1 = (pSVar2->fields)._value;
      if (iVar1 == 0) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Undo(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 1) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Redo(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 2) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Copy(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 3) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Paste(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (iVar1 == 4) {
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Cut(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (iVar1 != 5) {
          return;
        }
        pGVar3 = (__this->fields)._gameManager;
        if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Delete(pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_2
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d79c0

void UI_MapEditorTopPanel___Setup_b__41_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *pUVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  UI_MapEditorCustomAssetPopup_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843475e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843475e4 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
    bVar4 = UI_MapEditorMenu__IsPopupActive(pUVar2,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pSVar3 = (__this->fields)._dropdownSelection;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      iVar1 = (pSVar3->fields)._value;
      if (iVar1 == 0) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).SettingsPopup;
      }
      else if (iVar1 == 1) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).InfoPopup;
      }
      else if (iVar1 == 2) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).WeatherPopup;
      }
      else if (iVar1 == 3) {
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (UI_MapEditorCustomAssetPopup_o *)(pUVar2->fields).CustomLogicPopup;
      }
      else {
        if (iVar1 != 4) {
          return;
        }
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_1822d7ab7;
        pUVar5 = (pUVar2->fields).CustomAssetsPopup;
      }
      if (pUVar5 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        (*(pUVar5->klass->vtable)._21_Show.methodPtr)(pUVar5,(pUVar5->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
label_1822d7ab7:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_3
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbb30

void UI_MapEditorTopPanel___Setup_b__41_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    Il2CppMethodInitialized_184347604 = '\x01';
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"AddObject",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_4
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d5a80

void UI_MapEditorTopPanel___Setup_b__41_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmoMode
              (__this_00,(uint)((__this_00->fields).CurrentGizmoMode == 0),(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_5
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822db990

void UI_MapEditorTopPanel___Setup_b__41_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar1->fields).Snap = (pGVar1->fields).Snap == false;
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_6
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7c50

void UI_MapEditorTopPanel___Setup_b__41_6(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_1843475ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843475ed = '\x01';
  }
  pSVar2 = (__this->fields)._toolDropdownSelection;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value == 3) {
      UI_MapEditorTopPanel__OnButtonClick(__this,"Tutorial",(MethodInfo *)0x0);
      return;
    }
    pIVar5 = SZArrayNew(TypeInfo_string_array,3);
    pSVar3 = "Camera";
    if (pIVar5 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar5[1].monitor != 0) {
        pIVar5[2].klass = (Il2CppClass *)"Camera";
        Il2CppCodeGenWriteBarrier(&pIVar5[2].klass,pSVar3);
        pSVar3 = "Brush";
        if (1 < *(uint *)&pIVar5[1].monitor) {
          pIVar5[2].monitor = "Brush";
          Il2CppCodeGenWriteBarrier(&pIVar5[2].monitor,pSVar3);
          pSVar3 = "Ruler";
          if (2 < *(uint *)&pIVar5[1].monitor) {
            pIVar5[3].klass = (Il2CppClass *)"Ruler";
            Il2CppCodeGenWriteBarrier(&pIVar5[3].klass,pSVar3);
            pSVar2 = (__this->fields)._toolDropdownSelection;
            if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_1822d7da6;
            uVar1 = (pSVar2->fields)._value;
            if ((((int)uVar1 < 0) || (uVar4 = *(int *)&pIVar5[1].monitor - 1, (int)uVar1 <= (int)uVar4)) &&
               (uVar4 = uVar1, (int)uVar1 < 0)) {
              uVar4 = 0;
            }
            if (uVar4 < *(uint *)&pIVar5[1].monitor) {
              UI_MapEditorTopPanel__SelectTool
                        (__this,(System_String_o *)(&pIVar5[2].klass)[(int)uVar4],(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1822d7da6:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_7
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6d80

void UI_MapEditorTopPanel___Setup_b__41_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  Settings_HashSetSetting_int__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843475ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    Il2CppMethodInitialized_1843475ef = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar1 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  if ((pSVar1 != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__SetGridAxes
              (__this_00,(System_Collections_Generic_HashSet_int__o *)(pSVar1->fields)._value,
               (MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_8
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_8 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbb70

void UI_MapEditorTopPanel___Setup_b__41_8(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__ToggleLights(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_9
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7640

void UI_MapEditorTopPanel___Setup_b__41_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843475e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_1843475e9 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_01 = (__this->fields)._gameManager;
      if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      if (__this_01 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822d76d7;
      GameManagers_MapEditorGameManager__SetLayerVisibility
                (__this_01,TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection,(MethodInfo *)0x0);
      UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    }
    return;
  }
label_1822d76d7:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<Setup>b__41_10
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_10 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7ac0

void UI_MapEditorTopPanel___Setup_b__41_10(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._playModeExplicitlySelected = true;
  UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_11
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_11 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbb20

void UI_MapEditorTopPanel___Setup_b__41_11(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__PlayMap(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_0
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822db9c0

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    Il2CppMethodInitialized_184347605 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Position",(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_1
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dba20

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347606 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_184347606 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Rotation",(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_2
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dba80

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    Il2CppMethodInitialized_184347607 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Scale",(MethodInfo *)0x0);
    UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_5
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d76e0

void UI_MapEditorTopPanel___OnFileClick_b__48_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  System_String_o *name;
  Settings_MapEditorSettings_o *pSVar4;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_1843475f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843475f8 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._currentMap, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar3->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      name = (pSVar3->fields)._value;
      script = Map_MapScript__CreateDefault((MethodInfo *)0x0);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (pSVar4 != (Settings_MapEditorSettings_o *)0x0) {
        (*(pSVar4->klass->vtable)._18_Save.methodPtr)(pSVar4,(pSVar4->klass->vtable)._18_Save.method);
        ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_6
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbae0

void
UI_MapEditorTopPanel___OnFileClick_b__48_6(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_0
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7800

void UI_MapEditorTopPanel___OnFileClick_b__48_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass78_0_o *object;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_1843475fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass78_0_OnOpenFinish_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass78_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_1843475fa = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass78_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass78_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      (object->fields).mapName = pSVar5;
      Il2CppCodeGenWriteBarrier(&(object->fields).mapName,pSVar5);
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (object->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar4);
      pMVar4 = (object->fields).script;
      pSVar5 = (object->fields).mapName;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadMap("Custom",pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (object->fields).script;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass78_0_OnOpenFinish_b__0,
                   (MethodInfo *)0x0);
        UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                  (__this,pMVar4,__this_00,(object->fields).mapName,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_1
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbae0

void
UI_MapEditorTopPanel___OnFileClick_b__48_1(UI_MapEditorTopPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_2
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7ad0

void UI_MapEditorTopPanel___OnFileClick_b__48_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *a;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *script;
  System_String_o *name;
  Settings_MapEditorSettings_o *pSVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_1843475f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843475f9 = '\x01';
  }
  pSVar1 = (__this->fields)._currentMap;
  if ((((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pUVar2 = (__this->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) &&
      (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar4 = (pUVar3->fields).FinishSetting, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    a = (pSVar1->fields)._value;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)(__this->fields)._currentMap,
               (Il2CppObject *)(pSVar4->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar1 = (__this->fields)._currentMap;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pGVar5 = (__this->fields)._gameManager, pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0)) {
      script = (pGVar5->fields).MapScript;
      name = (pSVar1->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (pSVar6 != (Settings_MapEditorSettings_o *)0x0) {
        (*(pSVar6->klass->vtable)._18_Save.methodPtr)(pSVar6,(pSVar6->klass->vtable)._18_Save.method);
        pSVar1 = (__this->fields)._currentMap;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          bVar7 = System_String__op_Inequality(a,(pSVar1->fields)._value,(MethodInfo *)0x0);
          if (bVar7) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            Map_BuiltinLevels__DeleteCustomMap(a,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_3
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbae0

void UI_MapEditorTopPanel___OnFileClick_b__48_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_4
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d72c0

void UI_MapEditorTopPanel___OnFileClick_b__48_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__79_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Importing will overwrite current save.");
    Il2CppMethodInitialized_1843475fb = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__79_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Importing will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_7
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d7580

void UI_MapEditorTopPanel___OnFileClick_b__48_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__81_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading preset will overwrite current save.");
    Il2CppMethodInitialized_1843475fd = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__81_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading preset will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_9
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6fd0

void UI_MapEditorTopPanel___OnFileClick_b__48_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843475fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__82_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading autosave will overwrite current save.");
    Il2CppMethodInitialized_1843475fe = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__82_0,(MethodInfo *)0x0);
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading autosave will overwrite current save.",__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$<OnImportFinish>b__79_0
// il2cpp: void UI_MapEditorTopPanel___OnImportFinish_b__79_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbaf0

void UI_MapEditorTopPanel___OnImportFinish_b__79_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportConfirm(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnImportPresetFinish>b__81_0
// il2cpp: void UI_MapEditorTopPanel___OnImportPresetFinish_b__81_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822dbb00

void UI_MapEditorTopPanel___OnImportPresetFinish_b__81_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportPresetConfirm(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnImportAutosaveFinish>b__82_0
// il2cpp: void UI_MapEditorTopPanel___OnImportAutosaveFinish_b__82_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x1822d6e20

void UI_MapEditorTopPanel___OnImportAutosaveFinish_b__82_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass84_0_o *object;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_184347600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnImportAutosaveConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184347600 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorTopPanel___c__DisplayClass84_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (object->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).script,pMVar4);
      pMVar4 = (object->fields).script;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadAutosave(pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (object->fields).script;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnImportAutosaveConfirm_b__0,
                   (MethodInfo *)0x0);
        pSVar3 = (__this->fields)._currentMap;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                    (__this,pMVar4,__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


