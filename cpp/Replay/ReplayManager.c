// Type: Replay.ReplayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayManager.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayManager.cs
// --------------------------------

// Replay.ReplayManager$$Init
// il2cpp: void Replay_ReplayManager__Init (const MethodInfo* method);
// 0x42044c0

void Replay_ReplayManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ad8d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ReplayManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
    g_data_057ad8d2 = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_ReplayManager + 0xb8),MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
  **(undefined8 **)(TypeInfo_ReplayManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ReplayManager + 0xb8),pIVar1);
  return;
}


// Replay.ReplayManager$$.ctor
// il2cpp: void Replay_ReplayManager___ctor (Replay_ReplayManager_o* __this, const MethodInfo* method);
// 0x4204530

void Replay_ReplayManager___ctor(Replay_ReplayManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


