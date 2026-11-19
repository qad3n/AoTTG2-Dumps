// Type: Utility.PhysicsLayer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/PhysicsLayer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PhysicsLayer.cs
// --------------------------------

// Utility.PhysicsLayer$$Init
// il2cpp: void Utility_PhysicsLayer__Init (const MethodInfo* method);
// 0x5def560

void Utility_PhysicsLayer__Init(MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  int iVar3;
  Utility_PhysicsLayer_StaticFields *pUVar4;
  System_Int32_array *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  
  if (Il2CppMethodInitialized_075482e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_075482e8 = '\x01';
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->NoCollision;
  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,method_00);
  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
  uVar2 = (uint)pSVar5->max_length;
  if (uVar2 != 0) {
    pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
    pSVar5->m_Items[0] = pUVar4->Human;
    if (((uVar2 != 1) && (pSVar5->m_Items[1] = pUVar4->TitanPushbox, 2 < uVar2)) &&
       (pSVar5->m_Items[2] = pUVar4->Hurtbox, uVar2 != 3)) {
      pSVar5->m_Items[3] = pUVar4->NPC;
      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
      pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,8);
      if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
      uVar2 = (uint)pSVar5->max_length;
      if (uVar2 != 0) {
        pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
        pSVar5->m_Items[0] = pUVar4->Hitbox;
        if ((((uVar2 != 1) && (pSVar5->m_Items[1] = pUVar4->TitanPushbox, 2 < uVar2)) &&
            ((pSVar5->m_Items[2] = pUVar4->Projectile, uVar2 != 3 &&
             ((pSVar5->m_Items[3] = pUVar4->CharacterDetection, 4 < uVar2 &&
              (pSVar5->m_Items[4] = pUVar4->MapObjectAll, uVar2 != 5)))))) &&
           ((pSVar5->m_Items[5] = *(int32_t *)&((_union_13 *)&pUVar4->MapObjectEntities)->rgctx_data,
            6 < uVar2 && (pSVar5->m_Items[6] = pUVar4->MapObjectCharacters, uVar2 != 7)))) {
          pSVar5->m_Items[7] = pUVar4->MapObjectHumans;
          Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
          iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
          pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
          if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
          uVar2 = (uint)pSVar5->max_length;
          if (uVar2 != 0) {
            pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
            pSVar5->m_Items[0] = pUVar4->TitanMovebox;
            if ((((uVar2 != 1) && (pSVar5->m_Items[1] = pUVar4->CharacterDetection, 2 < uVar2)) &&
                (pSVar5->m_Items[2] = pUVar4->MapObjectAll, uVar2 != 3)) &&
               ((pSVar5->m_Items[3] = *(int32_t *)&((_union_13 *)&pUVar4->MapObjectEntities)->rgctx_data,
                4 < uVar2 && (pSVar5->m_Items[4] = pUVar4->MapObjectCharacters, uVar2 != 5)))) {
              pSVar5->m_Items[5] = pUVar4->MapObjectTitans;
              Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
              iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox;
              pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
              if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
              uVar2 = (uint)pSVar5->max_length;
              if (uVar2 != 0) {
                pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                pSVar5->m_Items[0] = pUVar4->Hitbox;
                if (((uVar2 != 1) && (pSVar5->m_Items[1] = pUVar4->Human, 2 < uVar2)) &&
                   (pSVar5->m_Items[2] = pUVar4->Projectile, uVar2 != 3)) {
                  pSVar5->m_Items[3] = pUVar4->NPC;
                  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
                  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
                  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
                  if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                  uVar2 = (uint)pSVar5->max_length;
                  if (uVar2 != 0) {
                    pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                    pSVar5->m_Items[0] = pUVar4->Human;
                    if ((((uVar2 != 1) && (pSVar5->m_Items[1] = pUVar4->TitanPushbox, 2 < uVar2)) &&
                        (pSVar5->m_Items[2] = pUVar4->ProjectileDetection, uVar2 != 3)) &&
                       (((pSVar5->m_Items[3] =
                               *(int32_t *)&((_union_13 *)&pUVar4->MapObjectEntities)->rgctx_data, 4 < uVar2
                         && (pSVar5->m_Items[4] = pUVar4->MapObjectAll, uVar2 != 5)) &&
                        (pSVar5->m_Items[5] = pUVar4->MapObjectProjectiles, 6 < uVar2)))) {
                      pSVar5->m_Items[6] = pUVar4->NPC;
                      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
                      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection;
                      pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
                      if (pSVar5 == (System_Int32_array *)0x0) {
label_05defe6c:
                        ThrowNullReferenceException();
                      }
                      if ((int)pSVar5->max_length != 0) {
                        pSVar5->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
                        Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,method_01);
                        iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection;
                        pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
                        if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                        iVar3 = (int)pSVar5->max_length;
                        if (iVar3 != 0) {
                          pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                          pSVar5->m_Items[0] = pUVar4->Human;
                          if (iVar3 != 1) {
                            pSVar5->m_Items[1] = pUVar4->TitanMovebox;
                            Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
                            iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
                            pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
                            if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                            uVar2 = (uint)pSVar5->max_length;
                            if (uVar2 != 0) {
                              pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                              pSVar5->m_Items[0] = pUVar4->TitanPushbox;
                              if (((uVar2 != 1) &&
                                  (pSVar5->m_Items[1] = pUVar4->MapObjectCharacters, 2 < uVar2)) &&
                                 ((pSVar5->m_Items[2] =
                                        *(int32_t *)&((_union_13 *)&pUVar4->MapObjectEntities)->rgctx_data,
                                  uVar2 != 3 &&
                                  ((pSVar5->m_Items[3] = pUVar4->MapObjectAll, 4 < uVar2 &&
                                   (pSVar5->m_Items[4] = pUVar4->Hitbox, uVar2 != 5)))))) {
                                pSVar5->m_Items[5] = pUVar4->Projectile;
                                Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,(MethodInfo *)pUVar4);
                                iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
                                pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
                                if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                if ((int)pSVar5->max_length != 0) {
                                  pSVar5->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
                                  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,method_02);
                                  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects;
                                  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
                                  if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                  uVar2 = (uint)pSVar5->max_length;
                                  if (uVar2 != 0) {
                                    pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                    pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                    if (((((uVar2 != 1) &&
                                          (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects, 2 < uVar2)) &&
                                         (pSVar5->m_Items[2] = pUVar4->MapObjectProjectiles, uVar2 != 3)) &&
                                        ((pSVar5->m_Items[3] = pUVar4->MapObjectTitans, 4 < uVar2 &&
                                         (pSVar5->m_Items[4] = pUVar4->MapObjectHumans, uVar2 != 5)))) &&
                                       (pSVar5->m_Items[5] = pUVar4->MapObjectCharacters, 6 < uVar2)) {
                                      pSVar5->m_Items[6] =
                                           *(int32_t *)&((_union_13 *)&pUVar4->MapObjectEntities)->rgctx_data;
                                      Utility_PhysicsLayer__SetLayerCollisions
                                                (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->
                                              MapObjectProjectiles;
                                      pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                                      if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                      uVar2 = (uint)pSVar5->max_length;
                                      if (uVar2 != 0) {
                                        pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                        pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                        if ((uVar2 != 1) &&
                                           (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects, 2 < uVar2)) {
                                          pSVar5->m_Items[2] = pUVar4->Projectile;
                                          Utility_PhysicsLayer__SetLayerCollisions
                                                    (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                          iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->
                                                  MapObjectTitans;
                                          pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                                          if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                          uVar2 = (uint)pSVar5->max_length;
                                          if (uVar2 != 0) {
                                            pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                            pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                            if ((uVar2 != 1) &&
                                               (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects, 2 < uVar2))
                                            {
                                              pSVar5->m_Items[2] = pUVar4->TitanMovebox;
                                              Utility_PhysicsLayer__SetLayerCollisions
                                                        (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                              iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->
                                                      MapObjectHumans;
                                              pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                                              if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                              uVar2 = (uint)pSVar5->max_length;
                                              if (uVar2 != 0) {
                                                pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                                pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                                if ((uVar2 != 1) &&
                                                   (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects,
                                                   2 < uVar2)) {
                                                  pSVar5->m_Items[2] = pUVar4->Human;
                                                  Utility_PhysicsLayer__SetLayerCollisions
                                                            (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                                  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->
                                                          MapObjectCharacters;
                                                  pSVar5 = (System_Int32_array *)
                                                           SZArrayNew(TypeInfo_int_array,5);
                                                  if (pSVar5 == (System_Int32_array *)0x0) goto label_05defe6c;
                                                  uVar2 = (uint)pSVar5->max_length;
                                                  if (uVar2 != 0) {
                                                    pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                                    pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                                    if ((((uVar2 != 1) &&
                                                         (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects,
                                                         2 < uVar2)) &&
                                                        (pSVar5->m_Items[2] = pUVar4->Human, uVar2 != 3)) &&
                                                       (pSVar5->m_Items[3] = pUVar4->TitanMovebox, 4 < uVar2))
                                                    {
                                                      pSVar5->m_Items[4] = pUVar4->NPC;
                                                      Utility_PhysicsLayer__SetLayerCollisions
                                                                (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                                      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->
                                                              MapObjectEntities;
                                                      pSVar5 = (System_Int32_array *)
                                                               SZArrayNew(TypeInfo_int_array,6);
                                                      if (pSVar5 == (System_Int32_array *)0x0)
                                                      goto label_05defe6c;
                                                      uVar2 = (uint)pSVar5->max_length;
                                                      if (uVar2 != 0) {
                                                        pUVar4 = TypeInfo_Utility_PhysicsLayer->static_fields;
                                                        pSVar5->m_Items[0] = pUVar4->MapObjectAll;
                                                        if (((uVar2 != 1) &&
                                                            (pSVar5->m_Items[1] = pUVar4->MapObjectMapObjects,
                                                            2 < uVar2)) &&
                                                           ((pSVar5->m_Items[2] = pUVar4->TitanMovebox,
                                                            uVar2 != 3 &&
                                                            ((pSVar5->m_Items[3] = pUVar4->Human, 4 < uVar2 &&
                                                             (pSVar5->m_Items[4] = pUVar4->Projectile,
                                                             uVar2 != 5)))))) {
                                                          pSVar5->m_Items[5] = pUVar4->NPC;
                                                          Utility_PhysicsLayer__SetLayerCollisions
                                                                    (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                                          iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields
                                                                  ->MapObjectAll;
                                                          pSVar5 = (System_Int32_array *)
                                                                   SZArrayNew(TypeInfo_int_array,0xb);
                                                          if (pSVar5 == (System_Int32_array *)0x0)
                                                          goto label_05defe6c;
                                                          uVar2 = (uint)pSVar5->max_length;
                                                          if (uVar2 != 0) {
                                                            pUVar4 = TypeInfo_Utility_PhysicsLayer->
                                                                     static_fields;
                                                            pSVar5->m_Items[0] = pUVar4->Human;
                                                            if ((((((uVar2 != 1) &&
                                                                   (pSVar5->m_Items[1] = pUVar4->TitanMovebox,
                                                                   2 < uVar2)) &&
                                                                  (pSVar5->m_Items[2] = pUVar4->Projectile,
                                                                  uVar2 != 3)) &&
                                                                 ((pSVar5->m_Items[3] = pUVar4->MapObjectAll,
                                                                  4 < uVar2 &&
                                                                  (pSVar5->m_Items[4] =
                                                                        pUVar4->MapObjectTitans, uVar2 != 5)))
                                                                 ) && (((pSVar5->m_Items[5] =
                                                                              pUVar4->MapObjectHumans,
                                                                        6 < uVar2 &&
                                                                        ((pSVar5->m_Items[6] =
                                                                               pUVar4->MapObjectMapObjects,
                                                                         uVar2 != 7 &&
                                                                         (pSVar5->m_Items[7] =
                                                                               *(int32_t *)
                                                                                &((_union_13 *)
                                                                                 &pUVar4->MapObjectEntities)->
                                                                                 rgctx_data, 8 < uVar2)))) &&
                                                                       (pSVar5->m_Items[8] =
                                                                             pUVar4->MapObjectCharacters,
                                                                       uVar2 != 9)))) &&
                                                               (pSVar5->m_Items[9] =
                                                                     pUVar4->MapObjectProjectiles, 10 < uVar2)
                                                               ) {
                                                              pSVar5->m_Items[10] = pUVar4->NPC;
                                                              Utility_PhysicsLayer__SetLayerCollisions
                                                                        (iVar1,pSVar5,(MethodInfo *)pUVar4);
                                                              iVar1 = TypeInfo_Utility_PhysicsLayer->
                                                                      static_fields->MapEditorObject;
                                                              pSVar5 = (System_Int32_array *)
                                                                       SZArrayNew(TypeInfo_int_array,0);
                                                              Utility_PhysicsLayer__SetLayerCollisions
                                                                        (iVar1,pSVar5,method_03);
                                                              iVar1 = TypeInfo_Utility_PhysicsLayer->
                                                                      static_fields->MapEditorGizmo;
                                                              pSVar5 = (System_Int32_array *)
                                                                       SZArrayNew(TypeInfo_int_array,0);
                                                              Utility_PhysicsLayer__SetLayerCollisions
                                                                        (iVar1,pSVar5,method_04);
                                                              iVar1 = TypeInfo_Utility_PhysicsLayer->
                                                                      static_fields->MinimapIcon;
                                                              pSVar5 = (System_Int32_array *)
                                                                       SZArrayNew(TypeInfo_int_array,0);
                                                              Utility_PhysicsLayer__SetLayerCollisions
                                                                        (iVar1,pSVar5,method_05);
                                                              iVar1 = TypeInfo_Utility_PhysicsLayer->
                                                                      static_fields->Background;
                                                              pSVar5 = (System_Int32_array *)
                                                                       SZArrayNew(TypeInfo_int_array,0);
                                                              Utility_PhysicsLayer__SetLayerCollisions
                                                                        (iVar1,pSVar5,method_06);
                                                              return;
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
  ThrowIndexOutOfRangeException();
}


// Utility.PhysicsLayer$$GetMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask (System_Int32_array* layers, const MethodInfo* method);
// 0x5deffc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5defffd: nop dword ptr [rax]

UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask(System_Int32_array *layers,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (layers->max_length == 0) {
    UVar1 = UnityEngine_LayerMask__op_Implicit_691af40(0,(MethodInfo *)0x0);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
  }
  if ((int)layers->max_length == 0) {
label_05df004f:
    ThrowIndexOutOfRangeException();
  }
  UVar1 = UnityEngine_LayerMask__op_Implicit_691af40(1 << ((byte)layers->m_Items[0] & 0x1f),(MethodInfo *)0x0)
  ;
  if (1 < (int)layers->max_length) {
    lVar3 = 9;
    do {
      uVar2 = UnityEngine_LayerMask__op_Implicit(UVar1,(MethodInfo *)0x0);
      if ((ulong)(uint)layers->max_length <= lVar3 - 8U) goto label_05df004f;
      UVar1 = UnityEngine_LayerMask__op_Implicit_691af40
                        (uVar2 | 1 << ((byte)layers->m_Items[lVar3 + -8] & 0x1f),(MethodInfo *)0x0);
      lVar4 = lVar3 + -7;
      lVar3 = lVar3 + 1;
    } while (lVar4 < (int)layers->max_length);
  }
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
}


// Utility.PhysicsLayer$$CopyMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask (int32_t originLayer, const MethodInfo* method);
// 0x5df0060

UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask(int32_t originLayer,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o UVar2;
  
  if (Il2CppMethodInitialized_075482e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_075482e9 = '\x01';
    uVar1 = (TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    __this = TypeInfo_Utility_PhysicsLayer->static_fields->_masks;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              ((long)((Il2CppClass *)TypeInfo_Utility_PhysicsLayer)->static_fields + 0x58);
  }
  if (__this == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                    (__this,originLayer,
                     (MethodInfo_4A0B950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_get_Item);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
}


// Utility.PhysicsLayer$$SetLayerCollisions
// il2cpp: void Utility_PhysicsLayer__SetLayerCollisions (int32_t layer, System_Int32_array* others, const MethodInfo* method);
// 0x5defe80

void Utility_PhysicsLayer__SetLayerCollisions(int32_t layer,System_Int32_array *others,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o value;
  ulong uVar1;
  uint uVar2;
  MethodInfo *method_00;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_075482ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075482ea = '\x01';
  }
  uVar2 = 0;
  do {
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    method_00 = (MethodInfo *)(ulong)uVar2;
    UnityEngine_Physics__IgnoreLayerCollision(layer,uVar2,true,(MethodInfo *)0x0);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x20);
  if (others != (System_Int32_array *)0x0) {
    if (0 < (int)others->max_length) {
      uVar1 = others->max_length & 0xffffffff;
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        uVar2 = others->m_Items[uVar3];
        method_00 = (MethodInfo *)(ulong)uVar2;
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        UnityEngine_Physics__IgnoreLayerCollision(layer,uVar2,false,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        uVar2 = (uint)others->max_length;
        uVar1 = (ulong)uVar2;
      } while ((long)uVar3 < (long)(int)uVar2);
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    __this = TypeInfo_Utility_PhysicsLayer->static_fields->_masks;
    value = Utility_PhysicsLayer__GetMask(others,method_00);
    if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
      System_Collections_Generic_Dictionary_int__LayerMask___Add
                (__this,layer,value,
                 (MethodInfo_4A0BA00 *)MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.PhysicsLayer$$.ctor
// il2cpp: void Utility_PhysicsLayer___ctor (Utility_PhysicsLayer_o* __this, const MethodInfo* method);
// 0x5df0100

void Utility_PhysicsLayer___ctor(Utility_PhysicsLayer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$.cctor
// il2cpp: void Utility_PhysicsLayer___cctor (const MethodInfo* method);
// 0x5df0110

void Utility_PhysicsLayer___cctor(MethodInfo *method)

{
  Utility_PhysicsLayer_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  if (Il2CppMethodInitialized_075482eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_LayerMask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_075482eb = '\x01';
  }
  pUVar1 = TypeInfo_Utility_PhysicsLayer->static_fields;
  pUVar1->UI = 5;
  pUVar1->NoCollision = 8;
  pUVar1->Hitbox = 9;
  pUVar1->Human = 10;
  pUVar1->TitanMovebox = 0xb;
  pUVar1->TitanPushbox = 0xc;
  pUVar1->Hurtbox = 0xd;
  pUVar1->Projectile = 0xe;
  pUVar1->ProjectileDetection = 0xf;
  pUVar1->CharacterDetection = 0x10;
  pUVar1->NPC = 0x11;
  pUVar1->MapObjectMapObjects = 0x14;
  pUVar1->MapObjectProjectiles = 0x15;
  pUVar1->MapObjectCharacters = 0x16;
  pUVar1->MapObjectEntities = 0x17;
  pUVar1->MapObjectAll = 0x18;
  pUVar1->MapEditorObject = 0x19;
  pUVar1->MapEditorGizmo = 0x1a;
  pUVar1->MinimapIcon = 0x1b;
  pUVar1->Background = 0x1c;
  pUVar1->MapObjectTitans = 0x1d;
  pUVar1->MapObjectHumans = 0x1e;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_LayerMask);
  System_Collections_Generic_Dictionary_int__LayerMask____ctor
            (__this,(MethodInfo_4A0ADC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_ctor)
  ;
  pUVar1 = TypeInfo_Utility_PhysicsLayer->static_fields;
  pUVar1->_masks = __this;
  Il2CppCodeGenWriteBarrier(&pUVar1->_masks);
  return;
}


