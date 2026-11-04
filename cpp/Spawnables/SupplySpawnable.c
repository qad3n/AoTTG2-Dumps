// Type: Spawnables.SupplySpawnable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SupplySpawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SupplySpawnable.cs
// --------------------------------

// Spawnables.SupplySpawnable$$OnTriggerStay
// il2cpp: void Spawnables_SupplySpawnable__OnTriggerStay (Spawnables_SupplySpawnable_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x181dcf860

void Spawnables_SupplySpawnable__OnTriggerStay
               (Spawnables_SupplySpawnable_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_o *__this_01;
  
  if (Il2CppMethodInitialized_1843449ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449ff = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (__this_01 == (Characters_Human_o *)0x0) goto label_181dcf949;
            bVar1 = (*(__this_01->klass->vtable)._74_IsMine.methodPtr)
                              (__this_01,(__this_01->klass->vtable)._74_IsMine.method);
            if (bVar1) {
              bVar1 = Characters_Human__NeedRefill(__this_01,false,(MethodInfo *)0x0);
              if (bVar1) {
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
label_181dcf949:
  ThrowNullReferenceException();
}


// Spawnables.SupplySpawnable$$.ctor
// il2cpp: void Spawnables_SupplySpawnable___ctor (Spawnables_SupplySpawnable_o* __this, const MethodInfo* method);
// 0x180528540

void
Spawnables_SupplySpawnable___ctor(Spawnables_SupplySpawnable_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


