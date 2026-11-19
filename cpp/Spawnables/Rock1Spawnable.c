// Type: Spawnables.Rock1Spawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/Rock1Spawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/Rock1Spawnable.cs
// --------------------------------

// Spawnables.Rock1Spawnable$$SetupSettings
// il2cpp: void Spawnables_Rock1Spawnable__SetupSettings (Spawnables_Rock1Spawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x586dba0

void Spawnables_Rock1Spawnable__SetupSettings
               (Spawnables_Rock1Spawnable_o *__this,System_Object_array *settings,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  System_Collections_Generic_List_BaseUseable__o *pSVar2;
  UnityEngine_Component_o *__this_00;
  bool bVar3;
  int32_t *piVar4;
  Characters_BaseCharacter_o *x;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *p;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545157 = '\x01';
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
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      piVar4 = il2cpp_vm_Object_Unbox(obj);
      x = Utility_Util__FindCharacterByViewId(*piVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar3) && (x != (Characters_BaseCharacter_o *)0x0)) {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar1 <= (x->klass->_2).typeHierarchyDepth) &&
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan))
        {
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pSVar2 = (*(uint64_t *)((char *)x + 0x2a0));
          if ((pSVar2 != (System_Collections_Generic_List_BaseUseable__o *)0x0) &&
             (__this_00 = *(UnityEngine_Component_o **)&(*(uint32_t *)((char *)pSVar2 + 0x90)),
             __this_00 != (UnityEngine_Component_o *)0x0)) {
            p = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                value.fields.z = -0.07;
                value.fields.x = 0.0;
                value.fields.y = 0.07;
                UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e72b == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                  Il2CppMethodInitialized_0753e72b = '\x01';
                }
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localRotation
                            (pUVar5,(UnityEngine_Quaternion_o)
                                    *(UnityEngine_Quaternion_Fields *)
                                     TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto label_0586dd6d;
        }
      }
      return;
    }
  }
label_0586dd6d:
  ThrowNullReferenceException();
}


// Spawnables.Rock1Spawnable$$.ctor
// il2cpp: void Spawnables_Rock1Spawnable___ctor (Spawnables_Rock1Spawnable_o* __this, const MethodInfo* method);
// 0x586dd80

void Spawnables_Rock1Spawnable___ctor(Spawnables_Rock1Spawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


