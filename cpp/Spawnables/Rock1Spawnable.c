// Type: Spawnables.Rock1Spawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Spawnables/Rock1Spawnable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Spawnables/Rock1Spawnable.cs  [CHANGED since prior version]
// --------------------------------

// Spawnables.Rock1Spawnable$$SetupSettings
// il2cpp: void Spawnables_Rock1Spawnable__SetupSettings (Spawnables_Rock1Spawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3d8ea60

void Spawnables_Rock1Spawnable__SetupSettings
               (Spawnables_Rock1Spawnable_o *__this,System_Object_array *settings,MethodInfo *method
               )

{
  byte bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_c *__this_00;
  bool_conflict bVar4;
  int32_t *piVar5;
  Characters_BaseCharacter_o *x;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *p;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702715 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702715 = '\x01';
  }
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = settings->m_Items[0];
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar2);
      }
      piVar5 = (int32_t *)il2cpp_glue_022c7330(pIVar2);
      x = Utility_Util__FindCharacterByViewId(*piVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar4 != '\0') && (x != (Characters_BaseCharacter_o *)0x0)) {
        bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
        if ((bVar1 <= (x->klass->_2).naturalAligment) &&
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pSVar3 = x[2].fields.FeedVictimName;
          if ((pSVar3 != (System_String_o *)0x0) &&
             (__this_00 = pSVar3[6].klass, __this_00 != (System_String_c *)0x0)) {
            p = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar6,p,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                value.fields.z = -0.07;
                value.fields.x = 0.0;
                value.fields.y = 0.07;
                UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (DAT_056fde1e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                  DAT_056fde1e = '\x01';
                }
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localRotation
                            (pUVar6,(UnityEngine_Quaternion_o)
                                    **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto LAB_03d8ec2d;
        }
      }
      return;
    }
  }
LAB_03d8ec2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Spawnables.Rock1Spawnable$$.ctor
// il2cpp: void Spawnables_Rock1Spawnable___ctor (Spawnables_Rock1Spawnable_o* __this, const MethodInfo* method);
// 0x3d8ec40

void Spawnables_Rock1Spawnable___ctor(Spawnables_Rock1Spawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


