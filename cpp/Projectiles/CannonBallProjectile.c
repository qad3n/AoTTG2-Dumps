// Type: Projectiles.CannonBallProjectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/CannonBallProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/CannonBallProjectile.cs
// --------------------------------

// Projectiles.CannonBallProjectile$$RegisterObjects
// il2cpp: void Projectiles_CannonBallProjectile__RegisterObjects (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x1820b6230

void Projectiles_CannonBallProjectile__RegisterObjects
               (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_184346919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBallModel");
    Il2CppMethodInitialized_184346919 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"CannonBallModel",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if ((uint)pUVar3->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            return;
          }
          (__this_00->fields)._size = uVar2 + 1;
          if (uVar2 < (uint)pUVar3->max_length) {
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.CannonBallProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_CannonBallProjectile__OnCollisionEnter (Projectiles_CannonBallProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x1820b5c70

void Projectiles_CannonBallProjectile__OnCollisionEnter
               (Projectiles_CannonBallProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_c *pCVar5;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int32_t iVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  UnityEngine_Collider_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  Characters_BaseCharacter_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Object_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Quaternion_o *pUVar18;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_o local_48 [3];
  
  if (Il2CppMethodInitialized_18434691a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    Il2CppMethodInitialized_18434691a = '\x01';
  }
  pPVar11 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar11 == (Photon_Pun_PhotonView_o *)0x0) goto label_1820b621c;
  if ((pPVar11->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  if ((((collision == (UnityEngine_Collision_o *)0x0) ||
       (pUVar12 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_Collider_o *)0x0)) ||
      (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
      pUVar13 == (UnityEngine_GameObject_o *)0x0)) ||
     ((pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0 ||
      (pUVar14 = UnityEngine_Transform__GetRoot(pUVar14,(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0)))) goto label_1820b621c;
  a = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar14,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  pUVar12 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
  if ((pUVar12 == (UnityEngine_Collider_o *)0x0) ||
     (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
     pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_1820b621c;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar13,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    iVar10 = Projectiles_CannonBallProjectile__CalculateDamage(__this,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._owner;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_1820b621c;
    pSVar17 = (pCVar4->fields).RichTextName;
    pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar14 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar15 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_58,pUVar14,(MethodInfo *)0x0),
       __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_1820b621c;
    local_68.x = (pUVar15->fields).x;
    local_68.y = (pUVar15->fields).y;
    local_68.z = (pUVar15->fields).z;
    CustomLogic_CustomLogicCollisionHandler__GetHit
              (__this_01,pCVar4,pSVar17,iVar10,"CannonBall",(UnityEngine_Vector3_o *)&local_68,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pSVar17 = (__this->fields)._team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar9 = GameManagers_TeamInfo__SameTeam_1e76f20(a,pSVar17,(MethodInfo *)0x0);
    if (!bVar9) {
      pCVar4 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar9) && (pCVar4 = (__this->fields)._owner, pCVar4 != (Characters_BaseCharacter_o *)0x0)) {
        pCVar5 = pCVar4->klass;
        bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar2 <= (pCVar5->_2).typeHierarchyDepth) &&
           ((pCVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          iVar10 = Projectiles_CannonBallProjectile__CalculateDamage(__this,(MethodInfo *)0x0);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_1820b621c;
          bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
          }
          UI_InGameMenu__ShowKillScore(__this_00,iVar10,false,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._owner;
          pUVar16 = (UnityEngine_Object_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
          if ((pUVar16 == (UnityEngine_Object_o *)0x0) ||
             (pSVar17 = UnityEngine_Object__get_name(pUVar16,(MethodInfo *)0x0),
             a == (Characters_BaseCharacter_o *)0x0)) goto label_1820b621c;
          il2cpp_runtime_helper_18017a990(0x5f,a,pCVar4,iVar10,"CannonBall",pSVar17);
          goto label_1820b609b;
        }
      }
      pUVar16 = (UnityEngine_Object_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
      if ((pUVar16 == (UnityEngine_Object_o *)0x0) ||
         (pSVar17 = UnityEngine_Object__get_name(pUVar16,(MethodInfo *)0x0),
         a == (Characters_BaseCharacter_o *)0x0)) goto label_1820b621c;
      il2cpp_runtime_helper_18017a990(0x60,a,"CannonBall",100,"CannonBall",pSVar17);
    }
  }
label_1820b609b:
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar17 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
    pUVar15 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_58,pUVar14,(MethodInfo *)0x0);
    local_58.x = (__this->fields)._velocity.fields.x;
    local_58.y = (__this->fields)._velocity.fields.y;
    uVar1._0_4_ = (pUVar15->fields).x;
    uVar1._4_4_ = (pUVar15->fields).y;
    fVar3 = (pUVar15->fields).z;
    local_58.z = (__this->fields)._velocity.fields.z;
    local_68.x = 0.0;
    local_68.y = 0.0;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_68.x = (pUVar6->upVector).fields.x;
    local_68.y = (pUVar6->upVector).fields.y;
    local_68.z = (pUVar6->upVector).fields.z;
    pUVar18 = UnityEngine_Quaternion__Internal_LookRotation
                        (local_48,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
                         (MethodInfo *)0x0);
    uVar7._0_4_ = (pUVar18->fields).x;
    uVar7._4_4_ = (pUVar18->fields).y;
    uVar8._0_4_ = (pUVar18->fields).z;
    uVar8._4_4_ = (pUVar18->fields).w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_68._0_8_ = uVar7;
    local_68._8_8_ = uVar8;
    local_58._0_8_ = uVar1;
    local_58.z = fVar3;
    Effects_EffectSpawner__Spawn
              (pSVar17,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)&local_68,0.5,true,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
label_1820b621c:
  ThrowNullReferenceException();
}


// Projectiles.CannonBallProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_CannonBallProjectile__CalculateDamage (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x1820b5be0

int32_t Projectiles_CannonBallProjectile__CalculateDamage
                  (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434691b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434691b = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar2) && (pCVar1 = (__this->fields)._owner, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
     ((pCVar1->fields).CustomDamageEnabled != false)) {
    return (pCVar1->fields).CustomDamage;
  }
  return 100;
}


// Projectiles.CannonBallProjectile$$.ctor
// il2cpp: void Projectiles_CannonBallProjectile___ctor (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x1820b6310

void
Projectiles_CannonBallProjectile___ctor(Projectiles_CannonBallProjectile_o* __this, MethodInfo* method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_BladeThrowProjectile_o *)__this,(MethodInfo *)0x0);
  return;
}


