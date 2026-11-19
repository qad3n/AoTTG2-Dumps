// Type: Utility.RaycastHelper
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/RaycastHelper.cs
// Prior real C# source: none
// --------------------------------

// Utility.RaycastHelper.DistanceComparer$$Compare
// il2cpp: int32_t Utility_RaycastHelper_DistanceComparer__Compare (Utility_RaycastHelper_DistanceComparer_o* __this, UnityEngine_RaycastHit_o x, UnityEngine_RaycastHit_o y, const MethodInfo* method);
// 0x5df0870

int32_t Utility_RaycastHelper_DistanceComparer__Compare
                  (Utility_RaycastHelper_DistanceComparer_o *__this,UnityEngine_RaycastHit_o x,
                  UnityEngine_RaycastHit_o y,MethodInfo *method)

{
  int32_t iVar1;
  float value;
  float fStack_4;
  
  UnityEngine_RaycastHit__get_distance(&x,(MethodInfo *)0x0);
  value = UnityEngine_RaycastHit__get_distance(&y,(MethodInfo *)0x0);
  iVar1 = System_Single__CompareTo_54d0870(&fStack_4,value,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.RaycastHelper.DistanceComparer$$.ctor
// il2cpp: void Utility_RaycastHelper_DistanceComparer___ctor (Utility_RaycastHelper_DistanceComparer_o* __this, const MethodInfo* method);
// 0x5df0860

void Utility_RaycastHelper_DistanceComparer___ctor
               (Utility_RaycastHelper_DistanceComparer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.RaycastHelper$$SortedRaycast
// il2cpp: int32_t Utility_RaycastHelper__SortedRaycast (UnityEngine_Ray_o ray, UnityEngine_RaycastHit_array* results, float distance, int32_t layerMask, const MethodInfo* method);
// 0x5df05e0

int32_t Utility_RaycastHelper__SortedRaycast
                  (UnityEngine_Ray_o ray,UnityEngine_RaycastHit_array *results,float distance,
                  int32_t layerMask,MethodInfo *method)

{
  int32_t length;
  
  if (Il2CppMethodInitialized_075482ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Sort_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_075482ed = '\x01';
  }
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  length = UnityEngine_Physics__RaycastNonAlloc_69dc030(ray,results,distance,layerMask,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  System_Array__Sort_RaycastHit_
            (results,0,length,
             (System_Collections_Generic_IComparer_T__o *)
             TypeInfo_Utility_RaycastHelper->static_fields->_comparer,
             (MethodInfo_33E3C00 *)MethodInfo_System_Array_Sort_RaycastHit);
  return length;
}


// Utility.RaycastHelper$$SortedRaycast
// il2cpp: int32_t Utility_RaycastHelper__SortedRaycast (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_array* results, float distance, int32_t layerMask, const MethodInfo* method);
// 0x5df06d0

int32_t Utility_RaycastHelper__SortedRaycast_5cf06d0
                  (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,
                  UnityEngine_RaycastHit_array *results,float distance,int32_t layerMask,MethodInfo *method)

{
  int32_t length;
  
  if (Il2CppMethodInitialized_075482ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Sort_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_075482ee = '\x01';
  }
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  length = UnityEngine_Physics__RaycastNonAlloc_69dc2d0
                     (origin,direction,results,distance,layerMask,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  System_Array__Sort_RaycastHit_
            (results,0,length,
             (System_Collections_Generic_IComparer_T__o *)
             TypeInfo_Utility_RaycastHelper->static_fields->_comparer,
             (MethodInfo_33E3C00 *)MethodInfo_System_Array_Sort_RaycastHit);
  return length;
}


// Utility.RaycastHelper$$.cctor
// il2cpp: void Utility_RaycastHelper___cctor (const MethodInfo* method);
// 0x5df07f0

void Utility_RaycastHelper___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075482ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper_DistanceComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_075482ef = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RaycastHelper_DistanceComparer);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Utility_RaycastHelper->static_fields->_comparer =
       (Utility_RaycastHelper_DistanceComparer_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_RaycastHelper->static_fields->_comparer);
  return;
}


