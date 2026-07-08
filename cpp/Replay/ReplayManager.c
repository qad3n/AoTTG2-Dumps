// Type: Replay.ReplayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Replay/ReplayManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Replay/ReplayManager.cs  [CHANGED since prior version]
// --------------------------------

// Replay.ReplayManager$$Init
// il2cpp: void Replay_ReplayManager__Init (const MethodInfo* method);
// 0x3f153d0

void Replay_ReplayManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05703cb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ReplayManager);
    il2cpp_init_method_metadata(&MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
    DAT_05703cb1 = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_ReplayManager + 0xb8),MethodInfo_ReplayManager_CreateSingleton_ReplayManager);
  **(undefined8 **)(TypeInfo_ReplayManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ReplayManager + 0xb8),pIVar1);
  return;
}


// Replay.ReplayManager$$.ctor
// il2cpp: void Replay_ReplayManager___ctor (Replay_ReplayManager_o* __this, const MethodInfo* method);
// 0x3f15440

void Replay_ReplayManager___ctor(Replay_ReplayManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


