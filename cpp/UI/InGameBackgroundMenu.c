// Type: UI.InGameBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InGameBackgroundMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs
// --------------------------------

// UI.InGameBackgroundMenu$$Setup
// il2cpp: void UI_InGameBackgroundMenu__Setup (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d281b0

void UI_InGameBackgroundMenu__Setup(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UI_BloodBackgroundPanel_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_BloodBackgroundPanel);
    Il2CppMethodInitialized_07547deb = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__CreateDefaultPopup_object_
                     (parent,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_BloodBackgroundPanel);
  (__this->fields)._bloodBackgroundPanel = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bloodBackgroundPanel);
  return;
}


// UI.InGameBackgroundMenu$$ShowBlood
// il2cpp: void UI_InGameBackgroundMenu__ShowBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d28210

void UI_InGameBackgroundMenu__ShowBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BloodBackgroundPanel_o *pUVar1;
  
  pUVar1 = (__this->fields)._bloodBackgroundPanel;
  if (pUVar1 == (UI_BloodBackgroundPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
  return;
}


// UI.InGameBackgroundMenu$$HideBlood
// il2cpp: void UI_InGameBackgroundMenu__HideBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d28240

void UI_InGameBackgroundMenu__HideBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BloodBackgroundPanel_o *pUVar1;
  
  pUVar1 = (__this->fields)._bloodBackgroundPanel;
  if (pUVar1 == (UI_BloodBackgroundPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
  return;
}


// UI.InGameBackgroundMenu$$.ctor
// il2cpp: void UI_InGameBackgroundMenu___ctor (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d28270

void UI_InGameBackgroundMenu___ctor(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


