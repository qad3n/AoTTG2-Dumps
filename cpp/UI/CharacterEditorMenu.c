// Type: UI.CharacterEditorMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs
// --------------------------------

// UI.CharacterEditorMenu$$Setup
// il2cpp: void UI_CharacterEditorMenu__Setup (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x1821da6d0

void UI_CharacterEditorMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *value;
  
  if (Il2CppMethodInitialized_184346fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346fad = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  value = (GameManagers_CharacterEditorGameManager_o *)
          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (value == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._gameManager = value;
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value);
  (*(__this->klass->vtable)._8_RebuildPanels.methodPtr)
            (__this,(System_Type_o *)0x1,(__this->klass->vtable)._8_RebuildPanels.method);
  (*(__this->klass->vtable)._9_ResetCharacter.methodPtr)
            (__this,(System_Type_o *)0x0,(__this->klass->vtable)._9_ResetCharacter.method);
  return;
}


// UI.CharacterEditorMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorMenu__IsPopupActive (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x1821da690

bool
UI_CharacterEditorMenu__IsPopupActive(UI_CharacterEditorMenu_o* __this, MethodInfo* method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    if ((pUVar1->fields).IsActive != false) {
      return true;
    }
    pUVar2 = (__this->fields).IconPickPopup;
    if (pUVar2 != (UI_IconPickPopup_o *)0x0) {
      return (pUVar2->fields).IsActive;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorMenu__RebuildPanels (UI_CharacterEditorMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorMenu__RebuildPanels(UI_CharacterEditorMenu_o* __this, bool costumePopup, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorMenu__ResetCharacter (UI_CharacterEditorMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorMenu__ResetCharacter(UI_CharacterEditorMenu_o* __this, bool fullReset, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMinMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_CharacterEditorMenu__GetMinMouseX(UI_CharacterEditorMenu_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.CharacterEditorMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMaxMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x1821da670

float UI_CharacterEditorMenu__GetMaxMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  return (float)iVar1;
}


// UI.CharacterEditorMenu$$.ctor
// il2cpp: void UI_CharacterEditorMenu___ctor (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void
UI_CharacterEditorMenu___ctor(UI_CharacterEditorMenu_o* __this, MethodInfo* method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


