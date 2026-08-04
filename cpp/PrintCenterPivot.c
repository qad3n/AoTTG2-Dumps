// Type: PrintCenterPivot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PrintCenterPivot.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PrintCenterPivot.cs
// --------------------------------

// PrintCenterPivot$$Awake
// il2cpp: void PrintCenterPivot__Awake (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x40683a0

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
  
  if (g_data_057ac2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_GetComponentInChildren_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac2ce = '\x01';
  }
  local_38[0] = 0.0;
  local_40 = (undefined1  [8])0x0;
  __this_00 = (UnityEngine_Renderer_o *)
              UnityEngine_Component__GetComponentInChildren_object__24e7d50
                        ((UnityEngine_Component_o *)__this,MethodInfo_MeshRenderer_GetComponentInChildren_MeshRenderer);
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&local_30,__this_00,(MethodInfo *)0x0);
    local_40 = (undefined1  [8])local_30;
    local_38[0] = local_28;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    __this = (PrintCenterPivot_o *)local_40;
    pSVar1 = System_Single__ToString(__this_01,(MethodInfo *)__this);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        __this = (PrintCenterPivot_o *)values->m_Items;
        values->m_Items[0] = pSVar1;
        il2cpp_runtime_helper_022b4080();
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = ",";
          fVar2 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
          __this = (PrintCenterPivot_o *)(local_40 + 4);
          pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)__this);
          if (2 < (uint)values->max_length) {
            __this = (PrintCenterPivot_o *)(values->m_Items + 2);
            values->m_Items[2] = pSVar1;
            il2cpp_runtime_helper_022b4080();
            if (3 < (uint)values->max_length) {
              __this = (PrintCenterPivot_o *)local_38;
              values->m_Items[3] = ",";
              fVar2 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
              pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)__this);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar1;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar1 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PrintCenterPivot$$.ctor
// il2cpp: void PrintCenterPivot___ctor (PrintCenterPivot_o* __this, const MethodInfo* method);
// 0x4068550

void PrintCenterPivot___ctor(PrintCenterPivot_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


