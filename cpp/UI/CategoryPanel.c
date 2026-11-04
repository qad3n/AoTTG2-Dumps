// Type: UI.CategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/CategoryPanel.cs
// --------------------------------

// UI.CategoryPanel$$GetWidth
// il2cpp: float UI_CategoryPanel__GetWidth (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x1821bc8f0

float UI_CategoryPanel__GetWidth(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    fVar2 = (*(pUVar1->klass->vtable)._30_GetPanelWidth.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._30_GetPanelWidth.method);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// UI.CategoryPanel$$GetHeight
// il2cpp: float UI_CategoryPanel__GetHeight (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x1821bc8c0

float UI_CategoryPanel__GetHeight(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *pUVar1;
  Unity_VisualScripting_IGraph_o *pUVar2;
  
  pUVar1 = (__this->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    pUVar2._0_4_ = (*(pUVar1->klass->vtable)._31_GetPanelHeight.methodPtr)
                             (pUVar1,(pUVar1->klass->vtable)._31_GetPanelHeight.method);
    return (float)pUVar2._0_4_;
  }
  ThrowNullReferenceException();
}


// UI.CategoryPanel$$.ctor
// il2cpp: void UI_CategoryPanel___ctor (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x1821bc920

void
UI_CategoryPanel___ctor(UI_CategoryPanel_o* __this, MethodInfo* method)

{
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


