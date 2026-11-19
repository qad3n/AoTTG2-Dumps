// Type: Characters.BaseTitanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BaseTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitanComponentCache.cs
// --------------------------------

// Characters.BaseTitanComponentCache$$.ctor
// il2cpp: void Characters_BaseTitanComponentCache___ctor (Characters_BaseTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x5c2d7e0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2db3d: nop dword ptr [rax]
// asm:   0x5c2dbb0: jmp 0x5c2dc20
// asm:   0x5c2dbff: jmp 0x5c2dcb0
// asm:   0x5c2dc1c: nop dword ptr [rax]
// asm:   0x5c2dd78: jmp 0x5c2ddc8
// asm:   0x5c2de9d: nop dword ptr [rax]
// asm:   0x5c2dec8: jmp 0x5c2e0a1

void Characters_BaseTitanComponentCache___ctor
               (Characters_BaseTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_Collider__o **targetAddress;
  System_Collections_Generic_List_BaseHitbox__o **targetAddress_00;
  System_Collections_Generic_List_Collider__o **targetAddress_01;
  int iVar2;
  Characters_BaseHitbox_o *pCVar3;
  UnityEngine_Collider_array *pUVar4;
  Characters_BaseHitbox_array *pCVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_Collider__o *pSVar9;
  System_Collections_Generic_List_BaseHitbox__o *pSVar10;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_CapsuleCollider_o *pUVar11;
  System_Object_array *pSVar12;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  Characters_ContinuousDamageHitbox_o *pCVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  Characters_BaseHitbox_o **targetAddress_02;
  
  if (Il2CppMethodInitialized_075477ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_BaseHitbox);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseHitbox_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseHitbox_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseHitbox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"EyesHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"HandRHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"SitPushbox");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmRHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"HandRHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"LegLHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"FootLHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"HandLHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmLHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"FootRHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"MouthHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"LegRHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"HandLHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"SteamHitbox");
    Il2CppMethodInitialized_075477ae = '\x01';
  }
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  targetAddress = &(__this->fields).ToggleColliders;
  (__this->fields).ToggleColliders = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseHitbox);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_ctor);
  targetAddress_00 = &(__this->fields).Hitboxes;
  (__this->fields).Hitboxes = pSVar10;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  targetAddress_01 = &(__this->fields).Hurtboxes;
  (__this->fields).Hurtboxes = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    owner_00 = UnityEngine_GameObject__GetComponent_object_
                         (owner,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (owner,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_CapsuleCollider);
    (__this->fields).Movebox = (UnityEngine_Collider_o *)pUVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Movebox);
    pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                        (owner,(MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar12 != (System_Object_array *)0x0) {
      uVar15 = (uint)pSVar12->max_length;
      if (0 < (int)uVar15) {
        uVar16 = 0;
        do {
          if (uVar15 <= uVar16) goto label_05c2e15f;
          pCVar3 = (Characters_BaseHitbox_o *)pSVar12->m_Items[(int)uVar16];
          if ((pCVar3 == (Characters_BaseHitbox_o *)0x0) ||
             (__this_00 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_Object_o *)0x0)) goto label_05c2e15a;
          a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          iVar8 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            if (iVar8 != TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox) goto label_05c2dbdb;
label_05c2dc20:
            bVar7 = System_String__op_Inequality(a,"SitPushbox",(MethodInfo *)0x0);
            pMVar6 = MethodInfo_System_Collections_Generic_List_Collider_Add;
            if (bVar7) {
              pSVar9 = *targetAddress;
              if (pSVar9 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_05c2e15a;
              piVar1 = &(pSVar9->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (pSVar9->fields)._items;
              if (pUVar4 == (UnityEngine_Collider_array *)0x0) goto label_05c2e15a;
              uVar15 = (pSVar9->fields)._size;
              if (uVar15 < (uint)pUVar4->max_length) {
                (pSVar9->fields)._size = uVar15 + 1;
                pUVar4->m_Items[(int)uVar15] = (UnityEngine_Collider_o *)pCVar3;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar15);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pCVar3,
                           (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              }
            }
          }
          else {
            if (iVar8 == TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox) goto label_05c2dc20;
label_05c2dbdb:
            iVar8 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
            ;
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
              iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
            }
            else {
              iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
            }
            if (iVar8 == iVar2) goto label_05c2dc20;
          }
          iVar8 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            if (iVar8 != TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox) goto label_05c2dd54;
label_05c2dcd8:
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pCVar3,true,(MethodInfo *)0x0);
            pMVar6 = MethodInfo_System_Collections_Generic_List_Collider_Add;
            pSVar9 = *targetAddress_01;
            if (pSVar9 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_05c2e15a;
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar9->fields)._items;
            if (pUVar4 == (UnityEngine_Collider_array *)0x0) goto label_05c2e15a;
            uVar15 = (pSVar9->fields)._size;
            if (uVar15 < (uint)pUVar4->max_length) {
              (pSVar9->fields)._size = uVar15 + 1;
              pUVar4->m_Items[(int)uVar15] = (UnityEngine_Collider_o *)pCVar3;
              Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pCVar3,
                         (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
            }
          }
          else {
            if (iVar8 == TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox) goto label_05c2dcd8;
label_05c2dd54:
            iVar8 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
            ;
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
              iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
            }
            else {
              iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
            }
            if (iVar8 == iVar2) {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pCVar3,false,(MethodInfo *)0x0);
              UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pCVar3,true,(MethodInfo *)0x0);
            }
          }
          bVar7 = System_String__op_Equality(a,"NapeHurtbox",(MethodInfo *)0x0);
          if (bVar7) {
            targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).NapeHurtbox;
