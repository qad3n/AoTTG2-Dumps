// Type: UI.LeaderboardDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/LeaderboardDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// --------------------------------

// UI.LeaderboardDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_LeaderboardDefaultPanel__get_ScrollBar (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x5d56be0

bool UI_LeaderboardDefaultPanel__get_ScrollBar(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.LeaderboardDefaultPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x5d56bf0

int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding
                  (UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.LeaderboardDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_LeaderboardDefaultPanel__get_VerticalSpacing (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x5d56c00

float UI_LeaderboardDefaultPanel__get_VerticalSpacing(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.LeaderboardDefaultPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LeaderboardDefaultPanel__get_ThemePanel (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x5d56c10

System_String_o *
UI_LeaderboardDefaultPanel__get_ThemePanel(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardPopup");
    Il2CppMethodInitialized_07547f2f = '\x01';
  }
  return "LeaderboardPopup";
}


// UI.LeaderboardDefaultPanel$$Setup
// il2cpp: void UI_LeaderboardDefaultPanel__Setup (UI_LeaderboardDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d56c40

void UI_LeaderboardDefaultPanel__Setup
               (UI_LeaderboardDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"NotAvailable");
    Il2CppMethodInitialized_07547f30 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).SinglePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","LeaderboardPopup","NotAvailable","",
                      "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent_00,__this_00,pSVar1,0,4,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___ctor (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x5d56d70

void UI_LeaderboardDefaultPanel___ctor(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


