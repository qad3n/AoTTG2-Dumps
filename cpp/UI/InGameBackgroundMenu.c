// Type: UI.InGameBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/InGameBackgroundMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.InGameBackgroundMenu$$Setup
// il2cpp: void UI_InGameBackgroundMenu__Setup (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40b3c30

void UI_InGameBackgroundMenu__Setup(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UI_BloodBackgroundPanel_o *pUVar1;
  
  if (DAT_05704655 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BloodBackgroundPanel_CreateDefaultPopup_BloodBac);
    DAT_05704655 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar1 = (UI_BloodBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(parent,0,MethodInfo_BloodBackgroundPanel_CreateDefaultPopup_BloodBac);
  (__this->fields)._bloodBackgroundPanel = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._bloodBackgroundPanel,pUVar1);
  return;
}


// UI.InGameBackgroundMenu$$ShowBlood
// il2cpp: void UI_InGameBackgroundMenu__ShowBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40b3c90

void UI_InGameBackgroundMenu__ShowBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BloodBackgroundPanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._bloodBackgroundPanel;
  if (pUVar1 != (UI_BloodBackgroundPanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._21_Show.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._21_Show.method,in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameBackgroundMenu$$HideBlood
// il2cpp: void UI_InGameBackgroundMenu__HideBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40b3cc0

void UI_InGameBackgroundMenu__HideBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BloodBackgroundPanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._bloodBackgroundPanel;
  if (pUVar1 != (UI_BloodBackgroundPanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameBackgroundMenu$$.ctor
// il2cpp: void UI_InGameBackgroundMenu___ctor (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40b3cf0

void UI_InGameBackgroundMenu___ctor(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


