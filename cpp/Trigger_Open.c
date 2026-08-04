// Type: Trigger_Open
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Assembly-CSharp/Trigger_Open.cs
// Prior real C# source: none
// --------------------------------

// Trigger_Open$$Start
// il2cpp: void Trigger_Open__Start (Trigger_Open_o* __this, const MethodInfo* method);
// 0x242b330

void Trigger_Open__Start(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057a65d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Trigger_Open");
    g_data_057a65d2 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._animator;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Animator__SetTrigger((UnityEngine_Animator_o *)__this_00,"Trigger_Open",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Trigger_Open$$.ctor
// il2cpp: void Trigger_Open___ctor (Trigger_Open_o* __this, const MethodInfo* method);
// 0x242b370

void Trigger_Open___ctor(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


