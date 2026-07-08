// Type: Characters.APGWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/APGWeapon.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Weapons/APGWeapon.cs  [CHANGED since prior version]
// --------------------------------

// Characters.APGWeapon$$.ctor
// il2cpp: void Characters_APGWeapon___ctor (Characters_APGWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x3feddd0

void Characters_APGWeapon___ctor
               (Characters_APGWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
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


// Characters.APGWeapon$$Activate
// il2cpp: void Characters_APGWeapon__Activate (Characters_APGWeapon_o* __this, const MethodInfo* method);
// 0x3fede30

void Characters_APGWeapon__Activate(Characters_APGWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  Characters_HumanComponentCache_o *__this_00;
  Outline_o *pOVar3;
  Outline_c *pOVar4;
  Il2CppClass *__this_01;
  void *pvVar5;
  UnityEngine_Rigidbody_o *__this_02;
  UI_HUDBottomHandler_o *__this_03;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  long *plVar13;
  long *plVar14;
  System_Object_array *settings;
  Il2CppObject *pIVar15;
  long lVar16;
  ulong uVar17;
  Characters_Human_o *__this_04;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_Fields UVar37;
  undefined8 uStack_118;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uVar29;
  
  if (DAT_0570418e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"Range2Speed");
    il2cpp_init_method_metadata(&"MaxRange");
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"Range1Constant");
    il2cpp_init_method_metadata(&"MinRange");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"Range1Multiplier");
    il2cpp_init_method_metadata(&"APGPVP");
    il2cpp_init_method_metadata(&"Range2Constant");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Range2Multiplier");
    DAT_0570418e = '\x01';
  }
  uVar29 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  uVar21 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  __this_04 = (Characters_Human_o *)(__this->fields)._owner;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (__this_04 == (Characters_Human_o *)0x0) goto LAB_03feee0c;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_04->klass->_2).naturalAligment < bVar1) ||
     ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) goto LAB_03feee28;
  __this_00 = (__this_04->fields).HumanCache;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = uVar21;
  uStack_58 = uVar29;
  if (__this_00 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03feee0c;
  bVar10 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0)
  ;
  cVar2 = *(char *)((long)&(__this_04->fields).Animation + 4);
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar17 = (ulong)(byte)((byte)bVar10 ^ 1);
  lVar16 = uVar17 * 8 + 0xf8;
  if (cVar2 != '\0') {
    lVar16 = uVar17 * 8 + 0xe0;
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar16);
  Characters_Human__set_State(__this_04,1,(MethodInfo *)0x0);
  *(System_String_o **)&(__this_04->fields)._currentVelocity.fields = pSVar11;
  il2cpp_runtime_glue(&(__this_04->fields)._currentVelocity,pSVar11);
  fVar25 = 0.0;
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_04,pSVar11,0.05,0.0,(MethodInfo *)0x0);
  uVar21 = (*(__this_04->klass->vtable)._66_GetAimPoint.methodPtr)(__this_04);
  fVar19 = (float)((ulong)uVar21 >> 0x20);
  lVar16 = *(long *)&(__this_04->fields).Dead;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((lVar16 == 0) ||
     (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58),
     pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feee0c;
  UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar30._0_4_ = (float)uVar21 - UVar34.fields.x;
  auVar30._4_4_ = fVar19 - UVar34.fields.y;
  auVar30._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar30._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  fVar26 = fVar25 - UVar34.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar23 = 0;
  uVar24 = 0;
  fVar18 = fVar26 * fVar26 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
    uVar23 = extraout_XMM0_Dc_01;
    uVar24 = extraout_XMM0_Dd_01;
    if (fVar18 <= 1e-05) goto LAB_03fee131;
LAB_03fee18d:
    fVar26 = fVar26 / fVar18;
    auVar7._4_4_ = fVar18;
    auVar7._0_4_ = fVar18;
    auVar7._8_4_ = uVar23;
    auVar7._12_4_ = uVar24;
    auVar30 = divps(auVar30,auVar7);
    uVar29 = auVar30._0_8_;
  }
  else {
    fVar18 = SQRT(fVar18);
    if (1e-05 < fVar18) goto LAB_03fee18d;
LAB_03fee131:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar29 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  UVar34.fields.z = fVar26;
  UVar34.fields.x = (float)(int)uVar29;
  UVar34.fields.y = (float)(int)((ulong)uVar29 >> 0x20);
  UVar36 = UnityEngine_Quaternion__LookRotation(UVar34,(MethodInfo *)0x0);
  UVar34 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar36,(MethodInfo *)0x0);
  UVar35.fields.x = UVar34.fields.x * 57.29578;
  UVar35.fields.y = UVar34.fields.y * 57.29578;
  UVar35.fields.z = UVar34.fields.z * 57.29578;
  UVar34 = UnityEngine_Quaternion__Internal_MakePositive(UVar35,(MethodInfo *)0x0);
  *(float *)&(__this_04->fields).Detection = UVar34.fields.y;
  auVar9._4_8_ = 0;
  auVar9._0_4_ = UVar34.fields.y * 0.017453292;
  UVar37 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o)(auVar9 << 0x20),(MethodInfo *)0x0);
  *(UnityEngine_Quaternion_Fields *)((long)&(__this_04->fields)._lastMountMessage + 4) = UVar37;
  lVar16 = *(long *)&(__this_04->fields).Dead;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((lVar16 == 0) ||
     (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58),
     pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feee0c;
  UVar36 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
  UVar37 = *(UnityEngine_Quaternion_Fields *)((long)&(__this_04->fields)._lastMountMessage + 4);
  fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar36 = UnityEngine_Quaternion__Lerp(UVar36,UVar37,fVar26 * 30.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar12,UVar36,(MethodInfo *)0x0);
  lVar16 = *(long *)&(__this_04->fields).Dead;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((lVar16 == 0) ||
     (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58),
     pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feee0c;
  UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
  lVar16 = *(long *)&(__this_04->fields).Dead;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((lVar16 == 0) ||
     (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
     uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58),
     pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03feee0c;
  UVar35 = UnityEngine_Transform__get_up(pUVar12,(MethodInfo *)0x0);
  uStack_118._0_4_ = UVar34.fields.x;
  uStack_118._4_4_ = UVar34.fields.y;
  uStack_118._0_4_ = (float)uStack_118 + UVar35.fields.x * 0.8;
  uStack_118._4_4_ = uStack_118._4_4_ + UVar35.fields.y * 0.8;
  fVar18 = extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0;
  fVar31 = extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0;
  fVar26 = UVar34.fields.z + UVar35.fields.z * 0.8;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar32._0_4_ = (float)uVar21 - (float)uStack_118;
  auVar32._4_4_ = fVar19 - uStack_118._4_4_;
  auVar32._8_4_ = extraout_XMM0_Dc - fVar18;
  auVar32._12_4_ = extraout_XMM0_Dd - fVar31;
  fVar25 = fVar25 - fVar26;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar23 = 0;
  uVar24 = 0;
  fVar19 = fVar25 * fVar25 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    uVar23 = extraout_XMM0_Dc_04;
    uVar24 = extraout_XMM0_Dd_04;
    if (fVar19 <= 1e-05) goto LAB_03fee380;
LAB_03fee3dc:
    fVar25 = fVar25 / fVar19;
    auVar6._4_4_ = fVar19;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = uVar23;
    auVar6._12_4_ = uVar24;
    auVar33 = divps(auVar32,auVar6);
  }
  else {
    fVar19 = SQRT(fVar19);
    if (1e-05 < fVar19) goto LAB_03fee3dc;
LAB_03fee380:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar33._8_8_ = 0;
    auVar33._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  uVar21 = auVar33._0_8_;
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  forward.fields.z = fVar25;
  forward.fields.x = (float)(int)uVar21;
  forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  UVar36 = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
  position.fields.z = fVar26;
  position.fields.x = (float)uStack_118;
  position.fields.y = uStack_118._4_4_;
  Effects_EffectSpawner__Spawn
            (pSVar11,position,UVar36,0.2,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this_04,pSVar11,(MethodInfo *)0x0);
  pOVar3 = (__this_04->fields).OutlineComponent;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((pOVar3 == (Outline_o *)0x0) ||
     (pOVar4 = pOVar3[2].klass, uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58), pOVar4 == (Outline_c *)0x0)) {
LAB_03feee0c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)pOVar4,(MethodInfo *)0x0);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto LAB_03feee0c;
  value.fields.z = fVar26;
  value.fields.x = (float)uStack_118;
  value.fields.y = uStack_118._4_4_;
  UnityEngine_Transform__set_position(pUVar12,value,(MethodInfo *)0x0);
  pOVar3 = (__this_04->fields).OutlineComponent;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((pOVar3 == (Outline_o *)0x0) ||
     (pOVar4 = pOVar3[2].klass, uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58), pOVar4 == (Outline_c *)0x0))
  goto LAB_03feee0c;
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)pOVar4,(MethodInfo *)0x0);
  forward_00.fields.z = fVar25;
  forward_00.fields.x = (float)(int)uVar21;
  forward_00.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  UVar36 = UnityEngine_Quaternion__LookRotation(forward_00,(MethodInfo *)0x0);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto LAB_03feee0c;
  UnityEngine_Transform__set_rotation(pUVar12,UVar36,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar13 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar13 == (long *)0x0) goto LAB_03feee0c;
  plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"APG",*(undefined8 *)(*plVar13 + 0x1b0));
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (((lVar16 == 0) ||
      (lVar16 = *(long *)(lVar16 + 0x58), uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
      uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58), lVar16 == 0)) ||
     (lVar16 = *(long *)(lVar16 + 0x50), uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58), lVar16 == 0)) goto LAB_03feee0c;
  if (*(char *)(lVar16 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar13 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
    uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
    uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
    if (plVar13 == (long *)0x0) goto LAB_03feee0c;
    plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                (plVar13,"APGPVP",*(undefined8 *)(*plVar13 + 0x1b0));
  }
  pOVar3 = (__this_04->fields).OutlineComponent;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((pOVar3 == (Outline_o *)0x0) ||
     (pOVar4 = pOVar3[2].klass, uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
     uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8),
     uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48),
     uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58), pOVar4 == (Outline_c *)0x0))
  goto LAB_03feee0c;
  __this_01 = (pOVar4->_1).declaringType;
  if (__this_01 != (Il2CppClass *)0x0) {
    pvVar5 = (__this_01->_1).image;
    if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8)
        != TypeInfo_CapsuleCollider)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_01);
    }
  }
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar13 == (long *)0x0) goto LAB_03feee0c;
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Radius",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (__this_01 == (Il2CppClass *)0x0) goto LAB_03feee0c;
  UnityEngine_CapsuleCollider__set_radius
            ((UnityEngine_CapsuleCollider_o *)__this_01,fVar19,(MethodInfo *)0x0);
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Range1Multiplier",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Range2Multiplier",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  fVar20 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Range1Constant",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  uStack_a8 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
  fStack_a0 = extraout_XMM0_Dc_05;
  fStack_9c = extraout_XMM0_Dd_05;
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Range2Constant",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  uStack_b8 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"MinRange",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  uStack_48 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
  plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"MaxRange",*(undefined8 *)(*plVar13 + 0x1b0));
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if (plVar14 == (long *)0x0) goto LAB_03feee0c;
  uVar21 = (**(code **)(*plVar14 + 0x388))(plVar14);
  lVar16 = *(long *)&(__this_04->fields).Dead;
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
  if ((lVar16 == 0) ||
     (__this_02 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), uStack_58 = uVar21,
     __this_02 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03feee0c;
  UVar34 = UnityEngine_Rigidbody__get_velocity(__this_02,(MethodInfo *)0x0);
  fVar28 = UVar34.fields.x;
  fVar22 = UVar34.fields.y;
  uVar23 = extraout_XMM0_Dc_06;
  uVar24 = extraout_XMM0_Dd_06;
  fVar27 = UVar34.fields.z;
  if (DAT_056fde1c == '\0') {
    uStack_90 = extraout_XMM0_Dc_06;
    auStack_98 = (undefined1  [8])UVar34.fields._0_8_;
    uStack_8c = extraout_XMM0_Dd_06;
    fStack_c8 = UVar34.fields.z;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    fVar28 = (float)auStack_98._0_4_;
    fVar22 = (float)auStack_98._4_4_;
    uVar23 = uStack_90;
    uVar24 = uStack_8c;
    fVar27 = fStack_c8;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auStack_98._4_4_ = fVar22;
    auStack_98._0_4_ = fVar28;
    uStack_90 = uVar23;
    uStack_8c = uVar24;
    fStack_c8 = fVar27;
    fStack_68 = fVar22;
    fStack_64 = fVar22;
    uStack_60 = uVar23;
    uStack_5c = uVar24;
    il2cpp_init_class();
    fVar28 = (float)auStack_98._0_4_;
    fVar27 = fStack_c8;
    fVar22 = fStack_68;
  }
  fVar28 = fVar27 * fVar27 + fVar22 * fVar22 + fVar28 * fVar28;
  if (fVar28 < 0.0) {
    fStack_c8 = sqrtf(fVar28);
    uStack_c4 = extraout_XMM0_Db;
    uStack_c0 = extraout_XMM0_Dc_07;
    uStack_bc = extraout_XMM0_Dd_07;
  }
  else {
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    fStack_c8 = SQRT(fVar28);
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"Range2Speed",*(undefined8 *)(*plVar13 + 0x1b0));
  if (plVar13 == (long *)0x0) goto LAB_03feee0c;
  fVar28 = (float)(**(code **)(*plVar13 + 0x388))(plVar13);
  fVar20 = (float)(~-(uint)(fVar28 < fStack_c8) & (uint)((float)uStack_a8 + fVar19 * fStack_c8) |
                  (uint)((float)uStack_b8 + fVar20 * fStack_c8) & -(uint)(fVar28 < fStack_c8));
  fVar19 = (float)uStack_58;
  if (fVar20 <= (float)uStack_58) {
    fVar19 = fVar20;
  }
  UnityEngine_CapsuleCollider__set_height
            ((UnityEngine_CapsuleCollider_o *)__this_01,
             (float)(~-(uint)((float)uStack_48 <= fVar20) & (uint)(float)uStack_48 |
                    (uint)fVar19 & -(uint)((float)uStack_48 <= fVar20)),(MethodInfo *)0x0);
  fVar19 = UnityEngine_CapsuleCollider__get_height
                     ((UnityEngine_CapsuleCollider_o *)__this_01,(MethodInfo *)0x0);
  auVar8._4_8_ = 0;
  auVar8._0_4_ = fVar19 * 0.5 + 0.5;
  UnityEngine_CapsuleCollider__set_center
            ((UnityEngine_CapsuleCollider_o *)__this_01,(UnityEngine_Vector3_o)(auVar8 << 0x40),
             (MethodInfo *)0x0);
  fVar19 = UnityEngine_CapsuleCollider__get_height
                     ((UnityEngine_CapsuleCollider_o *)__this_01,(MethodInfo *)0x0);
  fVar19 = fVar19 * 1.2;
  fVar20 = UnityEngine_CapsuleCollider__get_radius
                     ((UnityEngine_CapsuleCollider_o *)__this_01,(MethodInfo *)0x0);
  uStack_a8._0_4_ = (float)uStack_118 + (float)uStack_118;
  uStack_a8._4_4_ = uStack_118._4_4_ + uStack_118._4_4_;
  fStack_a0 = fVar18 + fVar18;
  fStack_9c = fVar31 + fVar31;
  uStack_b8._0_4_ = fVar26 + fVar26;
  fVar18 = UnityEngine_CapsuleCollider__get_height
                     ((UnityEngine_CapsuleCollider_o *)__this_01,(MethodInfo *)0x0);
  fStack_108 = auVar33._0_4_;
  fStack_104 = auVar33._4_4_;
  fStack_100 = auVar33._8_4_;
  fStack_fc = auVar33._12_4_;
  uStack_a8._0_4_ = (fVar18 * fStack_108 + (float)uStack_a8) * 0.5;
  uStack_a8._4_4_ = (fVar18 * fStack_104 + uStack_a8._4_4_) * 0.5;
  fStack_a0 = (extraout_XMM0_Dc_08 * fStack_100 + fStack_a0) * 0.0;
  fStack_9c = (extraout_XMM0_Dd_08 * fStack_fc + fStack_9c) * 0.0;
  uStack_b8._0_4_ = (fVar25 * fVar18 + (float)uStack_b8) * 0.5;
  settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  fVar18 = fVar19 * fStack_108 * 0.5;
  fVar31 = fVar19 * fStack_104 * 0.5;
  fVar25 = fVar25 * fVar19 * 0.5;
  fStack_70 = fVar25 + (float)uStack_b8;
  uStack_78 = CONCAT44(fVar31 + uStack_a8._4_4_,fVar18 + (float)uStack_a8);
  pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_78);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
  if (settings == (System_Object_array *)0x0) goto LAB_03feee0c;
  if (pIVar15 != (Il2CppObject *)0x0) {
    lVar16 = il2cpp_runtime_glue(pIVar15,(((settings->obj).klass)->_1).element_class);
    if (lVar16 == 0) goto LAB_03feee16;
  }
  if ((int)settings->max_length != 0) {
    settings->m_Items[0] = pIVar15;
    il2cpp_runtime_glue(settings->m_Items,pIVar15);
    fStack_80 = (float)uStack_b8 - fVar25;
    uStack_88 = CONCAT44(uStack_a8._4_4_ - fVar31,(float)uStack_a8 - fVar18);
    pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_88);
    if (pIVar15 != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_glue(pIVar15,(((settings->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto LAB_03feee16;
    }
    if ((uint)settings->max_length < 2) goto LAB_03feee11;
    settings->m_Items[1] = pIVar15;
    il2cpp_runtime_glue(settings->m_Items + 1,pIVar15);
    fStack_cc = fVar20 * 4.0;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_cc);
    if (pIVar15 != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_glue(pIVar15,(((settings->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto LAB_03feee16;
    }
    if ((uint)settings->max_length < 3) goto LAB_03feee11;
    settings->m_Items[2] = pIVar15;
    il2cpp_runtime_glue(settings->m_Items + 2,pIVar15);
    fStack_d0 = fVar20 * 4.0;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_d0);
    if (pIVar15 != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_glue(pIVar15,(((settings->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto LAB_03feee16;
    }
    if (3 < (uint)settings->max_length) {
      settings->m_Items[3] = pIVar15;
      il2cpp_runtime_glue(settings->m_Items + 3,pIVar15);
      uStack_d4 = 0x3e800000;
      pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_d4);
      if (pIVar15 != (Il2CppObject *)0x0) {
        lVar16 = il2cpp_runtime_glue(pIVar15,(((settings->obj).klass)->_1).element_class);
        if (lVar16 == 0) {
LAB_03feee16:
          uVar21 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar21,0);
        }
      }
      if (4 < (uint)settings->max_length) {
        settings->m_Items[4] = pIVar15;
        il2cpp_runtime_glue(settings->m_Items + 4,pIVar15);
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
        }
        else {
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
        }
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        position_00.fields.z = fVar26;
        position_00.fields.x = (float)uStack_118;
        position_00.fields.y = uStack_118._4_4_;
        Effects_EffectSpawner__Spawn
                  (pSVar11,position_00,
                   (UnityEngine_Quaternion_o)
                   **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1,settings,
                   (MethodInfo *)0x0);
        pOVar3 = (__this_04->fields).OutlineComponent;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
        if ((pOVar3 != (Outline_o *)0x0) &&
           (pOVar4 = pOVar3[2].klass, uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8),
           uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8), pOVar4 != (Outline_c *)0x0)) {
          Characters_BaseHitbox__Activate
                    ((Characters_BaseHitbox_o *)pOVar4,0.0,0.1,(MethodInfo *)0x0);
          if ((char)(__this_04->fields).CustomDamage != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_04 = *(Characters_Human_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
          if (__this_04 != (Characters_Human_o *)0x0) {
            bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
            uVar29 = uStack_58;
            uVar21 = uStack_48;
            if (((__this_04->klass->_2).naturalAligment < bVar1) ||
               ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
LAB_03feee28:
              uStack_58 = uVar29;
              uStack_48 = uVar21;
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(__this_04);
            }
            __this_03 = *(UI_HUDBottomHandler_o **)&(__this_04->fields)._cameraFPS;
            uStack_a8 = CONCAT44(uStack_a8._4_4_,(float)uStack_a8);
            uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8);
            if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
              UI_HUDBottomHandler__ShootAPG(__this_03,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto LAB_03feee0c;
      }
    }
  }
LAB_03feee11:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


