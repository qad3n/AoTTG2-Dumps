// Type: UI.AboutChangelogPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/AboutChangelogPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/AboutChangelogPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.AboutChangelogPanel$$get_VerticalSpacing
// il2cpp: float UI_AboutChangelogPanel__get_VerticalSpacing (UI_AboutChangelogPanel_o* __this, const MethodInfo* method);
// 0x40dd9d0

float UI_AboutChangelogPanel__get_VerticalSpacing
                (UI_AboutChangelogPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.AboutChangelogPanel$$get_ScrollBar
// il2cpp: bool UI_AboutChangelogPanel__get_ScrollBar (UI_AboutChangelogPanel_o* __this, const MethodInfo* method);
// 0x40dd9e0

bool_conflict
UI_AboutChangelogPanel__get_ScrollBar(UI_AboutChangelogPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutChangelogPanel$$Setup
// il2cpp: void UI_AboutChangelogPanel__Setup (UI_AboutChangelogPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40dd9f0

void UI_AboutChangelogPanel__Setup
               (UI_AboutChangelogPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *parent_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  undefined8 *puVar2;
  int32_t alignment;
  long lVar3;
  
  if (DAT_05704789 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&"Loading changelog...");
    DAT_05704789 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,100.0,20.0,themePanel,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
    iVar1 = *(int *)(lVar3 + 0x18);
    parent_00 = (__this->fields).SinglePanel;
  }
  else {
    lVar3 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
    iVar1 = *(int *)(lVar3 + 0x18);
    parent_00 = (__this->fields).SinglePanel;
  }
  if (iVar1 == 1) {
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
    }
    puVar2 = (undefined8 *)(lVar3 + 8);
    alignment = 3;
  }
  else {
    alignment = 4;
    puVar2 = &"Loading changelog...";
  }
  UI_ElementFactory__CreateDefaultLabel
            (parent_00,__this_00,(System_String_o *)*puVar2,0,alignment,(MethodInfo *)0x0);
  return;
}


// UI.AboutChangelogPanel$$.ctor
// il2cpp: void UI_AboutChangelogPanel___ctor (UI_AboutChangelogPanel_o* __this, const MethodInfo* method);
// 0x40ddb10

void UI_AboutChangelogPanel___ctor(UI_AboutChangelogPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


