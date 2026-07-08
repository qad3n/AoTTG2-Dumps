// Type: UI.CategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/CategoryPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CategoryPanel$$GetWidth
// il2cpp: float UI_CategoryPanel__GetWidth (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x401d460

float UI_CategoryPanel__GetWidth(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar2;
  
  pUVar1 = (__this->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._30_GetPanelWidth.methodPtr;
    fVar2 = (float)(*vtable_dispatch)
                             (pUVar1,(pUVar1->klass->vtable)._30_GetPanelWidth.method,in_RDX,
                              vtable_dispatch);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CategoryPanel$$GetHeight
// il2cpp: float UI_CategoryPanel__GetHeight (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x401d490

float UI_CategoryPanel__GetHeight(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar2;
  
  pUVar1 = (__this->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._31_GetPanelHeight.methodPtr;
    fVar2 = (float)(*vtable_dispatch)
                             (pUVar1,(pUVar1->klass->vtable)._31_GetPanelHeight.method,in_RDX,
                              vtable_dispatch);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CategoryPanel$$.ctor
// il2cpp: void UI_CategoryPanel___ctor (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x401d4c0

void UI_CategoryPanel___ctor(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


