// Type: UI.CharacterEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorMenu$$Setup
// il2cpp: void UI_CharacterEditorMenu__Setup (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x40536c0

void UI_CharacterEditorMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar3;
  
  if (DAT_05704430 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704430 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pIVar3 = TypeInfo_CharacterEditorGameManager;
  pGVar2 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
LAB_04053775:
    il2cpp_runtime_glue(&(__this->fields)._gameManager);
    (*(__this->klass->vtable)._8_RebuildPanels.methodPtr)
              (__this,1,(__this->klass->vtable)._8_RebuildPanels.method);
    vtable_dispatch = (__this->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (__this,0,(__this->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
  bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
  if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
    (__this->fields)._gameManager = pGVar2;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto LAB_04053775;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pGVar2,pIVar3);
}


// UI.CharacterEditorMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorMenu__IsPopupActive (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4053980

bool_conflict
UI_CharacterEditorMenu__IsPopupActive(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  undefined8 in_RAX;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    if ((char)(pUVar1->fields).IsActive != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
    pUVar2 = (__this->fields).IconPickPopup;
    if (pUVar2 != (UI_IconPickPopup_o *)0x0) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pUVar2 >> 8),(char)(pUVar2->fields).IsActive != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorMenu__RebuildPanels (UI_CharacterEditorMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x40541f0

void UI_CharacterEditorMenu__RebuildPanels
               (UI_CharacterEditorMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorMenu__ResetCharacter (UI_CharacterEditorMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4054200

void UI_CharacterEditorMenu__ResetCharacter
               (UI_CharacterEditorMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMinMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4054210

float UI_CharacterEditorMenu__GetMinMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CharacterEditorMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMaxMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4054220

float UI_CharacterEditorMenu__GetMaxMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  return (float)iVar1;
}


// UI.CharacterEditorMenu$$.ctor
// il2cpp: void UI_CharacterEditorMenu___ctor (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x40541e0

void UI_CharacterEditorMenu___ctor(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


