// Type: Characters.BaseTitanComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitanComponentCache.cs
// --------------------------------

// Characters.BaseTitanComponentCache$$.ctor
// il2cpp: void Characters_BaseTitanComponentCache___ctor (Characters_BaseTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x182179ec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217a14e: nop 

void Characters_BaseTitanComponentCache___ctor
               (Characters_BaseTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Component_o *__this_00;
  Characters_BaseHitbox_array *pCVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_Collider__o *pSVar7;
  System_Collections_Generic_List_BaseHitbox__o *pSVar8;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_CapsuleCollider_o *value;
  System_Object_array *pSVar9;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  Characters_ContinuousDamageHitbox_o *value_00;
  Characters_BaseHitbox_o *pCVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_184346ddd == '\0') {
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
    Il2CppMethodInitialized_184346ddd = '\x01';
  }
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields).ToggleColliders = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ToggleColliders,pSVar7);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseHitbox);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_ctor);
  (__this->fields).Hitboxes = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hitboxes,pSVar8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields).Hurtboxes = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hurtboxes,pSVar7);
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    owner_00 = UnityEngine_GameObject__GetComponent_object_
                         (owner,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    value = UnityEngine_GameObject__GetComponent_object_
                      (owner,(MethodInfo_6F5650 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_CapsuleCollider);
    (__this->fields).Movebox = (UnityEngine_Collider_o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Movebox,value);
    pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (owner,(MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar11 = 0;
      while ((int)uVar11 < (int)pSVar9->max_length) {
        if ((uint)pSVar9->max_length <= uVar11) goto label_18217a7ba;
        __this_00 = (UnityEngine_Component_o *)pSVar9->m_Items[(int)uVar11];
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_18217a7c0;
        __this_01 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
        ;
        if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_18217a7c0;
        a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
        iVar6 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (iVar6 == TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox) {
label_18217a200:
          bVar5 = System_String__op_Inequality(a,"SitPushbox",(MethodInfo *)0x0);
          if (bVar5) {
            if ((__this->fields).ToggleColliders == (System_Collections_Generic_List_Collider__o *)0x0)
            goto label_18217a7c0;
            il2cpp_runtime_helper_180012890();
          }
        }
        else {
          iVar6 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          if (iVar6 == TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox) goto label_18217a200;
        }
        iVar6 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (iVar6 == TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox) {
          UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_00,true,(MethodInfo *)0x0);
          pSVar7 = (__this->fields).Hurtboxes;
          if (pSVar7 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_18217a7c0;
          il2cpp_runtime_helper_180012890(pSVar7,__this_00);
        }
        else {
          iVar6 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          if (iVar6 == TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)__this_00,false,(MethodInfo *)0x0);
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_00,true,(MethodInfo *)0x0);
          }
        }
        bVar5 = System_String__op_Equality(a,"NapeHurtbox",(MethodInfo *)0x0);
        if (bVar5) {
          (__this->fields).NapeHurtbox = (UnityEngine_Collider_o *)__this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).NapeHurtbox,__this_00);
label_18217a6d9:
          uVar11 = uVar11 + 1;
        }
        else {
          bVar5 = System_String__op_Equality(a,"EyesHurtbox",(MethodInfo *)0x0);
          if (bVar5) {
            (__this->fields).EyesHurtbox = (UnityEngine_Collider_o *)__this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields).EyesHurtbox,__this_00);
            uVar11 = uVar11 + 1;
          }
          else {
            bVar5 = System_String__op_Equality(a,"LegLHurtbox",(MethodInfo *)0x0);
            if (bVar5) {
              (__this->fields).LegLHurtbox = (UnityEngine_Collider_o *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields).LegLHurtbox,__this_00);
              uVar11 = uVar11 + 1;
            }
            else {
              bVar5 = System_String__op_Equality(a,"LegRHurtbox",(MethodInfo *)0x0);
              if (bVar5) {
                (__this->fields).LegRHurtbox = (UnityEngine_Collider_o *)__this_00;
                Il2CppCodeGenWriteBarrier(&(__this->fields).LegRHurtbox,__this_00);
                uVar11 = uVar11 + 1;
              }
              else {
                bVar5 = System_String__op_Equality(a,"HandLHurtbox",(MethodInfo *)0x0);
                if (bVar5) {
                  (__this->fields).HandLHurtbox = (UnityEngine_Collider_o *)__this_00;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).HandLHurtbox,__this_00);
                  uVar11 = uVar11 + 1;
                }
                else {
                  bVar5 = System_String__op_Equality(a,"HandRHurtbox",(MethodInfo *)0x0);
                  if (bVar5) {
                    (__this->fields).HandRHurtbox = (UnityEngine_Collider_o *)__this_00;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).HandRHurtbox,__this_00);
                    uVar11 = uVar11 + 1;
                  }
                  else {
                    bVar5 = System_String__op_Equality(a,"MouthHitbox",(MethodInfo *)0x0);
                    if (bVar5) {
                      pCVar10 = Characters_BaseHitbox__Create
                                          (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                           (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                      (__this->fields).MouthHitbox = pCVar10;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).MouthHitbox,pCVar10);
                      uVar11 = uVar11 + 1;
                    }
                    else {
                      bVar5 = System_String__op_Equality(a,"HandLHitbox",(MethodInfo *)0x0);
                      if (bVar5) {
                        pCVar10 = Characters_BaseHitbox__Create
                                            (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                             (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                        (__this->fields).HandLHitbox = pCVar10;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).HandLHitbox,pCVar10);
                        uVar11 = uVar11 + 1;
                      }
                      else {
                        bVar5 = System_String__op_Equality(a,"HandRHitbox",(MethodInfo *)0x0);
                        if (bVar5) {
                          pCVar10 = Characters_BaseHitbox__Create
                                              (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                               (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                          (__this->fields).HandRHitbox = pCVar10;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).HandRHitbox,pCVar10);
                          uVar11 = uVar11 + 1;
                        }
                        else {
                          bVar5 = System_String__op_Equality(a,"ForearmLHitbox",(MethodInfo *)0x0);
                          if (bVar5) {
                            pCVar10 = Characters_BaseHitbox__Create
                                                (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                                 (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                            (__this->fields).ForearmLHitbox = pCVar10;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmLHitbox,pCVar10);
                            uVar11 = uVar11 + 1;
                          }
                          else {
                            bVar5 = System_String__op_Equality(a,"ForearmRHitbox",(MethodInfo *)0x0);
                            if (bVar5) {
                              pCVar10 = Characters_BaseHitbox__Create
                                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                              (__this->fields).ForearmRHitbox = pCVar10;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmRHitbox,pCVar10);
                              uVar11 = uVar11 + 1;
                            }
                            else {
                              bVar5 = System_String__op_Equality(a,"FootLHitbox",(MethodInfo *)0x0);
                              if (bVar5) {
                                pCVar10 = Characters_BaseHitbox__Create
                                                    (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                                     (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                                (__this->fields).FootLHitbox = pCVar10;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).FootLHitbox,pCVar10);
                                uVar11 = uVar11 + 1;
                              }
                              else {
                                bVar5 = System_String__op_Equality(a,"FootRHitbox",(MethodInfo *)0x0);
                                if (bVar5) {
                                  pCVar10 = Characters_BaseHitbox__Create
                                                      (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                                       (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
                                  (__this->fields).FootRHitbox = pCVar10;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).FootRHitbox,pCVar10);
                                  uVar11 = uVar11 + 1;
                                }
                                else {
                                  bVar5 = System_String__op_Equality
                                                    (a,"SteamHitbox",(MethodInfo *)0x0);
                                  if (bVar5) {
                                    value_00 = Characters_ContinuousDamageHitbox__CreateContinuous
                                                         (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                                          (UnityEngine_Collider_o *)__this_00,2000,0.1,
                                                          (MethodInfo *)0x0);
                                    (__this->fields).SteamHitbox = (Characters_BaseHitbox_o *)value_00;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).SteamHitbox,value_00);
                                    uVar11 = uVar11 + 1;
                                  }
                                  else {
                                    bVar5 = System_String__op_Equality
                                                      (a,"SitPushbox",(MethodInfo *)0x0);
                                    if (!bVar5) goto label_18217a6d9;
                                    (__this->fields).SitPushbox = (UnityEngine_Collider_o *)__this_00;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).SitPushbox,__this_00);
                                    uVar11 = uVar11 + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (owner,(MethodInfo_6F5810 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_BaseHitbox);
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar11 = 0;
        do {
          pMVar4 = MethodInfo_System_Collections_Generic_List_BaseHitbox_Add;
          if ((int)pSVar9->max_length <= (int)uVar11) {
            return;
          }
          if ((uint)pSVar9->max_length <= uVar11) {
label_18217a7ba:
            ThrowIndexOutOfRangeException();
          }
          pSVar8 = (__this->fields).Hitboxes;
          if (pSVar8 == (System_Collections_Generic_List_BaseHitbox__o *)0x0) break;
          pCVar3 = (pSVar8->fields)._items;
          pCVar10 = (Characters_BaseHitbox_o *)pSVar9->m_Items[(int)uVar11];
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          if (pCVar3 == (Characters_BaseHitbox_array *)0x0) break;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pCVar3->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            if ((uint)pCVar3->max_length <= uVar2) goto label_18217a7ba;
            pCVar3->m_Items[(int)uVar2] = pCVar10;
            Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,pCVar10);
            uVar11 = uVar11 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pCVar10,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            uVar11 = uVar11 + 1;
          }
        } while( true );
      }
    }
  }
label_18217a7c0:
  ThrowNullReferenceException();
}


