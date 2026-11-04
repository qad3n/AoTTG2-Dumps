// Type: Replay.ReplayScriptEvent
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayScriptEvent.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScriptEvent.cs
// --------------------------------

// Replay.ReplayScriptEvent$$.ctor
// il2cpp: void Replay_ReplayScriptEvent___ctor (Replay_ReplayScriptEvent_o* __this, const MethodInfo* method);
// 0x181f25140

void Replay_ReplayScriptEvent___ctor(Replay_ReplayScriptEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_1843454d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843454d3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters,__this_00);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


