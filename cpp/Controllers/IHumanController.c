// Type: Controllers.IHumanController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/IHumanController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.IHumanController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_IHumanController__GetAimPoint (Controllers_IHumanController_o* __this, const MethodInfo* method);
// 0x180528050

UnityEngine_Vector3_o *
Controllers_IHumanController__GetAimPoint
          (UnityEngine_Vector3_o *__return_storage_ptr__,Controllers_IHumanController_o *__this,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar2->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


