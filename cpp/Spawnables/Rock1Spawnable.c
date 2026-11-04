// Type: Spawnables.Rock1Spawnable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/Rock1Spawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/Rock1Spawnable.cs
// --------------------------------

// Spawnables.Rock1Spawnable$$SetupSettings
// il2cpp: void Spawnables_Rock1Spawnable__SetupSettings (Spawnables_Rock1Spawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x181dc9420

void Spawnables_Rock1Spawnable__SetupSettings
               (Spawnables_Rock1Spawnable_o *__this,System_Object_array *settings,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  Characters_BaseCharacter_c *pCVar2;
  System_Collections_Generic_List_BaseUseable__o *pSVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  bool bVar5;
  int32_t *piVar6;
  Characters_BaseCharacter_o *x;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *p;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_1843449fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843449fb = '\x01';
  }
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = settings->m_Items[0];
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (obj != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
      }
      piVar6 = il2cpp_object_unbox(obj);
      x = Utility_Util__FindCharacterByViewId(*piVar6,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar5) && (x != (Characters_BaseCharacter_o *)0x0)) {
        pCVar2 = x->klass;
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
          if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
            il2cpp_codegen_raise_invalid_cast_exception(x);
          }
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pSVar3 = (*(uint64_t *)((char *)x + 0x288));
          if (((pSVar3 != (System_Collections_Generic_List_BaseUseable__o *)0x0) &&
              (__this_00 = *(UnityEngine_Component_o **)&(*(uint32_t *)((char *)pSVar3 + 0x90)),
              __this_00 != (UnityEngine_Component_o *)0x0)) &&
             (p = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent(pUVar7,p,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              local_18.x = 0.0;
              local_18.y = 0.07;
              local_18.z = -0.07;
              UnityEngine_Transform__set_localPosition
                        (pUVar7,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433de5b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_18433de5b = '\x01';
              }
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
                local_18.x = (pUVar4->identityQuaternion).fields.x;
                local_18.y = (pUVar4->identityQuaternion).fields.y;
                local_18.z = (pUVar4->identityQuaternion).fields.z;
                local_18.w = (pUVar4->identityQuaternion).fields.w;
                UnityEngine_Transform__set_localRotation
                          (pUVar7,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto label_181dc9643;
        }
      }
      return;
    }
  }
label_181dc9643:
  ThrowNullReferenceException();
}


// Spawnables.Rock1Spawnable$$.ctor
// il2cpp: void Spawnables_Rock1Spawnable___ctor (Spawnables_Rock1Spawnable_o* __this, const MethodInfo* method);
// 0x180528540

void
Spawnables_Rock1Spawnable___ctor(Spawnables_Rock1Spawnable_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


