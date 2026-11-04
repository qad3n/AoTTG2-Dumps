// Type: Replay.ReplayManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayManager.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayManager.cs
// --------------------------------

// Replay.ReplayManager$$Init
// il2cpp: void Replay_ReplayManager__Init (const MethodInfo* method);
// 0x181f250c0

void Replay_ReplayManager__Init(MethodInfo *method)

{
  Replay_ReplayManager_o *value;
  
  if (Il2CppMethodInitialized_1843454d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ReplayManager);
    Il2CppMethodInitialized_1843454d2 = '\x01';
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Replay_ReplayManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_ReplayManager);
  TypeInfo_Replay_ReplayManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Replay_ReplayManager->static_fields->_instance,value);
  return;
}


// Replay.ReplayManager$$.ctor
// il2cpp: void Replay_ReplayManager___ctor (Replay_ReplayManager_o* __this, const MethodInfo* method);
// 0x180528540

void
Replay_ReplayManager___ctor(Replay_ReplayManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


