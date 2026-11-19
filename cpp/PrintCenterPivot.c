// Type: PrintCenterPivot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PrintCenterPivot.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PrintCenterPivot.cs
// --------------------------------

// PrintCenterPivot$$Awake
// il2cpp: void PrintCenterPivot__Awake (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x58520c0

void PrintCenterPivot__Awake(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_MeshRenderer_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar1;
  UnityEngine_Bounds_o local_30;
  
  if (Il2CppMethodInitialized_07545057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07545057 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B09D0 *)
                         MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer);
  if (__this_00 != (UnityEngine_MeshRenderer_o *)0x0) {
    UnityEngine_Renderer__get_bounds(&local_30,(UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar1 = System_Single__ToString((float *)&local_30,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar1;
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = ",";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          pSVar1 = System_Single__ToString(&local_30.fields.m_Center.fields.y,(MethodInfo *)0x0);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar1;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              pSVar1 = System_Single__ToString(&local_30.fields.m_Center.fields.z,(MethodInfo *)0x0);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar1;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// PrintCenterPivot$$.ctor
// il2cpp: void PrintCenterPivot___ctor (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x5852270

void PrintCenterPivot___ctor(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


