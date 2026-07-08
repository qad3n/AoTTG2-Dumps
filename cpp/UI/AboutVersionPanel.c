// Type: UI.AboutVersionPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/AboutVersionPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/AboutVersionPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.AboutVersionPanel$$get_VerticalSpacing
// il2cpp: float UI_AboutVersionPanel__get_VerticalSpacing (UI_AboutVersionPanel_o* __this, const MethodInfo* method);
// 0x40de8d0

float UI_AboutVersionPanel__get_VerticalSpacing(UI_AboutVersionPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.AboutVersionPanel$$get_ScrollBar
// il2cpp: bool UI_AboutVersionPanel__get_ScrollBar (UI_AboutVersionPanel_o* __this, const MethodInfo* method);
// 0x40de8e0

bool_conflict UI_AboutVersionPanel__get_ScrollBar(UI_AboutVersionPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutVersionPanel$$Setup
// il2cpp: void UI_AboutVersionPanel__Setup (UI_AboutVersionPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40de8f0

void UI_AboutVersionPanel__Setup
               (UI_AboutVersionPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  
  if (DAT_05704792 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&"7.03.2026");
    il2cpp_init_method_metadata(&"Current version: ");
    DAT_05704792 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,100.0,20.0,pSVar1,(MethodInfo *)0x0);
  if ("7.03.2026" != (long *)0x0) {
    parent_00 = (__this->fields).SinglePanel;
    pSVar1 = (System_String_o *)
             (**(code **)(*"7.03.2026" + 0x168))
                       ("7.03.2026",*(undefined8 *)(*"7.03.2026" + 0x170));
    pSVar1 = System_String__Concat("Current version: ",pSVar1,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(parent_00,__this_00,pSVar1,1,3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutVersionPanel$$.ctor
// il2cpp: void UI_AboutVersionPanel___ctor (UI_AboutVersionPanel_o* __this, const MethodInfo* method);
// 0x40de9f0

void UI_AboutVersionPanel___ctor(UI_AboutVersionPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


