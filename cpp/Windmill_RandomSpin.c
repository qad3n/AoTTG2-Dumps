// Type: Windmill_RandomSpin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Assembly-CSharp/Windmill_RandomSpin.cs
// Prior source: NEW in this update
// --------------------------------

// Windmill_RandomSpin$$Start
// il2cpp: void Windmill_RandomSpin__Start (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x23ed180

void Windmill_RandomSpin__Start(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  float time;
  
  if (DAT_056fdd10 == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fdd10 = '\x01';
  }
  time = UnityEngine_Random__Range(0.0,3.4,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__Invoke
            ((UnityEngine_MonoBehaviour_o *)__this,"RandomSpin",time,(MethodInfo *)0x0);
  return;
}


// Windmill_RandomSpin$$RandomSpin
// il2cpp: void Windmill_RandomSpin__RandomSpin (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x23ed1d0

void Windmill_RandomSpin__RandomSpin(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if (DAT_056fdd11 == '\0') {
    il2cpp_init_method_metadata(&"Trigger_Spin");
    DAT_056fdd11 = '\x01';
  }
  __this_00 = (__this->fields)._animator;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetTrigger(__this_00,"Trigger_Spin",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Windmill_RandomSpin$$.ctor
// il2cpp: void Windmill_RandomSpin___ctor (Windmill_RandomSpin_o* __this, const MethodInfo* method);
// 0x23ed210

void Windmill_RandomSpin___ctor(Windmill_RandomSpin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


