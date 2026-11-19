// Type: UI.MapEditorTopPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorTopPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs
// --------------------------------

// UI.MapEditorTopPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTopPanel___c___cctor (const MethodInfo* method);
// 0x5da7760

void UI_MapEditorTopPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075480ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c);
    Il2CppMethodInitialized_075480ca = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9 = (UI_MapEditorTopPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel_c->static_fields->__9);
  return;
}


// UI.MapEditorTopPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c___ctor (UI_MapEditorTopPanel___c_o* __this, const MethodInfo* method);
// 0x5da77d0

void UI_MapEditorTopPanel___c___ctor(UI_MapEditorTopPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c$$<OnFileClick>b__48_8
// il2cpp: System_String_o* UI_MapEditorTopPanel___c___OnFileClick_b__48_8 (UI_MapEditorTopPanel___c_o* __this, System_String_o* c, const MethodInfo* method);
// 0x5da77e0

System_String_o *
UI_MapEditorTopPanel___c___OnFileClick_b__48_8
          (UI_MapEditorTopPanel___c_o *__this,System_String_o *c,MethodInfo *method)

{
  return c;
}


// UI.MapEditorTopPanel.<>c$$<Autosave>b__50_0
// il2cpp: System_DateTime_o UI_MapEditorTopPanel___c___Autosave_b__50_0 (UI_MapEditorTopPanel___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x5da77f0

System_DateTime_o
UI_MapEditorTopPanel___c___Autosave_b__50_0
          (UI_MapEditorTopPanel___c_o *__this,System_IO_FileInfo_o *x,MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (x == (System_IO_FileInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  SVar1 = System_IO_FileSystemInfo__get_LastWriteTime((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
  return (System_DateTime_o)SVar1.fields._dateData;
}


// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass83_0___ctor (UI_MapEditorTopPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x5da5640

void UI_MapEditorTopPanel___c__DisplayClass83_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$<OnNewFinish>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass83_0___OnNewFinish_b__0 (UI_MapEditorTopPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x5da7810

void UI_MapEditorTopPanel___c__DisplayClass83_0___OnNewFinish_b__0
               (UI_MapEditorTopPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  System_String_o *name;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075480cb = '\x01';
  }
  name = (__this->fields).newMap;
  script = Map_MapScript__CreateDefault((MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass84_0___ctor (UI_MapEditorTopPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5da5830

void UI_MapEditorTopPanel___c__DisplayClass84_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$<OnRenameFinish>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass84_0___OnRenameFinish_b__0 (UI_MapEditorTopPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5da7870

void UI_MapEditorTopPanel___c__DisplayClass84_0___OnRenameFinish_b__0
               (UI_MapEditorTopPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *newName;
  UI_MapEditorTopPanel_o *pUVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075480cc = '\x01';
  }
  if ((__this->fields).sameFile != false) {
    pSVar1 = (__this->fields).oldMap;
    newName = (__this->fields).newMap;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__RenameCustomMap(pSVar1,newName,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 == (UI_MapEditorTopPanel_o *)0x0) ||
     (pGVar3 = (pUVar2->fields)._gameManager, pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = (__this->fields).newMap;
  script = (pGVar3->fields).MapScript;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(pSVar1,script,(MethodInfo *)0x0);
  if (((__this->fields).renamed == false) || ((__this->fields).sameFile != false)) {
    return;
  }
  pSVar1 = (__this->fields).oldMap;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__DeleteCustomMap(pSVar1,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass86_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass86_0___ctor (UI_MapEditorTopPanel___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x5da5a00

void UI_MapEditorTopPanel___c__DisplayClass86_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass86_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass86_0$$<OnOpenFinish>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass86_0___OnOpenFinish_b__0 (UI_MapEditorTopPanel___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x5da7960

void UI_MapEditorTopPanel___c__DisplayClass86_0___OnOpenFinish_b__0
               (UI_MapEditorTopPanel___c__DisplayClass86_0_o *__this,MethodInfo *method)

{
  System_String_o *name;
  Map_MapScript_o *script;
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *__this_00;
  Settings_MapEditorSettings_o *pSVar2;
  
  if (Il2CppMethodInitialized_075480cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_075480cd = '\x01';
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
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (pSVar2 != (Settings_MapEditorSettings_o *)0x0) {
      (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
      ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel.<>c__DisplayClass88_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass88_0___ctor (UI_MapEditorTopPanel___c__DisplayClass88_0_o* __this, const MethodInfo* method);
// 0x5da5fe0

void UI_MapEditorTopPanel___c__DisplayClass88_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass88_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass88_0$$<OnImportConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass88_0___OnImportConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass88_0_o* __this, const MethodInfo* method);
// 0x5da7a40

void UI_MapEditorTopPanel___c__DisplayClass88_0___OnImportConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass88_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *name;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075480ce = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorTopPanel_o *)0x0) ||
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  name = (pSVar2->fields)._value;
  script = (__this->fields).script;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass91_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass91_0___ctor (UI_MapEditorTopPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5da6520

void UI_MapEditorTopPanel___c__DisplayClass91_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass91_0$$<OnImportPresetConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass91_0___OnImportPresetConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5da7ad0

void UI_MapEditorTopPanel___c__DisplayClass91_0___OnImportPresetConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *name;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075480cf = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorTopPanel_o *)0x0) ||
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  name = (pSVar2->fields)._value;
  script = (__this->fields).script;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass92_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass92_0___ctor (UI_MapEditorTopPanel___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x5da66d0

void UI_MapEditorTopPanel___c__DisplayClass92_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass92_0$$<OnImportAutosaveConfirm>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass92_0___OnImportAutosaveConfirm_b__0 (UI_MapEditorTopPanel___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x5da7b60

void UI_MapEditorTopPanel___c__DisplayClass92_0___OnImportAutosaveConfirm_b__0
               (UI_MapEditorTopPanel___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *name;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075480d0 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorTopPanel_o *)0x0) ||
     (pSVar2 = (pUVar1->fields)._currentMap, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  name = (pSVar2->fields)._value;
  script = (__this->fields).script;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass93_0$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass93_0___ctor (UI_MapEditorTopPanel___c__DisplayClass93_0_o* __this, const MethodInfo* method);
// 0x5da66e0

void UI_MapEditorTopPanel___c__DisplayClass93_0___ctor
               (UI_MapEditorTopPanel___c__DisplayClass93_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c__DisplayClass93_0$$<ContinueAfterVersionConfirmation>b__0
// il2cpp: void UI_MapEditorTopPanel___c__DisplayClass93_0___ContinueAfterVersionConfirmation_b__0 (UI_MapEditorTopPanel___c__DisplayClass93_0_o* __this, const MethodInfo* method);
// 0x5da7bf0

void UI_MapEditorTopPanel___c__DisplayClass93_0___ContinueAfterVersionConfirmation_b__0
               (UI_MapEditorTopPanel___c__DisplayClass93_0_o *__this,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapVersionConversionResult_o *pMVar2;
  System_String_o *name;
  System_String_o *map;
  System_String_o *version;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_075480d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075480d1 = '\x01';
  }
  pMVar1 = (__this->fields).script;
  if ((pMVar1 != (Map_MapScript_o *)0x0) &&
     (pMVar2 = (pMVar1->fields)._LastUpgradeResult_k__BackingField,
     pMVar2 != (Map_MapVersionConversionResult_o *)0x0)) {
    name = (__this->fields).backupName;
    map = (pMVar1->fields)._OriginalCSV_k__BackingField;
    version = (pMVar2->fields)._OriginalVersion_k__BackingField;
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
// 0x5d9cff0

float UI_MapEditorTopPanel__get_Width(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 1960.0;
}


// UI.MapEditorTopPanel$$get_Height
// il2cpp: float UI_MapEditorTopPanel__get_Height (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d000

float UI_MapEditorTopPanel__get_Height(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.MapEditorTopPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_TopBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d010

float UI_MapEditorTopPanel__get_TopBarHeight(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_BottomBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d020

float UI_MapEditorTopPanel__get_BottomBarHeight(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorTopPanel__get_VerticalSpacing (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d030

float UI_MapEditorTopPanel__get_VerticalSpacing(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_HorizontalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d040

int32_t UI_MapEditorTopPanel__get_HorizontalPadding(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MapEditorTopPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_VerticalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d050

int32_t UI_MapEditorTopPanel__get_VerticalPadding(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorTopPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorTopPanel__get_ThemePanel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9d060

System_String_o * UI_MapEditorTopPanel__get_ThemePanel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    Il2CppMethodInitialized_07548093 = '\x01';
  }
  return "MapEditor";
}


// UI.MapEditorTopPanel$$Setup
// il2cpp: void UI_MapEditorTopPanel__Setup (UI_MapEditorTopPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d9d090
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9d5c2: lea rdi, [r15 + 0x98]
// asm:   0x5d9d5c9: jmp 0x5d9d5f8
// asm:   0x5d9d6a9: lea rbp, [r15 + 0xa0]
// asm:   0x5d9d6b0: jmp 0x5d9d6c4
// asm:   0x5d9dde0: jmp 0x5d9f4e3
// asm:   0x5d9ef3f: lea rax, [rip + 0x1544b0a]  ; "None"
// asm:   0x5d9ef46: test rbx, rbx
// asm:   0x5d9ef49: jne 0x5d9f06c
// asm:   0x5d9ef4f: jmp 0x5d9f4e3
// asm:   0x5d9f038: jmp 0x5d9f4e3
// asm:   0x5d9f2b5: jmp 0x5d9f2de
// asm:   0x5d9f5fb: jmp 0x5d9f547

void UI_MapEditorTopPanel__Setup(UI_MapEditorTopPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_StringSetting_o **ppSVar2;
  byte bVar3;
  uint32_t uVar4;
  uint uVar5;
  Settings_MapEditorSettings_o *pSVar6;
  System_Collections_Generic_List_DropdownSelectElement__o *pSVar7;
  UI_DropdownSelectElement_array *pUVar8;
  Settings_HashSetSetting_int__o *pSVar9;
  Settings_StringSetting_o *pSVar10;
  Map_MapScript_o *pMVar11;
  System_Object_array *pSVar12;
  Il2CppType *handle;
  UI_MapEditorTopPanel_o *pUVar13;
  bool bVar14;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  System_Collections_Generic_List_string__o *pSVar17;
  Il2CppObject *pIVar18;
  ulong uVar19;
  System_String_array *pSVar20;
  UnityEngine_Events_UnityAction_o *pUVar21;
  UI_DropdownSelectElement_o *pUVar22;
  UI_HoverTooltip_o *pUVar23;
  System_String_o *pSVar24;
  System_Type_array *components;
  System_Type_o *pSVar25;
  UnityEngine_Transform_o *pUVar26;
  UnityEngine_UI_LayoutElement_o *pUVar27;
  UI_MultiSelectDropdownElement_o *pUVar28;
  UnityEngine_UI_RawImage_o *pUVar29;
  System_Action_o *pSVar30;
  System_String_o **ppSVar31;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *pMVar32;
  UI_MapEditorTopPanel_o *__this_01;
  GameManagers_MapEditorGameManager_c *pGVar33;
  MethodInfo *method_00;
  Il2CppClass *item;
  GameManagers_MapEditorGameManager_o **targetAddress;
  ulong uVar34;
  MethodInfo *pMVar35;
  MethodInfo *pMVar36;
  UI_MapEditorMenu_o *pUVar37;
  Il2CppClass *pIVar38;
  Settings_IntSetting_o *pSVar39;
  MethodInfo *in_R9;
  UnityEngine_Color_o iconColor;
  UnityEngine_Color_o normal;
  UnityEngine_Color_o highlighted;
  System_Nullable_float__Fields SStack_88;
  MethodInfo *pMStack_80;
  UnityEngine_Transform_o *pUStack_78;
  UI_MapEditorTopPanel_o *pUStack_70;
  Settings_IntSetting_o *pSStack_68;
  System_Nullable_float__Fields SStack_60;
  System_Nullable_float__Fields SStack_58;
  System_Nullable_float__Fields SStack_50;
  Settings_StringSetting_o **ppSStack_48;
  GameManagers_MapEditorGameManager_o **ppGStack_40;
  Settings_IntSetting_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07548094 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"Open");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Lighting");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Tools");
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoOrientation");
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
    il2cpp_codegen_initialize_runtime_metadata(&"PlayMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_07548094 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar37 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar37 != (UI_MapEditorMenu_o *)0x0) goto label_05d9d568;
label_05d9d5e6:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    pUVar37 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar37 == (UI_MapEditorMenu_o *)0x0) goto label_05d9d5e6;
label_05d9d568:
    pGVar33 = (GameManagers_MapEditorGameManager_c *)TypeInfo_UI_MapEditorMenu;
    bVar3 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) goto label_05d9f4ed;
    (__this->fields)._menu = pUVar37;
    if (((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)pGVar33)) goto label_05d9f4ed;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto label_05d9f4e3;
  ppSVar2 = &(__this->fields)._currentMap;
  (__this->fields)._currentMap = (pSVar6->fields).CurrentMap;
  Il2CppCodeGenWriteBarrier(ppSVar2);
  pGVar33 = TypeInfo_GameManagers_MapEditorGameManager;
  pUVar37 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar37 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar3 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
label_05d9f4ed:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar37,pGVar33);
    }
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar37;
    if (((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((GameManagers_BaseGameManager_c *)pUVar37->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)pGVar33)) goto label_05d9f4ed;
  }
  targetAddress = &(__this->fields)._gameManager;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSStack_68 = (Settings_IntSetting_o *)"MapEditor";
  pSVar15 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pMStack_80 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMStack_80,0x18,0.0,20.0,pSVar15,(MethodInfo *)0x0);
  pUStack_70 = __this;
  pUVar16 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pUStack_78 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar17,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar18 = SZArrayNew(TypeInfo_string_array,10);
  if (pIVar18 == (Il2CppObject *)0x0) goto label_05d9f4e3;
  ppGStack_40 = targetAddress;
  if (*(int *)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
  pIVar18[2].klass = (Il2CppClass *)"New";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
  pIVar18[2].monitor = "Open";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].monitor);
  if (*(uint *)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
  pIVar18[3].klass = (Il2CppClass *)"Rename";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
  pIVar18[3].monitor = "Save";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].monitor);
  if (*(uint *)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
  pIVar18[4].klass = (Il2CppClass *)"Import";
  Il2CppCodeGenWriteBarrier(&pIVar18[4].klass);
  if (*(uint *)&pIVar18[1].monitor < 6) goto label_05d9f4e8;
  pIVar18[4].monitor = "Export";
  Il2CppCodeGenWriteBarrier(&pIVar18[4].monitor);
  if (*(uint *)&pIVar18[1].monitor < 7) goto label_05d9f4e8;
  pIVar18[5].klass = (Il2CppClass *)"LoadPreset";
  Il2CppCodeGenWriteBarrier(&pIVar18[5].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffff8) == 0) goto label_05d9f4e8;
  pIVar18[5].monitor = "LoadAutosave";
  Il2CppCodeGenWriteBarrier(&pIVar18[5].monitor);
  if (*(uint *)&pIVar18[1].monitor < 9) goto label_05d9f4e8;
  pIVar18[6].klass = (Il2CppClass *)"Quit";
  ppSStack_48 = ppSVar2;
  Il2CppCodeGenWriteBarrier(&pIVar18[6].klass);
  if (*(uint *)&pIVar18[1].monitor < 10) goto label_05d9f4e8;
  pIVar18[6].monitor = "SaveQuit";
  Il2CppCodeGenWriteBarrier(&pIVar18[6].monitor);
  if (0 < (int)pIVar18[1].monitor) {
    if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
      pIVar38 = pIVar18[2].klass;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        if (g_data_07548101 != '\0') goto label_05d9f52f;
label_05d9f5b9:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Common");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        g_data_07548101 = '\x01';
        uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_07548101 == '\0') goto label_05d9f5b9;
label_05d9f52f:
        uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      item = (Il2CppClass *)"";
      pSVar39 = (Settings_IntSetting_o *)"Common";
      goto label_05d9f59a;
    }
    uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
    uVar34 = 0;
    do {
      if (uVar19 <= uVar34) goto label_05d9f4e8;
      pIVar38 = (&pIVar18[2].klass)[uVar34];
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        if (g_data_07548101 != '\0') goto label_05d9d990;
label_05d9da19:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Common");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        g_data_07548101 = '\x01';
        uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_07548101 == '\0') goto label_05d9da19;
label_05d9d990:
        uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar15 = UI_UIManager__GetLocale
                          ("Common",(System_String_o *)pIVar38,"",
                           "","",in_R9);
      pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(pSVar17->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar17->fields)._items;
      if (pSVar20 == (System_String_array *)0x0) goto label_05d9f4e3;
      uVar5 = (pSVar17->fields)._size;
      if (uVar5 < (uint)pSVar20->max_length) {
        (pSVar17->fields)._size = uVar5 + 1;
        pSVar20->m_Items[(int)uVar5] = pSVar15;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar15,
                   (MethodInfo_395D230 *)pMVar32->klass->rgctx_data[0xe].method);
      }
      uVar34 = uVar34 + 1;
      uVar19 = (ulong)*(uint *)&pIVar18[1].monitor;
    } while ((long)uVar34 < (long)(int)*(uint *)&pIVar18[1].monitor);
  }
  pSStack_38 = (pUStack_70->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ((System_String_o *)pSStack_68,"Top","File",
                       "","",in_R9);
  if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d9f4e3;
  pSVar20 = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)pSVar17,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  SStack_88.hasValue = false;
  SStack_88._1_3_ = 0;
  SStack_88.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_88,180.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  pUVar13 = pUStack_70;
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUStack_70,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_0,
             (MethodInfo *)0x0);
  pMVar32 = (MethodInfo *)"";
  pUVar16 = UI_ElementFactory__CreateDropdownSelect
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,(Settings_BaseSetting_o *)pSStack_38,pSVar15
                       ,pSVar20,"",100.0,40.0,500.0,(System_Nullable_float__o)SStack_88,
                       pUVar21,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pSVar7 = (pUVar13->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_05d9f4e3;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_05d9f4e3;
  uVar5 = (pSVar7->fields)._size;
  if (uVar5 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar5 + 1;
    pUVar8->m_Items[(int)uVar5] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_395D230 *)pMVar36->klass->rgctx_data[0xe].method);
  }
  pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar17,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar18 = SZArrayNew(TypeInfo_string_array,6);
  if (pIVar18 == (Il2CppObject *)0x0) goto label_05d9f4e3;
  if (*(int *)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
  pIVar18[2].klass = (Il2CppClass *)"Undo";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
  pIVar18[2].monitor = "Redo";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].monitor);
  if (*(uint *)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
  pIVar18[3].klass = (Il2CppClass *)"Copy";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
  pIVar18[3].monitor = "Paste";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].monitor);
  if (*(uint *)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
  pIVar18[4].klass = (Il2CppClass *)"Cut";
  Il2CppCodeGenWriteBarrier(&pIVar18[4].klass);
  if (*(uint *)&pIVar18[1].monitor < 6) goto label_05d9f4e8;
  pIVar18[4].monitor = "Delete";
  Il2CppCodeGenWriteBarrier(&pIVar18[4].monitor);
  if (0 < (int)pIVar18[1].monitor) {
    uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
    uVar34 = 0;
    do {
      if (uVar19 <= uVar34) goto label_05d9f4e8;
      pIVar38 = (&pIVar18[2].klass)[uVar34];
      bVar14 = System_String__op_Equality((System_String_o *)pIVar38,"Copy",(MethodInfo *)0x0);
      if ((bVar14) ||
         (bVar14 = System_String__op_Equality
                             ((System_String_o *)pIVar38,"Delete",(MethodInfo *)0x0), bVar14)) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          if (g_data_07548101 != '\0') goto label_05d9ddac;
label_05d9de05:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Common");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          g_data_07548101 = '\x01';
          uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (g_data_07548101 == '\0') goto label_05d9de05;
label_05d9ddac:
          uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        }
        if (uVar4 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar15 = UI_UIManager__GetLocale
                            ("Common",(System_String_o *)pIVar38,"",
                             "","",pMVar32);
        pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
      }
      else {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar15 = UI_UIManager__GetLocale
                            ("MapEditorSettings","Keybinds",(System_String_o *)pIVar38,
                             "","",pMVar32);
        pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
      }
      MethodInfo_System_Collections_Generic_List_string_Add = pMVar36;
      if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d9f4e3;
      piVar1 = &(pSVar17->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar17->fields)._items;
      if (pSVar20 == (System_String_array *)0x0) goto label_05d9f4e3;
      uVar5 = (pSVar17->fields)._size;
      if (uVar5 < (uint)pSVar20->max_length) {
        (pSVar17->fields)._size = uVar5 + 1;
        pSVar20->m_Items[(int)uVar5] = pSVar15;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar15,
                   (MethodInfo_395D230 *)pMVar36->klass->rgctx_data[0xe].method);
      }
      uVar34 = uVar34 + 1;
      uVar19 = (ulong)*(uint *)&pIVar18[1].monitor;
    } while ((long)uVar34 < (long)(int)*(uint *)&pIVar18[1].monitor);
  }
  pSVar39 = (pUStack_70->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    if (g_data_07548101 != '\0') goto label_05d9df1a;
label_05d9ef70:
    pSVar15 = "Edit";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    g_data_07548101 = '\x01';
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548101 == '\0') goto label_05d9ef70;
label_05d9df1a:
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar15 = "Edit";
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("Common",pSVar15,"","",
                       "",pMVar32);
  if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d9f4e3;
  pSVar20 = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)pSVar17,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  SStack_88.hasValue = false;
  SStack_88._1_3_ = 0;
  SStack_88.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_88,180.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  pUVar13 = pUStack_70;
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUStack_70,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_1,
             (MethodInfo *)0x0);
  in_R9 = (MethodInfo *)"";
  pUVar16 = UI_ElementFactory__CreateDropdownSelect
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,(Settings_BaseSetting_o *)pSVar39,pSVar15,
                       pSVar20,"",100.0,40.0,500.0,(System_Nullable_float__o)SStack_88,
                       pUVar21,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pSVar7 = (pUVar13->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar32 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_05d9f4e3;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_05d9f4e3;
  uVar5 = (pSVar7->fields)._size;
  if (uVar5 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar5 + 1;
    pUVar8->m_Items[(int)uVar5] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_395D230 *)pMVar32->klass->rgctx_data[0xe].method);
  }
  pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar17,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar18 = SZArrayNew(TypeInfo_string_array,5);
  if (pIVar18 == (Il2CppObject *)0x0) goto label_05d9f4e3;
  if (*(int *)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
  pIVar18[2].klass = (Il2CppClass *)"Editor";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
  pIVar18[2].monitor = "MapInfo";
  Il2CppCodeGenWriteBarrier(&pIVar18[2].monitor);
  if (*(uint *)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
  pIVar18[3].klass = (Il2CppClass *)"Weather";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].klass);
  if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
  pIVar18[3].monitor = "CustomLogic";
  Il2CppCodeGenWriteBarrier(&pIVar18[3].monitor);
  if (*(uint *)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
  pIVar18[4].klass = (Il2CppClass *)"CustomAssets";
  Il2CppCodeGenWriteBarrier(&pIVar18[4].klass);
  if (0 < (int)pIVar18[1].monitor) {
    if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
      item = pIVar18[2].klass;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pIVar38 = (Il2CppClass *)"Top";
      pSVar39 = pSStack_68;
label_05d9f59a:
      UI_UIManager__GetLocale
                ((System_String_o *)pSVar39,(System_String_o *)pIVar38,(System_String_o *)item,
                 "","",in_R9);
      ThrowNullReferenceException();
    }
    uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
    uVar34 = 0;
    do {
      if (uVar19 <= uVar34) goto label_05d9f4e8;
      pIVar38 = (&pIVar18[2].klass)[uVar34];
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar15 = UI_UIManager__GetLocale
                          ((System_String_o *)pSStack_68,"Top",(System_String_o *)pIVar38,
                           "","",in_R9);
      pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(pSVar17->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar17->fields)._items;
      if (pSVar20 == (System_String_array *)0x0) goto label_05d9f4e3;
      uVar5 = (pSVar17->fields)._size;
      if (uVar5 < (uint)pSVar20->max_length) {
        (pSVar17->fields)._size = uVar5 + 1;
        pSVar20->m_Items[(int)uVar5] = pSVar15;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar15,
                   (MethodInfo_395D230 *)pMVar32->klass->rgctx_data[0xe].method);
      }
      uVar34 = uVar34 + 1;
      uVar19 = (ulong)*(uint *)&pIVar18[1].monitor;
    } while ((long)uVar34 < (long)(int)*(uint *)&pIVar18[1].monitor);
  }
  pSStack_68 = (pUVar13->fields)._dropdownSelection;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    if (g_data_07548101 != '\0') goto label_05d9e2a9;
label_05d9efd8:
    pSVar15 = "Options";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    g_data_07548101 = '\x01';
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548101 == '\0') goto label_05d9efd8;
label_05d9e2a9:
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar15 = "Options";
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("Common",pSVar15,"","",
                       "",in_R9);
  if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d9f4e3;
  pSVar20 = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)pSVar17,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  SStack_88.hasValue = false;
  SStack_88._1_3_ = 0;
  SStack_88.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_88,180.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  pUVar13 = pUStack_70;
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUStack_70,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_2,
             (MethodInfo *)0x0);
  pMVar32 = (MethodInfo *)"";
  pUVar16 = UI_ElementFactory__CreateDropdownSelect
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,(Settings_BaseSetting_o *)pSStack_68,pSVar15
                       ,pSVar20,"",130.0,40.0,500.0,(System_Nullable_float__o)SStack_88,
                       pUVar21,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pSVar7 = (pUVar13->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_05d9f4e3;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_05d9f4e3;
  uVar5 = (pSVar7->fields)._size;
  if (uVar5 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar5 + 1;
    pUVar8->m_Items[(int)uVar5] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_395D230 *)pMVar36->klass->rgctx_data[0xe].method);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("MapEditorSettings","Keybinds","AddObject",""
                       ,"",pMVar32);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_3,
             (MethodInfo *)0x0);
  pUVar26 = pUStack_78;
  pMVar36 = pMStack_80;
  pMVar35 = pMStack_80;
  UI_ElementFactory__CreateDefaultButton
            (pUStack_78,(UI_ElementStyle_o *)pMStack_80,pSVar15,0.0,40.0,pUVar21,(MethodInfo *)0x0);
  pSVar15 = UI_MapEditorTopPanel__GizmoModeText(pUVar13,pMVar35);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_4,
             (MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateDefaultButton
                      (pUVar26,(UI_ElementStyle_o *)pMVar36,pSVar15,88.0,40.0,pUVar21,(MethodInfo *)0x0);
  (pUVar13->fields)._gizmoOrientationButton = pUVar16;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._gizmoOrientationButton);
  pUVar16 = (pUVar13->fields)._gizmoOrientationButton;
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pUVar23 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar16,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar15 = "GizmoOrientation";
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("MapEditor","Top",pSVar15,"",
                       "",pMVar32);
  if (pUVar23 == (UI_HoverTooltip_o *)0x0) goto label_05d9f4e3;
  (pUVar23->fields).Message = pSVar15;
  Il2CppCodeGenWriteBarrier(&(pUVar23->fields).Message);
  pSVar15 = "Snap";
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("MapEditor","Top",pSVar15,"",
                       "",pMVar32);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_5,
             (MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateDefaultButton
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,pSVar15,72.0,40.0,pUVar21,(MethodInfo *)0x0)
  ;
  (pUVar13->fields)._snapButton = pUVar16;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._snapButton);
  pSVar39 = (pUVar13->fields)._toolDropdownSelection;
  pSVar15 = UI_UIManager__GetLocale
                      ("MapEditor","Tools","Title",""
                       ,"",pMVar32);
  pSVar20 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar24 = UI_UIManager__GetLocale
                      ("MapEditor","Tools","Camera",""
                       ,"",pMVar32);
  if (pSVar20 == (System_String_array *)0x0) goto label_05d9f4e3;
  if ((int)pSVar20->max_length == 0) {
label_05d9f4e8:
    ThrowIndexOutOfRangeException();
  }
  pSVar20->m_Items[0] = pSVar24;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items);
  pSVar24 = UI_UIManager__GetLocale
                      ("MapEditor","Tools","Brush",""
                       ,"",pMVar32);
  if ((pSVar20->max_length & 0xfffffffe) == 0) goto label_05d9f4e8;
  pSVar20->m_Items[1] = pSVar24;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 1);
  pSVar24 = UI_UIManager__GetLocale
                      ("MapEditor","Tools","Ruler",""
                       ,"",pMVar32);
  if ((uint)pSVar20->max_length < 3) goto label_05d9f4e8;
  pSVar20->m_Items[2] = pSVar24;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 2);
  pSVar24 = UI_UIManager__GetLocale
                      ("MainMenu","Intro","TutorialButton",""
                       ,"",pMVar32);
  pUVar13 = pUStack_70;
  if ((pSVar20->max_length & 0xfffffffc) == 0) goto label_05d9f4e8;
  pSVar20->m_Items[3] = pSVar24;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 3);
  SStack_50.hasValue = false;
  SStack_50._1_3_ = 0;
  SStack_50.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_50,120.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_6,
             (MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateDropdownSelect
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,(Settings_BaseSetting_o *)pSVar39,pSVar15,
                       pSVar20,"",90.0,40.0,200.0,(System_Nullable_float__o)SStack_50,
                       pUVar21,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pSVar7 = (pUVar13->fields)._dropdowns;
  pUVar22 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
  pMVar32 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
  if (pSVar7 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) goto label_05d9f4e3;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar7->fields)._items;
  if (pUVar8 == (UI_DropdownSelectElement_array *)0x0) goto label_05d9f4e3;
  uVar5 = (pSVar7->fields)._size;
  if (uVar5 < (uint)pUVar8->max_length) {
    (pSVar7->fields)._size = uVar5 + 1;
    pUVar8->m_Items[(int)uVar5] = pUVar22;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
               (MethodInfo_395D230 *)pMVar32->klass->rgctx_data[0xe].method);
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar25 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05d9f4e3;
  if ((pSVar25 != (System_Type_o *)0x0) &&
     (pIVar18 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar25,(((components->obj).klass)->_1).element_class)
     , pIVar18 == (Il2CppObject *)0x0)) {
label_05d9f4f8:
    pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) goto label_05d9f4e8;
  components->m_Items[0] = pSVar25;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  pSVar25 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
  if ((pSVar25 != (System_Type_o *)0x0) &&
     (pIVar18 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar25,(((components->obj).klass)->_1).element_class)
     , pIVar18 == (Il2CppObject *)0x0)) goto label_05d9f4f8;
  if ((components->max_length & 0xfffffffe) == 0) goto label_05d9f4e8;
  components->m_Items[1] = pSVar25;
  Il2CppCodeGenWriteBarrier(components->m_Items + 1);
  pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar16,"Spacer",components,(MethodInfo *)0x0);
  if ((pUVar16 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar26 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
     pUVar26 == (UnityEngine_Transform_o *)0x0)) goto label_05d9f4e3;
  UnityEngine_Transform__SetParent_692d510(pUVar26,pUStack_78,false,(MethodInfo *)0x0);
  pUVar27 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar27 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d9f4e3;
  (*(pUVar27->klass->vtable)._40_set_flexibleWidth.methodPtr)
            (pUVar27,1.0,(pUVar27->klass->vtable)._40_set_flexibleWidth.method);
  pSVar9 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  pMVar32 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar20 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar20 == (System_String_array *)0x0) goto label_05d9f4e3;
  if ((int)pSVar20->max_length == 0) goto label_05d9f4e8;
  pSVar20->m_Items[0] = "X";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items);
  if ((pSVar20->max_length & 0xfffffffe) == 0) goto label_05d9f4e8;
  pSVar20->m_Items[1] = "Y";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 1);
  if ((uint)pSVar20->max_length < 3) goto label_05d9f4e8;
  pSVar20->m_Items[2] = "Z";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 2);
  SStack_58.hasValue = false;
  SStack_58._1_3_ = 0;
  SStack_58.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_58,100.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_7,
             (MethodInfo *)0x0);
  pMVar36 = (MethodInfo *)"";
  pUVar16 = UI_ElementFactory__CreateMultiSelectDropdown
                      (pUStack_78,(UI_ElementStyle_o *)pMStack_80,pSVar9,(System_String_o *)pMVar32,pSVar20,
                       "",64.0,40.0,160.0,(System_Nullable_float__o)SStack_58,pUVar21,
                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pUVar28 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_MultiSelectDropdownElement);
  (pUVar13->fields)._gridDropdown = pUVar28;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._gridDropdown);
  pUVar29 = UI_MapEditorTopPanel__AddDropdownIcon(pUVar13,pUVar16,"Icons/Navigation/GridOff",pMVar32);
  (pUVar13->fields)._gridIcon = pUVar29;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._gridIcon);
  pSVar15 = "Lighting";
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar15 = UI_UIManager__GetLocale
                      ("MapEditor","Top",pSVar15,"",
                       "",pMVar36);
  pSVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  pUVar13 = pUStack_70;
  System_Action___ctor
            (pSVar30,(Il2CppObject *)pUStack_70,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_8,
             (MethodInfo *)0x0);
  pUVar26 = pUStack_78;
  pUVar16 = UI_MapEditorTopPanel__CreateStateIconButton
                      (pUVar13,pUStack_78,"Icons/Navigation/LightOff",pSVar15,pSVar30,pMVar36);
  (pUVar13->fields)._lightButton = pUVar16;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._lightButton);
  pSVar9 = TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection;
  pMVar32 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar25 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UI_MapEditorTopPanel_LayerOption,(MethodInfo *)0x0)
  ;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar20 = System_Enum__GetNames(pSVar25,(MethodInfo *)0x0);
  SStack_60.hasValue = false;
  SStack_60._1_3_ = 0;
  SStack_60.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_60,180.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_9,
             (MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateMultiSelectDropdown
                      (pUVar26,(UI_ElementStyle_o *)pMStack_80,pSVar9,(System_String_o *)pMVar32,pSVar20,
                       "",64.0,40.0,500.0,(System_Nullable_float__o)SStack_60,pUVar21,
                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05d9f4e3;
  pUVar28 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar16,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_MultiSelectDropdownElement);
  (pUVar13->fields)._layerDropdown = pUVar28;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._layerDropdown);
  pUVar29 = UI_MapEditorTopPanel__AddDropdownIcon(pUVar13,pUVar16,"Icons/Navigation/LayersOn",pMVar32);
  (pUVar13->fields)._layersIcon = pUVar29;
  Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._layersIcon);
  ppSVar2 = ppSStack_48;
  pSVar10 = (pUVar13->fields)._currentMap;
  if (pSVar10 == (Settings_StringSetting_o *)0x0) goto label_05d9f4e3;
  pSVar15 = System_String__Concat_52f0320((pSVar10->fields)._value,".txt",(MethodInfo *)0x0);
  pUVar26 = pUStack_78;
  UI_ElementFactory__CreateDefaultLabel
            (pUStack_78,(UI_ElementStyle_o *)pMStack_80,pSVar15,0,4,(MethodInfo *)0x0);
  if (*ppGStack_40 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d9f4e3;
  pMVar11 = ((*ppGStack_40)->fields).MapScript;
  if (pMVar11 == (Map_MapScript_o *)0x0) {
    pSVar10 = (pUVar13->fields)._playMode;
joined_r0x05d9f036:
    ppSVar31 = &"None";
  }
  else {
    bVar14 = System_String__IsNullOrWhiteSpace((pMVar11->fields).Logic,(MethodInfo *)0x0);
    pSVar10 = (pUVar13->fields)._playMode;
    if (bVar14) goto joined_r0x05d9f036;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    ppSVar31 = &TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
  }
  if (pSVar10 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar10,(Il2CppObject *)*ppSVar31,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (*ppSVar2 != (Settings_StringSetting_o *)0x0) {
      pSVar15 = ((*ppSVar2)->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar20 = Map_BuiltinLevels__GetGameModes("Custom",pSVar15,true,(MethodInfo *)0x0);
      __this_00 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                             (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        pMVar35 = (MethodInfo *)"None";
        bVar14 = System_Collections_Generic_List_object___Contains
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (Il2CppObject *)"None",
                            (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        pMVar36 = (MethodInfo *)"None";
        pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (!bVar14) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (__this_00->fields)._items;
          if (pSVar12 == (System_Object_array *)0x0) goto label_05d9f4e3;
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pSVar12->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pSVar12->m_Items[(int)uVar5] = (Il2CppObject *)pMVar36;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar5);
            pMVar35 = pMVar36;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar36,
                       (MethodInfo_395D230 *)pMVar32->klass->rgctx_data[0xe].method);
            pMVar35 = pMVar36;
          }
        }
        pSVar10 = (pUVar13->fields)._playMode;
        pSVar15 = UI_MapEditorTopPanel__GetPlayModeLabel(pUVar13,pMVar35);
        pSVar20 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        SStack_88.hasValue = false;
        SStack_88._1_3_ = 0;
        SStack_88.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&SStack_88,180.0,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar21,(Il2CppObject *)pUVar13,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_10,
                   (MethodInfo *)0x0);
        pMVar32 = (MethodInfo *)"";
        pUVar16 = UI_ElementFactory__CreateDropdownSelect
                            (pUVar26,(UI_ElementStyle_o *)pMStack_80,(Settings_BaseSetting_o *)pSVar10,pSVar15
                             ,pSVar20,"",130.0,40.0,500.0,
                             (System_Nullable_float__o)SStack_88,pUVar21,(MethodInfo *)0x0);
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
          pUVar22 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar16,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSelectElement);
          (pUVar13->fields)._playModeDropdown = pUVar22;
          Il2CppCodeGenWriteBarrier(&(pUVar13->fields)._playModeDropdown);
          pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
          pSVar7 = (pUVar13->fields)._dropdowns;
          if (pSVar7 != (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) {
            pUVar22 = (pUVar13->fields)._playModeDropdown;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar8 = (pSVar7->fields)._items;
            if (pUVar8 != (UI_DropdownSelectElement_array *)0x0) {
              uVar5 = (pSVar7->fields)._size;
              if (uVar5 < (uint)pUVar8->max_length) {
                (pSVar7->fields)._size = uVar5 + 1;
                pUVar8->m_Items[(int)uVar5] = pUVar22;
                Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar5);
                uVar4 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar22,
                           (MethodInfo_395D230 *)pMVar36->klass->rgctx_data[0xe].method);
                uVar4 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
              }
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
              }
              pSVar15 = "PlayMap";
              if (Il2CppMethodInitialized_075480ac == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                il2cpp_codegen_initialize_runtime_metadata(&"Top");
                il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
                il2cpp_codegen_initialize_runtime_metadata(&"");
                Il2CppMethodInitialized_075480ac = '\x01';
                uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
              }
              else {
                uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
              }
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar15 = UI_UIManager__GetLocale
                                  ("MapEditor","Top",pSVar15,"",
                                   "",pMVar32);
              pSVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              System_Action___ctor
                        (pSVar30,(Il2CppObject *)pUVar13,
                         (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_11,(MethodInfo *)0x0);
              pMVar32 = (MethodInfo *)
                        UI_MapEditorTopPanel__CreateStateIconButton
                                  (pUVar13,pUVar26,"Icons/Navigation/Play",pSVar15,pSVar30,pMVar32);
              if ((pMVar32 != (MethodInfo *)0x0) &&
                 (pUVar23 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pMVar32,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip),
                 pUVar23 != (UI_HoverTooltip_o *)0x0)) {
                (pUVar23->fields).Offset = 4.0;
                if (Il2CppMethodInitialized_075480b2 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
                  il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
                  Il2CppMethodInitialized_075480b2 = '\x01';
                }
                pSVar24 = "TextColor";
                pSVar15 = "IconButton";
                if (Il2CppMethodInitialized_075480b4 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                  il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
                  Il2CppMethodInitialized_075480b4 = '\x01';
                }
                __this_01 = (UI_MapEditorTopPanel_o *)
                            (*(pUVar13->klass->vtable)._4_get_ThemePanel.methodPtr)
                                      (pUVar13,(pUVar13->klass->vtable)._4_get_ThemePanel.method);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                iconColor = UI_UIManager__GetThemeColor
                                      ((System_String_o *)__this_01,pSVar15,pSVar24,"DefaultPanel",
                                       (MethodInfo *)pSVar30);
                normal.fields.b = 1.0;
                normal.fields.a = 1.0;
                normal.fields.r = 1.0;
                normal.fields.g = 1.0;
                highlighted.fields.b = 1.0;
                highlighted.fields.a = 1.0;
                highlighted.fields.r = 1.0;
                highlighted.fields.g = 1.0;
                UI_MapEditorTopPanel__SetIconButtonColors
                          (__this_01,(UnityEngine_GameObject_o *)pMVar32,iconColor,normal,highlighted,
                           method_00);
                UI_MapEditorTopPanel__CreateSideToolbar(pUVar13,pMVar32);
                UI_MapEditorTopPanel__RefreshControlStates(pUVar13,pMVar32);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05d9f4e3:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$CreateStateIconButton
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorTopPanel__CreateStateIconButton (UI_MapEditorTopPanel_o* __this, UnityEngine_Transform_o* parent, System_String_o* icon, System_String_o* tooltip, System_Action_o* onClick, const MethodInfo* method);
// 0x5d9fc00

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
  
  if (Il2CppMethodInitialized_07548095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Action_Invoke);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07548095 = '\x01';
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  __this_01 = (UnityEngine_Events_UnityAction_o *)0x0;
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  if (onClick != (System_Action_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)onClick,(intptr_t)MethodInfo_System_Action_Invoke,(MethodInfo *)0x0);
  }
  __this_02 = UI_ElementFactory__CreateIconButton
                        (parent,__this_00,icon,36.0,36.0,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this_02,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    if (pUVar1 != (UI_HoverTooltip_o *)0x0) {
      (pUVar1->fields).Message = tooltip;
      Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Message);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$AddDropdownIcon
// il2cpp: UnityEngine_UI_RawImage_o* UI_MapEditorTopPanel__AddDropdownIcon (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* dropdown, System_String_o* icon, const MethodInfo* method);
// 0x5d9f7b0

UnityEngine_UI_RawImage_o *
UI_MapEditorTopPanel__AddDropdownIcon
          (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *dropdown,System_String_o *icon,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppType *handle;
  System_String_o *item;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value;
  System_String_o *panel;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07548096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"StateIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/SelectedButton");
    Il2CppMethodInitialized_07548096 = '\x01';
  }
  if (dropdown == (UnityEngine_GameObject_o *)0x0) {
label_05d9fbdf:
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__get_transform(dropdown,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d9fbdf;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Dropdown/SelectedButton",(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d9fbdf;
  pUVar3 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d9fbdf;
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d9fbdf;
  UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05d9fbdf;
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d9fbe9;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar5;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RawImage,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) {
label_05d9fbe9:
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar5;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar4,"StateIcon",components,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar3,pUVar2,false,(MethodInfo *)0x0);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar4,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
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
                                  (pUVar4,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            method_00 = (MethodInfo *)0x0;
            value = (UnityEngine_Texture_o *)
                    ApplicationManagers_ResourceManager__LoadAsset(pSVar1,icon,true,false,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
              if ((value != (UnityEngine_Texture_o *)0x0) &&
                 (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
                il2cpp_codegen_raise_invalid_cast_exception(value);
              }
              UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
              item = "DropdownTextColor";
              pSVar1 = "DefaultSetting";
              if (Il2CppMethodInitialized_075480b4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
                Il2CppMethodInitialized_075480b4 = '\x01';
              }
              panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar7 = UI_UIManager__GetThemeColor(panel,pSVar1,item,"DefaultPanel",method_00);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,UVar7,(__this_01->klass->vtable)._23_set_color.method);
              (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
              return __this_01;
            }
          }
        }
      }
      goto label_05d9fbdf;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorTopPanel$$CreateSideToolbar
