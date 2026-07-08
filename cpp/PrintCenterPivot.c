// Type: PrintCenterPivot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PrintCenterPivot.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/PrintCenterPivot.cs  [prior source available (delta unverified)]
// --------------------------------

// PrintCenterPivot$$Awake
// il2cpp: void PrintCenterPivot__Awake (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x3d72a50

void PrintCenterPivot__Awake(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar1;
  float __this_01;
  float fVar2;
  undefined1 local_40 [8];
  float local_38 [2];
  InvokerMethod local_30;
  float local_28;
  
  if (DAT_0570261e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_GetComponentInChildren_MeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&",");
    DAT_0570261e = '\x01';
  }
  local_38[0] = 0.0;
  local_40 = (undefined1  [8])0x0;
  __this_00 = (UnityEngine_Renderer_o *)
              UnityEngine_Component__GetComponentInChildren<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_MeshRenderer_GetComponentInChildren_MeshRenderer);
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&local_30,__this_00,(MethodInfo *)0x0);
    local_40 = (undefined1  [8])local_30;
    local_38[0] = local_28;
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    pSVar1 = System_Single__ToString(__this_01,(MethodInfo *)local_40);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar1;
        il2cpp_runtime_glue(values->m_Items,pSVar1);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = ",";
          fVar2 = (float)il2cpp_runtime_glue(values->m_Items + 1);
          pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)(local_40 + 4));
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar1;
            il2cpp_runtime_glue(values->m_Items + 2,pSVar1);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = ",";
              fVar2 = (float)il2cpp_runtime_glue(values->m_Items + 3);
              pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)local_38);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar1;
                il2cpp_runtime_glue(values->m_Items + 4);
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PrintCenterPivot$$.ctor
// il2cpp: void PrintCenterPivot___ctor (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x3d72c00

void PrintCenterPivot___ctor(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


