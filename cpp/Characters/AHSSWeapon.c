// Type: Characters.AHSSWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AHSSWeapon.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs  [CHANGED since prior version]
// --------------------------------

// Characters.AHSSWeapon$$.ctor
// il2cpp: void Characters_AHSSWeapon___ctor (Characters_AHSSWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x3fecfe0

void Characters_AHSSWeapon___ctor
               (Characters_AHSSWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = ammoPerRound;
  (__this->fields).MaxRound = ammoPerRound;
  (__this->fields).Cooldown = cooldown;
  if (ammoPerRound == -1) {
    (__this->fields).RoundLeft = ammo;
  }
  else {
    iVar1 = ammo - ammoPerRound;
  }
  (__this->fields).AmmoLeft = iVar1;
  return;
}


// Characters.AHSSWeapon$$GetActiveTime
// il2cpp: float Characters_AHSSWeapon__GetActiveTime (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x3fed0a0

float Characters_AHSSWeapon__GetActiveTime(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  long *plVar2;
  float fVar3;
  
  if (DAT_0570418a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&"FireDelay");
    il2cpp_init_method_metadata(&"AHSS");
    DAT_0570418a = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((plVar2 != (long *)0x0) &&
      (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                  (plVar2,"AHSS",*(undefined8 *)(*plVar2 + 0x1b0)),
      plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"FireDelay",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    vtable_dispatch = *(code **)(*plVar2 + 0x388);
    fVar3 = (float)(*vtable_dispatch)
                             (plVar2,*(undefined8 *)(*plVar2 + 0x390),vtable_dispatch);
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSWeapon$$Activate
// il2cpp: void Characters_AHSSWeapon__Activate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x3fed190

void Characters_AHSSWeapon__Activate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  undefined8 uVar4;
  float in_XMM1_Da;
  
  if (DAT_0570418b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_0570418b = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar3->_2).naturalAligment) &&
       ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      uVar4 = (*(pCVar3->vtable)._66_GetAimPoint.methodPtr)
                        (pCVar2,(pCVar3->vtable)._66_GetAimPoint.method);
      (__this->fields)._target.fields.x = (float)(int)uVar4;
      (__this->fields)._target.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
      (__this->fields)._target.fields.z = in_XMM1_Da;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSWeapon$$Deactivate
// il2cpp: void Characters_AHSSWeapon__Deactivate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x3fed210

void Characters_AHSSWeapon__Deactivate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  Characters_Human_o *__this_00;
  Characters_HumanComponentCache_o *__this_01;
  Characters_HookUseable_o *pCVar4;
  Outline_o *pOVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  void *pvVar7;
  Characters_BaseHitbox_o *__this_02;
  UnityEngine_Rigidbody_o *__this_03;
  UI_HUDBottomHandler_o *__this_04;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  bool_conflict bVar11;
  System_String_o *pSVar12;
  long *plVar13;
  long *plVar14;
  UnityEngine_Transform_o *pUVar15;
  long lVar16;
  System_Collections_Generic_List_string__c *__this_05;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  ulong uVar22;
  undefined8 uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar28;
  UnityEngine_Quaternion_Fields UVar29;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float local_8c;
  undefined8 local_88;
  undefined8 local_58;
  undefined8 local_38;
  
  if (DAT_0570418c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"KnockbackForce");
    il2cpp_init_method_metadata(&"AHSS");
    DAT_0570418c = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto LAB_03fedcc2;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  lVar16 = *(long *)&(__this_00->fields).Dead;
  if ((lVar16 == 0) ||
     (pUVar15 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fedcc2;
  uVar22._0_4_ = (__this->fields)._target.fields.x;
  uVar22._4_4_ = (__this->fields)._target.fields.y;
  fVar18 = (__this->fields)._target.fields.z;
  UVar26 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar24._0_4_ = (float)(undefined4)uVar22 - UVar26.fields.x;
  auVar24._4_4_ = (float)uVar22._4_4_ - UVar26.fields.y;
  auVar24._8_4_ = 0.0 - extraout_XMM0_Dc;
  auVar24._12_4_ = 0.0 - extraout_XMM0_Dd;
  fVar25 = fVar18 - UVar26.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar20 = 0;
  fVar17 = fVar25 * fVar25 + auVar24._4_4_ * auVar24._4_4_ + auVar24._0_4_ * auVar24._0_4_;
  if (fVar17 < 0.0) {
    fVar17 = sqrtf(fVar17);
    uVar19 = extraout_XMM0_Dc_00;
    uVar20 = extraout_XMM0_Dd_00;
    if (1e-05 < fVar17) goto LAB_03fed43c;
LAB_03fed3d4:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar16._0_4_ = (__this_00->fields).Dead;
    lVar16._4_4_ = (__this_00->fields).CustomDamageEnabled;
  }
  else {
    fVar17 = SQRT(fVar17);
    if (fVar17 <= 1e-05) goto LAB_03fed3d4;
LAB_03fed43c:
    fVar25 = fVar25 / fVar17;
    auVar9._4_4_ = fVar17;
    auVar9._0_4_ = fVar17;
    auVar9._8_4_ = uVar19;
    auVar9._12_4_ = uVar20;
    auVar24 = divps(auVar24,auVar9);
    uVar21 = auVar24._0_8_;
    lVar16._0_4_ = (__this_00->fields).Dead;
    lVar16._4_4_ = (__this_00->fields).CustomDamageEnabled;
  }
  if ((lVar16 == 0) ||
     (*(UnityEngine_Transform_o **)(lVar16 + 0x10) == (UnityEngine_Transform_o *)0x0))
  goto LAB_03fedcc2;
  UVar26 = UnityEngine_Transform__get_forward
                     (*(UnityEngine_Transform_o **)(lVar16 + 0x10),(MethodInfo *)0x0);
  cVar2 = *(char *)((long)&(__this_00->fields).Animation + 4);
  local_88._0_4_ = 0.0;
  local_88._4_4_ = 0.0;
  if (cVar2 != '\0') {
    local_88._0_4_ = (float)(undefined4)uVar22;
    local_88._4_4_ = (float)uVar22._4_4_;
  }
  auVar24 = ZEXT816(0);
  local_8c = fVar18;
  local_38 = uVar22;
  if (cVar2 != '\0') {
    local_8c = 0.0;
    local_38 = 0;
    auVar24 = ZEXT416((uint)fVar18);
  }
  local_a8._4_4_ = local_88._4_4_;
  local_a8._0_4_ = (float)local_88;
  __this_01 = (__this_00->fields).HumanCache;
  if (__this_01 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03fedcc2;
  local_58._0_4_ = (float)uVar21;
  fVar17 = UVar26.fields.z * (float)local_58 - UVar26.fields.x * fVar25;
  bVar11 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0)
  ;
  if (cVar2 == '\0') {
    local_88 = uVar22;
    if (((char)bVar11 != '\0') || (local_88 = local_38, fVar18 = local_8c, 0.0 <= fVar17)) {
      local_8c = fVar18;
      pCVar4 = (Characters_HookUseable_o *)(__this_00->fields).Special;
      if (pCVar4 == (Characters_HookUseable_o *)0x0) goto LAB_03fedcc2;
      bVar11 = Characters_HookUseable__IsHooked(pCVar4,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        lVar16 = 0xf8;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) goto LAB_03fed67d;
        _fStack_a0 = 0;
        local_a8 = (undefined1  [8])local_88;
        goto LAB_03fed696;
      }
      local_38._0_4_ = (float)local_88;
      local_38._4_4_ = local_88._4_4_;
    }
    local_b8 = ZEXT416((uint)local_8c);
    lVar16 = 0x100;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
      _fStack_a0 = 0;
      local_a8 = (undefined1  [8])local_38;
LAB_03fed696:
      local_b8 = ZEXT416((uint)local_8c);
    }
    else {
      local_a8._4_4_ = local_38._4_4_;
      local_a8._0_4_ = (undefined4)local_38;
      _fStack_a0 = 0;
    }
  }
  else {
    local_b8._0_4_ = auVar24._0_4_;
    local_b8._8_4_ = auVar24._8_4_;
    local_b8._12_4_ = auVar24._12_4_;
    if (((char)bVar11 != '\0') ||
       (local_88 = (ulong)local_a8, uVar22 = local_88, fVar18 = (float)local_b8._0_4_, 0.0 <= fVar17
       )) {
      local_b8._0_4_ = fVar18;
      local_88 = uVar22;
      pCVar4 = (Characters_HookUseable_o *)(__this_00->fields).Special;
      if (pCVar4 == (Characters_HookUseable_o *)0x0) goto LAB_03fedcc2;
      bVar11 = Characters_HookUseable__IsHooked(pCVar4,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        lVar16 = 0xe0;
        local_8c = (float)local_b8._0_4_;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
LAB_03fed67d:
          il2cpp_init_class();
        }
        local_a8._4_4_ = local_88._4_4_;
        local_a8._0_4_ = (float)local_88;
        _fStack_a0 = 0;
        goto LAB_03fed696;
      }
      local_b8._8_4_ = 0;
      local_b8._12_4_ = 0;
    }
    local_b8._4_4_ = 0;
    local_a8._4_4_ = local_88._4_4_;
    local_a8._0_4_ = (float)local_88;
    _fStack_a0 = 0;
    lVar16 = 0xe8;
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar16);
  Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
  *(System_String_o **)&(__this_00->fields)._currentVelocity.fields = pSVar12;
  il2cpp_runtime_glue(&(__this_00->fields)._currentVelocity,pSVar12);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_00,pSVar12,0.05,0.0,(MethodInfo *)0x0);
  UVar26.fields.z = fVar25;
  UVar26.fields.x = (float)(int)uVar21;
  UVar26.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  UVar28 = UnityEngine_Quaternion__LookRotation(UVar26,(MethodInfo *)0x0);
  UVar26 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar28,(MethodInfo *)0x0);
  UVar27.fields.x = UVar26.fields.x * 57.29578;
  UVar27.fields.z = UVar26.fields.z * 57.29578;
  UVar27.fields.y = UVar26.fields.y * 57.29578;
  UVar26 = UnityEngine_Quaternion__Internal_MakePositive(UVar27,(MethodInfo *)0x0);
  *(float *)&(__this_00->fields).Detection = UVar26.fields.y;
  auVar10._4_8_ = 0;
  auVar10._0_4_ = UVar26.fields.y * 0.017453292;
  UVar29 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o)(auVar10 << 0x20),(MethodInfo *)0x0);
  *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar29;
  lVar16 = *(long *)&(__this_00->fields).Dead;
  if ((lVar16 == 0) ||
     (pUVar15 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fedcc2;
  UVar28 = UnityEngine_Transform__get_rotation(pUVar15,(MethodInfo *)0x0);
  UVar29 = *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4);
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar28 = UnityEngine_Quaternion__Lerp(UVar28,UVar29,fVar18 * 30.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar15,UVar28,(MethodInfo *)0x0);
  lVar16 = *(long *)&(__this_00->fields).Dead;
  if ((lVar16 == 0) ||
     (pUVar15 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fedcc2;
  UVar26 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  lVar16 = *(long *)&(__this_00->fields).Dead;
  if ((lVar16 == 0) ||
     (pUVar15 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fedcc2;
  UVar27 = UnityEngine_Transform__get_up(pUVar15,(MethodInfo *)0x0);
  local_58._0_4_ = UVar26.fields.x;
  local_58._4_4_ = UVar26.fields.y;
  local_58._0_4_ = (float)local_58 + UVar27.fields.x * 0.8;
  local_58._4_4_ = local_58._4_4_ + UVar27.fields.y * 0.8;
  fVar18 = UVar26.fields.z + UVar27.fields.z * 0.8;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar23._0_4_ = (float)local_a8._0_4_ - (float)local_58;
  auVar23._4_4_ = (float)local_a8._4_4_ - local_58._4_4_;
  auVar23._8_4_ = fStack_a0 - (extraout_XMM0_Dc_01 + extraout_XMM0_Dc_02 * 0.0);
  auVar23._12_4_ = fStack_9c - (extraout_XMM0_Dd_01 + extraout_XMM0_Dd_02 * 0.0);
  local_b8._0_4_ = (float)local_b8._0_4_ - fVar18;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar25 = (float)local_b8._0_4_ * (float)local_b8._0_4_ +
           auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_;
  if (fVar25 < 0.0) {
    fVar25 = sqrtf(fVar25);
    local_b8._8_4_ = extraout_XMM0_Dc_03;
    local_b8._12_4_ = extraout_XMM0_Dd_03;
    if (1e-05 < fVar25) goto LAB_03fed936;
LAB_03fed8de:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_b8._0_4_ = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar25 = SQRT(fVar25);
    if (fVar25 <= 1e-05) goto LAB_03fed8de;
LAB_03fed936:
    local_b8._0_4_ = (float)local_b8._0_4_ / fVar25;
    auVar8._4_4_ = fVar25;
    auVar8._0_4_ = fVar25;
    auVar8._8_4_ = local_b8._8_4_;
    auVar8._12_4_ = local_b8._12_4_;
    auVar24 = divps(auVar23,auVar8);
    uVar21 = auVar24._0_8_;
  }
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  forward.fields.z = (float)local_b8._0_4_;
  forward.fields.x = (float)(int)uVar21;
  forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  UVar28 = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
  position.fields.z = fVar18;
  position.fields.x = (float)local_58;
  position.fields.y = local_58._4_4_;
  Effects_EffectSpawner__Spawn
            (pSVar12,position,UVar28,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar12 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this_00,pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar13 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                (plVar13,"AHSS",*(undefined8 *)(*plVar13 + 0x1b0));
    pOVar5 = (__this_00->fields).OutlineComponent;
    if (((pOVar5 != (Outline_o *)0x0) &&
        (pSVar6 = pOVar5[1].fields._namesToIgnore,
        pSVar6 != (System_Collections_Generic_List_string__o *)0x0)) && (plVar13 != (long *)0x0)) {
      __this_05 = pSVar6[2].klass;
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Radius",*(undefined8 *)(*plVar13 + 0x1b0));
      if ((plVar14 != (long *)0x0) &&
         (fVar25 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390))
         , __this_05 != (System_Collections_Generic_List_string__c *)0x0)) {
        pvVar7 = (__this_05->_1).image;
        if ((*(byte *)((long)pvVar7 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
           (*(long *)(*(long *)((long)pvVar7 + 200) + -8 +
                     (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8) != TypeInfo_CapsuleCollider)) {
LAB_03fedcd2:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_05);
        }
        UnityEngine_CapsuleCollider__set_radius
                  ((UnityEngine_CapsuleCollider_o *)__this_05,fVar25,(MethodInfo *)0x0);
        pOVar5 = (__this_00->fields).OutlineComponent;
        if (((pOVar5 != (Outline_o *)0x0) &&
            (pSVar6 = pOVar5[1].fields._namesToIgnore,
            pSVar6 != (System_Collections_Generic_List_string__o *)0x0)) &&
           (pUVar15 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0),
           pUVar15 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = fVar18;
          value.fields.x = (float)local_58;
          value.fields.y = local_58._4_4_;
          UnityEngine_Transform__set_position(pUVar15,value,(MethodInfo *)0x0);
          pOVar5 = (__this_00->fields).OutlineComponent;
          if ((pOVar5 != (Outline_o *)0x0) &&
             (pSVar6 = pOVar5[1].fields._namesToIgnore,
             pSVar6 != (System_Collections_Generic_List_string__o *)0x0)) {
            pUVar15 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
            forward_00.fields.z = (float)local_b8._0_4_;
            forward_00.fields.x = (float)(int)uVar21;
            forward_00.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
            UVar28 = UnityEngine_Quaternion__LookRotation(forward_00,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_rotation(pUVar15,UVar28,(MethodInfo *)0x0);
              pOVar5 = (__this_00->fields).OutlineComponent;
              if ((pOVar5 != (Outline_o *)0x0) &&
                 (__this_02 = (Characters_BaseHitbox_o *)pOVar5[1].fields._namesToIgnore,
                 __this_02 != (Characters_BaseHitbox_o *)0x0)) {
                Characters_BaseHitbox__Activate(__this_02,0.0,0.1,(MethodInfo *)0x0);
                lVar16 = *(long *)&(__this_00->fields).Dead;
                if (lVar16 != 0) {
                  __this_03 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
                  plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                              (plVar13,"KnockbackForce",
                                               *(undefined8 *)(*plVar13 + 0x1b0));
                  if ((plVar13 != (long *)0x0) &&
                     (fVar18 = (float)(**(code **)(*plVar13 + 0x388))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x390)),
                     __this_03 != (UnityEngine_Rigidbody_o *)0x0)) {
                    local_a8._0_4_ = (undefined4)uVar21;
                    local_a8._4_4_ = (undefined4)((ulong)uVar21 >> 0x20);
                    uVar22 = CONCAT44((float)local_a8._4_4_ * fVar18,(float)local_a8._0_4_ * fVar18)
                             ^ 0x8000000080000000;
                    force.fields.z = -((float)local_b8._0_4_ * fVar18);
                    force.fields.x = (float)(int)uVar22;
                    force.fields.y = (float)(int)(uVar22 >> 0x20);
                    UnityEngine_Rigidbody__AddForce(__this_03,force,2,(MethodInfo *)0x0);
                    if ((char)(__this_00->fields).CustomDamage != '\0') {
                      return;
                    }
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    __this_05 = *(System_Collections_Generic_List_string__c **)
                                 (*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (__this_05 != (System_Collections_Generic_List_string__c *)0x0) {
                      pvVar7 = (__this_05->_1).image;
                      if ((*(byte *)((long)pvVar7 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
                         (*(long *)(*(long *)((long)pvVar7 + 200) + -8 +
                                   (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu))
                      goto LAB_03fedcd2;
                      __this_04 = (UI_HUDBottomHandler_o *)(__this_05->_1).interfaceOffsets;
                      if (__this_04 != (UI_HUDBottomHandler_o *)0x0) {
                        iVar3 = (__this->fields).RoundLeft;
                        UI_HUDBottomHandler__ShootAHSS
                                  (__this_04,(uint)(iVar3 == 1),(uint)(iVar3 == 0),(MethodInfo *)0x0
                                  );
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
LAB_03fedcc2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSWeapon$$HandleUI
// il2cpp: void Characters_AHSSWeapon__HandleUI (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x3fedce0

void Characters_AHSSWeapon__HandleUI(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  if (DAT_0570418d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570418d = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((UI_HUDBottomHandler_o *)plVar3[0x16] != (UI_HUDBottomHandler_o *)0x0) {
      uVar2 = (__this->fields).RoundLeft;
      UI_HUDBottomHandler__ShootAHSS
                ((UI_HUDBottomHandler_o *)plVar3[0x16],(uint)(uVar2 < 2),(uint)(uVar2 == 0),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


