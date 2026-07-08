// Type: Replay.ReplayScriptEvent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Replay/ReplayScriptEvent.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Replay/ReplayScript/ReplayScriptEvent.cs  [prior source available (delta unverified)]
// --------------------------------

// Replay.ReplayScriptEvent$$.ctor
// il2cpp: void Replay_ReplayScriptEvent___ctor (Replay_ReplayScriptEvent_o* __this, const MethodInfo* method);
// 0x3f154b0

void Replay_ReplayScriptEvent___ctor(Replay_ReplayScriptEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_05703cb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703cb2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Parameters);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


