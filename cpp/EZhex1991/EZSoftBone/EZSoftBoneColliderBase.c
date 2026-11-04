// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderBase
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderBase.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderBase.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x180583f00

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18433df45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_Add);
    Il2CppMethodInitialized_18433df45 = '\x01';
  }
  if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)__this,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_Add)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x180583e80

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18433df46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_Remove);
    Il2CppMethodInitialized_18433df46 = '\x01';
  }
  if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,(Il2CppObject *)__this,
               (MethodInfo_1766930 *)
               MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_Remove);
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x180528540

void
EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor(EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor (const MethodInfo* method);
// 0x180583f80

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_EZSoftBoneColliderBase__o *__this;
  
  if (Il2CppMethodInitialized_18433df47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase);
    Il2CppMethodInitialized_18433df47 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_ctor);
  TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders,__this);
  return;
}


