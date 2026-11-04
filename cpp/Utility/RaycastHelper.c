// Type: Utility.RaycastHelper
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Utility/RaycastHelper.cs
// Prior real C# source: none
// --------------------------------

// Utility.RaycastHelper.DistanceComparer$$Compare
// il2cpp: int32_t Utility_RaycastHelper_DistanceComparer__Compare (Utility_RaycastHelper_DistanceComparer_o* __this, UnityEngine_RaycastHit_o x, UnityEngine_RaycastHit_o y, const MethodInfo* method);
// 0x182336490

int32_t
Utility_RaycastHelper_DistanceComparer__Compare(Utility_RaycastHelper_DistanceComparer_o* __this, UnityEngine_RaycastHit_o x, UnityEngine_RaycastHit_o y, MethodInfo* method)

{
  int32_t iVar1;
  float value;
  float local_18 [4];
  
  local_18[0] = 0.0;
  local_18[0] = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)x,(MethodInfo *)0x0);
  value = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)y,(MethodInfo *)0x0);
  iVar1 = System_Single__CompareTo_1b49410(local_18,value,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.RaycastHelper.DistanceComparer$$.ctor
// il2cpp: void Utility_RaycastHelper_DistanceComparer___ctor (Utility_RaycastHelper_DistanceComparer_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_RaycastHelper_DistanceComparer___ctor(Utility_RaycastHelper_DistanceComparer_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.RaycastHelper$$SortedRaycast
// il2cpp: int32_t Utility_RaycastHelper__SortedRaycast (UnityEngine_Ray_o ray, UnityEngine_RaycastHit_array* results, float distance, int32_t layerMask, const MethodInfo* method);
// 0x18233ea40

int32_t Utility_RaycastHelper__SortedRaycast
                  (UnityEngine_Ray_o *ray,UnityEngine_RaycastHit_array *results,float distance,
                  int32_t layerMask,MethodInfo *method)

{
  int32_t length;
  UnityEngine_Ray_o local_38 [2];
  
  if (Il2CppMethodInitialized_18434783f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Sort_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_18434783f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_38[0].fields.m_Origin.fields.x = (ray->fields).m_Origin.fields.x;
  local_38[0].fields.m_Origin.fields.y = (ray->fields).m_Origin.fields.y;
  local_38[0].fields._8_8_ = *(undefined8 *)&(ray->fields).m_Origin.fields.z;
  local_38[0].fields.m_Direction.fields.y = (ray->fields).m_Direction.fields.y;
  local_38[0].fields.m_Direction.fields.z = (ray->fields).m_Direction.fields.z;
  length = UnityEngine_Physics__RaycastNonAlloc_2fe48d0(local_38,results,distance,layerMask,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  System_Array__Sort_RaycastHit_
            (results,0,length,
             (System_Collections_Generic_IComparer_T__o *)
             TypeInfo_Utility_RaycastHelper->static_fields->_comparer,
             (MethodInfo_6044C0 *)MethodInfo_System_Array_Sort_RaycastHit);
  return length;
}


// Utility.RaycastHelper$$SortedRaycast
// il2cpp: int32_t Utility_RaycastHelper__SortedRaycast (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_array* results, float distance, int32_t layerMask, const MethodInfo* method);
// 0x18233eb40

int32_t Utility_RaycastHelper__SortedRaycast_233eb40
                  (UnityEngine_Vector3_o *origin,UnityEngine_Vector3_o *direction,
                  UnityEngine_RaycastHit_array *results,float distance,int32_t layerMask,MethodInfo *method)

{
  int32_t length;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Sort_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_184347840 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_38.x = (direction->fields).x;
  local_38.y = (direction->fields).y;
  local_38.z = (direction->fields).z;
  local_28[0].z = (origin->fields).z;
  local_28[0].x = (origin->fields).x;
  local_28[0].y = (origin->fields).y;
  length = UnityEngine_Physics__RaycastNonAlloc_2fe4a70
                     ((UnityEngine_Vector3_o *)local_28,(UnityEngine_Vector3_o *)&local_38,results,distance,
                      layerMask,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  System_Array__Sort_RaycastHit_
            (results,0,length,
             (System_Collections_Generic_IComparer_T__o *)
             TypeInfo_Utility_RaycastHelper->static_fields->_comparer,
             (MethodInfo_6044C0 *)MethodInfo_System_Array_Sort_RaycastHit);
  return length;
}


// Utility.RaycastHelper$$.cctor
// il2cpp: void Utility_RaycastHelper___cctor (const MethodInfo* method);
// 0x18233ec50

void Utility_RaycastHelper___cctor(MethodInfo *method)

{
  Utility_RaycastHelper_DistanceComparer_o *__this;
  
  if (Il2CppMethodInitialized_184347841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper_DistanceComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_184347841 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RaycastHelper_DistanceComparer);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Utility_RaycastHelper->static_fields->_comparer = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_RaycastHelper->static_fields->_comparer,__this);
  return;
}


