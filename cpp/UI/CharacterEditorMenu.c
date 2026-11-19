// Type: UI.CharacterEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs
// --------------------------------

// UI.CharacterEditorMenu$$Setup
// il2cpp: void UI_CharacterEditorMenu__Setup (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x5cd4f30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd4fca: lea rdi, [rbx + 0x98]
// asm:   0x5cd4fd1: jmp 0x5cd4fe5

void UI_CharacterEditorMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  GameManagers_CharacterEditorGameManager_c *pGVar3;
  
  if (Il2CppMethodInitialized_07547bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547bad = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pGVar3 = TypeInfo_GameManagers_CharacterEditorGameManager;
  pGVar2 = (GameManagers_CharacterEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
label_05cd4fe5:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
    (*(__this->klass->vtable)._9_RebuildPanels.methodPtr)
              (__this,true,(__this->klass->vtable)._9_RebuildPanels.method);
    (*(__this->klass->vtable)._10_ResetCharacter.methodPtr)
              (__this,false,(__this->klass->vtable)._10_ResetCharacter.method);
    return;
  }
  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
  if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
    (__this->fields)._gameManager = pGVar2;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pGVar3)) goto label_05cd4fe5;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar3);
}


// UI.CharacterEditorMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorMenu__IsPopupActive (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x5cd51f0

bool UI_CharacterEditorMenu__IsPopupActive(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

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
      return (pUVar2->fields).IsActive != false;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorMenu__RebuildPanels (UI_CharacterEditorMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x5cd5be0

void UI_CharacterEditorMenu__RebuildPanels
               (UI_CharacterEditorMenu_o *__this,bool costumePopup,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorMenu__ResetCharacter (UI_CharacterEditorMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x5cd5bf0

void UI_CharacterEditorMenu__ResetCharacter
               (UI_CharacterEditorMenu_o *__this,bool fullReset,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMinMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x5cd5c00

float UI_CharacterEditorMenu__GetMinMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CharacterEditorMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMaxMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x5cd5c10

float UI_CharacterEditorMenu__GetMaxMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  return (float)iVar1;
}


// UI.CharacterEditorMenu$$.ctor
// il2cpp: void UI_CharacterEditorMenu___ctor (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x5cd5bd0

void UI_CharacterEditorMenu___ctor(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


