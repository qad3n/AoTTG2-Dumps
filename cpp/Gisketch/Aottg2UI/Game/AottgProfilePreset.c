// Type: Gisketch.Aottg2UI.Game.AottgProfilePreset
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreset_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, const MethodInfo* method);
// 0x181046250

void
Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor(Gisketch_Aottg2UI_Game_AottgProfilePreset_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, MethodInfo* method)

{
  (__this->fields).m_DelagateCallback = callback;
  Il2CppCodeGenWriteBarrier((void **)__this,callback);
  (__this->fields).m_DelagateState = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_DelagateState,state);
  (__this->fields).m_WaitHandle = waitHandle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_WaitHandle,waitHandle);
  return;
}


