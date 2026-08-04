// Type: UI.DuelPlayPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DuelPlayPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPlayPanel.cs
// --------------------------------

// UI.DuelPlayPanel$$get_VerticalSpacing
// il2cpp: float UI_DuelPlayPanel__get_VerticalSpacing (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x43faae0

float UI_DuelPlayPanel__get_VerticalSpacing(UI_DuelPlayPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.DuelPlayPanel$$get_VerticalPadding
// il2cpp: int32_t UI_DuelPlayPanel__get_VerticalPadding (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x43faaf0

int32_t UI_DuelPlayPanel__get_VerticalPadding(UI_DuelPlayPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.DuelPlayPanel$$Setup
// il2cpp: void UI_DuelPlayPanel__Setup (UI_DuelPlayPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43fab00

void UI_DuelPlayPanel__Setup(UI_DuelPlayPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.DuelPlayPanel$$Sync
// il2cpp: void UI_DuelPlayPanel__Sync (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x43fab10

void UI_DuelPlayPanel__Sync(UI_DuelPlayPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.DuelPlayPanel$$.ctor
// il2cpp: void UI_DuelPlayPanel___ctor (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x43fab20

void UI_DuelPlayPanel___ctor(UI_DuelPlayPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (g_data_057ae55d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    g_data_057ae55d = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._rows = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rows);
  (__this->fields)._currentSyncDelay = 0.2;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


