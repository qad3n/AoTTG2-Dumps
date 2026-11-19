// Type: Projectiles.CannonBallProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/CannonBallProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/CannonBallProjectile.cs
// --------------------------------

// Projectiles.CannonBallProjectile$$RegisterObjects
// il2cpp: void Projectiles_CannonBallProjectile__RegisterObjects (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x5871d30

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
  
  if (Il2CppMethodInitialized_07545174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBallModel");
    Il2CppMethodInitialized_07545174 = '\x01';
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
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.CannonBallProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_CannonBallProjectile__OnCollisionEnter (Projectiles_CannonBallProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x5871e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5872388: jmp 0x5872196

void Projectiles_CannonBallProjectile__OnCollisionEnter
               (Projectiles_CannonBallProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Characters_BaseCharacter_c *pCVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UI_BaseMenu_o *obj;
  bool bVar5;
  int32_t score;
  Photon_Pun_PhotonView_o *pPVar6;
  UnityEngine_Collider_o *pUVar7;
  Characters_BaseCharacter_o *a;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Object_o *pUVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  UI_InGameMenu_o *__this_02;
  Characters_BaseCharacter_o *pCVar12;
  MethodInfo *pMVar13;
  Characters_BaseCharacter_o *pCVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Quaternion_o UVar21;
  UnityEngine_Vector3_o UVar22;
  int32_t iStack_8c;
  UnityEngine_Vector3_Fields UStack_78;
  UnityEngine_Vector3_Fields UStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_07545175 == '\0') {
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
    Il2CppMethodInitialized_07545175 = '\x01';
  }
  pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar6 == (Photon_Pun_PhotonView_o *)0x0) goto label_0587238d;
  if ((pPVar6->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  if (collision == (UnityEngine_Collision_o *)0x0) goto label_0587238d;
  pMVar13 = (MethodInfo *)0x0;
  pUVar7 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
  a = Projectiles_BaseProjectile__GetHitCharacter(pUVar7,pMVar13);
  pUVar7 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_Collider_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_0587238d;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this_00,
                         (MethodInfo_353B730 *)
                         MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (Il2CppMethodInitialized_07545176 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545176 = '\x01';
    }
    pCVar14 = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar10 = "CannonBall";
    pCVar14 = (__this->fields)._owner;
    if (bVar5) {
      if (pCVar14 == (Characters_BaseCharacter_o *)0x0) {
        iStack_8c = 100;
        pCVar14 = (Characters_BaseCharacter_o *)0x0;
      }
      else {
        if ((pCVar14->fields).CustomDamageEnabled == false) goto label_05871fa4;
        iStack_8c = (pCVar14->fields).CustomDamage;
      }
    }
    else {
label_05871fa4:
      iStack_8c = 100;
    }
    pCVar12 = pCVar14;
    if (Il2CppMethodInitialized_07545163 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545163 = '\x01';
      pCVar12 = (__this->fields)._owner;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pCVar12 = (__this->fields)._owner;
      if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_0587238d;
      pSVar10 = (pCVar12->fields).RichTextName;
    }
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
       (UVar22 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0),
       __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_0587238d;
    CustomLogic_CustomLogicCollisionHandler__GetHit
              (__this_01,pCVar14,pSVar10,iStack_8c,"CannonBall",UVar22,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar10 = (__this->fields)._team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar5 = GameManagers_TeamInfo__SameTeam_5858ba0(a,pSVar10,(MethodInfo *)0x0);
    if (bVar5) goto label_05872182;
    pCVar14 = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar13 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar5) || (pCVar14 = (__this->fields)._owner, pCVar14 == (Characters_BaseCharacter_o *)0x0)) {
label_05872133:
      pUVar9 = (UnityEngine_Object_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
      if ((pUVar9 == (UnityEngine_Object_o *)0x0) ||
         (pSVar10 = UnityEngine_Object__get_name(pUVar9,(MethodInfo *)0x0),
         a == (Characters_BaseCharacter_o *)0x0)) goto label_0587238d;
      (*(a->klass->vtable)._96_GetHit.methodPtr)
                (a,"CannonBall",100,"CannonBall",pSVar10,
                 (a->klass->vtable)._96_GetHit.method);
      goto label_05872182;
    }
    pCVar3 = pCVar14->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_05872133;
    score = Projectiles_CannonBallProjectile__CalculateDamage(__this,pMVar13);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar11 = il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
    if (pIVar11 == (Il2CppObject *)0x0) goto label_0587238d;
    __this_02 = (UI_InGameMenu_o *)
                il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
    UI_InGameMenu__ShowKillScore(__this_02,score,false,(MethodInfo *)0x0);
    pCVar14 = (__this->fields)._owner;
    pUVar9 = (UnityEngine_Object_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
    if ((pUVar9 == (UnityEngine_Object_o *)0x0) ||
       (pSVar10 = UnityEngine_Object__get_name(pUVar9,(MethodInfo *)0x0),
       a == (Characters_BaseCharacter_o *)0x0)) goto label_0587238d;
    (*(a->klass->vtable)._95_GetHit.methodPtr)
              (a,pCVar14,score,"CannonBall",pSVar10,(a->klass->vtable)._95_GetHit.method);
    uVar2 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05872182:
    uVar2 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar10 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    UVar22 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    UStack_68.x = (__this->fields)._velocity.fields.x;
    UStack_68.y = (__this->fields)._velocity.fields.y;
    UStack_68.z = (__this->fields)._velocity.fields.z;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_78.x = (pUVar4->upVector).fields.x;
    UStack_78.y = (pUVar4->upVector).fields.y;
    UStack_78.z = (pUVar4->upVector).fields.z;
    uVar15 = 0;
    uVar16 = 0;
    UVar21 = UnityEngine_Quaternion__Internal_LookRotation
                       ((UnityEngine_Vector3_o *)&UStack_68,(UnityEngine_Vector3_o *)&UStack_78,
                        (MethodInfo *)0x0);
    fVar17 = UVar21.fields.x;
    fVar18 = UVar21.fields.y;
    fVar19 = UVar21.fields.z;
    fVar20 = UVar21.fields.w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._0_8_ = UVar21.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      auStack_58._8_4_ = uVar15;
      auStack_58._0_8_ = UVar21.fields._8_8_;
      auStack_58._12_4_ = uVar16;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar17 = (float)auStack_48._0_4_;
      fVar18 = (float)auStack_48._4_4_;
      fVar19 = (float)auStack_58._0_4_;
      fVar20 = (float)auStack_58._4_4_;
    }
    UVar21.fields.y = fVar18;
    UVar21.fields.x = fVar17;
    UVar21.fields.w = fVar20;
    UVar21.fields.z = fVar19;
    Effects_EffectSpawner__Spawn(pSVar10,UVar22,UVar21,0.5,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
label_0587238d:
  ThrowNullReferenceException();
}


// Projectiles.CannonBallProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_CannonBallProjectile__CalculateDamage (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x58723a0

int32_t Projectiles_CannonBallProjectile__CalculateDamage
                  (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545176 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar3 = 100;
  if (((bVar2) && (pCVar1 = (__this->fields)._owner, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
     ((pCVar1->fields).CustomDamageEnabled != false)) {
    iVar3 = (pCVar1->fields).CustomDamage;
  }
  return iVar3;
}


// Projectiles.CannonBallProjectile$$.ctor
// il2cpp: void Projectiles_CannonBallProjectile___ctor (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x5872420

void Projectiles_CannonBallProjectile___ctor(Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