// il2cpp: void UI_MapEditorTopPanel__CreateSideToolbar (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9ffc0

void UI_MapEditorTopPanel__CreateSideToolbar(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  uint32_t uVar1;
  UI_MapEditorMenu_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  System_String_o *pSVar7;
  System_Action_o *pSVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_07548097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
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
    Il2CppMethodInitialized_07548097 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05da06fb;
  if ((pSVar2 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
label_05da0705:
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
label_05da0700:
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if ((pSVar2 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) goto label_05da0705;
  if ((components->max_length & 0xfffffffe) == 0) goto label_05da0700;
  components->m_Items[1] = pSVar2;
  Il2CppCodeGenWriteBarrier(components->m_Items + 1);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                      (MethodInfo *)0x0);
  if ((pSVar2 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) goto label_05da0705;
  if ((uint)components->max_length < 3) goto label_05da0700;
  components->m_Items[2] = pSVar2;
  Il2CppCodeGenWriteBarrier(components->m_Items + 2);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar4,"MapEditorSideToolbar",components,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._sideToolbar;
  (__this->fields)._sideToolbar = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar4 = (__this->fields)._sideToolbar;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05da06fb;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._menu;
  if ((__this_00 == (UI_MapEditorMenu_o *)0x0) ||
     (parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05da06fb;
  UnityEngine_Transform__SetParent_692d510(pUVar5,parent,false,(MethodInfo *)0x0);
  if ((*targetAddress == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = UnityEngine_GameObject__GetComponent_object_
                            (*targetAddress,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
     __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto label_05da06fb;
  UnityEngine_RectTransform__set_anchorMax
            (__this_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMin
            (__this_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(__this_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (__this_01,(UnityEngine_Vector2_o)0x4230000043020000,(MethodInfo *)0x0);
  if ((*targetAddress == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (*targetAddress,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image),
     pUVar6 == (UnityEngine_UI_Image_o *)0x0)) goto label_05da06fb;
  (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
            (pUVar6,(UnityEngine_Color_o)(ZEXT816(0x3f3851ec00000000) << 0x40),
             (pUVar6->klass->vtable)._23_set_color.method);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05da06fb;
  __this_02 = UnityEngine_GameObject__GetComponent_object_
                        (*targetAddress,
                         (MethodInfo_353B730 *)
                         MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
  pMVar9 = (MethodInfo *)0x0;
  UnityEngine_RectOffset___ctor_68cd0a0(__this_03,6,6,4,4,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05da06fb;
  UnityEngine_UI_LayoutGroup__set_padding
            ((UnityEngine_UI_LayoutGroup_o *)__this_02,__this_03,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,5.0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05da06fb;
  pUVar5 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
  }
  pSVar7 = UI_MapEditorInspectPanel__Locale("Position",(MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_0
             ,(MethodInfo *)0x0);
  pUVar4 = UI_MapEditorTopPanel__CreateStateIconButton
                     (__this,pUVar5,"Icons/Navigation/Position",pSVar7,pSVar8,pMVar9);
  (__this->fields)._positionButton = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionButton);
  pUVar4 = (__this->fields)._sideToolbar;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05da06fb;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    if (Il2CppMethodInitialized_075480ac != '\0') goto label_05da04dc;
label_05da06a3:
    pSVar7 = "Rotate";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075480ac == '\0') goto label_05da06a3;
label_05da04dc:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar7 = "Rotate";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar7 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar7,"",
                      "",pMVar9);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_1
             ,(MethodInfo *)0x0);
  pUVar4 = UI_MapEditorTopPanel__CreateStateIconButton
                     (__this,pUVar5,"Icons/Navigation/Rotate",pSVar7,pSVar8,pMVar9);
  (__this->fields)._rotationButton = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationButton);
  pUVar4 = (__this->fields)._sideToolbar;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    pSVar7 = "Scale";
    if (Il2CppMethodInitialized_075480ac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Top");
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_075480ac = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar7 = UI_UIManager__GetLocale
                       ("MapEditor","Top",pSVar7,"",
                        "",pMVar9);
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (pSVar8,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_2,(MethodInfo *)0x0);
    pMVar9 = (MethodInfo *)
             UI_MapEditorTopPanel__CreateStateIconButton
                       (__this,pUVar5,"Icons/Navigation/Scale",pSVar7,pSVar8,pMVar9);
    (__this->fields)._scaleButton = (UnityEngine_GameObject_o *)pMVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleButton);
    UI_MapEditorTopPanel__RefreshSideToolbarPosition(__this,pMVar9);
    return;
  }
label_05da06fb:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$RefreshSideToolbarPosition
// il2cpp: void UI_MapEditorTopPanel__RefreshSideToolbarPosition (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d98650

void UI_MapEditorTopPanel__RefreshSideToolbarPosition(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *x;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_01;
  float fVar5;
  
  if (Il2CppMethodInitialized_07548098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07548098 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._sideToolbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (((pSVar2 != (Settings_MapEditorSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).HierarchyPanelWidth, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._sideToolbar, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (pSVar3->fields)._value;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
    fVar5 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                      (__this,(__this->klass->vtable)._34_GetHeight.method);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (__this_01,(UnityEngine_Vector2_o)(CONCAT44(fVar5,fVar1 + 8.0) ^ 0x8000000000000000),
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$IsPointerOverSideToolbar
// il2cpp: bool UI_MapEditorTopPanel__IsPointerOverSideToolbar (UI_MapEditorTopPanel_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5d99320

bool UI_MapEditorTopPanel__IsPointerOverSideToolbar
               (UI_MapEditorTopPanel_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *rect;
  
  if (Il2CppMethodInitialized_07548099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07548099 = '\x01';
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
                       (pUVar1,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_6ccb790
                        (rect,screenPosition,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$IsDropdownOpen
// il2cpp: bool UI_MapEditorTopPanel__IsDropdownOpen (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d99110
// eh: try 0x5d991c3..0x5d992b1 -> pad 0x5d992ba (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d992d2..0x5d992d7 -> pad 0x5d992fa cleanup
// eh: try 0x5d992fd..0x5d99307 -> pad 0x5d9930f catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d992b6: jmp 0x5d992ba
// asm:   0x5d992b8: jmp 0x5d992ba
// asm:   0x5d992ba: mov r14, rax
// asm:   0x5d992bd: cmp edx, 1
// asm:   0x5d992c0: jne 0x5d992fd
// asm:   0x5d992c2: mov rdi, r14
// asm:   0x5d992c5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d992ca: mov rbx, qword ptr [rax]
// asm:   0x5d992cd: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d992d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d992d7: lea rax, [rip + 0x14f4902]  ; MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose
// asm:   0x5d992de: mov rsi, qword ptr [rax]
// asm:   0x5d992e1: mov rdi, rsp
// asm:   0x5d992e4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d992e9: test rbx, rbx
// asm:   0x5d992ec: je 0x5d99213
// asm:   0x5d992f2: mov rdi, rbx
// asm:   0x5d992f5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d992fa: mov r14, rax
// asm:   0x5d992fd: lea rdi, [rsp + 0x18]
// asm:   0x5d99302: call 0x2fddb70  ; il2cpp_runtime_helper_02fddb70()
// asm:   0x5d99307: mov rdi, r14
// asm:   0x5d9930a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9930f: mov rdi, rax
// asm:   0x5d99312: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorTopPanel__IsDropdownOpen(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DropdownSelectElement__o *__this_00;
  UI_MultiSelectDropdownElement_o *pUVar1;
  bool bVar2;
  undefined1 local_48 [16];
  UI_DropdownSettingElement_o *local_38;
  undefined1 local_30 [16];
  UI_DropdownSettingElement_o *local_20;
  
  if (Il2CppMethodInitialized_0754809a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DropdownSelectElement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754809a = '\x01';
  }
  __this_00 = (__this->fields)._dropdowns;
  if (__this_00 == (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) {
label_05d992b1:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_30,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_DropdownSelectElement_GetEnumerator);
  local_38 = local_20;
  local_48._0_8_ = local_30._0_8_;
  local_48._8_8_ = local_30._8_8_;
  local_30._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_30._8_8_ = local_48;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_MoveNext);
    if (!bVar2) break;
    if (local_38 == (UI_DropdownSettingElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = UI_DropdownSettingElement__IsOpen(local_38,(MethodInfo *)0x0);
    if (bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
      return true;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_DropdownSelectElement_Dispose);
  pUVar1 = (__this->fields)._layerDropdown;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._layerDropdown;
    if (pUVar1 == (UI_MultiSelectDropdownElement_o *)0x0) goto label_05d992b1;
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
    if (pUVar1 == (UI_MultiSelectDropdownElement_o *)0x0) goto label_05d992b1;
    bVar2 = UI_MultiSelectDropdownElement__IsOpen(pUVar1,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
  }
  return false;
}


// UI.MapEditorTopPanel$$OnFileClick
// il2cpp: void UI_MapEditorTopPanel__OnFileClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da1190
// eh: try 0x5da1d8f..0x5da238c -> pad 0x5da243e (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5da2458..0x5da245d -> pad 0x5da2482 cleanup
// eh: try 0x5da2485..0x5da248f -> pad 0x5da2497 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da14c3: jmp 0x5da1faa
// asm:   0x5da1f7f: mov rax, qword ptr [rsp]
// asm:   0x5da1f83: mov rax, qword ptr [rax + 0x98]
// asm:   0x5da1f8a: test rax, rax
// asm:   0x5da1f8d: je 0x5da2426
// asm:   0x5da1f93: mov rdi, qword ptr [rax + 0x68]
// asm:   0x5da1f97: test rdi, rdi
// asm:   0x5da1f9a: je 0x5da242b
// asm:   0x5da1fa0: mov rsi, r15
// asm:   0x5da1fa3: xor edx, edx
// asm:   0x5da1fa5: call 0x5cbd110  ; UI_ExportPopup__Show()
// asm:   0x5da1faa: add rsp, 0x48
// asm:   0x5da1fae: jmp 0x5da22b0
// asm:   0x5da2426: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5da242b: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5da243a: jmp 0x5da2440
// asm:   0x5da243c: jmp 0x5da2440
// asm:   0x5da243e: jmp 0x5da2440
// asm:   0x5da2440: mov rbx, rax
// asm:   0x5da2443: cmp edx, 1
// asm:   0x5da2446: jne 0x5da2485
// asm:   0x5da2448: mov rdi, rbx
// asm:   0x5da244b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da2450: mov rbx, qword ptr [rax]
// asm:   0x5da2453: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5da2458: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da245d: lea rax, [rip + 0x14ed4d4]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5da2464: mov rsi, qword ptr [rax]
// asm:   0x5da2467: lea rdi, [rsp + 0x20]
// asm:   0x5da246c: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5da2471: test rbx, rbx
// asm:   0x5da2474: je 0x5da1f7f
// asm:   0x5da247a: mov rdi, rbx
// asm:   0x5da247d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da2482: mov rbx, rax
// asm:   0x5da2485: lea rdi, [rsp + 0x38]
// asm:   0x5da248a: call 0x2fddba0  ; il2cpp_runtime_helper_02fddba0()
// asm:   0x5da248f: mov rdi, rbx
// asm:   0x5da2492: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da2497: mov rdi, rax
// asm:   0x5da249a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorTopPanel__OnFileClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  int32_t length;
  Settings_IntSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  UI_ImportPopup_o *__this_00;
  Il2CppObject *object;
  UI_MapEditorMenu_o *pUVar7;
  GameManagers_MapEditorGameManager_o *pGVar8;
  Map_MapScript_o *pMVar9;
  Map_MapScriptObjects_o *pMVar10;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar11;
  UI_ExportPopup_o *__this_03;
  MethodInfo *pMVar12;
  bool bVar13;
  System_String_array *pSVar14;
  System_Collections_Generic_List_string__o *items;
  System_Collections_Generic_List_string__o *disallowedDelete;
  System_Action_o *pSVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  System_Func_string__bool__o *pSVar17;
  UI_MapEditorTopPanel___c_StaticFields *pUVar18;
  System_Func_string__string__o *__this_04;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_String_o *pSVar19;
  UnityEngine_Events_UnityAction_o *pUVar20;
  Map_MapScript_o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  ulong uVar21;
  System_String_o *pSVar22;
  System_String_array *pSVar23;
  int iVar24;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar25;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  ulong uVar26;
  int32_t local_6c;
  System_String_array *local_68;
  System_String_o *local_60;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_40;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *local_38;
  
  if (Il2CppMethodInitialized_0754809b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsValidCustomFileName);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
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
    il2cpp_codegen_initialize_runtime_metadata(&"LoadAutosave");
    il2cpp_codegen_initialize_runtime_metadata(&"ImportWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Open");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Untitled");
    il2cpp_codegen_initialize_runtime_metadata(&"New");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754809b = '\x01';
  }
  local_6c = 0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar14 = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  items = (System_Collections_Generic_List_string__o *)
          System_Linq_Enumerable__ToList_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                     (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  pSVar5 = (__this->fields)._dropdownSelection;
  if (pSVar5 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (pSVar5->fields)._value;
  disallowedDelete = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)disallowedDelete,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar6 = (__this->fields)._currentMap;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (disallowedDelete == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  method_02 = (MethodInfo *)(pSVar6->fields)._value;
  piVar1 = &(disallowedDelete->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar14 = (disallowedDelete->fields)._items;
  if (pSVar14 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar3 = (disallowedDelete->fields)._size;
  if (uVar3 < (uint)pSVar14->max_length) {
    (disallowedDelete->fields)._size = uVar3 + 1;
    pSVar14->m_Items[(int)uVar3] = (System_String_o *)method_02;
    Il2CppCodeGenWriteBarrier(pSVar14->m_Items + (int)uVar3);
    pSVar19 = "Untitled";
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)disallowedDelete,(Il2CppObject *)method_02,
               (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    pSVar19 = "Untitled";
  }
  if (9 < uVar2) {
    "Untitled" = pSVar19;
    return;
  }
  "Untitled" = pSVar19;
  switch((long)&switchD_05da14f8::switchdataD_010a5e68 +
         (long)(int)(&switchD_05da14f8::switchdataD_010a5e68)[uVar2]) {
  case 0x5da14fa:
    local_6c = 1;
    pSVar22 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
    pSVar22 = System_String__Concat_52f0320(pSVar19,pSVar22,(MethodInfo *)0x0);
    if (items == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar13 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar22,
                        (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (bVar13) {
      do {
        local_6c = local_6c + 1;
        pSVar22 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
        pSVar22 = System_String__Concat_52f0320(pSVar19,pSVar22,(MethodInfo *)0x0);
        bVar13 = System_Collections_Generic_List_object___Contains
                           ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar22,
                            (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      } while (bVar13);
    }
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_68 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_07548101 == '\0') goto label_05da22d7;
label_05da15cb:
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar22 = "New";
    }
    else {
      if (g_data_07548101 != '\0') goto label_05da15cb;
label_05da22d7:
      pSVar22 = "New";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Common");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      g_data_07548101 = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    local_60 = UI_UIManager__GetLocale
                         ("Common",pSVar22,"","",
                          "",in_R9);
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_5,
               (MethodInfo *)0x0);
    pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar16,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_6,
               (MethodInfo *)0x0);
    pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar17,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_IsValidCustomFileName,(MethodInfo_4F19300 *)0x0);
    if (local_68 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    UI_SelectListPopup__ShowSave
              ((UI_SelectListPopup_o *)local_68,items,local_60,pSVar19,pUVar20,
               (System_Collections_Generic_List_string__o *)0x0,pUVar16,disallowedDelete,pSVar17,
               (MethodInfo *)0x0);
    break;
  case 0x5da16ad:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pUVar7->fields).ImportPopup;
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_4,
               (MethodInfo *)0x0);
    pSVar19 = "ImportWarning";
    if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      pSVar19 = "ImportWarning";
    }
    "ImportWarning" = pSVar19;
    if (Il2CppMethodInitialized_075480ac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Top");
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_075480ac = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar4 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar19 = UI_UIManager__GetLocale
                        ("MapEditor","Top",pSVar19,"",
                         "",in_R9);
    if (__this_00 == (UI_ImportPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_ImportPopup__Show(__this_00,pUVar20,true,pSVar19,"",(MethodInfo *)0x0);
    return;
  case 0x5da178c:
    if (Il2CppMethodInitialized_0754809c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
      Il2CppMethodInitialized_0754809c = '\x01';
    }
    UI_MapEditorTopPanel__SyncMapScriptObjects(__this,method_02);
    pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (pSVar15,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0,
               (MethodInfo *)0x0);
    bVar13 = UI_MapEditorTopPanel__TrySaveMapFile(__this,pSVar15,method_00);
    if (bVar13) goto switchD_05da14f8_caseD_5da17fc;
    break;
  case 0x5da17fc:
switchD_05da14f8_caseD_5da17fc:
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  case 0x5da1816:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_68 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_07548101 == '\0') goto label_05da2043;
label_05da1864:
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar19 = "Rename";
    }
    else {
      if (g_data_07548101 != '\0') goto label_05da1864;
label_05da2043:
      pSVar19 = "Rename";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Common");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      g_data_07548101 = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    local_60 = UI_UIManager__GetLocale
                         ("Common",pSVar19,"","",
                          "",in_R9);
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_2,
               (MethodInfo *)0x0);
    pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar16,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_3,
               (MethodInfo *)0x0);
    pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar17,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_IsValidCustomFileName,(MethodInfo_4F19300 *)0x0);
    if (local_68 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    UI_SelectListPopup__ShowSave
              ((UI_SelectListPopup_o *)local_68,items,local_60,"",pUVar20,
               (System_Collections_Generic_List_string__o *)0x0,pUVar16,disallowedDelete,pSVar17,
               (MethodInfo *)0x0);
    break;
  case 0x5da194f:
    if (Il2CppMethodInitialized_0754809c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
      Il2CppMethodInitialized_0754809c = '\x01';
    }
    UI_MapEditorTopPanel__SyncMapScriptObjects(__this,method_02);
    pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (pSVar15,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0,
               (MethodInfo *)0x0);
    UI_MapEditorTopPanel__TrySaveMapFile(__this,pSVar15,method_01);
    return;
  case 0x5da19c5:
    if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar14 = Map_BuiltinLevels__GetAutosaveNames((MethodInfo *)0x0);
    if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
    }
    pUVar18 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
    __this_04 = pUVar18->__9__48_8;
    if (__this_04 == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
        pUVar18 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
      }
      object = (Il2CppObject *)pUVar18->__9;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_04,object,
                 (intptr_t)MethodInfo_UI_MapEditorTopPanel_c_OnFileClick_b__48_8,(MethodInfo_4F19B50 *)0x0);
      pUVar18 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
      pUVar18->__9__48_8 = __this_04;
      Il2CppCodeGenWriteBarrier(&pUVar18->__9__48_8);
    }
    source = System_Linq_Enumerable__OrderByDescending_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                        (System_Func_TSource__TKey__o *)__this_04,
                        (MethodInfo_34F2270 *)
                        MethodInfo_System_Linq_Enumerable_OrderByDescending_string_string);
    items = (System_Collections_Generic_List_string__o *)
            System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar14 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_07548101 == '\0') goto label_05da20a4;
label_05da1ae3:
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar19 = "LoadAutosave";
    }
    else {
      if (g_data_07548101 != '\0') goto label_05da1ae3;
label_05da20a4:
      pSVar19 = "LoadAutosave";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Common");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      g_data_07548101 = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar19 = UI_UIManager__GetLocale
                        ("Common",pSVar19,"","",
                         "",in_R9);
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_9,
               (MethodInfo *)0x0);
    if (pSVar14 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
label_05da2299:
    pUVar16 = (UnityEngine_Events_UnityAction_o *)0x0;
    disallowedDelete = (System_Collections_Generic_List_string__o *)0x0;
label_05da22a5:
    UI_SelectListPopup__ShowLoad
              ((UI_SelectListPopup_o *)pSVar14,items,pSVar19,pUVar20,pUVar16,disallowedDelete,
               (MethodInfo *)0x0);
    break;
  case 0x5da1b5a:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_68 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_07548101 == '\0') goto label_05da2105;
label_05da1ba8:
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar19 = "Open";
    }
    else {
      if (g_data_07548101 != '\0') goto label_05da1ba8;
label_05da2105:
      pSVar19 = "Open";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Common");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      g_data_07548101 = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar19 = UI_UIManager__GetLocale
                        ("Common",pSVar19,"","",
                         "",in_R9);
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_0,
               (MethodInfo *)0x0);
    pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar16,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_1,
               (MethodInfo *)0x0);
    if (local_68 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar14 = local_68;
    goto label_05da22a5;
  case 0x5da1c54:
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
    Map_MapScript___ctor(__this_05,(MethodInfo *)0x0);
    pGVar8 = (__this->fields)._gameManager;
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar9 = (pGVar8->fields).MapScript;
    if (pMVar9 == (Map_MapScript_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar19 = (*(pMVar9->klass->vtable)._4_Serialize.methodPtr)
                        (pMVar9,(pMVar9->klass->vtable)._4_Serialize.method);
    if (__this_05 == (Map_MapScript_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_05->klass->vtable)._5_Deserialize.methodPtr)
              (__this_05,pSVar19,false,(__this_05->klass->vtable)._5_Deserialize.method);
    pMVar10 = (__this_05->fields).Objects;
    if (pMVar10 == (Map_MapScriptObjects_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (pMVar10->fields).Objects;
    if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (__this_01->fields)._size;
    (__this_01->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_01->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_06 = System_Collections_Generic_Dictionary_int__object___get_Values
                          (__this_02,
                           (MethodInfo_4A0F4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    if (__this_06 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
              (&local_58,__this_06,
               (MethodInfo_43E8AC0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    local_40 = 0;
    local_38 = &local_58;
    while( true ) {
      bVar13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                         (&local_58,
                          (MethodInfo_4CA2980 *)
                          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                         );
      pMVar12 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
      if (!bVar13) break;
      if (local_58.fields._currentValue == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      item = local_58.fields._currentValue[2].klass;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar11 = (__this_01->fields)._items;
      if (pMVar11 == (Map_MapScriptBaseObject_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pMVar11->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pMVar11->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
        Il2CppCodeGenWriteBarrier(pMVar11->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (&local_58,
               (MethodInfo_4CA2970 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_03 = (pUVar7->fields).ExportPopup;
    if (__this_03 == (UI_ExportPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_ExportPopup__Show_5bbd110(__this_03,__this_05,(MethodInfo *)0x0);
    break;
  case 0x5da1df3:
    items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)items,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar14 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
    if (pSVar14 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    iVar24 = (int)pSVar14->max_length;
    uVar21 = pSVar14->max_length & 0xffffffff;
    local_68 = pSVar14;
    if (items == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar24) {
        uVar25 = 0;
        do {
          if (uVar21 <= uVar25) goto label_05da238c;
          pSVar19 = pSVar14->m_Items[uVar25];
          bVar13 = System_String__op_Equality(pSVar19,"Custom",(MethodInfo *)0x0);
          if (!bVar13) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pSVar23 = Map_BuiltinLevels__GetMapNames(pSVar19,(MethodInfo *)0x0);
            if (pSVar23 == (System_String_array *)0x0) goto label_05da23a5;
            pSVar14 = local_68;
            if (0 < (int)pSVar23->max_length) {
              if ((pSVar23->max_length & 0xffffffff) != 0) {
                System_String__Concat_5301f10
                          (pSVar19,"/",pSVar23->m_Items[0],(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
label_05da21d9:
              ThrowIndexOutOfRangeException();
            }
          }
          uVar25 = uVar25 + 1;
          uVar2 = (uint)pSVar14->max_length;
          uVar21 = (ulong)uVar2;
        } while ((long)uVar25 < (long)(int)uVar2);
      }
    }
    else if (0 < iVar24) {
      uVar25 = 0;
      do {
        if (uVar21 <= uVar25) {
label_05da238c:
          ThrowIndexOutOfRangeException();
        }
        pSVar19 = local_68->m_Items[uVar25];
        bVar13 = System_String__op_Equality(pSVar19,"Custom",(MethodInfo *)0x0);
        if (!bVar13) {
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          pSVar14 = Map_BuiltinLevels__GetMapNames(pSVar19,(MethodInfo *)0x0);
          if (pSVar14 == (System_String_array *)0x0) {
label_05da23a5:
            ThrowNullReferenceException();
          }
          if (0 < (int)pSVar14->max_length) {
            uVar21 = pSVar14->max_length & 0xffffffff;
            uVar26 = 0;
            do {
              if (uVar21 <= uVar26) goto label_05da21d9;
              pSVar22 = System_String__Concat_5301f10
                                  (pSVar19,"/",pSVar14->m_Items[uVar26],(MethodInfo *)0x0);
              pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = &(items->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar23 = (items->fields)._items;
              if (pSVar23 == (System_String_array *)0x0) {
                ThrowNullReferenceException();
              }
              uVar2 = (items->fields)._size;
              if (uVar2 < (uint)pSVar23->max_length) {
                (items->fields)._size = uVar2 + 1;
                pSVar23->m_Items[(int)uVar2] = pSVar22;
                Il2CppCodeGenWriteBarrier(pSVar23->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar22,
                           (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
              }
              uVar26 = uVar26 + 1;
              uVar2 = (uint)pSVar14->max_length;
              uVar21 = (ulong)uVar2;
            } while ((long)uVar26 < (long)(int)uVar2);
          }
        }
        uVar25 = uVar25 + 1;
        uVar2 = (uint)local_68->max_length;
        uVar21 = (ulong)uVar2;
      } while ((long)uVar25 < (long)(int)uVar2);
    }
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar14 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_07548101 == '\0') goto label_05da2338;
label_05da2227:
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar19 = "LoadPreset";
    }
    else {
      if (g_data_07548101 != '\0') goto label_05da2227;
label_05da2338:
      pSVar19 = "LoadPreset";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Common");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      g_data_07548101 = '\x01';
      uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar19 = UI_UIManager__GetLocale
                        ("Common",pSVar19,"","",
                         "",in_R9);
    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar20,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_7,
               (MethodInfo *)0x0);
    if (pSVar14 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    goto label_05da2299;
  }
  return;
}


// UI.MapEditorTopPanel$$Save
// il2cpp: bool UI_MapEditorTopPanel__Save (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da24a0

bool UI_MapEditorTopPanel__Save(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754809c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
    Il2CppMethodInitialized_0754809c = '\x01';
  }
  UI_MapEditorTopPanel__SyncMapScriptObjects(__this,method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0,
             (MethodInfo *)0x0);
  bVar1 = UI_MapEditorTopPanel__TrySaveMapFile(__this,__this_00,method_00);
  return bVar1;
}


// UI.MapEditorTopPanel$$Autosave
// il2cpp: void UI_MapEditorTopPanel__Autosave (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da29f0
// eh: try 0x5da2af6..0x5da2f69 -> pad 0x5da2f1d (+25 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da2f74..0x5da2f7e -> pad 0x5da30b4 catch (...) [compiler noexcept guard]
// eh: try 0x5da2f95..0x5da2ff9 -> pad 0x5da3066 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da307c..0x5da30a2 -> pad 0x5da30a2 (+1 call sites) cleanup
// eh: try 0x5da30a7..0x5da30ac -> pad 0x5da30b4 catch (...) [compiler noexcept guard]
// asm: 116 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da2b62: jmp 0x5da2b7d
// asm:   0x5da2cde: nop 
// asm:   0x5da2f07: mov rdi, r14
// asm:   0x5da2f0a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da2f19: jmp 0x5da2f37
// asm:   0x5da2f1b: jmp 0x5da2f37
// asm:   0x5da2f1d: jmp 0x5da2f37
// asm:   0x5da2f1f: jmp 0x5da2f37
// asm:   0x5da2f21: jmp 0x5da2f37
// asm:   0x5da2f23: jmp 0x5da2f37
// asm:   0x5da2f25: jmp 0x5da2f37
// asm:   0x5da2f27: jmp 0x5da2f37
// asm:   0x5da2f29: jmp 0x5da2f37
// asm:   0x5da2f2b: jmp 0x5da2f37
// asm:   0x5da2f2d: jmp 0x5da2f37
// asm:   0x5da2f2f: jmp 0x5da2f37
// asm:   0x5da2f31: jmp 0x5da2f37
// asm:   0x5da2f33: jmp 0x5da2f37
// asm:   0x5da2f35: jmp 0x5da2f37
// asm:   0x5da2f37: mov rbx, rdx
// asm:   0x5da2f3a: mov r14, rax
// asm:   0x5da2f3d: jmp 0x5da2f7e
// asm:   0x5da2f3f: jmp 0x5da2f47
// asm:   0x5da2f41: jmp 0x5da2f47
// asm:   0x5da2f43: jmp 0x5da2f47
// asm:   0x5da2f45: jmp 0x5da2f47
// asm:   0x5da2f47: mov rbx, rdx
// asm:   0x5da2f4a: mov r14, rax
// asm:   0x5da2f4d: cmp ebx, 1
// asm:   0x5da2f50: jne 0x5da2f74
// asm:   0x5da2f52: mov rdi, r14
// asm:   0x5da2f55: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da2f5a: mov r14, qword ptr [rax]
// asm:   0x5da2f5d: mov qword ptr [rsp + 0x18], r14
// asm:   0x5da2f62: xor ebp, ebp
// asm:   0x5da2f64: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da2f69: jmp 0x5da2dc2
// asm:   0x5da2f6e: mov rbx, rdx
// asm:   0x5da2f71: mov r14, rax
// asm:   0x5da2f74: lea rdi, [rsp + 0x18]
// asm:   0x5da2f79: call 0x2fddbd0  ; il2cpp_runtime_helper_02fddbd0()
// asm:   0x5da2f7e: cmp ebx, 1
// asm:   0x5da2f81: jne 0x5da30ac
// asm:   0x5da2f87: mov rdi, r14
// asm:   0x5da2f8a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da2f8f: mov r15, rax
// asm:   0x5da2f92: mov rbx, qword ptr [rax]
// asm:   0x5da2f95: lea rdi, [rip + 0x14d5124]  ; TypeInfo_System_Exception
// asm:   0x5da2f9c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da2fa1: test rbx, rbx
// asm:   0x5da2fa4: je 0x5da3081
// asm:   0x5da2faa: mov rcx, qword ptr [rbx]
// asm:   0x5da2fad: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5da2fb4: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5da2fba: jb 0x5da3081
// asm:   0x5da2fc0: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5da2fc7: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5da2fcc: jne 0x5da3081
// asm:   0x5da2fd2: lea rdi, [rip + 0x14db2ff]  ; TypeInfo_Utility_Util
// asm:   0x5da2fd9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da2fde: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da2fe5: jne 0x5da2fef
// asm:   0x5da2fe7: mov rdi, rax
// asm:   0x5da2fea: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da2fef: mov rdi, rbx
// asm:   0x5da2ff2: xor esi, esi
// asm:   0x5da2ff4: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5da2ff9: test al, al
// asm:   0x5da2ffb: je 0x5da3081
// asm:   0x5da3001: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da3006: mov rax, qword ptr [rbx]
// asm:   0x5da3009: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5da3010: mov rdi, rbx
// asm:   0x5da3013: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5da3019: mov rbx, rax
// asm:   0x5da301c: lea rdi, [rip + 0x1538a85]  ; "Failed to autosave map: "
// asm:   0x5da3023: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da3028: mov rdi, rax
// asm:   0x5da302b: mov rsi, rbx
// asm:   0x5da302e: xor edx, edx
// asm:   0x5da3030: call 0x53f0320  ; System_String__Concat()
// asm:   0x5da3035: mov rbx, rax
// asm:   0x5da3038: lea rdi, [rip + 0x14d4609]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5da303f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da3044: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da304b: jne 0x5da3055
// asm:   0x5da304d: mov rdi, rax
// asm:   0x5da3050: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da3055: mov rdi, rbx
// asm:   0x5da3058: xor esi, esi
// asm:   0x5da305a: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5da305f: jmp 0x5da2edf
// asm:   0x5da3064: jmp 0x5da3068
// asm:   0x5da3066: jmp 0x5da3068
// asm:   0x5da3068: mov r14, rax
// asm:   0x5da306b: mov eax, 1
// asm:   0x5da3070: cmp edx, eax
// asm:   0x5da3072: jne 0x5da30a7
// asm:   0x5da3074: mov rdi, r14
// asm:   0x5da3077: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da307c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da3081: mov edi, 8
// asm:   0x5da3086: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5da308b: mov rcx, qword ptr [r15]
// asm:   0x5da308e: mov qword ptr [rax], rcx
// asm:   0x5da3091: lea rsi, [rip + 0x108a468]
// asm:   0x5da3098: mov rdi, rax
// asm:   0x5da309b: xor edx, edx
// asm:   0x5da309d: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5da30a2: jmp 0x5da30a4
// asm:   0x5da30a4: mov r14, rax
// asm:   0x5da30a7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da30ac: mov rdi, r14
// asm:   0x5da30af: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da30b4: mov rdi, rax
// asm:   0x5da30b7: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorTopPanel__Autosave(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Settings_StringSetting_o *pSVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  Map_MapScript_o *script;
  bool bVar5;
  System_IO_DirectoryInfo_o *__this_00;
  System_IO_FileInfo_array *source;
  UI_MapEditorTopPanel___c_StaticFields *pUVar6;
  System_Func_T__TResult__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *str1;
  System_String_o *pSVar9;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_50;
  System_DateTime_Fields local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754809d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_DirectoryInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_c_Autosave_b__50_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MM-dd-yyyy-HH-mm");
    Il2CppMethodInitialized_0754809d = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  local_48._dateData = 0;
  UI_MapEditorTopPanel__SyncMapScriptObjects(__this,method);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar9 = TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
  System_IO_DirectoryInfo___ctor(__this_00,pSVar9,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_DirectoryInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  source = System_IO_DirectoryInfo__GetFiles(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MapEditorTopPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
    pUVar6 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
    __this_01 = (System_Func_T__TResult__o *)pUVar6->__9__50_0;
  }
  else {
    pUVar6 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
    __this_01 = (System_Func_T__TResult__o *)pUVar6->__9__50_0;
  }
  if (__this_01 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c);
      pUVar6 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
    }
    pIVar7 = (Il2CppObject *)pUVar6->__9;
    __this_01 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FileInfo_DateTime);
    System_Func_object__DateTime____ctor
              (__this_01,pIVar7,(intptr_t)MethodInfo_UI_MapEditorTopPanel_c_Autosave_b__50_0,
               (MethodInfo_4F19560 *)0x0);
    pUVar6 = TypeInfo_UI_MapEditorTopPanel_c->static_fields;
    pUVar6->__9__50_0 = (System_Func_FileInfo__DateTime__o *)__this_01;
    Il2CppCodeGenWriteBarrier(&pUVar6->__9__50_0);
  }
  source_00 = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TKey__o *)__this_01,
                         (MethodInfo_34F21E0 *)
                         MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
  pIVar7 = (Il2CppObject *)
           System_Linq_Enumerable__Skip_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                      (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = pIVar7->klass;
  uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar10 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_FileInfo__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IEnumerable_FileInfo) {
        pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_05da2c71;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar10 * 0x10 != lVar11);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_FileInfo,0);
label_05da2c71:
  local_50 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  local_40 = 0;
  local_38 = &local_50;
  do {
    pIVar7 = local_50;
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_50->klass;
    uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05da2d13;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05da2d13:
    bVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_50;
    if (!bVar5) {
      if (local_50 == (Il2CppObject *)0x0) goto label_05da2e36;
      pIVar1 = local_50->klass;
      uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar10 == 0) goto label_05da2e0f;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar11 = 0;
      break;
    }
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_50->klass;
    uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_FileInfo__c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerator_FileInfo) {
          pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05da2d93;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FileInfo,0);
label_05da2d93:
    pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    (*pIVar7->klass->vtable[0xb].methodPtr)(pIVar7,pIVar7->klass->vtable[0xb].method);
  } while( true );
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
      goto label_05da2e2d;
    }
  }
label_05da2e0f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(local_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05da2e2d:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
label_05da2e36:
  pSVar3 = (__this->fields)._currentMap;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (pSVar3->fields)._value;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  local_48._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  str1 = System_DateTime__ToString_5497760
                   ((System_DateTime_o *)&local_48,"MM-dd-yyyy-HH-mm",(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_52f0320(pSVar9,str1,(MethodInfo *)0x0);
  pGVar4 = (__this->fields)._gameManager;
  if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  script = (pGVar4->fields).MapScript;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__AutosaveCustomMap(pSVar9,script,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$SyncMapScriptObjects
// il2cpp: void UI_MapEditorTopPanel__SyncMapScriptObjects (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da2520
// eh: try 0x5da268f..0x5da279d -> pad 0x5da27a8 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5da27cc..0x5da27d1 -> pad 0x5da27f2 cleanup
// eh: try 0x5da27f5..0x5da27ff -> pad 0x5da2807 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da27a2: jmp 0x5da27b4
// asm:   0x5da27a4: jmp 0x5da27b4
// asm:   0x5da27a6: jmp 0x5da27b4
// asm:   0x5da27a8: jmp 0x5da27b4
// asm:   0x5da27aa: jmp 0x5da27b4
// asm:   0x5da27ac: jmp 0x5da27b4
// asm:   0x5da27ae: jmp 0x5da27b4
// asm:   0x5da27b0: jmp 0x5da27b4
// asm:   0x5da27b2: jmp 0x5da27b4
// asm:   0x5da27b4: mov rbx, rax
// asm:   0x5da27b7: cmp edx, 1
// asm:   0x5da27ba: jne 0x5da27f5
// asm:   0x5da27bc: mov rdi, rbx
// asm:   0x5da27bf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da27c4: mov rbx, qword ptr [rax]
// asm:   0x5da27c7: mov qword ptr [rsp + 8], rbx
// asm:   0x5da27cc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da27d1: lea rax, [rip + 0x14eba20]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5da27d8: mov rsi, qword ptr [rax]
// asm:   0x5da27db: lea rdi, [rsp + 0x20]
// asm:   0x5da27e0: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5da27e5: test rbx, rbx
// asm:   0x5da27e8: je 0x5da277a
// asm:   0x5da27ea: mov rdi, rbx
// asm:   0x5da27ed: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da27f2: mov rbx, rax
// asm:   0x5da27f5: lea rdi, [rsp + 8]
// asm:   0x5da27fa: call 0x2fddc60  ; il2cpp_runtime_helper_02fddc60()
// asm:   0x5da27ff: mov rdi, rbx
// asm:   0x5da2802: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da2807: mov rdi, rax
// asm:   0x5da280a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorTopPanel__SyncMapScriptObjects(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  Map_MapScript_o *pMVar4;
  Map_MapScriptObjects_o *pMVar5;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  Map_MapScriptBaseObject_o *item;
  Map_MapScriptBaseObject_array *pMVar7;
  MethodInfo *pMVar8;
  undefined4 key;
  bool bVar9;
  Map_MapObject_o *pMVar10;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_0754809e == '\0') {
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
    Il2CppMethodInitialized_0754809e = '\x01';
  }
  pGVar3 = (__this->fields)._gameManager;
  if ((((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar4 = (pGVar3->fields).MapScript, pMVar4 != (Map_MapScript_o *)0x0)) &&
      (pMVar5 = (pMVar4->fields).Objects, pMVar5 != (Map_MapScriptObjects_o *)0x0)) &&
     (__this_00 = (pMVar5->fields).Objects,
     __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_01 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_01,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_48._16_8_ = local_50;
      local_48._0_8_ = local_60._0_8_;
      local_48._8_8_ = local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_48;
      while( true ) {
        do {
          bVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext
                            ((System_Collections_Generic_List_Enumerator_int__o *)local_48,
                             (MethodInfo_4C3B4A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (!bVar9) {
            System_Collections_Generic_List_Enumerator_int___Dispose
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_48,
                       (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
                      );
            return;
          }
          key = local_48._16_4_;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar6,key,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar9);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar10 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar6,key,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        pMVar8 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
        if (pMVar10 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        item = (pMVar10->fields).ScriptObject;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar7 = (__this_00->fields)._items;
        if (pMVar7 == (Map_MapScriptBaseObject_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pMVar7->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pMVar7->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pMVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnEditClick
// il2cpp: void UI_MapEditorTopPanel__OnEditClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da30c0

void UI_MapEditorTopPanel__OnEditClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754809f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754809f = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(__this_00,method);
    if (bVar3) {
label_05da30f9:
      return;
    }
    pSVar1 = (__this->fields)._dropdownSelection;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      switch((pSVar1->fields)._value) {
      case 0:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Undo(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 1:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Redo(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 2:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Copy(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 3:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Paste(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 4:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Cut(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 5:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Delete(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        goto label_05da30f9;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnOptionsClick
// il2cpp: void UI_MapEditorTopPanel__OnOptionsClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da31b0

void UI_MapEditorTopPanel__OnOptionsClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  UI_MapEditorCustomAssetPopup_o *pUVar4;
  
  if (Il2CppMethodInitialized_075480a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075480a0 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,method);
    if (bVar3) {
switchD_05da3212_default:
      return;
    }
    pSVar2 = (__this->fields)._dropdownSelection;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      switch((pSVar2->fields)._value) {
      case 0:
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3294;
        pUVar4 = (UI_MapEditorCustomAssetPopup_o *)(pUVar1->fields).SettingsPopup;
        break;
      case 1:
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3294;
        pUVar4 = (UI_MapEditorCustomAssetPopup_o *)(pUVar1->fields).InfoPopup;
        break;
      case 2:
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3294;
        pUVar4 = (UI_MapEditorCustomAssetPopup_o *)(pUVar1->fields).WeatherPopup;
        break;
      case 3:
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3294;
        pUVar4 = (UI_MapEditorCustomAssetPopup_o *)(pUVar1->fields).CustomLogicPopup;
        break;
      case 4:
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3294;
        pUVar4 = (pUVar1->fields).CustomAssetsPopup;
        break;
      default:
        goto switchD_05da3212_default;
      }
      if (pUVar4 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        (*(((UI_MapEditorSettingsPopup_VTable *)&pUVar4->klass->vtable)->_21_Show).methodPtr)
                  (pUVar4,(((UI_MapEditorSettingsPopup_VTable *)&pUVar4->klass->vtable)->_21_Show).method);
        return;
      }
    }
  }
label_05da3294:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnButtonClick
// il2cpp: void UI_MapEditorTopPanel__OnButtonClick (UI_MapEditorTopPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5da32a0

void UI_MapEditorTopPanel__OnButtonClick
               (UI_MapEditorTopPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorCameraPopup_o *pUVar2;
  GameManagers_MapEditorGameManager_o *__this_00;
  UI_ExternalLinkPopup_o *__this_01;
  bool bVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_075480a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoOrientation");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"https://aottg2.gitbook.io/custom-maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmo");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"Snap");
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_075480a1 = '\x01';
  }
  pMVar4 = (MethodInfo *)"AddObject";
  bVar3 = System_String__op_Equality(name,"AddObject",(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._menu;
  if (bVar3) {
    if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__ToggleAddObjectPopup(pUVar1,pMVar4);
      return;
    }
  }
  else if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,pMVar4);
    if (bVar3) {
      return;
    }
    bVar3 = System_String__op_Equality(name,"Camera",(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).CameraPopup, pUVar2 != (UI_MapEditorCameraPopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
        return;
      }
    }
    else {
      pMVar4 = (MethodInfo *)"Gizmo";
      bVar3 = System_String__op_Equality(name,"Gizmo",(MethodInfo *)0x0);
      if (bVar3) {
        UI_MapEditorTopPanel__NextGizmo(__this,pMVar4);
        return;
      }
      bVar3 = System_String__op_Equality(name,"GizmoOrientation",(MethodInfo *)0x0);
      if (bVar3) {
        __this_00 = (__this->fields)._gameManager;
        if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
          bVar3 = (__this_00->fields).CurrentGizmoMode == 0;
          pMVar4 = (MethodInfo *)(ulong)bVar3;
          GameManagers_MapEditorGameManager__SetGizmoMode(__this_00,(uint)bVar3,(MethodInfo *)0x0);
          UI_MapEditorTopPanel__RefreshControlStates(__this,pMVar4);
          return;
        }
      }
      else {
        pMVar4 = (MethodInfo *)"Snap";
        bVar3 = System_String__op_Equality(name,"Snap",(MethodInfo *)0x0);
        if (bVar3) {
          UI_MapEditorTopPanel__ToggleSnap(__this,pMVar4);
          return;
        }
        pMVar4 = (MethodInfo *)"Brush";
        bVar3 = System_String__op_Equality(name,"Brush",(MethodInfo *)0x0);
        if (bVar3) {
          UI_MapEditorTopPanel__ToggleBrush(__this,pMVar4);
          return;
        }
        pMVar4 = (MethodInfo *)"Light";
        bVar3 = System_String__op_Equality(name,"Light",(MethodInfo *)0x0);
        if (bVar3) {
          UI_MapEditorTopPanel__ToggleLights(__this,pMVar4);
          return;
        }
        bVar3 = System_String__op_Equality(name,"Tutorial",(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pUVar1 = (__this->fields)._menu;
        if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
           (__this_01 = (pUVar1->fields).ExternalLinkPopup, __this_01 != (UI_ExternalLinkPopup_o *)0x0)) {
          UI_ExternalLinkPopup__Show(__this_01,"https://aottg2.gitbook.io/custom-maps",(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ToggleSnap
// il2cpp: void UI_MapEditorTopPanel__ToggleSnap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3650

void UI_MapEditorTopPanel__ToggleSnap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pbVar1 = &(pGVar2->fields).Snap;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method);
  return;
}


// UI.MapEditorTopPanel$$ToggleLights
// il2cpp: void UI_MapEditorTopPanel__ToggleLights (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da36b0

void UI_MapEditorTopPanel__ToggleLights(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_075480a2 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    GameManagers_MapEditorGameManager__ToggleLights(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
      bVar1 = (pGVar2->fields)._lightsOn;
      if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      TypeInfo_UI_MapEditorTopPanel->static_fields->_lightsEnabled = bVar1;
      UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ApplyViewSettings
// il2cpp: void UI_MapEditorTopPanel__ApplyViewSettings (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da37d7: test rbx, rbx
// asm:   0x5da37da: je 0x5da3828

void UI_MapEditorTopPanel__ApplyViewSettings(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Settings_HashSetSetting_int__o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    Il2CppMethodInitialized_075480a3 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar3 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  if ((pSVar3 != (Settings_HashSetSetting_int__o *)0x0) &&
     (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__SetGridAxes
              (pGVar2,(System_Collections_Generic_HashSet_int__o *)(pSVar3->fields)._value,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
      if (TypeInfo_UI_MapEditorTopPanel->static_fields->_lightsEnabled == (pGVar2->fields)._lightsOn) {
        uVar1 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
      }
      else {
        GameManagers_MapEditorGameManager__ToggleLights(pGVar2,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._gameManager;
        uVar1 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      }
      if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
        method_00 = *(MethodInfo **)((long)((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel)->static_fields + 8);
        GameManagers_MapEditorGameManager__SetLayerVisibility
                  (pGVar2,(Settings_HashSetSetting_int__o *)method_00,(MethodInfo *)0x0);
        UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ToggleBrush
// il2cpp: void UI_MapEditorTopPanel__ToggleBrush (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3670

void UI_MapEditorTopPanel__ToggleBrush(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075480a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_075480a4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__SelectTool(__this,"Brush",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$OnLayersChanged
// il2cpp: void UI_MapEditorTopPanel__OnLayersChanged (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3b20

void UI_MapEditorTopPanel__OnLayersChanged(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_075480a5 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = UI_MapEditorMenu__IsPopupActive(__this_00,method);
    if (bVar1) {
      return;
    }
    __this_01 = (__this->fields)._gameManager;
    if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    }
    if (__this_01 != (GameManagers_MapEditorGameManager_o *)0x0) {
      method_00 = (MethodInfo *)TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection;
      GameManagers_MapEditorGameManager__SetLayerVisibility
                (__this_01,(Settings_HashSetSetting_int__o *)method_00,(MethodInfo *)0x0);
      UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$NextGizmoOrientation
// il2cpp: void UI_MapEditorTopPanel__NextGizmoOrientation (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3620

void UI_MapEditorTopPanel__NextGizmoOrientation(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MethodInfo *method_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (__this_00->fields).CurrentGizmoMode == 0;
  method_00 = (MethodInfo *)(ulong)bVar1;
  GameManagers_MapEditorGameManager__SetGizmoMode(__this_00,(uint)bVar1,(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$NextGizmo
// il2cpp: void UI_MapEditorTopPanel__NextGizmo (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3500

void UI_MapEditorTopPanel__NextGizmo(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MapEditor_BaseGizmo_o *pMVar1;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  bool bVar2;
  System_String_o **ppSVar3;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *pGVar4;
  
  if (Il2CppMethodInitialized_075480a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_075480a6 = '\x01';
  }
  pGVar4 = (__this->fields)._gameManager;
  if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
    pMVar1 = (pGVar4->fields).CurrentGizmo;
    y = (pGVar4->fields)._positionGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    pGVar4 = (__this->fields)._gameManager;
    if (bVar2) {
      if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
        ppSVar3 = &"Rotation";
        goto label_05da35f9;
      }
    }
    else if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pMVar1 = (pGVar4->fields).CurrentGizmo;
      y_00 = (pGVar4->fields)._rotationGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
      pGVar4 = (__this->fields)._gameManager;
      if (bVar2) {
        if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da3616;
        ppSVar3 = &"Scale";
      }
      else {
        if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da3616;
        ppSVar3 = &"Position";
      }
label_05da35f9:
      method_00 = (MethodInfo *)*ppSVar3;
      GameManagers_MapEditorGameManager__SetGizmo(pGVar4,(System_String_o *)method_00,(MethodInfo *)0x0);
      UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
      return;
    }
  }
label_05da3616:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SelectGizmo
// il2cpp: void UI_MapEditorTopPanel__SelectGizmo (UI_MapEditorTopPanel_o* __this, System_String_o* gizmo, const MethodInfo* method);
// 0x5da3bb0

void UI_MapEditorTopPanel__SelectGizmo
               (UI_MapEditorTopPanel_o *__this,System_String_o *gizmo,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__SetGizmo(__this_00,gizmo,(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,(MethodInfo *)gizmo);
  return;
}


// UI.MapEditorTopPanel$$SelectTool
// il2cpp: void UI_MapEditorTopPanel__SelectTool (UI_MapEditorTopPanel_o* __this, System_String_o* tool, const MethodInfo* method);
// 0x5da3830

void UI_MapEditorTopPanel__SelectTool(UI_MapEditorTopPanel_o *__this,System_String_o *tool,MethodInfo *method)

{
  System_String_o **targetAddress;
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorCameraPopup_o *pUVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  MapEditor_MapEditorRuler_o *pMVar4;
  bool bVar5;
  bool bVar6;
  GameManagers_MapEditorGameManager_o *pGVar7;
  MethodInfo *pMVar8;
  
  if (Il2CppMethodInitialized_075480a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_075480a7 = '\x01';
  }
  bVar5 = System_String__op_Equality((__this->fields)._selectedTool,tool,(MethodInfo *)0x0);
  bVar6 = System_String__op_Equality((__this->fields)._selectedTool,"Camera",(MethodInfo *)0x0);
  if ((bVar6) &&
     ((bVar5 || (bVar6 = System_String__op_Inequality(tool,"Camera",(MethodInfo *)0x0), bVar6))))
  {
    pUVar1 = (__this->fields)._menu;
    if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).CameraPopup, pUVar2 == (UI_MapEditorCameraPopup_o *)0x0)) goto label_05da3b11;
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
  }
  pGVar7 = (__this->fields)._gameManager;
  if ((pGVar7 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pMVar3 = (pGVar7->fields).Brush, pMVar3 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_05da3b11;
  if ((pMVar3->fields).Active != false) {
    if (!bVar5) {
      bVar6 = System_String__op_Inequality(tool,"Brush",(MethodInfo *)0x0);
      if (!bVar6) goto label_05da3940;
      pGVar7 = (__this->fields)._gameManager;
      if (pGVar7 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da3b11;
    }
    GameManagers_MapEditorGameManager__ToggleBrush(pGVar7,(MethodInfo *)0x0);
  }
label_05da3940:
  pGVar7 = (__this->fields)._gameManager;
  if ((pGVar7 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pMVar4 = (pGVar7->fields).Ruler, pMVar4 == (MapEditor_MapEditorRuler_o *)0x0)) goto label_05da3b11;
  if ((pMVar4->fields)._Active_k__BackingField == false) {
label_05da39cc:
    if (bVar5) {
      if (__this == (UI_MapEditorTopPanel_o *)0x0) goto label_05da3b11;
      pMVar8 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
      (__this->fields)._selectedTool = (System_String_o *)pMVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool);
      goto label_05da3aff;
    }
  }
  else {
    if (bVar5) {
label_05da3997:
      pMVar4 = (pGVar7->fields).Ruler;
      if (pMVar4 == (MapEditor_MapEditorRuler_o *)0x0) goto label_05da3b11;
      pMVar8 = (MethodInfo *)0x0;
      MapEditor_MapEditorRuler__SetActive(pMVar4,false,(__this->fields)._menu,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05da3b11;
      UI_MapEditorMenu__HideRulerPanel(pUVar1,pMVar8);
      goto label_05da39cc;
    }
    bVar6 = System_String__op_Inequality(tool,"Ruler",(MethodInfo *)0x0);
    if (bVar6) {
      pGVar7 = (__this->fields)._gameManager;
      if (pGVar7 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da3b11;
      goto label_05da3997;
    }
  }
  targetAddress = &(__this->fields)._selectedTool;
  *targetAddress = tool;
  Il2CppCodeGenWriteBarrier(targetAddress);
  bVar5 = System_String__op_Equality(tool,"Camera",(MethodInfo *)0x0);
  if (bVar5) {
    pUVar1 = (__this->fields)._menu;
    if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).CameraPopup, pUVar2 == (UI_MapEditorCameraPopup_o *)0x0)) goto label_05da3b11;
    pMVar8 = (pUVar2->klass->vtable)._21_Show.method;
    (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,pMVar8);
  }
  else {
    bVar5 = System_String__op_Equality(tool,"Brush",(MethodInfo *)0x0);
    if (bVar5) {
      pGVar7 = (__this->fields)._gameManager;
      if ((pGVar7 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pMVar3 = (pGVar7->fields).Brush, pMVar3 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_05da3b11;
      if ((pMVar3->fields).Active == false) {
        pMVar8 = (MethodInfo *)0x0;
        GameManagers_MapEditorGameManager__ToggleBrush(pGVar7,(MethodInfo *)0x0);
        goto label_05da3aff;
      }
    }
    pMVar8 = (MethodInfo *)"Ruler";
    bVar5 = System_String__op_Equality(tool,"Ruler",(MethodInfo *)0x0);
    if (bVar5) {
      pGVar7 = (__this->fields)._gameManager;
      if ((pGVar7 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pMVar4 = (pGVar7->fields).Ruler, pMVar4 != (MapEditor_MapEditorRuler_o *)0x0)) {
        pMVar8 = (MethodInfo *)0x1;
        MapEditor_MapEditorRuler__SetActive(pMVar4,true,(__this->fields)._menu,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__ShowRulerPanel(pUVar1,pMVar8);
          goto label_05da3aff;
        }
      }
label_05da3b11:
      ThrowNullReferenceException();
    }
  }
label_05da3aff:
  UI_MapEditorTopPanel__RefreshControlStates(__this,pMVar8);
  return;
}


// UI.MapEditorTopPanel$$CloseRulerTool
// il2cpp: void UI_MapEditorTopPanel__CloseRulerTool (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d99c20

void UI_MapEditorTopPanel__CloseRulerTool(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorRuler_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    Il2CppMethodInitialized_075480a8 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Ruler, __this_00 != (MapEditor_MapEditorRuler_o *)0x0)) {
    if ((__this_00->fields)._Active_k__BackingField != false) {
      method = (MethodInfo *)0x0;
      MapEditor_MapEditorRuler__SetActive(__this_00,false,(__this->fields)._menu,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__HideRulerPanel(__this_01,method);
      method_00 = (MethodInfo *)"Ruler";
      bVar2 = System_String__op_Equality
                        ((__this->fields)._selectedTool,"Ruler",(MethodInfo *)0x0);
      if (bVar2) {
        targetAddress = &(__this->fields)._selectedTool;
        method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
        *targetAddress = (System_String_o *)method_00;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
      UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnToolSelected
// il2cpp: void UI_MapEditorTopPanel__OnToolSelected (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3be0

void UI_MapEditorTopPanel__OnToolSelected(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Settings_IntSetting_o *pSVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  uint uVar6;
  
  if (Il2CppMethodInitialized_075480a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Ruler");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_075480a9 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar3 = (__this->fields)._toolDropdownSelection;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar3->fields)._value == 3) {
      UI_MapEditorTopPanel__OnButtonClick(__this,"Tutorial",in_RDX);
      return;
    }
    pIVar5 = SZArrayNew(TypeInfo_string_array,3);
    if (pIVar5 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar5[1].monitor != 0) {
        pIVar5[2].klass = (Il2CppClass *)"Camera";
        Il2CppCodeGenWriteBarrier(&pIVar5[2].klass);
        if (((ulong)pIVar5[1].monitor & 0xfffffffe) != 0) {
          pIVar5[2].monitor = "Brush";
          Il2CppCodeGenWriteBarrier(&pIVar5[2].monitor);
          if (2 < *(uint *)&pIVar5[1].monitor) {
            pIVar5[3].klass = (Il2CppClass *)"Ruler";
            Il2CppCodeGenWriteBarrier(&pIVar5[3].klass);
            pSVar3 = (__this->fields)._toolDropdownSelection;
            if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_05da3d2a;
            uVar1 = (pSVar3->fields)._value;
            uVar2 = *(uint *)&pIVar5[1].monitor;
            uVar6 = uVar2 - 1;
            if ((int)uVar1 < (int)(uVar2 - 1)) {
              uVar6 = uVar1;
            }
            uVar4 = 0;
            if (-1 < (int)uVar1) {
              uVar4 = uVar6;
            }
            if (uVar4 < uVar2) {
              UI_MapEditorTopPanel__SelectTool
                        (__this,(System_String_o *)(&pIVar5[2].klass)[(int)uVar4],(MethodInfo *)(ulong)uVar2);
              return;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05da3d2a:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$CloseBrushTool
// il2cpp: void UI_MapEditorTopPanel__CloseBrushTool (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3d40

void UI_MapEditorTopPanel__CloseBrushTool(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  GameManagers_MapEditorGameManager_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_075480aa = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if ((__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pMVar1 = (__this_00->fields).Brush, pMVar1 == (MapEditor_MapEditorBrush_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pMVar1->fields).Active != false) {
    GameManagers_MapEditorGameManager__ToggleBrush(__this_00,(MethodInfo *)0x0);
  }
  method_00 = (MethodInfo *)"Brush";
  bVar2 = System_String__op_Equality((__this->fields)._selectedTool,"Brush",(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(__this->fields)._selectedTool;
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    *targetAddress = (System_String_o *)method_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$OnGridChanged
// il2cpp: void UI_MapEditorTopPanel__OnGridChanged (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3de0

void UI_MapEditorTopPanel__OnGridChanged(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  Settings_HashSetSetting_int__o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    Il2CppMethodInitialized_075480ab = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar1 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
  if ((pSVar1 == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)(pSVar1->fields)._value;
  GameManagers_MapEditorGameManager__SetGridAxes
            (__this_00,(System_Collections_Generic_HashSet_int__o *)method_00,(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$Locale
// il2cpp: System_String_o* UI_MapEditorTopPanel__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d9f720

System_String_o * UI_MapEditorTopPanel__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Top",item,"",
                      "",in_R9);
  return pSVar1;
}


// UI.MapEditorTopPanel$$GizmoModeText
// il2cpp: System_String_o* UI_MapEditorTopPanel__GizmoModeText (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9f600
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9f66b: lea rax, [rip + 0x153dc8e]  ; "GizmoLocal"
// asm:   0x5d9f672: mov rbx, qword ptr [rax]
// asm:   0x5d9f675: cmp byte ptr [rip + 0x17a8a30], 0
// asm:   0x5d9f67c: jne 0x5d9f6b5
// asm:   0x5d9f700: lea rax, [rip + 0x153dbf1]  ; "GizmoCenter"
// asm:   0x5d9f707: mov rbx, qword ptr [rax]
// asm:   0x5d9f70a: cmp byte ptr [rip + 0x17a899b], 0
// asm:   0x5d9f717: jmp 0x5d9f6b5

System_String_o * UI_MapEditorTopPanel__GizmoModeText(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_String_o *pSVar3;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoLocal");
    Il2CppMethodInitialized_075480ad = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
  if ((pGVar2->fields).CurrentGizmoMode == 0) {
    pSVar3 = "GizmoCenter";
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      pSVar3 = "GizmoCenter";
    }
  }
  else {
    pSVar3 = "GizmoLocal";
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      pSVar3 = "GizmoLocal";
    }
  }
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar3,"",
                      "",in_R9);
  return pSVar3;
}


// UI.MapEditorTopPanel$$GetPlayModeLabel
// il2cpp: System_String_o* UI_MapEditorTopPanel__GetPlayModeLabel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5d9fd50

System_String_o * UI_MapEditorTopPanel__GetPlayModeLabel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayMode");
    Il2CppMethodInitialized_075480ae = '\x01';
    uVar1 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    pSVar3 = "PlayMode";
  }
  else {
    pSVar3 = "PlayMode";
  }
  "PlayMode" = pSVar3;
  if (Il2CppMethodInitialized_075480ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar3,"",
                      "",in_R9);
  pSVar2 = (__this->fields)._playMode;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MapEditorTopPanel$$RefreshPlayModeLabel
// il2cpp: void UI_MapEditorTopPanel__RefreshPlayModeLabel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3e70

void UI_MapEditorTopPanel__RefreshPlayModeLabel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_DropdownSelectElement_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/SelectedButton/Label");
    Il2CppMethodInitialized_075480af = '\x01';
  }
  pUVar1 = (__this->fields)._playModeDropdown;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._playModeDropdown;
    if (pUVar1 != (UI_DropdownSelectElement_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Dropdown/SelectedButton/Label",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          method_00 = MethodInfo_UnityEngine_Component_GetComponent_Text;
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          pSVar5 = UI_MapEditorTopPanel__GetPlayModeLabel(__this,method_00);
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,pSVar5,(pUVar4->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.MapEditorTopPanel$$OnPlayModeSelected
// il2cpp: void UI_MapEditorTopPanel__OnPlayModeSelected (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3f60

void UI_MapEditorTopPanel__OnPlayModeSelected(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._playModeExplicitlySelected = true;
  UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,method);
  return;
}


// UI.MapEditorTopPanel$$PlayMap
// il2cpp: void UI_MapEditorTopPanel__PlayMap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da3f70

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
  System_Action_o *__this_00;
  System_String_o **ppSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075480b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_075480b0 = '\x01';
  }
  if (Il2CppMethodInitialized_0754809c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
    Il2CppMethodInitialized_0754809c = '\x01';
  }
  UI_MapEditorTopPanel__SyncMapScriptObjects(__this,method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0,
             (MethodInfo *)0x0);
  UI_MapEditorTopPanel__TrySaveMapFile(__this,__this_00,method_00);
  if ((__this->fields)._playModeExplicitlySelected == false) {
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar2 = (pGVar1->fields).MapScript, pMVar2 == (Map_MapScript_o *)0x0)) goto label_05da437a;
    pSVar3 = (__this->fields)._playMode;
    bVar10 = System_String__IsNullOrWhiteSpace((pMVar2->fields).Logic,(MethodInfo *)0x0);
    if (bVar10) {
      ppSVar11 = &"None";
    }
    else {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      ppSVar11 = &TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
    }
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05da437a;
    method_01 = (MethodInfo *)*ppSVar11;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)method_01,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,method_01);
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (pSVar4 != (Settings_InGameSet_o *)0x0) {
    (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
    pSVar5 = (pSVar4->fields).General;
    if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar3 = (pSVar5->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)"Custom",
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar5 = (pSVar4->fields).General;
      if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
         ((pSVar3 = (__this->fields)._currentMap, pSVar3 != (Settings_StringSetting_o *)0x0 &&
          (pSVar6 = (pSVar5->fields).MapName, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar5 = (pSVar4->fields).General;
        if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
           ((pSVar3 = (__this->fields)._playMode, pSVar3 != (Settings_StringSetting_o *)0x0 &&
            (pSVar6 = (pSVar5->fields).GameMode, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar5 = (pSVar4->fields).General;
          if ((pSVar5 != (Settings_InGameGeneralSettings_o *)0x0) &&
             ((pSVar3 = (__this->fields)._playMode, pSVar3 != (Settings_StringSetting_o *)0x0 &&
              (pSVar6 = (pSVar5->fields).PrevGameMode, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar3->fields)._value,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar3 = (__this->fields)._currentMap;
            if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
               (pSVar6 = (__this->fields)._playMode, pSVar6 != (Settings_StringSetting_o *)0x0)) {
              pSVar12 = (pSVar3->fields)._value;
              gameMode = (pSVar6->fields)._value;
              settings = (pSVar4->fields).Misc;
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              Map_BuiltinLevels__LoadSandboxMiscSettings
                        ("Custom",pSVar12,gameMode,settings,(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._playMode;
              if (pSVar3 != (Settings_StringSetting_o *)0x0) {
                pSVar12 = Map_BuiltinLevels__LoadLogic((pSVar3->fields)._value,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   (pSVar12,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                                    (MethodInfo *)0x0);
                if (bVar10) {
                  pGVar1 = (__this->fields)._gameManager;
                  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
                     (pMVar2 = (pGVar1->fields).MapScript, pMVar2 == (Map_MapScript_o *)0x0))
                  goto label_05da437a;
                  pSVar12 = (pMVar2->fields).Logic;
                }
                pSVar7 = (pSVar4->fields).Mode;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar13 = CustomLogic_CustomLogicManager__GetModeSettings(pSVar12,(MethodInfo *)0x0);
                if (pSVar7 != (Settings_InGameModeSettings_o *)0x0) {
                  (pSVar7->fields).Current = pSVar13;
                  Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current);
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
label_05da437a:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$RefreshControlStates
// il2cpp: void UI_MapEditorTopPanel__RefreshControlStates (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da0720

void UI_MapEditorTopPanel__RefreshControlStates(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  UnityEngine_GameObject_o *pUVar4;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  MapEditor_ScaleGizmo_o *y_01;
  UnityEngine_UI_RawImage_o *pUVar5;
  Settings_HashSetSetting_int__o *pSVar6;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  bool bVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  UI_HoverTooltip_o *pUVar12;
  System_String_o *pSVar13;
  System_String_o **ppSVar14;
  UI_MapEditorTopPanel_o *pUVar15;
  Utility_ResourcePaths_StaticFields *pUVar16;
  UnityEngine_Texture_o *value;
  System_String_o *panel;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  UnityEngine_Color_o iconColor;
  UnityEngine_Color_o iconColor_00;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_o iconColor_01;
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_o normal;
  UnityEngine_Color_o normal_00;
  UnityEngine_Color_o normal_01;
  UnityEngine_Color_o normal_02;
  UnityEngine_Color_o highlighted;
  UnityEngine_Color_o highlighted_00;
  UnityEngine_Color_o highlighted_01;
  UnityEngine_Color_o highlighted_02;
  
  if (Il2CppMethodInitialized_075480b1 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LightOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOn");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GridOff");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LayersOn");
    il2cpp_codegen_initialize_runtime_metadata(&"GizmoOrientationValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/LightOn");
    Il2CppMethodInitialized_075480b1 = '\x01';
  }
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  pUVar4 = (__this->fields)._positionButton;
  pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar17 = extraout_RDX;
  if (bVar8) {
label_05da08a8:
    UVar21.fields._8_8_ = 0x3f8000003f800000;
    uVar18 = UVar21.fields._8_8_;
    uVar20 = UVar21.fields._8_8_;
    uVar19 = UVar21.fields._8_8_;
  }
  else {
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
    pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
    y = (pGVar3->fields)._positionGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    pMVar17 = extraout_RDX_00;
    if (bVar8) goto label_05da08a8;
    uVar19 = 0x3f8000003f59999a;
    uVar20 = 0x3f59999a3f59999a;
    UVar21.fields._8_8_ = 0x3f19999a3f19999a;
    uVar18 = 0x3f8000003f19999a;
  }
  UVar21.fields.b = 1.0;
  UVar21.fields.a = 1.0;
  UVar21.fields.r = 1.0;
  UVar21.fields.g = 1.0;
  normal.fields.b = (float)(int)uVar18;
  normal.fields.a = (float)(int)((ulong)uVar18 >> 0x20);
  normal.fields.r = (float)(int)UVar21.fields._8_8_;
  normal.fields.g = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
  highlighted.fields.b = (float)(int)uVar19;
  highlighted.fields.a = (float)(int)((ulong)uVar19 >> 0x20);
  highlighted.fields.r = (float)(int)uVar20;
  highlighted.fields.g = (float)(int)((ulong)uVar20 >> 0x20);
  UI_MapEditorTopPanel__SetIconButtonColors(pUVar15,pUVar4,UVar21,normal,highlighted,pMVar17);
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  pUVar4 = (__this->fields)._rotationButton;
  pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  UVar21.fields._8_8_ = 0x3f19999a3f19999a;
  pMVar17 = extraout_RDX_01;
  uVar19 = 0x3f8000003f19999a;
  uVar20 = 0x3f59999a3f59999a;
  uVar18 = 0x3f8000003f59999a;
  if (bVar8) {
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
    pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
    y_00 = (pGVar3->fields)._rotationGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
    UVar21.fields._8_8_ = 0x3f19999a3f19999a;
    pMVar17 = extraout_RDX_02;
    uVar19 = 0x3f8000003f19999a;
    uVar20 = 0x3f59999a3f59999a;
    uVar18 = 0x3f8000003f59999a;
    if (bVar8) {
      UVar21.fields._8_8_ = 0x3f8000003f800000;
      uVar19 = UVar21.fields._8_8_;
      uVar20 = UVar21.fields._8_8_;
      uVar18 = UVar21.fields._8_8_;
    }
  }
  iconColor.fields.b = 1.0;
  iconColor.fields.a = 1.0;
  iconColor.fields.r = 1.0;
  iconColor.fields.g = 1.0;
  normal_00.fields.b = (float)(int)uVar19;
  normal_00.fields.a = (float)(int)((ulong)uVar19 >> 0x20);
  normal_00.fields.r = (float)(int)UVar21.fields._8_8_;
  normal_00.fields.g = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
  highlighted_00.fields.b = (float)(int)uVar18;
  highlighted_00.fields.a = (float)(int)((ulong)uVar18 >> 0x20);
  highlighted_00.fields.r = (float)(int)uVar20;
  highlighted_00.fields.g = (float)(int)((ulong)uVar20 >> 0x20);
  UI_MapEditorTopPanel__SetIconButtonColors(pUVar15,pUVar4,iconColor,normal_00,highlighted_00,pMVar17);
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  pUVar4 = (__this->fields)._scaleButton;
  pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  UVar21.fields._8_8_ = 0x3f19999a3f19999a;
  pMVar17 = extraout_RDX_03;
  uVar19 = 0x3f8000003f19999a;
  uVar20 = 0x3f59999a3f59999a;
  uVar18 = 0x3f8000003f59999a;
  if (bVar8) {
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
    pUVar15 = (UI_MapEditorTopPanel_o *)(pGVar3->fields).CurrentGizmo;
    y_01 = (pGVar3->fields)._scaleGizmo;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)y_01,(MethodInfo *)0x0);
    UVar21.fields._8_8_ = 0x3f19999a3f19999a;
    pMVar17 = extraout_RDX_04;
    uVar19 = 0x3f8000003f19999a;
    uVar20 = 0x3f59999a3f59999a;
    uVar18 = 0x3f8000003f59999a;
    if (bVar8) {
      UVar21.fields._8_8_ = 0x3f8000003f800000;
      uVar19 = UVar21.fields._8_8_;
      uVar20 = UVar21.fields._8_8_;
      uVar18 = UVar21.fields._8_8_;
    }
  }
  iconColor_00.fields.b = 1.0;
  iconColor_00.fields.a = 1.0;
  iconColor_00.fields.r = 1.0;
  iconColor_00.fields.g = 1.0;
  normal_01.fields.b = (float)(int)uVar19;
  normal_01.fields.a = (float)(int)((ulong)uVar19 >> 0x20);
  normal_01.fields.r = (float)(int)UVar21.fields._8_8_;
  normal_01.fields.g = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
  highlighted_01.fields.b = (float)(int)uVar18;
  highlighted_01.fields.a = (float)(int)((ulong)uVar18 >> 0x20);
  highlighted_01.fields.r = (float)(int)uVar20;
  highlighted_01.fields.g = (float)(int)((ulong)uVar20 >> 0x20);
  UI_MapEditorTopPanel__SetIconButtonColors(pUVar15,pUVar4,iconColor_00,normal_01,highlighted_01,pMVar17);
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  UI_MapEditorTopPanel__SetTextButtonActive(__this,(__this->fields)._snapButton,(pGVar3->fields).Snap,in_RCX);
  pUVar15 = (UI_MapEditorTopPanel_o *)(__this->fields)._gizmoOrientationButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pSVar9 = UI_MapEditorTopPanel__GizmoModeText(__this,pMVar17);
    pUVar4 = (__this->fields)._gizmoOrientationButton;
    if ((((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar10 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0),
        pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar11 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar10,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
       pUVar11 == (UnityEngine_UI_Text_o *)0x0)) goto label_05da10d3;
    (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
              (pUVar11,pSVar9,(pUVar11->klass->vtable)._75_set_text.method);
    pUVar4 = (__this->fields)._gizmoOrientationButton;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05da10d3;
    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar4,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_HoverTooltip);
    if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
      if (Il2CppMethodInitialized_075480ac != '\0') goto label_05da0bb1;
label_05da0e18:
      pSVar13 = "GizmoOrientationValue";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Top");
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_075480ac = '\x01';
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075480ac == '\0') goto label_05da0e18;
label_05da0bb1:
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar13 = "GizmoOrientationValue";
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    in_RCX = (MethodInfo *)"";
    in_R8 = (MethodInfo *)"";
    pSVar13 = UI_UIManager__GetLocale
                        ("MapEditor","Top",pSVar13,"",
                         "",in_R9);
    pSVar9 = System_String__Format(pSVar13,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    if (pUVar12 == (UI_HoverTooltip_o *)0x0) goto label_05da10d3;
    pUVar15 = (UI_MapEditorTopPanel_o *)&(pUVar12->fields).Message;
    (pUVar12->fields).Message = pSVar9;
    Il2CppCodeGenWriteBarrier((void **)pUVar15);
  }
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  if ((pGVar3->fields)._lightsOn == false) {
    ppSVar14 = &"Icons/Navigation/LightOff";
  }
  else {
    ppSVar14 = &"Icons/Navigation/LightOn";
  }
  UI_MapEditorTopPanel__SetIcon(pUVar15,(__this->fields)._lightButton,*ppSVar14,in_RCX);
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05da10d3;
  pUVar4 = (__this->fields)._lightButton;
  bVar8 = (pGVar3->fields)._lightsOn;
  if (Il2CppMethodInitialized_075480b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    Il2CppMethodInitialized_075480b2 = '\x01';
  }
  pSVar13 = "TextColor";
  pSVar9 = "IconButton";
  if (Il2CppMethodInitialized_075480b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_075480b4 = '\x01';
  }
  pUVar15 = (UI_MapEditorTopPanel_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar21 = UI_UIManager__GetThemeColor((System_String_o *)pUVar15,pSVar9,pSVar13,"DefaultPanel",in_R8);
  UVar21.fields._8_8_ = UVar21.fields._8_8_;
  iconColor_01.fields._0_8_ = UVar21.fields._0_8_;
  if (bVar8 == false) {
    UVar21.fields._8_8_ = CONCAT44(UVar21.fields.a * 0.5,UVar21.fields.b);
  }
  iconColor_01.fields.b = (float)(int)UVar21.fields._8_8_;
  iconColor_01.fields.a = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
  normal_02.fields.b = 1.0;
  normal_02.fields.a = 1.0;
  normal_02.fields.r = 1.0;
  normal_02.fields.g = 1.0;
  highlighted_02.fields.b = 1.0;
  highlighted_02.fields.a = 1.0;
  highlighted_02.fields.r = 1.0;
  highlighted_02.fields.g = 1.0;
  UI_MapEditorTopPanel__SetIconButtonColors(pUVar15,pUVar4,iconColor_01,normal_02,highlighted_02,method_00);
  pUVar5 = (__this->fields)._gridIcon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    }
    pSVar6 = TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection;
    if ((pSVar6 == (Settings_HashSetSetting_int__o *)0x0) ||
       (pSVar7 = (pSVar6->fields)._value, pSVar7 == (System_Collections_Generic_HashSet_T__o *)0x0))
    goto label_05da10d3;
    iVar2 = (pSVar7->fields)._count;
    pUVar5 = (__this->fields)._gridIcon;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      pUVar16 = TypeInfo_Utility_ResourcePaths->static_fields;
      if (0 < iVar2) goto label_05da0df0;
label_05da0e87:
      ppSVar14 = &"Icons/Navigation/GridOff";
    }
    else {
      pUVar16 = TypeInfo_Utility_ResourcePaths->static_fields;
      if (iVar2 < 1) goto label_05da0e87;
label_05da0df0:
      ppSVar14 = &"Icons/Navigation/GridOn";
    }
    pSVar9 = pUVar16->UI;
    pSVar13 = *ppSVar14;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pMVar17 = (MethodInfo *)0x0;
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar9,pSVar13,true,false,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05da10d3;
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05da10d8;
    UnityEngine_UI_RawImage__set_texture(pUVar5,value,(MethodInfo *)0x0);
    pSVar13 = "DropdownTextColor";
    pSVar9 = "DefaultSetting";
    pUVar5 = (__this->fields)._gridIcon;
    if (Il2CppMethodInitialized_075480b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
      Il2CppMethodInitialized_075480b4 = '\x01';
    }
    panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UVar21 = UI_UIManager__GetThemeColor(panel,pSVar9,pSVar13,"DefaultPanel",pMVar17);
    UVar21.fields._8_8_ = UVar21.fields._8_8_;
    UVar22.fields._0_8_ = UVar21.fields._0_8_;
    if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05da10d3;
    if (iVar2 < 1) {
      UVar21.fields._8_8_ = CONCAT44(UVar21.fields.a * 0.5,UVar21.fields.b);
    }
    UVar22.fields.b = (float)(int)UVar21.fields._8_8_;
    UVar22.fields.a = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (pUVar5,UVar22,(pUVar5->klass->vtable)._23_set_color.method);
  }
  pUVar5 = (__this->fields)._layersIcon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    return;
  }
  pUVar5 = (__this->fields)._layersIcon;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
  }
  pSVar6 = TypeInfo_UI_MapEditorTopPanel->static_fields->_layerSelection;
  if ((pSVar6 != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar7 = (pSVar6->fields)._value, pSVar7 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    if ((pSVar7->fields)._count < 1) {
      ppSVar14 = &"Icons/Navigation/LayersOff";
    }
    else {
      ppSVar14 = &"Icons/Navigation/LayersOn";
    }
    pSVar13 = *ppSVar14;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar9,pSVar13,true,false,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((value == (UnityEngine_Texture_o *)0x0) ||
         (value->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture(pUVar5,value,(MethodInfo *)0x0);
        return;
      }
label_05da10d8:
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
label_05da10d3:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SetButtonActive
// il2cpp: void UI_MapEditorTopPanel__SetButtonActive (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, bool active, const MethodInfo* method);
// 0x5d9fec0

void UI_MapEditorTopPanel__SetButtonActive
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,bool active,
               MethodInfo *method)

{
  System_String_o *category;
  System_String_o *item;
  UI_MapEditorTopPanel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  UnityEngine_Color_o UVar1;
  UnityEngine_Color_o normal;
  UnityEngine_Color_o highlighted;
  
  if (Il2CppMethodInitialized_075480b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    Il2CppMethodInitialized_075480b2 = '\x01';
  }
  item = "TextColor";
  category = "IconButton";
  if (Il2CppMethodInitialized_075480b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_075480b4 = '\x01';
  }
  __this_00 = (UI_MapEditorTopPanel_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar1 = UI_UIManager__GetThemeColor((System_String_o *)__this_00,category,item,"DefaultPanel",in_R8);
  UVar1.fields._8_8_ = UVar1.fields._8_8_;
  if (!active) {
    UVar1.fields._8_8_ = CONCAT44(UVar1.fields.a * 0.5,UVar1.fields.b);
  }
  UVar1.fields.b = (float)(int)UVar1.fields._8_8_;
  UVar1.fields.a = (float)(int)((ulong)UVar1.fields._8_8_ >> 0x20);
  normal.fields.b = 1.0;
  normal.fields.a = 1.0;
  normal.fields.r = 1.0;
  normal.fields.g = 1.0;
  highlighted.fields.b = 1.0;
  highlighted.fields.a = 1.0;
  highlighted.fields.r = 1.0;
  highlighted.fields.g = 1.0;
  UI_MapEditorTopPanel__SetIconButtonColors(__this_00,buttonObject,UVar1,normal,highlighted,method_00);
  return;
}


// UI.MapEditorTopPanel$$SetToolbarButtonActive
// il2cpp: void UI_MapEditorTopPanel__SetToolbarButtonActive (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, bool active, const MethodInfo* method);
// 0x5da4380

void UI_MapEditorTopPanel__SetToolbarButtonActive
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,bool active,
               MethodInfo *method)

{
  undefined3 in_register_00000011;
  uint in_register_00000014;
  UnityEngine_Color_o iconColor;
  UnityEngine_Color_o iconColor_00;
  UnityEngine_Color_o normal;
  UnityEngine_Color_o normal_00;
  UnityEngine_Color_o highlighted;
  UnityEngine_Color_o highlighted_00;
  
  if (CONCAT31(in_register_00000011,active) == 0) {
    iconColor_00.fields.b = 1.0;
    iconColor_00.fields.a = 1.0;
    iconColor_00.fields.r = 1.0;
    iconColor_00.fields.g = 1.0;
    normal_00.fields.b = 0.6;
    normal_00.fields.a = 1.0;
    normal_00.fields.r = 0.6;
    normal_00.fields.g = 0.6;
    highlighted_00.fields.b = 0.85;
    highlighted_00.fields.a = 1.0;
    highlighted_00.fields.r = 0.85;
    highlighted_00.fields.g = 0.85;
    UI_MapEditorTopPanel__SetIconButtonColors
              (__this,buttonObject,iconColor_00,normal_00,highlighted_00,
               (MethodInfo *)((ulong)in_register_00000014 << 0x20));
    return;
  }
  iconColor.fields.b = 1.0;
  iconColor.fields.a = 1.0;
  iconColor.fields.r = 1.0;
  iconColor.fields.g = 1.0;
  normal.fields.b = 1.0;
  normal.fields.a = 1.0;
  normal.fields.r = 1.0;
  normal.fields.g = 1.0;
  highlighted.fields.b = 1.0;
  highlighted.fields.a = 1.0;
  highlighted.fields.r = 1.0;
  highlighted.fields.g = 1.0;
  UI_MapEditorTopPanel__SetIconButtonColors
            (__this,buttonObject,iconColor,normal,highlighted,
             (MethodInfo *)CONCAT44(in_register_00000014,CONCAT31(in_register_00000011,active)));
  return;
}


// UI.MapEditorTopPanel$$SetIconButtonColors
// il2cpp: void UI_MapEditorTopPanel__SetIconButtonColors (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, UnityEngine_Color_o iconColor, UnityEngine_Color_o normal, UnityEngine_Color_o highlighted, const MethodInfo* method);
// 0x5da4810

void UI_MapEditorTopPanel__SetIconButtonColors
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,
               UnityEngine_Color_o iconColor,UnityEngine_Color_o normal,UnityEngine_Color_o highlighted,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar3;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar4;
  
  if (Il2CppMethodInitialized_075480b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075480b3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (buttonObject != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (buttonObject,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
      uVar1 = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
      uVar2 = (__this_00->fields).m_Colors.fields.m_FadeDuration;
      value.fields.m_FadeDuration = (float)uVar2;
      value.fields.m_ColorMultiplier = (float)uVar1;
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      value.fields.m_HighlightedColor.fields.r = highlighted.fields.r;
      value.fields.m_HighlightedColor.fields.g = highlighted.fields.g;
      value.fields.m_NormalColor.fields = normal.fields;
      value.fields.m_HighlightedColor.fields.b = highlighted.fields.b;
      value.fields.m_HighlightedColor.fields.a = highlighted.fields.a;
      value.fields.m_PressedColor.fields.r = 1.0;
      value.fields.m_PressedColor.fields.g = 1.0;
      value.fields.m_PressedColor.fields.b = 1.0;
      value.fields.m_PressedColor.fields.a = 1.0;
      value.fields.m_SelectedColor.fields.r = normal.fields.r;
      value.fields.m_SelectedColor.fields.g = normal.fields.g;
      value.fields.m_SelectedColor.fields.b = normal.fields.b;
      value.fields.m_SelectedColor.fields.a = normal.fields.a;
      value.fields.m_DisabledColor.fields.r = 1.0;
      value.fields.m_DisabledColor.fields.g = 1.0;
      value.fields.m_DisabledColor.fields.b = 1.0;
      value.fields.m_DisabledColor.fields.a = 0.5;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_00,value,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                         (buttonObject,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,iconColor,(pUVar4->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ThemeColor
// il2cpp: UnityEngine_Color_o UI_MapEditorTopPanel__ThemeColor (UI_MapEditorTopPanel_o* __this, System_String_o* element, System_String_o* key, bool active, const MethodInfo* method);
// 0x5da10e0

UnityEngine_Color_o
UI_MapEditorTopPanel__ThemeColor
          (UI_MapEditorTopPanel_o *__this,System_String_o *element,System_String_o *key,bool active,
          MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_Color_o UVar1;
  
  if (Il2CppMethodInitialized_075480b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_075480b4 = '\x01';
  }
  panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar1 = UI_UIManager__GetThemeColor(panel,element,key,"DefaultPanel",method);
  UVar1.fields._8_8_ = UVar1.fields._8_8_;
  if (!active) {
    UVar1.fields._8_8_ = CONCAT44(UVar1.fields.a * 0.5,UVar1.fields.b);
  }
  UVar1.fields.b = (float)(int)UVar1.fields._8_8_;
  UVar1.fields.a = (float)(int)((ulong)UVar1.fields._8_8_ >> 0x20);
  return (UnityEngine_Color_o)UVar1.fields;
}


// UI.MapEditorTopPanel$$ButtonTextColor
// il2cpp: UnityEngine_Color_o UI_MapEditorTopPanel__ButtonTextColor (UI_MapEditorTopPanel_o* __this, bool active, const MethodInfo* method);
// 0x5da51d0

UnityEngine_Color_o
UI_MapEditorTopPanel__ButtonTextColor(UI_MapEditorTopPanel_o *__this,bool active,MethodInfo *method)

{
  System_String_o *category;
  System_String_o *item;
  System_String_o *panel;
  MethodInfo *in_R8;
  UnityEngine_Color_o UVar1;
  
  if (Il2CppMethodInitialized_075480b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    Il2CppMethodInitialized_075480b5 = '\x01';
  }
  item = "TextColor";
  category = "DefaultButton";
  if (Il2CppMethodInitialized_075480b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_075480b4 = '\x01';
  }
  panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar1 = UI_UIManager__GetThemeColor(panel,category,item,"DefaultPanel",in_R8);
  UVar1.fields._8_8_ = UVar1.fields._8_8_;
  if (!active) {
    UVar1.fields._8_8_ = CONCAT44(UVar1.fields.a * 0.5,UVar1.fields.b);
  }
  UVar1.fields.b = (float)(int)UVar1.fields._8_8_;
  UVar1.fields.a = (float)(int)((ulong)UVar1.fields._8_8_ >> 0x20);
  return (UnityEngine_Color_o)UVar1.fields;
}


// UI.MapEditorTopPanel$$SetTextButtonActive
// il2cpp: void UI_MapEditorTopPanel__SetTextButtonActive (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* buttonObject, bool active, const MethodInfo* method);
// 0x5da43d0

void UI_MapEditorTopPanel__SetTextButtonActive
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *buttonObject,bool active,
               MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *item;
  bool bVar1;
  UnityEngine_UI_Button_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *panel;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  float fVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_075480b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480b6 = '\x01';
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
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      in_R8 = (MethodInfo *)"DefaultPanel";
      UI_UIManager__GetThemeColorBlock
                (&local_88,pSVar2,"DefaultButton","","DefaultPanel",in_R9);
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_05da46c4;
      value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
      value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
      value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
      value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
      value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
      value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
      value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
      value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
      value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
      value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
      value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
      value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
      value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
      value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
      value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
      value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
      value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
      value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
      value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
      value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
      value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
      value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_00,value,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_GameObject__get_transform(buttonObject,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (Il2CppMethodInitialized_075480b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
          il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
          Il2CppMethodInitialized_075480b5 = '\x01';
        }
        item = "TextColor";
        pSVar2 = "DefaultButton";
        if (Il2CppMethodInitialized_075480b4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
          Il2CppMethodInitialized_075480b4 = '\x01';
        }
        panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UVar6 = UI_UIManager__GetThemeColor(panel,pSVar2,item,"DefaultPanel",in_R8);
        UVar7.fields.b = UVar6.fields.b;
        fVar5 = UVar6.fields.a;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          if (!active) {
            fVar5 = fVar5 * 0.5;
          }
          UVar7.fields.a = fVar5;
          UVar7.fields.r = UVar6.fields.r;
          UVar7.fields.g = UVar6.fields.g;
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (pUVar4,UVar7,(pUVar4->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
label_05da46c4:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$SetIcon
// il2cpp: void UI_MapEditorTopPanel__SetIcon (UI_MapEditorTopPanel_o* __this, UnityEngine_GameObject_o* button, System_String_o* icon, const MethodInfo* method);
// 0x5da46d0

void UI_MapEditorTopPanel__SetIcon
               (UI_MapEditorTopPanel_o *__this,UnityEngine_GameObject_o *button,System_String_o *icon,
               MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_075480b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_075480b7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (button != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (button,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,icon,true,false,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
        if ((value != (UnityEngine_Texture_o *)0x0) &&
           (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.MapEditorTopPanel$$OnDeleteMap
// il2cpp: void UI_MapEditorTopPanel__OnDeleteMap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da5430

void UI_MapEditorTopPanel__OnDeleteMap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_075480b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075480b8 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
      (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 == (UI_SelectListPopup_o *)0x0)) ||
     (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  name = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    Map_BuiltinLevels__DeleteCustomMap(name,(MethodInfo *)0x0);
    return;
  }
  Map_BuiltinLevels__DeleteCustomMap(name,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$OnNewFinish
// il2cpp: void UI_MapEditorTopPanel__OnNewFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da54c0

void UI_MapEditorTopPanel__OnNewFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_MapEditorSettings_o *pSVar4;
  bool bVar5;
  UI_MapEditorTopPanel___c__DisplayClass83_0_o *__this_00;
  System_Action_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass83_0_OnNewFinish_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass83_0);
    Il2CppMethodInitialized_075480b9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass83_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 != (UI_MapEditorTopPanel___c__DisplayClass83_0_o *)0x0)) {
    (__this_00->fields).newMap = (pSVar3->fields)._value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).newMap);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass83_0_OnNewFinish_b__0,
               (MethodInfo *)0x0);
    bVar5 = UI_MapEditorTopPanel__TrySaveMapFile(__this,__this_01,method_00);
    if (!bVar5) {
      return;
    }
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)(__this_00->fields).newMap,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
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
// 0x5da5650

void UI_MapEditorTopPanel__OnRenameFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  Settings_StringSetting_o *pSVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_MapEditorSettings_o *pSVar4;
  bool bVar5;
  bool bVar6;
  UI_MapEditorTopPanel___c__DisplayClass84_0_o *__this_00;
  System_Action_o *__this_01;
  MethodInfo *method_00;
  System_String_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_075480ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnRenameFinish_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
    Il2CppMethodInitialized_075480ba = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass84_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorTopPanel___c__DisplayClass84_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pSVar1 = (__this->fields)._currentMap;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      targetAddress = &(__this_00->fields).oldMap;
      (__this_00->fields).oldMap = (pSVar1->fields)._value;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar2 = (__this->fields)._menu;
      if (((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
          (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
         (pSVar1 = (pUVar3->fields).FinishSetting, pSVar1 != (Settings_StringSetting_o *)0x0)) {
        targetAddress_00 = &(__this_00->fields).newMap;
        (__this_00->fields).newMap = (pSVar1->fields)._value;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        bVar6 = false;
        bVar5 = System_String__op_Inequality
                          ((__this_00->fields).oldMap,(__this_00->fields).newMap,(MethodInfo *)0x0);
        (__this_00->fields).renamed = bVar5;
        if (bVar5) {
          bVar6 = System_String__Equals_52ffe30(*targetAddress,*targetAddress_00,5,(MethodInfo *)0x0);
        }
        (__this_00->fields).sameFile = bVar6;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnRenameFinish_b__0,
                   (MethodInfo *)0x0);
        bVar5 = UI_MapEditorTopPanel__TrySaveMapFile(__this,__this_01,method_00);
        if (!bVar5) {
          return;
        }
        pSVar1 = (__this->fields)._currentMap;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)*targetAddress_00,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
          if (pSVar4 != (Settings_MapEditorSettings_o *)0x0) {
            (*(pSVar4->klass->vtable)._18_Save.methodPtr)(pSVar4,(pSVar4->klass->vtable)._18_Save.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$TrySaveMapFile
// il2cpp: bool UI_MapEditorTopPanel__TrySaveMapFile (UI_MapEditorTopPanel_o* __this, System_Action_o* save, const MethodInfo* method);
// 0x5da2810
// eh: try 0x5da282e..0x5da28c5 -> pad 0x5da2842 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da29a4..0x5da29ca -> pad 0x5da29ca (+1 call sites) cleanup
// eh: try 0x5da29cf..0x5da29d4 -> pad 0x5da29dc catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da2842: mov r15, rdx
// asm:   0x5da2845: mov r12, rax
// asm:   0x5da2848: cmp r15d, 1
// asm:   0x5da284c: jne 0x5da29d4
// asm:   0x5da2852: mov rdi, r12
// asm:   0x5da2855: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da285a: mov r14, rax
// asm:   0x5da285d: mov r12, qword ptr [rax]
// asm:   0x5da2860: lea rdi, [rip + 0x14d5859]  ; TypeInfo_System_Exception
// asm:   0x5da2867: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da286c: test r12, r12
// asm:   0x5da286f: je 0x5da29a9
// asm:   0x5da2875: mov rcx, qword ptr [r12]
// asm:   0x5da2879: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5da2880: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5da2886: jb 0x5da29a9
// asm:   0x5da288c: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5da2893: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5da2898: jne 0x5da29a9
// asm:   0x5da289e: lea rdi, [rip + 0x14dba33]  ; TypeInfo_Utility_Util
// asm:   0x5da28a5: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da28aa: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da28b1: jne 0x5da28bb
// asm:   0x5da28b3: mov rdi, rax
// asm:   0x5da28b6: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da28bb: mov rdi, r12
// asm:   0x5da28be: xor esi, esi
// asm:   0x5da28c0: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5da28c5: test al, al
// asm:   0x5da28c7: je 0x5da29a9
// asm:   0x5da28cd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da28d2: mov rax, qword ptr [r12]
// asm:   0x5da28d6: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5da28dd: mov rdi, r12
// asm:   0x5da28e0: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5da28e6: mov rbx, rax
// asm:   0x5da28e9: lea rdi, [rip + 0x15393f0]  ; "Failed to save map: "
// asm:   0x5da28f0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da28f5: mov rdi, rax
// asm:   0x5da28f8: mov rsi, rbx
// asm:   0x5da28fb: xor edx, edx
// asm:   0x5da28fd: call 0x53f0320  ; System_String__Concat()
// asm:   0x5da2902: mov rbx, rax
// asm:   0x5da2905: lea rdi, [rip + 0x14d4d3c]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5da290c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da2911: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da2918: jne 0x5da2922
// asm:   0x5da291a: mov rdi, rax
// asm:   0x5da291d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da2922: mov rdi, rbx
// asm:   0x5da2925: xor esi, esi
// asm:   0x5da2927: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5da292c: mov rax, qword ptr [r13 + 0x98]
// asm:   0x5da2933: test rax, rax
// asm:   0x5da2936: je 0x5da298b
// asm:   0x5da2938: mov r14, qword ptr [rax + 0x30]
// asm:   0x5da293c: lea rdi, [rip + 0x14db625]  ; TypeInfo_UI_UIManager
// asm:   0x5da2943: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da2948: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da294f: jne 0x5da2959
// asm:   0x5da2951: mov rdi, rax
// asm:   0x5da2954: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da2959: lea rdi, [rip + 0x1544e50]  ; "SaveFailed"
// asm:   0x5da2960: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da2965: mov rdi, rax
// asm:   0x5da2968: call 0x5d93470  ; UI_UIManager__GetLocaleCommon()
// asm:   0x5da296d: test r14, r14
// asm:   0x5da2970: je 0x5da298b
// asm:   0x5da2972: xor ebx, ebx
// asm:   0x5da2974: mov rdi, r14
// asm:   0x5da2977: mov rsi, rax
// asm:   0x5da297a: mov edx, 1
// asm:   0x5da297f: xor ecx, ecx
// asm:   0x5da2981: call 0x5cc1c30  ; UI_MessagePopup__Show()
// asm:   0x5da2986: jmp 0x5da2831
// asm:   0x5da298b: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5da2990: jmp 0x5da2994
// asm:   0x5da2992: jmp 0x5da2994
// asm:   0x5da2994: mov r12, rax
// asm:   0x5da2997: cmp edx, r15d
// asm:   0x5da299a: jne 0x5da29cf
// asm:   0x5da299c: mov rdi, r12
// asm:   0x5da299f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da29a4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da29a9: mov edi, 8
// asm:   0x5da29ae: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5da29b3: mov rcx, qword ptr [r14]
// asm:   0x5da29b6: mov qword ptr [rax], rcx
// asm:   0x5da29b9: lea rsi, [rip + 0x108ab40]
// asm:   0x5da29c0: mov rdi, rax
// asm:   0x5da29c3: xor edx, edx
// asm:   0x5da29c5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5da29ca: jmp 0x5da29cc
// asm:   0x5da29cc: mov r12, rax
// asm:   0x5da29cf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da29d4: mov rdi, r12
// asm:   0x5da29d7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da29dc: mov rdi, rax
// asm:   0x5da29df: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorTopPanel__TrySaveMapFile
               (UI_MapEditorTopPanel_o *__this,System_Action_o *save,MethodInfo *method)

{
  if (save == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(save->fields).invoke_impl)((save->fields).method_code,(save->fields).method);
  return true;
}


// UI.MapEditorTopPanel$$OnOpenFinish
// il2cpp: void UI_MapEditorTopPanel__OnOpenFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da5840

void UI_MapEditorTopPanel__OnOpenFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass86_0_o *__this_00;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075480bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass86_0_OnOpenFinish_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass86_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_075480bb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass86_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorTopPanel___c__DisplayClass86_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      (__this_00->fields).mapName = (pSVar3->fields)._value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).mapName);
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (__this_00->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).script);
      pSVar5 = (__this_00->fields).mapName;
      pMVar4 = (__this_00->fields).script;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadMap("Custom",pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,false,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (__this_00->fields).script;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass86_0_OnOpenFinish_b__0,
                   (MethodInfo *)0x0);
        UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                  (__this,pMVar4,__this_01,(__this_00->fields).mapName,in_R8);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da5b70

void UI_MapEditorTopPanel__OnImportFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__87_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"ImportOverwrite");
    Il2CppMethodInitialized_075480bc = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_05da5d04;
  __this_00 = (pUVar2->fields).ConfirmPopup;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    if (Il2CppMethodInitialized_075480ac != '\0') goto label_05da5bfd;
label_05da5cac:
    pSVar3 = "ImportOverwrite";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075480ac == '\0') goto label_05da5cac;
label_05da5bfd:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar3 = "ImportOverwrite";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar3,"",
                      "",in_R9);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__87_0
             ,(MethodInfo *)0x0);
  if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_00,pSVar3,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05da5d04:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da5d10
// eh: try 0x5da5e17..0x5da5ebf -> pad 0x5da5ecf (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5da5ee6..0x5da5fba -> pad 0x5da5fba (+1 call sites) cleanup
// eh: try 0x5da5fbd..0x5da5fc2 -> pad 0x5da5fca catch (...) [compiler noexcept guard]
// asm: 74 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da5ebf: jmp 0x5da5ecf
// asm:   0x5da5ec1: jmp 0x5da5ecf
// asm:   0x5da5ec3: jmp 0x5da5ecf
// asm:   0x5da5ec5: jmp 0x5da5ecf
// asm:   0x5da5ec7: jmp 0x5da5ecf
// asm:   0x5da5ec9: jmp 0x5da5ecf
// asm:   0x5da5ecb: jmp 0x5da5ecf
// asm:   0x5da5ecd: jmp 0x5da5ecf
// asm:   0x5da5ecf: mov rbx, rax
// asm:   0x5da5ed2: cmp edx, 1
// asm:   0x5da5ed5: jne 0x5da5fc2
// asm:   0x5da5edb: mov rdi, rbx
// asm:   0x5da5ede: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da5ee3: mov rbx, rax
// asm:   0x5da5ee6: lea rdi, [rip + 0x14d21d3]  ; TypeInfo_System_Exception
// asm:   0x5da5eed: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da5ef2: mov rcx, qword ptr [rbx]
// asm:   0x5da5ef5: mov rsi, qword ptr [rcx]
// asm:   0x5da5ef8: mov rdi, rax
// asm:   0x5da5efb: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5da5f00: test al, al
// asm:   0x5da5f02: je 0x5da5f99
// asm:   0x5da5f08: mov rbx, qword ptr [rbx]
// asm:   0x5da5f0b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da5f10: mov rax, qword ptr [r14 + 0x98]
// asm:   0x5da5f17: test rax, rax
// asm:   0x5da5f1a: je 0x5da5f94
// asm:   0x5da5f1c: mov r14, qword ptr [rax + 0x70]
// asm:   0x5da5f20: lea rdi, [rip + 0x14d4a51]  ; TypeInfo_UI_MapEditorTopPanel
// asm:   0x5da5f27: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da5f2c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da5f33: jne 0x5da5f3d
// asm:   0x5da5f35: mov rdi, rax
// asm:   0x5da5f38: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5da5f3d: lea rdi, [rip + 0x1538b34]  ; "ImportError"
// asm:   0x5da5f44: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da5f49: mov rdi, rax
// asm:   0x5da5f4c: call 0x5d9f720  ; UI_MapEditorTopPanel__Locale()
// asm:   0x5da5f51: test rbx, rbx
// asm:   0x5da5f54: je 0x5da5f94
// asm:   0x5da5f56: mov r15, rax
// asm:   0x5da5f59: mov rax, qword ptr [rbx]
// asm:   0x5da5f5c: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5da5f63: mov rdi, rbx
// asm:   0x5da5f66: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5da5f6c: mov rdi, r15
// asm:   0x5da5f6f: mov rsi, rax
// asm:   0x5da5f72: xor edx, edx
// asm:   0x5da5f74: call 0x53f51c0  ; System_String__Format()
// asm:   0x5da5f79: test r14, r14
// asm:   0x5da5f7c: je 0x5da5f94
// asm:   0x5da5f7e: mov rdi, r14
// asm:   0x5da5f81: mov rsi, rax
// asm:   0x5da5f84: xor edx, edx
// asm:   0x5da5f86: pop rbx
// asm:   0x5da5f87: pop r12
// asm:   0x5da5f89: pop r13
// asm:   0x5da5f8b: pop r14
// asm:   0x5da5f8d: pop r15
// asm:   0x5da5f8f: jmp 0x5cc0bb0  ; UI_ImportPopup__ShowError()
// asm:   0x5da5f99: mov edi, 8
// asm:   0x5da5f9e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5da5fa3: mov rcx, qword ptr [rbx]
// asm:   0x5da5fa6: mov qword ptr [rax], rcx
// asm:   0x5da5fa9: lea rsi, [rip + 0x1087550]
// asm:   0x5da5fb0: mov rdi, rax
// asm:   0x5da5fb3: xor edx, edx
// asm:   0x5da5fb5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5da5fba: mov rbx, rax
// asm:   0x5da5fbd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da5fc2: mov rdi, rbx
// asm:   0x5da5fc5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da5fca: mov rdi, rax
// asm:   0x5da5fcd: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorTopPanel__OnImportConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass88_0_o *__this_00;
  Map_MapScript_o *pMVar4;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R8;
  Map_MapScript_o **targetAddress;
  
  if (Il2CppMethodInitialized_075480bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass88_0_OnImportConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass88_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_075480bd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass88_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_MapEditorTopPanel___c__DisplayClass88_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
  targetAddress = &(__this_00->fields).script;
  (__this_00->fields).script = pMVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
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
  pMVar4 = (__this_00->fields).script;
  if (pMVar4 == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
            (pMVar4,(pSVar3->fields)._value,false,(pMVar4->klass->vtable)._5_Deserialize.method);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (pUVar1->fields).ImportPopup;
  if (pUVar2 == (UI_ImportPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar2->klass->vtable)._58_HideImmediate.methodPtr)
            (pUVar2,(pUVar2->klass->vtable)._58_HideImmediate.method);
  pMVar4 = *targetAddress;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass88_0_OnImportConfirm_b__0,
             (MethodInfo *)0x0);
  pSVar3 = (__this->fields)._currentMap;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
            (__this,pMVar4,__this_01,(pSVar3->fields)._value,in_R8);
  return;
}


// UI.MapEditorTopPanel$$OnImportPresetFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da5ff0

void UI_MapEditorTopPanel__OnImportPresetFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__89_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPresetOverwrite");
    Il2CppMethodInitialized_075480be = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_05da6184;
  __this_00 = (pUVar2->fields).ConfirmPopup;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    if (Il2CppMethodInitialized_075480ac != '\0') goto label_05da607d;
label_05da612c:
    pSVar3 = "LoadPresetOverwrite";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075480ac == '\0') goto label_05da612c;
label_05da607d:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar3 = "LoadPresetOverwrite";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar3,"",
                      "",in_R9);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__89_0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_00,pSVar3,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05da6184:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportAutosaveFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportAutosaveFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da6190

void UI_MapEditorTopPanel__OnImportAutosaveFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__90_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadAutosaveOverwrite");
    Il2CppMethodInitialized_075480bf = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_05da6324;
  __this_00 = (pUVar2->fields).ConfirmPopup;
  if ((TypeInfo_UI_MapEditorTopPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel);
    if (Il2CppMethodInitialized_075480ac != '\0') goto label_05da621d;
label_05da62cc:
    pSVar3 = "LoadAutosaveOverwrite";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ac = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075480ac == '\0') goto label_05da62cc;
label_05da621d:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar3 = "LoadAutosaveOverwrite";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("MapEditor","Top",pSVar3,"",
                      "",in_R9);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__90_0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_00,pSVar3,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05da6324:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$OnImportPresetConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da6330

void UI_MapEditorTopPanel__OnImportPresetConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *name;
  UI_MapEditorTopPanel___c__DisplayClass91_0_o *__this_00;
  System_String_array *pSVar5;
  Map_MapScript_o *pMVar6;
  System_String_o *pSVar7;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075480c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass91_0_OnImportPresetConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass91_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_075480c0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass91_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorTopPanel___c__DisplayClass91_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pUVar2 = (__this->fields)._menu;
    if ((((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
        (pSVar4 = (pUVar3->fields).FinishSetting, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar7 = (pSVar4->fields)._value, pSVar7 != (System_String_o *)0x0)) {
      pSVar5 = System_String__Split(pSVar7,0x2f,0,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_array *)0x0) {
        iVar1 = (int)pSVar5->max_length;
        if ((iVar1 == 0) || (iVar1 == 1)) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = pSVar5->m_Items[0];
        name = pSVar5->m_Items[1];
        pMVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
        Map_MapScript___ctor(pMVar6,(MethodInfo *)0x0);
        (__this_00->fields).script = pMVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).script);
        pMVar6 = (__this_00->fields).script;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar7 = Map_BuiltinLevels__LoadMap(pSVar7,name,(MethodInfo *)0x0);
        if (pMVar6 != (Map_MapScript_o *)0x0) {
          (*(pMVar6->klass->vtable)._5_Deserialize.methodPtr)
                    (pMVar6,pSVar7,false,(pMVar6->klass->vtable)._5_Deserialize.method);
          pMVar6 = (__this_00->fields).script;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass91_0_OnImportPresetConfirm_b__0,
                     (MethodInfo *)0x0);
          pSVar4 = (__this->fields)._currentMap;
          if (pSVar4 != (Settings_StringSetting_o *)0x0) {
            UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                      (__this,pMVar6,__this_01,(pSVar4->fields)._value,in_R8);
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
// 0x5da6530

void UI_MapEditorTopPanel__OnImportAutosaveConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MapEditorTopPanel___c__DisplayClass92_0_o *__this_00;
  Map_MapScript_o *pMVar4;
  System_String_o *pSVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075480c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass92_0_OnImportAutosaveConfirm_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass92_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_075480c1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass92_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorTopPanel___c__DisplayClass92_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pUVar1 = (__this->fields)._menu;
    if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
        (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
       (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      pMVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar4,(MethodInfo *)0x0);
      (__this_00->fields).script = pMVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).script);
      pMVar4 = (__this_00->fields).script;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = Map_BuiltinLevels__LoadAutosave(pSVar5,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapScript_o *)0x0) {
        (*(pMVar4->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar4,pSVar5,false,(pMVar4->klass->vtable)._5_Deserialize.method);
        pMVar4 = (__this_00->fields).script;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass92_0_OnImportAutosaveConfirm_b__0,
                   (MethodInfo *)0x0);
        pSVar3 = (__this->fields)._currentMap;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
                    (__this,pMVar4,__this_01,(pSVar3->fields)._value,in_R8);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$ContinueAfterVersionConfirmation
// il2cpp: void UI_MapEditorTopPanel__ContinueAfterVersionConfirmation (UI_MapEditorTopPanel_o* __this, Map_MapScript_o* script, UnityEngine_Events_UnityAction_o* continuation, System_String_o* backupName, const MethodInfo* method);
// 0x5da5a10

void UI_MapEditorTopPanel__ContinueAfterVersionConfirmation
               (UI_MapEditorTopPanel_o *__this,Map_MapScript_o *script,
               UnityEngine_Events_UnityAction_o *continuation,System_String_o *backupName,MethodInfo *method)

{
  Map_MapScript_o **targetAddress;
  Map_MapScript_o *pMVar1;
  Map_MapVersionConversionResult_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorVersionConversionPopup_o *__this_00;
  int32_t iVar4;
  UI_MapEditorTopPanel___c__DisplayClass93_0_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_075480c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorTopPanel_c__DisplayClass93_0_ContinueAfterVersionConfirmation_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel_c__DisplayClass93_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_075480c2 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTopPanel_c__DisplayClass93_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MapEditorTopPanel___c__DisplayClass93_0_o *)0x0) {
    (__this_01->fields).backupName = backupName;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).backupName);
    targetAddress = &(__this_01->fields).script;
    (__this_01->fields).script = script;
    Il2CppCodeGenWriteBarrier(targetAddress);
    targetAddress_00 = &(__this_01->fields).continuation;
    (__this_01->fields).continuation = continuation;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pMVar1 = (__this_01->fields).script;
    if (pMVar1 != (Map_MapScript_o *)0x0) {
      pMVar2 = (pMVar1->fields)._LastUpgradeResult_k__BackingField;
      if (pMVar2 != (Map_MapVersionConversionResult_o *)0x0) {
        iVar4 = Map_MapVersionConversionResult__get_VersionCount(pMVar2,(MethodInfo *)0x0);
        if (0 < iVar4) {
          pUVar3 = (__this->fields)._menu;
          if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
             (pMVar1 = *targetAddress, pMVar1 != (Map_MapScript_o *)0x0)) {
            __this_00 = (pUVar3->fields).VersionConversionPopup;
            pMVar2 = (pMVar1->fields)._LastUpgradeResult_k__BackingField;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Events_UnityAction___ctor
                      (pUVar5,(Il2CppObject *)__this_01,
                       (intptr_t)
                       MethodInfo_UI_MapEditorTopPanel_c__DisplayClass93_0_ContinueAfterVersionConfirmation_b__0
                       ,(MethodInfo *)0x0);
            if (__this_00 != (UI_MapEditorVersionConversionPopup_o *)0x0) {
              UI_MapEditorVersionConversionPopup__Show(__this_00,pMVar2,pUVar5,method_00);
              return;
            }
          }
          goto label_05da5b5d;
        }
      }
      pUVar5 = *targetAddress_00;
      if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
        return;
      }
    }
  }
label_05da5b5d:
  ThrowNullReferenceException();
}


// UI.MapEditorTopPanel$$.ctor
// il2cpp: void UI_MapEditorTopPanel___ctor (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7130

void UI_MapEditorTopPanel___ctor(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_DropdownSelectElement__o *__this_01;
  
  if (Il2CppMethodInitialized_075480c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DropdownSelectElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_DropdownSelectElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_075480c3 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._dropdownSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdownSelection);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._toolDropdownSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toolDropdownSelection);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._playMode = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._playMode);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DropdownSelectElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_DropdownSelectElement_ctor);
  (__this->fields)._dropdowns = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdowns);
  (__this->fields)._selectedTool = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedTool);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$.cctor
// il2cpp: void UI_MapEditorTopPanel___cctor (const MethodInfo* method);
// 0x5da72b0

void UI_MapEditorTopPanel___cctor(MethodInfo *method)

{
  UI_MapEditorTopPanel_StaticFields *pUVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  Settings_HashSetSetting_int__o *pSVar3;
  
  if (Il2CppMethodInitialized_075480c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTopPanel);
    Il2CppMethodInitialized_075480c4 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
  Settings_HashSetSetting_int____ctor
            (pSVar3,(System_Collections_Generic_HashSet_T__o *)pSVar2,
             (MethodInfo_4F63FE0 *)MethodInfo_Settings_HashSetSetting_int_ctor);
  TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTopPanel->static_fields->_gridSelection);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Add
            (pSVar2,0,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
  Settings_HashSetSetting_int____ctor
            (pSVar3,(System_Collections_Generic_HashSet_T__o *)pSVar2,
             (MethodInfo_4F63FE0 *)MethodInfo_Settings_HashSetSetting_int_ctor);
  pUVar1 = TypeInfo_UI_MapEditorTopPanel->static_fields;
  pUVar1->_layerSelection = pSVar3;
  Il2CppCodeGenWriteBarrier(&pUVar1->_layerSelection);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_0
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7410

void UI_MapEditorTopPanel___Setup_b__41_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnFileClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_1
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7420

void UI_MapEditorTopPanel___Setup_b__41_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnEditClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_2
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7430

void UI_MapEditorTopPanel___Setup_b__41_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnOptionsClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_3
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7440

void UI_MapEditorTopPanel___Setup_b__41_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075480c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AddObject");
    Il2CppMethodInitialized_075480c5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"AddObject",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_4
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7480

void UI_MapEditorTopPanel___Setup_b__41_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MethodInfo *method_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (__this_00->fields).CurrentGizmoMode == 0;
  method_00 = (MethodInfo *)(ulong)bVar1;
  GameManagers_MapEditorGameManager__SetGizmoMode(__this_00,(uint)bVar1,(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_5
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da74b0

void UI_MapEditorTopPanel___Setup_b__41_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pbVar1 = &(pGVar2->fields).Snap;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_6
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da74d0

void UI_MapEditorTopPanel___Setup_b__41_6(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnToolSelected(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_7
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da74e0

void UI_MapEditorTopPanel___Setup_b__41_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnGridChanged(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_8
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_8 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da74f0

void UI_MapEditorTopPanel___Setup_b__41_8(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__ToggleLights(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_9
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7500

void UI_MapEditorTopPanel___Setup_b__41_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnLayersChanged(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_10
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_10 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7510

void UI_MapEditorTopPanel___Setup_b__41_10(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._playModeExplicitlySelected = true;
  UI_MapEditorTopPanel__RefreshPlayModeLabel(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__41_11
// il2cpp: void UI_MapEditorTopPanel___Setup_b__41_11 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7520

void UI_MapEditorTopPanel___Setup_b__41_11(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__PlayMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_0
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7530

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    Il2CppMethodInitialized_075480c6 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)"Position";
  GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Position",(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_1
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7580

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_075480c7 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)"Rotation";
  GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Rotation",(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_2
// il2cpp: void UI_MapEditorTopPanel___CreateSideToolbar_b__44_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da75d0

void UI_MapEditorTopPanel___CreateSideToolbar_b__44_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    Il2CppMethodInitialized_075480c8 = '\x01';
  }
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)"Scale";
  GameManagers_MapEditorGameManager__SetGizmo(__this_00,"Scale",(MethodInfo *)0x0);
  UI_MapEditorTopPanel__RefreshControlStates(__this,method_00);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_5
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7620

void UI_MapEditorTopPanel___OnFileClick_b__48_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnNewFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_6
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7630

void UI_MapEditorTopPanel___OnFileClick_b__48_6(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_0
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7640

void UI_MapEditorTopPanel___OnFileClick_b__48_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnOpenFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_1
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7650

void UI_MapEditorTopPanel___OnFileClick_b__48_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_2
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7660

void UI_MapEditorTopPanel___OnFileClick_b__48_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnRenameFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_3
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7670

void UI_MapEditorTopPanel___OnFileClick_b__48_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_4
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7680

void UI_MapEditorTopPanel___OnFileClick_b__48_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_7
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7690

void UI_MapEditorTopPanel___OnFileClick_b__48_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportPresetFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__48_9
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__48_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da76a0

void UI_MapEditorTopPanel___OnFileClick_b__48_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportAutosaveFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Save>b__49_0
// il2cpp: void UI_MapEditorTopPanel___Save_b__49_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da76b0

void UI_MapEditorTopPanel___Save_b__49_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_String_o *name;
  Map_MapScript_o *script;
  
  if (Il2CppMethodInitialized_075480c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075480c9 = '\x01';
  }
  pSVar1 = (__this->fields)._currentMap;
  if ((pSVar1 == (Settings_StringSetting_o *)0x0) ||
     (pGVar2 = (__this->fields)._gameManager, pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  name = (pSVar1->fields)._value;
  script = (pGVar2->fields).MapScript;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$<OnImportFinish>b__87_0
// il2cpp: void UI_MapEditorTopPanel___OnImportFinish_b__87_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7730

void UI_MapEditorTopPanel___OnImportFinish_b__87_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportConfirm(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnImportPresetFinish>b__89_0
// il2cpp: void UI_MapEditorTopPanel___OnImportPresetFinish_b__89_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7740

void UI_MapEditorTopPanel___OnImportPresetFinish_b__89_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportPresetConfirm(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnImportAutosaveFinish>b__90_0
// il2cpp: void UI_MapEditorTopPanel___OnImportAutosaveFinish_b__90_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x5da7750

void UI_MapEditorTopPanel___OnImportAutosaveFinish_b__90_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportAutosaveConfirm(__this,method);
  return;
}


