// Type: Replay.ReplayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayManager.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayManager.cs
// --------------------------------

// Replay.ReplayManager$$Init
// il2cpp: void Replay_ReplayManager__Init (const MethodInfo* method);
// 0x586e430

void Replay_ReplayManager__Init(MethodInfo *method)

{
  Replay_ReplayManager_o *pRVar1;
  
  if (Il2CppMethodInitialized_0754515c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ReplayManager);
    Il2CppMethodInitialized_0754515c = '\x01';
  }
  pRVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Replay_ReplayManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_ReplayManager)
  ;
  TypeInfo_Replay_ReplayManager->static_fields->_instance = pRVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Replay_ReplayManager->static_fields->_instance);
  return;
}


// Replay.ReplayManager$$.ctor
// il2cpp: void Replay_ReplayManager___ctor (Replay_ReplayManager_o* __this, const MethodInfo* method);
// 0x586e4a0

void Replay_ReplayManager___ctor(Replay_ReplayManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


