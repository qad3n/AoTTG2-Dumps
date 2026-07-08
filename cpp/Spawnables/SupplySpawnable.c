// Type: Spawnables.SupplySpawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Spawnables/SupplySpawnable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Spawnables/SupplySpawnable.cs  [CHANGED since prior version]
// --------------------------------

// Spawnables.SupplySpawnable$$OnTriggerStay
// il2cpp: void Spawnables_SupplySpawnable__OnTriggerStay (Spawnables_SupplySpawnable_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3d8f1d0

void Spawnables_SupplySpawnable__OnTriggerStay
               (Spawnables_SupplySpawnable_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_o *__this_01;
  
  if (DAT_05702719 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702719 = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = (Characters_Human_o *)
                      UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Human_GetComponent_Human);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            if (__this_01 == (Characters_Human_o *)0x0) goto LAB_03d8f2a3;
            bVar1 = Characters_BaseCharacter__IsMine
                              ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              bVar1 = Characters_Human__NeedRefill(__this_01,0,(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') {
                Characters_Human__SupplySpawnableRefill(__this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_03d8f2a3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Spawnables.SupplySpawnable$$.ctor
// il2cpp: void Spawnables_SupplySpawnable___ctor (Spawnables_SupplySpawnable_o* __this, const MethodInfo* method);
// 0x3d8f2b0

void Spawnables_SupplySpawnable___ctor(Spawnables_SupplySpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


