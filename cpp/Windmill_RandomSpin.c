// Type: Windmill_RandomSpin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Assembly-CSharp/Windmill_RandomSpin.cs
// Prior real C# source: none
// --------------------------------

// Windmill_RandomSpin$$Start
// il2cpp: void Windmill_RandomSpin__Start (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x242b290

void Windmill_RandomSpin__Start(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  float time;
  
  if (g_data_057a65d0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d0 = '\x01';
  }
  time = UnityEngine_Random__Range(0.0,3.4,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)__this,"RandomSpin",time,(MethodInfo *)0x0)
  ;
  return;
}


// Windmill_RandomSpin$$RandomSpin
// il2cpp: void Windmill_RandomSpin__RandomSpin (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x242b2e0

void Windmill_RandomSpin__RandomSpin(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057a65d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Trigger_Spin");
    g_data_057a65d1 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._animator;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Animator__SetTrigger((UnityEngine_Animator_o *)__this_00,"Trigger_Spin",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Windmill_RandomSpin$$.ctor
// il2cpp: void Windmill_RandomSpin___ctor (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x242b320

void Windmill_RandomSpin___ctor(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


