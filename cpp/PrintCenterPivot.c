// Type: PrintCenterPivot
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PrintCenterPivot.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PrintCenterPivot.cs
// --------------------------------

// PrintCenterPivot$$Awake
// il2cpp: void PrintCenterPivot__Awake (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x181dadb30

void PrintCenterPivot__Awake(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_MeshRenderer_o *__this_00;
  UnityEngine_Bounds_o *pUVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  undefined8 local_38;
  float local_30 [2];
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_1843448ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_1843448ff = '\x01';
  }
  local_38 = 0;
  local_30[0] = 0.0;
  __this_00 = UnityEngine_Component__GetComponentInChildren_object__664b50
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_664B50 *)
                         MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer);
  if (__this_00 != (UnityEngine_MeshRenderer_o *)0x0) {
    pUVar1 = UnityEngine_Renderer__get_bounds(&local_28,(UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0)
    ;
    local_38._0_4_ = (pUVar1->fields).m_Center.fields.x;
    local_38._4_4_ = (pUVar1->fields).m_Center.fields.y;
    local_30[0] = (pUVar1->fields).m_Center.fields.z;
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar2 = System_Single__ToString((float *)&local_38,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
        pSVar2 = ",";
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = ",";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
          pSVar2 = System_Single__ToString((float *)((longlong)&local_38 + 4),(MethodInfo *)0x0);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
            pSVar2 = ",";
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
              pSVar2 = System_Single__ToString(local_30,(MethodInfo *)0x0);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar2;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
                pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
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
// 0x180528540

void
PrintCenterPivot___ctor(PrintCenterPivot_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


