// Type: Characters.EscapeSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/EscapeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// --------------------------------

// Characters.EscapeSpecial$$get_ActiveTime
// il2cpp: float Characters_EscapeSpecial__get_ActiveTime (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x18216a4b0

float Characters_EscapeSpecial__get_ActiveTime(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.EscapeSpecial$$.ctor
// il2cpp: void Characters_EscapeSpecial___ctor (Characters_EscapeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x18216e430

void Characters_EscapeSpecial___ctor
               (Characters_EscapeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).ReduceCooldownAmount = 50.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.EscapeSpecial$$CanUse
// il2cpp: bool Characters_EscapeSpecial__CanUse (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x18216c980

bool Characters_EscapeSpecial__CanUse(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  char cVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184346ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346ced = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
    pPVar3 = (*(uint64_t *)((char *)pCVar2 + 0x118));
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      cVar4 = (*((Il2CppClass *)pPVar3->klass)->vtable[7].methodPtr)();
      if (cVar4 != '\0') {
        bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
        if (bVar5) {
          return *(int *)&(*(uint64_t *)((char *)pCVar2 + 0x170)) == 7;
        }
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.EscapeSpecial$$Activate
// il2cpp: void Characters_EscapeSpecial__Activate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x18216c6d0

void Characters_EscapeSpecial__Activate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Pun_PhotonView_c *pPVar3;
  
  if (Il2CppMethodInitialized_184346cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    Il2CppMethodInitialized_184346cee = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x118));
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        pPVar3 = pPVar2->klass;
        bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pPVar3->_2).typeHierarchyDepth) &&
           ((pPVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon
           )) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          Characters_BaseCharacter__CrossFade
                    (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean,0.1,0.0,
                     (MethodInfo *)0x0);
        }
      }
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x118));
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        pPVar3 = pPVar2->klass;
        bVar1 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pPVar3->_2).typeHierarchyDepth) &&
           ((pPVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)
           ) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          Characters_BaseCharacter__CrossFade
                    (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth,0.1,0.0,
                     (MethodInfo *)0x0);
        }
      }
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x118));
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        pPVar3 = pPVar2->klass;
        bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pPVar3->_2).typeHierarchyDepth) &&
           ((pPVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          Characters_BaseCharacter__CrossFade
                    (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir,0.1,0.0,
                     (MethodInfo *)0x0);
        }
      }
      pPVar2 = (*(uint64_t *)((char *)__this_00 + 0x118));
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        pPVar3 = pPVar2->klass;
        bVar1 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pPVar3->_2).typeHierarchyDepth) &&
           ((pPVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon))
        {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          Characters_BaseCharacter__CrossFade
                    (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth,0.1,0.0,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  ThrowNullReferenceException();
}


// Characters.EscapeSpecial$$Deactivate
// il2cpp: void Characters_EscapeSpecial__Deactivate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x18216ca40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216cd25: mov rax, qword ptr [rip + 0x1f121fc]  ; ""
// asm:   0x18216cdc1: mov rax, qword ptr [rip + 0x1f12160]  ; ""

void Characters_EscapeSpecial__Deactivate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar23;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 uVar24;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uVar25;
  undefined4 uVar45;
  byte bVar46;
  Characters_Human_o *__this_00;
  Characters_BaseTitan_o *pCVar47;
  Utility_BaseComponentCache_o *pUVar48;
  Photon_Pun_PhotonView_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar49;
  Characters_BaseUseable_o *pCVar50;
  Characters_BaseUseable_c *pCVar51;
  Characters_HumanComponentCache_o *pCVar52;
  Characters_BaseHitbox_o *pCVar53;
  UnityEngine_Vector3_StaticFields *pUVar54;
  UnityEngine_CapsuleCollider_o *__this_02;
  UnityEngine_Rigidbody_o *__this_03;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  System_String_o *pSVar59;
  bool bVar60;
  System_Object_array *pSVar61;
  Il2CppObject *pIVar62;
  Il2CppObject *pIVar63;
  UnityEngine_Transform_o *pUVar64;
  UnityEngine_Vector3_o *pUVar65;
  UnityEngine_Quaternion_o *pUVar66;
  System_String_o *pSVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20;
  UnityEngine_Quaternion_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Quaternion_Fields local_118;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_Quaternion_Fields local_f8;
  float local_e8;
  float local_e4 [43];
  
  if (Il2CppMethodInitialized_184346cef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"GetHitRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmLHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmRHurtbox");
    Il2CppMethodInitialized_184346cef = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar46 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar46) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar46 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    if ((__this_00->fields).Dead != false) {
      return;
    }
    pCVar47 = (__this_00->fields).Grabber;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar60 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar60) {
      return;
    }
    if ((__this_00->fields)._state != 7) {
      return;
    }
    pCVar47 = (__this_00->fields).Grabber;
    if (pCVar47 != (Characters_BaseTitan_o *)0x0) {
      pSVar67 = "ForearmLHurtbox";
      if ((pCVar47->fields).HoldHumanLeft == false) {
        pSVar67 = "ForearmRHurtbox";
      }
      pUVar48 = (pCVar47->fields).Cache;
      if (pUVar48 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar48->fields).PhotonView;
        pSVar61 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
        pUVar48 = (__this_00->fields).Cache;
        if ((pUVar48 != (Utility_BaseComponentCache_o *)0x0) &&
           (pPVar49 = (pUVar48->fields).PhotonView, pPVar49 != (Photon_Pun_PhotonView_o *)0x0)) {
          local_res8[0] = (float)(pPVar49->fields).viewIdField;
          pIVar62 = il2cpp_value_box(g_data_184354e08,local_res8);
          if (pSVar61 != (System_Object_array *)0x0) {
            if ((pIVar62 != (Il2CppObject *)0x0) &&
               (pIVar63 = il2cpp_vm_Object_IsInst(pIVar62,(((pSVar61->obj).klass)->_1).element_class),
               pIVar63 == (Il2CppObject *)0x0)) {
              pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
            }
            if ((int)pSVar61->max_length != 0) {
              pSVar61->m_Items[0] = pIVar62;
              Il2CppCodeGenWriteBarrier(pSVar61->m_Items,pIVar62);
              if (("" != (System_String_o *)0x0) &&
                 (pIVar62 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)"",
                                       (((pSVar61->obj).klass)->_1).element_class),
                 pIVar62 == (Il2CppObject *)0x0)) {
                pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
              }
              pSVar59 = "";
              if (1 < (uint)pSVar61->max_length) {
                pSVar61->m_Items[1] = (Il2CppObject *)"";
                Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 1,pSVar59);
                local_res18[0] = 0.0;
                pIVar62 = il2cpp_value_box(g_data_184354e08,local_res18);
                if ((pIVar62 != (Il2CppObject *)0x0) &&
                   (pIVar63 = il2cpp_vm_Object_IsInst(pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                   pIVar63 == (Il2CppObject *)0x0)) {
                  pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                }
                if (2 < (uint)pSVar61->max_length) {
                  pSVar61->m_Items[2] = pIVar62;
                  Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 2,pIVar62);
                  if (("" != (System_String_o *)0x0) &&
                     (pIVar62 = il2cpp_vm_Object_IsInst
                                          ((Il2CppObject *)"",
                                           (((pSVar61->obj).klass)->_1).element_class),
                     pIVar62 == (Il2CppObject *)0x0)) {
                    pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                  }
                  pSVar59 = "";
                  if (3 < (uint)pSVar61->max_length) {
                    pSVar61->m_Items[3] = (Il2CppObject *)"";
                    Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 3,pSVar59);
                    if ((pSVar67 != (System_String_o *)0x0) &&
                       (pIVar62 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)pSVar67,
                                             (((pSVar61->obj).klass)->_1).element_class),
                       pIVar62 == (Il2CppObject *)0x0)) {
                      pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                    }
                    if (4 < (uint)pSVar61->max_length) {
                      pSVar61->m_Items[4] = (Il2CppObject *)pSVar67;
                      Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 4,pSVar67);
                      if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto label_18216e420;
                      Photon_Pun_PhotonView__RPC(__this_01,"GetHitRPC",0,pSVar61,(MethodInfo *)0x0);
                      Characters_Human__Ungrab(__this_00,true,false,false,(MethodInfo *)0x0);
                      pCVar50 = (__this_00->fields).Weapon;
                      if (pCVar50 != (Characters_BaseUseable_o *)0x0) {
                        pCVar51 = pCVar50->klass;
                        bVar46 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
                        if ((bVar46 <= (pCVar51->_2).typeHierarchyDepth) &&
                           ((pCVar51->_2).typeHierarchy[(ulonglong)bVar46 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
                          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                          }
                          pCVar52 = (__this_00->fields).HumanCache;
                          if ((pCVar52 == (Characters_HumanComponentCache_o *)0x0) ||
                             (pCVar53 = (pCVar52->fields).BladeHitLeft,
                             pCVar53 == (Characters_BaseHitbox_o *)0x0)) goto label_18216e323;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
                          pUVar64 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pCVar53,(MethodInfo *)0x0);
                          if (pUVar64 == (UnityEngine_Transform_o *)0x0) goto label_18216e323;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          local_148.x = 4.712389;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          uVar22._0_4_ = (pUVar65->fields).x;
                          uVar22._4_4_ = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_108.x = (pUVar66->fields).x;
                          local_108.y = (pUVar66->fields).y;
                          local_108.z = (pUVar66->fields).z;
                          local_108.w = (pUVar66->fields).w;
                          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                          }
                          local_138._0_8_ = uVar22;
                          local_138.z = fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_108,1.0,true,
                                     (System_Object_array *)0x0,(MethodInfo *)0x0);
                          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                          }
                          Characters_BaseCharacter__PlaySound
                                    ((Characters_BaseCharacter_o *)__this_00,
                                     TypeInfo_Characters_HumanSounds->static_fields->BladeHit,
                                     (MethodInfo *)0x0);
                          Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                        }
                      }
                      pCVar50 = (__this_00->fields).Weapon;
                      if (pCVar50 != (Characters_BaseUseable_o *)0x0) {
                        pCVar51 = pCVar50->klass;
                        bVar46 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
                        if ((bVar46 <= (pCVar51->_2).typeHierarchyDepth) &&
                           ((pCVar51->_2).typeHierarchy[(ulonglong)bVar46 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
                          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                          }
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e323;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e323;
                          uVar2 = (pUVar65->fields).x;
                          uVar26 = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_up
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar3 = (pUVar65->fields).x;
                          uVar27 = (pUVar65->fields).y;
                          fVar68 = (pUVar65->fields).z;
                          pUVar65 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                                              ((UnityEngine_Vector3_o *)&local_138,__this_00,
                                               (__this_00->klass->vtable)._76_GetAimPoint.method);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e323;
                          uVar4 = (pUVar65->fields).x;
                          uVar28 = (pUVar65->fields).y;
                          fVar73 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar5 = (pUVar65->fields).x;
                          uVar29 = (pUVar65->fields).y;
                          fVar73 = fVar73 - (pUVar65->fields).z;
                          local_128.y = (float)uVar28 - (float)uVar29;
                          local_128.x = (float)uVar4 - (float)uVar5;
                          local_128.z = fVar73;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_138.z = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                          if (local_138.z <= 1e-05) {
                            pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar72 = (pUVar54->zeroVector).fields.x;
                            fVar74 = (pUVar54->zeroVector).fields.y;
                            local_138.z = (pUVar54->zeroVector).fields.z;
                          }
                          else {
                            fVar72 = ((float)uVar4 - (float)uVar5) / local_138.z;
                            fVar74 = ((float)uVar28 - (float)uVar29) / local_138.z;
                            local_138.z = fVar73 / local_138.z;
                          }
                          local_138.y = fVar74;
                          local_138.x = fVar72;
                          local_148.x = 0.0;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          if (Il2CppMethodInitialized_18433de5c == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5c = '\x01';
                          }
                          pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                          local_148.x = (pUVar54->upVector).fields.x;
                          local_148.y = (pUVar54->upVector).fields.y;
                          local_148.z = (pUVar54->upVector).fields.z;
                          pUVar66 = UnityEngine_Quaternion__Internal_LookRotation
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_138,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          uVar55._0_4_ = (pUVar66->fields).x;
                          uVar55._4_4_ = (pUVar66->fields).y;
                          uVar56._0_4_ = (pUVar66->fields).z;
                          uVar56._4_4_ = (pUVar66->fields).w;
                          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                          }
                          local_138.y = (float)uVar27 * 0.8 + (float)uVar26;
                          local_138.x = (float)uVar3 * 0.8 + (float)uVar2;
                          local_138.z = fVar68 * 0.8 + fVar75;
                          local_108._0_8_ = uVar55;
                          local_108._8_8_ = uVar56;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_108,1.0,true,
                                     (System_Object_array *)0x0,(MethodInfo *)0x0);
                          pCVar52 = (__this_00->fields).HumanCache;
                          if ((pCVar52 == (Characters_HumanComponentCache_o *)0x0) ||
                             (pCVar53 = (pCVar52->fields).BladeHitLeft,
                             pCVar53 == (Characters_BaseHitbox_o *)0x0)) goto label_18216e323;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
                          pUVar64 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pCVar53,(MethodInfo *)0x0);
                          if (pUVar64 == (UnityEngine_Transform_o *)0x0) goto label_18216e323;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          local_148.x = 4.712389;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          uVar23._0_4_ = (pUVar65->fields).x;
                          uVar23._4_4_ = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_108.x = (pUVar66->fields).x;
                          local_108.y = (pUVar66->fields).y;
                          local_108.z = (pUVar66->fields).z;
                          local_108.w = (pUVar66->fields).w;
                          local_138._0_8_ = uVar23;
                          local_138.z = fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_108,1.0,true,
                                     (System_Object_array *)0x0,(MethodInfo *)0x0);
                          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                          }
                          pSVar67 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
                          Characters_BaseCharacter__PlaySound
                                    ((Characters_BaseCharacter_o *)__this_00,pSVar67,(MethodInfo *)0x0);
                          Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                        }
                      }
                      pCVar50 = (__this_00->fields).Weapon;
                      if (pCVar50 != (Characters_BaseUseable_o *)0x0) {
                        pCVar51 = pCVar50->klass;
                        bVar46 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
                        if ((bVar46 <= (pCVar51->_2).typeHierarchyDepth) &&
                           ((pCVar51->_2).typeHierarchy[(ulonglong)bVar46 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
                          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                          }
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) {
label_18216e3af:
                            ThrowNullReferenceException();
                          }
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e3af;
                          uVar6 = (pUVar65->fields).x;
                          uVar30 = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_up
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar7 = (pUVar65->fields).x;
                          uVar31 = (pUVar65->fields).y;
                          fVar68 = (pUVar65->fields).z;
                          pUVar65 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                                              ((UnityEngine_Vector3_o *)&local_138,__this_00,
                                               (__this_00->klass->vtable)._76_GetAimPoint.method);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e3af;
                          uVar8 = (pUVar65->fields).x;
                          uVar32 = (pUVar65->fields).y;
                          fVar73 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar9 = (pUVar65->fields).x;
                          uVar33 = (pUVar65->fields).y;
                          fVar73 = fVar73 - (pUVar65->fields).z;
                          local_128.y = (float)uVar32 - (float)uVar33;
                          local_128.x = (float)uVar8 - (float)uVar9;
                          local_128.z = fVar73;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_138.z = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                          if (local_138.z <= 1e-05) {
                            pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar72 = (pUVar54->zeroVector).fields.x;
                            fVar74 = (pUVar54->zeroVector).fields.y;
                            local_138.z = (pUVar54->zeroVector).fields.z;
                          }
                          else {
                            fVar72 = ((float)uVar8 - (float)uVar9) / local_138.z;
                            fVar74 = ((float)uVar32 - (float)uVar33) / local_138.z;
                            local_138.z = fVar73 / local_138.z;
                          }
                          local_138.y = fVar74;
                          local_138.x = fVar72;
                          local_148.x = 0.0;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          if (Il2CppMethodInitialized_18433de5c == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5c = '\x01';
                          }
                          pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                          local_148.x = (pUVar54->upVector).fields.x;
                          local_148.y = (pUVar54->upVector).fields.y;
                          local_148.z = (pUVar54->upVector).fields.z;
                          pUVar66 = UnityEngine_Quaternion__Internal_LookRotation
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_138,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          uVar57._0_4_ = (pUVar66->fields).x;
                          uVar57._4_4_ = (pUVar66->fields).y;
                          uVar58._0_4_ = (pUVar66->fields).z;
                          uVar58._4_4_ = (pUVar66->fields).w;
                          pSVar61 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
                          local_108.x = 0.0;
                          local_108.y = 0.0;
                          local_108.z = 0.0;
                          local_108.w = 1.0;
                          pIVar62 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_108);
                          if (pSVar61 == (System_Object_array *)0x0) goto label_18216e3af;
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((int)pSVar61->max_length == 0) {
label_18216e3a9:
                            ThrowIndexOutOfRangeException();
                          }
                          pSVar61->m_Items[0] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items,pIVar62);
                          local_res18[0] = 1.4013e-45;
                          pIVar62 = il2cpp_value_box(g_data_184354e08,local_res18);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 2) goto label_18216e3a9;
                          pSVar61->m_Items[1] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 1,pIVar62);
                          local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
                          pIVar62 = il2cpp_value_box(g_data_184354de8,local_res8);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 3) goto label_18216e3a9;
                          pSVar61->m_Items[2] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 2,pIVar62);
                          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                          }
                          local_138.y = (float)uVar31 * 0.8 + (float)uVar30;
                          local_138.x = (float)uVar7 * 0.8 + (float)uVar6;
                          local_138.z = fVar68 * 0.8 + fVar75;
                          local_f8._0_8_ = uVar57;
                          local_f8._8_8_ = uVar58;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_f8,4.0,true,pSVar61,(MethodInfo *)0x0)
                          ;
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e3af;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e3af;
                          uVar10 = (pUVar65->fields).x;
                          uVar34 = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_up
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar11 = (pUVar65->fields).x;
                          uVar35 = (pUVar65->fields).y;
                          fVar68 = (pUVar65->fields).z;
                          pUVar65 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                                              ((UnityEngine_Vector3_o *)&local_138,__this_00,
                                               (__this_00->klass->vtable)._76_GetAimPoint.method);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e3af;
                          uVar12 = (pUVar65->fields).x;
                          uVar36 = (pUVar65->fields).y;
                          fVar73 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          uVar13 = (pUVar65->fields).x;
                          uVar37 = (pUVar65->fields).y;
                          fVar73 = fVar73 - (pUVar65->fields).z;
                          local_128.y = (float)uVar36 - (float)uVar37;
                          local_128.x = (float)uVar12 - (float)uVar13;
                          local_128.z = fVar73;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_138.z = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                          if (local_138.z <= 1e-05) {
                            pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar72 = (pUVar54->zeroVector).fields.x;
                            fVar74 = (pUVar54->zeroVector).fields.y;
                            local_138.z = (pUVar54->zeroVector).fields.z;
                          }
                          else {
                            fVar72 = ((float)uVar12 - (float)uVar13) / local_138.z;
                            fVar74 = ((float)uVar36 - (float)uVar37) / local_138.z;
                            local_138.z = fVar73 / local_138.z;
                          }
                          local_138.y = fVar74;
                          local_138.x = fVar72;
                          local_148.x = 0.0;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          if (Il2CppMethodInitialized_18433de5c == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5c = '\x01';
                          }
                          pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                          local_148.x = (pUVar54->upVector).fields.x;
                          local_148.y = (pUVar54->upVector).fields.y;
                          local_148.z = (pUVar54->upVector).fields.z;
                          pUVar66 = UnityEngine_Quaternion__Internal_LookRotation
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_138,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_138.y = (float)uVar35 * 0.8 + (float)uVar34;
                          local_138.x = (float)uVar11 * 0.8 + (float)uVar10;
                          local_f8.x = (pUVar66->fields).x;
                          local_f8.y = (pUVar66->fields).y;
                          local_f8.z = (pUVar66->fields).z;
                          local_f8.w = (pUVar66->fields).w;
                          local_138.z = fVar68 * 0.8 + fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_f8,4.0,true,(System_Object_array *)0x0
                                     ,(MethodInfo *)0x0);
                          pCVar52 = (__this_00->fields).HumanCache;
                          if ((pCVar52 == (Characters_HumanComponentCache_o *)0x0) ||
                             (pCVar53 = (pCVar52->fields).BladeHitLeft,
                             pCVar53 == (Characters_BaseHitbox_o *)0x0)) goto label_18216e3af;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
                          pUVar64 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pCVar53,(MethodInfo *)0x0);
                          if (pUVar64 == (UnityEngine_Transform_o *)0x0) goto label_18216e3af;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_138,pUVar64,(MethodInfo *)0x0);
                          local_148.x = 4.712389;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          uVar24._0_4_ = (pUVar65->fields).x;
                          uVar24._4_4_ = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_f8.x = (pUVar66->fields).x;
                          local_f8.y = (pUVar66->fields).y;
                          local_f8.z = (pUVar66->fields).z;
                          local_f8.w = (pUVar66->fields).w;
                          local_138._0_8_ = uVar24;
                          local_138.z = fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_f8,1.0,true,(System_Object_array *)0x0
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                          }
                          pSVar67 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
                          Characters_BaseCharacter__PlaySound
                                    ((Characters_BaseCharacter_o *)__this_00,pSVar67,(MethodInfo *)0x0);
                          Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                        }
                      }
                      pCVar50 = (__this_00->fields).Weapon;
                      if (pCVar50 != (Characters_BaseUseable_o *)0x0) {
                        pCVar51 = pCVar50->klass;
                        bVar46 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
                        if ((bVar46 <= (pCVar51->_2).typeHierarchyDepth) &&
                           ((pCVar51->_2).typeHierarchy[(ulonglong)bVar46 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_APGWeapon)) {
                          pUVar65 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                                              ((UnityEngine_Vector3_o *)&local_148,__this_00,
                                               (__this_00->klass->vtable)._76_GetAimPoint.method);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) {
label_18216e414:
                            ThrowNullReferenceException();
                          }
                          uVar14 = (pUVar65->fields).x;
                          uVar38 = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          uVar15 = (pUVar65->fields).x;
                          uVar39 = (pUVar65->fields).y;
                          local_128.x = (float)uVar14 - (float)uVar15;
                          local_128.y = (float)uVar38 - (float)uVar39;
                          local_128.z = fVar75 - (pUVar65->fields).z;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          il2cpp_runtime_helper_180546a40(&local_128,0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e414;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e414;
                          uVar16 = (pUVar65->fields).x;
                          uVar40 = (pUVar65->fields).y;
                          fVar68 = (pUVar65->fields).z;
                          pUVar65 = UnityEngine_Transform__get_up
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          uVar17 = (pUVar65->fields).x;
                          uVar41 = (pUVar65->fields).y;
                          fVar73 = (float)uVar17 * 0.8 + (float)uVar16;
                          fVar72 = (float)uVar41 * 0.8 + (float)uVar40;
                          local_118.y = fVar72;
                          local_118.x = fVar72;
                          local_118.w = fVar72;
                          local_118.z = fVar72;
                          local_res8[0] = (pUVar65->fields).z * 0.8 + fVar68;
                          fVar75 = fVar75 - local_res8[0];
                          local_128.y = (float)uVar38 - fVar72;
                          local_128.x = (float)uVar14 - fVar73;
                          local_128.z = fVar75;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          fVar68 = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                          if (fVar68 <= 1e-05) {
                            pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar74 = (pUVar54->zeroVector).fields.x;
                            fVar72 = (pUVar54->zeroVector).fields.y;
                            fVar75 = (pUVar54->zeroVector).fields.z;
                          }
                          else {
                            fVar74 = ((float)uVar14 - fVar73) / fVar68;
                            fVar72 = ((float)uVar38 - fVar72) / fVar68;
                            fVar75 = fVar75 / fVar68;
                          }
                          pCVar52 = (__this_00->fields).HumanCache;
                          if (((pCVar52 == (Characters_HumanComponentCache_o *)0x0) ||
                              (pCVar53 = (pCVar52->fields).APGHit, pCVar53 == (Characters_BaseHitbox_o *)0x0))
                             || (__this_02 = (UnityEngine_CapsuleCollider_o *)(pCVar53->fields)._collider,
                                __this_02 == (UnityEngine_CapsuleCollider_o *)0x0)) goto label_18216e414;
                          bVar46 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
                          if (((__this_02->klass->_2).typeHierarchyDepth < bVar46) ||
                             ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar46 - 1] !=
                              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
                            il2cpp_codegen_raise_invalid_cast_exception(__this_02);
                          }
                          UnityEngine_CapsuleCollider__set_radius(__this_02,0.1,(MethodInfo *)0x0);
                          fVar68 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
                          fVar69 = UnityEngine_CapsuleCollider__get_radius(__this_02,(MethodInfo *)0x0);
                          fVar70 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
                          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                          }
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e414;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          pUVar48 = (__this_00->fields).Cache;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e414;
                          local_e4[2] = (pUVar65->fields).z;
                          uVar18 = (pUVar65->fields).x;
                          uVar42 = (pUVar65->fields).y;
                          pUVar65 = UnityEngine_Transform__get_up
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          local_108.x = (pUVar65->fields).x;
                          local_108.y = (pUVar65->fields).y;
                          fVar1 = (pUVar65->fields).z;
                          local_108.z = 0.0;
                          local_108.w = 0.0;
                          pUVar65 = (*(__this_00->klass->vtable)._76_GetAimPoint.methodPtr)
                                              ((UnityEngine_Vector3_o *)&local_148,__this_00,
                                               (__this_00->klass->vtable)._76_GetAimPoint.method);
                          pUVar48 = (__this_00->fields).Cache;
                          local_108.y = local_108.y * 0.8 + (float)uVar42;
                          local_108.x = local_108.x * 0.8 + (float)uVar18;
                          local_108.w = local_108.w * 0.8 + 0.0;
                          local_108.z = local_108.z * 0.8 + 0.0;
                          if ((pUVar48 == (Utility_BaseComponentCache_o *)0x0) ||
                             (pUVar64 = (pUVar48->fields).Transform, pUVar64 == (UnityEngine_Transform_o *)0x0
                             )) goto label_18216e414;
                          fVar68 = fVar68 * 1.2;
                          uVar19 = (pUVar65->fields).x;
                          uVar43 = (pUVar65->fields).y;
                          fVar76 = (pUVar65->fields).z;
                          local_res18[0] = (fVar70 * fVar74 + fVar73 + fVar73) * 0.5;
                          local_res20 = (fVar70 * fVar72 + local_118.x + local_118.x) * 0.5;
                          fVar73 = (fVar70 * fVar75 + local_res8[0] + local_res8[0]) * 0.5;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          uVar20 = (pUVar65->fields).x;
                          uVar44 = (pUVar65->fields).y;
                          fVar76 = fVar76 - (pUVar65->fields).z;
                          local_128.y = (float)uVar43 - (float)uVar44;
                          local_128.x = (float)uVar19 - (float)uVar20;
                          local_128.z = fVar76;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_128.z = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                          if (local_128.z <= 1e-05) {
                            pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar70 = (pUVar54->zeroVector).fields.x;
                            fVar77 = (pUVar54->zeroVector).fields.y;
                            local_128.z = (pUVar54->zeroVector).fields.z;
                          }
                          else {
                            fVar70 = ((float)uVar19 - (float)uVar20) / local_128.z;
                            fVar77 = ((float)uVar43 - (float)uVar44) / local_128.z;
                            local_128.z = fVar76 / local_128.z;
                          }
                          local_128.y = fVar77;
                          local_128.x = fVar70;
                          local_148.x = 0.0;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          if (Il2CppMethodInitialized_18433de5c == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5c = '\x01';
                          }
                          pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                          local_148.x = (pUVar54->upVector).fields.x;
                          local_148.y = (pUVar54->upVector).fields.y;
                          local_148.z = (pUVar54->upVector).fields.z;
                          pUVar66 = UnityEngine_Quaternion__Internal_LookRotation
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_128,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_118.x = (pUVar66->fields).x;
                          local_118.y = (pUVar66->fields).y;
                          local_118.z = (pUVar66->fields).z;
                          local_118.w = (pUVar66->fields).w;
                          pSVar61 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
                          fVar76 = local_res20;
                          fVar70 = local_res18[0];
                          local_f8.y = fVar72 * fVar68 * 0.5 + local_res20;
                          local_f8.x = fVar74 * fVar68 * 0.5 + local_res18[0];
                          local_f8.z = fVar75 * fVar68 * 0.5 + fVar73;
                          pIVar62 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_f8);
                          if (pSVar61 == (System_Object_array *)0x0) goto label_18216e414;
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((int)pSVar61->max_length == 0) {
label_18216e405:
                            ThrowIndexOutOfRangeException();
                          }
                          pSVar61->m_Items[0] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items,pIVar62);
                          local_138.z = fVar73 - fVar75 * fVar68 * 0.5;
                          local_138.y = fVar76 - fVar72 * fVar68 * 0.5;
                          local_138.x = fVar70 - fVar74 * fVar68 * 0.5;
                          pIVar62 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_138);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 2) goto label_18216e405;
                          pSVar61->m_Items[1] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 1,pIVar62);
                          local_e8 = fVar69 * 4.0;
                          pIVar62 = il2cpp_value_box(g_data_184354e38,&local_e8);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 3) goto label_18216e405;
                          pSVar61->m_Items[2] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 2,pIVar62);
                          local_e4[0] = fVar69 * 4.0;
                          pIVar62 = il2cpp_value_box(g_data_184354e38,local_e4);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 4) goto label_18216e405;
                          pSVar61->m_Items[3] = pIVar62;
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 3,pIVar62);
                          local_e4[1] = 0.25;
                          pIVar62 = il2cpp_value_box(g_data_184354e38,local_e4 + 1);
                          if ((pIVar62 != (Il2CppObject *)0x0) &&
                             (pIVar63 = il2cpp_vm_Object_IsInst
                                                  (pIVar62,(((pSVar61->obj).klass)->_1).element_class),
                             pIVar63 == (Il2CppObject *)0x0)) {
                            pIVar62 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar62,(MethodInfo *)0x0);
                          }
                          if ((uint)pSVar61->max_length < 5) goto label_18216e405;
                          pSVar61->m_Items[4] = pIVar62;
                          fVar75 = fVar1 * 0.8 + local_e4[2];
                          Il2CppCodeGenWriteBarrier(pSVar61->m_Items + 4,pIVar62);
                          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                          }
                          local_148.x = local_108.x;
                          local_148.y = local_108.y;
                          local_148.z = fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_148,
                                     (UnityEngine_Quaternion_o *)&local_118,4.0,true,pSVar61,(MethodInfo *)0x0
                                    );
                          pCVar52 = (__this_00->fields).HumanCache;
                          if ((pCVar52 == (Characters_HumanComponentCache_o *)0x0) ||
                             (pCVar53 = (pCVar52->fields).BladeHitLeft,
                             pCVar53 == (Characters_BaseHitbox_o *)0x0)) goto label_18216e414;
                          pSVar67 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
                          pUVar64 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pCVar53,(MethodInfo *)0x0);
                          if (pUVar64 == (UnityEngine_Transform_o *)0x0) goto label_18216e414;
                          pUVar65 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_148,pUVar64,(MethodInfo *)0x0);
                          uVar25._0_4_ = (pUVar65->fields).x;
                          uVar25._4_4_ = (pUVar65->fields).y;
                          fVar75 = (pUVar65->fields).z;
                          local_148.x = 4.712389;
                          local_148.y = 0.0;
                          local_148.z = 0.0;
                          pUVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                                              ((UnityEngine_Quaternion_o *)&local_118,
                                               (UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                          local_118.x = (pUVar66->fields).x;
                          local_118.y = (pUVar66->fields).y;
                          local_118.z = (pUVar66->fields).z;
                          local_118.w = (pUVar66->fields).w;
                          local_148._0_8_ = uVar25;
                          local_148.z = fVar75;
                          Effects_EffectSpawner__Spawn
                                    (pSVar67,(UnityEngine_Vector3_o *)&local_148,
                                     (UnityEngine_Quaternion_o *)&local_118,1.0,true,
                                     (System_Object_array *)0x0,(MethodInfo *)0x0);
                          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                          }
                          pSVar67 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
                          Characters_BaseCharacter__PlaySound
                                    ((Characters_BaseCharacter_o *)__this_00,pSVar67,(MethodInfo *)0x0);
                          Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                        }
                      }
                      pUVar48 = (__this_00->fields).Cache;
                      if (pUVar48 != (Utility_BaseComponentCache_o *)0x0) {
                        __this_03 = (pUVar48->fields).Rigidbody;
                        if (Il2CppMethodInitialized_18433de5c == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_18433de5c = '\x01';
                        }
                        pUVar54 = TypeInfo_UnityEngine_Vector3->static_fields;
                        uVar21 = (pUVar54->upVector).fields.x;
                        uVar45 = (pUVar54->upVector).fields.y;
                        uVar71._0_4_ = (float)uVar21 * 30.0;
                        uVar71._4_4_ = (float)uVar45 * 30.0;
                        if (__this_03 != (UnityEngine_Rigidbody_o *)0x0) {
                          local_138.z = (pUVar54->upVector).fields.z * 30.0;
                          local_138._0_8_ = uVar71;
                          UnityEngine_Rigidbody__set_linearVelocity
                                    (__this_03,(UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      goto label_18216e323;
                    }
                  }
                }
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
label_18216e420:
      ThrowNullReferenceException();
    }
  }
label_18216e323:
  ThrowNullReferenceException();
}


