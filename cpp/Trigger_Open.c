// Type: Trigger_Open
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Assembly-CSharp/Trigger_Open.cs
// Prior real C# source: none
// --------------------------------

// Trigger_Open$$Start
// il2cpp: void Trigger_Open__Start (Trigger_Open_o* __this, const MethodInfo* method);
// 0x323c2e0

void Trigger_Open__Start(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if (Il2CppMethodInitialized_0753e4b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Trigger_Open");
    Il2CppMethodInitialized_0753e4b2 = '\x01';
  }
  __this_00 = (__this->fields)._animator;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetTrigger(__this_00,"Trigger_Open",(MethodInfo *)0x0);
  return;
}


// Trigger_Open$$.ctor
// il2cpp: void Trigger_Open___ctor (Trigger_Open_o* __this, const MethodInfo* method);
// 0x323c320

void Trigger_Open___ctor(Trigger_Open_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


