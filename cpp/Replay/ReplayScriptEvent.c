// Type: Replay.ReplayScriptEvent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayScriptEvent.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScriptEvent.cs
// --------------------------------

// Replay.ReplayScriptEvent$$.ctor
// il2cpp: void Replay_ReplayScriptEvent___ctor (Replay_ReplayScriptEvent_o* __this, const MethodInfo* method);
// 0x42045a0

void Replay_ReplayScriptEvent___ctor(Replay_ReplayScriptEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057ad8d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad8d3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Parameters);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


