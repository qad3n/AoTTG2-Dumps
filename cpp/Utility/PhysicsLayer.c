// Type: Utility.PhysicsLayer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/PhysicsLayer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PhysicsLayer.cs
// --------------------------------

// Utility.PhysicsLayer$$Init
// il2cpp: void Utility_PhysicsLayer__Init (const MethodInfo* method);
// 0x18233bcd0

void Utility_PhysicsLayer__Init(MethodInfo *method)

{
  int32_t iVar1;
  System_Int32_array *pSVar2;
  
  if (Il2CppMethodInitialized_18434783a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_18434783a = '\x01';
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->NoCollision;
  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if (pSVar2 != (System_Int32_array *)0x0) {
    if (((((int)pSVar2->max_length != 0) &&
         (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
         1 < (uint)pSVar2->max_length)) &&
        (pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
        2 < (uint)pSVar2->max_length)) &&
       (pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox,
       3 < (uint)pSVar2->max_length)) {
      pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
      pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,8);
      if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
      if (((((int)pSVar2->max_length != 0) &&
           (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox,
           1 < (uint)pSVar2->max_length)) &&
          ((pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
           2 < (uint)pSVar2->max_length &&
           ((pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,
            3 < (uint)pSVar2->max_length &&
            (pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection,
            4 < (uint)pSVar2->max_length)))))) &&
         ((pSVar2->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
          5 < (uint)pSVar2->max_length &&
          ((pSVar2->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
           6 < (uint)pSVar2->max_length &&
           (pSVar2->m_Items[6] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
           7 < (uint)pSVar2->max_length)))))) {
        pSVar2->m_Items[7] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans;
        Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
        iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
        pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
        if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
        if (((((int)pSVar2->max_length != 0) &&
             (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
             1 < (uint)pSVar2->max_length)) &&
            (pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection,
            2 < (uint)pSVar2->max_length)) &&
           (((pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
             3 < (uint)pSVar2->max_length &&
             (pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
             4 < (uint)pSVar2->max_length)) &&
            (pSVar2->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
            5 < (uint)pSVar2->max_length)))) {
          pSVar2->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
          Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
          iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox;
          pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
          if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
          if ((((int)pSVar2->max_length != 0) &&
              (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox,
              1 < (uint)pSVar2->max_length)) &&
             ((pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
              2 < (uint)pSVar2->max_length &&
              (pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,
              3 < (uint)pSVar2->max_length)))) {
            pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
            Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
            iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
            pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
            if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
            if ((((((int)pSVar2->max_length != 0) &&
                  (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
                  1 < (uint)pSVar2->max_length)) &&
                 (pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
                 2 < (uint)pSVar2->max_length)) &&
                ((pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection,
                 3 < (uint)pSVar2->max_length &&
                 (pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
                 4 < (uint)pSVar2->max_length)))) &&
               ((pSVar2->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                5 < (uint)pSVar2->max_length &&
                (pSVar2->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
                6 < (uint)pSVar2->max_length)))) {
              pSVar2->m_Items[6] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
              Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
              iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection;
              pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
              if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
                Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection;
                pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
                if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                if (((int)pSVar2->max_length != 0) &&
                   (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
                   1 < (uint)pSVar2->max_length)) {
                  pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
                  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
                  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
                  if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                  if ((((((int)pSVar2->max_length != 0) &&
                        (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
                        1 < (uint)pSVar2->max_length)) &&
                       (pSVar2->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters
                       , 2 < (uint)pSVar2->max_length)) &&
                      ((pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
                       3 < (uint)pSVar2->max_length &&
                       (pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                       4 < (uint)pSVar2->max_length)))) &&
                     (pSVar2->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox,
                     5 < (uint)pSVar2->max_length)) {
                    pSVar2->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                    iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
                    pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
                    if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox;
                      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects;
                      pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
                      if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                      if (((((int)pSVar2->max_length != 0) &&
                           (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                           1 < (uint)pSVar2->max_length)) &&
                          ((pSVar2->m_Items[1] =
                                 TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                           2 < (uint)pSVar2->max_length &&
                           (((pSVar2->m_Items[2] =
                                   TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
                             3 < (uint)pSVar2->max_length &&
                             (pSVar2->m_Items[3] =
                                   TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
                             4 < (uint)pSVar2->max_length)) &&
                            (pSVar2->m_Items[4] =
                                  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans,
                            5 < (uint)pSVar2->max_length)))))) &&
                         (pSVar2->m_Items[5] =
                               TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
                         6 < (uint)pSVar2->max_length)) {
                        pSVar2->m_Items[6] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
                        Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                        iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles;
                        pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                        if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                        if ((((int)pSVar2->max_length != 0) &&
                            (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                            1 < (uint)pSVar2->max_length)) &&
                           (pSVar2->m_Items[1] =
                                 TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                           2 < (uint)pSVar2->max_length)) {
                          pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
                          Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                          iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
                          pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                          if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                          if ((((int)pSVar2->max_length != 0) &&
                              (pSVar2->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll
                              , 1 < (uint)pSVar2->max_length)) &&
                             (pSVar2->m_Items[1] =
                                   TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                             2 < (uint)pSVar2->max_length)) {
                            pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
                            Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                            iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans;
                            pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
                            if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                            if ((((int)pSVar2->max_length != 0) &&
                                (pSVar2->m_Items[0] =
                                      TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                                1 < (uint)pSVar2->max_length)) &&
                               (pSVar2->m_Items[1] =
                                     TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                               2 < (uint)pSVar2->max_length)) {
                              pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
                              Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                              iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters;
                              pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
                              if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                              if ((((int)pSVar2->max_length != 0) &&
                                  (pSVar2->m_Items[0] =
                                        TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                                  1 < (uint)pSVar2->max_length)) &&
                                 ((pSVar2->m_Items[1] =
                                        TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                                  2 < (uint)pSVar2->max_length &&
                                  ((pSVar2->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
                                   3 < (uint)pSVar2->max_length &&
                                   (pSVar2->m_Items[3] =
                                         TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
                                   4 < (uint)pSVar2->max_length)))))) {
                                pSVar2->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
                                Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
                                pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
                                if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                                if ((((((int)pSVar2->max_length != 0) &&
                                      (pSVar2->m_Items[0] =
                                            TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                                      1 < (uint)pSVar2->max_length)) &&
                                     (pSVar2->m_Items[1] =
                                           TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,
                                     2 < (uint)pSVar2->max_length)) &&
                                    ((pSVar2->m_Items[2] =
                                           TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
                                     3 < (uint)pSVar2->max_length &&
                                     (pSVar2->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->Human
                                     , 4 < (uint)pSVar2->max_length)))) &&
                                   (pSVar2->m_Items[4] =
                                         TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,
                                   5 < (uint)pSVar2->max_length)) {
                                  pSVar2->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
                                  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                  iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
                                  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0xb);
                                  if (pSVar2 == (System_Int32_array *)0x0) goto label_18233cb1b;
                                  if ((((int)pSVar2->max_length != 0) &&
                                      (pSVar2->m_Items[0] =
                                            TypeInfo_Utility_PhysicsLayer->static_fields->Human,
                                      1 < (uint)pSVar2->max_length)) &&
                                     ((((pSVar2->m_Items[1] =
                                              TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
                                        2 < (uint)pSVar2->max_length &&
                                        (((pSVar2->m_Items[2] =
                                                TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,
                                          3 < (uint)pSVar2->max_length &&
                                          (pSVar2->m_Items[3] =
                                                TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                                          4 < (uint)pSVar2->max_length)) &&
                                         (pSVar2->m_Items[4] =
                                               TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
                                         5 < (uint)pSVar2->max_length)))) &&
                                       (((pSVar2->m_Items[5] =
                                               TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans,
                                         6 < (uint)pSVar2->max_length &&
                                         (pSVar2->m_Items[6] =
                                               TypeInfo_Utility_PhysicsLayer->static_fields->
                                               MapObjectMapObjects, 7 < (uint)pSVar2->max_length)) &&
                                        (pSVar2->m_Items[7] =
                                              TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
                                        8 < (uint)pSVar2->max_length)))) &&
                                      ((pSVar2->m_Items[8] =
                                             TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters
                                       , 9 < (uint)pSVar2->max_length &&
                                       (pSVar2->m_Items[9] =
                                             TypeInfo_Utility_PhysicsLayer->static_fields->
                                             MapObjectProjectiles, 10 < (uint)pSVar2->max_length)))))) {
                                    pSVar2->m_Items[10] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                    iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
                                    pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                    iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
                                    pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                    iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->MinimapIcon;
                                    pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
                                    iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Background;
                                    pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar2,(MethodInfo *)0x0);
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
    ThrowIndexOutOfRangeException();
  }
label_18233cb1b:
  ThrowNullReferenceException();
}


// Utility.PhysicsLayer$$GetMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask (System_Int32_array* layers, const MethodInfo* method);
// 0x18233bc40

UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask(System_Int32_array *layers,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  uint uVar2;
  
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (layers->max_length != 0) {
    if ((int)layers->max_length != 0) {
      uVar2 = 1;
      UVar1 = UnityEngine_LayerMask__op_Implicit(1 << ((byte)layers->m_Items[0] & 0x1f),(MethodInfo *)0x0);
      while( true ) {
        if ((int)layers->max_length <= (int)uVar2) {
          return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
        }
        UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar1.fields.m_Mask,(MethodInfo *)0x0);
        if ((uint)layers->max_length <= uVar2) break;
        UVar1 = UnityEngine_LayerMask__op_Implicit
                          ((uint)UVar1.fields.m_Mask | 1 << (layers->m_Items[(int)uVar2] & 0x1fU),
                           (MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  UVar1 = UnityEngine_LayerMask__op_Implicit(0,(MethodInfo *)0x0);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
}


// Utility.PhysicsLayer$$CopyMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask (int32_t originLayer, const MethodInfo* method);
// 0x18233bbc0

UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask(int32_t originLayer,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o UVar1;
  
  if (Il2CppMethodInitialized_18434783b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_18434783b = '\x01';
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  __this = TypeInfo_Utility_PhysicsLayer->static_fields->_masks;
  if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    UVar1 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                      (__this,originLayer,
                       (MethodInfo_14157A0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_get_Item);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
  }
  ThrowNullReferenceException();
}


// Utility.PhysicsLayer$$SetLayerCollisions
// il2cpp: void Utility_PhysicsLayer__SetLayerCollisions (int32_t layer, System_Int32_array* others, const MethodInfo* method);
// 0x18233cb30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233cbbd: nop dword ptr [rax]

void Utility_PhysicsLayer__SetLayerCollisions(int32_t layer,System_Int32_array *others,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o UVar1;
  int32_t iVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434783c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_18434783c = '\x01';
  }
  iVar2 = 0;
  do {
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    UnityEngine_Physics__IgnoreLayerCollision(layer,iVar2,true,(MethodInfo *)0x0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if (others != (System_Int32_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)others->max_length; uVar3 = uVar3 + 1) {
      if ((uint)others->max_length <= uVar3) goto label_18233ccba;
      iVar2 = others->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      UnityEngine_Physics__IgnoreLayerCollision(layer,iVar2,false,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    __this = TypeInfo_Utility_PhysicsLayer->static_fields->_masks;
    if (others->max_length == 0) {
      UVar1 = UnityEngine_LayerMask__op_Implicit(0,(MethodInfo *)0x0);
    }
    else {
      if ((int)others->max_length == 0) {
label_18233ccba:
        ThrowIndexOutOfRangeException();
      }
      UVar1 = UnityEngine_LayerMask__op_Implicit(1 << ((byte)others->m_Items[0] & 0x1f),(MethodInfo *)0x0);
      for (uVar3 = 1; (int)uVar3 < (int)others->max_length; uVar3 = uVar3 + 1) {
        UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar1.fields.m_Mask,(MethodInfo *)0x0);
        if ((uint)others->max_length <= uVar3) goto label_18233ccba;
        UVar1 = UnityEngine_LayerMask__op_Implicit
                          ((uint)UVar1.fields.m_Mask | 1 << (others->m_Items[(int)uVar3] & 0x1fU),
                           (MethodInfo *)0x0);
      }
    }
    if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
      System_Collections_Generic_Dictionary_int__LayerMask___Add
                (__this,layer,UVar1,
                 (MethodInfo_1415B30 *)MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.PhysicsLayer$$.ctor
// il2cpp: void Utility_PhysicsLayer___ctor (Utility_PhysicsLayer_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_PhysicsLayer___ctor(Utility_PhysicsLayer_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$.cctor
// il2cpp: void Utility_PhysicsLayer___cctor (const MethodInfo* method);
// 0x18233ccc0

void Utility_PhysicsLayer___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  if (Il2CppMethodInitialized_18434783d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_LayerMask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_18434783d = '\x01';
  }
  TypeInfo_Utility_PhysicsLayer->static_fields->UI = 5;
  TypeInfo_Utility_PhysicsLayer->static_fields->NoCollision = 8;
  TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox = 9;
  TypeInfo_Utility_PhysicsLayer->static_fields->Human = 10;
  TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox = 0xb;
  TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox = 0xc;
  TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox = 0xd;
  TypeInfo_Utility_PhysicsLayer->static_fields->Projectile = 0xe;
  TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection = 0xf;
  TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection = 0x10;
  TypeInfo_Utility_PhysicsLayer->static_fields->NPC = 0x11;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects = 0x14;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles = 0x15;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters = 0x16;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities = 0x17;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll = 0x18;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject = 0x19;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo = 0x1a;
  TypeInfo_Utility_PhysicsLayer->static_fields->MinimapIcon = 0x1b;
  TypeInfo_Utility_PhysicsLayer->static_fields->Background = 0x1c;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans = 0x1d;
  TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans = 0x1e;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_LayerMask);
  System_Collections_Generic_Dictionary_int__LayerMask____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_LayerMask_ctor);
  TypeInfo_Utility_PhysicsLayer->static_fields->_masks = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_PhysicsLayer->static_fields->_masks,__this);
  return;
}


