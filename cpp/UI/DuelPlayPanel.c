// Type: UI.DuelPlayPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DuelPlayPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPlayPanel.cs
// --------------------------------

// UI.DuelPlayPanel$$get_VerticalSpacing
// il2cpp: float UI_DuelPlayPanel__get_VerticalSpacing (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_DuelPlayPanel__get_VerticalSpacing(UI_DuelPlayPanel_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.DuelPlayPanel$$get_VerticalPadding
// il2cpp: int32_t UI_DuelPlayPanel__get_VerticalPadding (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_DuelPlayPanel__get_VerticalPadding(UI_DuelPlayPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.DuelPlayPanel$$Setup
// il2cpp: void UI_DuelPlayPanel__Setup (UI_DuelPlayPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182278860

void
UI_DuelPlayPanel__Setup(UI_DuelPlayPanel_o* __this, UI_BasePanel_o* parent, MethodInfo* method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.DuelPlayPanel$$Sync
// il2cpp: void UI_DuelPlayPanel__Sync (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_DuelPlayPanel__Sync(UI_DuelPlayPanel_o* __this, MethodInfo* method)

{
  return;
}


// UI.DuelPlayPanel$$.ctor
// il2cpp: void UI_DuelPlayPanel___ctor (UI_DuelPlayPanel_o* __this, const MethodInfo* method);
// 0x182278870

void UI_DuelPlayPanel___ctor(UI_DuelPlayPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    Il2CppMethodInitialized_1843473ee = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._rows = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,__this_00);
  (__this->fields)._currentSyncDelay = 0.2;
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


