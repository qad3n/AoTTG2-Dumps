// Type: Windmill_RandomSpin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Assembly-CSharp/Windmill_RandomSpin.cs
// Prior real C# source: none
// --------------------------------

// Windmill_RandomSpin$$Start
// il2cpp: void Windmill_RandomSpin__Start (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x323c240

void Windmill_RandomSpin__Start(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  float time;
  
  if (Il2CppMethodInitialized_0753e4b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RandomSpin");
    Il2CppMethodInitialized_0753e4b0 = '\x01';
  }
  time = UnityEngine_Random__Range(0.0,3.4,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__Invoke
            ((UnityEngine_MonoBehaviour_o *)__this,"RandomSpin",time,(MethodInfo *)0x0);
  return;
}


// Windmill_RandomSpin$$RandomSpin
// il2cpp: void Windmill_RandomSpin__RandomSpin (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x323c290

void Windmill_RandomSpin__RandomSpin(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if (Il2CppMethodInitialized_0753e4b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Trigger_Spin");
    Il2CppMethodInitialized_0753e4b1 = '\x01';
  }
  __this_00 = (__this->fields)._animator;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetTrigger(__this_00,"Trigger_Spin",(MethodInfo *)0x0);
  return;
}


// Windmill_RandomSpin$$.ctor
// il2cpp: void Windmill_RandomSpin___ctor (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x323c2d0

void Windmill_RandomSpin___ctor(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


