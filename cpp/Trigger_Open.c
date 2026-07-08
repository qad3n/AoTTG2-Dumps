// Type: Trigger_Open
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Assembly-CSharp/Trigger_Open.cs
// Prior source: NEW in this update
// --------------------------------

// Trigger_Open$$Start
// il2cpp: void Trigger_Open__Start (Trigger_Open_o* __this, const MethodInfo* method);
// 0x23ed220

void Trigger_Open__Start(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if (DAT_056fdd12 == '\0') {
    il2cpp_init_method_metadata(&"Trigger_Open");
    DAT_056fdd12 = '\x01';
  }
  __this_00 = (__this->fields)._animator;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetTrigger(__this_00,"Trigger_Open",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Trigger_Open$$.ctor
// il2cpp: void Trigger_Open___ctor (Trigger_Open_o* __this, const MethodInfo* method);
// 0x23ed260

void Trigger_Open___ctor(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