label_05c2dea0:
            *targetAddress_02 = pCVar3;
label_05c2dea6:
            Il2CppCodeGenWriteBarrier(targetAddress_02);
          }
          else {
            bVar7 = System_String__op_Equality(a,"EyesHurtbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).EyesHurtbox;
              goto label_05c2dea0;
            }
            bVar7 = System_String__op_Equality(a,"LegLHurtbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).LegLHurtbox;
              goto label_05c2dea0;
            }
            bVar7 = System_String__op_Equality(a,"LegRHurtbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).LegRHurtbox;
              goto label_05c2dea0;
            }
            bVar7 = System_String__op_Equality(a,"HandLHurtbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).HandLHurtbox;
              goto label_05c2dea0;
            }
            bVar7 = System_String__op_Equality(a,"HandRHurtbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).HandRHurtbox;
              goto label_05c2dea0;
            }
            bVar7 = System_String__op_Equality(a,"MouthHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).MouthHitbox;
label_05c2e070:
              *targetAddress_02 = (Characters_BaseHitbox_o *)pCVar13;
              goto label_05c2dea6;
            }
            bVar7 = System_String__op_Equality(a,"HandLHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).HandLHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"HandRHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).HandRHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"ForearmLHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).ForearmLHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"ForearmRHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).ForearmRHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"FootLHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).FootLHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"FootRHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).FootRHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"SteamHitbox",(MethodInfo *)0x0);
            if (bVar7) {
              pCVar13 = Characters_ContinuousDamageHitbox__CreateContinuous
                                  (owner_00,(UnityEngine_GameObject_o *)__this_00,
                                   (UnityEngine_Collider_o *)pCVar3,2000,0.1,(MethodInfo *)0x0);
              targetAddress_02 = &(__this->fields).SteamHitbox;
              goto label_05c2e070;
            }
            bVar7 = System_String__op_Equality(a,"SitPushbox",(MethodInfo *)0x0);
            if (bVar7) {
              targetAddress_02 = (Characters_BaseHitbox_o **)&(__this->fields).SitPushbox;
              goto label_05c2dea0;
            }
          }
          uVar16 = uVar16 + 1;
          uVar15 = (uint)pSVar12->max_length;
        } while ((int)uVar16 < (int)uVar15);
      }
      pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                          (owner,(MethodInfo_353C030 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_BaseHitbox);
      if (pSVar12 != (System_Object_array *)0x0) {
        if (0 < (int)pSVar12->max_length) {
          uVar14 = pSVar12->max_length & 0xffffffff;
          uVar17 = 0;
          do {
            pMVar6 = MethodInfo_System_Collections_Generic_List_BaseHitbox_Add;
            if (uVar14 <= uVar17) {
label_05c2e15f:
              ThrowIndexOutOfRangeException();
            }
            pSVar10 = *targetAddress_00;
            if (pSVar10 == (System_Collections_Generic_List_BaseHitbox__o *)0x0) goto label_05c2e15a;
            pCVar3 = (Characters_BaseHitbox_o *)pSVar12->m_Items[uVar17];
            piVar1 = &(pSVar10->fields)._version;
            *piVar1 = *piVar1 + 1;
            pCVar5 = (pSVar10->fields)._items;
            if (pCVar5 == (Characters_BaseHitbox_array *)0x0) goto label_05c2e15a;
            uVar15 = (pSVar10->fields)._size;
            if (uVar15 < (uint)pCVar5->max_length) {
              (pSVar10->fields)._size = uVar15 + 1;
              pCVar5->m_Items[(int)uVar15] = pCVar3;
              Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pCVar3,
                         (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
            }
            uVar17 = uVar17 + 1;
            uVar15 = (uint)pSVar12->max_length;
            uVar14 = (ulong)uVar15;
          } while ((long)uVar17 < (long)(int)uVar15);
        }
        return;
      }
    }
  }
label_05c2e15a:
  ThrowNullReferenceException();
}


