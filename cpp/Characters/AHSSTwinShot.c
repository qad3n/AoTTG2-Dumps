// Type: Characters.AHSSTwinShot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSTwinShot.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// --------------------------------

// Characters.AHSSTwinShot$$.ctor
// il2cpp: void Characters_AHSSTwinShot___ctor (Characters_AHSSTwinShot_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e42f0

void Characters_AHSSTwinShot___ctor
               (Characters_AHSSTwinShot_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.AHSSTwinShot$$GetActiveTime
// il2cpp: float Characters_AHSSTwinShot__GetActiveTime (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x42f1e50

float Characters_AHSSTwinShot__GetActiveTime(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  code cVar5;
  byte bVar6;
  uint32_t uVar7;
  System_Object_array *pSVar8;
  Characters_Human_o *__this_00;
  Outline_o *pOVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  Characters_BaseHitbox_o *__this_01;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  void *pvVar12;
  UnityEngine_UI_Image_o *pUVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  InvokerMethod pIVar15;
  code *vtableDispatch;
  UnityEngine_Component_o *pUVar16;
  UnityEngine_UI_Image_o *pUVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  Il2CppType *pIVar23;
  undefined1 auVar24 [16];
  uint32_t *puVar25;
  undefined1 *puVar26;
  char cVar27;
  bool_conflict bVar28;
  int iVar29;
  uint uVar30;
  Characters_BaseUseable_o *pCVar31;
  Il2CppClass *pIVar32;
  long *plVar33;
  long *plVar34;
  UnityEngine_Transform_o *pUVar35;
  UnityEngine_GameObject_o *pUVar36;
  UnityEngine_Animator_o *pUVar37;
  System_String_o *pSVar38;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar39;
  undefined8 *puVar40;
  UnityEngine_Object_o *pUVar41;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  uint32_t uVar42;
  long lVar43;
  undefined8 extraout_RDX;
  long *plVar44;
  MethodInfo *pMVar45;
  Il2CppClass *pIVar46;
  Il2CppRGCTXData *pIVar47;
  Il2CppClass **ppIVar48;
  Il2CppClass **ppIVar49;
  int iVar50;
  Il2CppClass *pIVar51;
  Characters_BaseUseable_o *pCVar52;
  Characters_BaseCharacter_o *__this_03;
  Il2CppClass *__this_04;
  Il2CppClass *__this_05;
  MethodInfo *pMVar53;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar54;
  Il2CppClass *unaff_R13;
  float fVar55;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar56;
  float fVar57;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float extraout_XMM0_Da_23;
  float extraout_XMM0_Da_24;
  float extraout_XMM0_Da_25;
  float extraout_XMM0_Da_26;
  float extraout_XMM0_Da_27;
  float extraout_XMM0_Da_28;
  undefined8 uVar58;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar60;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  float fVar63;
  UnityEngine_Quaternion_o UVar64;
  UnityEngine_Quaternion_Fields UVar65;
  undefined1 auVar66 [12];
  UnityEngine_Vector3_o UVar67;
  UnityEngine_Vector3_o UVar68;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b;
  undefined1 auStack_e8 [12];
  float fStack_dc;
  Il2CppClass *pIStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  Il2CppClass *pIStack_68;
  undefined8 uStack_60;
  Il2CppRuntimeInterfaceOffsetPair *pIStack_58;
  Characters_BaseCharacter_o *pCStack_50;
  Characters_BaseCharacter_o *pCStack_48;
  
  if (g_data_057adecb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&"FireDelay");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adecb = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_042f1e6d;
label_042f1ebf:
    il2cpp_runtime_helper_02337ed0();
    pCVar52 = (Characters_BaseUseable_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_042f1ebf;
label_042f1e6d:
    pCVar52 = (Characters_BaseUseable_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((pCVar52 != (Characters_BaseUseable_o *)0x0) &&
      (pCVar31 = (Characters_BaseUseable_o *)
                 (*(pCVar52->klass->vtable)._7_HasDurability.methodPtr)
                           (pCVar52,"AHSS",(pCVar52->klass->vtable)._7_HasDurability.method),
      pCVar31 != (Characters_BaseUseable_o *)0x0)) &&
     (plVar44 = (long *)(*(pCVar31->klass->vtable)._7_HasDurability.methodPtr)
                                  (pCVar31,"FireDelay",(pCVar31->klass->vtable)._7_HasDurability.method),
     pCVar52 = pCVar31, plVar44 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar44 + 0x388);
    fVar55 = (float)(*vtableDispatch)(plVar44,*(undefined8 *)(*plVar44 + 0x390),vtableDispatch);
    return fVar55;
  }
  fVar55 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adecc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    fVar55 = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecc = '\x01';
  }
  __this_03 = (pCVar52->fields)._owner;
  if (__this_03 != (Characters_BaseCharacter_o *)0x0) {
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= (__this_03->klass->_2).naturalAligment) &&
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
      pSVar8 = (__this_03->fields).crossfadeCache;
      if (pSVar8 != (System_Object_array *)0x0) {
        pIVar32 = (pSVar8->obj).klass;
        bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if (((bVar4 <= (pIVar32->_2).naturalAligment) &&
            ((pIVar32->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_AmmoWeapon)) &&
           (bVar28 = Characters_BaseUseable__CanUse(pCVar52,(MethodInfo *)0x0), fVar55 = extraout_XMM0_Da,
           (char)bVar28 != '\0')) {
          return extraout_XMM0_Da;
        }
      }
      return fVar55;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adecd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecd = '\x01';
  }
  pIVar32 = (Il2CppClass *)0x0;
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this_03,(MethodInfo *)0x0);
  plVar44 = *(long **)&(__this_03->fields).MaxFootstepDistance;
  if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (((Il2CppClass *)plVar44)->_1).image;
    cVar5 = (code)(TypeInfo_Human->_2).naturalAligment;
    pIVar32 = TypeInfo_Human;
    if (((byte)cVar5 <= (byte)UNRECOVERED_JUMPTABLE_00[0x130]) &&
       (*(Il2CppClass **)(*(long *)(UNRECOVERED_JUMPTABLE_00 + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
        TypeInfo_Human)) {
      plVar44 = *(long **)&(((Il2CppClass *)plVar44)->_2).element_size;
      if ((Il2CppClass *)plVar44 == (Il2CppClass *)0x0) goto label_042f20de;
      UNRECOVERED_JUMPTABLE_00 = (((Il2CppClass *)plVar44)->_1).image;
      cVar5 = (code)(TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar32 = TypeInfo_AmmoWeapon;
      if (((byte)cVar5 <= (byte)UNRECOVERED_JUMPTABLE_00[0x130]) &&
         (*(Il2CppClass **)(*(long *)(UNRECOVERED_JUMPTABLE_00 + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
          TypeInfo_AmmoWeapon)) {
        uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar44)->_1).castClass;
        if (-1 < (int)uVar7) {
          uVar42 = 2;
          if (1 < (int)uVar7) {
            uVar42 = uVar7;
          }
          *(uint32_t *)&(((Il2CppClass *)plVar44)->_1).castClass = uVar42 - 2;
        }
        return extraout_XMM0_Da_00;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
  }
label_042f20de:
  il2cpp_runtime_helper_022b2c90();
  pCStack_48 = __this_03;
  if (g_data_057adece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adece = '\x01';
  }
  __this_00 = (((Il2CppClass *)plVar44)->_1).this_arg.data;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f2984;
  bVar4 = (TypeInfo_Human->_2).naturalAligment;
  pIVar32 = TypeInfo_Human;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Human)) {
label_042f2989:
    il2cpp_runtime_helper_022b2fd0(__this_00);
    pIVar54 = (Il2CppClass *)plVar44;
  }
  else {
    pIVar32 = (Il2CppClass *)(__this_00->klass->vtable)._66_GetAimPoint.method;
    uVar58 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    fVar55 = (float)((ulong)uVar58 >> 0x20);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar32 = (Il2CppClass *)0x0;
    UVar67 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar62._0_4_ = (float)uVar58 - UVar67.fields.x;
    auVar62._4_4_ = fVar55 - UVar67.fields.y;
    auVar62._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
    auVar62._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
    fVar63 = in_XMM1_Da - UVar67.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar59 = 0;
    uVar60 = 0;
    fVar56 = fVar63 * fVar63 + auVar62._4_4_ * auVar62._4_4_ + auVar62._0_4_ * auVar62._0_4_;
    if (fVar56 < 0.0) {
      fVar56 = sqrtf(fVar56);
      uVar59 = extraout_XMM0_Dc_01;
      uVar60 = extraout_XMM0_Dd_01;
      if (fVar56 <= 1e-05) goto label_042f22b7;
label_042f231f:
      fVar63 = fVar63 / fVar56;
      auVar21._4_4_ = fVar56;
      auVar21._0_4_ = fVar56;
      auVar21._8_4_ = uVar59;
      auVar21._12_4_ = uVar60;
      auVar62 = divps(auVar62,auVar21);
      uVar61 = auVar62._0_8_;
      lVar43._0_4_ = (__this_00->fields).Dead;
      lVar43._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    else {
      fVar56 = SQRT(fVar56);
      if (1e-05 < fVar56) goto label_042f231f;
label_042f22b7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar61 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar63 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar43._0_4_ = (__this_00->fields).Dead;
      lVar43._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    if ((lVar43 == 0) || (*(UnityEngine_Transform_o **)(lVar43 + 0x10) == (UnityEngine_Transform_o *)0x0)) {
label_042f2984:
      il2cpp_runtime_helper_022b2c90();
      goto label_042f2989;
    }
    UVar67 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar43 + 0x10),(MethodInfo *)0x0);
    cVar27 = *(char *)((long)&(__this_00->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar67.fields.x);
    }
    lVar43 = 0xf0;
    if (cVar27 == '\0') {
      lVar43 = 0x108;
    }
    plVar44 = *(long **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar43);
    Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
    *(long **)&(__this_00->fields)._currentVelocity.fields = plVar44;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._currentVelocity,plVar44);
    pIVar32 = (Il2CppClass *)plVar44;
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)plVar44,0.05,0.0,(MethodInfo *)0x0);
    UVar67.fields.z = fVar63;
    UVar67.fields.x = (float)(int)uVar61;
    UVar67.fields.y = (float)(int)((ulong)uVar61 >> 0x20);
    UVar64 = UnityEngine_Quaternion__LookRotation_4debb20(UVar67,(MethodInfo *)0x0);
    UVar67 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar64,(MethodInfo *)0x0);
    UVar68.fields.x = UVar67.fields.x * 57.29578;
    UVar68.fields.y = UVar67.fields.y * 57.29578;
    UVar68.fields.z = UVar67.fields.z * 57.29578;
    UVar67 = UnityEngine_Quaternion__Internal_MakePositive(UVar68,(MethodInfo *)0x0);
    *(float *)&(__this_00->fields).Detection = UVar67.fields.y;
    auVar66._4_8_ = 0;
    auVar66._0_4_ = UVar67.fields.y * 0.017453292;
    UVar65 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar66 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar65;
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) || (plVar44 = *(long **)(lVar43 + 0x10), (Il2CppClass *)plVar44 == (Il2CppClass *)0x0))
    goto label_042f2984;
    UVar64 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)plVar44,(MethodInfo *)0x0);
    uStack_60 = *(undefined8 *)((long)&(__this_00->fields)._lastMountMessage + 4);
    pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
    uVar2 = (__this_00->fields)._grabIFrames;
    uVar3 = (__this_00->fields)._bladeTrailActive;
    b.fields.w = (float)uVar3;
    b.fields.z = (float)uVar2;
    pIStack_68 = (Il2CppClass *)0x0;
    fVar63 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.x = (float)(undefined4)uStack_60;
    b.fields.y = (float)uStack_60._4_4_;
    UVar64 = UnityEngine_Quaternion__Lerp(UVar64,b,fVar63 * 30.0,(MethodInfo *)0x0);
    pIVar32 = (Il2CppClass *)0x0;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar64,(MethodInfo *)0x0);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar32 = (Il2CppClass *)0x0;
    UVar67 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    UVar68 = UnityEngine_Transform__get_up(pUVar35,(MethodInfo *)0x0);
    uStack_90._0_4_ = UVar67.fields.x;
    uStack_90._4_4_ = UVar67.fields.y;
    uStack_90._0_4_ = (float)uStack_90 + UVar68.fields.x * 0.8;
    uStack_90._4_4_ = uStack_90._4_4_ + UVar68.fields.y * 0.8;
    fVar63 = UVar67.fields.z + UVar68.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar56 = (float)uVar58 - (float)uStack_90;
    fVar55 = fVar55 - uStack_90._4_4_;
    in_XMM1_Da = in_XMM1_Da - fVar63;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar59 = 0;
    uVar60 = 0;
    fVar57 = in_XMM1_Da * in_XMM1_Da + fVar55 * fVar55 + fVar56 * fVar56;
    if (fVar57 < 0.0) {
      fVar57 = sqrtf(fVar57);
      uVar59 = extraout_XMM0_Dc_04;
      uVar60 = extraout_XMM0_Dd_04;
      if (fVar57 <= 1e-05) goto label_042f25be;
label_042f2610:
      in_XMM1_Da = in_XMM1_Da / fVar57;
      auVar24._4_4_ = fVar55;
      auVar24._0_4_ = fVar56;
      auVar24._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
      auVar24._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
      auVar20._4_4_ = fVar57;
      auVar20._0_4_ = fVar57;
      auVar20._8_4_ = uVar59;
      auVar20._12_4_ = uVar60;
      auVar62 = divps(auVar24,auVar20);
      fVar55 = auVar62._0_4_;
      fVar56 = auVar62._4_4_;
    }
    else {
      fVar57 = SQRT(fVar57);
      if (1e-05 < fVar57) goto label_042f2610;
label_042f25be:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar55 = (float)uVar58;
      fVar56 = (float)((ulong)uVar58 >> 0x20);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar39 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.y = fVar56;
    forward.fields.x = fVar55;
    forward.fields.z = in_XMM1_Da;
    UVar64 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    position.fields.z = fVar63;
    position.fields.x = (float)uStack_90;
    position.fields.y = uStack_90._4_4_;
    Effects_EffectSpawner__Spawn(pSVar39,position,UVar64,2.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pMVar45 = TypeInfo_HumanSounds;
    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar32 = (Il2CppClass *)Characters_HumanSounds__GetRandomAHSSGunShotDouble(pMVar45);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)pIVar32,(MethodInfo *)0x0);
    plVar44 = &TypeInfo_CharacterData;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    if (plVar33 == (long *)0x0) goto label_042f2984;
    pIVar32 = "AHSS";
    plVar33 = (long *)(**(code **)(*plVar33 + 0x1a8))(plVar33,"AHSS",*(undefined8 *)(*plVar33 + 0x1b0));
    pOVar9 = (__this_00->fields).OutlineComponent;
    if (((pOVar9 == (Outline_o *)0x0) ||
        (pSVar10 = pOVar9[1].fields._namesToIgnore,
        pSVar10 == (System_Collections_Generic_List_string__o *)0x0)) || (plVar33 == (long *)0x0))
    goto label_042f2984;
    plVar44 = (long *)pSVar10[2].klass;
    pIVar32 = "Radius";
    plVar34 = (long *)(**(code **)(*plVar33 + 0x1a8))(plVar33,"Radius",*(undefined8 *)(*plVar33 + 0x1b0));
    if (plVar34 == (long *)0x0) goto label_042f2984;
    pIVar32 = *(Il2CppClass **)(*plVar34 + 0x390);
    fVar57 = (float)(**(code **)(*plVar34 + 0x388))(plVar34);
    if ((Il2CppClass *)plVar44 == (Il2CppClass *)0x0) goto label_042f2984;
    UNRECOVERED_JUMPTABLE_00 = (((Il2CppClass *)plVar44)->_1).image;
    cVar5 = (code)(TypeInfo_CapsuleCollider->_2).naturalAligment;
    pIVar32 = TypeInfo_CapsuleCollider;
    pIVar54 = (Il2CppClass *)plVar44;
    if (((byte)cVar5 <= (byte)UNRECOVERED_JUMPTABLE_00[0x130]) &&
       (*(Il2CppClass **)(*(long *)(UNRECOVERED_JUMPTABLE_00 + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
        TypeInfo_CapsuleCollider)) {
      pIVar32 = (Il2CppClass *)0x0;
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)plVar44,fVar57 + fVar57,(MethodInfo *)0x0);
      pOVar9 = (__this_00->fields).OutlineComponent;
      if ((pOVar9 != (Outline_o *)0x0) &&
         (pSVar10 = pOVar9[1].fields._namesToIgnore,
         pSVar10 != (System_Collections_Generic_List_string__o *)0x0)) {
        pIVar32 = (Il2CppClass *)0x0;
        pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
        if (pUVar35 != (UnityEngine_Transform_o *)0x0) {
          pIVar32 = (Il2CppClass *)0x0;
          value.fields.z = fVar63;
          value.fields.x = (float)uStack_90;
          value.fields.y = uStack_90._4_4_;
          UnityEngine_Transform__set_position(pUVar35,value,(MethodInfo *)0x0);
          pOVar9 = (__this_00->fields).OutlineComponent;
          if ((pOVar9 != (Outline_o *)0x0) &&
             (pSVar10 = pOVar9[1].fields._namesToIgnore,
             pSVar10 != (System_Collections_Generic_List_string__o *)0x0)) {
            pIVar32 = (Il2CppClass *)0x0;
            plVar44 = (long *)UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
            forward_00.fields.y = fVar56;
            forward_00.fields.x = fVar55;
            forward_00.fields.z = in_XMM1_Da;
            UVar64 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
            if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
              pIVar32 = (Il2CppClass *)0x0;
              UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar64,(MethodInfo *)0x0)
              ;
              pOVar9 = (__this_00->fields).OutlineComponent;
              if ((pOVar9 != (Outline_o *)0x0) &&
                 (__this_01 = (Characters_BaseHitbox_o *)pOVar9[1].fields._namesToIgnore,
                 __this_01 != (Characters_BaseHitbox_o *)0x0)) {
                pIVar32 = (Il2CppClass *)0x0;
                Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
                lVar43 = *(long *)&(__this_00->fields).Dead;
                if (lVar43 != 0) {
                  plVar44 = *(long **)(lVar43 + 0x18);
                  pIVar32 = "KnockbackForce";
                  plVar33 = (long *)(**(code **)(*plVar33 + 0x1a8))
                                              (plVar33,"KnockbackForce",*(undefined8 *)(*plVar33 + 0x1b0));
                  if (plVar33 != (long *)0x0) {
                    pIVar32 = *(Il2CppClass **)(*plVar33 + 0x390);
                    fVar63 = (float)(**(code **)(*plVar33 + 0x388))(plVar33);
                    if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
                      force.fields.y = fVar56 * fVar63 * -2.0;
                      force.fields.x = fVar55 * fVar63 * -2.0;
                      force.fields.z = in_XMM1_Da * fVar63 * -2.0;
                      pIVar32 = (Il2CppClass *)0x2;
                      UnityEngine_Rigidbody__AddForce
                                ((UnityEngine_Rigidbody_o *)plVar44,force,2,(MethodInfo *)0x0);
                      plVar44 = &TypeInfo_UIManager;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar54 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (pIVar54 != (Il2CppClass *)0x0) {
                        UNRECOVERED_JUMPTABLE_00 = (pIVar54->_1).image;
                        cVar5 = (code)(TypeInfo_InGameMenu->_2).naturalAligment;
                        pIVar32 = TypeInfo_InGameMenu;
                        if (((byte)UNRECOVERED_JUMPTABLE_00[0x130] < (byte)cVar5) ||
                           (*(Il2CppClass **)
                             (*(long *)(UNRECOVERED_JUMPTABLE_00 + 200) + -8 + (ulong)(byte)cVar5 * 8) !=
                            TypeInfo_InGameMenu)) goto label_042f2994;
                        pIVar11 = (pIVar54->_1).interfaceOffsets;
                        if (pIVar11 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042f2984;
                        pCStack_50 = pCStack_48;
                        pIVar32 = (Il2CppClass *)0x1;
                        pIVar54 = (Il2CppClass *)0x1;
                        if (g_data_057ae3db == '\0') {
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2dd6;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2de2;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          g_data_057ae3db = '\x01';
                        }
                        pUVar41 = *(UnityEngine_Object_o **)&pIVar11[0x10].offset;
                        plVar44 = &TypeInfo_Object;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e09;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e15;
                        bVar28 = UnityEngine_Object__op_Equality
                                           (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_01;
                        }
                        pIVar46 = pIVar11[0xc].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e36;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e42;
                        bVar28 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_02;
                        }
                        pIVar46 = pIVar11[0x1e].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e63;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e6f;
                        bVar28 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_03;
                        }
                        __this_04 = pIVar11[0x21].interfaceType;
                        if (__this_04 != (Il2CppClass *)0x0) {
                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e97;
                          pUVar36 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                            pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2eaf;
                            UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                            __this_04 = pIVar11[0x21].interfaceType;
                            if (__this_04 != (Il2CppClass *)0x0) {
                              pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ece;
                              pUVar37 = (UnityEngine_Animator_o *)
                                        UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_04,
                                                   (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                              if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ee4;
                                UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                                __this_04 = pIVar11[0x1e].interfaceType;
                                if (__this_04 != (Il2CppClass *)0x0) {
                                  pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2efb;
                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                    pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f10;
                                    UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                    __this_04 = pIVar11[0x1f].interfaceType;
                                    if (__this_04 != (Il2CppClass *)0x0) {
                                      pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f27;
                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_04,
                                                           (MethodInfo *)0x0);
                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f3c;
                                        UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                        __this_04 = pIVar11[0x20].interfaceType;
                                        if (__this_04 != (Il2CppClass *)0x0) {
                                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f53;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)__this_04,
                                                               (MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f68;
                                            UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                            __this_04 = *(Il2CppClass **)&pIVar11[0x21].offset;
                                            if (__this_04 != (Il2CppClass *)0x0) {
                                              pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f88;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)__this_04,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fa0;
                                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0)
                                                ;
                                                __this_04 = *(Il2CppClass **)&pIVar11[0x21].offset;
                                                if (__this_04 != (Il2CppClass *)0x0) {
                                                  pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fbf;
                                                  pUVar37 = (UnityEngine_Animator_o *)
                                                            UnityEngine_Component__GetComponent_object_
                                                                      ((UnityEngine_Component_o *)__this_04,
                                                                       (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                                  if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                                    pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fd5
                                                    ;
                                                    UnityEngine_Animator__Update
                                                              (pUVar37,0.0,(MethodInfo *)0x0);
                                                    __this_04 = *(Il2CppClass **)&pIVar11[0x1e].offset;
                                                    if (__this_04 != (Il2CppClass *)0x0) {
                                                      pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                   0x43c2fe8;
                                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_04,(MethodInfo *)0x0);
                                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                     0x43c2ff9;
                                                        UnityEngine_GameObject__SetActive
                                                                  (pUVar36,0,(MethodInfo *)0x0);
                                                        __this_04 = *(Il2CppClass **)&pIVar11[0x1f].offset;
                                                        if (__this_04 != (Il2CppClass *)0x0) {
                                                          pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                       0x43c300c;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               __this_04,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                         0x43c301d;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,0,(MethodInfo *)0x0);
                                                            __this_04 = *(Il2CppClass **)&pIVar11[0x20].offset
                                                            ;
                                                            if (__this_04 != (Il2CppClass *)0x0) {
                                                              pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *
                                                                           )0x43c3030;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  ((UnityEngine_Component_o *)
                                                                                   __this_04,(MethodInfo *)0x0
                                                                                  );
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair
                                                                              *)0x43c3041;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,0,(MethodInfo *)0x0);
                                                                *(undefined8 *)
                                                                 ((long)&pIVar11[0x12].interfaceType + 4) =
                                                                     0x3f2ac08300000000;
                                                                return extraout_XMM0_Da_04;
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
                        pIStack_58 = (Il2CppRuntimeInterfaceOffsetPair *)UI_HUDBottomHandler__ShootTS;
                        il2cpp_runtime_helper_022b2c90();
                        uStack_60 = 1;
                        pIStack_68 = pIVar46;
                        pIStack_58 = pIVar11;
                        if (g_data_057ae3dc == '\0') {
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                          g_data_057ae3dc = '\x01';
                        }
                        pUVar41 = *(UnityEngine_Object_o **)&(__this_04->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar28 = UnityEngine_Object__op_Equality
                                           (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_05;
                        }
                        pIVar47 = __this_04->rgctx_data;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar28 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar47,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_06;
                        }
                        pIVar46 = (Il2CppClass *)__this_04->vtable[0xe].method;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_05 = pIVar46;
                        bVar28 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar28 != '\0') {
                          return extraout_XMM0_Da_07;
                        }
                        lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        if (((lVar43 != 0) && (lVar43 = *(long *)(lVar43 + 0x58), lVar43 != 0)) &&
                           (lVar43 = *(long *)(lVar43 + 0x48), lVar43 != 0)) {
                          if (*(char *)(lVar43 + 0x11) != '\0') {
                            return extraout_XMM0_Da_07;
                          }
                          __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                          if ((__this_05 != (Il2CppClass *)0x0) &&
                             (pUVar36 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0),
                             pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                            __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                            if ((__this_05 != (Il2CppClass *)0x0) &&
                               (pUVar37 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)__this_05,
                                                     (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                               pUVar37 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                              __this_05 = (Il2CppClass *)__this_04->vtable[0xe].method;
                              if ((__this_05 != (Il2CppClass *)0x0) &&
                                 (pUVar36 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                 , pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                __this_05 = (Il2CppClass *)__this_04->vtable[0xf].methodPtr;
                                if ((__this_05 != (Il2CppClass *)0x0) &&
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this_05,
                                                         (MethodInfo *)0x0),
                                   pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                  __this_05 = (Il2CppClass *)__this_04->vtable[6].method;
                                  if ((__this_05 != (Il2CppClass *)0x0) &&
                                     (pUVar36 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_05,
                                                           (MethodInfo *)0x0),
                                     pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                    UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                    __this_05 = (Il2CppClass *)__this_04->vtable[7].methodPtr;
                                    if ((__this_05 != (Il2CppClass *)0x0) &&
                                       (pUVar36 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)__this_05,
                                                             (MethodInfo *)0x0),
                                       pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                      (__this_04->_2).nested_type_count = 0;
                                      (__this_04->_2).vtable_count = 0;
                                      (__this_04->_2).interfaces_count = 0;
                                      (__this_04->_2).interface_offsets_count = 0x3f80;
                                      return extraout_XMM0_Da_08;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        if (g_data_057ae3dd == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                          g_data_057ae3dd = '\x01';
                        }
                        pSVar39 = *(System_String_o **)&(__this_05->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar45 = (MethodInfo *)0x0;
                        bVar28 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pSVar39,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar28 == '\0') {
                          pUVar41 = *(UnityEngine_Object_o **)&(__this_05->_2).token;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar51 = (Il2CppClass *)0x0;
                          bVar28 = UnityEngine_Object__op_Inequality
                                             (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar28 == '\0') {
                            return extraout_XMM0_Da_11;
                          }
                          plVar33 = &TypeInfo_Object;
                          ppIVar49 = &pIStack_68;
                        }
                        else {
                          fVar55 = *(float *)&(__this_05->_2).nested_type_count;
                          fVar63 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).nested_type_count = fVar55 - fVar63;
                          fVar55 = *(float *)&(__this_05->_2).field_count;
                          fVar63 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).field_count = fVar55 - fVar63;
                          fVar55 = *(float *)&(__this_05->_2).interfaces_count;
                          fVar63 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).interfaces_count = fVar55 - fVar63;
                          UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          pIVar51 = __this_05;
                          UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                          if (lVar43 == 0) {
                            il2cpp_runtime_helper_022b2c90();
                            if (g_data_057ae3e0 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
                              il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
                              il2cpp_runtime_helper_023445d0(&"");
                              g_data_057ae3e0 = '\x01';
                            }
                            lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                            if (lVar43 != 0) {
                              pCVar52 = *(Characters_BaseUseable_o **)(lVar43 + 0xf8);
                              if (pCVar52 == (Characters_BaseUseable_o *)0x0) {
                                pUVar17 = (UnityEngine_UI_Image_o *)(pIVar51->_2).typeHierarchy;
                                if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar17,0.0,(MethodInfo *)0x0);
                                  pUVar17 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar51->_2).initializationExceptionGCHandle;
                                  if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar17,0.0,(MethodInfo *)0x0);
                                    goto label_043c3758;
                                  }
                                }
                              }
                              else {
                                fVar55 = Characters_BaseUseable__GetCooldownRatio(pCVar52,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_UI_Image_o *)(pIVar51->_2).typeHierarchy;
                                if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                  pUVar17 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar51->_2).initializationExceptionGCHandle;
                                  if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                    bVar28 = System_String__op_Inequality
                                                       (*(System_String_o **)&(pIVar51->_2).instance_size,
                                                        *(System_String_o **)&(pIVar51->_2).element_size,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar28 == '\0') {
label_043c3758:
                                      pUVar16 = (pIVar51->_2).unity_user_data;
                                    }
                                    else {
                                      puVar25 = &(pIVar51->_2).instance_size;
                                      (pIVar51->_2).instance_size = (pIVar51->_2).element_size;
                                      (pIVar51->_2).actualSize = (pIVar51->_2).native_size;
                                      il2cpp_runtime_helper_022b4080(puVar25);
                                      bVar28 = System_String__op_Inequality
                                                         (*(System_String_o **)&(pIVar51->_2).instance_size,
                                                          "",(MethodInfo *)0x0);
                                      if ((char)bVar28 == '\0') goto label_043c3758;
                                      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar39 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                                      pSVar38 = System_String__Concat_3ae5ba0
                                                          ("Icons/Specials/",*(System_String_o **)puVar25,
                                                           (MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      texture = (UnityEngine_Texture2D_o *)
                                                ApplicationManagers_ResourceManager__LoadAsset
                                                          (pSVar39,pSVar38,1,(MethodInfo *)0x0);
                                      if (texture == (UnityEngine_Texture2D_o *)0x0) {
                                        il2cpp_runtime_helper_022b2c90();
label_043c384a:
                                        il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                                        il2cpp_runtime_helper_022b2c90();
                                      }
                                      else {
                                        if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                                        iVar29 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                                           (texture,(texture->klass->vtable)._5_get_width.
                                                                    method);
                                        iVar50 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                                        auVar22._4_4_ = (float)iVar50;
                                        auVar22._0_4_ = (float)iVar29;
                                        auVar22._8_8_ = 0;
                                        pSVar39 = (System_String_o *)
                                                  UnityEngine_Sprite__Create_4e0d730
                                                            (texture,(UnityEngine_Rect_o)(auVar22 << 0x40),
                                                             (UnityEngine_Vector2_o)0x3f0000003f000000,
                                                             (MethodInfo *)0x0);
                                        pUVar17 = (pIVar51->_2).unity_user_data;
                                        if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                                        UnityEngine_UI_Image__set_sprite
                                                  (pUVar17,(UnityEngine_Sprite_o *)pSVar39,(MethodInfo *)0x0);
                                        pUVar17 = *(UnityEngine_UI_Image_o **)
                                                   &(pIVar51->_2).initializationExceptionGCHandle;
                                        if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                          UnityEngine_UI_Image__set_sprite
                                                    (pUVar17,(UnityEngine_Sprite_o *)pSVar39,(MethodInfo *)0x0
                                                    );
                                          goto label_043c3758;
                                        }
                                      }
                                      auVar66 = il2cpp_runtime_helper_022b2c90();
                                      if (auVar66._8_4_ != 1) {
                                        _Unwind_Resume(auVar66._0_8_);
                                      }
                                      pSVar39 = (System_String_o *)__cxa_begin_catch(auVar66._0_8_);
                                      cVar27 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(pSVar39->klass->_1).image);
                                      if (cVar27 == '\0') goto label_043c3956;
                                      __cxa_end_catch();
                                      pSVar39 = *(System_String_o **)puVar25;
                                      pSVar38 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                                      pSVar39 = System_String__Concat_3ae5ba0
                                                          (pSVar38,pSVar39,(MethodInfo *)0x0);
                                      lVar43 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                                      if (*(int *)(lVar43 + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0(lVar43);
                                      }
                                      UnityEngine_Debug__Log((Il2CppObject *)pSVar39,(MethodInfo *)0x0);
                                      pUVar16 = (pIVar51->_2).unity_user_data;
                                    }
                                    if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                      pSVar39 = (System_String_o *)
                                                UnityEngine_Component__get_gameObject
                                                          (pUVar16,(MethodInfo *)0x0);
                                      lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                                      if (lVar43 != 0) {
                                        if (*(long *)(lVar43 + 0xf8) == 0) {
                                          uVar30 = 0;
                                        }
                                        else {
                                          uVar30 = System_String__op_Inequality
                                                             (*(System_String_o **)
                                                               &(pIVar51->_2).instance_size,"",
                                                              (MethodInfo *)0x0);
                                        }
                                        if (pSVar39 != (System_String_o *)0x0) {
                                          UnityEngine_GameObject__SetActive
                                                    ((UnityEngine_GameObject_o *)pSVar39,uVar30 & 0xff,
                                                     (MethodInfo *)0x0);
                                          pUVar16 = *(UnityEngine_Component_o **)
                                                     &(pIVar51->_2).initializationExceptionGCHandle;
                                          if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                            pSVar39 = (System_String_o *)
                                                      UnityEngine_Component__get_gameObject
                                                                (pUVar16,(MethodInfo *)0x0);
                                            lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                                            if (lVar43 != 0) {
                                              if (*(long *)(lVar43 + 0xf8) == 0) {
                                                uVar30 = 0;
                                              }
                                              else {
                                                uVar30 = System_String__op_Inequality
                                                                   (*(System_String_o **)
                                                                     &(pIVar51->_2).instance_size,""
                                                                    ,(MethodInfo *)0x0);
                                              }
                                              if (pSVar39 != (System_String_o *)0x0) {
                                                UnityEngine_GameObject__SetActive
                                                          ((UnityEngine_GameObject_o *)pSVar39,uVar30 & 0xff,
                                                           (MethodInfo *)0x0);
                                                return extraout_XMM0_Da_13;
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
                            il2cpp_runtime_helper_022b2c90();
label_043c3956:
                            puVar40 = (undefined8 *)__cxa_allocate_exception(8);
                            *puVar40 = pSVar39->klass;
                            __cxa_throw(puVar40,&PTR_PTR_05215060,0);
                          }
                          plVar33 = *(long **)(lVar43 + 0x100);
                          if (plVar33 == (long *)0x0) {
                            return extraout_XMM0_Da_09;
                          }
                          lVar43 = *plVar33;
                          bVar4 = *(byte *)(lVar43 + 0x130);
                          bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                          if ((bVar4 < bVar6) ||
                             (*(Il2CppClass **)(*(long *)(lVar43 + 200) + -8 + (ulong)bVar6 * 8) !=
                              TypeInfo_BladeWeapon)) {
                            bVar6 = *(byte *)(TypeInfo_APGWeapon + 0x130);
                            if ((bVar6 <= bVar4) &&
                               (*(long *)(*(long *)(lVar43 + 200) + -8 + (long)(ulong)bVar6 * 8) ==
                                TypeInfo_APGWeapon)) {
                              UI_HUDBottomHandler__UpdateAPG
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return extraout_XMM0_Da_12;
                            }
                            pIVar51 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
                            if ((bVar4 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
                               (*(long *)(*(long *)(lVar43 + 200) + -8 + (long)pIVar51 * 8) != TypeInfo_AHSSWeapon))
                            {
                              bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (bVar4 < bVar6) {
                                return extraout_XMM0_Da_09;
                              }
                              if (*(Il2CppClass **)(*(long *)(lVar43 + 200) + -8 + (long)(ulong)bVar6 * 8) !=
                                  TypeInfo_ThunderspearWeapon) {
                                return extraout_XMM0_Da_09;
                              }
                              UI_HUDBottomHandler__UpdateTS
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return extraout_XMM0_Da_10;
                            }
                            plVar33 = &TypeInfo_Object;
                            ppIVar48 = &pIStack_68;
                          }
                          else {
                            if (g_data_057ae3e1 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                              il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
                              g_data_057ae3e1 = '\x01';
                            }
                            lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                            if ((lVar43 == 0) ||
                               (plVar44 = *(long **)(lVar43 + 0x100),
                               (Il2CppClass *)plVar44 == (Il2CppClass *)0x0)) goto label_043c45cd;
                            pIVar51 = (((Il2CppClass *)plVar44)->_1).image;
                            bVar4 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                            if ((bVar4 <= (pIVar51->_2).naturalAligment) &&
                               ((pIVar51->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BladeWeapon)) {
                              pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                              if (pUVar16 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
                              fVar55 = *(float *)&(((Il2CppClass *)plVar44)->_1).element_class /
                                       *(float *)&(((Il2CppClass *)plVar44)->_1).this_arg.field_0xc;
                              pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0);
                              if (pUVar36 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
                              bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                              if ((char)bVar28 != '\0') {
                                pUVar17 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar13 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar13,fVar55,(MethodInfo *)0x0);
                                UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[2].methodPtr;
                                if (fVar55 <= 0.25) {
                                  if (UNRECOVERED_JUMPTABLE_00 == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,UNRECOVERED_JUMPTABLE_00,
                                             *(undefined8 *)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2b0));
                                  pMVar45 = __this_05->vtable[2].method;
                                  if (pMVar45 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar45->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,pMVar45,*(undefined8 *)(pMVar45->methodPointer + 0x2b0));
                                  UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[3].methodPtr;
                                  if (UNRECOVERED_JUMPTABLE_00 == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar59 = SUB84((__this_05->_1).declaringType,0);
                                }
                                else {
                                  if (UNRECOVERED_JUMPTABLE_00 == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             UNRECOVERED_JUMPTABLE_00,
                                             *(undefined8 *)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2b0));
                                  pMVar45 = __this_05->vtable[2].method;
                                  if (pMVar45 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar45->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             pMVar45,*(undefined8 *)(pMVar45->methodPointer + 0x2b0));
                                  UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[3].methodPtr;
                                  if (UNRECOVERED_JUMPTABLE_00 == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar59 = SUB84((__this_05->_1).fields,0);
                                }
                                (**(code **)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2a8))(uVar59);
                              }
                              if (0.0 < fVar55) {
label_043c40d5:
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                fVar63 = extraout_XMM0_Da_14;
                                if (((char)bVar28 != '\0') ||
                                   (fVar63 = 0.0, 0.0 < *(float *)&(__this_05->_2).nested_type_count))
                                goto label_043c42f1;
                                pMVar45 = __this_05->vtable[3].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                fVar63 = 0.0;
                                if (fVar55 <= 0.0) goto label_043c42f1;
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pMVar45 = __this_05->vtable[2].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar13 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar13,fVar55,(MethodInfo *)0x0);
                                pMVar45 = __this_05->vtable[5].method;
                                fVar63 = extraout_XMM0_Da_15;
                              }
                              else {
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                if ((char)bVar28 != '\0') goto label_043c40d5;
                                pMVar45 = __this_05->vtable[3].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                if ((char)bVar28 != '\0') goto label_043c40d5;
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar37 = (UnityEngine_Animator_o *)
                                              UnityEngine_Component__GetComponent_object_
                                                        (pUVar16,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                                   pUVar37 == (UnityEngine_Animator_o *)0x0)) goto label_043c45cd;
                                UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                                pUVar16 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar16 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                fVar63 = extraout_XMM0_Da_16;
label_043c42f1:
                                pMVar45 = __this_05->vtable[5].method;
                              }
                              if (pMVar45 != (MethodInfo *)0x0) {
                                iVar29 = *(int *)&pMVar45->name;
                                iVar50 = *(int *)&(((Il2CppClass *)plVar44)->_1).castClass;
                                if (iVar50 < iVar29) {
                                  if (iVar29 - iVar50 < 1) {
                                    return fVar63;
                                  }
                                  iVar50 = 0;
                                  do {
                                    pUVar41 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        ((System_Collections_Generic_List_object__o *)pMVar45,
                                                         0,MethodInfo_GameObject_get_Item);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
                                    pSVar14 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    pUVar41 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        (pSVar14,0,MethodInfo_GameObject_get_Item);
                                    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
                                    pMVar45 = __this_05->vtable[5].method;
                                    if (pMVar45 == (MethodInfo *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt
                                              ((System_Collections_Generic_List_object__o *)pMVar45,0,
                                               MethodInfo_Void_RemoveAt);
                                    pSVar14 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt(pSVar14,0,MethodInfo_Void_RemoveAt);
                                    iVar50 = iVar50 + 1;
                                    if (iVar29 - *(int *)&(((Il2CppClass *)plVar44)->_1).castClass <= iVar50)
                                    {
                                      return extraout_XMM0_Da_17;
                                    }
                                    pMVar45 = __this_05->vtable[5].method;
                                  } while (pMVar45 != (MethodInfo *)0x0);
                                }
                                else {
                                  if (iVar50 <= iVar29) {
                                    return fVar63;
                                  }
                                  if (iVar50 - iVar29 < 1) {
                                    return fVar63;
                                  }
                                  pMVar53 = __this_05->vtable[4].method;
                                  if (pMVar53 != (MethodInfo *)0x0) {
                                    iVar50 = 0;
                                    do {
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)pMVar53,
                                                           (MethodInfo *)0x0);
                                      pUVar36 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      lVar43 = MethodInfo_Void_Add;
                                      if (pMVar45 == (MethodInfo *)0x0) break;
                                      puVar26 = (undefined1 *)((long)&pMVar45->name + 4);
                                      *(int *)puVar26 = *(int *)puVar26 + 1;
                                      pIVar15 = pMVar45->invoker_method;
                                      if (pIVar15 == (InvokerMethod)0x0) break;
                                      uVar30 = *(uint *)&pMVar45->name;
                                      if (uVar30 < *(uint *)(pIVar15 + 0x18)) {
                                        *(uint *)&pMVar45->name = uVar30 + 1;
                                        *(UnityEngine_GameObject_o **)(pIVar15 + (long)(int)uVar30 * 8 + 0x20)
                                             = pUVar36;
                                        il2cpp_runtime_helper_022b4080(pIVar15 + (long)(int)uVar30 * 8 + 0x20);
                                        pUVar36 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pMVar45,
                                                   (Il2CppObject *)pUVar36,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar43 + 0x20) + 0xc0) + 0x70));
                                        pUVar36 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      if (pUVar36 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          (pUVar36,(MethodInfo *)0x0);
                                      pUVar36 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      if (pUVar36 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          (pUVar36,(MethodInfo *)0x0);
                                      UVar64 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                         ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),
                                                          (MethodInfo *)0x0);
                                      if (pUVar35 == (UnityEngine_Transform_o *)0x0) break;
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar35,UVar64,(MethodInfo *)0x0);
                                      lVar43 = MethodInfo_Void_Add;
                                      pSVar14 = (System_Collections_Generic_List_object__o *)
                                                __this_05->vtable[6].methodPtr;
                                      if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
                                      piVar1 = &(pSVar14->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pSVar8 = (pSVar14->fields)._items;
                                      if (pSVar8 == (System_Object_array *)0x0) break;
                                      uVar30 = (pSVar14->fields)._size;
                                      if (uVar30 < (uint)pSVar8->max_length) {
                                        (pSVar14->fields)._size = uVar30 + 1;
                                        pSVar8->m_Items[(int)uVar30] = (Il2CppObject *)pUVar36;
                                        fVar55 = (float)il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar30);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (pSVar14,(Il2CppObject *)pUVar36,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar43 + 0x20) + 0xc0) + 0x70));
                                        fVar55 = extraout_XMM0_Da_18;
                                      }
                                      iVar50 = iVar50 + 1;
                                      if (*(int *)&(((Il2CppClass *)plVar44)->_1).castClass - iVar29 <= iVar50
                                         ) {
                                        return fVar55;
                                      }
                                      pMVar53 = __this_05->vtable[4].method;
                                      pMVar45 = __this_05->vtable[5].method;
                                    } while (pMVar53 != (MethodInfo *)0x0);
                                  }
                                }
                              }
label_043c45cd:
                              fVar55 = (float)il2cpp_runtime_helper_022b2c90();
                              return fVar55;
                            }
                            pIVar51 = TypeInfo_BladeWeapon;
                            plVar33 = plVar44;
                            il2cpp_runtime_helper_022b2fd0();
                            uStack_d0 = 1;
                            ppIVar48 = (Il2CppClass **)auStack_e8;
                            pIStack_d8 = pIVar46;
                            if (g_data_057ae3e2 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                              g_data_057ae3e2 = '\x01';
                            }
                            lVar43 = *(long *)&(((Il2CppClass *)plVar33)->_2).static_fields_size;
                            if ((lVar43 == 0) ||
                               (__this_04 = *(Il2CppClass **)(lVar43 + 0x100), __this_04 == (Il2CppClass *)0x0
                               )) {
label_043c4ab9:
                              il2cpp_runtime_helper_022b2c90();
                            }
                            else {
                              pvVar12 = (__this_04->_1).image;
                              bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                              pIVar51 = TypeInfo_AmmoWeapon;
                              if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
                                 (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + ((ulong)bVar4 - 1) * 8)
                                  == TypeInfo_AmmoWeapon)) {
                                iVar29 = *(int *)((long)&(__this_04->_1).element_class + 4);
                                iVar50 = *(int *)&(__this_04->_1).castClass;
                                if (iVar29 < 1) {
                                  if (iVar50 == -1) {
                                    fVar55 = 1.0;
                                    pUVar17 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                  else {
                                    fVar55 = 0.0;
                                    pUVar17 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                }
                                else {
                                  fVar55 = (float)iVar50 / (float)iVar29;
                                  pUVar17 = (UnityEngine_UI_Image_o *)
                                            ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                }
                                pIVar32 = (Il2CppClass *)0x1;
                                if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)((Il2CppClass *)plVar33)->vtable[6].method;
                                  pIVar51 = (Il2CppClass *)0x0;
                                  fStack_dc = fVar55;
                                  UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                  pIVar32 = pIVar54;
                                  if (pIVar46 != (Il2CppClass *)0x0) {
                                    pIVar51 = (Il2CppClass *)0x0;
                                    UnityEngine_UI_Image__set_fillAmount
                                              ((UnityEngine_UI_Image_o *)pIVar46,fStack_dc,(MethodInfo *)0x0);
                                    if (fStack_dc <= 0.0) {
                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (pMVar45 != (MethodInfo *)0x0) {
                                        UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                        pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                        (**(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                        UNRECOVERED_JUMPTABLE_00 =
                                             ((Il2CppClass *)plVar33)->vtable[10].methodPtr;
                                        if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                          lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                          pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                          (**(code **)(lVar43 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                          pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar59 = SUB84((((Il2CppClass *)plVar33)->_1).declaringType,0);
                                            goto label_043c4886;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (fStack_dc <= 0.5) {
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                          (**(code **)(pMVar45->methodPointer + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                          UNRECOVERED_JUMPTABLE_00 =
                                               ((Il2CppClass *)plVar33)->vtable[10].methodPtr;
                                          if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                            lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            (**(code **)(lVar43 + 0x2a8))
                                                      ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                            pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              uVar59 = SUB84((((Il2CppClass *)plVar33)->_1).this_arg.data,0);
                                              goto label_043c4886;
                                            }
                                          }
                                        }
                                      }
                                      else if (pMVar45 != (MethodInfo *)0x0) {
                                        pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                        (**(code **)(pMVar45->methodPointer + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                        UNRECOVERED_JUMPTABLE_00 =
                                             ((Il2CppClass *)plVar33)->vtable[10].methodPtr;
                                        if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                          lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                          pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                          (**(code **)(lVar43 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                          pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar59 = SUB84((((Il2CppClass *)plVar33)->_1).fields,0);
label_043c4886:
                                            (**(code **)(pMVar45->methodPointer + 0x2a8))(uVar59);
                                            unaff_R13 = (Il2CppClass *)
                                                        ((Il2CppClass *)plVar33)->vtable[7].method;
                                            pIVar46 = (Il2CppClass *)
                                                      ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                            __this_04 = (Il2CppClass *)&(__this_04->_1).element_class;
                                            pIVar51 = (Il2CppClass *)0x0;
                                            pIVar54 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)__this_04,(MethodInfo *)0x0);
                                            if ((pIVar46 != (Il2CppClass *)0x0) &&
                                               (pIVar32 = (pIVar46->_1).image, pIVar51 = pIVar54,
                                               (*pIVar32->vtable[0x4b].methodPtr)
                                                         (pIVar46,pIVar54,pIVar32->vtable[0x4b].method),
                                               pIVar32 = pIVar54, unaff_R13 != (Il2CppClass *)0x0)) {
                                              UNRECOVERED_JUMPTABLE_00 = (unaff_R13->_1).image;
                                              pIVar51 = pIVar54;
                                              (**(code **)(UNRECOVERED_JUMPTABLE_00 + 0x5e8))
                                                        (unaff_R13,pIVar54,
                                                         *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x5f0));
                                              pMVar45 = ((Il2CppClass *)plVar33)->vtable[7].method;
                                              if (*(int *)__this_04 == 0) {
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                  (**(code **)(pMVar45->methodPointer + 0x2a8))(0x3f800000);
                                                  UNRECOVERED_JUMPTABLE_00 =
                                                       ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                  if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                    lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                                    pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                    (**(code **)(lVar43 + 0x2a8))(0x3f800000);
                                                    pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                    goto joined_r0x043c4a06;
                                                  }
                                                }
                                              }
                                              else if (pMVar45 != (MethodInfo *)0x0) {
                                                pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                (**(code **)(pMVar45->methodPointer + 0x2a8))();
                                                UNRECOVERED_JUMPTABLE_00 =
                                                     ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                  lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                                  pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                  (**(code **)(lVar43 + 0x2a8))();
                                                  pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
joined_r0x043c4a06:
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar45,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar36,(MethodInfo *)0x0);
                                                      fVar55 = extraout_XMM0_Da_19;
                                                      if ((((char)bVar28 != '\0') ||
                                                          (fVar55 = 0.0,
                                                          0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                           nested_type_count)) ||
                                                         (0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                           interfaces_count)) {
                                                        return fVar55;
                                                      }
                                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                      if (pMVar45 != (MethodInfo *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        pUVar36 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar45,(MethodInfo *)0x0);
                                                        if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x1;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar36,1,(MethodInfo *)0x0);
                                                          pUVar16 = (UnityEngine_Component_o *)
                                                                    ((Il2CppClass *)plVar33)->vtable[10].
                                                                    methodPtr;
                                                          if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            pUVar36 = UnityEngine_Component__get_gameObject
                                                                                (pUVar16,(MethodInfo *)0x0);
                                                            if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar36,0,(MethodInfo *)0x0);
                                                              pUVar16 = (UnityEngine_Component_o *)
                                                                        ((Il2CppClass *)plVar33)->vtable[9].
                                                                        methodPtr;
                                                              if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar16,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,0,(MethodInfo *)0x0);
                                                         pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             return extraout_XMM0_Da_20;
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
                                goto label_043c4ab9;
                              }
                            }
                            __this_05 = __this_04;
                            lVar43 = il2cpp_runtime_helper_022b2fd0();
                          }
                          *(long **)((long)ppIVar48 + -8) = plVar44;
                          *(long **)((long)ppIVar48 + -0x10) = plVar33;
                          *(Il2CppClass **)((long)ppIVar48 + -0x18) = __this_04;
                          *(Il2CppClass **)((long)ppIVar48 + -0x20) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar48 + -0x28) = pIVar32;
                          *(Il2CppClass **)((long)ppIVar48 + -0x30) = pIVar46;
                          *(long *)((long)ppIVar48 + -0x38) = lVar43;
                          if (g_data_057ae3e3 == '\0') {
                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4af3;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                            g_data_057ae3e3 = '\x01';
                          }
                          lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                          if ((lVar43 == 0) ||
                             (__this_04 = *(Il2CppClass **)(lVar43 + 0x100), __this_04 == (Il2CppClass *)0x0))
                          {
label_043c52c4:
                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c52c9;
                            il2cpp_runtime_helper_022b2c90();
                            pIVar32 = __this_04;
                          }
                          else {
                            pvVar12 = (__this_04->_1).image;
                            bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                            pIVar51 = TypeInfo_AmmoWeapon;
                            pIVar32 = __this_04;
                            if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
                               (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + ((ulong)bVar4 - 1) * 8) ==
                                TypeInfo_AmmoWeapon)) {
                              pIVar46 = (Il2CppClass *)__this_05->vtable[7].method;
                              UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[8].methodPtr;
                              plVar33 = (long *)&(__this_04->_1).element_class;
                              pIVar51 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4b6b;
                              pIVar32 = (Il2CppClass *)
                                        System_Int32__ToString((int32_t)plVar33,(MethodInfo *)0x0);
                              if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                uVar58 = *(undefined8 *)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x5f0);
                                vtableDispatch = *(code **)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x5e8);
                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4b8e;
                                pIVar51 = pIVar32;
                                (*vtableDispatch)(UNRECOVERED_JUMPTABLE_00,pIVar32,uVar58);
                                unaff_R13 = pIVar32;
                                if (pIVar46 != (Il2CppClass *)0x0) {
                                  pIVar54 = (pIVar46->_1).image;
                                  pMVar45 = pIVar54->vtable[0x4b].method;
                                  UNRECOVERED_JUMPTABLE_00 = pIVar54->vtable[0x4b].methodPtr;
                                  *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4bad;
                                  pIVar51 = pIVar32;
                                  (*UNRECOVERED_JUMPTABLE_00)(pIVar46,pIVar32,pMVar45);
                                  pMVar45 = __this_05->vtable[7].method;
                                  if (*(int *)plVar33 == 0) {
                                    if (pMVar45 != (MethodInfo *)0x0) {
                                      pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                      vtableDispatch = *(code **)(pMVar45->methodPointer + 0x2a8);
                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4cfb;
                                      (*vtableDispatch)(0x3f800000);
                                      UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[8].methodPtr;
                                      if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                        lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                        pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                        vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                        *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4d2b;
                                        (*vtableDispatch)(0x3f800000);
                                        iVar29 = *(int *)&(__this_04->_1).castClass;
                                        if (iVar29 != 1) goto label_043c4c1a;
label_043c4d38:
                                        pMVar45 = __this_05->vtable[0xb].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar46 = (Il2CppClass *)&(__this_05->_1).this_arg;
                                          pIVar23 = (Il2CppType *)&(__this_05->_1).declaringType;
                                          if (0 < *(int *)plVar33) {
                                            pIVar23 = (Il2CppType *)pIVar46;
                                          }
                                          pvVar12 = pIVar23->data;
                                          UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                          vtableDispatch = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8)
                                          ;
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4d81;
                                          (*vtableDispatch)((int)pvVar12);
                                          UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xc].methodPtr;
                                          if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                            pvVar12 = (__this_05->_1).this_arg.data;
                                            lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4db0;
                                            (*vtableDispatch)((int)pvVar12);
                                            pMVar45 = __this_05->vtable[10].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pvVar12 = (__this_05->_1).this_arg.data;
                                              UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                              pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                              vtableDispatch =
                                                   *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8);
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4ddf;
                                              (*vtableDispatch)((int)pvVar12);
                                              UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xb].methodPtr;
                                              if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                pvVar12 = (__this_05->_1).this_arg.data;
                                                lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                                pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e0e;
                                                (*vtableDispatch)((int)pvVar12);
                                                pMVar45 = __this_05->vtable[0xd].method;
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pvVar12 = (__this_05->_1).this_arg.data;
                                                  UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                                  pIVar51 = *(Il2CppClass **)
                                                             (UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                                  vtableDispatch =
                                                       *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e3d;
                                                  (*vtableDispatch)((int)pvVar12);
                                                  UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xe].methodPtr;
                                                  if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                    uVar59 = SUB84(((Il2CppType *)pIVar46)->data,0);
                                                    goto label_043c4eb3;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (pMVar45 != (MethodInfo *)0x0) {
                                    pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                    vtableDispatch = *(code **)(pMVar45->methodPointer + 0x2a8);
                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4be2;
                                    (*vtableDispatch)();
                                    UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[8].methodPtr;
                                    if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                      lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                      pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                      vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c0d;
                                      (*vtableDispatch)();
                                      iVar29 = *(int *)&(__this_04->_1).castClass;
                                      if (iVar29 == 1) goto label_043c4d38;
label_043c4c1a:
                                      if (iVar29 == 0) {
                                        pMVar45 = __this_05->vtable[0xb].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar32 = (__this_05->_1).declaringType;
                                          UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                          vtableDispatch = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8)
                                          ;
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c51;
                                          (*vtableDispatch)((int)pIVar32);
                                          UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xc].methodPtr;
                                          if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                            pIVar32 = (__this_05->_1).declaringType;
                                            lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c80;
                                            (*vtableDispatch)((int)pIVar32);
                                            pMVar45 = __this_05->vtable[0xd].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar32 = (__this_05->_1).declaringType;
                                              UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                              pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                              vtableDispatch =
                                                   *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8);
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4caf;
                                              (*vtableDispatch)((int)pIVar32);
                                              UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xe].methodPtr;
                                              if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                uVar59 = SUB84((__this_05->_1).declaringType,0);
                                                goto label_043c4eb3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_05->vtable[10].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pvVar12 = (__this_05->_1).fields;
                                          UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                          vtableDispatch = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8)
                                          ;
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e8e;
                                          (*vtableDispatch)((int)pvVar12);
                                          UNRECOVERED_JUMPTABLE_00 = __this_05->vtable[0xb].methodPtr;
                                          if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                            uVar59 = SUB84((__this_05->_1).fields,0);
label_043c4eb3:
                                            pIVar51 = *(Il2CppClass **)
                                                       (*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                            vtableDispatch =
                                                 *(code **)(*(long *)UNRECOVERED_JUMPTABLE_00 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4ec3;
                                            (*vtableDispatch)(uVar59);
                                            pMVar45 = __this_05->vtable[0xb].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4edb;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar45,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4eee;
                                                bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar36,(MethodInfo *)0x0);
                                                if (((char)bVar28 == '\0') ||
                                                   (*(int *)&(__this_04->_1).castClass < 2)) {
label_043c4f56:
                                                  pUVar16 = (UnityEngine_Component_o *)
                                                            __this_05->vtable[0xc].methodPtr;
                                                  if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f6e;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        (pUVar16,(MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f81;
                                                      bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar36,(MethodInfo *)0x0);
                                                      if (((char)bVar28 == '\0') ||
                                                         (*(int *)&(__this_04->_1).castClass < 1)) {
label_043c4fe9:
                                                        pMVar45 = __this_05->vtable[0xd].method;
                                                        if (pMVar45 != (MethodInfo *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5001;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar45,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                 0x43c5014;
                                                            bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                               (pUVar36,(MethodInfo *)0x0);
                                                            if (((char)bVar28 == '\0') ||
                                                               (0.0 < *(float *)&(__this_05->_2).
                                                                                 interfaces_count)) {
label_043c5083:
                                                              pUVar16 = (UnityEngine_Component_o *)
                                                                        __this_05->vtable[0xe].methodPtr;
                                                              if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                     0x43c509b;
                                                                pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar16,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c50ae;
                                                         bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar36,(MethodInfo *)0x0);
                                                         if (((char)bVar28 == '\0') ||
                                                            (0.0 < *(float *)&(__this_05->_2).interfaces_count
                                                            )) {
label_043c511d:
                                                           pMVar45 = __this_05->vtable[0xc].method;
                                                           if (pMVar45 != (MethodInfo *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c5135;
                                                             pUVar36 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pMVar45,(MethodInfo *)0x0);
                                                             if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c5148;
                                                               bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                                  (pUVar36,(MethodInfo *)0x0);
                                                               if ((char)bVar28 == '\0') {
                                                                 pUVar16 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xd].methodPtr;
                                                                 if (pUVar16 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c5164;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar16,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5177;
                                                         bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar36,(MethodInfo *)0x0);
                                                         if ((char)bVar28 == '\0') {
                                                           return extraout_XMM0_Da_21;
                                                         }
                                                         goto label_043c517b;
                                                       }
                                                       }
                                                       }
                                                       else {
label_043c517b:
                                                         if (0.0 < *(float *)&(__this_05->_2).
                                                                              nested_type_count) {
                                                           return 0.0;
                                                         }
                                                         pMVar45 = __this_05->vtable[0xc].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c51b0
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c51c5;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pUVar16 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xd].methodPtr;
                                                             if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c51dd;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar16,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x0;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c51f2;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,0,(MethodInfo *)0x0);
                                                                 pUVar16 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xb].methodPtr;
                                                                 if (pUVar16 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c520a;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar16,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar18 = 0 < *(int *)&(__this_04->_1).castClass;
                                                         pIVar51 = (Il2CppClass *)(ulong)bVar18;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5228;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,(uint)bVar18,(MethodInfo *)0x0);
                                                         pMVar45 = __this_05->vtable[10].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5240
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar18 = 1 < *(int *)&(__this_04->_1).castClass;
                                                             pIVar51 = (Il2CppClass *)(ulong)bVar18;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c525a;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,(uint)bVar18,(MethodInfo *)0x0
                                                                       );
                                                             pUVar16 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c526e;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar16,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 bVar18 = *(int *)&(__this_04->_1).castClass <
                                                                          1;
                                                                 pIVar51 = (Il2CppClass *)(ulong)bVar18;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c5288;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,(uint)bVar18,
                                                                            (MethodInfo *)0x0);
                                                                 pMVar45 = __this_05->vtable[0xb].method;
                                                                 if (pMVar45 != (MethodInfo *)0x0) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c529c;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar45,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,(uint)(*(int *)&(__this_04->_1).
                                                                                            castClass < 2),
                                                                    (MethodInfo *)0x0);
                                                         return extraout_XMM0_Da_22;
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
                                                       else {
                                                         pUVar16 = (UnityEngine_Component_o *)
                                                                   __this_05->vtable[0xe].methodPtr;
                                                         if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c50d8
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               (pUVar16,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c50ed;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pUVar16 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c5105;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar16,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c511d;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,1,(MethodInfo *)0x0);
                                                                 goto label_043c511d;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       else {
                                                         pMVar45 = __this_05->vtable[0xd].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c503e
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c5053;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pMVar45 = __this_05->vtable[0xb].method;
                                                             if (pMVar45 != (MethodInfo *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c506b;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pMVar45,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c5083;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,1,(MethodInfo *)0x0);
                                                                 goto label_043c5083;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      else {
                                                        pUVar16 = (UnityEngine_Component_o *)
                                                                  __this_05->vtable[0xc].methodPtr;
                                                        if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4fa4;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              (pUVar16,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                 0x43c4fb9;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,0,(MethodInfo *)0x0);
                                                            pUVar16 = (UnityEngine_Component_o *)
                                                                      __this_05->vtable[0xb].methodPtr;
                                                            if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                   0x43c4fd1;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar16,(MethodInfo *)0x0);
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar51 = (Il2CppClass *)0x1;
                                                                *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                     0x43c4fe9;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,1,(MethodInfo *)0x0);
                                                                goto label_043c4fe9;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  pMVar45 = __this_05->vtable[0xb].method;
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f11;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar45,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f26;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar36,0,(MethodInfo *)0x0);
                                                      pMVar45 = __this_05->vtable[10].method;
                                                      if (pMVar45 != (MethodInfo *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f3e;
                                                        pUVar36 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar45,(MethodInfo *)0x0);
                                                        if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x1;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f56;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar36,1,(MethodInfo *)0x0);
                                                          goto label_043c4f56;
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
                              goto label_043c52c4;
                            }
                          }
                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c52d1;
                          __this_04 = pIVar32;
                          il2cpp_runtime_helper_022b2fd0();
                          *(long **)((long)ppIVar48 + -0x40) = plVar33;
                          *(Il2CppClass **)((long)ppIVar48 + -0x48) = pIVar32;
                          *(Il2CppClass **)((long)ppIVar48 + -0x50) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar48 + -0x58) = __this_05;
                          *(Il2CppClass **)((long)ppIVar48 + -0x60) = pIVar46;
                          ppIVar49 = (Il2CppClass **)((long)ppIVar48 + -0x70);
                          if (g_data_057ae3e4 == '\0') {
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5305;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5311;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c531d;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5329;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                            g_data_057ae3e4 = '\x01';
                          }
                          lVar43 = *(long *)&(__this_04->_2).static_fields_size;
                          if (lVar43 == 0) {
label_043c5986:
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c598b;
                            il2cpp_runtime_helper_022b2c90();
                          }
                          else {
                            plVar33 = *(long **)(lVar43 + 0x100);
                            if ((Il2CppClass *)plVar33 == (Il2CppClass *)0x0) {
label_043c537e:
                              lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              if ((lVar43 != 0) &&
                                 (((lVar43 = *(long *)(lVar43 + 0x58), lVar43 != 0 &&
                                   (lVar43 = *(long *)(lVar43 + 0x48), lVar43 != 0)) &&
                                  ((Il2CppClass *)plVar33 != (Il2CppClass *)0x0)))) {
                                if (*(char *)(lVar43 + 0x11) == '\0') {
                                  iVar29 = *(int *)((long)&(((Il2CppClass *)plVar33)->_1).element_class + 4);
                                  uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar33)->_1).castClass;
                                  if (iVar29 < 1) {
                                    if (uVar7 == 0xffffffff) {
                                      fVar55 = 1.0;
                                      pUVar17 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                    else {
                                      fVar55 = 0.0;
                                      pUVar17 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                  }
                                  else {
                                    fVar55 = (float)(int)uVar7 / (float)iVar29;
                                    pUVar17 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                  }
                                  if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)__this_04->vtable[6].method;
                                    pIVar51 = (Il2CppClass *)0x0;
                                    *(float *)((long)ppIVar48 + -100) = fVar55;
                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5631;
                                    UnityEngine_UI_Image__set_fillAmount(pUVar17,fVar55,(MethodInfo *)0x0);
                                    if (pIVar46 != (Il2CppClass *)0x0) {
                                      pIVar51 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c564a;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar46,
                                                 *(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                      if (*(float *)((long)ppIVar48 + -100) <= 0.0) {
                                        pMVar45 = __this_04->vtable[0xe].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar32 = (__this_04->_1).declaringType;
                                          UNRECOVERED_JUMPTABLE_00 = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(UNRECOVERED_JUMPTABLE_00 + 0x2b0);
                                          vtableDispatch = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x2a8)
                                          ;
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c56ee;
                                          (*vtableDispatch)((int)pIVar32);
                                          pMVar45 = __this_04->vtable[0xf].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar59 = SUB84((__this_04->_1).declaringType,0);
                                            goto label_043c574d;
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_04->vtable[0xe].method;
                                        if (*(float *)((long)ppIVar48 + -100) <= 0.5) {
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            pvVar12 = (__this_04->_1).this_arg.data;
                                            pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                            vtableDispatch = *(code **)(pMVar45->methodPointer + 0x2a8)
                                            ;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5731;
                                            (*vtableDispatch)((int)pvVar12);
                                            pMVar45 = __this_04->vtable[0xf].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              uVar59 = SUB84((__this_04->_1).this_arg.data,0);
                                              goto label_043c574d;
                                            }
                                          }
                                        }
                                        else if (pMVar45 != (MethodInfo *)0x0) {
                                          pvVar12 = (__this_04->_1).fields;
                                          pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                          vtableDispatch = *(code **)(pMVar45->methodPointer + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c569b;
                                          (*vtableDispatch)((int)pvVar12);
                                          pMVar45 = __this_04->vtable[0xf].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar59 = SUB84((__this_04->_1).fields,0);
label_043c574d:
                                            vtableDispatch = *(code **)(pMVar45->methodPointer + 0x2a8)
                                            ;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c575d;
                                            (*vtableDispatch)(uVar59);
                                            pMVar45 = __this_04->vtable[7].method;
                                            pIVar46 = (Il2CppClass *)__this_04->vtable[8].methodPtr;
                                            plVar33 = (long *)&(((Il2CppClass *)plVar33)->_1).element_class;
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5779;
                                            pIVar32 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)plVar33,(MethodInfo *)0x0);
                                            if (pIVar46 != (Il2CppClass *)0x0) {
                                              pIVar54 = (pIVar46->_1).image;
                                              pMVar53 = pIVar54->vtable[0x4b].method;
                                              UNRECOVERED_JUMPTABLE_00 = pIVar54->vtable[0x4b].methodPtr;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c579b;
                                              pIVar51 = pIVar32;
                                              (*UNRECOVERED_JUMPTABLE_00)(pIVar46,pIVar32,pMVar53);
                                              if (pMVar45 != (MethodInfo *)0x0) {
                                                uVar58 = *(undefined8 *)(pMVar45->methodPointer + 0x5f0);
                                                vtableDispatch =
                                                     *(code **)(pMVar45->methodPointer + 0x5e8);
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c57bb;
                                                (*vtableDispatch)(pMVar45,pIVar32,uVar58);
                                                pMVar45 = __this_04->vtable[7].method;
                                                pIVar51 = pIVar32;
                                                if (*(int *)plVar33 == 0) {
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = *(Il2CppClass **)
                                                               (pMVar45->methodPointer + 0x2b0);
                                                    vtableDispatch =
                                                         *(code **)(pMVar45->methodPointer + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5894;
                                                    (*vtableDispatch)(0x3f800000);
                                                    UNRECOVERED_JUMPTABLE_00 = __this_04->vtable[8].methodPtr;
                                                    if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0)
                                                    {
                                                      lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                                      pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                      vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c58c3;
                                                      (*vtableDispatch)(0x3f800000);
                                                      pMVar45 = __this_04->vtable[0xe].method;
                                                      goto joined_r0x043c58cd;
                                                    }
                                                  }
                                                }
                                                else if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                  vtableDispatch =
                                                       *(code **)(pMVar45->methodPointer + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c57ef;
                                                  (*vtableDispatch)();
                                                  UNRECOVERED_JUMPTABLE_00 = __this_04->vtable[8].methodPtr;
                                                  if (UNRECOVERED_JUMPTABLE_00 != (Il2CppMethodPointer)0x0) {
                                                    lVar43 = *(long *)UNRECOVERED_JUMPTABLE_00;
                                                    pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                    vtableDispatch = *(code **)(lVar43 + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5819;
                                                    (*vtableDispatch)();
                                                    pMVar45 = __this_04->vtable[0xe].method;
joined_r0x043c58cd:
                                                    if (pMVar45 != (MethodInfo *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5830;
                                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pMVar45,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5843;
                                                        bVar28 = UnityEngine_GameObject__get_activeSelf
                                                                           (pUVar36,(MethodInfo *)0x0);
                                                        if ((char)bVar28 != '\0') {
                                                          return extraout_XMM0_Da_25;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).nested_type_count
                                                           ) {
                                                          return 0.0;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).interfaces_count)
                                                        {
                                                          return 0.0;
                                                        }
                                                        pMVar45 = __this_04->vtable[0xe].method;
                                                        if (pMVar45 != (MethodInfo *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c58ef;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar45,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x1;
                                                            *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                 0x43c5907;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,1,(MethodInfo *)0x0);
                                                            pUVar16 = (UnityEngine_Component_o *)
                                                                      __this_04->vtable[0xf].methodPtr;
                                                            if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                   0x43c591a;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar16,(MethodInfo *)0x0);
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                     0x43c592b;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,0,(MethodInfo *)0x0);
                                                                pMVar45 = __this_04->vtable[0xf].method;
                                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                                  pIVar51 = (Il2CppClass *)0x0;
                                                                  *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                       0x43c593e;
                                                                  pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar45,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c594f;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,0,(MethodInfo *)0x0);
                                                         pMVar45 = __this_04->vtable[6].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5962
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x1;
                                                             *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                  0x43c5976;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,1,(MethodInfo *)0x0);
                                                             pUVar16 = (UnityEngine_Component_o *)
                                                                       __this_04->vtable[7].methodPtr;
                                                             goto joined_r0x043c5980;
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
                                else {
                                  pIVar51 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c53d3;
                                  fVar55 = Characters_BaseUseable__GetCooldownRatio
                                                     ((Characters_BaseUseable_o *)plVar33,(MethodInfo *)0x0);
                                  *(float *)((long)ppIVar48 + -100) = fVar55;
                                  pUVar17 = (UnityEngine_UI_Image_o *)__this_04->vtable[0x11].method;
                                  if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)__this_04->vtable[0x11].methodPtr;
                                    pIVar51 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c53fd;
                                    UnityEngine_UI_Image__set_fillAmount
                                              (pUVar17,*(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                    if (pIVar46 != (Il2CppClass *)0x0) {
                                      pIVar51 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5416;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar46,
                                                 *(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                      if (((bool)*(char *)&__this_04->vtable[0x12].methodPtr ==
                                           (*(float *)((long)ppIVar48 + -100) <= 1.0 &&
                                           *(float *)((long)ppIVar48 + -100) != 1.0)) ||
                                         (bVar18 = *(float *)((long)ppIVar48 + -100) != 1.0,
                                         bVar19 = *(float *)((long)ppIVar48 + -100) <= 1.0,
                                         *(bool *)&__this_04->vtable[0x12].methodPtr = bVar19 && bVar18,
                                         bVar19 && bVar18)) {
label_043c5518:
                                        pUVar16 = (UnityEngine_Component_o *)__this_04->vtable[0x10].methodPtr
                                        ;
                                        if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                          pIVar51 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c552f;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              (pUVar16,(MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5542;
                                            bVar28 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar36,(MethodInfo *)0x0);
                                            fVar55 = extraout_XMM0_Da_23;
                                            if (((char)bVar28 != '\0') ||
                                               (fVar55 = 0.0,
                                               0.0 < *(float *)&(__this_04->_2).nested_type_count)) {
                                              return fVar55;
                                            }
                                            pMVar45 = __this_04->vtable[0x10].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5572;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar45,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5587;
                                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar16 = (UnityEngine_Component_o *)
                                                          __this_04->vtable[0x10].methodPtr;
joined_r0x043c5980:
                                                if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar51 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c559e;
                                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                                      (pUVar16,(MethodInfo *)0x0);
                                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar36,1,(MethodInfo *)0x0);
                                                    return extraout_XMM0_Da_24;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_04->vtable[0x10].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar51 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5462;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)pMVar45,
                                                               (MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5475;
                                            bVar28 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar36,(MethodInfo *)0x0);
                                            if ((char)bVar28 != '\0') goto label_043c5518;
                                            pUVar16 = (UnityEngine_Component_o *)
                                                      __this_04->vtable[0x10].methodPtr;
                                            if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5494;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  (pUVar16,(MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54a9;
                                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0)
                                                ;
                                                pMVar45 = __this_04->vtable[0x10].method;
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54c0;
                                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pMVar45,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54d8;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar36,1,(MethodInfo *)0x0);
                                                    pMVar45 = __this_04->vtable[0x10].method;
                                                    if (pMVar45 != (MethodInfo *)0x0) {
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54f7;
                                                      pIVar51 = MethodInfo_Animator_GetComponent_Animator;
                                                      pUVar37 = (UnityEngine_Animator_o *)
                                                                UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pMVar45,
                                                                           (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator)
                                                      ;
                                                      if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c550d;
                                                        UnityEngine_Animator__Update
                                                                  (pUVar37,0.0,(MethodInfo *)0x0);
                                                        (__this_04->_2).nested_type_count = 0;
                                                        (__this_04->_2).vtable_count = 0x3f00;
                                                        goto label_043c5518;
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
                              goto label_043c5986;
                            }
                            UNRECOVERED_JUMPTABLE_00 = (((Il2CppClass *)plVar33)->_1).image;
                            cVar5 = (code)(TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            pIVar51 = TypeInfo_ThunderspearWeapon;
                            if (((byte)cVar5 <= (byte)UNRECOVERED_JUMPTABLE_00[0x130]) &&
                               (*(Il2CppClass **)
                                 (*(long *)(UNRECOVERED_JUMPTABLE_00 + 200) + ((ulong)(byte)cVar5 - 1) * 8) ==
                                TypeInfo_ThunderspearWeapon)) goto label_043c537e;
                          }
                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5993;
                          __this_05 = (Il2CppClass *)plVar33;
                          il2cpp_runtime_helper_022b2fd0();
                        }
                        *(Il2CppClass **)((long)ppIVar49 + -8) = pIVar46;
                        lVar43 = *(long *)&(__this_05->_2).token;
                        pIVar32 = __this_05;
                        if ((lVar43 != 0) &&
                           (pIVar32 = (Il2CppClass *)__this_05->vtable[0x12].method, pIVar46 = __this_05,
                           pIVar32 != (Il2CppClass *)0x0)) {
                          fVar63 = *(float *)(lVar43 + 0x140) / *(float *)(lVar43 + 0x134);
                          fVar55 = 1.0;
                          if (fVar63 <= 1.0) {
                            fVar55 = fVar63;
                          }
                          pIVar54 = (pIVar32->_1).image;
                          pIVar51 = (Il2CppClass *)pIVar54->vtable[0x2f].method;
                          UNRECOVERED_JUMPTABLE_00 = pIVar54->vtable[0x2f].methodPtr;
                          *(undefined8 *)((long)ppIVar49 + -0x10) = 0x43c59fb;
                          (*UNRECOVERED_JUMPTABLE_00)(-(uint)(0.0 <= fVar63) & (uint)fVar55);
                          lVar43 = *(long *)&(__this_05->_2).token;
                          if (lVar43 != 0) {
                            pIVar32 = (Il2CppClass *)__this_05->vtable[0x13].methodPtr;
                            if (*(float *)(lVar43 + 0x140) <= 1.0) {
                              if (pIVar32 != (Il2CppClass *)0x0) {
                                uVar59 = SUB84((__this_05->_1).interfaceOffsets,0);
                                uVar60 = SUB84(__this_05->static_fields,0);
                                goto label_043c5a4b;
                              }
                            }
                            else if (pIVar32 != (Il2CppClass *)0x0) {
                              uVar59 = SUB84((__this_05->_1).nestedTypes,0);
                              uVar60 = SUB84((__this_05->_1).implementedInterfaces,0);
label_043c5a4b:
                              pIVar54 = (pIVar32->_1).image;
                              UNRECOVERED_JUMPTABLE_00 = pIVar54->vtable[0x17].methodPtr;
                              fVar55 = (float)(*UNRECOVERED_JUMPTABLE_00)
                                                        (uVar59,uVar60,pIVar32,pIVar54->vtable[0x17].method,
                                                         extraout_RDX,UNRECOVERED_JUMPTABLE_00);
                              return fVar55;
                            }
                          }
                        }
                        *(undefined8 *)((long)ppIVar49 + -0x10) = 0x43c5a64;
                        il2cpp_runtime_helper_022b2c90();
                        *(long **)((long)ppIVar49 + -0x10) = plVar33;
                        *(Il2CppClass **)((long)ppIVar49 + -0x18) = __this_04;
                        *(Il2CppClass **)((long)ppIVar49 + -0x20) = pIVar46;
                        if (g_data_057ae3de == '\0') {
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5a90;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5a9c;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5aa8;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ab4;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ac0;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                          g_data_057ae3de = '\x01';
                        }
                        pIVar47 = pIVar32->rgctx_data;
                        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ae6;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5af0;
                        bVar28 = MiscExtensions__GetActive
                                           ((UnityEngine_GameObject_o *)pIVar47,(MethodInfo *)0x0);
                        fVar55 = extraout_XMM0_Da_26;
                        if ((char)bVar28 != '\0') {
                          pMVar45 = pIVar32->vtable[0x13].method;
                          if (pMVar45 == (MethodInfo *)0x0) goto label_043c5bc3;
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b1a;
                          bVar28 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              pMVar45,(Il2CppObject *)pIVar51,MethodInfo_Boolean_ContainsKey);
                          if ((char)bVar28 == '\0') {
                            if (pIVar51 == (Il2CppClass *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b61;
                            pUVar37 = (UnityEngine_Animator_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pIVar51,
                                                 (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                            pMVar45 = pIVar32->vtable[0x13].method;
                            if (pMVar45 == (MethodInfo *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b85;
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar45,
                                       (Il2CppObject *)pIVar51,(Il2CppObject *)pUVar37,MethodInfo_Void_Add);
                            pIVar47 = (Il2CppRGCTXData *)0x0;
                            if (pUVar37 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
                          }
                          else {
                            pMVar45 = pIVar32->vtable[0x13].method;
                            if (pMVar45 == (MethodInfo *)0x0) {
label_043c5bc3:
                              *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5bc8;
                              uVar58 = il2cpp_runtime_helper_022b2c90();
                              *(Il2CppClass **)((long)ppIVar49 + -0x28) = pIVar51;
                              *(Il2CppRGCTXData **)((long)ppIVar49 + -0x30) = pIVar47;
                              *(undefined8 *)((long)ppIVar49 + -0x38) = uVar58;
                              if (g_data_057ae3e5 == '\0') {
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5bec;
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5bf8;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5c04;
                                il2cpp_runtime_helper_023445d0(&"");
                                g_data_057ae3e5 = '\x01';
                              }
                              pMVar45->klass = (Il2CppClass *)0x3f0000003f800000;
                              pMVar45->return_type = (Il2CppType *)0x3f00000000000000;
                              pMVar45->parameters = (Il2CppType **)0x3f4000003f800000;
                              (pMVar45->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x3f8000003f000000;
                              pMVar45->field8_0x40 = (_union_14)0x3f800000;
                              pMVar45->token = 0;
                              pMVar45->flags = 0;
                              pMVar45->iflags = 0x3f00;
                              pMVar45->slot = 0;
                              pMVar45->parameters_count = 0x80;
                              pMVar45->bitflags = '?';
                              *(undefined4 *)&pMVar45->field_0x54 = 0x3f000000;
                              pMVar45[1].methodPointer = (Il2CppMethodPointer)0x3f8000003f000000;
                              pMVar45[1].virtualMethodPointer = (Il2CppMethodPointer)0x3f8000003f800000;
                              pMVar45[1].invoker_method = (InvokerMethod)0x3f0000003f800000;
                              pMVar45[1].name = (char *)0x3f8000003f800000;
                              pMVar45[1].klass = (Il2CppClass *)0x3f4000003f800000;
                              *(undefined4 *)&pMVar45[1].return_type = 0x3f800000;
                              *(undefined4 *)((long)&pMVar45[1].return_type + 4) = 0x3f800000;
                              *(undefined4 *)&pMVar45[1].parameters = 0x3f800000;
                              *(undefined4 *)((long)&pMVar45[1].parameters + 4) = 0x3f800000;
                              pMVar45[1].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x3e8000003f800000;
                              pMVar45[1].field8_0x40.genericMethod = (void *)0x3f8000003e800000;
                              pMVar45[1].token = 0x3f451eb8;
                              pMVar45[1].flags = 0x1eb8;
                              pMVar45[1].iflags = 0x3f45;
                              pMVar45[1].slot = 0x1eb8;
                              pMVar45[1].parameters_count = 'E';
                              pMVar45[1].bitflags = '?';
                              *(undefined4 *)&pMVar45[1].field_0x54 = 0x3f800000;
                              *(undefined4 *)&pMVar45[2].methodPointer = 0x3f451eb8;
                              *(undefined4 *)((long)&pMVar45[2].methodPointer + 4) = 0x3f000000;
                              *(undefined4 *)&pMVar45[2].virtualMethodPointer = 0x3f000000;
                              *(undefined4 *)((long)&pMVar45[2].virtualMethodPointer + 4) = 0x3f800000;
                              *(System_String_o **)&pMVar45[2].token = "";
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5ca5;
                              il2cpp_runtime_helper_022b4080(&pMVar45[2].token);
                              *(System_String_o **)&pMVar45[2].slot = "";
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cbb;
                              il2cpp_runtime_helper_022b4080(&pMVar45[2].slot);
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cca;
                              __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cdf;
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (__this_02,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                              pMVar45[7].virtualMethodPointer = (Il2CppMethodPointer)__this_02;
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cf5;
                              il2cpp_runtime_helper_022b4080(&pMVar45[7].virtualMethodPointer);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)pMVar45,(MethodInfo *)0x0);
                              return extraout_XMM0_Da_28;
                            }
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b40;
                            pUVar37 = (UnityEngine_Animator_o *)
                                      System_Collections_Generic_Dictionary_object__object___get_Item
                                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                                 pMVar45,(Il2CppObject *)pIVar51,MethodInfo_Animator_get_Item);
                            if (pUVar37 == (UnityEngine_Animator_o *)0x0) {
                              pIVar47 = (Il2CppRGCTXData *)0x0;
                              goto label_043c5bc3;
                            }
                          }
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b94;
                          fVar55 = UnityEngine_Animator__get_speed(pUVar37,(MethodInfo *)0x0);
                          if ((fVar55 != 0.0) || (NAN(fVar55))) {
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5bab;
                            UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                            UnityEngine_Animator__set_speed(pUVar37,0.0,(MethodInfo *)0x0);
                            return extraout_XMM0_Da_27;
                          }
                        }
                        return fVar55;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_042f2984;
    }
  }
label_042f2994:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adecf == '\0') {
    uStack_d0 = 0x42f29bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecf = '\x01';
  }
  uStack_d0 = 0x42f29d3;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)pIVar54,(Characters_BaseCharacter_o *)pIVar32,(MethodInfo *)0x0);
  pIVar46 = TypeInfo_Human;
  if (pIVar32 != (Il2CppClass *)0x0) {
    pvVar12 = (pIVar32->_1).image;
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + -8 + (ulong)bVar4 * 8) == TypeInfo_Human)) {
      ((_union_14 *)&(pIVar54->_1).element_class)->genericMethod = pIVar32;
      pvVar12 = (pIVar32->_1).image;
      if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + -8 + (ulong)bVar4 * 8) == pIVar46))
      goto label_042f2a2b;
    }
    uStack_d0 = 0x42f2a27;
    il2cpp_runtime_helper_022b2fd0(pIVar32);
  }
  ((_union_14 *)&(pIVar54->_1).element_class)->genericMethod = pIVar32;
label_042f2a2b:
  fVar55 = (float)il2cpp_runtime_helper_022b4080((_union_14 *)&(pIVar54->_1).element_class,pIVar32);
  return fVar55;
}


// Characters.AHSSTwinShot$$CanUse
// il2cpp: bool Characters_AHSSTwinShot__CanUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x42f1f40

bool_conflict Characters_AHSSTwinShot__CanUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  code cVar5;
  byte bVar6;
  uint32_t uVar7;
  System_Object_array *pSVar8;
  Characters_Human_o *__this_00;
  Outline_o *pOVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  Characters_BaseHitbox_o *__this_01;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  void *pvVar12;
  ulong *puVar13;
  Characters_BaseUseable_o *__this_02;
  UnityEngine_UI_Image_o *pUVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  InvokerMethod pIVar16;
  code *pcVar17;
  UnityEngine_Component_o *pUVar18;
  UnityEngine_UI_Image_o *pUVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  Il2CppType *pIVar25;
  undefined1 auVar26 [16];
  uint32_t *puVar27;
  undefined1 *puVar28;
  char cVar29;
  bool_conflict bVar30;
  uint uVar31;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  int iVar32;
  bool_conflict extraout_EAX_01;
  uint uVar33;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  bool_conflict extraout_EAX_07;
  Il2CppClass *pIVar34;
  long *plVar35;
  long *plVar36;
  UnityEngine_Transform_o *pUVar37;
  UnityEngine_GameObject_o *pUVar38;
  UnityEngine_Animator_o *pUVar39;
  System_String_o *pSVar40;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar41;
  undefined8 *puVar42;
  UnityEngine_Object_o *pUVar43;
  ulong uVar44;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  uint32_t uVar45;
  long lVar46;
  undefined8 extraout_RDX;
  long *plVar47;
  MethodInfo *pMVar48;
  Il2CppClass *pIVar49;
  Il2CppRGCTXData *pIVar50;
  Il2CppClass **ppIVar51;
  Il2CppClass **ppIVar52;
  int iVar53;
  Il2CppClass *pIVar54;
  Characters_BaseCharacter_o *__this_04;
  Il2CppClass *__this_05;
  Il2CppClass *__this_06;
  MethodInfo *pMVar55;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar56;
  Il2CppClass *unaff_R13;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar61;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar62;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  float fVar65;
  UnityEngine_Quaternion_o UVar66;
  UnityEngine_Quaternion_Fields UVar67;
  undefined1 auVar68 [12];
  UnityEngine_Vector3_o UVar69;
  UnityEngine_Vector3_o UVar70;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b;
  undefined1 auStack_e0 [12];
  float fStack_d4;
  Il2CppClass *pIStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_88;
  Il2CppClass *pIStack_60;
  undefined8 uStack_58;
  Il2CppRuntimeInterfaceOffsetPair *pIStack_50;
  Characters_BaseCharacter_o *pCStack_48;
  Characters_BaseCharacter_o *pCStack_40;
  
  if (g_data_057adecc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecc = '\x01';
  }
  __this_04 = (__this->fields)._owner;
  if (__this_04 != (Characters_BaseCharacter_o *)0x0) {
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= (__this_04->klass->_2).naturalAligment) &&
       ((__this_04->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
      pSVar8 = (__this_04->fields).crossfadeCache;
      if (pSVar8 != (System_Object_array *)0x0) {
        pIVar34 = (pSVar8->obj).klass;
        bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if (((bVar4 <= (pIVar34->_2).naturalAligment) &&
            ((pIVar34->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_AmmoWeapon)) &&
           (bVar30 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0),
           (char)bVar30 != '\0')) {
          iVar32 = *(int *)(pSVar8->m_Items + 5);
          return CONCAT31((int3)((uint)iVar32 >> 8),iVar32 == -1 || 1 < iVar32);
        }
      }
      return 0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adecd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecd = '\x01';
  }
  pIVar34 = (Il2CppClass *)0x0;
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this_04,(MethodInfo *)0x0);
  plVar47 = *(long **)&(__this_04->fields).MaxFootstepDistance;
  if ((Il2CppClass *)plVar47 != (Il2CppClass *)0x0) {
    vtableDispatch = (((Il2CppClass *)plVar47)->_1).image;
    cVar5 = (code)(TypeInfo_Human->_2).naturalAligment;
    pIVar34 = TypeInfo_Human;
    if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
       (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
        TypeInfo_Human)) {
      plVar47 = *(long **)&(((Il2CppClass *)plVar47)->_2).element_size;
      if ((Il2CppClass *)plVar47 == (Il2CppClass *)0x0) goto label_042f20de;
      vtableDispatch = (((Il2CppClass *)plVar47)->_1).image;
      cVar5 = (code)(TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar34 = TypeInfo_AmmoWeapon;
      if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
         (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
          TypeInfo_AmmoWeapon)) {
        uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar47)->_1).castClass;
        if (-1 < (int)uVar7) {
          uVar45 = 2;
          if (1 < (int)uVar7) {
            uVar45 = uVar7;
          }
          *(uint32_t *)&(((Il2CppClass *)plVar47)->_1).castClass = uVar45 - 2;
        }
        return uVar7;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
  }
label_042f20de:
  il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __this_04;
  if (g_data_057adece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adece = '\x01';
  }
  __this_00 = (((Il2CppClass *)plVar47)->_1).this_arg.data;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f2984;
  bVar4 = (TypeInfo_Human->_2).naturalAligment;
  pIVar34 = TypeInfo_Human;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Human)) {
label_042f2989:
    il2cpp_runtime_helper_022b2fd0(__this_00);
    pIVar56 = (Il2CppClass *)plVar47;
  }
  else {
    pIVar34 = (Il2CppClass *)(__this_00->klass->vtable)._66_GetAimPoint.method;
    uVar59 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    fVar60 = (float)((ulong)uVar59 >> 0x20);
    lVar46 = *(long *)&(__this_00->fields).Dead;
    if ((lVar46 == 0) ||
       (pUVar37 = *(UnityEngine_Transform_o **)(lVar46 + 0x10), pUVar37 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar34 = (Il2CppClass *)0x0;
    UVar69 = UnityEngine_Transform__get_position(pUVar37,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar64._0_4_ = (float)uVar59 - UVar69.fields.x;
    auVar64._4_4_ = fVar60 - UVar69.fields.y;
    auVar64._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
    auVar64._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
    fVar65 = in_XMM1_Da - UVar69.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar61 = 0;
    uVar62 = 0;
    fVar57 = fVar65 * fVar65 + auVar64._4_4_ * auVar64._4_4_ + auVar64._0_4_ * auVar64._0_4_;
    if (fVar57 < 0.0) {
      fVar57 = sqrtf(fVar57);
      uVar61 = extraout_XMM0_Dc_01;
      uVar62 = extraout_XMM0_Dd_01;
      if (fVar57 <= 1e-05) goto label_042f22b7;
label_042f231f:
      fVar65 = fVar65 / fVar57;
      auVar23._4_4_ = fVar57;
      auVar23._0_4_ = fVar57;
      auVar23._8_4_ = uVar61;
      auVar23._12_4_ = uVar62;
      auVar64 = divps(auVar64,auVar23);
      uVar63 = auVar64._0_8_;
      lVar46._0_4_ = (__this_00->fields).Dead;
      lVar46._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    else {
      fVar57 = SQRT(fVar57);
      if (1e-05 < fVar57) goto label_042f231f;
label_042f22b7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar63 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar65 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar46._0_4_ = (__this_00->fields).Dead;
      lVar46._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    if ((lVar46 == 0) || (*(UnityEngine_Transform_o **)(lVar46 + 0x10) == (UnityEngine_Transform_o *)0x0)) {
label_042f2984:
      il2cpp_runtime_helper_022b2c90();
      goto label_042f2989;
    }
    UVar69 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar46 + 0x10),(MethodInfo *)0x0);
    cVar29 = *(char *)((long)&(__this_00->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar69.fields.x);
    }
    lVar46 = 0xf0;
    if (cVar29 == '\0') {
      lVar46 = 0x108;
    }
    plVar47 = *(long **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar46);
    Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
    *(long **)&(__this_00->fields)._currentVelocity.fields = plVar47;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._currentVelocity,plVar47);
    pIVar34 = (Il2CppClass *)plVar47;
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)plVar47,0.05,0.0,(MethodInfo *)0x0);
    UVar69.fields.z = fVar65;
    UVar69.fields.x = (float)(int)uVar63;
    UVar69.fields.y = (float)(int)((ulong)uVar63 >> 0x20);
    UVar66 = UnityEngine_Quaternion__LookRotation_4debb20(UVar69,(MethodInfo *)0x0);
    UVar69 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar66,(MethodInfo *)0x0);
    UVar70.fields.x = UVar69.fields.x * 57.29578;
    UVar70.fields.y = UVar69.fields.y * 57.29578;
    UVar70.fields.z = UVar69.fields.z * 57.29578;
    UVar69 = UnityEngine_Quaternion__Internal_MakePositive(UVar70,(MethodInfo *)0x0);
    *(float *)&(__this_00->fields).Detection = UVar69.fields.y;
    auVar68._4_8_ = 0;
    auVar68._0_4_ = UVar69.fields.y * 0.017453292;
    UVar67 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar68 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar67;
    lVar46 = *(long *)&(__this_00->fields).Dead;
    if ((lVar46 == 0) || (plVar47 = *(long **)(lVar46 + 0x10), (Il2CppClass *)plVar47 == (Il2CppClass *)0x0))
    goto label_042f2984;
    UVar66 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)plVar47,(MethodInfo *)0x0);
    uStack_58 = *(undefined8 *)((long)&(__this_00->fields)._lastMountMessage + 4);
    pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
    uVar2 = (__this_00->fields)._grabIFrames;
    uVar3 = (__this_00->fields)._bladeTrailActive;
    b.fields.w = (float)uVar3;
    b.fields.z = (float)uVar2;
    pIStack_60 = (Il2CppClass *)0x0;
    fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.x = (float)(undefined4)uStack_58;
    b.fields.y = (float)uStack_58._4_4_;
    UVar66 = UnityEngine_Quaternion__Lerp(UVar66,b,fVar65 * 30.0,(MethodInfo *)0x0);
    pIVar34 = (Il2CppClass *)0x0;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar47,UVar66,(MethodInfo *)0x0);
    lVar46 = *(long *)&(__this_00->fields).Dead;
    if ((lVar46 == 0) ||
       (pUVar37 = *(UnityEngine_Transform_o **)(lVar46 + 0x10), pUVar37 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar34 = (Il2CppClass *)0x0;
    UVar69 = UnityEngine_Transform__get_position(pUVar37,(MethodInfo *)0x0);
    lVar46 = *(long *)&(__this_00->fields).Dead;
    if ((lVar46 == 0) ||
       (pUVar37 = *(UnityEngine_Transform_o **)(lVar46 + 0x10), pUVar37 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    UVar70 = UnityEngine_Transform__get_up(pUVar37,(MethodInfo *)0x0);
    uStack_88._0_4_ = UVar69.fields.x;
    uStack_88._4_4_ = UVar69.fields.y;
    uStack_88._0_4_ = (float)uStack_88 + UVar70.fields.x * 0.8;
    uStack_88._4_4_ = uStack_88._4_4_ + UVar70.fields.y * 0.8;
    fVar65 = UVar69.fields.z + UVar70.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar57 = (float)uVar59 - (float)uStack_88;
    fVar60 = fVar60 - uStack_88._4_4_;
    in_XMM1_Da = in_XMM1_Da - fVar65;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar61 = 0;
    uVar62 = 0;
    fVar58 = in_XMM1_Da * in_XMM1_Da + fVar60 * fVar60 + fVar57 * fVar57;
    if (fVar58 < 0.0) {
      fVar58 = sqrtf(fVar58);
      uVar61 = extraout_XMM0_Dc_04;
      uVar62 = extraout_XMM0_Dd_04;
      if (fVar58 <= 1e-05) goto label_042f25be;
label_042f2610:
      in_XMM1_Da = in_XMM1_Da / fVar58;
      auVar26._4_4_ = fVar60;
      auVar26._0_4_ = fVar57;
      auVar26._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
      auVar26._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
      auVar22._4_4_ = fVar58;
      auVar22._0_4_ = fVar58;
      auVar22._8_4_ = uVar61;
      auVar22._12_4_ = uVar62;
      auVar64 = divps(auVar26,auVar22);
      fVar60 = auVar64._0_4_;
      fVar57 = auVar64._4_4_;
    }
    else {
      fVar58 = SQRT(fVar58);
      if (1e-05 < fVar58) goto label_042f2610;
label_042f25be:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar59 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar60 = (float)uVar59;
      fVar57 = (float)((ulong)uVar59 >> 0x20);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar41 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.y = fVar57;
    forward.fields.x = fVar60;
    forward.fields.z = in_XMM1_Da;
    UVar66 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    position.fields.z = fVar65;
    position.fields.x = (float)uStack_88;
    position.fields.y = uStack_88._4_4_;
    Effects_EffectSpawner__Spawn(pSVar41,position,UVar66,2.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pMVar48 = TypeInfo_HumanSounds;
    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar34 = (Il2CppClass *)Characters_HumanSounds__GetRandomAHSSGunShotDouble(pMVar48);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)pIVar34,(MethodInfo *)0x0);
    plVar47 = &TypeInfo_CharacterData;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar35 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    if (plVar35 == (long *)0x0) goto label_042f2984;
    pIVar34 = "AHSS";
    plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))(plVar35,"AHSS",*(undefined8 *)(*plVar35 + 0x1b0));
    pOVar9 = (__this_00->fields).OutlineComponent;
    if (((pOVar9 == (Outline_o *)0x0) ||
        (pSVar10 = pOVar9[1].fields._namesToIgnore,
        pSVar10 == (System_Collections_Generic_List_string__o *)0x0)) || (plVar35 == (long *)0x0))
    goto label_042f2984;
    plVar47 = (long *)pSVar10[2].klass;
    pIVar34 = "Radius";
    plVar36 = (long *)(**(code **)(*plVar35 + 0x1a8))(plVar35,"Radius",*(undefined8 *)(*plVar35 + 0x1b0));
    if (plVar36 == (long *)0x0) goto label_042f2984;
    pIVar34 = *(Il2CppClass **)(*plVar36 + 0x390);
    fVar58 = (float)(**(code **)(*plVar36 + 0x388))(plVar36);
    if ((Il2CppClass *)plVar47 == (Il2CppClass *)0x0) goto label_042f2984;
    vtableDispatch = (((Il2CppClass *)plVar47)->_1).image;
    cVar5 = (code)(TypeInfo_CapsuleCollider->_2).naturalAligment;
    pIVar34 = TypeInfo_CapsuleCollider;
    pIVar56 = (Il2CppClass *)plVar47;
    if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
       (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
        TypeInfo_CapsuleCollider)) {
      pIVar34 = (Il2CppClass *)0x0;
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)plVar47,fVar58 + fVar58,(MethodInfo *)0x0);
      pOVar9 = (__this_00->fields).OutlineComponent;
      if ((pOVar9 != (Outline_o *)0x0) &&
         (pSVar10 = pOVar9[1].fields._namesToIgnore,
         pSVar10 != (System_Collections_Generic_List_string__o *)0x0)) {
        pIVar34 = (Il2CppClass *)0x0;
        pUVar37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
        if (pUVar37 != (UnityEngine_Transform_o *)0x0) {
          pIVar34 = (Il2CppClass *)0x0;
          value.fields.z = fVar65;
          value.fields.x = (float)uStack_88;
          value.fields.y = uStack_88._4_4_;
          UnityEngine_Transform__set_position(pUVar37,value,(MethodInfo *)0x0);
          pOVar9 = (__this_00->fields).OutlineComponent;
          if ((pOVar9 != (Outline_o *)0x0) &&
             (pSVar10 = pOVar9[1].fields._namesToIgnore,
             pSVar10 != (System_Collections_Generic_List_string__o *)0x0)) {
            pIVar34 = (Il2CppClass *)0x0;
            plVar47 = (long *)UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
            forward_00.fields.y = fVar57;
            forward_00.fields.x = fVar60;
            forward_00.fields.z = in_XMM1_Da;
            UVar66 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
            if ((Il2CppClass *)plVar47 != (Il2CppClass *)0x0) {
              pIVar34 = (Il2CppClass *)0x0;
              UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar47,UVar66,(MethodInfo *)0x0)
              ;
              pOVar9 = (__this_00->fields).OutlineComponent;
              if ((pOVar9 != (Outline_o *)0x0) &&
                 (__this_01 = (Characters_BaseHitbox_o *)pOVar9[1].fields._namesToIgnore,
                 __this_01 != (Characters_BaseHitbox_o *)0x0)) {
                pIVar34 = (Il2CppClass *)0x0;
                Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
                lVar46 = *(long *)&(__this_00->fields).Dead;
                if (lVar46 != 0) {
                  plVar47 = *(long **)(lVar46 + 0x18);
                  pIVar34 = "KnockbackForce";
                  plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                              (plVar35,"KnockbackForce",*(undefined8 *)(*plVar35 + 0x1b0));
                  if (plVar35 != (long *)0x0) {
                    pIVar34 = *(Il2CppClass **)(*plVar35 + 0x390);
                    fVar65 = (float)(**(code **)(*plVar35 + 0x388))(plVar35);
                    if ((Il2CppClass *)plVar47 != (Il2CppClass *)0x0) {
                      force.fields.y = fVar57 * fVar65 * -2.0;
                      force.fields.x = fVar60 * fVar65 * -2.0;
                      force.fields.z = in_XMM1_Da * fVar65 * -2.0;
                      pIVar34 = (Il2CppClass *)0x2;
                      UnityEngine_Rigidbody__AddForce
                                ((UnityEngine_Rigidbody_o *)plVar47,force,2,(MethodInfo *)0x0);
                      plVar47 = &TypeInfo_UIManager;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar56 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (pIVar56 != (Il2CppClass *)0x0) {
                        vtableDispatch = (pIVar56->_1).image;
                        cVar5 = (code)(TypeInfo_InGameMenu->_2).naturalAligment;
                        pIVar34 = TypeInfo_InGameMenu;
                        if (((byte)vtableDispatch[0x130] < (byte)cVar5) ||
                           (*(Il2CppClass **)
                             (*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) !=
                            TypeInfo_InGameMenu)) goto label_042f2994;
                        pIVar11 = (pIVar56->_1).interfaceOffsets;
                        if (pIVar11 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042f2984;
                        pCStack_48 = pCStack_40;
                        pIVar34 = (Il2CppClass *)0x1;
                        pIVar56 = (Il2CppClass *)0x1;
                        if (g_data_057ae3db == '\0') {
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2dd6;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2de2;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          g_data_057ae3db = '\x01';
                        }
                        pUVar43 = *(UnityEngine_Object_o **)&pIVar11[0x10].offset;
                        plVar47 = &TypeInfo_Object;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e09;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e15;
                        bVar30 = UnityEngine_Object__op_Equality
                                           (pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar30 != '\0') {
                          return bVar30;
                        }
                        pIVar49 = pIVar11[0xc].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e36;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e42;
                        bVar30 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar49,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar30 != '\0') {
                          return bVar30;
                        }
                        pIVar49 = pIVar11[0x1e].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e63;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e6f;
                        bVar30 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar49,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar30 != '\0') {
                          return bVar30;
                        }
                        __this_05 = pIVar11[0x21].interfaceType;
                        if (__this_05 != (Il2CppClass *)0x0) {
                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e97;
                          pUVar38 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                            pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2eaf;
                            UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                            __this_05 = pIVar11[0x21].interfaceType;
                            if (__this_05 != (Il2CppClass *)0x0) {
                              pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ece;
                              pUVar39 = (UnityEngine_Animator_o *)
                                        UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_05,
                                                   (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                              if (pUVar39 != (UnityEngine_Animator_o *)0x0) {
                                pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ee4;
                                UnityEngine_Animator__Update(pUVar39,0.0,(MethodInfo *)0x0);
                                __this_05 = pIVar11[0x1e].interfaceType;
                                if (__this_05 != (Il2CppClass *)0x0) {
                                  pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2efb;
                                  pUVar38 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                    pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f10;
                                    UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                    __this_05 = pIVar11[0x1f].interfaceType;
                                    if (__this_05 != (Il2CppClass *)0x0) {
                                      pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f27;
                                      pUVar38 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_05,
                                                           (MethodInfo *)0x0);
                                      if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f3c;
                                        UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                        __this_05 = pIVar11[0x20].interfaceType;
                                        if (__this_05 != (Il2CppClass *)0x0) {
                                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f53;
                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)__this_05,
                                                               (MethodInfo *)0x0);
                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                            pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f68;
                                            UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                            __this_05 = *(Il2CppClass **)&pIVar11[0x21].offset;
                                            if (__this_05 != (Il2CppClass *)0x0) {
                                              pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f88;
                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)__this_05,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fa0;
                                                UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0)
                                                ;
                                                __this_05 = *(Il2CppClass **)&pIVar11[0x21].offset;
                                                if (__this_05 != (Il2CppClass *)0x0) {
                                                  pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fbf;
                                                  pUVar39 = (UnityEngine_Animator_o *)
                                                            UnityEngine_Component__GetComponent_object_
                                                                      ((UnityEngine_Component_o *)__this_05,
                                                                       (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                                  if (pUVar39 != (UnityEngine_Animator_o *)0x0) {
                                                    pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fd5
                                                    ;
                                                    UnityEngine_Animator__Update
                                                              (pUVar39,0.0,(MethodInfo *)0x0);
                                                    __this_05 = *(Il2CppClass **)&pIVar11[0x1e].offset;
                                                    if (__this_05 != (Il2CppClass *)0x0) {
                                                      pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                   0x43c2fe8;
                                                      pUVar38 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_05,(MethodInfo *)0x0);
                                                      if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                     0x43c2ff9;
                                                        UnityEngine_GameObject__SetActive
                                                                  (pUVar38,0,(MethodInfo *)0x0);
                                                        __this_05 = *(Il2CppClass **)&pIVar11[0x1f].offset;
                                                        if (__this_05 != (Il2CppClass *)0x0) {
                                                          pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                       0x43c300c;
                                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               __this_05,(MethodInfo *)0x0);
                                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                         0x43c301d;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar38,0,(MethodInfo *)0x0);
                                                            __this_05 = *(Il2CppClass **)&pIVar11[0x20].offset
                                                            ;
                                                            if (__this_05 != (Il2CppClass *)0x0) {
                                                              pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *
                                                                           )0x43c3030;
                                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                                  ((UnityEngine_Component_o *)
                                                                                   __this_05,(MethodInfo *)0x0
                                                                                  );
                                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair
                                                                              *)0x43c3041;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar38,0,(MethodInfo *)0x0);
                                                                *(undefined8 *)
                                                                 ((long)&pIVar11[0x12].interfaceType + 4) =
                                                                     0x3f2ac08300000000;
                                                                return 0;
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
                        pIStack_50 = (Il2CppRuntimeInterfaceOffsetPair *)UI_HUDBottomHandler__ShootTS;
                        il2cpp_runtime_helper_022b2c90();
                        uStack_58 = 1;
                        pIStack_60 = pIVar49;
                        pIStack_50 = pIVar11;
                        if (g_data_057ae3dc == '\0') {
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                          g_data_057ae3dc = '\x01';
                        }
                        pUVar43 = *(UnityEngine_Object_o **)&(__this_05->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uVar31 = UnityEngine_Object__op_Equality
                                           (pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        uVar44 = (ulong)uVar31;
                        if ((char)uVar31 != '\0') {
label_043c3169:
                          return (bool_conflict)uVar44;
                        }
                        pIVar50 = __this_05->rgctx_data;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uVar31 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar50,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        uVar44 = (ulong)uVar31;
                        if ((char)uVar31 != '\0') goto label_043c3169;
                        pIVar49 = (Il2CppClass *)__this_05->vtable[0xe].method;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_06 = pIVar49;
                        uVar31 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar49,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        uVar44 = (ulong)uVar31;
                        if ((char)uVar31 != '\0') goto label_043c3169;
                        lVar46 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        if (((lVar46 != 0) && (lVar46 = *(long *)(lVar46 + 0x58), lVar46 != 0)) &&
                           (uVar44 = *(ulong *)(lVar46 + 0x48), uVar44 != 0)) {
                          if (*(char *)(uVar44 + 0x11) != '\0') goto label_043c3169;
                          __this_06 = (Il2CppClass *)__this_05->vtable[0xf].method;
                          if ((__this_06 != (Il2CppClass *)0x0) &&
                             (pUVar38 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0),
                             pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                            __this_06 = (Il2CppClass *)__this_05->vtable[0xf].method;
                            if ((__this_06 != (Il2CppClass *)0x0) &&
                               (pUVar39 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)__this_06,
                                                     (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                               pUVar39 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar39,0.0,(MethodInfo *)0x0);
                              __this_06 = (Il2CppClass *)__this_05->vtable[0xe].method;
                              if ((__this_06 != (Il2CppClass *)0x0) &&
                                 (pUVar38 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
                                 , pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                __this_06 = (Il2CppClass *)__this_05->vtable[0xf].methodPtr;
                                if ((__this_06 != (Il2CppClass *)0x0) &&
                                   (pUVar38 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this_06,
                                                         (MethodInfo *)0x0),
                                   pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                  __this_06 = (Il2CppClass *)__this_05->vtable[6].method;
                                  if ((__this_06 != (Il2CppClass *)0x0) &&
                                     (pUVar38 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_06,
                                                           (MethodInfo *)0x0),
                                     pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                    UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                                    __this_06 = (Il2CppClass *)__this_05->vtable[7].methodPtr;
                                    if ((__this_06 != (Il2CppClass *)0x0) &&
                                       (pUVar38 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)__this_06,
                                                             (MethodInfo *)0x0),
                                       pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                                      (__this_05->_2).nested_type_count = 0;
                                      (__this_05->_2).vtable_count = 0;
                                      (__this_05->_2).interfaces_count = 0;
                                      (__this_05->_2).interface_offsets_count = 0x3f80;
                                      return 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        if (g_data_057ae3dd == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                          g_data_057ae3dd = '\x01';
                        }
                        pSVar41 = *(System_String_o **)&(__this_06->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar48 = (MethodInfo *)0x0;
                        bVar30 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pSVar41,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar30 == '\0') {
                          pUVar43 = *(UnityEngine_Object_o **)&(__this_06->_2).token;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar54 = (Il2CppClass *)0x0;
                          uVar31 = UnityEngine_Object__op_Inequality
                                             (pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          uVar44 = (ulong)uVar31;
                          if ((char)uVar31 == '\0') goto label_043c34bd;
                          plVar35 = &TypeInfo_Object;
                          ppIVar52 = &pIStack_60;
                        }
                        else {
                          fVar60 = *(float *)&(__this_06->_2).nested_type_count;
                          fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_06->_2).nested_type_count = fVar60 - fVar65;
                          fVar60 = *(float *)&(__this_06->_2).field_count;
                          fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_06->_2).field_count = fVar60 - fVar65;
                          fVar60 = *(float *)&(__this_06->_2).interfaces_count;
                          fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_06->_2).interfaces_count = fVar60 - fVar65;
                          UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_06,pMVar48);
                          UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_06,pMVar48);
                          pIVar54 = __this_06;
                          UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_06,pMVar48);
                          lVar46 = *(long *)&(__this_06->_2).static_fields_size;
                          if (lVar46 == 0) {
                            il2cpp_runtime_helper_022b2c90();
                            if (g_data_057ae3e0 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
                              il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
                              il2cpp_runtime_helper_023445d0(&"");
                              g_data_057ae3e0 = '\x01';
                            }
                            lVar46 = *(long *)&(pIVar54->_2).static_fields_size;
                            if (lVar46 != 0) {
                              __this_02 = *(Characters_BaseUseable_o **)(lVar46 + 0xf8);
                              if (__this_02 == (Characters_BaseUseable_o *)0x0) {
                                pUVar19 = (UnityEngine_UI_Image_o *)(pIVar54->_2).typeHierarchy;
                                if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar19,0.0,(MethodInfo *)0x0);
                                  pUVar19 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar54->_2).initializationExceptionGCHandle;
                                  if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar19,0.0,(MethodInfo *)0x0);
                                    goto label_043c3758;
                                  }
                                }
                              }
                              else {
                                fVar60 = Characters_BaseUseable__GetCooldownRatio(__this_02,(MethodInfo *)0x0)
                                ;
                                pUVar19 = (UnityEngine_UI_Image_o *)(pIVar54->_2).typeHierarchy;
                                if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar60,(MethodInfo *)0x0);
                                  pUVar19 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar54->_2).initializationExceptionGCHandle;
                                  if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar60,(MethodInfo *)0x0);
                                    bVar30 = System_String__op_Inequality
                                                       (*(System_String_o **)&(pIVar54->_2).instance_size,
                                                        *(System_String_o **)&(pIVar54->_2).element_size,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar30 == '\0') {
label_043c3758:
                                      pUVar18 = (pIVar54->_2).unity_user_data;
                                    }
                                    else {
                                      puVar27 = &(pIVar54->_2).instance_size;
                                      (pIVar54->_2).instance_size = (pIVar54->_2).element_size;
                                      (pIVar54->_2).actualSize = (pIVar54->_2).native_size;
                                      il2cpp_runtime_helper_022b4080(puVar27);
                                      bVar30 = System_String__op_Inequality
                                                         (*(System_String_o **)&(pIVar54->_2).instance_size,
                                                          "",(MethodInfo *)0x0);
                                      if ((char)bVar30 == '\0') goto label_043c3758;
                                      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar41 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                                      pSVar40 = System_String__Concat_3ae5ba0
                                                          ("Icons/Specials/",*(System_String_o **)puVar27,
                                                           (MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      texture = (UnityEngine_Texture2D_o *)
                                                ApplicationManagers_ResourceManager__LoadAsset
                                                          (pSVar41,pSVar40,1,(MethodInfo *)0x0);
                                      if (texture == (UnityEngine_Texture2D_o *)0x0) {
                                        il2cpp_runtime_helper_022b2c90();
label_043c384a:
                                        il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                                        il2cpp_runtime_helper_022b2c90();
                                      }
                                      else {
                                        if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                                        iVar32 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                                           (texture,(texture->klass->vtable)._5_get_width.
                                                                    method);
                                        iVar53 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                                        auVar24._4_4_ = (float)iVar53;
                                        auVar24._0_4_ = (float)iVar32;
                                        auVar24._8_8_ = 0;
                                        pSVar41 = (System_String_o *)
                                                  UnityEngine_Sprite__Create_4e0d730
                                                            (texture,(UnityEngine_Rect_o)(auVar24 << 0x40),
                                                             (UnityEngine_Vector2_o)0x3f0000003f000000,
                                                             (MethodInfo *)0x0);
                                        pUVar19 = (pIVar54->_2).unity_user_data;
                                        if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                                        UnityEngine_UI_Image__set_sprite
                                                  (pUVar19,(UnityEngine_Sprite_o *)pSVar41,(MethodInfo *)0x0);
                                        pUVar19 = *(UnityEngine_UI_Image_o **)
                                                   &(pIVar54->_2).initializationExceptionGCHandle;
                                        if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                          UnityEngine_UI_Image__set_sprite
                                                    (pUVar19,(UnityEngine_Sprite_o *)pSVar41,(MethodInfo *)0x0
                                                    );
                                          goto label_043c3758;
                                        }
                                      }
                                      auVar68 = il2cpp_runtime_helper_022b2c90();
                                      if (auVar68._8_4_ != 1) {
                                        _Unwind_Resume(auVar68._0_8_);
                                      }
                                      pSVar41 = (System_String_o *)__cxa_begin_catch(auVar68._0_8_);
                                      cVar29 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(pSVar41->klass->_1).image);
                                      if (cVar29 == '\0') goto label_043c3956;
                                      __cxa_end_catch();
                                      pSVar41 = *(System_String_o **)puVar27;
                                      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                                      pSVar41 = System_String__Concat_3ae5ba0
                                                          (pSVar40,pSVar41,(MethodInfo *)0x0);
                                      lVar46 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                                      if (*(int *)(lVar46 + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0(lVar46);
                                      }
                                      UnityEngine_Debug__Log((Il2CppObject *)pSVar41,(MethodInfo *)0x0);
                                      pUVar18 = (pIVar54->_2).unity_user_data;
                                    }
                                    if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                      pSVar41 = (System_String_o *)
                                                UnityEngine_Component__get_gameObject
                                                          (pUVar18,(MethodInfo *)0x0);
                                      lVar46 = *(long *)&(pIVar54->_2).static_fields_size;
                                      if (lVar46 != 0) {
                                        if (*(long *)(lVar46 + 0xf8) == 0) {
                                          uVar31 = 0;
                                        }
                                        else {
                                          uVar31 = System_String__op_Inequality
                                                             (*(System_String_o **)
                                                               &(pIVar54->_2).instance_size,"",
                                                              (MethodInfo *)0x0);
                                        }
                                        if (pSVar41 != (System_String_o *)0x0) {
                                          UnityEngine_GameObject__SetActive
                                                    ((UnityEngine_GameObject_o *)pSVar41,uVar31 & 0xff,
                                                     (MethodInfo *)0x0);
                                          pUVar18 = *(UnityEngine_Component_o **)
                                                     &(pIVar54->_2).initializationExceptionGCHandle;
                                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                            pSVar41 = (System_String_o *)
                                                      UnityEngine_Component__get_gameObject
                                                                (pUVar18,(MethodInfo *)0x0);
                                            lVar46 = *(long *)&(pIVar54->_2).static_fields_size;
                                            if (lVar46 != 0) {
                                              if (*(long *)(lVar46 + 0xf8) == 0) {
                                                uVar31 = 0;
                                              }
                                              else {
                                                uVar31 = System_String__op_Inequality
                                                                   (*(System_String_o **)
                                                                     &(pIVar54->_2).instance_size,""
                                                                    ,(MethodInfo *)0x0);
                                              }
                                              if (pSVar41 != (System_String_o *)0x0) {
                                                UnityEngine_GameObject__SetActive
                                                          ((UnityEngine_GameObject_o *)pSVar41,uVar31 & 0xff,
                                                           (MethodInfo *)0x0);
                                                return extraout_EAX_01;
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
                            il2cpp_runtime_helper_022b2c90();
label_043c3956:
                            puVar42 = (undefined8 *)__cxa_allocate_exception(8);
                            *puVar42 = pSVar41->klass;
                            __cxa_throw(puVar42,&PTR_PTR_05215060,0);
                          }
                          puVar13 = *(ulong **)(lVar46 + 0x100);
                          uVar44 = 0;
                          if (puVar13 == (ulong *)0x0) {
label_043c34bd:
                            return (bool_conflict)uVar44;
                          }
                          uVar44 = *puVar13;
                          bVar4 = *(byte *)(uVar44 + 0x130);
                          bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                          if ((bVar6 <= bVar4) &&
                             (*(Il2CppClass **)(*(long *)(uVar44 + 200) + -8 + (ulong)bVar6 * 8) ==
                              TypeInfo_BladeWeapon)) {
                            if (g_data_057ae3e1 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                              il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
                              g_data_057ae3e1 = '\x01';
                            }
                            lVar46 = *(long *)&(__this_06->_2).static_fields_size;
                            if ((lVar46 != 0) &&
                               (plVar47 = *(long **)(lVar46 + 0x100),
                               (Il2CppClass *)plVar47 != (Il2CppClass *)0x0)) {
                              pIVar54 = (((Il2CppClass *)plVar47)->_1).image;
                              bVar4 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                              if (((pIVar54->_2).naturalAligment < bVar4) ||
                                 ((pIVar54->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BladeWeapon)) {
                                pIVar54 = TypeInfo_BladeWeapon;
                                plVar35 = plVar47;
                                il2cpp_runtime_helper_022b2fd0();
                                uStack_c8 = 1;
                                ppIVar51 = (Il2CppClass **)auStack_e0;
                                pIStack_d0 = pIVar49;
                                if (g_data_057ae3e2 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                                  g_data_057ae3e2 = '\x01';
                                }
                                lVar46 = *(long *)&(((Il2CppClass *)plVar35)->_2).static_fields_size;
                                if ((lVar46 == 0) ||
                                   (__this_05 = *(Il2CppClass **)(lVar46 + 0x100),
                                   __this_05 == (Il2CppClass *)0x0)) {
label_043c4ab9:
                                  il2cpp_runtime_helper_022b2c90();
                                }
                                else {
                                  pvVar12 = (__this_05->_1).image;
                                  bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                                  pIVar54 = TypeInfo_AmmoWeapon;
                                  if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
                                     (*(Il2CppClass **)
                                       (*(long *)((long)pvVar12 + 200) + ((ulong)bVar4 - 1) * 8) ==
                                      TypeInfo_AmmoWeapon)) {
                                    iVar32 = *(int *)((long)&(__this_05->_1).element_class + 4);
                                    iVar53 = *(int *)&(__this_05->_1).castClass;
                                    if (iVar32 < 1) {
                                      if (iVar53 == -1) {
                                        fVar60 = 1.0;
                                        pUVar19 = (UnityEngine_UI_Image_o *)
                                                  ((Il2CppClass *)plVar35)->vtable[7].methodPtr;
                                      }
                                      else {
                                        fVar60 = 0.0;
                                        pUVar19 = (UnityEngine_UI_Image_o *)
                                                  ((Il2CppClass *)plVar35)->vtable[7].methodPtr;
                                      }
                                    }
                                    else {
                                      fVar60 = (float)iVar53 / (float)iVar32;
                                      pUVar19 = (UnityEngine_UI_Image_o *)
                                                ((Il2CppClass *)plVar35)->vtable[7].methodPtr;
                                    }
                                    pIVar34 = (Il2CppClass *)0x1;
                                    if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                      pIVar49 = (Il2CppClass *)((Il2CppClass *)plVar35)->vtable[6].method;
                                      pIVar54 = (Il2CppClass *)0x0;
                                      fStack_d4 = fVar60;
                                      UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar60,(MethodInfo *)0x0);
                                      pIVar34 = pIVar56;
                                      if (pIVar49 != (Il2CppClass *)0x0) {
                                        pIVar54 = (Il2CppClass *)0x0;
                                        UnityEngine_UI_Image__set_fillAmount
                                                  ((UnityEngine_UI_Image_o *)pIVar49,fStack_d4,
                                                   (MethodInfo *)0x0);
                                        if (fStack_d4 <= 0.0) {
                                          pMVar48 = ((Il2CppClass *)plVar35)->vtable[8].method;
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            vtableDispatch = pMVar48->methodPointer;
                                            pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                            (**(code **)(vtableDispatch + 0x2a8))
                                                      ((int)(((Il2CppClass *)plVar35)->_1).declaringType);
                                            vtableDispatch =
                                                 ((Il2CppClass *)plVar35)->vtable[10].methodPtr;
                                            if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                              lVar46 = *(long *)vtableDispatch;
                                              pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                              (**(code **)(lVar46 + 0x2a8))
                                                        ((int)(((Il2CppClass *)plVar35)->_1).declaringType);
                                              pMVar48 = ((Il2CppClass *)plVar35)->vtable[9].method;
                                              if (pMVar48 != (MethodInfo *)0x0) {
                                                uVar61 = SUB84((((Il2CppClass *)plVar35)->_1).declaringType,0)
                                                ;
                                                goto label_043c4886;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          pMVar48 = ((Il2CppClass *)plVar35)->vtable[8].method;
                                          if (fStack_d4 <= 0.5) {
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                              (**(code **)(pMVar48->methodPointer + 0x2a8))
                                                        ((int)(((Il2CppClass *)plVar35)->_1).this_arg.data);
                                              vtableDispatch =
                                                   ((Il2CppClass *)plVar35)->vtable[10].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                lVar46 = *(long *)vtableDispatch;
                                                pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                (**(code **)(lVar46 + 0x2a8))
                                                          ((int)(((Il2CppClass *)plVar35)->_1).this_arg.data);
                                                pMVar48 = ((Il2CppClass *)plVar35)->vtable[9].method;
                                                if (pMVar48 != (MethodInfo *)0x0) {
                                                  uVar61 = SUB84((((Il2CppClass *)plVar35)->_1).this_arg.data,
                                                                 0);
                                                  goto label_043c4886;
                                                }
                                              }
                                            }
                                          }
                                          else if (pMVar48 != (MethodInfo *)0x0) {
                                            pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                            (**(code **)(pMVar48->methodPointer + 0x2a8))
                                                      ((int)(((Il2CppClass *)plVar35)->_1).fields);
                                            vtableDispatch =
                                                 ((Il2CppClass *)plVar35)->vtable[10].methodPtr;
                                            if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                              lVar46 = *(long *)vtableDispatch;
                                              pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                              (**(code **)(lVar46 + 0x2a8))
                                                        ((int)(((Il2CppClass *)plVar35)->_1).fields);
                                              pMVar48 = ((Il2CppClass *)plVar35)->vtable[9].method;
                                              if (pMVar48 != (MethodInfo *)0x0) {
                                                uVar61 = SUB84((((Il2CppClass *)plVar35)->_1).fields,0);
label_043c4886:
                                                (**(code **)(pMVar48->methodPointer + 0x2a8))(uVar61);
                                                unaff_R13 = (Il2CppClass *)
                                                            ((Il2CppClass *)plVar35)->vtable[7].method;
                                                pIVar49 = (Il2CppClass *)
                                                          ((Il2CppClass *)plVar35)->vtable[8].methodPtr;
                                                __this_05 = (Il2CppClass *)&(__this_05->_1).element_class;
                                                pIVar54 = (Il2CppClass *)0x0;
                                                pIVar56 = (Il2CppClass *)
                                                          System_Int32__ToString
                                                                    ((int32_t)__this_05,(MethodInfo *)0x0);
                                                if ((pIVar49 != (Il2CppClass *)0x0) &&
                                                   (pIVar34 = (pIVar49->_1).image, pIVar54 = pIVar56,
                                                   (*pIVar34->vtable[0x4b].methodPtr)
                                                             (pIVar49,pIVar56,pIVar34->vtable[0x4b].method),
                                                   pIVar34 = pIVar56, unaff_R13 != (Il2CppClass *)0x0)) {
                                                  vtableDispatch = (unaff_R13->_1).image;
                                                  pIVar54 = pIVar56;
                                                  (**(code **)(vtableDispatch + 0x5e8))
                                                            (unaff_R13,pIVar56,
                                                             *(undefined8 *)(vtableDispatch + 0x5f0));
                                                  pMVar48 = ((Il2CppClass *)plVar35)->vtable[7].method;
                                                  if (*(int *)__this_05 == 0) {
                                                    if (pMVar48 != (MethodInfo *)0x0) {
                                                      pIVar54 = *(Il2CppClass **)
                                                                 (pMVar48->methodPointer + 0x2b0);
                                                      (**(code **)(pMVar48->methodPointer + 0x2a8))
                                                                (0x3f800000);
                                                      vtableDispatch =
                                                           ((Il2CppClass *)plVar35)->vtable[8].methodPtr;
                                                      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                        lVar46 = *(long *)vtableDispatch;
                                                        pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                        (**(code **)(lVar46 + 0x2a8))(0x3f800000);
                                                        pMVar48 = ((Il2CppClass *)plVar35)->vtable[8].method;
                                                        goto joined_r0x043c4a06;
                                                      }
                                                    }
                                                  }
                                                  else if (pMVar48 != (MethodInfo *)0x0) {
                                                    pIVar54 = *(Il2CppClass **)
                                                               (pMVar48->methodPointer + 0x2b0);
                                                    (**(code **)(pMVar48->methodPointer + 0x2a8))();
                                                    vtableDispatch =
                                                         ((Il2CppClass *)plVar35)->vtable[8].methodPtr;
                                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                      lVar46 = *(long *)vtableDispatch;
                                                      pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                      (**(code **)(lVar46 + 0x2a8))();
                                                      pMVar48 = ((Il2CppClass *)plVar35)->vtable[8].method;
joined_r0x043c4a06:
                                                      if (pMVar48 != (MethodInfo *)0x0) {
                                                        pIVar54 = (Il2CppClass *)0x0;
                                                        pUVar38 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar48,(MethodInfo *)0x0);
                                                        if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar54 = (Il2CppClass *)0x0;
                                                          bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                             (pUVar38,(MethodInfo *)0x0);
                                                          if ((((char)bVar30 != '\0') ||
                                                              (0.0 < *(float *)&(((Il2CppClass *)plVar35)->_2)
                                                                                .nested_type_count)) ||
                                                             (0.0 < *(float *)&(((Il2CppClass *)plVar35)->_2).
                                                                               interfaces_count)) {
                                                            return bVar30;
                                                          }
                                                          pMVar48 = ((Il2CppClass *)plVar35)->vtable[8].method
                                                          ;
                                                          if (pMVar48 != (MethodInfo *)0x0) {
                                                            pIVar54 = (Il2CppClass *)0x0;
                                                            pUVar38 = UnityEngine_Component__get_gameObject
                                                                                ((UnityEngine_Component_o *)
                                                                                 pMVar48,(MethodInfo *)0x0);
                                                            if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                              pIVar54 = (Il2CppClass *)0x1;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar38,1,(MethodInfo *)0x0);
                                                              pUVar18 = (UnityEngine_Component_o *)
                                                                        ((Il2CppClass *)plVar35)->vtable[10].
                                                                        methodPtr;
                                                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar54 = (Il2CppClass *)0x0;
                                                                pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar18,(MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar54 = (Il2CppClass *)0x0;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar38,0,(MethodInfo *)0x0);
                                                         pUVar18 = (UnityEngine_Component_o *)
                                                                   ((Il2CppClass *)plVar35)->vtable[9].
                                                                   methodPtr;
                                                         if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               (pUVar18,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x0;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,0,(MethodInfo *)0x0);
                                                             pMVar48 = ((Il2CppClass *)plVar35)->vtable[9].
                                                                       method;
                                                             if (pMVar48 != (MethodInfo *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               pUVar38 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pMVar48,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar38,0,(MethodInfo *)0x0);
                                                                 return extraout_EAX_02;
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
                                    goto label_043c4ab9;
                                  }
                                }
                                __this_06 = __this_05;
                                uVar44 = il2cpp_runtime_helper_022b2fd0();
                                goto UI_HUDBottomHandler__UpdateAHSS;
                              }
                              pUVar18 = (UnityEngine_Component_o *)__this_06->vtable[2].methodPtr;
                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                fVar60 = *(float *)&(((Il2CppClass *)plVar47)->_1).element_class /
                                         *(float *)&(((Il2CppClass *)plVar47)->_1).this_arg.field_0xc;
                                pUVar38 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                  bVar30 = UnityEngine_GameObject__get_activeSelf(pUVar38,(MethodInfo *)0x0);
                                  if ((char)bVar30 == '\0') {
label_043c406b:
                                    if (0.0 < fVar60) {
label_043c40d5:
                                      pUVar18 = (UnityEngine_Component_o *)__this_06->vtable[3].methodPtr;
                                      if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                         (pUVar38 = UnityEngine_Component__get_gameObject
                                                              (pUVar18,(MethodInfo *)0x0),
                                         pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                        bVar30 = UnityEngine_GameObject__get_activeSelf
                                                           (pUVar38,(MethodInfo *)0x0);
                                        if (((char)bVar30 != '\0') ||
                                           (0.0 < *(float *)&(__this_06->_2).nested_type_count)) {
label_043c42f1:
                                          pMVar48 = __this_06->vtable[5].method;
joined_r0x043c4256:
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            iVar32 = *(int *)&pMVar48->name;
                                            uVar31 = *(uint *)&(((Il2CppClass *)plVar47)->_1).castClass;
                                            if ((int)uVar31 < iVar32) {
                                              pIVar34 = (Il2CppClass *)(ulong)uVar31;
                                              if ((int)(iVar32 - uVar31) < 1) goto label_043c45d2;
                                              iVar53 = 0;
                                              do {
                                                pUVar43 = (UnityEngine_Object_o *)
                                                          System_Collections_Generic_List_object___get_Item
                                                                    ((
                                                       System_Collections_Generic_List_object__o *)pMVar48,0,
                                                       MethodInfo_GameObject_get_Item);
                                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                  il2cpp_runtime_helper_02337ed0();
                                                }
                                                UnityEngine_Object__Destroy_4e01c60(pUVar43,(MethodInfo *)0x0)
                                                ;
                                                pSVar15 = (System_Collections_Generic_List_object__o *)
                                                          __this_06->vtable[6].methodPtr;
                                                if (pSVar15 ==
                                                    (System_Collections_Generic_List_object__o *)0x0) break;
                                                pUVar43 = (UnityEngine_Object_o *)
                                                          System_Collections_Generic_List_object___get_Item
                                                                    (pSVar15,0,MethodInfo_GameObject_get_Item);
                                                UnityEngine_Object__Destroy_4e01c60(pUVar43,(MethodInfo *)0x0)
                                                ;
                                                pMVar48 = __this_06->vtable[5].method;
                                                if (pMVar48 == (MethodInfo *)0x0) break;
                                                System_Collections_Generic_List_object___RemoveAt
                                                          ((System_Collections_Generic_List_object__o *)
                                                           pMVar48,0,MethodInfo_Void_RemoveAt);
                                                pSVar15 = (System_Collections_Generic_List_object__o *)
                                                          __this_06->vtable[6].methodPtr;
                                                if (pSVar15 ==
                                                    (System_Collections_Generic_List_object__o *)0x0) break;
                                                System_Collections_Generic_List_object___RemoveAt
                                                          (pSVar15,0,MethodInfo_Void_RemoveAt);
                                                iVar53 = iVar53 + 1;
                                                uVar31 = iVar32 - *(int *)&(((Il2CppClass *)plVar47)->_1).
                                                                           castClass;
                                                pIVar34 = (Il2CppClass *)(ulong)uVar31;
                                                if ((int)uVar31 <= iVar53) goto label_043c45d2;
                                                pMVar48 = __this_06->vtable[5].method;
                                              } while (pMVar48 != (MethodInfo *)0x0);
                                            }
                                            else {
                                              uVar33 = uVar31 - iVar32;
                                              pIVar34 = (Il2CppClass *)(ulong)uVar33;
                                              if ((uVar33 == 0 || (int)uVar31 < iVar32) || ((int)uVar33 < 1))
                                              goto label_043c45d2;
                                              pMVar55 = __this_06->vtable[4].method;
                                              if (pMVar55 != (MethodInfo *)0x0) {
                                                iVar53 = 0;
                                                do {
                                                  pUVar37 = UnityEngine_GameObject__get_transform
                                                                      ((UnityEngine_GameObject_o *)pMVar55,
                                                                       (MethodInfo *)0x0);
                                                  pUVar38 = UI_ElementFactory__InstantiateAndBind
                                                                      (pUVar37,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0)
                                                  ;
                                                  lVar46 = MethodInfo_Void_Add;
                                                  if (pMVar48 == (MethodInfo *)0x0) break;
                                                  puVar28 = (undefined1 *)((long)&pMVar48->name + 4);
                                                  *(int *)puVar28 = *(int *)puVar28 + 1;
                                                  pIVar16 = pMVar48->invoker_method;
                                                  if (pIVar16 == (InvokerMethod)0x0) break;
                                                  uVar31 = *(uint *)&pMVar48->name;
                                                  if (uVar31 < *(uint *)(pIVar16 + 0x18)) {
                                                    *(uint *)&pMVar48->name = uVar31 + 1;
                                                    *(UnityEngine_GameObject_o **)
                                                     (pIVar16 + (long)(int)uVar31 * 8 + 0x20) = pUVar38;
                                                    il2cpp_runtime_helper_022b4080(pIVar16 + (long)(int)uVar31 * 8 + 0x20)
                                                    ;
                                                    pUVar38 = (UnityEngine_GameObject_o *)
                                                              __this_06->vtable[5].methodPtr;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pMVar48,(Il2CppObject *)pUVar38,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) +
                                                                0x70));
                                                    pUVar38 = (UnityEngine_GameObject_o *)
                                                              __this_06->vtable[5].methodPtr;
                                                  }
                                                  if (pUVar38 == (UnityEngine_GameObject_o *)0x0) break;
                                                  pUVar37 = UnityEngine_GameObject__get_transform
                                                                      (pUVar38,(MethodInfo *)0x0);
                                                  pUVar38 = UI_ElementFactory__InstantiateAndBind
                                                                      (pUVar37,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0)
                                                  ;
                                                  if (pUVar38 == (UnityEngine_GameObject_o *)0x0) break;
                                                  pUVar37 = UnityEngine_GameObject__get_transform
                                                                      (pUVar38,(MethodInfo *)0x0);
                                                  UVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                     ((UnityEngine_Vector3_o)
                                                                      ZEXT812(0x40490fdb00000000),
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar37 == (UnityEngine_Transform_o *)0x0) break;
                                                  UnityEngine_Transform__set_localRotation
                                                            (pUVar37,UVar66,(MethodInfo *)0x0);
                                                  lVar46 = MethodInfo_Void_Add;
                                                  pSVar15 = (System_Collections_Generic_List_object__o *)
                                                            __this_06->vtable[6].methodPtr;
                                                  if (pSVar15 ==
                                                      (System_Collections_Generic_List_object__o *)0x0) break;
                                                  piVar1 = &(pSVar15->fields)._version;
                                                  *piVar1 = *piVar1 + 1;
                                                  pSVar8 = (pSVar15->fields)._items;
                                                  if (pSVar8 == (System_Object_array *)0x0) break;
                                                  uVar31 = (pSVar15->fields)._size;
                                                  if (uVar31 < (uint)pSVar8->max_length) {
                                                    (pSVar15->fields)._size = uVar31 + 1;
                                                    pSVar8->m_Items[(int)uVar31] = (Il2CppObject *)pUVar38;
                                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar31);
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (pSVar15,(Il2CppObject *)pUVar38,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) +
                                                                0x70));
                                                  }
                                                  iVar53 = iVar53 + 1;
                                                  pIVar34 = __this_06;
                                                  if (*(int *)&(((Il2CppClass *)plVar47)->_1).castClass -
                                                      iVar32 <= iVar53) goto label_043c45d2;
                                                  pMVar55 = __this_06->vtable[4].method;
                                                  pMVar48 = __this_06->vtable[5].method;
                                                } while (pMVar55 != (MethodInfo *)0x0);
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          pMVar48 = __this_06->vtable[3].method;
                                          if ((pMVar48 != (MethodInfo *)0x0) &&
                                             (pUVar38 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar48,
                                                                   (MethodInfo *)0x0),
                                             pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                            UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                            if (fVar60 <= 0.0) goto label_043c42f1;
                                            pUVar18 = (UnityEngine_Component_o *)
                                                      __this_06->vtable[3].methodPtr;
                                            if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                               (pUVar38 = UnityEngine_Component__get_gameObject
                                                                    (pUVar18,(MethodInfo *)0x0),
                                               pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                                              pUVar18 = (UnityEngine_Component_o *)
                                                        __this_06->vtable[4].methodPtr;
                                              if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                                 (pUVar38 = UnityEngine_Component__get_gameObject
                                                                      (pUVar18,(MethodInfo *)0x0),
                                                 pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                                UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar18 = (UnityEngine_Component_o *)
                                                          __this_06->vtable[2].methodPtr;
                                                if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                                   (pUVar38 = UnityEngine_Component__get_gameObject
                                                                        (pUVar18,(MethodInfo *)0x0),
                                                   pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar38,1,(MethodInfo *)0x0);
                                                  pMVar48 = __this_06->vtable[2].method;
                                                  if ((pMVar48 != (MethodInfo *)0x0) &&
                                                     (pUVar38 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pMVar48,
                                                                           (MethodInfo *)0x0),
                                                     pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar38,1,(MethodInfo *)0x0);
                                                    pUVar19 = (UnityEngine_UI_Image_o *)
                                                              __this_06->vtable[2].method;
                                                    if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                                      pUVar14 = (UnityEngine_UI_Image_o *)
                                                                __this_06->vtable[2].methodPtr;
                                                      UnityEngine_UI_Image__set_fillAmount
                                                                (pUVar19,fVar60,(MethodInfo *)0x0);
                                                      if (pUVar14 != (UnityEngine_UI_Image_o *)0x0) {
                                                        UnityEngine_UI_Image__set_fillAmount
                                                                  (pUVar14,fVar60,(MethodInfo *)0x0);
                                                        pMVar48 = __this_06->vtable[5].method;
                                                        goto joined_r0x043c4256;
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
                                    else {
                                      pUVar18 = (UnityEngine_Component_o *)__this_06->vtable[4].methodPtr;
                                      if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                         (pUVar38 = UnityEngine_Component__get_gameObject
                                                              (pUVar18,(MethodInfo *)0x0),
                                         pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                        bVar30 = UnityEngine_GameObject__get_activeSelf
                                                           (pUVar38,(MethodInfo *)0x0);
                                        if ((char)bVar30 != '\0') goto label_043c40d5;
                                        pMVar48 = __this_06->vtable[3].method;
                                        if ((pMVar48 == (MethodInfo *)0x0) ||
                                           (pUVar38 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pMVar48,
                                                                 (MethodInfo *)0x0),
                                           pUVar38 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                        bVar30 = UnityEngine_GameObject__get_activeSelf
                                                           (pUVar38,(MethodInfo *)0x0);
                                        if ((char)bVar30 != '\0') goto label_043c40d5;
                                        pUVar18 = (UnityEngine_Component_o *)__this_06->vtable[4].methodPtr;
                                        if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                           (pUVar38 = UnityEngine_Component__get_gameObject
                                                                (pUVar18,(MethodInfo *)0x0),
                                           pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__SetActive(pUVar38,1,(MethodInfo *)0x0);
                                          pUVar18 = (UnityEngine_Component_o *)__this_06->vtable[4].methodPtr;
                                          if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                             (pUVar39 = (UnityEngine_Animator_o *)
                                                        UnityEngine_Component__GetComponent_object_
                                                                  (pUVar18,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator)
                                             , pUVar39 != (UnityEngine_Animator_o *)0x0)) {
                                            UnityEngine_Animator__Update(pUVar39,0.0,(MethodInfo *)0x0);
                                            pUVar18 = (UnityEngine_Component_o *)
                                                      __this_06->vtable[3].methodPtr;
                                            if ((pUVar18 != (UnityEngine_Component_o *)0x0) &&
                                               (pUVar38 = UnityEngine_Component__get_gameObject
                                                                    (pUVar18,(MethodInfo *)0x0),
                                               pUVar38 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0);
                                              goto label_043c42f1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    pUVar19 = (UnityEngine_UI_Image_o *)__this_06->vtable[2].method;
                                    if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                      pUVar14 = (UnityEngine_UI_Image_o *)__this_06->vtable[2].methodPtr;
                                      UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar60,(MethodInfo *)0x0);
                                      if (pUVar14 != (UnityEngine_UI_Image_o *)0x0) {
                                        UnityEngine_UI_Image__set_fillAmount(pUVar14,fVar60,(MethodInfo *)0x0)
                                        ;
                                        vtableDispatch = __this_06->vtable[2].methodPtr;
                                        if (fVar60 <= 0.25) {
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                                      ((int)(__this_06->_1).element_class,
                                                       (int)(__this_06->_1).castClass,vtableDispatch,
                                                       *(undefined8 *)(*(long *)vtableDispatch + 0x2b0)
                                                      );
                                            pMVar48 = __this_06->vtable[2].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              (**(code **)(pMVar48->methodPointer + 0x2a8))
                                                        ((int)(__this_06->_1).element_class,
                                                         (int)(__this_06->_1).castClass,pMVar48,
                                                         *(undefined8 *)(pMVar48->methodPointer + 0x2b0));
                                              vtableDispatch = __this_06->vtable[3].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                uVar61 = SUB84((__this_06->_1).declaringType,0);
                                                goto label_043c405b;
                                              }
                                            }
                                          }
                                        }
                                        else if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                          (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                                    ((int)(__this_06->_1).interopData,
                                                     (int)(__this_06->_1).klass,vtableDispatch,
                                                     *(undefined8 *)(*(long *)vtableDispatch + 0x2b0));
                                          pMVar48 = __this_06->vtable[2].method;
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            (**(code **)(pMVar48->methodPointer + 0x2a8))
                                                      ((int)(__this_06->_1).interopData,
                                                       (int)(__this_06->_1).klass,pMVar48,
                                                       *(undefined8 *)(pMVar48->methodPointer + 0x2b0));
                                            vtableDispatch = __this_06->vtable[3].methodPtr;
                                            if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                              uVar61 = SUB84((__this_06->_1).fields,0);
label_043c405b:
                                              (**(code **)(*(long *)vtableDispatch + 0x2a8))(uVar61);
                                              goto label_043c406b;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
label_043c45cd:
                            pIVar34 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_043c45d2:
                            return (bool_conflict)pIVar34;
                          }
                          bVar6 = *(byte *)(TypeInfo_APGWeapon + 0x130);
                          if ((bVar6 <= bVar4) &&
                             (*(long *)(*(long *)(uVar44 + 200) + -8 + (long)(ulong)bVar6 * 8) == TypeInfo_APGWeapon
                             )) {
                            UI_HUDBottomHandler__UpdateAPG
                                      ((UI_HUDBottomHandler_o *)__this_06,(MethodInfo *)(ulong)bVar6);
                            return extraout_EAX_00;
                          }
                          pIVar54 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
                          if ((bVar4 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
                             (*(long *)(*(long *)(uVar44 + 200) + -8 + (long)pIVar54 * 8) != TypeInfo_AHSSWeapon)) {
                            bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar6 <= bVar4) &&
                               (uVar44 = *(ulong *)(uVar44 + 200),
                               *(Il2CppClass **)((uVar44 - 8) + (long)(ulong)bVar6 * 8) == TypeInfo_ThunderspearWeapon)) {
                              UI_HUDBottomHandler__UpdateTS
                                        ((UI_HUDBottomHandler_o *)__this_06,(MethodInfo *)(ulong)bVar6);
                              return extraout_EAX;
                            }
                            goto label_043c34bd;
                          }
                          plVar35 = &TypeInfo_Object;
                          ppIVar51 = &pIStack_60;
UI_HUDBottomHandler__UpdateAHSS:
                          *(long **)((long)ppIVar51 + -8) = plVar47;
                          *(long **)((long)ppIVar51 + -0x10) = plVar35;
                          *(Il2CppClass **)((long)ppIVar51 + -0x18) = __this_05;
                          *(Il2CppClass **)((long)ppIVar51 + -0x20) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar51 + -0x28) = pIVar34;
                          *(Il2CppClass **)((long)ppIVar51 + -0x30) = pIVar49;
                          *(ulong *)((long)ppIVar51 + -0x38) = uVar44;
                          if (g_data_057ae3e3 == '\0') {
                            *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4af3;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                            g_data_057ae3e3 = '\x01';
                          }
                          lVar46 = *(long *)&(__this_06->_2).static_fields_size;
                          if ((lVar46 == 0) ||
                             (__this_05 = *(Il2CppClass **)(lVar46 + 0x100), __this_05 == (Il2CppClass *)0x0))
                          {
label_043c52c4:
                            *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c52c9;
                            il2cpp_runtime_helper_022b2c90();
                            pIVar34 = __this_05;
                          }
                          else {
                            pvVar12 = (__this_05->_1).image;
                            bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                            pIVar54 = TypeInfo_AmmoWeapon;
                            pIVar34 = __this_05;
                            if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
                               (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + ((ulong)bVar4 - 1) * 8) ==
                                TypeInfo_AmmoWeapon)) {
                              pIVar49 = (Il2CppClass *)__this_06->vtable[7].method;
                              vtableDispatch = __this_06->vtable[8].methodPtr;
                              plVar35 = (long *)&(__this_05->_1).element_class;
                              pIVar54 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4b6b;
                              pIVar34 = (Il2CppClass *)
                                        System_Int32__ToString((int32_t)plVar35,(MethodInfo *)0x0);
                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                uVar59 = *(undefined8 *)(*(long *)vtableDispatch + 0x5f0);
                                pcVar17 = *(code **)(*(long *)vtableDispatch + 0x5e8);
                                *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4b8e;
                                pIVar54 = pIVar34;
                                (*pcVar17)(vtableDispatch,pIVar34,uVar59);
                                unaff_R13 = pIVar34;
                                if (pIVar49 != (Il2CppClass *)0x0) {
                                  pIVar56 = (pIVar49->_1).image;
                                  pMVar48 = pIVar56->vtable[0x4b].method;
                                  vtableDispatch = pIVar56->vtable[0x4b].methodPtr;
                                  *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4bad;
                                  pIVar54 = pIVar34;
                                  (*vtableDispatch)(pIVar49,pIVar34,pMVar48);
                                  pMVar48 = __this_06->vtable[7].method;
                                  if (*(int *)plVar35 == 0) {
                                    if (pMVar48 != (MethodInfo *)0x0) {
                                      pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                      pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                      *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4cfb;
                                      (*pcVar17)(0x3f800000);
                                      vtableDispatch = __this_06->vtable[8].methodPtr;
                                      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                        lVar46 = *(long *)vtableDispatch;
                                        pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                        pcVar17 = *(code **)(lVar46 + 0x2a8);
                                        *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4d2b;
                                        (*pcVar17)(0x3f800000);
                                        iVar32 = *(int *)&(__this_05->_1).castClass;
                                        if (iVar32 != 1) goto label_043c4c1a;
label_043c4d38:
                                        pMVar48 = __this_06->vtable[0xb].method;
                                        if (pMVar48 != (MethodInfo *)0x0) {
                                          pIVar49 = (Il2CppClass *)&(__this_06->_1).this_arg;
                                          pIVar25 = (Il2CppType *)&(__this_06->_1).declaringType;
                                          if (0 < *(int *)plVar35) {
                                            pIVar25 = (Il2CppType *)pIVar49;
                                          }
                                          pvVar12 = pIVar25->data;
                                          vtableDispatch = pMVar48->methodPointer;
                                          pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4d81;
                                          (*pcVar17)((int)pvVar12);
                                          vtableDispatch = __this_06->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pvVar12 = (__this_06->_1).this_arg.data;
                                            lVar46 = *(long *)vtableDispatch;
                                            pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                            pcVar17 = *(code **)(lVar46 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4db0;
                                            (*pcVar17)((int)pvVar12);
                                            pMVar48 = __this_06->vtable[10].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              pvVar12 = (__this_06->_1).this_arg.data;
                                              vtableDispatch = pMVar48->methodPointer;
                                              pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4ddf;
                                              (*pcVar17)((int)pvVar12);
                                              vtableDispatch = __this_06->vtable[0xb].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                pvVar12 = (__this_06->_1).this_arg.data;
                                                lVar46 = *(long *)vtableDispatch;
                                                pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                pcVar17 = *(code **)(lVar46 + 0x2a8);
                                                *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4e0e;
                                                (*pcVar17)((int)pvVar12);
                                                pMVar48 = __this_06->vtable[0xd].method;
                                                if (pMVar48 != (MethodInfo *)0x0) {
                                                  pvVar12 = (__this_06->_1).this_arg.data;
                                                  vtableDispatch = pMVar48->methodPointer;
                                                  pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                                  pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4e3d;
                                                  (*pcVar17)((int)pvVar12);
                                                  vtableDispatch = __this_06->vtable[0xe].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    uVar61 = SUB84(((Il2CppType *)pIVar49)->data,0);
                                                    goto label_043c4eb3;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (pMVar48 != (MethodInfo *)0x0) {
                                    pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                    pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                    *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4be2;
                                    (*pcVar17)();
                                    vtableDispatch = __this_06->vtable[8].methodPtr;
                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                      lVar46 = *(long *)vtableDispatch;
                                      pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                      pcVar17 = *(code **)(lVar46 + 0x2a8);
                                      *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4c0d;
                                      (*pcVar17)();
                                      iVar32 = *(int *)&(__this_05->_1).castClass;
                                      if (iVar32 == 1) goto label_043c4d38;
label_043c4c1a:
                                      if (iVar32 == 0) {
                                        pMVar48 = __this_06->vtable[0xb].method;
                                        if (pMVar48 != (MethodInfo *)0x0) {
                                          pIVar34 = (__this_06->_1).declaringType;
                                          vtableDispatch = pMVar48->methodPointer;
                                          pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4c51;
                                          (*pcVar17)((int)pIVar34);
                                          vtableDispatch = __this_06->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pIVar34 = (__this_06->_1).declaringType;
                                            lVar46 = *(long *)vtableDispatch;
                                            pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                            pcVar17 = *(code **)(lVar46 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4c80;
                                            (*pcVar17)((int)pIVar34);
                                            pMVar48 = __this_06->vtable[0xd].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              pIVar34 = (__this_06->_1).declaringType;
                                              vtableDispatch = pMVar48->methodPointer;
                                              pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4caf;
                                              (*pcVar17)((int)pIVar34);
                                              vtableDispatch = __this_06->vtable[0xe].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                uVar61 = SUB84((__this_06->_1).declaringType,0);
                                                goto label_043c4eb3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar48 = __this_06->vtable[10].method;
                                        if (pMVar48 != (MethodInfo *)0x0) {
                                          pvVar12 = (__this_06->_1).fields;
                                          vtableDispatch = pMVar48->methodPointer;
                                          pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4e8e;
                                          (*pcVar17)((int)pvVar12);
                                          vtableDispatch = __this_06->vtable[0xb].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            uVar61 = SUB84((__this_06->_1).fields,0);
label_043c4eb3:
                                            pIVar54 = *(Il2CppClass **)
                                                       (*(long *)vtableDispatch + 0x2b0);
                                            pcVar17 = *(code **)(*(long *)vtableDispatch + 0x2a8);
                                            *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4ec3;
                                            (*pcVar17)(uVar61);
                                            pMVar48 = __this_06->vtable[0xb].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              pIVar54 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4edb;
                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar48,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar54 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4eee;
                                                bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar38,(MethodInfo *)0x0);
                                                if (((char)bVar30 == '\0') ||
                                                   (*(int *)&(__this_05->_1).castClass < 2)) {
label_043c4f56:
                                                  pUVar18 = (UnityEngine_Component_o *)
                                                            __this_06->vtable[0xc].methodPtr;
                                                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar54 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f6e;
                                                    pUVar38 = UnityEngine_Component__get_gameObject
                                                                        (pUVar18,(MethodInfo *)0x0);
                                                    if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar54 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f81;
                                                      bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar38,(MethodInfo *)0x0);
                                                      if (((char)bVar30 == '\0') ||
                                                         (*(int *)&(__this_05->_1).castClass < 1)) {
label_043c4fe9:
                                                        pMVar48 = __this_06->vtable[0xd].method;
                                                        if (pMVar48 != (MethodInfo *)0x0) {
                                                          pIVar54 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c5001;
                                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar48,(MethodInfo *)0x0);
                                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar54 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                 0x43c5014;
                                                            bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                               (pUVar38,(MethodInfo *)0x0);
                                                            if (((char)bVar30 == '\0') ||
                                                               (0.0 < *(float *)&(__this_06->_2).
                                                                                 interfaces_count)) {
label_043c5083:
                                                              pUVar18 = (UnityEngine_Component_o *)
                                                                        __this_06->vtable[0xe].methodPtr;
                                                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar54 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                     0x43c509b;
                                                                pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar18,(MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar54 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c50ae;
                                                         bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar38,(MethodInfo *)0x0);
                                                         if (((char)bVar30 == '\0') ||
                                                            (0.0 < *(float *)&(__this_06->_2).interfaces_count
                                                            )) {
label_043c511d:
                                                           pMVar48 = __this_06->vtable[0xc].method;
                                                           if (pMVar48 != (MethodInfo *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                  0x43c5135;
                                                             pUVar38 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pMVar48,(MethodInfo *)0x0);
                                                             if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                    0x43c5148;
                                                               bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                                  (pUVar38,(MethodInfo *)0x0);
                                                               if ((char)bVar30 == '\0') {
                                                                 pUVar18 = (UnityEngine_Component_o *)
                                                                           __this_06->vtable[0xd].methodPtr;
                                                                 if (pUVar18 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar54 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                        0x43c5164;
                                                                   pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar18,(MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar54 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c5177;
                                                         bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar38,(MethodInfo *)0x0);
                                                         if ((char)bVar30 == '\0') {
                                                           return bVar30;
                                                         }
                                                         goto label_043c517b;
                                                       }
                                                       }
                                                       }
                                                       else {
label_043c517b:
                                                         if (0.0 < *(float *)&(__this_06->_2).
                                                                              nested_type_count) {
                                                           return bVar30;
                                                         }
                                                         pMVar48 = __this_06->vtable[0xc].method;
                                                         if (pMVar48 != (MethodInfo *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c51b0
                                                           ;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar48,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                  0x43c51c5;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,0,(MethodInfo *)0x0);
                                                             pUVar18 = (UnityEngine_Component_o *)
                                                                       __this_06->vtable[0xd].methodPtr;
                                                             if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                    0x43c51dd;
                                                               pUVar38 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar18,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar54 = (Il2CppClass *)0x0;
                                                                 *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                      0x43c51f2;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar38,0,(MethodInfo *)0x0);
                                                                 pUVar18 = (UnityEngine_Component_o *)
                                                                           __this_06->vtable[0xb].methodPtr;
                                                                 if (pUVar18 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar54 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                        0x43c520a;
                                                                   pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar18,(MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar20 = 0 < *(int *)&(__this_05->_1).castClass;
                                                         pIVar54 = (Il2CppClass *)(ulong)bVar20;
                                                         *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c5228;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar38,(uint)bVar20,(MethodInfo *)0x0);
                                                         pMVar48 = __this_06->vtable[10].method;
                                                         if (pMVar48 != (MethodInfo *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c5240
                                                           ;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar48,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar20 = 1 < *(int *)&(__this_05->_1).castClass;
                                                             pIVar54 = (Il2CppClass *)(ulong)bVar20;
                                                             *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                  0x43c525a;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,(uint)bVar20,(MethodInfo *)0x0
                                                                       );
                                                             pUVar18 = (UnityEngine_Component_o *)
                                                                       __this_06->vtable[0xc].methodPtr;
                                                             if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                    0x43c526e;
                                                               pUVar38 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar18,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 bVar20 = *(int *)&(__this_05->_1).castClass <
                                                                          1;
                                                                 pIVar54 = (Il2CppClass *)(ulong)bVar20;
                                                                 *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                      0x43c5288;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar38,(uint)bVar20,
                                                                            (MethodInfo *)0x0);
                                                                 pMVar48 = __this_06->vtable[0xb].method;
                                                                 if (pMVar48 != (MethodInfo *)0x0) {
                                                                   pIVar54 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                        0x43c529c;
                                                                   pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar38,(uint)(*(int *)&(__this_05->_1).
                                                                                            castClass < 2),
                                                                    (MethodInfo *)0x0);
                                                         return extraout_EAX_03;
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
                                                       else {
                                                         pUVar18 = (UnityEngine_Component_o *)
                                                                   __this_06->vtable[0xe].methodPtr;
                                                         if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c50d8
                                                           ;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               (pUVar18,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                  0x43c50ed;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,0,(MethodInfo *)0x0);
                                                             pUVar18 = (UnityEngine_Component_o *)
                                                                       __this_06->vtable[0xc].methodPtr;
                                                             if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                    0x43c5105;
                                                               pUVar38 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar18,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar54 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                      0x43c511d;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar38,1,(MethodInfo *)0x0);
                                                                 goto label_043c511d;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       else {
                                                         pMVar48 = __this_06->vtable[0xd].method;
                                                         if (pMVar48 != (MethodInfo *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c503e
                                                           ;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar48,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                  0x43c5053;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,0,(MethodInfo *)0x0);
                                                             pMVar48 = __this_06->vtable[0xb].method;
                                                             if (pMVar48 != (MethodInfo *)0x0) {
                                                               pIVar54 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                    0x43c506b;
                                                               pUVar38 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pMVar48,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar54 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                      0x43c5083;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar38,1,(MethodInfo *)0x0);
                                                                 goto label_043c5083;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      else {
                                                        pUVar18 = (UnityEngine_Component_o *)
                                                                  __this_06->vtable[0xc].methodPtr;
                                                        if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                          pIVar54 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4fa4;
                                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                                              (pUVar18,(MethodInfo *)0x0);
                                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar54 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                 0x43c4fb9;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar38,0,(MethodInfo *)0x0);
                                                            pUVar18 = (UnityEngine_Component_o *)
                                                                      __this_06->vtable[0xb].methodPtr;
                                                            if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar54 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                   0x43c4fd1;
                                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar18,(MethodInfo *)0x0);
                                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar54 = (Il2CppClass *)0x1;
                                                                *(undefined8 *)((long)ppIVar51 + -0x40) =
                                                                     0x43c4fe9;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar38,1,(MethodInfo *)0x0);
                                                                goto label_043c4fe9;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  pMVar48 = __this_06->vtable[0xb].method;
                                                  if (pMVar48 != (MethodInfo *)0x0) {
                                                    pIVar54 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f11;
                                                    pUVar38 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar48,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar54 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f26;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar38,0,(MethodInfo *)0x0);
                                                      pMVar48 = __this_06->vtable[10].method;
                                                      if (pMVar48 != (MethodInfo *)0x0) {
                                                        pIVar54 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f3e;
                                                        pUVar38 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar48,(MethodInfo *)0x0);
                                                        if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar54 = (Il2CppClass *)0x1;
                                                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c4f56;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar38,1,(MethodInfo *)0x0);
                                                          goto label_043c4f56;
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
                              goto label_043c52c4;
                            }
                          }
                          *(undefined8 *)((long)ppIVar51 + -0x40) = 0x43c52d1;
                          __this_05 = pIVar34;
                          il2cpp_runtime_helper_022b2fd0();
                          *(long **)((long)ppIVar51 + -0x40) = plVar35;
                          *(Il2CppClass **)((long)ppIVar51 + -0x48) = pIVar34;
                          *(Il2CppClass **)((long)ppIVar51 + -0x50) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar51 + -0x58) = __this_06;
                          *(Il2CppClass **)((long)ppIVar51 + -0x60) = pIVar49;
                          ppIVar52 = (Il2CppClass **)((long)ppIVar51 + -0x70);
                          if (g_data_057ae3e4 == '\0') {
                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5305;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5311;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c531d;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5329;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                            g_data_057ae3e4 = '\x01';
                          }
                          lVar46 = *(long *)&(__this_05->_2).static_fields_size;
                          if (lVar46 == 0) {
label_043c5986:
                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c598b;
                            il2cpp_runtime_helper_022b2c90();
                          }
                          else {
                            plVar35 = *(long **)(lVar46 + 0x100);
                            if ((Il2CppClass *)plVar35 == (Il2CppClass *)0x0) {
label_043c537e:
                              lVar46 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              if ((lVar46 != 0) &&
                                 (((lVar46 = *(long *)(lVar46 + 0x58), lVar46 != 0 &&
                                   (lVar46 = *(long *)(lVar46 + 0x48), lVar46 != 0)) &&
                                  ((Il2CppClass *)plVar35 != (Il2CppClass *)0x0)))) {
                                if (*(char *)(lVar46 + 0x11) == '\0') {
                                  iVar32 = *(int *)((long)&(((Il2CppClass *)plVar35)->_1).element_class + 4);
                                  uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar35)->_1).castClass;
                                  if (iVar32 < 1) {
                                    if (uVar7 == 0xffffffff) {
                                      fVar60 = 1.0;
                                      pUVar19 = (UnityEngine_UI_Image_o *)__this_05->vtable[7].methodPtr;
                                    }
                                    else {
                                      fVar60 = 0.0;
                                      pUVar19 = (UnityEngine_UI_Image_o *)__this_05->vtable[7].methodPtr;
                                    }
                                  }
                                  else {
                                    fVar60 = (float)(int)uVar7 / (float)iVar32;
                                    pUVar19 = (UnityEngine_UI_Image_o *)__this_05->vtable[7].methodPtr;
                                  }
                                  if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar49 = (Il2CppClass *)__this_05->vtable[6].method;
                                    pIVar54 = (Il2CppClass *)0x0;
                                    *(float *)((long)ppIVar51 + -100) = fVar60;
                                    *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5631;
                                    UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar60,(MethodInfo *)0x0);
                                    if (pIVar49 != (Il2CppClass *)0x0) {
                                      pIVar54 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c564a;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar49,
                                                 *(float *)((long)ppIVar51 + -100),(MethodInfo *)0x0);
                                      if (*(float *)((long)ppIVar51 + -100) <= 0.0) {
                                        pMVar48 = __this_05->vtable[0xe].method;
                                        if (pMVar48 != (MethodInfo *)0x0) {
                                          pIVar34 = (__this_05->_1).declaringType;
                                          vtableDispatch = pMVar48->methodPointer;
                                          pIVar54 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar17 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c56ee;
                                          (*pcVar17)((int)pIVar34);
                                          pMVar48 = __this_05->vtable[0xf].method;
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            uVar61 = SUB84((__this_05->_1).declaringType,0);
                                            goto label_043c574d;
                                          }
                                        }
                                      }
                                      else {
                                        pMVar48 = __this_05->vtable[0xe].method;
                                        if (*(float *)((long)ppIVar51 + -100) <= 0.5) {
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            pvVar12 = (__this_05->_1).this_arg.data;
                                            pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                            pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5731;
                                            (*pcVar17)((int)pvVar12);
                                            pMVar48 = __this_05->vtable[0xf].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              uVar61 = SUB84((__this_05->_1).this_arg.data,0);
                                              goto label_043c574d;
                                            }
                                          }
                                        }
                                        else if (pMVar48 != (MethodInfo *)0x0) {
                                          pvVar12 = (__this_05->_1).fields;
                                          pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                          pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c569b;
                                          (*pcVar17)((int)pvVar12);
                                          pMVar48 = __this_05->vtable[0xf].method;
                                          if (pMVar48 != (MethodInfo *)0x0) {
                                            uVar61 = SUB84((__this_05->_1).fields,0);
label_043c574d:
                                            pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c575d;
                                            (*pcVar17)(uVar61);
                                            pMVar48 = __this_05->vtable[7].method;
                                            pIVar49 = (Il2CppClass *)__this_05->vtable[8].methodPtr;
                                            plVar35 = (long *)&(((Il2CppClass *)plVar35)->_1).element_class;
                                            pIVar54 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5779;
                                            pIVar34 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)plVar35,(MethodInfo *)0x0);
                                            if (pIVar49 != (Il2CppClass *)0x0) {
                                              pIVar56 = (pIVar49->_1).image;
                                              pMVar55 = pIVar56->vtable[0x4b].method;
                                              vtableDispatch = pIVar56->vtable[0x4b].methodPtr;
                                              *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c579b;
                                              pIVar54 = pIVar34;
                                              (*vtableDispatch)(pIVar49,pIVar34,pMVar55);
                                              if (pMVar48 != (MethodInfo *)0x0) {
                                                uVar59 = *(undefined8 *)(pMVar48->methodPointer + 0x5f0);
                                                pcVar17 = *(code **)(pMVar48->methodPointer + 0x5e8);
                                                *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c57bb;
                                                (*pcVar17)(pMVar48,pIVar34,uVar59);
                                                pMVar48 = __this_05->vtable[7].method;
                                                pIVar54 = pIVar34;
                                                if (*(int *)plVar35 == 0) {
                                                  if (pMVar48 != (MethodInfo *)0x0) {
                                                    pIVar54 = *(Il2CppClass **)
                                                               (pMVar48->methodPointer + 0x2b0);
                                                    pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5894;
                                                    (*pcVar17)(0x3f800000);
                                                    vtableDispatch = __this_05->vtable[8].methodPtr;
                                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                      lVar46 = *(long *)vtableDispatch;
                                                      pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                      pcVar17 = *(code **)(lVar46 + 0x2a8);
                                                      *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c58c3;
                                                      (*pcVar17)(0x3f800000);
                                                      pMVar48 = __this_05->vtable[0xe].method;
                                                      goto joined_r0x043c58cd;
                                                    }
                                                  }
                                                }
                                                else if (pMVar48 != (MethodInfo *)0x0) {
                                                  pIVar54 = *(Il2CppClass **)(pMVar48->methodPointer + 0x2b0);
                                                  pcVar17 = *(code **)(pMVar48->methodPointer + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c57ef;
                                                  (*pcVar17)();
                                                  vtableDispatch = __this_05->vtable[8].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    lVar46 = *(long *)vtableDispatch;
                                                    pIVar54 = *(Il2CppClass **)(lVar46 + 0x2b0);
                                                    pcVar17 = *(code **)(lVar46 + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5819;
                                                    (*pcVar17)();
                                                    pMVar48 = __this_05->vtable[0xe].method;
joined_r0x043c58cd:
                                                    if (pMVar48 != (MethodInfo *)0x0) {
                                                      pIVar54 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5830;
                                                      pUVar38 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pMVar48,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIVar54 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5843;
                                                        bVar30 = UnityEngine_GameObject__get_activeSelf
                                                                           (pUVar38,(MethodInfo *)0x0);
                                                        if ((char)bVar30 != '\0') {
                                                          return bVar30;
                                                        }
                                                        if (0.0 < *(float *)&(__this_05->_2).nested_type_count
                                                           ) {
                                                          return bVar30;
                                                        }
                                                        if (0.0 < *(float *)&(__this_05->_2).interfaces_count)
                                                        {
                                                          return bVar30;
                                                        }
                                                        pMVar48 = __this_05->vtable[0xe].method;
                                                        if (pMVar48 != (MethodInfo *)0x0) {
                                                          pIVar54 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c58ef;
                                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar48,(MethodInfo *)0x0);
                                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar54 = (Il2CppClass *)0x1;
                                                            *(undefined8 *)((long)ppIVar51 + -0x78) =
                                                                 0x43c5907;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar38,1,(MethodInfo *)0x0);
                                                            pUVar18 = (UnityEngine_Component_o *)
                                                                      __this_05->vtable[0xf].methodPtr;
                                                            if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar54 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar51 + -0x78) =
                                                                   0x43c591a;
                                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar18,(MethodInfo *)0x0);
                                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar54 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar51 + -0x78) =
                                                                     0x43c592b;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar38,0,(MethodInfo *)0x0);
                                                                pMVar48 = __this_05->vtable[0xf].method;
                                                                if (pMVar48 != (MethodInfo *)0x0) {
                                                                  pIVar54 = (Il2CppClass *)0x0;
                                                                  *(undefined8 *)((long)ppIVar51 + -0x78) =
                                                                       0x43c593e;
                                                                  pUVar38 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar54 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c594f;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar38,0,(MethodInfo *)0x0);
                                                         pMVar48 = __this_05->vtable[6].method;
                                                         if (pMVar48 != (MethodInfo *)0x0) {
                                                           pIVar54 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5962
                                                           ;
                                                           pUVar38 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar48,(MethodInfo *)0x0);
                                                           if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar54 = (Il2CppClass *)0x1;
                                                             *(undefined8 *)((long)ppIVar51 + -0x78) =
                                                                  0x43c5976;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar38,1,(MethodInfo *)0x0);
                                                             pUVar18 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[7].methodPtr;
                                                             goto joined_r0x043c5980;
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
                                else {
                                  pIVar54 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c53d3;
                                  fVar60 = Characters_BaseUseable__GetCooldownRatio
                                                     ((Characters_BaseUseable_o *)plVar35,(MethodInfo *)0x0);
                                  *(float *)((long)ppIVar51 + -100) = fVar60;
                                  pUVar19 = (UnityEngine_UI_Image_o *)__this_05->vtable[0x11].method;
                                  if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar49 = (Il2CppClass *)__this_05->vtable[0x11].methodPtr;
                                    pIVar54 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c53fd;
                                    UnityEngine_UI_Image__set_fillAmount
                                              (pUVar19,*(float *)((long)ppIVar51 + -100),(MethodInfo *)0x0);
                                    if (pIVar49 != (Il2CppClass *)0x0) {
                                      pIVar54 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5416;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar49,
                                                 *(float *)((long)ppIVar51 + -100),(MethodInfo *)0x0);
                                      if (((bool)*(char *)&__this_05->vtable[0x12].methodPtr ==
                                           (*(float *)((long)ppIVar51 + -100) <= 1.0 &&
                                           *(float *)((long)ppIVar51 + -100) != 1.0)) ||
                                         (bVar20 = *(float *)((long)ppIVar51 + -100) != 1.0,
                                         bVar21 = *(float *)((long)ppIVar51 + -100) <= 1.0,
                                         *(bool *)&__this_05->vtable[0x12].methodPtr = bVar21 && bVar20,
                                         bVar21 && bVar20)) {
label_043c5518:
                                        pUVar18 = (UnityEngine_Component_o *)__this_05->vtable[0x10].methodPtr
                                        ;
                                        if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                          pIVar54 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c552f;
                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                              (pUVar18,(MethodInfo *)0x0);
                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar54 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5542;
                                            bVar30 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar38,(MethodInfo *)0x0);
                                            if (((char)bVar30 != '\0') ||
                                               (0.0 < *(float *)&(__this_05->_2).nested_type_count)) {
                                              return bVar30;
                                            }
                                            pMVar48 = __this_05->vtable[0x10].method;
                                            if (pMVar48 != (MethodInfo *)0x0) {
                                              pIVar54 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5572;
                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar48,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar54 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5587;
                                                UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar18 = (UnityEngine_Component_o *)
                                                          __this_05->vtable[0x10].methodPtr;
joined_r0x043c5980:
                                                if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar54 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c559e;
                                                  pUVar38 = UnityEngine_Component__get_gameObject
                                                                      (pUVar18,(MethodInfo *)0x0);
                                                  if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar38,1,(MethodInfo *)0x0);
                                                    return extraout_EAX_04;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar48 = __this_05->vtable[0x10].method;
                                        if (pMVar48 != (MethodInfo *)0x0) {
                                          pIVar54 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5462;
                                          pUVar38 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)pMVar48,
                                                               (MethodInfo *)0x0);
                                          if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar54 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5475;
                                            bVar30 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar38,(MethodInfo *)0x0);
                                            if ((char)bVar30 != '\0') goto label_043c5518;
                                            pUVar18 = (UnityEngine_Component_o *)
                                                      __this_05->vtable[0x10].methodPtr;
                                            if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                              pIVar54 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5494;
                                              pUVar38 = UnityEngine_Component__get_gameObject
                                                                  (pUVar18,(MethodInfo *)0x0);
                                              if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar54 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c54a9;
                                                UnityEngine_GameObject__SetActive(pUVar38,0,(MethodInfo *)0x0)
                                                ;
                                                pMVar48 = __this_05->vtable[0x10].method;
                                                if (pMVar48 != (MethodInfo *)0x0) {
                                                  pIVar54 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c54c0;
                                                  pUVar38 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pMVar48,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar54 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c54d8;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar38,1,(MethodInfo *)0x0);
                                                    pMVar48 = __this_05->vtable[0x10].method;
                                                    if (pMVar48 != (MethodInfo *)0x0) {
                                                      *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c54f7;
                                                      pIVar54 = MethodInfo_Animator_GetComponent_Animator;
                                                      pUVar39 = (UnityEngine_Animator_o *)
                                                                UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pMVar48,
                                                                           (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator)
                                                      ;
                                                      if (pUVar39 != (UnityEngine_Animator_o *)0x0) {
                                                        pIVar54 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c550d;
                                                        UnityEngine_Animator__Update
                                                                  (pUVar39,0.0,(MethodInfo *)0x0);
                                                        (__this_05->_2).nested_type_count = 0;
                                                        (__this_05->_2).vtable_count = 0x3f00;
                                                        goto label_043c5518;
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
                              goto label_043c5986;
                            }
                            vtableDispatch = (((Il2CppClass *)plVar35)->_1).image;
                            cVar5 = (code)(TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            pIVar54 = TypeInfo_ThunderspearWeapon;
                            if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
                               (*(Il2CppClass **)
                                 (*(long *)(vtableDispatch + 200) + ((ulong)(byte)cVar5 - 1) * 8) ==
                                TypeInfo_ThunderspearWeapon)) goto label_043c537e;
                          }
                          *(undefined8 *)((long)ppIVar51 + -0x78) = 0x43c5993;
                          __this_06 = (Il2CppClass *)plVar35;
                          il2cpp_runtime_helper_022b2fd0();
                        }
                        *(Il2CppClass **)((long)ppIVar52 + -8) = pIVar49;
                        lVar46 = *(long *)&(__this_06->_2).token;
                        pIVar34 = __this_06;
                        if ((lVar46 != 0) &&
                           (pIVar34 = (Il2CppClass *)__this_06->vtable[0x12].method, pIVar49 = __this_06,
                           pIVar34 != (Il2CppClass *)0x0)) {
                          fVar65 = *(float *)(lVar46 + 0x140) / *(float *)(lVar46 + 0x134);
                          fVar60 = 1.0;
                          if (fVar65 <= 1.0) {
                            fVar60 = fVar65;
                          }
                          pIVar56 = (pIVar34->_1).image;
                          pIVar54 = (Il2CppClass *)pIVar56->vtable[0x2f].method;
                          vtableDispatch = pIVar56->vtable[0x2f].methodPtr;
                          *(undefined8 *)((long)ppIVar52 + -0x10) = 0x43c59fb;
                          (*vtableDispatch)(-(uint)(0.0 <= fVar65) & (uint)fVar60);
                          lVar46 = *(long *)&(__this_06->_2).token;
                          if (lVar46 != 0) {
                            pIVar34 = (Il2CppClass *)__this_06->vtable[0x13].methodPtr;
                            if (*(float *)(lVar46 + 0x140) <= 1.0) {
                              if (pIVar34 != (Il2CppClass *)0x0) {
                                uVar61 = SUB84((__this_06->_1).interfaceOffsets,0);
                                uVar62 = SUB84(__this_06->static_fields,0);
                                goto label_043c5a4b;
                              }
                            }
                            else if (pIVar34 != (Il2CppClass *)0x0) {
                              uVar61 = SUB84((__this_06->_1).nestedTypes,0);
                              uVar62 = SUB84((__this_06->_1).implementedInterfaces,0);
label_043c5a4b:
                              pIVar56 = (pIVar34->_1).image;
                              vtableDispatch = pIVar56->vtable[0x17].methodPtr;
                              bVar30 = (*vtableDispatch)
                                                 (uVar61,uVar62,pIVar34,pIVar56->vtable[0x17].method,
                                                  extraout_RDX,vtableDispatch);
                              return bVar30;
                            }
                          }
                        }
                        *(undefined8 *)((long)ppIVar52 + -0x10) = 0x43c5a64;
                        il2cpp_runtime_helper_022b2c90();
                        *(long **)((long)ppIVar52 + -0x10) = plVar35;
                        *(Il2CppClass **)((long)ppIVar52 + -0x18) = __this_05;
                        *(Il2CppClass **)((long)ppIVar52 + -0x20) = pIVar49;
                        if (g_data_057ae3de == '\0') {
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5a90;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5a9c;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5aa8;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5ab4;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5ac0;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                          g_data_057ae3de = '\x01';
                        }
                        pIVar50 = pIVar34->rgctx_data;
                        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5ae6;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5af0;
                        bVar30 = MiscExtensions__GetActive
                                           ((UnityEngine_GameObject_o *)pIVar50,(MethodInfo *)0x0);
                        if ((char)bVar30 != '\0') {
                          pMVar48 = pIVar34->vtable[0x13].method;
                          if (pMVar48 == (MethodInfo *)0x0) goto label_043c5bc3;
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5b1a;
                          bVar30 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              pMVar48,(Il2CppObject *)pIVar54,MethodInfo_Boolean_ContainsKey);
                          if ((char)bVar30 == '\0') {
                            if (pIVar54 == (Il2CppClass *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5b61;
                            pUVar39 = (UnityEngine_Animator_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pIVar54,
                                                 (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                            pMVar48 = pIVar34->vtable[0x13].method;
                            if (pMVar48 == (MethodInfo *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5b85;
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar48,
                                       (Il2CppObject *)pIVar54,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
                            pIVar50 = (Il2CppRGCTXData *)0x0;
                            if (pUVar39 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
                          }
                          else {
                            pMVar48 = pIVar34->vtable[0x13].method;
                            if (pMVar48 == (MethodInfo *)0x0) {
label_043c5bc3:
                              *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5bc8;
                              uVar59 = il2cpp_runtime_helper_022b2c90();
                              *(Il2CppClass **)((long)ppIVar52 + -0x28) = pIVar54;
                              *(Il2CppRGCTXData **)((long)ppIVar52 + -0x30) = pIVar50;
                              *(undefined8 *)((long)ppIVar52 + -0x38) = uVar59;
                              if (g_data_057ae3e5 == '\0') {
                                *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5bec;
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                                *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5bf8;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
                                *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5c04;
                                il2cpp_runtime_helper_023445d0(&"");
                                g_data_057ae3e5 = '\x01';
                              }
                              pMVar48->klass = (Il2CppClass *)0x3f0000003f800000;
                              pMVar48->return_type = (Il2CppType *)0x3f00000000000000;
                              pMVar48->parameters = (Il2CppType **)0x3f4000003f800000;
                              (pMVar48->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x3f8000003f000000;
                              pMVar48->field8_0x40 = (_union_14)0x3f800000;
                              pMVar48->token = 0;
                              pMVar48->flags = 0;
                              pMVar48->iflags = 0x3f00;
                              pMVar48->slot = 0;
                              pMVar48->parameters_count = 0x80;
                              pMVar48->bitflags = '?';
                              *(undefined4 *)&pMVar48->field_0x54 = 0x3f000000;
                              pMVar48[1].methodPointer = (Il2CppMethodPointer)0x3f8000003f000000;
                              pMVar48[1].virtualMethodPointer = (Il2CppMethodPointer)0x3f8000003f800000;
                              pMVar48[1].invoker_method = (InvokerMethod)0x3f0000003f800000;
                              pMVar48[1].name = (char *)0x3f8000003f800000;
                              pMVar48[1].klass = (Il2CppClass *)0x3f4000003f800000;
                              *(undefined4 *)&pMVar48[1].return_type = 0x3f800000;
                              *(undefined4 *)((long)&pMVar48[1].return_type + 4) = 0x3f800000;
                              *(undefined4 *)&pMVar48[1].parameters = 0x3f800000;
                              *(undefined4 *)((long)&pMVar48[1].parameters + 4) = 0x3f800000;
                              pMVar48[1].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x3e8000003f800000;
                              pMVar48[1].field8_0x40.genericMethod = (void *)0x3f8000003e800000;
                              pMVar48[1].token = 0x3f451eb8;
                              pMVar48[1].flags = 0x1eb8;
                              pMVar48[1].iflags = 0x3f45;
                              pMVar48[1].slot = 0x1eb8;
                              pMVar48[1].parameters_count = 'E';
                              pMVar48[1].bitflags = '?';
                              *(undefined4 *)&pMVar48[1].field_0x54 = 0x3f800000;
                              *(undefined4 *)&pMVar48[2].methodPointer = 0x3f451eb8;
                              *(undefined4 *)((long)&pMVar48[2].methodPointer + 4) = 0x3f000000;
                              *(undefined4 *)&pMVar48[2].virtualMethodPointer = 0x3f000000;
                              *(undefined4 *)((long)&pMVar48[2].virtualMethodPointer + 4) = 0x3f800000;
                              *(System_String_o **)&pMVar48[2].token = "";
                              *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5ca5;
                              il2cpp_runtime_helper_022b4080(&pMVar48[2].token);
                              *(System_String_o **)&pMVar48[2].slot = "";
                              *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5cbb;
                              il2cpp_runtime_helper_022b4080(&pMVar48[2].slot);
                              *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5cca;
                              __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
                              *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5cdf;
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                              pMVar48[7].virtualMethodPointer = (Il2CppMethodPointer)__this_03;
                              *(undefined8 *)((long)ppIVar52 + -0x40) = 0x43c5cf5;
                              il2cpp_runtime_helper_022b4080(&pMVar48[7].virtualMethodPointer);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)pMVar48,(MethodInfo *)0x0);
                              return extraout_EAX_07;
                            }
                            *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5b40;
                            pUVar39 = (UnityEngine_Animator_o *)
                                      System_Collections_Generic_Dictionary_object__object___get_Item
                                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                                 pMVar48,(Il2CppObject *)pIVar54,MethodInfo_Animator_get_Item);
                            if (pUVar39 == (UnityEngine_Animator_o *)0x0) {
                              pIVar50 = (Il2CppRGCTXData *)0x0;
                              goto label_043c5bc3;
                            }
                          }
                          *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5b94;
                          fVar60 = UnityEngine_Animator__get_speed(pUVar39,(MethodInfo *)0x0);
                          if ((fVar60 != 0.0) || (bVar30 = extraout_EAX_05, NAN(fVar60))) {
                            *(undefined8 *)((long)ppIVar52 + -0x28) = 0x43c5bab;
                            UnityEngine_Animator__Update(pUVar39,0.0,(MethodInfo *)0x0);
                            UnityEngine_Animator__set_speed(pUVar39,0.0,(MethodInfo *)0x0);
                            return extraout_EAX_06;
                          }
                        }
                        return bVar30;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_042f2984;
    }
  }
label_042f2994:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adecf == '\0') {
    uStack_c8 = 0x42f29bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecf = '\x01';
  }
  uStack_c8 = 0x42f29d3;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)pIVar56,(Characters_BaseCharacter_o *)pIVar34,(MethodInfo *)0x0);
  pIVar49 = TypeInfo_Human;
  if (pIVar34 != (Il2CppClass *)0x0) {
    pvVar12 = (pIVar34->_1).image;
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + -8 + (ulong)bVar4 * 8) == TypeInfo_Human)) {
      ((_union_14 *)&(pIVar56->_1).element_class)->genericMethod = pIVar34;
      pvVar12 = (pIVar34->_1).image;
      if ((bVar4 <= *(byte *)((long)pvVar12 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + -8 + (ulong)bVar4 * 8) == pIVar49))
      goto label_042f2a2b;
    }
    uStack_c8 = 0x42f2a27;
    il2cpp_runtime_helper_022b2fd0(pIVar34);
  }
  ((_union_14 *)&(pIVar56->_1).element_class)->genericMethod = pIVar34;
label_042f2a2b:
  bVar30 = il2cpp_runtime_helper_022b4080((_union_14 *)&(pIVar56->_1).element_class,pIVar34);
  return bVar30;
}


// Characters.AHSSTwinShot$$OnUse
// il2cpp: void Characters_AHSSTwinShot__OnUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x42f2020

void Characters_AHSSTwinShot__OnUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code cVar4;
  byte bVar5;
  byte bVar6;
  uint32_t uVar7;
  Characters_Human_o *__this_00;
  Outline_o *pOVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  Characters_BaseHitbox_o *__this_01;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  void *pvVar11;
  Characters_BaseUseable_o *__this_02;
  UnityEngine_UI_Image_o *pUVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  InvokerMethod pIVar14;
  System_Object_array *pSVar15;
  code *pcVar16;
  UnityEngine_Component_o *pUVar17;
  UnityEngine_UI_Image_o *pUVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  Il2CppType *pIVar24;
  undefined1 auVar25 [16];
  uint32_t *puVar26;
  undefined1 *puVar27;
  char cVar28;
  bool_conflict bVar29;
  int iVar30;
  uint uVar31;
  Il2CppClass *pIVar32;
  long *plVar33;
  long *plVar34;
  UnityEngine_Transform_o *pUVar35;
  UnityEngine_GameObject_o *pUVar36;
  UnityEngine_Animator_o *pUVar37;
  System_String_o *pSVar38;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar39;
  undefined8 *puVar40;
  UnityEngine_Object_o *pUVar41;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  uint32_t uVar42;
  long lVar43;
  undefined8 extraout_RDX;
  long *plVar44;
  MethodInfo *pMVar45;
  Il2CppClass *pIVar46;
  Il2CppRGCTXData *pIVar47;
  Il2CppClass **ppIVar48;
  Il2CppClass **ppIVar49;
  int iVar50;
  Il2CppClass *pIVar51;
  Il2CppClass *__this_04;
  Il2CppClass *__this_05;
  MethodInfo *pMVar52;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar53;
  Il2CppClass *unaff_R13;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar58;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  float fVar62;
  UnityEngine_Quaternion_o UVar63;
  UnityEngine_Quaternion_Fields UVar64;
  undefined1 auVar65 [12];
  UnityEngine_Vector3_o UVar66;
  UnityEngine_Vector3_o UVar67;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b;
  undefined1 auStack_c8 [12];
  float fStack_bc;
  Il2CppClass *pIStack_b8;
  undefined8 uStack_b0;
  undefined8 local_70;
  Il2CppClass *pIStack_48;
  undefined8 local_40;
  Il2CppRuntimeInterfaceOffsetPair *pIStack_38;
  Characters_AHSSTwinShot_o *pCStack_30;
  Characters_AHSSTwinShot_o *pCStack_28;
  
  if (g_data_057adecd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecd = '\x01';
  }
  pIVar32 = (Il2CppClass *)0x0;
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  plVar44 = (long *)(__this->fields)._owner;
  if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
    vtableDispatch = (((Il2CppClass *)plVar44)->_1).image;
    cVar4 = (code)(TypeInfo_Human->_2).naturalAligment;
    pIVar32 = TypeInfo_Human;
    if (((byte)cVar4 <= (byte)vtableDispatch[0x130]) &&
       (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar4 * 8) ==
        TypeInfo_Human)) {
      plVar44 = *(long **)&(((Il2CppClass *)plVar44)->_2).element_size;
      if ((Il2CppClass *)plVar44 == (Il2CppClass *)0x0) goto label_042f20de;
      vtableDispatch = (((Il2CppClass *)plVar44)->_1).image;
      cVar4 = (code)(TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar32 = TypeInfo_AmmoWeapon;
      if (((byte)cVar4 <= (byte)vtableDispatch[0x130]) &&
         (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar4 * 8) ==
          TypeInfo_AmmoWeapon)) {
        uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar44)->_1).castClass;
        if (-1 < (int)uVar7) {
          uVar42 = 2;
          if (1 < (int)uVar7) {
            uVar42 = uVar7;
          }
          *(uint32_t *)&(((Il2CppClass *)plVar44)->_1).castClass = uVar42 - 2;
        }
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
  }
label_042f20de:
  il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __this;
  if (g_data_057adece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adece = '\x01';
  }
  __this_00 = (((Il2CppClass *)plVar44)->_1).this_arg.data;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f2984;
  bVar5 = (TypeInfo_Human->_2).naturalAligment;
  pIVar32 = TypeInfo_Human;
  if (((__this_00->klass->_2).naturalAligment < bVar5) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_Human)) {
label_042f2989:
    il2cpp_runtime_helper_022b2fd0(__this_00);
    pIVar53 = (Il2CppClass *)plVar44;
  }
  else {
    pIVar32 = (Il2CppClass *)(__this_00->klass->vtable)._66_GetAimPoint.method;
    uVar56 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    fVar57 = (float)((ulong)uVar56 >> 0x20);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar32 = (Il2CppClass *)0x0;
    UVar66 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar61._0_4_ = (float)uVar56 - UVar66.fields.x;
    auVar61._4_4_ = fVar57 - UVar66.fields.y;
    auVar61._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
    auVar61._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
    fVar62 = in_XMM1_Da - UVar66.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar58 = 0;
    uVar59 = 0;
    fVar54 = fVar62 * fVar62 + auVar61._4_4_ * auVar61._4_4_ + auVar61._0_4_ * auVar61._0_4_;
    if (fVar54 < 0.0) {
      fVar54 = sqrtf(fVar54);
      uVar58 = extraout_XMM0_Dc_01;
      uVar59 = extraout_XMM0_Dd_01;
      if (fVar54 <= 1e-05) goto label_042f22b7;
label_042f231f:
      fVar62 = fVar62 / fVar54;
      auVar22._4_4_ = fVar54;
      auVar22._0_4_ = fVar54;
      auVar22._8_4_ = uVar58;
      auVar22._12_4_ = uVar59;
      auVar61 = divps(auVar61,auVar22);
      uVar60 = auVar61._0_8_;
      lVar43._0_4_ = (__this_00->fields).Dead;
      lVar43._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    else {
      fVar54 = SQRT(fVar54);
      if (1e-05 < fVar54) goto label_042f231f;
label_042f22b7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar60 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar62 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar43._0_4_ = (__this_00->fields).Dead;
      lVar43._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    if ((lVar43 == 0) || (*(UnityEngine_Transform_o **)(lVar43 + 0x10) == (UnityEngine_Transform_o *)0x0)) {
label_042f2984:
      il2cpp_runtime_helper_022b2c90();
      goto label_042f2989;
    }
    UVar66 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar43 + 0x10),(MethodInfo *)0x0);
    cVar28 = *(char *)((long)&(__this_00->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar66.fields.x);
    }
    lVar43 = 0xf0;
    if (cVar28 == '\0') {
      lVar43 = 0x108;
    }
    plVar44 = *(long **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar43);
    Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
    *(long **)&(__this_00->fields)._currentVelocity.fields = plVar44;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._currentVelocity,plVar44);
    pIVar32 = (Il2CppClass *)plVar44;
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)plVar44,0.05,0.0,(MethodInfo *)0x0);
    UVar66.fields.z = fVar62;
    UVar66.fields.x = (float)(int)uVar60;
    UVar66.fields.y = (float)(int)((ulong)uVar60 >> 0x20);
    UVar63 = UnityEngine_Quaternion__LookRotation_4debb20(UVar66,(MethodInfo *)0x0);
    UVar66 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar63,(MethodInfo *)0x0);
    UVar67.fields.x = UVar66.fields.x * 57.29578;
    UVar67.fields.y = UVar66.fields.y * 57.29578;
    UVar67.fields.z = UVar66.fields.z * 57.29578;
    UVar66 = UnityEngine_Quaternion__Internal_MakePositive(UVar67,(MethodInfo *)0x0);
    *(float *)&(__this_00->fields).Detection = UVar66.fields.y;
    auVar65._4_8_ = 0;
    auVar65._0_4_ = UVar66.fields.y * 0.017453292;
    UVar64 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar65 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar64;
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) || (plVar44 = *(long **)(lVar43 + 0x10), (Il2CppClass *)plVar44 == (Il2CppClass *)0x0))
    goto label_042f2984;
    UVar63 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)plVar44,(MethodInfo *)0x0);
    local_40 = *(undefined8 *)((long)&(__this_00->fields)._lastMountMessage + 4);
    pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
    uVar2 = (__this_00->fields)._grabIFrames;
    uVar3 = (__this_00->fields)._bladeTrailActive;
    b.fields.w = (float)uVar3;
    b.fields.z = (float)uVar2;
    pIStack_48 = (Il2CppClass *)0x0;
    fVar62 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.x = (float)(undefined4)local_40;
    b.fields.y = (float)local_40._4_4_;
    UVar63 = UnityEngine_Quaternion__Lerp(UVar63,b,fVar62 * 30.0,(MethodInfo *)0x0);
    pIVar32 = (Il2CppClass *)0x0;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar63,(MethodInfo *)0x0);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    pIVar32 = (Il2CppClass *)0x0;
    UVar66 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    lVar43 = *(long *)&(__this_00->fields).Dead;
    if ((lVar43 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar43 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    UVar67 = UnityEngine_Transform__get_up(pUVar35,(MethodInfo *)0x0);
    local_70._0_4_ = UVar66.fields.x;
    local_70._4_4_ = UVar66.fields.y;
    local_70._0_4_ = (float)local_70 + UVar67.fields.x * 0.8;
    local_70._4_4_ = local_70._4_4_ + UVar67.fields.y * 0.8;
    fVar62 = UVar66.fields.z + UVar67.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar54 = (float)uVar56 - (float)local_70;
    fVar57 = fVar57 - local_70._4_4_;
    in_XMM1_Da = in_XMM1_Da - fVar62;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar58 = 0;
    uVar59 = 0;
    fVar55 = in_XMM1_Da * in_XMM1_Da + fVar57 * fVar57 + fVar54 * fVar54;
    if (fVar55 < 0.0) {
      fVar55 = sqrtf(fVar55);
      uVar58 = extraout_XMM0_Dc_04;
      uVar59 = extraout_XMM0_Dd_04;
      if (fVar55 <= 1e-05) goto label_042f25be;
label_042f2610:
      in_XMM1_Da = in_XMM1_Da / fVar55;
      auVar25._4_4_ = fVar57;
      auVar25._0_4_ = fVar54;
      auVar25._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
      auVar25._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
      auVar21._4_4_ = fVar55;
      auVar21._0_4_ = fVar55;
      auVar21._8_4_ = uVar58;
      auVar21._12_4_ = uVar59;
      auVar61 = divps(auVar25,auVar21);
      fVar57 = auVar61._0_4_;
      fVar54 = auVar61._4_4_;
    }
    else {
      fVar55 = SQRT(fVar55);
      if (1e-05 < fVar55) goto label_042f2610;
label_042f25be:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar56 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar57 = (float)uVar56;
      fVar54 = (float)((ulong)uVar56 >> 0x20);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar39 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.y = fVar54;
    forward.fields.x = fVar57;
    forward.fields.z = in_XMM1_Da;
    UVar63 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    position.fields.z = fVar62;
    position.fields.x = (float)local_70;
    position.fields.y = local_70._4_4_;
    Effects_EffectSpawner__Spawn(pSVar39,position,UVar63,2.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pMVar45 = TypeInfo_HumanSounds;
    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar32 = (Il2CppClass *)Characters_HumanSounds__GetRandomAHSSGunShotDouble(pMVar45);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)pIVar32,(MethodInfo *)0x0);
    plVar44 = &TypeInfo_CharacterData;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    if (plVar33 == (long *)0x0) goto label_042f2984;
    pIVar32 = "AHSS";
    plVar33 = (long *)(**(code **)(*plVar33 + 0x1a8))(plVar33,"AHSS",*(undefined8 *)(*plVar33 + 0x1b0));
    pOVar8 = (__this_00->fields).OutlineComponent;
    if (((pOVar8 == (Outline_o *)0x0) ||
        (pSVar9 = pOVar8[1].fields._namesToIgnore, pSVar9 == (System_Collections_Generic_List_string__o *)0x0)
        ) || (plVar33 == (long *)0x0)) goto label_042f2984;
    plVar44 = (long *)pSVar9[2].klass;
    pIVar32 = "Radius";
    plVar34 = (long *)(**(code **)(*plVar33 + 0x1a8))(plVar33,"Radius",*(undefined8 *)(*plVar33 + 0x1b0));
    if (plVar34 == (long *)0x0) goto label_042f2984;
    pIVar32 = *(Il2CppClass **)(*plVar34 + 0x390);
    fVar55 = (float)(**(code **)(*plVar34 + 0x388))(plVar34);
    if ((Il2CppClass *)plVar44 == (Il2CppClass *)0x0) goto label_042f2984;
    vtableDispatch = (((Il2CppClass *)plVar44)->_1).image;
    cVar4 = (code)(TypeInfo_CapsuleCollider->_2).naturalAligment;
    pIVar32 = TypeInfo_CapsuleCollider;
    pIVar53 = (Il2CppClass *)plVar44;
    if (((byte)cVar4 <= (byte)vtableDispatch[0x130]) &&
       (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar4 * 8) ==
        TypeInfo_CapsuleCollider)) {
      pIVar32 = (Il2CppClass *)0x0;
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)plVar44,fVar55 + fVar55,(MethodInfo *)0x0);
      pOVar8 = (__this_00->fields).OutlineComponent;
      if ((pOVar8 != (Outline_o *)0x0) &&
         (pSVar9 = pOVar8[1].fields._namesToIgnore, pSVar9 != (System_Collections_Generic_List_string__o *)0x0
         )) {
        pIVar32 = (Il2CppClass *)0x0;
        pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
        if (pUVar35 != (UnityEngine_Transform_o *)0x0) {
          pIVar32 = (Il2CppClass *)0x0;
          value.fields.z = fVar62;
          value.fields.x = (float)local_70;
          value.fields.y = local_70._4_4_;
          UnityEngine_Transform__set_position(pUVar35,value,(MethodInfo *)0x0);
          pOVar8 = (__this_00->fields).OutlineComponent;
          if ((pOVar8 != (Outline_o *)0x0) &&
             (pSVar9 = pOVar8[1].fields._namesToIgnore,
             pSVar9 != (System_Collections_Generic_List_string__o *)0x0)) {
            pIVar32 = (Il2CppClass *)0x0;
            plVar44 = (long *)UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
            forward_00.fields.y = fVar54;
            forward_00.fields.x = fVar57;
            forward_00.fields.z = in_XMM1_Da;
            UVar63 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
            if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
              pIVar32 = (Il2CppClass *)0x0;
              UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar63,(MethodInfo *)0x0)
              ;
              pOVar8 = (__this_00->fields).OutlineComponent;
              if ((pOVar8 != (Outline_o *)0x0) &&
                 (__this_01 = (Characters_BaseHitbox_o *)pOVar8[1].fields._namesToIgnore,
                 __this_01 != (Characters_BaseHitbox_o *)0x0)) {
                pIVar32 = (Il2CppClass *)0x0;
                Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
                lVar43 = *(long *)&(__this_00->fields).Dead;
                if (lVar43 != 0) {
                  plVar44 = *(long **)(lVar43 + 0x18);
                  pIVar32 = "KnockbackForce";
                  plVar33 = (long *)(**(code **)(*plVar33 + 0x1a8))
                                              (plVar33,"KnockbackForce",*(undefined8 *)(*plVar33 + 0x1b0));
                  if (plVar33 != (long *)0x0) {
                    pIVar32 = *(Il2CppClass **)(*plVar33 + 0x390);
                    fVar62 = (float)(**(code **)(*plVar33 + 0x388))(plVar33);
                    if ((Il2CppClass *)plVar44 != (Il2CppClass *)0x0) {
                      force.fields.y = fVar54 * fVar62 * -2.0;
                      force.fields.x = fVar57 * fVar62 * -2.0;
                      force.fields.z = in_XMM1_Da * fVar62 * -2.0;
                      pIVar32 = (Il2CppClass *)0x2;
                      UnityEngine_Rigidbody__AddForce
                                ((UnityEngine_Rigidbody_o *)plVar44,force,2,(MethodInfo *)0x0);
                      plVar44 = &TypeInfo_UIManager;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar53 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (pIVar53 != (Il2CppClass *)0x0) {
                        vtableDispatch = (pIVar53->_1).image;
                        cVar4 = (code)(TypeInfo_InGameMenu->_2).naturalAligment;
                        pIVar32 = TypeInfo_InGameMenu;
                        if (((byte)vtableDispatch[0x130] < (byte)cVar4) ||
                           (*(Il2CppClass **)
                             (*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar4 * 8) !=
                            TypeInfo_InGameMenu)) goto label_042f2994;
                        pIVar10 = (pIVar53->_1).interfaceOffsets;
                        if (pIVar10 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042f2984;
                        pCStack_30 = pCStack_28;
                        pIVar32 = (Il2CppClass *)0x1;
                        pIVar53 = (Il2CppClass *)0x1;
                        if (g_data_057ae3db == '\0') {
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2dd6;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2de2;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          g_data_057ae3db = '\x01';
                        }
                        pUVar41 = *(UnityEngine_Object_o **)&pIVar10[0x10].offset;
                        plVar44 = &TypeInfo_Object;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e09;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e15;
                        bVar29 = UnityEngine_Object__op_Equality
                                           (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar46 = pIVar10[0xc].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e36;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e42;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar46 = pIVar10[0x1e].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e63;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e6f;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        __this_04 = pIVar10[0x21].interfaceType;
                        if (__this_04 != (Il2CppClass *)0x0) {
                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e97;
                          pUVar36 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                            pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2eaf;
                            UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                            __this_04 = pIVar10[0x21].interfaceType;
                            if (__this_04 != (Il2CppClass *)0x0) {
                              pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ece;
                              pUVar37 = (UnityEngine_Animator_o *)
                                        UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_04,
                                                   (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                              if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ee4;
                                UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                                __this_04 = pIVar10[0x1e].interfaceType;
                                if (__this_04 != (Il2CppClass *)0x0) {
                                  pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2efb;
                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                    pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f10;
                                    UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                    __this_04 = pIVar10[0x1f].interfaceType;
                                    if (__this_04 != (Il2CppClass *)0x0) {
                                      pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f27;
                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_04,
                                                           (MethodInfo *)0x0);
                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f3c;
                                        UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                        __this_04 = pIVar10[0x20].interfaceType;
                                        if (__this_04 != (Il2CppClass *)0x0) {
                                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f53;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)__this_04,
                                                               (MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f68;
                                            UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                            __this_04 = *(Il2CppClass **)&pIVar10[0x21].offset;
                                            if (__this_04 != (Il2CppClass *)0x0) {
                                              pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f88;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)__this_04,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fa0;
                                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0)
                                                ;
                                                __this_04 = *(Il2CppClass **)&pIVar10[0x21].offset;
                                                if (__this_04 != (Il2CppClass *)0x0) {
                                                  pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fbf;
                                                  pUVar37 = (UnityEngine_Animator_o *)
                                                            UnityEngine_Component__GetComponent_object_
                                                                      ((UnityEngine_Component_o *)__this_04,
                                                                       (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                                  if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                                    pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fd5
                                                    ;
                                                    UnityEngine_Animator__Update
                                                              (pUVar37,0.0,(MethodInfo *)0x0);
                                                    __this_04 = *(Il2CppClass **)&pIVar10[0x1e].offset;
                                                    if (__this_04 != (Il2CppClass *)0x0) {
                                                      pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                   0x43c2fe8;
                                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_04,(MethodInfo *)0x0);
                                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                     0x43c2ff9;
                                                        UnityEngine_GameObject__SetActive
                                                                  (pUVar36,0,(MethodInfo *)0x0);
                                                        __this_04 = *(Il2CppClass **)&pIVar10[0x1f].offset;
                                                        if (__this_04 != (Il2CppClass *)0x0) {
                                                          pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                       0x43c300c;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               __this_04,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                         0x43c301d;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,0,(MethodInfo *)0x0);
                                                            __this_04 = *(Il2CppClass **)&pIVar10[0x20].offset
                                                            ;
                                                            if (__this_04 != (Il2CppClass *)0x0) {
                                                              pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *
                                                                           )0x43c3030;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  ((UnityEngine_Component_o *)
                                                                                   __this_04,(MethodInfo *)0x0
                                                                                  );
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair
                                                                              *)0x43c3041;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,0,(MethodInfo *)0x0);
                                                                *(undefined8 *)
                                                                 ((long)&pIVar10[0x12].interfaceType + 4) =
                                                                     0x3f2ac08300000000;
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
                        pIStack_38 = (Il2CppRuntimeInterfaceOffsetPair *)UI_HUDBottomHandler__ShootTS;
                        il2cpp_runtime_helper_022b2c90();
                        local_40 = 1;
                        pIStack_48 = pIVar46;
                        pIStack_38 = pIVar10;
                        if (g_data_057ae3dc == '\0') {
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                          g_data_057ae3dc = '\x01';
                        }
                        pUVar41 = *(UnityEngine_Object_o **)&(__this_04->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar29 = UnityEngine_Object__op_Equality
                                           (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar47 = __this_04->rgctx_data;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar47,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar46 = (Il2CppClass *)__this_04->vtable[0xe].method;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_05 = pIVar46;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        if (((lVar43 != 0) && (lVar43 = *(long *)(lVar43 + 0x58), lVar43 != 0)) &&
                           (lVar43 = *(long *)(lVar43 + 0x48), lVar43 != 0)) {
                          if (*(char *)(lVar43 + 0x11) != '\0') {
                            return;
                          }
                          __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                          if ((__this_05 != (Il2CppClass *)0x0) &&
                             (pUVar36 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0),
                             pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                            __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                            if ((__this_05 != (Il2CppClass *)0x0) &&
                               (pUVar37 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)__this_05,
                                                     (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                               pUVar37 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                              __this_05 = (Il2CppClass *)__this_04->vtable[0xe].method;
                              if ((__this_05 != (Il2CppClass *)0x0) &&
                                 (pUVar36 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                 , pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                __this_05 = (Il2CppClass *)__this_04->vtable[0xf].methodPtr;
                                if ((__this_05 != (Il2CppClass *)0x0) &&
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this_05,
                                                         (MethodInfo *)0x0),
                                   pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                  __this_05 = (Il2CppClass *)__this_04->vtable[6].method;
                                  if ((__this_05 != (Il2CppClass *)0x0) &&
                                     (pUVar36 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_05,
                                                           (MethodInfo *)0x0),
                                     pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                    UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                    __this_05 = (Il2CppClass *)__this_04->vtable[7].methodPtr;
                                    if ((__this_05 != (Il2CppClass *)0x0) &&
                                       (pUVar36 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)__this_05,
                                                             (MethodInfo *)0x0),
                                       pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                      (__this_04->_2).nested_type_count = 0;
                                      (__this_04->_2).vtable_count = 0;
                                      (__this_04->_2).interfaces_count = 0;
                                      (__this_04->_2).interface_offsets_count = 0x3f80;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        if (g_data_057ae3dd == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                          g_data_057ae3dd = '\x01';
                        }
                        pSVar39 = *(System_String_o **)&(__this_05->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar45 = (MethodInfo *)0x0;
                        bVar29 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pSVar39,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 == '\0') {
                          pUVar41 = *(UnityEngine_Object_o **)&(__this_05->_2).token;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar51 = (Il2CppClass *)0x0;
                          bVar29 = UnityEngine_Object__op_Inequality
                                             (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar29 == '\0') {
                            return;
                          }
                          plVar33 = &TypeInfo_Object;
                          ppIVar49 = &pIStack_48;
                        }
                        else {
                          fVar57 = *(float *)&(__this_05->_2).nested_type_count;
                          fVar62 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).nested_type_count = fVar57 - fVar62;
                          fVar57 = *(float *)&(__this_05->_2).field_count;
                          fVar62 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).field_count = fVar57 - fVar62;
                          fVar57 = *(float *)&(__this_05->_2).interfaces_count;
                          fVar62 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).interfaces_count = fVar57 - fVar62;
                          UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          pIVar51 = __this_05;
                          UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar45);
                          lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                          if (lVar43 == 0) {
                            il2cpp_runtime_helper_022b2c90();
                            if (g_data_057ae3e0 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
                              il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
                              il2cpp_runtime_helper_023445d0(&"");
                              g_data_057ae3e0 = '\x01';
                            }
                            lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                            if (lVar43 != 0) {
                              __this_02 = *(Characters_BaseUseable_o **)(lVar43 + 0xf8);
                              if (__this_02 == (Characters_BaseUseable_o *)0x0) {
                                pUVar18 = (UnityEngine_UI_Image_o *)(pIVar51->_2).typeHierarchy;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
                                  pUVar18 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar51->_2).initializationExceptionGCHandle;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
                                    goto label_043c3758;
                                  }
                                }
                              }
                              else {
                                fVar57 = Characters_BaseUseable__GetCooldownRatio(__this_02,(MethodInfo *)0x0)
                                ;
                                pUVar18 = (UnityEngine_UI_Image_o *)(pIVar51->_2).typeHierarchy;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                  pUVar18 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar51->_2).initializationExceptionGCHandle;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                    bVar29 = System_String__op_Inequality
                                                       (*(System_String_o **)&(pIVar51->_2).instance_size,
                                                        *(System_String_o **)&(pIVar51->_2).element_size,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar29 == '\0') {
label_043c3758:
                                      pUVar17 = (pIVar51->_2).unity_user_data;
                                    }
                                    else {
                                      puVar26 = &(pIVar51->_2).instance_size;
                                      (pIVar51->_2).instance_size = (pIVar51->_2).element_size;
                                      (pIVar51->_2).actualSize = (pIVar51->_2).native_size;
                                      il2cpp_runtime_helper_022b4080(puVar26);
                                      bVar29 = System_String__op_Inequality
                                                         (*(System_String_o **)&(pIVar51->_2).instance_size,
                                                          "",(MethodInfo *)0x0);
                                      if ((char)bVar29 == '\0') goto label_043c3758;
                                      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar39 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                                      pSVar38 = System_String__Concat_3ae5ba0
                                                          ("Icons/Specials/",*(System_String_o **)puVar26,
                                                           (MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      texture = (UnityEngine_Texture2D_o *)
                                                ApplicationManagers_ResourceManager__LoadAsset
                                                          (pSVar39,pSVar38,1,(MethodInfo *)0x0);
                                      if (texture == (UnityEngine_Texture2D_o *)0x0) {
                                        il2cpp_runtime_helper_022b2c90();
label_043c384a:
                                        il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                                        il2cpp_runtime_helper_022b2c90();
                                      }
                                      else {
                                        if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                                        iVar30 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                                           (texture,(texture->klass->vtable)._5_get_width.
                                                                    method);
                                        iVar50 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                                        auVar23._4_4_ = (float)iVar50;
                                        auVar23._0_4_ = (float)iVar30;
                                        auVar23._8_8_ = 0;
                                        pSVar39 = (System_String_o *)
                                                  UnityEngine_Sprite__Create_4e0d730
                                                            (texture,(UnityEngine_Rect_o)(auVar23 << 0x40),
                                                             (UnityEngine_Vector2_o)0x3f0000003f000000,
                                                             (MethodInfo *)0x0);
                                        pUVar18 = (pIVar51->_2).unity_user_data;
                                        if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                                        UnityEngine_UI_Image__set_sprite
                                                  (pUVar18,(UnityEngine_Sprite_o *)pSVar39,(MethodInfo *)0x0);
                                        pUVar18 = *(UnityEngine_UI_Image_o **)
                                                   &(pIVar51->_2).initializationExceptionGCHandle;
                                        if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                          UnityEngine_UI_Image__set_sprite
                                                    (pUVar18,(UnityEngine_Sprite_o *)pSVar39,(MethodInfo *)0x0
                                                    );
                                          goto label_043c3758;
                                        }
                                      }
                                      auVar65 = il2cpp_runtime_helper_022b2c90();
                                      if (auVar65._8_4_ != 1) {
                                        _Unwind_Resume(auVar65._0_8_);
                                      }
                                      pSVar39 = (System_String_o *)__cxa_begin_catch(auVar65._0_8_);
                                      cVar28 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(pSVar39->klass->_1).image);
                                      if (cVar28 == '\0') goto label_043c3956;
                                      __cxa_end_catch();
                                      pSVar39 = *(System_String_o **)puVar26;
                                      pSVar38 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                                      pSVar39 = System_String__Concat_3ae5ba0
                                                          (pSVar38,pSVar39,(MethodInfo *)0x0);
                                      lVar43 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                                      if (*(int *)(lVar43 + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0(lVar43);
                                      }
                                      UnityEngine_Debug__Log((Il2CppObject *)pSVar39,(MethodInfo *)0x0);
                                      pUVar17 = (pIVar51->_2).unity_user_data;
                                    }
                                    if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                      pSVar39 = (System_String_o *)
                                                UnityEngine_Component__get_gameObject
                                                          (pUVar17,(MethodInfo *)0x0);
                                      lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                                      if (lVar43 != 0) {
                                        if (*(long *)(lVar43 + 0xf8) == 0) {
                                          uVar31 = 0;
                                        }
                                        else {
                                          uVar31 = System_String__op_Inequality
                                                             (*(System_String_o **)
                                                               &(pIVar51->_2).instance_size,"",
                                                              (MethodInfo *)0x0);
                                        }
                                        if (pSVar39 != (System_String_o *)0x0) {
                                          UnityEngine_GameObject__SetActive
                                                    ((UnityEngine_GameObject_o *)pSVar39,uVar31 & 0xff,
                                                     (MethodInfo *)0x0);
                                          pUVar17 = *(UnityEngine_Component_o **)
                                                     &(pIVar51->_2).initializationExceptionGCHandle;
                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                            pSVar39 = (System_String_o *)
                                                      UnityEngine_Component__get_gameObject
                                                                (pUVar17,(MethodInfo *)0x0);
                                            lVar43 = *(long *)&(pIVar51->_2).static_fields_size;
                                            if (lVar43 != 0) {
                                              if (*(long *)(lVar43 + 0xf8) == 0) {
                                                uVar31 = 0;
                                              }
                                              else {
                                                uVar31 = System_String__op_Inequality
                                                                   (*(System_String_o **)
                                                                     &(pIVar51->_2).instance_size,""
                                                                    ,(MethodInfo *)0x0);
                                              }
                                              if (pSVar39 != (System_String_o *)0x0) {
                                                UnityEngine_GameObject__SetActive
                                                          ((UnityEngine_GameObject_o *)pSVar39,uVar31 & 0xff,
                                                           (MethodInfo *)0x0);
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
                            il2cpp_runtime_helper_022b2c90();
label_043c3956:
                            puVar40 = (undefined8 *)__cxa_allocate_exception(8);
                            *puVar40 = pSVar39->klass;
                            __cxa_throw(puVar40,&PTR_PTR_05215060,0);
                          }
                          plVar33 = *(long **)(lVar43 + 0x100);
                          if (plVar33 == (long *)0x0) {
                            return;
                          }
                          lVar43 = *plVar33;
                          bVar5 = *(byte *)(lVar43 + 0x130);
                          bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                          if ((bVar5 < bVar6) ||
                             (*(Il2CppClass **)(*(long *)(lVar43 + 200) + -8 + (ulong)bVar6 * 8) !=
                              TypeInfo_BladeWeapon)) {
                            bVar6 = *(byte *)(TypeInfo_APGWeapon + 0x130);
                            if ((bVar6 <= bVar5) &&
                               (*(long *)(*(long *)(lVar43 + 200) + -8 + (long)(ulong)bVar6 * 8) ==
                                TypeInfo_APGWeapon)) {
                              UI_HUDBottomHandler__UpdateAPG
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return;
                            }
                            pIVar51 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
                            if ((bVar5 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
                               (*(long *)(*(long *)(lVar43 + 200) + -8 + (long)pIVar51 * 8) != TypeInfo_AHSSWeapon))
                            {
                              bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (bVar5 < bVar6) {
                                return;
                              }
                              if (*(Il2CppClass **)(*(long *)(lVar43 + 200) + -8 + (long)(ulong)bVar6 * 8) !=
                                  TypeInfo_ThunderspearWeapon) {
                                return;
                              }
                              UI_HUDBottomHandler__UpdateTS
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return;
                            }
                            plVar33 = &TypeInfo_Object;
                            ppIVar48 = &pIStack_48;
                          }
                          else {
                            if (g_data_057ae3e1 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                              il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
                              g_data_057ae3e1 = '\x01';
                            }
                            lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                            if ((lVar43 == 0) ||
                               (plVar44 = *(long **)(lVar43 + 0x100),
                               (Il2CppClass *)plVar44 == (Il2CppClass *)0x0)) goto label_043c45cd;
                            pIVar51 = (((Il2CppClass *)plVar44)->_1).image;
                            bVar5 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                            if ((bVar5 <= (pIVar51->_2).naturalAligment) &&
                               ((pIVar51->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_BladeWeapon)) {
                              pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                              if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
                              fVar57 = *(float *)&(((Il2CppClass *)plVar44)->_1).element_class /
                                       *(float *)&(((Il2CppClass *)plVar44)->_1).this_arg.field_0xc;
                              pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                              if (pUVar36 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
                              bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                              if ((char)bVar29 != '\0') {
                                pUVar18 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar12 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar57,(MethodInfo *)0x0);
                                vtableDispatch = __this_05->vtable[2].methodPtr;
                                if (fVar57 <= 0.25) {
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,vtableDispatch,
                                             *(undefined8 *)(*(long *)vtableDispatch + 0x2b0));
                                  pMVar45 = __this_05->vtable[2].method;
                                  if (pMVar45 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar45->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,pMVar45,*(undefined8 *)(pMVar45->methodPointer + 0x2b0));
                                  vtableDispatch = __this_05->vtable[3].methodPtr;
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar58 = SUB84((__this_05->_1).declaringType,0);
                                }
                                else {
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             vtableDispatch,
                                             *(undefined8 *)(*(long *)vtableDispatch + 0x2b0));
                                  pMVar45 = __this_05->vtable[2].method;
                                  if (pMVar45 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar45->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             pMVar45,*(undefined8 *)(pMVar45->methodPointer + 0x2b0));
                                  vtableDispatch = __this_05->vtable[3].methodPtr;
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar58 = SUB84((__this_05->_1).fields,0);
                                }
                                (**(code **)(*(long *)vtableDispatch + 0x2a8))(uVar58);
                              }
                              if (0.0 < fVar57) {
label_043c40d5:
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                if (((char)bVar29 != '\0') ||
                                   (0.0 < *(float *)&(__this_05->_2).nested_type_count)) goto label_043c42f1;
                                pMVar45 = __this_05->vtable[3].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                if (fVar57 <= 0.0) goto label_043c42f1;
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pMVar45 = __this_05->vtable[2].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar18 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar12 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar57,(MethodInfo *)0x0);
                                pMVar45 = __this_05->vtable[5].method;
                              }
                              else {
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                if ((char)bVar29 != '\0') goto label_043c40d5;
                                pMVar45 = __this_05->vtable[3].method;
                                if ((pMVar45 == (MethodInfo *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar45,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar36,(MethodInfo *)0x0);
                                if ((char)bVar29 != '\0') goto label_043c40d5;
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,1,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar37 = (UnityEngine_Animator_o *)
                                              UnityEngine_Component__GetComponent_object_
                                                        (pUVar17,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                                   pUVar37 == (UnityEngine_Animator_o *)0x0)) goto label_043c45cd;
                                UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar36 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0);
label_043c42f1:
                                pMVar45 = __this_05->vtable[5].method;
                              }
                              if (pMVar45 != (MethodInfo *)0x0) {
                                iVar30 = *(int *)&pMVar45->name;
                                iVar50 = *(int *)&(((Il2CppClass *)plVar44)->_1).castClass;
                                if (iVar50 < iVar30) {
                                  if (iVar30 - iVar50 < 1) {
                                    return;
                                  }
                                  iVar50 = 0;
                                  do {
                                    pUVar41 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        ((System_Collections_Generic_List_object__o *)pMVar45,
                                                         0,MethodInfo_GameObject_get_Item);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
                                    pSVar13 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    pUVar41 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        (pSVar13,0,MethodInfo_GameObject_get_Item);
                                    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
                                    pMVar45 = __this_05->vtable[5].method;
                                    if (pMVar45 == (MethodInfo *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt
                                              ((System_Collections_Generic_List_object__o *)pMVar45,0,
                                               MethodInfo_Void_RemoveAt);
                                    pSVar13 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt(pSVar13,0,MethodInfo_Void_RemoveAt);
                                    iVar50 = iVar50 + 1;
                                    if (iVar30 - *(int *)&(((Il2CppClass *)plVar44)->_1).castClass <= iVar50)
                                    {
                                      return;
                                    }
                                    pMVar45 = __this_05->vtable[5].method;
                                  } while (pMVar45 != (MethodInfo *)0x0);
                                }
                                else {
                                  if (iVar50 <= iVar30) {
                                    return;
                                  }
                                  if (iVar50 - iVar30 < 1) {
                                    return;
                                  }
                                  pMVar52 = __this_05->vtable[4].method;
                                  if (pMVar52 != (MethodInfo *)0x0) {
                                    iVar50 = 0;
                                    do {
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)pMVar52,
                                                           (MethodInfo *)0x0);
                                      pUVar36 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      lVar43 = MethodInfo_Void_Add;
                                      if (pMVar45 == (MethodInfo *)0x0) break;
                                      puVar27 = (undefined1 *)((long)&pMVar45->name + 4);
                                      *(int *)puVar27 = *(int *)puVar27 + 1;
                                      pIVar14 = pMVar45->invoker_method;
                                      if (pIVar14 == (InvokerMethod)0x0) break;
                                      uVar31 = *(uint *)&pMVar45->name;
                                      if (uVar31 < *(uint *)(pIVar14 + 0x18)) {
                                        *(uint *)&pMVar45->name = uVar31 + 1;
                                        *(UnityEngine_GameObject_o **)(pIVar14 + (long)(int)uVar31 * 8 + 0x20)
                                             = pUVar36;
                                        il2cpp_runtime_helper_022b4080(pIVar14 + (long)(int)uVar31 * 8 + 0x20);
                                        pUVar36 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pMVar45,
                                                   (Il2CppObject *)pUVar36,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar43 + 0x20) + 0xc0) + 0x70));
                                        pUVar36 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      if (pUVar36 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          (pUVar36,(MethodInfo *)0x0);
                                      pUVar36 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      if (pUVar36 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                          (pUVar36,(MethodInfo *)0x0);
                                      UVar63 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                         ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),
                                                          (MethodInfo *)0x0);
                                      if (pUVar35 == (UnityEngine_Transform_o *)0x0) break;
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar35,UVar63,(MethodInfo *)0x0);
                                      lVar43 = MethodInfo_Void_Add;
                                      pSVar13 = (System_Collections_Generic_List_object__o *)
                                                __this_05->vtable[6].methodPtr;
                                      if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                      piVar1 = &(pSVar13->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pSVar15 = (pSVar13->fields)._items;
                                      if (pSVar15 == (System_Object_array *)0x0) break;
                                      uVar31 = (pSVar13->fields)._size;
                                      if (uVar31 < (uint)pSVar15->max_length) {
                                        (pSVar13->fields)._size = uVar31 + 1;
                                        pSVar15->m_Items[(int)uVar31] = (Il2CppObject *)pUVar36;
                                        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar31);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (pSVar13,(Il2CppObject *)pUVar36,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar43 + 0x20) + 0xc0) + 0x70));
                                      }
                                      iVar50 = iVar50 + 1;
                                      if (*(int *)&(((Il2CppClass *)plVar44)->_1).castClass - iVar30 <= iVar50
                                         ) {
                                        return;
                                      }
                                      pMVar52 = __this_05->vtable[4].method;
                                      pMVar45 = __this_05->vtable[5].method;
                                    } while (pMVar52 != (MethodInfo *)0x0);
                                  }
                                }
                              }
label_043c45cd:
                              il2cpp_runtime_helper_022b2c90();
                              return;
                            }
                            pIVar51 = TypeInfo_BladeWeapon;
                            plVar33 = plVar44;
                            il2cpp_runtime_helper_022b2fd0();
                            uStack_b0 = 1;
                            ppIVar48 = (Il2CppClass **)auStack_c8;
                            pIStack_b8 = pIVar46;
                            if (g_data_057ae3e2 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                              g_data_057ae3e2 = '\x01';
                            }
                            lVar43 = *(long *)&(((Il2CppClass *)plVar33)->_2).static_fields_size;
                            if ((lVar43 == 0) ||
                               (__this_04 = *(Il2CppClass **)(lVar43 + 0x100), __this_04 == (Il2CppClass *)0x0
                               )) {
label_043c4ab9:
                              il2cpp_runtime_helper_022b2c90();
                            }
                            else {
                              pvVar11 = (__this_04->_1).image;
                              bVar5 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                              pIVar51 = TypeInfo_AmmoWeapon;
                              if ((bVar5 <= *(byte *)((long)pvVar11 + 0x130)) &&
                                 (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + ((ulong)bVar5 - 1) * 8)
                                  == TypeInfo_AmmoWeapon)) {
                                iVar30 = *(int *)((long)&(__this_04->_1).element_class + 4);
                                iVar50 = *(int *)&(__this_04->_1).castClass;
                                if (iVar30 < 1) {
                                  if (iVar50 == -1) {
                                    fVar57 = 1.0;
                                    pUVar18 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                  else {
                                    fVar57 = 0.0;
                                    pUVar18 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                }
                                else {
                                  fVar57 = (float)iVar50 / (float)iVar30;
                                  pUVar18 = (UnityEngine_UI_Image_o *)
                                            ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                }
                                pIVar32 = (Il2CppClass *)0x1;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)((Il2CppClass *)plVar33)->vtable[6].method;
                                  pIVar51 = (Il2CppClass *)0x0;
                                  fStack_bc = fVar57;
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                  pIVar32 = pIVar53;
                                  if (pIVar46 != (Il2CppClass *)0x0) {
                                    pIVar51 = (Il2CppClass *)0x0;
                                    UnityEngine_UI_Image__set_fillAmount
                                              ((UnityEngine_UI_Image_o *)pIVar46,fStack_bc,(MethodInfo *)0x0);
                                    if (fStack_bc <= 0.0) {
                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (pMVar45 != (MethodInfo *)0x0) {
                                        vtableDispatch = pMVar45->methodPointer;
                                        pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                        (**(code **)(vtableDispatch + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                        vtableDispatch = ((Il2CppClass *)plVar33)->vtable[10].methodPtr
                                        ;
                                        if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                          lVar43 = *(long *)vtableDispatch;
                                          pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                          (**(code **)(lVar43 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                          pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar58 = SUB84((((Il2CppClass *)plVar33)->_1).declaringType,0);
                                            goto label_043c4886;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (fStack_bc <= 0.5) {
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                          (**(code **)(pMVar45->methodPointer + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                          vtableDispatch =
                                               ((Il2CppClass *)plVar33)->vtable[10].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            lVar43 = *(long *)vtableDispatch;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            (**(code **)(lVar43 + 0x2a8))
                                                      ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                            pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              uVar58 = SUB84((((Il2CppClass *)plVar33)->_1).this_arg.data,0);
                                              goto label_043c4886;
                                            }
                                          }
                                        }
                                      }
                                      else if (pMVar45 != (MethodInfo *)0x0) {
                                        pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                        (**(code **)(pMVar45->methodPointer + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                        vtableDispatch = ((Il2CppClass *)plVar33)->vtable[10].methodPtr
                                        ;
                                        if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                          lVar43 = *(long *)vtableDispatch;
                                          pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                          (**(code **)(lVar43 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                          pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar58 = SUB84((((Il2CppClass *)plVar33)->_1).fields,0);
label_043c4886:
                                            (**(code **)(pMVar45->methodPointer + 0x2a8))(uVar58);
                                            unaff_R13 = (Il2CppClass *)
                                                        ((Il2CppClass *)plVar33)->vtable[7].method;
                                            pIVar46 = (Il2CppClass *)
                                                      ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                            __this_04 = (Il2CppClass *)&(__this_04->_1).element_class;
                                            pIVar51 = (Il2CppClass *)0x0;
                                            pIVar53 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)__this_04,(MethodInfo *)0x0);
                                            if ((pIVar46 != (Il2CppClass *)0x0) &&
                                               (pIVar32 = (pIVar46->_1).image, pIVar51 = pIVar53,
                                               (*pIVar32->vtable[0x4b].methodPtr)
                                                         (pIVar46,pIVar53,pIVar32->vtable[0x4b].method),
                                               pIVar32 = pIVar53, unaff_R13 != (Il2CppClass *)0x0)) {
                                              vtableDispatch = (unaff_R13->_1).image;
                                              pIVar51 = pIVar53;
                                              (**(code **)(vtableDispatch + 0x5e8))
                                                        (unaff_R13,pIVar53,
                                                         *(undefined8 *)(vtableDispatch + 0x5f0));
                                              pMVar45 = ((Il2CppClass *)plVar33)->vtable[7].method;
                                              if (*(int *)__this_04 == 0) {
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                  (**(code **)(pMVar45->methodPointer + 0x2a8))(0x3f800000);
                                                  vtableDispatch =
                                                       ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    lVar43 = *(long *)vtableDispatch;
                                                    pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                    (**(code **)(lVar43 + 0x2a8))(0x3f800000);
                                                    pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                    goto joined_r0x043c4a06;
                                                  }
                                                }
                                              }
                                              else if (pMVar45 != (MethodInfo *)0x0) {
                                                pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                (**(code **)(pMVar45->methodPointer + 0x2a8))();
                                                vtableDispatch =
                                                     ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                  lVar43 = *(long *)vtableDispatch;
                                                  pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                  (**(code **)(lVar43 + 0x2a8))();
                                                  pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
joined_r0x043c4a06:
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar45,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar36,(MethodInfo *)0x0);
                                                      if ((((char)bVar29 != '\0') ||
                                                          (0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                            nested_type_count)) ||
                                                         (0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                           interfaces_count)) {
                                                        return;
                                                      }
                                                      pMVar45 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                      if (pMVar45 != (MethodInfo *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        pUVar36 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar45,(MethodInfo *)0x0);
                                                        if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x1;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar36,1,(MethodInfo *)0x0);
                                                          pUVar17 = (UnityEngine_Component_o *)
                                                                    ((Il2CppClass *)plVar33)->vtable[10].
                                                                    methodPtr;
                                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            pUVar36 = UnityEngine_Component__get_gameObject
                                                                                (pUVar17,(MethodInfo *)0x0);
                                                            if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar36,0,(MethodInfo *)0x0);
                                                              pUVar17 = (UnityEngine_Component_o *)
                                                                        ((Il2CppClass *)plVar33)->vtable[9].
                                                                        methodPtr;
                                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,0,(MethodInfo *)0x0);
                                                         pMVar45 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
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
                                goto label_043c4ab9;
                              }
                            }
                            __this_05 = __this_04;
                            lVar43 = il2cpp_runtime_helper_022b2fd0();
                          }
                          *(long **)((long)ppIVar48 + -8) = plVar44;
                          *(long **)((long)ppIVar48 + -0x10) = plVar33;
                          *(Il2CppClass **)((long)ppIVar48 + -0x18) = __this_04;
                          *(Il2CppClass **)((long)ppIVar48 + -0x20) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar48 + -0x28) = pIVar32;
                          *(Il2CppClass **)((long)ppIVar48 + -0x30) = pIVar46;
                          *(long *)((long)ppIVar48 + -0x38) = lVar43;
                          if (g_data_057ae3e3 == '\0') {
                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4af3;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                            g_data_057ae3e3 = '\x01';
                          }
                          lVar43 = *(long *)&(__this_05->_2).static_fields_size;
                          if ((lVar43 == 0) ||
                             (__this_04 = *(Il2CppClass **)(lVar43 + 0x100), __this_04 == (Il2CppClass *)0x0))
                          {
label_043c52c4:
                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c52c9;
                            il2cpp_runtime_helper_022b2c90();
                            pIVar32 = __this_04;
                          }
                          else {
                            pvVar11 = (__this_04->_1).image;
                            bVar5 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                            pIVar51 = TypeInfo_AmmoWeapon;
                            pIVar32 = __this_04;
                            if ((bVar5 <= *(byte *)((long)pvVar11 + 0x130)) &&
                               (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + ((ulong)bVar5 - 1) * 8) ==
                                TypeInfo_AmmoWeapon)) {
                              pIVar46 = (Il2CppClass *)__this_05->vtable[7].method;
                              vtableDispatch = __this_05->vtable[8].methodPtr;
                              plVar33 = (long *)&(__this_04->_1).element_class;
                              pIVar51 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4b6b;
                              pIVar32 = (Il2CppClass *)
                                        System_Int32__ToString((int32_t)plVar33,(MethodInfo *)0x0);
                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                uVar56 = *(undefined8 *)(*(long *)vtableDispatch + 0x5f0);
                                pcVar16 = *(code **)(*(long *)vtableDispatch + 0x5e8);
                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4b8e;
                                pIVar51 = pIVar32;
                                (*pcVar16)(vtableDispatch,pIVar32,uVar56);
                                unaff_R13 = pIVar32;
                                if (pIVar46 != (Il2CppClass *)0x0) {
                                  pIVar53 = (pIVar46->_1).image;
                                  pMVar45 = pIVar53->vtable[0x4b].method;
                                  vtableDispatch = pIVar53->vtable[0x4b].methodPtr;
                                  *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4bad;
                                  pIVar51 = pIVar32;
                                  (*vtableDispatch)(pIVar46,pIVar32,pMVar45);
                                  pMVar45 = __this_05->vtable[7].method;
                                  if (*(int *)plVar33 == 0) {
                                    if (pMVar45 != (MethodInfo *)0x0) {
                                      pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                      pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4cfb;
                                      (*pcVar16)(0x3f800000);
                                      vtableDispatch = __this_05->vtable[8].methodPtr;
                                      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                        lVar43 = *(long *)vtableDispatch;
                                        pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                        pcVar16 = *(code **)(lVar43 + 0x2a8);
                                        *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4d2b;
                                        (*pcVar16)(0x3f800000);
                                        iVar30 = *(int *)&(__this_04->_1).castClass;
                                        if (iVar30 != 1) goto label_043c4c1a;
label_043c4d38:
                                        pMVar45 = __this_05->vtable[0xb].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar46 = (Il2CppClass *)&(__this_05->_1).this_arg;
                                          pIVar24 = (Il2CppType *)&(__this_05->_1).declaringType;
                                          if (0 < *(int *)plVar33) {
                                            pIVar24 = (Il2CppType *)pIVar46;
                                          }
                                          pvVar11 = pIVar24->data;
                                          vtableDispatch = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4d81;
                                          (*pcVar16)((int)pvVar11);
                                          vtableDispatch = __this_05->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pvVar11 = (__this_05->_1).this_arg.data;
                                            lVar43 = *(long *)vtableDispatch;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            pcVar16 = *(code **)(lVar43 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4db0;
                                            (*pcVar16)((int)pvVar11);
                                            pMVar45 = __this_05->vtable[10].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pvVar11 = (__this_05->_1).this_arg.data;
                                              vtableDispatch = pMVar45->methodPointer;
                                              pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4ddf;
                                              (*pcVar16)((int)pvVar11);
                                              vtableDispatch = __this_05->vtable[0xb].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                pvVar11 = (__this_05->_1).this_arg.data;
                                                lVar43 = *(long *)vtableDispatch;
                                                pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                pcVar16 = *(code **)(lVar43 + 0x2a8);
                                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e0e;
                                                (*pcVar16)((int)pvVar11);
                                                pMVar45 = __this_05->vtable[0xd].method;
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pvVar11 = (__this_05->_1).this_arg.data;
                                                  vtableDispatch = pMVar45->methodPointer;
                                                  pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                                  pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e3d;
                                                  (*pcVar16)((int)pvVar11);
                                                  vtableDispatch = __this_05->vtable[0xe].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    uVar58 = SUB84(((Il2CppType *)pIVar46)->data,0);
                                                    goto label_043c4eb3;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (pMVar45 != (MethodInfo *)0x0) {
                                    pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                    pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4be2;
                                    (*pcVar16)();
                                    vtableDispatch = __this_05->vtable[8].methodPtr;
                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                      lVar43 = *(long *)vtableDispatch;
                                      pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                      pcVar16 = *(code **)(lVar43 + 0x2a8);
                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c0d;
                                      (*pcVar16)();
                                      iVar30 = *(int *)&(__this_04->_1).castClass;
                                      if (iVar30 == 1) goto label_043c4d38;
label_043c4c1a:
                                      if (iVar30 == 0) {
                                        pMVar45 = __this_05->vtable[0xb].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar32 = (__this_05->_1).declaringType;
                                          vtableDispatch = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c51;
                                          (*pcVar16)((int)pIVar32);
                                          vtableDispatch = __this_05->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pIVar32 = (__this_05->_1).declaringType;
                                            lVar43 = *(long *)vtableDispatch;
                                            pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                            pcVar16 = *(code **)(lVar43 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4c80;
                                            (*pcVar16)((int)pIVar32);
                                            pMVar45 = __this_05->vtable[0xd].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar32 = (__this_05->_1).declaringType;
                                              vtableDispatch = pMVar45->methodPointer;
                                              pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4caf;
                                              (*pcVar16)((int)pIVar32);
                                              vtableDispatch = __this_05->vtable[0xe].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                uVar58 = SUB84((__this_05->_1).declaringType,0);
                                                goto label_043c4eb3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_05->vtable[10].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pvVar11 = (__this_05->_1).fields;
                                          vtableDispatch = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4e8e;
                                          (*pcVar16)((int)pvVar11);
                                          vtableDispatch = __this_05->vtable[0xb].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            uVar58 = SUB84((__this_05->_1).fields,0);
label_043c4eb3:
                                            pIVar51 = *(Il2CppClass **)
                                                       (*(long *)vtableDispatch + 0x2b0);
                                            pcVar16 = *(code **)(*(long *)vtableDispatch + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4ec3;
                                            (*pcVar16)(uVar58);
                                            pMVar45 = __this_05->vtable[0xb].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4edb;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar45,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4eee;
                                                bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar36,(MethodInfo *)0x0);
                                                if (((char)bVar29 == '\0') ||
                                                   (*(int *)&(__this_04->_1).castClass < 2)) {
label_043c4f56:
                                                  pUVar17 = (UnityEngine_Component_o *)
                                                            __this_05->vtable[0xc].methodPtr;
                                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f6e;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        (pUVar17,(MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f81;
                                                      bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar36,(MethodInfo *)0x0);
                                                      if (((char)bVar29 == '\0') ||
                                                         (*(int *)&(__this_04->_1).castClass < 1)) {
label_043c4fe9:
                                                        pMVar45 = __this_05->vtable[0xd].method;
                                                        if (pMVar45 != (MethodInfo *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5001;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar45,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                 0x43c5014;
                                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                               (pUVar36,(MethodInfo *)0x0);
                                                            if (((char)bVar29 == '\0') ||
                                                               (0.0 < *(float *)&(__this_05->_2).
                                                                                 interfaces_count)) {
label_043c5083:
                                                              pUVar17 = (UnityEngine_Component_o *)
                                                                        __this_05->vtable[0xe].methodPtr;
                                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                     0x43c509b;
                                                                pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c50ae;
                                                         bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar36,(MethodInfo *)0x0);
                                                         if (((char)bVar29 == '\0') ||
                                                            (0.0 < *(float *)&(__this_05->_2).interfaces_count
                                                            )) {
label_043c511d:
                                                           pMVar45 = __this_05->vtable[0xc].method;
                                                           if (pMVar45 != (MethodInfo *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c5135;
                                                             pUVar36 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pMVar45,(MethodInfo *)0x0);
                                                             if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c5148;
                                                               bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                                  (pUVar36,(MethodInfo *)0x0);
                                                               if ((char)bVar29 == '\0') {
                                                                 pUVar17 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xd].methodPtr;
                                                                 if (pUVar17 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c5164;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5177;
                                                         bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar36,(MethodInfo *)0x0);
                                                         if ((char)bVar29 == '\0') {
                                                           return;
                                                         }
                                                         goto label_043c517b;
                                                       }
                                                       }
                                                       }
                                                       else {
label_043c517b:
                                                         if (0.0 < *(float *)&(__this_05->_2).
                                                                              nested_type_count) {
                                                           return;
                                                         }
                                                         pMVar45 = __this_05->vtable[0xc].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c51b0
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c51c5;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xd].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c51dd;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x0;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c51f2;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,0,(MethodInfo *)0x0);
                                                                 pUVar17 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xb].methodPtr;
                                                                 if (pUVar17 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c520a;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar19 = 0 < *(int *)&(__this_04->_1).castClass;
                                                         pIVar51 = (Il2CppClass *)(ulong)bVar19;
                                                         *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5228;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,(uint)bVar19,(MethodInfo *)0x0);
                                                         pMVar45 = __this_05->vtable[10].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c5240
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar19 = 1 < *(int *)&(__this_04->_1).castClass;
                                                             pIVar51 = (Il2CppClass *)(ulong)bVar19;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c525a;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,(uint)bVar19,(MethodInfo *)0x0
                                                                       );
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c526e;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 bVar19 = *(int *)&(__this_04->_1).castClass <
                                                                          1;
                                                                 pIVar51 = (Il2CppClass *)(ulong)bVar19;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c5288;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,(uint)bVar19,
                                                                            (MethodInfo *)0x0);
                                                                 pMVar45 = __this_05->vtable[0xb].method;
                                                                 if (pMVar45 != (MethodInfo *)0x0) {
                                                                   pIVar51 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                        0x43c529c;
                                                                   pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar45,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,(uint)(*(int *)&(__this_04->_1).
                                                                                            castClass < 2),
                                                                    (MethodInfo *)0x0);
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
                                                       else {
                                                         pUVar17 = (UnityEngine_Component_o *)
                                                                   __this_05->vtable[0xe].methodPtr;
                                                         if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c50d8
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               (pUVar17,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c50ed;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c5105;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c511d;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,1,(MethodInfo *)0x0);
                                                                 goto label_043c511d;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       else {
                                                         pMVar45 = __this_05->vtable[0xd].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c503e
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                  0x43c5053;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,0,(MethodInfo *)0x0);
                                                             pMVar45 = __this_05->vtable[0xb].method;
                                                             if (pMVar45 != (MethodInfo *)0x0) {
                                                               pIVar51 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                    0x43c506b;
                                                               pUVar36 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pMVar45,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar51 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                      0x43c5083;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar36,1,(MethodInfo *)0x0);
                                                                 goto label_043c5083;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      else {
                                                        pUVar17 = (UnityEngine_Component_o *)
                                                                  __this_05->vtable[0xc].methodPtr;
                                                        if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4fa4;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              (pUVar17,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                 0x43c4fb9;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,0,(MethodInfo *)0x0);
                                                            pUVar17 = (UnityEngine_Component_o *)
                                                                      __this_05->vtable[0xb].methodPtr;
                                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                   0x43c4fd1;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar17,(MethodInfo *)0x0);
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar51 = (Il2CppClass *)0x1;
                                                                *(undefined8 *)((long)ppIVar48 + -0x40) =
                                                                     0x43c4fe9;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,1,(MethodInfo *)0x0);
                                                                goto label_043c4fe9;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  pMVar45 = __this_05->vtable[0xb].method;
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f11;
                                                    pUVar36 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar45,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f26;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar36,0,(MethodInfo *)0x0);
                                                      pMVar45 = __this_05->vtable[10].method;
                                                      if (pMVar45 != (MethodInfo *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f3e;
                                                        pUVar36 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar45,(MethodInfo *)0x0);
                                                        if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x1;
                                                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c4f56;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar36,1,(MethodInfo *)0x0);
                                                          goto label_043c4f56;
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
                              goto label_043c52c4;
                            }
                          }
                          *(undefined8 *)((long)ppIVar48 + -0x40) = 0x43c52d1;
                          __this_04 = pIVar32;
                          il2cpp_runtime_helper_022b2fd0();
                          *(long **)((long)ppIVar48 + -0x40) = plVar33;
                          *(Il2CppClass **)((long)ppIVar48 + -0x48) = pIVar32;
                          *(Il2CppClass **)((long)ppIVar48 + -0x50) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar48 + -0x58) = __this_05;
                          *(Il2CppClass **)((long)ppIVar48 + -0x60) = pIVar46;
                          ppIVar49 = (Il2CppClass **)((long)ppIVar48 + -0x70);
                          if (g_data_057ae3e4 == '\0') {
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5305;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5311;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c531d;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5329;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                            g_data_057ae3e4 = '\x01';
                          }
                          lVar43 = *(long *)&(__this_04->_2).static_fields_size;
                          if (lVar43 == 0) {
label_043c5986:
                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c598b;
                            il2cpp_runtime_helper_022b2c90();
                          }
                          else {
                            plVar33 = *(long **)(lVar43 + 0x100);
                            if ((Il2CppClass *)plVar33 == (Il2CppClass *)0x0) {
label_043c537e:
                              lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              if ((lVar43 != 0) &&
                                 (((lVar43 = *(long *)(lVar43 + 0x58), lVar43 != 0 &&
                                   (lVar43 = *(long *)(lVar43 + 0x48), lVar43 != 0)) &&
                                  ((Il2CppClass *)plVar33 != (Il2CppClass *)0x0)))) {
                                if (*(char *)(lVar43 + 0x11) == '\0') {
                                  iVar30 = *(int *)((long)&(((Il2CppClass *)plVar33)->_1).element_class + 4);
                                  uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar33)->_1).castClass;
                                  if (iVar30 < 1) {
                                    if (uVar7 == 0xffffffff) {
                                      fVar57 = 1.0;
                                      pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                    else {
                                      fVar57 = 0.0;
                                      pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                  }
                                  else {
                                    fVar57 = (float)(int)uVar7 / (float)iVar30;
                                    pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                  }
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)__this_04->vtable[6].method;
                                    pIVar51 = (Il2CppClass *)0x0;
                                    *(float *)((long)ppIVar48 + -100) = fVar57;
                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5631;
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar57,(MethodInfo *)0x0);
                                    if (pIVar46 != (Il2CppClass *)0x0) {
                                      pIVar51 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c564a;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar46,
                                                 *(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                      if (*(float *)((long)ppIVar48 + -100) <= 0.0) {
                                        pMVar45 = __this_04->vtable[0xe].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar32 = (__this_04->_1).declaringType;
                                          vtableDispatch = pMVar45->methodPointer;
                                          pIVar51 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c56ee;
                                          (*pcVar16)((int)pIVar32);
                                          pMVar45 = __this_04->vtable[0xf].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar58 = SUB84((__this_04->_1).declaringType,0);
                                            goto label_043c574d;
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_04->vtable[0xe].method;
                                        if (*(float *)((long)ppIVar48 + -100) <= 0.5) {
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            pvVar11 = (__this_04->_1).this_arg.data;
                                            pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                            pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5731;
                                            (*pcVar16)((int)pvVar11);
                                            pMVar45 = __this_04->vtable[0xf].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              uVar58 = SUB84((__this_04->_1).this_arg.data,0);
                                              goto label_043c574d;
                                            }
                                          }
                                        }
                                        else if (pMVar45 != (MethodInfo *)0x0) {
                                          pvVar11 = (__this_04->_1).fields;
                                          pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                          pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c569b;
                                          (*pcVar16)((int)pvVar11);
                                          pMVar45 = __this_04->vtable[0xf].method;
                                          if (pMVar45 != (MethodInfo *)0x0) {
                                            uVar58 = SUB84((__this_04->_1).fields,0);
label_043c574d:
                                            pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c575d;
                                            (*pcVar16)(uVar58);
                                            pMVar45 = __this_04->vtable[7].method;
                                            pIVar46 = (Il2CppClass *)__this_04->vtable[8].methodPtr;
                                            plVar33 = (long *)&(((Il2CppClass *)plVar33)->_1).element_class;
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5779;
                                            pIVar32 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)plVar33,(MethodInfo *)0x0);
                                            if (pIVar46 != (Il2CppClass *)0x0) {
                                              pIVar53 = (pIVar46->_1).image;
                                              pMVar52 = pIVar53->vtable[0x4b].method;
                                              vtableDispatch = pIVar53->vtable[0x4b].methodPtr;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c579b;
                                              pIVar51 = pIVar32;
                                              (*vtableDispatch)(pIVar46,pIVar32,pMVar52);
                                              if (pMVar45 != (MethodInfo *)0x0) {
                                                uVar56 = *(undefined8 *)(pMVar45->methodPointer + 0x5f0);
                                                pcVar16 = *(code **)(pMVar45->methodPointer + 0x5e8);
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c57bb;
                                                (*pcVar16)(pMVar45,pIVar32,uVar56);
                                                pMVar45 = __this_04->vtable[7].method;
                                                pIVar51 = pIVar32;
                                                if (*(int *)plVar33 == 0) {
                                                  if (pMVar45 != (MethodInfo *)0x0) {
                                                    pIVar51 = *(Il2CppClass **)
                                                               (pMVar45->methodPointer + 0x2b0);
                                                    pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5894;
                                                    (*pcVar16)(0x3f800000);
                                                    vtableDispatch = __this_04->vtable[8].methodPtr;
                                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                      lVar43 = *(long *)vtableDispatch;
                                                      pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                      pcVar16 = *(code **)(lVar43 + 0x2a8);
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c58c3;
                                                      (*pcVar16)(0x3f800000);
                                                      pMVar45 = __this_04->vtable[0xe].method;
                                                      goto joined_r0x043c58cd;
                                                    }
                                                  }
                                                }
                                                else if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = *(Il2CppClass **)(pMVar45->methodPointer + 0x2b0);
                                                  pcVar16 = *(code **)(pMVar45->methodPointer + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c57ef;
                                                  (*pcVar16)();
                                                  vtableDispatch = __this_04->vtable[8].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    lVar43 = *(long *)vtableDispatch;
                                                    pIVar51 = *(Il2CppClass **)(lVar43 + 0x2b0);
                                                    pcVar16 = *(code **)(lVar43 + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5819;
                                                    (*pcVar16)();
                                                    pMVar45 = __this_04->vtable[0xe].method;
joined_r0x043c58cd:
                                                    if (pMVar45 != (MethodInfo *)0x0) {
                                                      pIVar51 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5830;
                                                      pUVar36 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pMVar45,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5843;
                                                        bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                           (pUVar36,(MethodInfo *)0x0);
                                                        if ((char)bVar29 != '\0') {
                                                          return;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).nested_type_count
                                                           ) {
                                                          return;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).interfaces_count)
                                                        {
                                                          return;
                                                        }
                                                        pMVar45 = __this_04->vtable[0xe].method;
                                                        if (pMVar45 != (MethodInfo *)0x0) {
                                                          pIVar51 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c58ef;
                                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar45,(MethodInfo *)0x0);
                                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar51 = (Il2CppClass *)0x1;
                                                            *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                 0x43c5907;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar36,1,(MethodInfo *)0x0);
                                                            pUVar17 = (UnityEngine_Component_o *)
                                                                      __this_04->vtable[0xf].methodPtr;
                                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar51 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                   0x43c591a;
                                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar17,(MethodInfo *)0x0);
                                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar51 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                     0x43c592b;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar36,0,(MethodInfo *)0x0);
                                                                pMVar45 = __this_04->vtable[0xf].method;
                                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                                  pIVar51 = (Il2CppClass *)0x0;
                                                                  *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                       0x43c593e;
                                                                  pUVar36 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar45,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar51 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c594f;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar36,0,(MethodInfo *)0x0);
                                                         pMVar45 = __this_04->vtable[6].method;
                                                         if (pMVar45 != (MethodInfo *)0x0) {
                                                           pIVar51 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5962
                                                           ;
                                                           pUVar36 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar45,(MethodInfo *)0x0);
                                                           if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar51 = (Il2CppClass *)0x1;
                                                             *(undefined8 *)((long)ppIVar48 + -0x78) =
                                                                  0x43c5976;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar36,1,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_04->vtable[7].methodPtr;
                                                             goto joined_r0x043c5980;
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
                                else {
                                  pIVar51 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c53d3;
                                  fVar57 = Characters_BaseUseable__GetCooldownRatio
                                                     ((Characters_BaseUseable_o *)plVar33,(MethodInfo *)0x0);
                                  *(float *)((long)ppIVar48 + -100) = fVar57;
                                  pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[0x11].method;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)__this_04->vtable[0x11].methodPtr;
                                    pIVar51 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c53fd;
                                    UnityEngine_UI_Image__set_fillAmount
                                              (pUVar18,*(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                    if (pIVar46 != (Il2CppClass *)0x0) {
                                      pIVar51 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5416;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar46,
                                                 *(float *)((long)ppIVar48 + -100),(MethodInfo *)0x0);
                                      if (((bool)*(char *)&__this_04->vtable[0x12].methodPtr ==
                                           (*(float *)((long)ppIVar48 + -100) <= 1.0 &&
                                           *(float *)((long)ppIVar48 + -100) != 1.0)) ||
                                         (bVar19 = *(float *)((long)ppIVar48 + -100) != 1.0,
                                         bVar20 = *(float *)((long)ppIVar48 + -100) <= 1.0,
                                         *(bool *)&__this_04->vtable[0x12].methodPtr = bVar20 && bVar19,
                                         bVar20 && bVar19)) {
label_043c5518:
                                        pUVar17 = (UnityEngine_Component_o *)__this_04->vtable[0x10].methodPtr
                                        ;
                                        if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                          pIVar51 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c552f;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              (pUVar17,(MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5542;
                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar36,(MethodInfo *)0x0);
                                            if (((char)bVar29 != '\0') ||
                                               (0.0 < *(float *)&(__this_04->_2).nested_type_count)) {
                                              return;
                                            }
                                            pMVar45 = __this_04->vtable[0x10].method;
                                            if (pMVar45 != (MethodInfo *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5572;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar45,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5587;
                                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar17 = (UnityEngine_Component_o *)
                                                          __this_04->vtable[0x10].methodPtr;
joined_r0x043c5980:
                                                if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar51 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c559e;
                                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                                      (pUVar17,(MethodInfo *)0x0);
                                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar36,1,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar45 = __this_04->vtable[0x10].method;
                                        if (pMVar45 != (MethodInfo *)0x0) {
                                          pIVar51 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5462;
                                          pUVar36 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)pMVar45,
                                                               (MethodInfo *)0x0);
                                          if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar51 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5475;
                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar36,(MethodInfo *)0x0);
                                            if ((char)bVar29 != '\0') goto label_043c5518;
                                            pUVar17 = (UnityEngine_Component_o *)
                                                      __this_04->vtable[0x10].methodPtr;
                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                              pIVar51 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5494;
                                              pUVar36 = UnityEngine_Component__get_gameObject
                                                                  (pUVar17,(MethodInfo *)0x0);
                                              if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar51 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54a9;
                                                UnityEngine_GameObject__SetActive(pUVar36,0,(MethodInfo *)0x0)
                                                ;
                                                pMVar45 = __this_04->vtable[0x10].method;
                                                if (pMVar45 != (MethodInfo *)0x0) {
                                                  pIVar51 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54c0;
                                                  pUVar36 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pMVar45,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar36 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar51 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54d8;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar36,1,(MethodInfo *)0x0);
                                                    pMVar45 = __this_04->vtable[0x10].method;
                                                    if (pMVar45 != (MethodInfo *)0x0) {
                                                      *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c54f7;
                                                      pIVar51 = MethodInfo_Animator_GetComponent_Animator;
                                                      pUVar37 = (UnityEngine_Animator_o *)
                                                                UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pMVar45,
                                                                           (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator)
                                                      ;
                                                      if (pUVar37 != (UnityEngine_Animator_o *)0x0) {
                                                        pIVar51 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c550d;
                                                        UnityEngine_Animator__Update
                                                                  (pUVar37,0.0,(MethodInfo *)0x0);
                                                        (__this_04->_2).nested_type_count = 0;
                                                        (__this_04->_2).vtable_count = 0x3f00;
                                                        goto label_043c5518;
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
                              goto label_043c5986;
                            }
                            vtableDispatch = (((Il2CppClass *)plVar33)->_1).image;
                            cVar4 = (code)(TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            pIVar51 = TypeInfo_ThunderspearWeapon;
                            if (((byte)cVar4 <= (byte)vtableDispatch[0x130]) &&
                               (*(Il2CppClass **)
                                 (*(long *)(vtableDispatch + 200) + ((ulong)(byte)cVar4 - 1) * 8) ==
                                TypeInfo_ThunderspearWeapon)) goto label_043c537e;
                          }
                          *(undefined8 *)((long)ppIVar48 + -0x78) = 0x43c5993;
                          __this_05 = (Il2CppClass *)plVar33;
                          il2cpp_runtime_helper_022b2fd0();
                        }
                        *(Il2CppClass **)((long)ppIVar49 + -8) = pIVar46;
                        lVar43 = *(long *)&(__this_05->_2).token;
                        pIVar32 = __this_05;
                        if ((lVar43 != 0) &&
                           (pIVar32 = (Il2CppClass *)__this_05->vtable[0x12].method, pIVar46 = __this_05,
                           pIVar32 != (Il2CppClass *)0x0)) {
                          fVar62 = *(float *)(lVar43 + 0x140) / *(float *)(lVar43 + 0x134);
                          fVar57 = 1.0;
                          if (fVar62 <= 1.0) {
                            fVar57 = fVar62;
                          }
                          pIVar53 = (pIVar32->_1).image;
                          pIVar51 = (Il2CppClass *)pIVar53->vtable[0x2f].method;
                          vtableDispatch = pIVar53->vtable[0x2f].methodPtr;
                          *(undefined8 *)((long)ppIVar49 + -0x10) = 0x43c59fb;
                          (*vtableDispatch)(-(uint)(0.0 <= fVar62) & (uint)fVar57);
                          lVar43 = *(long *)&(__this_05->_2).token;
                          if (lVar43 != 0) {
                            pIVar32 = (Il2CppClass *)__this_05->vtable[0x13].methodPtr;
                            if (*(float *)(lVar43 + 0x140) <= 1.0) {
                              if (pIVar32 != (Il2CppClass *)0x0) {
                                uVar58 = SUB84((__this_05->_1).interfaceOffsets,0);
                                uVar59 = SUB84(__this_05->static_fields,0);
                                goto label_043c5a4b;
                              }
                            }
                            else if (pIVar32 != (Il2CppClass *)0x0) {
                              uVar58 = SUB84((__this_05->_1).nestedTypes,0);
                              uVar59 = SUB84((__this_05->_1).implementedInterfaces,0);
label_043c5a4b:
                              pIVar53 = (pIVar32->_1).image;
                              vtableDispatch = pIVar53->vtable[0x17].methodPtr;
                              (*vtableDispatch)
                                        (uVar58,uVar59,pIVar32,pIVar53->vtable[0x17].method,extraout_RDX,
                                         vtableDispatch);
                              return;
                            }
                          }
                        }
                        *(undefined8 *)((long)ppIVar49 + -0x10) = 0x43c5a64;
                        il2cpp_runtime_helper_022b2c90();
                        *(long **)((long)ppIVar49 + -0x10) = plVar33;
                        *(Il2CppClass **)((long)ppIVar49 + -0x18) = __this_04;
                        *(Il2CppClass **)((long)ppIVar49 + -0x20) = pIVar46;
                        if (g_data_057ae3de == '\0') {
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5a90;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5a9c;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5aa8;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ab4;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ac0;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                          g_data_057ae3de = '\x01';
                        }
                        pIVar47 = pIVar32->rgctx_data;
                        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5ae6;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5af0;
                        bVar29 = MiscExtensions__GetActive
                                           ((UnityEngine_GameObject_o *)pIVar47,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          pMVar45 = pIVar32->vtable[0x13].method;
                          if (pMVar45 == (MethodInfo *)0x0) goto label_043c5bc3;
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b1a;
                          bVar29 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              pMVar45,(Il2CppObject *)pIVar51,MethodInfo_Boolean_ContainsKey);
                          if ((char)bVar29 == '\0') {
                            if (pIVar51 == (Il2CppClass *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b61;
                            pUVar37 = (UnityEngine_Animator_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pIVar51,
                                                 (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                            pMVar45 = pIVar32->vtable[0x13].method;
                            if (pMVar45 == (MethodInfo *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b85;
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar45,
                                       (Il2CppObject *)pIVar51,(Il2CppObject *)pUVar37,MethodInfo_Void_Add);
                            pIVar47 = (Il2CppRGCTXData *)0x0;
                            if (pUVar37 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
                          }
                          else {
                            pMVar45 = pIVar32->vtable[0x13].method;
                            if (pMVar45 == (MethodInfo *)0x0) {
label_043c5bc3:
                              *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5bc8;
                              uVar56 = il2cpp_runtime_helper_022b2c90();
                              *(Il2CppClass **)((long)ppIVar49 + -0x28) = pIVar51;
                              *(Il2CppRGCTXData **)((long)ppIVar49 + -0x30) = pIVar47;
                              *(undefined8 *)((long)ppIVar49 + -0x38) = uVar56;
                              if (g_data_057ae3e5 == '\0') {
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5bec;
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5bf8;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
                                *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5c04;
                                il2cpp_runtime_helper_023445d0(&"");
                                g_data_057ae3e5 = '\x01';
                              }
                              pMVar45->klass = (Il2CppClass *)0x3f0000003f800000;
                              pMVar45->return_type = (Il2CppType *)0x3f00000000000000;
                              pMVar45->parameters = (Il2CppType **)0x3f4000003f800000;
                              (pMVar45->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x3f8000003f000000;
                              pMVar45->field8_0x40 = (_union_14)0x3f800000;
                              pMVar45->token = 0;
                              pMVar45->flags = 0;
                              pMVar45->iflags = 0x3f00;
                              pMVar45->slot = 0;
                              pMVar45->parameters_count = 0x80;
                              pMVar45->bitflags = '?';
                              *(undefined4 *)&pMVar45->field_0x54 = 0x3f000000;
                              pMVar45[1].methodPointer = (Il2CppMethodPointer)0x3f8000003f000000;
                              pMVar45[1].virtualMethodPointer = (Il2CppMethodPointer)0x3f8000003f800000;
                              pMVar45[1].invoker_method = (InvokerMethod)0x3f0000003f800000;
                              pMVar45[1].name = (char *)0x3f8000003f800000;
                              pMVar45[1].klass = (Il2CppClass *)0x3f4000003f800000;
                              *(undefined4 *)&pMVar45[1].return_type = 0x3f800000;
                              *(undefined4 *)((long)&pMVar45[1].return_type + 4) = 0x3f800000;
                              *(undefined4 *)&pMVar45[1].parameters = 0x3f800000;
                              *(undefined4 *)((long)&pMVar45[1].parameters + 4) = 0x3f800000;
                              pMVar45[1].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x3e8000003f800000;
                              pMVar45[1].field8_0x40.genericMethod = (void *)0x3f8000003e800000;
                              pMVar45[1].token = 0x3f451eb8;
                              pMVar45[1].flags = 0x1eb8;
                              pMVar45[1].iflags = 0x3f45;
                              pMVar45[1].slot = 0x1eb8;
                              pMVar45[1].parameters_count = 'E';
                              pMVar45[1].bitflags = '?';
                              *(undefined4 *)&pMVar45[1].field_0x54 = 0x3f800000;
                              *(undefined4 *)&pMVar45[2].methodPointer = 0x3f451eb8;
                              *(undefined4 *)((long)&pMVar45[2].methodPointer + 4) = 0x3f000000;
                              *(undefined4 *)&pMVar45[2].virtualMethodPointer = 0x3f000000;
                              *(undefined4 *)((long)&pMVar45[2].virtualMethodPointer + 4) = 0x3f800000;
                              *(System_String_o **)&pMVar45[2].token = "";
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5ca5;
                              il2cpp_runtime_helper_022b4080(&pMVar45[2].token);
                              *(System_String_o **)&pMVar45[2].slot = "";
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cbb;
                              il2cpp_runtime_helper_022b4080(&pMVar45[2].slot);
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cca;
                              __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cdf;
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                              pMVar45[7].virtualMethodPointer = (Il2CppMethodPointer)__this_03;
                              *(undefined8 *)((long)ppIVar49 + -0x40) = 0x43c5cf5;
                              il2cpp_runtime_helper_022b4080(&pMVar45[7].virtualMethodPointer);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)pMVar45,(MethodInfo *)0x0);
                              return;
                            }
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b40;
                            pUVar37 = (UnityEngine_Animator_o *)
                                      System_Collections_Generic_Dictionary_object__object___get_Item
                                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                                 pMVar45,(Il2CppObject *)pIVar51,MethodInfo_Animator_get_Item);
                            if (pUVar37 == (UnityEngine_Animator_o *)0x0) {
                              pIVar47 = (Il2CppRGCTXData *)0x0;
                              goto label_043c5bc3;
                            }
                          }
                          *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5b94;
                          fVar57 = UnityEngine_Animator__get_speed(pUVar37,(MethodInfo *)0x0);
                          if ((fVar57 != 0.0) || (NAN(fVar57))) {
                            *(undefined8 *)((long)ppIVar49 + -0x28) = 0x43c5bab;
                            UnityEngine_Animator__Update(pUVar37,0.0,(MethodInfo *)0x0);
                            UnityEngine_Animator__set_speed(pUVar37,0.0,(MethodInfo *)0x0);
                            return;
                          }
                        }
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
      goto label_042f2984;
    }
  }
label_042f2994:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adecf == '\0') {
    uStack_b0 = 0x42f29bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecf = '\x01';
  }
  uStack_b0 = 0x42f29d3;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)pIVar53,(Characters_BaseCharacter_o *)pIVar32,(MethodInfo *)0x0);
  pIVar46 = TypeInfo_Human;
  if (pIVar32 != (Il2CppClass *)0x0) {
    pvVar11 = (pIVar32->_1).image;
    bVar5 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar5 <= *(byte *)((long)pvVar11 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar5 * 8) == TypeInfo_Human)) {
      ((_union_14 *)&(pIVar53->_1).element_class)->genericMethod = pIVar32;
      pvVar11 = (pIVar32->_1).image;
      if ((bVar5 <= *(byte *)((long)pvVar11 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar5 * 8) == pIVar46))
      goto label_042f2a2b;
    }
    uStack_b0 = 0x42f2a27;
    il2cpp_runtime_helper_022b2fd0(pIVar32);
  }
  ((_union_14 *)&(pIVar53->_1).element_class)->genericMethod = pIVar32;
label_042f2a2b:
  il2cpp_runtime_helper_022b4080((_union_14 *)&(pIVar53->_1).element_class,pIVar32);
  return;
}


// Characters.AHSSTwinShot$$Deactivate
// il2cpp: void Characters_AHSSTwinShot__Deactivate (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x42f20f0

void Characters_AHSSTwinShot__Deactivate(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  code cVar5;
  byte bVar6;
  uint32_t uVar7;
  Characters_Human_o *__this_00;
  Outline_o *pOVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  Characters_BaseHitbox_o *__this_01;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  void *pvVar11;
  Characters_BaseUseable_o *__this_02;
  UnityEngine_UI_Image_o *pUVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  InvokerMethod pIVar14;
  System_Object_array *pSVar15;
  code *pcVar16;
  UnityEngine_Component_o *pUVar17;
  UnityEngine_UI_Image_o *pUVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  Il2CppType *pIVar24;
  undefined1 auVar25 [16];
  uint32_t *puVar26;
  undefined1 *puVar27;
  char cVar28;
  bool_conflict bVar29;
  int iVar30;
  uint uVar31;
  long *plVar32;
  long *plVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_GameObject_o *pUVar35;
  UnityEngine_Animator_o *pUVar36;
  System_String_o *pSVar37;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar38;
  undefined8 *puVar39;
  UnityEngine_Object_o *pUVar40;
  Il2CppClass *pIVar41;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  long lVar42;
  undefined8 extraout_RDX;
  MethodInfo *pMVar43;
  Il2CppClass *pIVar44;
  Il2CppRGCTXData *pIVar45;
  Il2CppClass **ppIVar46;
  Il2CppClass **ppIVar47;
  int iVar48;
  Il2CppClass *pIVar49;
  Il2CppClass *__this_04;
  Il2CppClass *__this_05;
  MethodInfo *pMVar50;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar51;
  Il2CppClass *unaff_R13;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar56;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar57;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  UnityEngine_Quaternion_o UVar61;
  UnityEngine_Quaternion_Fields UVar62;
  undefined1 auVar63 [12];
  UnityEngine_Vector3_o UVar64;
  UnityEngine_Vector3_o UVar65;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  Il2CppClass *pIStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_68;
  Il2CppClass *pIStack_40;
  undefined8 uStack_38;
  Il2CppRuntimeInterfaceOffsetPair *pIStack_30;
  
  if (g_data_057adece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adece = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f2984;
  bVar4 = (TypeInfo_Human->_2).naturalAligment;
  method = (MethodInfo *)TypeInfo_Human;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Human)) {
label_042f2989:
    il2cpp_runtime_helper_022b2fd0(__this_00);
  }
  else {
    method = (__this_00->klass->vtable)._66_GetAimPoint.method;
    uVar54 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    fVar55 = (float)((ulong)uVar54 >> 0x20);
    lVar42 = *(long *)&(__this_00->fields).Dead;
    if ((lVar42 == 0) ||
       (pUVar34 = *(UnityEngine_Transform_o **)(lVar42 + 0x10), pUVar34 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    method = (MethodInfo *)0x0;
    UVar64 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar59._0_4_ = (float)uVar54 - UVar64.fields.x;
    auVar59._4_4_ = fVar55 - UVar64.fields.y;
    auVar59._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
    auVar59._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
    fVar60 = in_XMM1_Da - UVar64.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar56 = 0;
    uVar57 = 0;
    fVar52 = fVar60 * fVar60 + auVar59._4_4_ * auVar59._4_4_ + auVar59._0_4_ * auVar59._0_4_;
    if (fVar52 < 0.0) {
      fVar52 = sqrtf(fVar52);
      uVar56 = extraout_XMM0_Dc_01;
      uVar57 = extraout_XMM0_Dd_01;
      if (fVar52 <= 1e-05) goto label_042f22b7;
label_042f231f:
      fVar60 = fVar60 / fVar52;
      auVar22._4_4_ = fVar52;
      auVar22._0_4_ = fVar52;
      auVar22._8_4_ = uVar56;
      auVar22._12_4_ = uVar57;
      auVar59 = divps(auVar59,auVar22);
      uVar58 = auVar59._0_8_;
      lVar42._0_4_ = (__this_00->fields).Dead;
      lVar42._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    else {
      fVar52 = SQRT(fVar52);
      if (1e-05 < fVar52) goto label_042f231f;
label_042f22b7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar42._0_4_ = (__this_00->fields).Dead;
      lVar42._4_4_ = (__this_00->fields).CustomDamageEnabled;
    }
    if ((lVar42 == 0) || (*(UnityEngine_Transform_o **)(lVar42 + 0x10) == (UnityEngine_Transform_o *)0x0)) {
label_042f2984:
      il2cpp_runtime_helper_022b2c90();
      goto label_042f2989;
    }
    UVar64 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar42 + 0x10),(MethodInfo *)0x0);
    cVar28 = *(char *)((long)&(__this_00->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar64.fields.x);
    }
    lVar42 = 0xf0;
    if (cVar28 == '\0') {
      lVar42 = 0x108;
    }
    __this = *(Characters_AHSSTwinShot_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar42);
    Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
    *(Characters_AHSSTwinShot_o **)&(__this_00->fields)._currentVelocity.fields = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._currentVelocity,__this);
    method = (MethodInfo *)__this;
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)__this,0.05,0.0,(MethodInfo *)0x0);
    UVar64.fields.z = fVar60;
    UVar64.fields.x = (float)(int)uVar58;
    UVar64.fields.y = (float)(int)((ulong)uVar58 >> 0x20);
    UVar61 = UnityEngine_Quaternion__LookRotation_4debb20(UVar64,(MethodInfo *)0x0);
    UVar64 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar61,(MethodInfo *)0x0);
    UVar65.fields.x = UVar64.fields.x * 57.29578;
    UVar65.fields.y = UVar64.fields.y * 57.29578;
    UVar65.fields.z = UVar64.fields.z * 57.29578;
    UVar64 = UnityEngine_Quaternion__Internal_MakePositive(UVar65,(MethodInfo *)0x0);
    *(float *)&(__this_00->fields).Detection = UVar64.fields.y;
    auVar63._4_8_ = 0;
    auVar63._0_4_ = UVar64.fields.y * 0.017453292;
    UVar62 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar63 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar62;
    lVar42 = *(long *)&(__this_00->fields).Dead;
    if ((lVar42 == 0) ||
       (__this = *(Characters_AHSSTwinShot_o **)(lVar42 + 0x10), (Il2CppClass *)__this == (Il2CppClass *)0x0))
    goto label_042f2984;
    UVar61 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
    uStack_38 = *(undefined8 *)((long)&(__this_00->fields)._lastMountMessage + 4);
    pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
    uVar2 = (__this_00->fields)._grabIFrames;
    uVar3 = (__this_00->fields)._bladeTrailActive;
    b.fields.w = (float)uVar3;
    b.fields.z = (float)uVar2;
    pIStack_40 = (Il2CppClass *)0x0;
    fVar60 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.x = (float)(undefined4)uStack_38;
    b.fields.y = (float)uStack_38._4_4_;
    UVar61 = UnityEngine_Quaternion__Lerp(UVar61,b,fVar60 * 30.0,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this,UVar61,(MethodInfo *)0x0);
    lVar42 = *(long *)&(__this_00->fields).Dead;
    if ((lVar42 == 0) ||
       (pUVar34 = *(UnityEngine_Transform_o **)(lVar42 + 0x10), pUVar34 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    method = (MethodInfo *)0x0;
    UVar64 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    lVar42 = *(long *)&(__this_00->fields).Dead;
    if ((lVar42 == 0) ||
       (pUVar34 = *(UnityEngine_Transform_o **)(lVar42 + 0x10), pUVar34 == (UnityEngine_Transform_o *)0x0))
    goto label_042f2984;
    UVar65 = UnityEngine_Transform__get_up(pUVar34,(MethodInfo *)0x0);
    uStack_68._0_4_ = UVar64.fields.x;
    uStack_68._4_4_ = UVar64.fields.y;
    uStack_68._0_4_ = (float)uStack_68 + UVar65.fields.x * 0.8;
    uStack_68._4_4_ = uStack_68._4_4_ + UVar65.fields.y * 0.8;
    fVar60 = UVar64.fields.z + UVar65.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar52 = (float)uVar54 - (float)uStack_68;
    fVar55 = fVar55 - uStack_68._4_4_;
    in_XMM1_Da = in_XMM1_Da - fVar60;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar56 = 0;
    uVar57 = 0;
    fVar53 = in_XMM1_Da * in_XMM1_Da + fVar55 * fVar55 + fVar52 * fVar52;
    if (fVar53 < 0.0) {
      fVar53 = sqrtf(fVar53);
      uVar56 = extraout_XMM0_Dc_04;
      uVar57 = extraout_XMM0_Dd_04;
      if (fVar53 <= 1e-05) goto label_042f25be;
label_042f2610:
      in_XMM1_Da = in_XMM1_Da / fVar53;
      auVar25._4_4_ = fVar55;
      auVar25._0_4_ = fVar52;
      auVar25._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
      auVar25._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
      auVar21._4_4_ = fVar53;
      auVar21._0_4_ = fVar53;
      auVar21._8_4_ = uVar56;
      auVar21._12_4_ = uVar57;
      auVar59 = divps(auVar25,auVar21);
      fVar55 = auVar59._0_4_;
      fVar52 = auVar59._4_4_;
    }
    else {
      fVar53 = SQRT(fVar53);
      if (1e-05 < fVar53) goto label_042f2610;
label_042f25be:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar54 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar55 = (float)uVar54;
      fVar52 = (float)((ulong)uVar54 >> 0x20);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar38 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.y = fVar52;
    forward.fields.x = fVar55;
    forward.fields.z = in_XMM1_Da;
    UVar61 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    position.fields.z = fVar60;
    position.fields.x = (float)uStack_68;
    position.fields.y = uStack_68._4_4_;
    Effects_EffectSpawner__Spawn(pSVar38,position,UVar61,2.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pMVar43 = TypeInfo_HumanSounds;
    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)Characters_HumanSounds__GetRandomAHSSGunShotDouble(pMVar43);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)method,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar32 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    __this = (Characters_AHSSTwinShot_o *)&TypeInfo_CharacterData;
    if (plVar32 == (long *)0x0) goto label_042f2984;
    method = (MethodInfo *)"AHSS";
    plVar32 = (long *)(**(code **)(*plVar32 + 0x1a8))(plVar32,"AHSS",*(undefined8 *)(*plVar32 + 0x1b0));
    pOVar8 = (__this_00->fields).OutlineComponent;
    if (((pOVar8 == (Outline_o *)0x0) ||
        (pSVar9 = pOVar8[1].fields._namesToIgnore, pSVar9 == (System_Collections_Generic_List_string__o *)0x0)
        ) || (plVar32 == (long *)0x0)) goto label_042f2984;
    __this = (Characters_AHSSTwinShot_o *)pSVar9[2].klass;
    method = (MethodInfo *)"Radius";
    plVar33 = (long *)(**(code **)(*plVar32 + 0x1a8))(plVar32,"Radius",*(undefined8 *)(*plVar32 + 0x1b0));
    if (plVar33 == (long *)0x0) goto label_042f2984;
    method = *(MethodInfo **)(*plVar33 + 0x390);
    fVar53 = (float)(**(code **)(*plVar33 + 0x388))(plVar33);
    if ((Il2CppClass *)__this == (Il2CppClass *)0x0) goto label_042f2984;
    vtableDispatch = (((Il2CppClass *)__this)->_1).image;
    cVar5 = (code)(TypeInfo_CapsuleCollider->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_CapsuleCollider;
    if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
       (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
        TypeInfo_CapsuleCollider)) {
      method = (MethodInfo *)0x0;
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this,fVar53 + fVar53,(MethodInfo *)0x0);
      pOVar8 = (__this_00->fields).OutlineComponent;
      if ((pOVar8 != (Outline_o *)0x0) &&
         (pSVar9 = pOVar8[1].fields._namesToIgnore, pSVar9 != (System_Collections_Generic_List_string__o *)0x0
         )) {
        method = (MethodInfo *)0x0;
        pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
        if (pUVar34 != (UnityEngine_Transform_o *)0x0) {
          method = (MethodInfo *)0x0;
          value.fields.z = fVar60;
          value.fields.x = (float)uStack_68;
          value.fields.y = uStack_68._4_4_;
          UnityEngine_Transform__set_position(pUVar34,value,(MethodInfo *)0x0);
          pOVar8 = (__this_00->fields).OutlineComponent;
          if ((pOVar8 != (Outline_o *)0x0) &&
             (pSVar9 = pOVar8[1].fields._namesToIgnore,
             pSVar9 != (System_Collections_Generic_List_string__o *)0x0)) {
            method = (MethodInfo *)0x0;
            __this = (Characters_AHSSTwinShot_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0)
            ;
            forward_00.fields.y = fVar52;
            forward_00.fields.x = fVar55;
            forward_00.fields.z = in_XMM1_Da;
            UVar61 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
            if ((Il2CppClass *)__this != (Il2CppClass *)0x0) {
              method = (MethodInfo *)0x0;
              UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this,UVar61,(MethodInfo *)0x0);
              pOVar8 = (__this_00->fields).OutlineComponent;
              if ((pOVar8 != (Outline_o *)0x0) &&
                 (__this_01 = (Characters_BaseHitbox_o *)pOVar8[1].fields._namesToIgnore,
                 __this_01 != (Characters_BaseHitbox_o *)0x0)) {
                method = (MethodInfo *)0x0;
                Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
                lVar42 = *(long *)&(__this_00->fields).Dead;
                if (lVar42 != 0) {
                  __this = *(Characters_AHSSTwinShot_o **)(lVar42 + 0x18);
                  method = (MethodInfo *)"KnockbackForce";
                  plVar32 = (long *)(**(code **)(*plVar32 + 0x1a8))
                                              (plVar32,"KnockbackForce",*(undefined8 *)(*plVar32 + 0x1b0));
                  if (plVar32 != (long *)0x0) {
                    method = *(MethodInfo **)(*plVar32 + 0x390);
                    fVar60 = (float)(**(code **)(*plVar32 + 0x388))(plVar32);
                    if ((Il2CppClass *)__this != (Il2CppClass *)0x0) {
                      force.fields.y = fVar52 * fVar60 * -2.0;
                      force.fields.x = fVar55 * fVar60 * -2.0;
                      force.fields.z = in_XMM1_Da * fVar60 * -2.0;
                      method = (MethodInfo *)0x2;
                      UnityEngine_Rigidbody__AddForce
                                ((UnityEngine_Rigidbody_o *)__this,force,2,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar41 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      __this = (Characters_AHSSTwinShot_o *)&TypeInfo_UIManager;
                      if (pIVar41 != (Il2CppClass *)0x0) {
                        vtableDispatch = (pIVar41->_1).image;
                        cVar5 = (code)(TypeInfo_InGameMenu->_2).naturalAligment;
                        method = (MethodInfo *)TypeInfo_InGameMenu;
                        __this = (Characters_AHSSTwinShot_o *)pIVar41;
                        if (((byte)vtableDispatch[0x130] < (byte)cVar5) ||
                           (*(Il2CppClass **)
                             (*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) !=
                            TypeInfo_InGameMenu)) goto label_042f2994;
                        pIVar10 = (pIVar41->_1).interfaceOffsets;
                        __this = (Characters_AHSSTwinShot_o *)&TypeInfo_UIManager;
                        if (pIVar10 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042f2984;
                        pIVar41 = (Il2CppClass *)0x1;
                        pIVar51 = (Il2CppClass *)0x1;
                        if (g_data_057ae3db == '\0') {
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2dd6;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2de2;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          g_data_057ae3db = '\x01';
                        }
                        pUVar40 = *(UnityEngine_Object_o **)&pIVar10[0x10].offset;
                        plVar32 = &TypeInfo_Object;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e09;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e15;
                        bVar29 = UnityEngine_Object__op_Equality
                                           (pUVar40,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar44 = pIVar10[0xc].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e36;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e42;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar44,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar44 = pIVar10[0x1e].interfaceType;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e63;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e6f;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar44,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        __this_04 = pIVar10[0x21].interfaceType;
                        if (__this_04 != (Il2CppClass *)0x0) {
                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2e97;
                          pUVar35 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                            pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2eaf;
                            UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                            __this_04 = pIVar10[0x21].interfaceType;
                            if (__this_04 != (Il2CppClass *)0x0) {
                              pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ece;
                              pUVar36 = (UnityEngine_Animator_o *)
                                        UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_04,
                                                   (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                              if (pUVar36 != (UnityEngine_Animator_o *)0x0) {
                                pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2ee4;
                                UnityEngine_Animator__Update(pUVar36,0.0,(MethodInfo *)0x0);
                                __this_04 = pIVar10[0x1e].interfaceType;
                                if (__this_04 != (Il2CppClass *)0x0) {
                                  pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2efb;
                                  pUVar35 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                    pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f10;
                                    UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                    __this_04 = pIVar10[0x1f].interfaceType;
                                    if (__this_04 != (Il2CppClass *)0x0) {
                                      pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f27;
                                      pUVar35 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_04,
                                                           (MethodInfo *)0x0);
                                      if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f3c;
                                        UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                        __this_04 = pIVar10[0x20].interfaceType;
                                        if (__this_04 != (Il2CppClass *)0x0) {
                                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f53;
                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)__this_04,
                                                               (MethodInfo *)0x0);
                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                            pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f68;
                                            UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                            __this_04 = *(Il2CppClass **)&pIVar10[0x21].offset;
                                            if (__this_04 != (Il2CppClass *)0x0) {
                                              pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2f88;
                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)__this_04,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fa0;
                                                UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0)
                                                ;
                                                __this_04 = *(Il2CppClass **)&pIVar10[0x21].offset;
                                                if (__this_04 != (Il2CppClass *)0x0) {
                                                  pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fbf;
                                                  pUVar36 = (UnityEngine_Animator_o *)
                                                            UnityEngine_Component__GetComponent_object_
                                                                      ((UnityEngine_Component_o *)__this_04,
                                                                       (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                                  if (pUVar36 != (UnityEngine_Animator_o *)0x0) {
                                                    pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)0x43c2fd5
                                                    ;
                                                    UnityEngine_Animator__Update
                                                              (pUVar36,0.0,(MethodInfo *)0x0);
                                                    __this_04 = *(Il2CppClass **)&pIVar10[0x1e].offset;
                                                    if (__this_04 != (Il2CppClass *)0x0) {
                                                      pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                   0x43c2fe8;
                                                      pUVar35 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_04,(MethodInfo *)0x0);
                                                      if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                     0x43c2ff9;
                                                        UnityEngine_GameObject__SetActive
                                                                  (pUVar35,0,(MethodInfo *)0x0);
                                                        __this_04 = *(Il2CppClass **)&pIVar10[0x1f].offset;
                                                        if (__this_04 != (Il2CppClass *)0x0) {
                                                          pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                       0x43c300c;
                                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               __this_04,(MethodInfo *)0x0);
                                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)
                                                                         0x43c301d;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar35,0,(MethodInfo *)0x0);
                                                            __this_04 = *(Il2CppClass **)&pIVar10[0x20].offset
                                                            ;
                                                            if (__this_04 != (Il2CppClass *)0x0) {
                                                              pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *
                                                                           )0x43c3030;
                                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                                  ((UnityEngine_Component_o *)
                                                                                   __this_04,(MethodInfo *)0x0
                                                                                  );
                                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair
                                                                              *)0x43c3041;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar35,0,(MethodInfo *)0x0);
                                                                *(undefined8 *)
                                                                 ((long)&pIVar10[0x12].interfaceType + 4) =
                                                                     0x3f2ac08300000000;
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
                        pIStack_30 = (Il2CppRuntimeInterfaceOffsetPair *)UI_HUDBottomHandler__ShootTS;
                        il2cpp_runtime_helper_022b2c90();
                        uStack_38 = 1;
                        pIStack_40 = pIVar44;
                        pIStack_30 = pIVar10;
                        if (g_data_057ae3dc == '\0') {
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                          g_data_057ae3dc = '\x01';
                        }
                        pUVar40 = *(UnityEngine_Object_o **)&(__this_04->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar29 = UnityEngine_Object__op_Equality
                                           (pUVar40,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar45 = __this_04->rgctx_data;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar45,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        pIVar44 = (Il2CppClass *)__this_04->vtable[0xe].method;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_05 = pIVar44;
                        bVar29 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pIVar44,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          return;
                        }
                        lVar42 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        if (((lVar42 != 0) && (lVar42 = *(long *)(lVar42 + 0x58), lVar42 != 0)) &&
                           (lVar42 = *(long *)(lVar42 + 0x48), lVar42 != 0)) {
                          if (*(char *)(lVar42 + 0x11) != '\0') {
                            return;
                          }
                          __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                          if ((__this_05 != (Il2CppClass *)0x0) &&
                             (pUVar35 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0),
                             pUVar35 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                            __this_05 = (Il2CppClass *)__this_04->vtable[0xf].method;
                            if ((__this_05 != (Il2CppClass *)0x0) &&
                               (pUVar36 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)__this_05,
                                                     (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                               pUVar36 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar36,0.0,(MethodInfo *)0x0);
                              __this_05 = (Il2CppClass *)__this_04->vtable[0xe].method;
                              if ((__this_05 != (Il2CppClass *)0x0) &&
                                 (pUVar35 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                 , pUVar35 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                __this_05 = (Il2CppClass *)__this_04->vtable[0xf].methodPtr;
                                if ((__this_05 != (Il2CppClass *)0x0) &&
                                   (pUVar35 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this_05,
                                                         (MethodInfo *)0x0),
                                   pUVar35 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                  __this_05 = (Il2CppClass *)__this_04->vtable[6].method;
                                  if ((__this_05 != (Il2CppClass *)0x0) &&
                                     (pUVar35 = UnityEngine_Component__get_gameObject
                                                          ((UnityEngine_Component_o *)__this_05,
                                                           (MethodInfo *)0x0),
                                     pUVar35 != (UnityEngine_GameObject_o *)0x0)) {
                                    UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                    __this_05 = (Il2CppClass *)__this_04->vtable[7].methodPtr;
                                    if ((__this_05 != (Il2CppClass *)0x0) &&
                                       (pUVar35 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)__this_05,
                                                             (MethodInfo *)0x0),
                                       pUVar35 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                      (__this_04->_2).nested_type_count = 0;
                                      (__this_04->_2).vtable_count = 0;
                                      (__this_04->_2).interfaces_count = 0;
                                      (__this_04->_2).interface_offsets_count = 0x3f80;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        if (g_data_057ae3dd == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                          g_data_057ae3dd = '\x01';
                        }
                        pSVar38 = *(System_String_o **)&(__this_05->_2).static_fields_size;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar43 = (MethodInfo *)0x0;
                        bVar29 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pSVar38,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar29 == '\0') {
                          pUVar40 = *(UnityEngine_Object_o **)&(__this_05->_2).token;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar49 = (Il2CppClass *)0x0;
                          bVar29 = UnityEngine_Object__op_Inequality
                                             (pUVar40,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar29 == '\0') {
                            return;
                          }
                          plVar33 = &TypeInfo_Object;
                          ppIVar47 = &pIStack_40;
                        }
                        else {
                          fVar55 = *(float *)&(__this_05->_2).nested_type_count;
                          fVar60 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).nested_type_count = fVar55 - fVar60;
                          fVar55 = *(float *)&(__this_05->_2).field_count;
                          fVar60 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).field_count = fVar55 - fVar60;
                          fVar55 = *(float *)&(__this_05->_2).interfaces_count;
                          fVar60 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                          *(float *)&(__this_05->_2).interfaces_count = fVar55 - fVar60;
                          UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar43);
                          UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar43);
                          pIVar49 = __this_05;
                          UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar43);
                          lVar42 = *(long *)&(__this_05->_2).static_fields_size;
                          if (lVar42 == 0) {
                            il2cpp_runtime_helper_022b2c90();
                            if (g_data_057ae3e0 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
                              il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
                              il2cpp_runtime_helper_023445d0(&"");
                              g_data_057ae3e0 = '\x01';
                            }
                            lVar42 = *(long *)&(pIVar49->_2).static_fields_size;
                            if (lVar42 != 0) {
                              __this_02 = *(Characters_BaseUseable_o **)(lVar42 + 0xf8);
                              if (__this_02 == (Characters_BaseUseable_o *)0x0) {
                                pUVar18 = (UnityEngine_UI_Image_o *)(pIVar49->_2).typeHierarchy;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
                                  pUVar18 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar49->_2).initializationExceptionGCHandle;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
                                    goto label_043c3758;
                                  }
                                }
                              }
                              else {
                                fVar55 = Characters_BaseUseable__GetCooldownRatio(__this_02,(MethodInfo *)0x0)
                                ;
                                pUVar18 = (UnityEngine_UI_Image_o *)(pIVar49->_2).typeHierarchy;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                  pUVar18 = *(UnityEngine_UI_Image_o **)
                                             &(pIVar49->_2).initializationExceptionGCHandle;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                    bVar29 = System_String__op_Inequality
                                                       (*(System_String_o **)&(pIVar49->_2).instance_size,
                                                        *(System_String_o **)&(pIVar49->_2).element_size,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar29 == '\0') {
label_043c3758:
                                      pUVar17 = (pIVar49->_2).unity_user_data;
                                    }
                                    else {
                                      puVar26 = &(pIVar49->_2).instance_size;
                                      (pIVar49->_2).instance_size = (pIVar49->_2).element_size;
                                      (pIVar49->_2).actualSize = (pIVar49->_2).native_size;
                                      il2cpp_runtime_helper_022b4080(puVar26);
                                      bVar29 = System_String__op_Inequality
                                                         (*(System_String_o **)&(pIVar49->_2).instance_size,
                                                          "",(MethodInfo *)0x0);
                                      if ((char)bVar29 == '\0') goto label_043c3758;
                                      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar38 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                                      pSVar37 = System_String__Concat_3ae5ba0
                                                          ("Icons/Specials/",*(System_String_o **)puVar26,
                                                           (MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      texture = (UnityEngine_Texture2D_o *)
                                                ApplicationManagers_ResourceManager__LoadAsset
                                                          (pSVar38,pSVar37,1,(MethodInfo *)0x0);
                                      if (texture == (UnityEngine_Texture2D_o *)0x0) {
                                        il2cpp_runtime_helper_022b2c90();
label_043c384a:
                                        il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                                        il2cpp_runtime_helper_022b2c90();
                                      }
                                      else {
                                        if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                                        iVar30 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                                           (texture,(texture->klass->vtable)._5_get_width.
                                                                    method);
                                        iVar48 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                                        auVar23._4_4_ = (float)iVar48;
                                        auVar23._0_4_ = (float)iVar30;
                                        auVar23._8_8_ = 0;
                                        pSVar38 = (System_String_o *)
                                                  UnityEngine_Sprite__Create_4e0d730
                                                            (texture,(UnityEngine_Rect_o)(auVar23 << 0x40),
                                                             (UnityEngine_Vector2_o)0x3f0000003f000000,
                                                             (MethodInfo *)0x0);
                                        pUVar18 = (pIVar49->_2).unity_user_data;
                                        if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                                        UnityEngine_UI_Image__set_sprite
                                                  (pUVar18,(UnityEngine_Sprite_o *)pSVar38,(MethodInfo *)0x0);
                                        pUVar18 = *(UnityEngine_UI_Image_o **)
                                                   &(pIVar49->_2).initializationExceptionGCHandle;
                                        if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                          UnityEngine_UI_Image__set_sprite
                                                    (pUVar18,(UnityEngine_Sprite_o *)pSVar38,(MethodInfo *)0x0
                                                    );
                                          goto label_043c3758;
                                        }
                                      }
                                      auVar63 = il2cpp_runtime_helper_022b2c90();
                                      if (auVar63._8_4_ != 1) {
                                        _Unwind_Resume(auVar63._0_8_);
                                      }
                                      pSVar38 = (System_String_o *)__cxa_begin_catch(auVar63._0_8_);
                                      cVar28 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(pSVar38->klass->_1).image);
                                      if (cVar28 == '\0') goto label_043c3956;
                                      __cxa_end_catch();
                                      pSVar38 = *(System_String_o **)puVar26;
                                      pSVar37 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                                      pSVar38 = System_String__Concat_3ae5ba0
                                                          (pSVar37,pSVar38,(MethodInfo *)0x0);
                                      lVar42 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                                      if (*(int *)(lVar42 + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0(lVar42);
                                      }
                                      UnityEngine_Debug__Log((Il2CppObject *)pSVar38,(MethodInfo *)0x0);
                                      pUVar17 = (pIVar49->_2).unity_user_data;
                                    }
                                    if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                      pSVar38 = (System_String_o *)
                                                UnityEngine_Component__get_gameObject
                                                          (pUVar17,(MethodInfo *)0x0);
                                      lVar42 = *(long *)&(pIVar49->_2).static_fields_size;
                                      if (lVar42 != 0) {
                                        if (*(long *)(lVar42 + 0xf8) == 0) {
                                          uVar31 = 0;
                                        }
                                        else {
                                          uVar31 = System_String__op_Inequality
                                                             (*(System_String_o **)
                                                               &(pIVar49->_2).instance_size,"",
                                                              (MethodInfo *)0x0);
                                        }
                                        if (pSVar38 != (System_String_o *)0x0) {
                                          UnityEngine_GameObject__SetActive
                                                    ((UnityEngine_GameObject_o *)pSVar38,uVar31 & 0xff,
                                                     (MethodInfo *)0x0);
                                          pUVar17 = *(UnityEngine_Component_o **)
                                                     &(pIVar49->_2).initializationExceptionGCHandle;
                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                            pSVar38 = (System_String_o *)
                                                      UnityEngine_Component__get_gameObject
                                                                (pUVar17,(MethodInfo *)0x0);
                                            lVar42 = *(long *)&(pIVar49->_2).static_fields_size;
                                            if (lVar42 != 0) {
                                              if (*(long *)(lVar42 + 0xf8) == 0) {
                                                uVar31 = 0;
                                              }
                                              else {
                                                uVar31 = System_String__op_Inequality
                                                                   (*(System_String_o **)
                                                                     &(pIVar49->_2).instance_size,""
                                                                    ,(MethodInfo *)0x0);
                                              }
                                              if (pSVar38 != (System_String_o *)0x0) {
                                                UnityEngine_GameObject__SetActive
                                                          ((UnityEngine_GameObject_o *)pSVar38,uVar31 & 0xff,
                                                           (MethodInfo *)0x0);
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
                            il2cpp_runtime_helper_022b2c90();
label_043c3956:
                            puVar39 = (undefined8 *)__cxa_allocate_exception(8);
                            *puVar39 = pSVar38->klass;
                            __cxa_throw(puVar39,&PTR_PTR_05215060,0);
                          }
                          plVar33 = *(long **)(lVar42 + 0x100);
                          if (plVar33 == (long *)0x0) {
                            return;
                          }
                          lVar42 = *plVar33;
                          bVar4 = *(byte *)(lVar42 + 0x130);
                          bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                          if ((bVar4 < bVar6) ||
                             (*(Il2CppClass **)(*(long *)(lVar42 + 200) + -8 + (ulong)bVar6 * 8) !=
                              TypeInfo_BladeWeapon)) {
                            bVar6 = *(byte *)(TypeInfo_APGWeapon + 0x130);
                            if ((bVar6 <= bVar4) &&
                               (*(long *)(*(long *)(lVar42 + 200) + -8 + (long)(ulong)bVar6 * 8) ==
                                TypeInfo_APGWeapon)) {
                              UI_HUDBottomHandler__UpdateAPG
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return;
                            }
                            pIVar49 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
                            if ((bVar4 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
                               (*(long *)(*(long *)(lVar42 + 200) + -8 + (long)pIVar49 * 8) != TypeInfo_AHSSWeapon))
                            {
                              bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (bVar4 < bVar6) {
                                return;
                              }
                              if (*(Il2CppClass **)(*(long *)(lVar42 + 200) + -8 + (long)(ulong)bVar6 * 8) !=
                                  TypeInfo_ThunderspearWeapon) {
                                return;
                              }
                              UI_HUDBottomHandler__UpdateTS
                                        ((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar6);
                              return;
                            }
                            plVar33 = &TypeInfo_Object;
                            ppIVar46 = &pIStack_40;
                          }
                          else {
                            if (g_data_057ae3e1 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                              il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
                              g_data_057ae3e1 = '\x01';
                            }
                            lVar42 = *(long *)&(__this_05->_2).static_fields_size;
                            if ((lVar42 == 0) ||
                               (plVar32 = *(long **)(lVar42 + 0x100),
                               (Il2CppClass *)plVar32 == (Il2CppClass *)0x0)) goto label_043c45cd;
                            pIVar49 = (((Il2CppClass *)plVar32)->_1).image;
                            bVar4 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                            if ((bVar4 <= (pIVar49->_2).naturalAligment) &&
                               ((pIVar49->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BladeWeapon)) {
                              pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                              if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
                              fVar55 = *(float *)&(((Il2CppClass *)plVar32)->_1).element_class /
                                       *(float *)&(((Il2CppClass *)plVar32)->_1).this_arg.field_0xc;
                              pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                              if (pUVar35 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
                              bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar35,(MethodInfo *)0x0);
                              if ((char)bVar29 != '\0') {
                                pUVar18 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar12 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar55,(MethodInfo *)0x0);
                                vtableDispatch = __this_05->vtable[2].methodPtr;
                                if (fVar55 <= 0.25) {
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,vtableDispatch,
                                             *(undefined8 *)(*(long *)vtableDispatch + 0x2b0));
                                  pMVar43 = __this_05->vtable[2].method;
                                  if (pMVar43 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar43->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).element_class,(int)(__this_05->_1).castClass
                                             ,pMVar43,*(undefined8 *)(pMVar43->methodPointer + 0x2b0));
                                  vtableDispatch = __this_05->vtable[3].methodPtr;
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar56 = SUB84((__this_05->_1).declaringType,0);
                                }
                                else {
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  (**(code **)(*(long *)vtableDispatch + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             vtableDispatch,
                                             *(undefined8 *)(*(long *)vtableDispatch + 0x2b0));
                                  pMVar43 = __this_05->vtable[2].method;
                                  if (pMVar43 == (MethodInfo *)0x0) goto label_043c45cd;
                                  (**(code **)(pMVar43->methodPointer + 0x2a8))
                                            ((int)(__this_05->_1).interopData,(int)(__this_05->_1).klass,
                                             pMVar43,*(undefined8 *)(pMVar43->methodPointer + 0x2b0));
                                  vtableDispatch = __this_05->vtable[3].methodPtr;
                                  if (vtableDispatch == (Il2CppMethodPointer)0x0) goto label_043c45cd;
                                  uVar56 = SUB84((__this_05->_1).fields,0);
                                }
                                (**(code **)(*(long *)vtableDispatch + 0x2a8))(uVar56);
                              }
                              if (0.0 < fVar55) {
label_043c40d5:
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar35,(MethodInfo *)0x0);
                                if (((char)bVar29 != '\0') ||
                                   (0.0 < *(float *)&(__this_05->_2).nested_type_count)) goto label_043c42f1;
                                pMVar43 = __this_05->vtable[3].method;
                                if ((pMVar43 == (MethodInfo *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                if (fVar55 <= 0.0) goto label_043c42f1;
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[2].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                pMVar43 = __this_05->vtable[2].method;
                                if ((pMVar43 == (MethodInfo *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                pUVar18 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].method;
                                if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                pUVar12 = (UnityEngine_UI_Image_o *)__this_05->vtable[2].methodPtr;
                                UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
                                UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar55,(MethodInfo *)0x0);
                                pMVar43 = __this_05->vtable[5].method;
                              }
                              else {
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar35,(MethodInfo *)0x0);
                                if ((char)bVar29 != '\0') goto label_043c40d5;
                                pMVar43 = __this_05->vtable[3].method;
                                if ((pMVar43 == (MethodInfo *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar35,(MethodInfo *)0x0);
                                if ((char)bVar29 != '\0') goto label_043c40d5;
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,1,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[4].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar36 = (UnityEngine_Animator_o *)
                                              UnityEngine_Component__GetComponent_object_
                                                        (pUVar17,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
                                   pUVar36 == (UnityEngine_Animator_o *)0x0)) goto label_043c45cd;
                                UnityEngine_Animator__Update(pUVar36,0.0,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Component_o *)__this_05->vtable[3].methodPtr;
                                if ((pUVar17 == (UnityEngine_Component_o *)0x0) ||
                                   (pUVar35 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                   , pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0);
label_043c42f1:
                                pMVar43 = __this_05->vtable[5].method;
                              }
                              if (pMVar43 != (MethodInfo *)0x0) {
                                iVar30 = *(int *)&pMVar43->name;
                                iVar48 = *(int *)&(((Il2CppClass *)plVar32)->_1).castClass;
                                if (iVar48 < iVar30) {
                                  if (iVar30 - iVar48 < 1) {
                                    return;
                                  }
                                  iVar48 = 0;
                                  do {
                                    pUVar40 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        ((System_Collections_Generic_List_object__o *)pMVar43,
                                                         0,MethodInfo_GameObject_get_Item);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    UnityEngine_Object__Destroy_4e01c60(pUVar40,(MethodInfo *)0x0);
                                    pSVar13 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    pUVar40 = (UnityEngine_Object_o *)
                                              System_Collections_Generic_List_object___get_Item
                                                        (pSVar13,0,MethodInfo_GameObject_get_Item);
                                    UnityEngine_Object__Destroy_4e01c60(pUVar40,(MethodInfo *)0x0);
                                    pMVar43 = __this_05->vtable[5].method;
                                    if (pMVar43 == (MethodInfo *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt
                                              ((System_Collections_Generic_List_object__o *)pMVar43,0,
                                               MethodInfo_Void_RemoveAt);
                                    pSVar13 = (System_Collections_Generic_List_object__o *)
                                              __this_05->vtable[6].methodPtr;
                                    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                    System_Collections_Generic_List_object___RemoveAt(pSVar13,0,MethodInfo_Void_RemoveAt);
                                    iVar48 = iVar48 + 1;
                                    if (iVar30 - *(int *)&(((Il2CppClass *)plVar32)->_1).castClass <= iVar48)
                                    {
                                      return;
                                    }
                                    pMVar43 = __this_05->vtable[5].method;
                                  } while (pMVar43 != (MethodInfo *)0x0);
                                }
                                else {
                                  if (iVar48 <= iVar30) {
                                    return;
                                  }
                                  if (iVar48 - iVar30 < 1) {
                                    return;
                                  }
                                  pMVar50 = __this_05->vtable[4].method;
                                  if (pMVar50 != (MethodInfo *)0x0) {
                                    iVar48 = 0;
                                    do {
                                      pUVar34 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)pMVar50,
                                                           (MethodInfo *)0x0);
                                      pUVar35 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar34,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      lVar42 = MethodInfo_Void_Add;
                                      if (pMVar43 == (MethodInfo *)0x0) break;
                                      puVar27 = (undefined1 *)((long)&pMVar43->name + 4);
                                      *(int *)puVar27 = *(int *)puVar27 + 1;
                                      pIVar14 = pMVar43->invoker_method;
                                      if (pIVar14 == (InvokerMethod)0x0) break;
                                      uVar31 = *(uint *)&pMVar43->name;
                                      if (uVar31 < *(uint *)(pIVar14 + 0x18)) {
                                        *(uint *)&pMVar43->name = uVar31 + 1;
                                        *(UnityEngine_GameObject_o **)(pIVar14 + (long)(int)uVar31 * 8 + 0x20)
                                             = pUVar35;
                                        il2cpp_runtime_helper_022b4080(pIVar14 + (long)(int)uVar31 * 8 + 0x20);
                                        pUVar35 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pMVar43,
                                                   (Il2CppObject *)pUVar35,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x70));
                                        pUVar35 = (UnityEngine_GameObject_o *)__this_05->vtable[5].methodPtr;
                                      }
                                      if (pUVar35 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar34 = UnityEngine_GameObject__get_transform
                                                          (pUVar35,(MethodInfo *)0x0);
                                      pUVar35 = UI_ElementFactory__InstantiateAndBind
                                                          (pUVar34,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                                      if (pUVar35 == (UnityEngine_GameObject_o *)0x0) break;
                                      pUVar34 = UnityEngine_GameObject__get_transform
                                                          (pUVar35,(MethodInfo *)0x0);
                                      UVar61 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                         ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),
                                                          (MethodInfo *)0x0);
                                      if (pUVar34 == (UnityEngine_Transform_o *)0x0) break;
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar34,UVar61,(MethodInfo *)0x0);
                                      lVar42 = MethodInfo_Void_Add;
                                      pSVar13 = (System_Collections_Generic_List_object__o *)
                                                __this_05->vtable[6].methodPtr;
                                      if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
                                      piVar1 = &(pSVar13->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pSVar15 = (pSVar13->fields)._items;
                                      if (pSVar15 == (System_Object_array *)0x0) break;
                                      uVar31 = (pSVar13->fields)._size;
                                      if (uVar31 < (uint)pSVar15->max_length) {
                                        (pSVar13->fields)._size = uVar31 + 1;
                                        pSVar15->m_Items[(int)uVar31] = (Il2CppObject *)pUVar35;
                                        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar31);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (pSVar13,(Il2CppObject *)pUVar35,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x70));
                                      }
                                      iVar48 = iVar48 + 1;
                                      if (*(int *)&(((Il2CppClass *)plVar32)->_1).castClass - iVar30 <= iVar48
                                         ) {
                                        return;
                                      }
                                      pMVar50 = __this_05->vtable[4].method;
                                      pMVar43 = __this_05->vtable[5].method;
                                    } while (pMVar50 != (MethodInfo *)0x0);
                                  }
                                }
                              }
label_043c45cd:
                              il2cpp_runtime_helper_022b2c90();
                              return;
                            }
                            pIVar49 = TypeInfo_BladeWeapon;
                            plVar33 = plVar32;
                            il2cpp_runtime_helper_022b2fd0();
                            uStack_a8 = 1;
                            ppIVar46 = (Il2CppClass **)auStack_c0;
                            pIStack_b0 = pIVar44;
                            if (g_data_057ae3e2 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                              g_data_057ae3e2 = '\x01';
                            }
                            lVar42 = *(long *)&(((Il2CppClass *)plVar33)->_2).static_fields_size;
                            if ((lVar42 == 0) ||
                               (__this_04 = *(Il2CppClass **)(lVar42 + 0x100), __this_04 == (Il2CppClass *)0x0
                               )) {
label_043c4ab9:
                              il2cpp_runtime_helper_022b2c90();
                            }
                            else {
                              pvVar11 = (__this_04->_1).image;
                              bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                              pIVar49 = TypeInfo_AmmoWeapon;
                              if ((bVar4 <= *(byte *)((long)pvVar11 + 0x130)) &&
                                 (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar4 * 8) ==
                                  TypeInfo_AmmoWeapon)) {
                                iVar30 = *(int *)((long)&(__this_04->_1).element_class + 4);
                                iVar48 = *(int *)&(__this_04->_1).castClass;
                                if (iVar30 < 1) {
                                  if (iVar48 == -1) {
                                    fVar55 = 1.0;
                                    pUVar18 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                  else {
                                    fVar55 = 0.0;
                                    pUVar18 = (UnityEngine_UI_Image_o *)
                                              ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                  }
                                }
                                else {
                                  fVar55 = (float)iVar48 / (float)iVar30;
                                  pUVar18 = (UnityEngine_UI_Image_o *)
                                            ((Il2CppClass *)plVar33)->vtable[7].methodPtr;
                                }
                                pIVar41 = (Il2CppClass *)0x1;
                                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                  pIVar44 = (Il2CppClass *)((Il2CppClass *)plVar33)->vtable[6].method;
                                  pIVar49 = (Il2CppClass *)0x0;
                                  fStack_b4 = fVar55;
                                  UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                  pIVar41 = pIVar51;
                                  if (pIVar44 != (Il2CppClass *)0x0) {
                                    pIVar49 = (Il2CppClass *)0x0;
                                    UnityEngine_UI_Image__set_fillAmount
                                              ((UnityEngine_UI_Image_o *)pIVar44,fStack_b4,(MethodInfo *)0x0);
                                    if (fStack_b4 <= 0.0) {
                                      pMVar43 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (pMVar43 != (MethodInfo *)0x0) {
                                        vtableDispatch = pMVar43->methodPointer;
                                        pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                        (**(code **)(vtableDispatch + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                        vtableDispatch = ((Il2CppClass *)plVar33)->vtable[10].methodPtr
                                        ;
                                        if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                          lVar42 = *(long *)vtableDispatch;
                                          pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                          (**(code **)(lVar42 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).declaringType);
                                          pMVar43 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar43 != (MethodInfo *)0x0) {
                                            uVar56 = SUB84((((Il2CppClass *)plVar33)->_1).declaringType,0);
                                            goto label_043c4886;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pMVar43 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                      if (fStack_b4 <= 0.5) {
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                          (**(code **)(pMVar43->methodPointer + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                          vtableDispatch =
                                               ((Il2CppClass *)plVar33)->vtable[10].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            lVar42 = *(long *)vtableDispatch;
                                            pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                            (**(code **)(lVar42 + 0x2a8))
                                                      ((int)(((Il2CppClass *)plVar33)->_1).this_arg.data);
                                            pMVar43 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              uVar56 = SUB84((((Il2CppClass *)plVar33)->_1).this_arg.data,0);
                                              goto label_043c4886;
                                            }
                                          }
                                        }
                                      }
                                      else if (pMVar43 != (MethodInfo *)0x0) {
                                        pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                        (**(code **)(pMVar43->methodPointer + 0x2a8))
                                                  ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                        vtableDispatch = ((Il2CppClass *)plVar33)->vtable[10].methodPtr
                                        ;
                                        if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                          lVar42 = *(long *)vtableDispatch;
                                          pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                          (**(code **)(lVar42 + 0x2a8))
                                                    ((int)(((Il2CppClass *)plVar33)->_1).fields);
                                          pMVar43 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                          if (pMVar43 != (MethodInfo *)0x0) {
                                            uVar56 = SUB84((((Il2CppClass *)plVar33)->_1).fields,0);
label_043c4886:
                                            (**(code **)(pMVar43->methodPointer + 0x2a8))(uVar56);
                                            unaff_R13 = (Il2CppClass *)
                                                        ((Il2CppClass *)plVar33)->vtable[7].method;
                                            pIVar44 = (Il2CppClass *)
                                                      ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                            __this_04 = (Il2CppClass *)&(__this_04->_1).element_class;
                                            pIVar49 = (Il2CppClass *)0x0;
                                            pIVar51 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)__this_04,(MethodInfo *)0x0);
                                            if ((pIVar44 != (Il2CppClass *)0x0) &&
                                               (pIVar41 = (pIVar44->_1).image, pIVar49 = pIVar51,
                                               (*pIVar41->vtable[0x4b].methodPtr)
                                                         (pIVar44,pIVar51,pIVar41->vtable[0x4b].method),
                                               pIVar41 = pIVar51, unaff_R13 != (Il2CppClass *)0x0)) {
                                              vtableDispatch = (unaff_R13->_1).image;
                                              pIVar49 = pIVar51;
                                              (**(code **)(vtableDispatch + 0x5e8))
                                                        (unaff_R13,pIVar51,
                                                         *(undefined8 *)(vtableDispatch + 0x5f0));
                                              pMVar43 = ((Il2CppClass *)plVar33)->vtable[7].method;
                                              if (*(int *)__this_04 == 0) {
                                                if (pMVar43 != (MethodInfo *)0x0) {
                                                  pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                                  (**(code **)(pMVar43->methodPointer + 0x2a8))(0x3f800000);
                                                  vtableDispatch =
                                                       ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    lVar42 = *(long *)vtableDispatch;
                                                    pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                                    (**(code **)(lVar42 + 0x2a8))(0x3f800000);
                                                    pMVar43 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                    goto joined_r0x043c4a06;
                                                  }
                                                }
                                              }
                                              else if (pMVar43 != (MethodInfo *)0x0) {
                                                pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                                (**(code **)(pMVar43->methodPointer + 0x2a8))();
                                                vtableDispatch =
                                                     ((Il2CppClass *)plVar33)->vtable[8].methodPtr;
                                                if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                  lVar42 = *(long *)vtableDispatch;
                                                  pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                                  (**(code **)(lVar42 + 0x2a8))();
                                                  pMVar43 = ((Il2CppClass *)plVar33)->vtable[8].method;
joined_r0x043c4a06:
                                                  if (pMVar43 != (MethodInfo *)0x0) {
                                                    pIVar49 = (Il2CppClass *)0x0;
                                                    pUVar35 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar43,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar49 = (Il2CppClass *)0x0;
                                                      bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar35,(MethodInfo *)0x0);
                                                      if ((((char)bVar29 != '\0') ||
                                                          (0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                            nested_type_count)) ||
                                                         (0.0 < *(float *)&(((Il2CppClass *)plVar33)->_2).
                                                                           interfaces_count)) {
                                                        return;
                                                      }
                                                      pMVar43 = ((Il2CppClass *)plVar33)->vtable[8].method;
                                                      if (pMVar43 != (MethodInfo *)0x0) {
                                                        pIVar49 = (Il2CppClass *)0x0;
                                                        pUVar35 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar43,(MethodInfo *)0x0);
                                                        if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar49 = (Il2CppClass *)0x1;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar35,1,(MethodInfo *)0x0);
                                                          pUVar17 = (UnityEngine_Component_o *)
                                                                    ((Il2CppClass *)plVar33)->vtable[10].
                                                                    methodPtr;
                                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar49 = (Il2CppClass *)0x0;
                                                            pUVar35 = UnityEngine_Component__get_gameObject
                                                                                (pUVar17,(MethodInfo *)0x0);
                                                            if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                              pIVar49 = (Il2CppClass *)0x0;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar35,0,(MethodInfo *)0x0);
                                                              pUVar17 = (UnityEngine_Component_o *)
                                                                        ((Il2CppClass *)plVar33)->vtable[9].
                                                                        methodPtr;
                                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar49 = (Il2CppClass *)0x0;
                                                                pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar49 = (Il2CppClass *)0x0;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar35,0,(MethodInfo *)0x0);
                                                         pMVar43 = ((Il2CppClass *)plVar33)->vtable[9].method;
                                                         if (pMVar43 != (MethodInfo *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar43,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,0,(MethodInfo *)0x0);
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
                                goto label_043c4ab9;
                              }
                            }
                            __this_05 = __this_04;
                            lVar42 = il2cpp_runtime_helper_022b2fd0();
                          }
                          *(long **)((long)ppIVar46 + -8) = plVar32;
                          *(long **)((long)ppIVar46 + -0x10) = plVar33;
                          *(Il2CppClass **)((long)ppIVar46 + -0x18) = __this_04;
                          *(Il2CppClass **)((long)ppIVar46 + -0x20) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar46 + -0x28) = pIVar41;
                          *(Il2CppClass **)((long)ppIVar46 + -0x30) = pIVar44;
                          *(long *)((long)ppIVar46 + -0x38) = lVar42;
                          if (g_data_057ae3e3 == '\0') {
                            *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4af3;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
                            g_data_057ae3e3 = '\x01';
                          }
                          lVar42 = *(long *)&(__this_05->_2).static_fields_size;
                          if ((lVar42 == 0) ||
                             (__this_04 = *(Il2CppClass **)(lVar42 + 0x100), __this_04 == (Il2CppClass *)0x0))
                          {
label_043c52c4:
                            *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c52c9;
                            il2cpp_runtime_helper_022b2c90();
                            pIVar41 = __this_04;
                          }
                          else {
                            pvVar11 = (__this_04->_1).image;
                            bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
                            pIVar49 = TypeInfo_AmmoWeapon;
                            pIVar41 = __this_04;
                            if ((bVar4 <= *(byte *)((long)pvVar11 + 0x130)) &&
                               (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar4 * 8) ==
                                TypeInfo_AmmoWeapon)) {
                              pIVar44 = (Il2CppClass *)__this_05->vtable[7].method;
                              vtableDispatch = __this_05->vtable[8].methodPtr;
                              plVar33 = (long *)&(__this_04->_1).element_class;
                              pIVar49 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4b6b;
                              pIVar41 = (Il2CppClass *)
                                        System_Int32__ToString((int32_t)plVar33,(MethodInfo *)0x0);
                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                uVar54 = *(undefined8 *)(*(long *)vtableDispatch + 0x5f0);
                                pcVar16 = *(code **)(*(long *)vtableDispatch + 0x5e8);
                                *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4b8e;
                                pIVar49 = pIVar41;
                                (*pcVar16)(vtableDispatch,pIVar41,uVar54);
                                unaff_R13 = pIVar41;
                                if (pIVar44 != (Il2CppClass *)0x0) {
                                  pIVar51 = (pIVar44->_1).image;
                                  pMVar43 = pIVar51->vtable[0x4b].method;
                                  vtableDispatch = pIVar51->vtable[0x4b].methodPtr;
                                  *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4bad;
                                  pIVar49 = pIVar41;
                                  (*vtableDispatch)(pIVar44,pIVar41,pMVar43);
                                  pMVar43 = __this_05->vtable[7].method;
                                  if (*(int *)plVar33 == 0) {
                                    if (pMVar43 != (MethodInfo *)0x0) {
                                      pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                      pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                      *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4cfb;
                                      (*pcVar16)(0x3f800000);
                                      vtableDispatch = __this_05->vtable[8].methodPtr;
                                      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                        lVar42 = *(long *)vtableDispatch;
                                        pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                        pcVar16 = *(code **)(lVar42 + 0x2a8);
                                        *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4d2b;
                                        (*pcVar16)(0x3f800000);
                                        iVar30 = *(int *)&(__this_04->_1).castClass;
                                        if (iVar30 != 1) goto label_043c4c1a;
label_043c4d38:
                                        pMVar43 = __this_05->vtable[0xb].method;
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pIVar44 = (Il2CppClass *)&(__this_05->_1).this_arg;
                                          pIVar24 = (Il2CppType *)&(__this_05->_1).declaringType;
                                          if (0 < *(int *)plVar33) {
                                            pIVar24 = (Il2CppType *)pIVar44;
                                          }
                                          pvVar11 = pIVar24->data;
                                          vtableDispatch = pMVar43->methodPointer;
                                          pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4d81;
                                          (*pcVar16)((int)pvVar11);
                                          vtableDispatch = __this_05->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pvVar11 = (__this_05->_1).this_arg.data;
                                            lVar42 = *(long *)vtableDispatch;
                                            pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                            pcVar16 = *(code **)(lVar42 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4db0;
                                            (*pcVar16)((int)pvVar11);
                                            pMVar43 = __this_05->vtable[10].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              pvVar11 = (__this_05->_1).this_arg.data;
                                              vtableDispatch = pMVar43->methodPointer;
                                              pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4ddf;
                                              (*pcVar16)((int)pvVar11);
                                              vtableDispatch = __this_05->vtable[0xb].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                pvVar11 = (__this_05->_1).this_arg.data;
                                                lVar42 = *(long *)vtableDispatch;
                                                pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                                pcVar16 = *(code **)(lVar42 + 0x2a8);
                                                *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4e0e;
                                                (*pcVar16)((int)pvVar11);
                                                pMVar43 = __this_05->vtable[0xd].method;
                                                if (pMVar43 != (MethodInfo *)0x0) {
                                                  pvVar11 = (__this_05->_1).this_arg.data;
                                                  vtableDispatch = pMVar43->methodPointer;
                                                  pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                                  pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4e3d;
                                                  (*pcVar16)((int)pvVar11);
                                                  vtableDispatch = __this_05->vtable[0xe].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    uVar56 = SUB84(((Il2CppType *)pIVar44)->data,0);
                                                    goto label_043c4eb3;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (pMVar43 != (MethodInfo *)0x0) {
                                    pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                    pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                    *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4be2;
                                    (*pcVar16)();
                                    vtableDispatch = __this_05->vtable[8].methodPtr;
                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                      lVar42 = *(long *)vtableDispatch;
                                      pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                      pcVar16 = *(code **)(lVar42 + 0x2a8);
                                      *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4c0d;
                                      (*pcVar16)();
                                      iVar30 = *(int *)&(__this_04->_1).castClass;
                                      if (iVar30 == 1) goto label_043c4d38;
label_043c4c1a:
                                      if (iVar30 == 0) {
                                        pMVar43 = __this_05->vtable[0xb].method;
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pIVar41 = (__this_05->_1).declaringType;
                                          vtableDispatch = pMVar43->methodPointer;
                                          pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4c51;
                                          (*pcVar16)((int)pIVar41);
                                          vtableDispatch = __this_05->vtable[0xc].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            pIVar41 = (__this_05->_1).declaringType;
                                            lVar42 = *(long *)vtableDispatch;
                                            pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                            pcVar16 = *(code **)(lVar42 + 0x2a8);
                                            *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4c80;
                                            (*pcVar16)((int)pIVar41);
                                            pMVar43 = __this_05->vtable[0xd].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              pIVar41 = (__this_05->_1).declaringType;
                                              vtableDispatch = pMVar43->methodPointer;
                                              pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                              pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                              *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4caf;
                                              (*pcVar16)((int)pIVar41);
                                              vtableDispatch = __this_05->vtable[0xe].methodPtr;
                                              if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                uVar56 = SUB84((__this_05->_1).declaringType,0);
                                                goto label_043c4eb3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar43 = __this_05->vtable[10].method;
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pvVar11 = (__this_05->_1).fields;
                                          vtableDispatch = pMVar43->methodPointer;
                                          pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4e8e;
                                          (*pcVar16)((int)pvVar11);
                                          vtableDispatch = __this_05->vtable[0xb].methodPtr;
                                          if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                            uVar56 = SUB84((__this_05->_1).fields,0);
label_043c4eb3:
                                            pIVar49 = *(Il2CppClass **)
                                                       (*(long *)vtableDispatch + 0x2b0);
                                            pcVar16 = *(code **)(*(long *)vtableDispatch + 0x2a8);
                                            *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4ec3;
                                            (*pcVar16)(uVar56);
                                            pMVar43 = __this_05->vtable[0xb].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              pIVar49 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4edb;
                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar43,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar49 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4eee;
                                                bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar35,(MethodInfo *)0x0);
                                                if (((char)bVar29 == '\0') ||
                                                   (*(int *)&(__this_04->_1).castClass < 2)) {
label_043c4f56:
                                                  pUVar17 = (UnityEngine_Component_o *)
                                                            __this_05->vtable[0xc].methodPtr;
                                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar49 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f6e;
                                                    pUVar35 = UnityEngine_Component__get_gameObject
                                                                        (pUVar17,(MethodInfo *)0x0);
                                                    if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar49 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f81;
                                                      bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar35,(MethodInfo *)0x0);
                                                      if (((char)bVar29 == '\0') ||
                                                         (*(int *)&(__this_04->_1).castClass < 1)) {
label_043c4fe9:
                                                        pMVar43 = __this_05->vtable[0xd].method;
                                                        if (pMVar43 != (MethodInfo *)0x0) {
                                                          pIVar49 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c5001;
                                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar43,(MethodInfo *)0x0);
                                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar49 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                 0x43c5014;
                                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                               (pUVar35,(MethodInfo *)0x0);
                                                            if (((char)bVar29 == '\0') ||
                                                               (0.0 < *(float *)&(__this_05->_2).
                                                                                 interfaces_count)) {
label_043c5083:
                                                              pUVar17 = (UnityEngine_Component_o *)
                                                                        __this_05->vtable[0xe].methodPtr;
                                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar49 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                     0x43c509b;
                                                                pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar49 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c50ae;
                                                         bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar35,(MethodInfo *)0x0);
                                                         if (((char)bVar29 == '\0') ||
                                                            (0.0 < *(float *)&(__this_05->_2).interfaces_count
                                                            )) {
label_043c511d:
                                                           pMVar43 = __this_05->vtable[0xc].method;
                                                           if (pMVar43 != (MethodInfo *)0x0) {
                                                             pIVar49 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                  0x43c5135;
                                                             pUVar35 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pMVar43,(MethodInfo *)0x0);
                                                             if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                               pIVar49 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                    0x43c5148;
                                                               bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                                  (pUVar35,(MethodInfo *)0x0);
                                                               if ((char)bVar29 == '\0') {
                                                                 pUVar17 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xd].methodPtr;
                                                                 if (pUVar17 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar49 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                        0x43c5164;
                                                                   pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar49 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c5177;
                                                         bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                            (pUVar35,(MethodInfo *)0x0);
                                                         if ((char)bVar29 == '\0') {
                                                           return;
                                                         }
                                                         goto label_043c517b;
                                                       }
                                                       }
                                                       }
                                                       else {
label_043c517b:
                                                         if (0.0 < *(float *)&(__this_05->_2).
                                                                              nested_type_count) {
                                                           return;
                                                         }
                                                         pMVar43 = __this_05->vtable[0xc].method;
                                                         if (pMVar43 != (MethodInfo *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c51b0
                                                           ;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar43,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar49 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                  0x43c51c5;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,0,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xd].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar49 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                    0x43c51dd;
                                                               pUVar35 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar49 = (Il2CppClass *)0x0;
                                                                 *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                      0x43c51f2;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar35,0,(MethodInfo *)0x0);
                                                                 pUVar17 = (UnityEngine_Component_o *)
                                                                           __this_05->vtable[0xb].methodPtr;
                                                                 if (pUVar17 != (UnityEngine_Component_o *)0x0
                                                                    ) {
                                                                   pIVar49 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                        0x43c520a;
                                                                   pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar19 = 0 < *(int *)&(__this_04->_1).castClass;
                                                         pIVar49 = (Il2CppClass *)(ulong)bVar19;
                                                         *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c5228;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar35,(uint)bVar19,(MethodInfo *)0x0);
                                                         pMVar43 = __this_05->vtable[10].method;
                                                         if (pMVar43 != (MethodInfo *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c5240
                                                           ;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar43,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar19 = 1 < *(int *)&(__this_04->_1).castClass;
                                                             pIVar49 = (Il2CppClass *)(ulong)bVar19;
                                                             *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                  0x43c525a;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,(uint)bVar19,(MethodInfo *)0x0
                                                                       );
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar49 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                    0x43c526e;
                                                               pUVar35 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 bVar19 = *(int *)&(__this_04->_1).castClass <
                                                                          1;
                                                                 pIVar49 = (Il2CppClass *)(ulong)bVar19;
                                                                 *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                      0x43c5288;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar35,(uint)bVar19,
                                                                            (MethodInfo *)0x0);
                                                                 pMVar43 = __this_05->vtable[0xb].method;
                                                                 if (pMVar43 != (MethodInfo *)0x0) {
                                                                   pIVar49 = (Il2CppClass *)0x0;
                                                                   *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                        0x43c529c;
                                                                   pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar43,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar35,(uint)(*(int *)&(__this_04->_1).
                                                                                            castClass < 2),
                                                                    (MethodInfo *)0x0);
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
                                                       else {
                                                         pUVar17 = (UnityEngine_Component_o *)
                                                                   __this_05->vtable[0xe].methodPtr;
                                                         if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c50d8
                                                           ;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               (pUVar17,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar49 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                  0x43c50ed;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,0,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->vtable[0xc].methodPtr;
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar49 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                    0x43c5105;
                                                               pUVar35 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar49 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                      0x43c511d;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar35,1,(MethodInfo *)0x0);
                                                                 goto label_043c511d;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       else {
                                                         pMVar43 = __this_05->vtable[0xd].method;
                                                         if (pMVar43 != (MethodInfo *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c503e
                                                           ;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar43,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar49 = (Il2CppClass *)0x0;
                                                             *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                  0x43c5053;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,0,(MethodInfo *)0x0);
                                                             pMVar43 = __this_05->vtable[0xb].method;
                                                             if (pMVar43 != (MethodInfo *)0x0) {
                                                               pIVar49 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                    0x43c506b;
                                                               pUVar35 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pMVar43,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pIVar49 = (Il2CppClass *)0x1;
                                                                 *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                      0x43c5083;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar35,1,(MethodInfo *)0x0);
                                                                 goto label_043c5083;
                                                               }
                                                             }
                                                           }
                                                         }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      else {
                                                        pUVar17 = (UnityEngine_Component_o *)
                                                                  __this_05->vtable[0xc].methodPtr;
                                                        if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                          pIVar49 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4fa4;
                                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                                              (pUVar17,(MethodInfo *)0x0);
                                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar49 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                 0x43c4fb9;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar35,0,(MethodInfo *)0x0);
                                                            pUVar17 = (UnityEngine_Component_o *)
                                                                      __this_05->vtable[0xb].methodPtr;
                                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar49 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                   0x43c4fd1;
                                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar17,(MethodInfo *)0x0);
                                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar49 = (Il2CppClass *)0x1;
                                                                *(undefined8 *)((long)ppIVar46 + -0x40) =
                                                                     0x43c4fe9;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar35,1,(MethodInfo *)0x0);
                                                                goto label_043c4fe9;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  pMVar43 = __this_05->vtable[0xb].method;
                                                  if (pMVar43 != (MethodInfo *)0x0) {
                                                    pIVar49 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f11;
                                                    pUVar35 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)pMVar43,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar49 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f26;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar35,0,(MethodInfo *)0x0);
                                                      pMVar43 = __this_05->vtable[10].method;
                                                      if (pMVar43 != (MethodInfo *)0x0) {
                                                        pIVar49 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f3e;
                                                        pUVar35 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pMVar43,(MethodInfo *)0x0);
                                                        if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar49 = (Il2CppClass *)0x1;
                                                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c4f56;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar35,1,(MethodInfo *)0x0);
                                                          goto label_043c4f56;
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
                              goto label_043c52c4;
                            }
                          }
                          *(undefined8 *)((long)ppIVar46 + -0x40) = 0x43c52d1;
                          __this_04 = pIVar41;
                          il2cpp_runtime_helper_022b2fd0();
                          *(long **)((long)ppIVar46 + -0x40) = plVar33;
                          *(Il2CppClass **)((long)ppIVar46 + -0x48) = pIVar41;
                          *(Il2CppClass **)((long)ppIVar46 + -0x50) = unaff_R13;
                          *(Il2CppClass **)((long)ppIVar46 + -0x58) = __this_05;
                          *(Il2CppClass **)((long)ppIVar46 + -0x60) = pIVar44;
                          ppIVar47 = (Il2CppClass **)((long)ppIVar46 + -0x70);
                          if (g_data_057ae3e4 == '\0') {
                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5305;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5311;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c531d;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5329;
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                            g_data_057ae3e4 = '\x01';
                          }
                          lVar42 = *(long *)&(__this_04->_2).static_fields_size;
                          if (lVar42 == 0) {
label_043c5986:
                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c598b;
                            il2cpp_runtime_helper_022b2c90();
                          }
                          else {
                            plVar33 = *(long **)(lVar42 + 0x100);
                            if ((Il2CppClass *)plVar33 == (Il2CppClass *)0x0) {
label_043c537e:
                              lVar42 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              if ((lVar42 != 0) &&
                                 (((lVar42 = *(long *)(lVar42 + 0x58), lVar42 != 0 &&
                                   (lVar42 = *(long *)(lVar42 + 0x48), lVar42 != 0)) &&
                                  ((Il2CppClass *)plVar33 != (Il2CppClass *)0x0)))) {
                                if (*(char *)(lVar42 + 0x11) == '\0') {
                                  iVar30 = *(int *)((long)&(((Il2CppClass *)plVar33)->_1).element_class + 4);
                                  uVar7 = *(uint32_t *)&(((Il2CppClass *)plVar33)->_1).castClass;
                                  if (iVar30 < 1) {
                                    if (uVar7 == 0xffffffff) {
                                      fVar55 = 1.0;
                                      pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                    else {
                                      fVar55 = 0.0;
                                      pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                    }
                                  }
                                  else {
                                    fVar55 = (float)(int)uVar7 / (float)iVar30;
                                    pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[7].methodPtr;
                                  }
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar44 = (Il2CppClass *)__this_04->vtable[6].method;
                                    pIVar49 = (Il2CppClass *)0x0;
                                    *(float *)((long)ppIVar46 + -100) = fVar55;
                                    *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5631;
                                    UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar55,(MethodInfo *)0x0);
                                    if (pIVar44 != (Il2CppClass *)0x0) {
                                      pIVar49 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c564a;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar44,
                                                 *(float *)((long)ppIVar46 + -100),(MethodInfo *)0x0);
                                      if (*(float *)((long)ppIVar46 + -100) <= 0.0) {
                                        pMVar43 = __this_04->vtable[0xe].method;
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pIVar41 = (__this_04->_1).declaringType;
                                          vtableDispatch = pMVar43->methodPointer;
                                          pIVar49 = *(Il2CppClass **)(vtableDispatch + 0x2b0);
                                          pcVar16 = *(code **)(vtableDispatch + 0x2a8);
                                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c56ee;
                                          (*pcVar16)((int)pIVar41);
                                          pMVar43 = __this_04->vtable[0xf].method;
                                          if (pMVar43 != (MethodInfo *)0x0) {
                                            uVar56 = SUB84((__this_04->_1).declaringType,0);
                                            goto label_043c574d;
                                          }
                                        }
                                      }
                                      else {
                                        pMVar43 = __this_04->vtable[0xe].method;
                                        if (*(float *)((long)ppIVar46 + -100) <= 0.5) {
                                          if (pMVar43 != (MethodInfo *)0x0) {
                                            pvVar11 = (__this_04->_1).this_arg.data;
                                            pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                            pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5731;
                                            (*pcVar16)((int)pvVar11);
                                            pMVar43 = __this_04->vtable[0xf].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              uVar56 = SUB84((__this_04->_1).this_arg.data,0);
                                              goto label_043c574d;
                                            }
                                          }
                                        }
                                        else if (pMVar43 != (MethodInfo *)0x0) {
                                          pvVar11 = (__this_04->_1).fields;
                                          pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                          pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c569b;
                                          (*pcVar16)((int)pvVar11);
                                          pMVar43 = __this_04->vtable[0xf].method;
                                          if (pMVar43 != (MethodInfo *)0x0) {
                                            uVar56 = SUB84((__this_04->_1).fields,0);
label_043c574d:
                                            pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c575d;
                                            (*pcVar16)(uVar56);
                                            pMVar43 = __this_04->vtable[7].method;
                                            pIVar44 = (Il2CppClass *)__this_04->vtable[8].methodPtr;
                                            plVar33 = (long *)&(((Il2CppClass *)plVar33)->_1).element_class;
                                            pIVar49 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5779;
                                            pIVar41 = (Il2CppClass *)
                                                      System_Int32__ToString
                                                                ((int32_t)plVar33,(MethodInfo *)0x0);
                                            if (pIVar44 != (Il2CppClass *)0x0) {
                                              pIVar51 = (pIVar44->_1).image;
                                              pMVar50 = pIVar51->vtable[0x4b].method;
                                              vtableDispatch = pIVar51->vtable[0x4b].methodPtr;
                                              *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c579b;
                                              pIVar49 = pIVar41;
                                              (*vtableDispatch)(pIVar44,pIVar41,pMVar50);
                                              if (pMVar43 != (MethodInfo *)0x0) {
                                                uVar54 = *(undefined8 *)(pMVar43->methodPointer + 0x5f0);
                                                pcVar16 = *(code **)(pMVar43->methodPointer + 0x5e8);
                                                *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c57bb;
                                                (*pcVar16)(pMVar43,pIVar41,uVar54);
                                                pMVar43 = __this_04->vtable[7].method;
                                                pIVar49 = pIVar41;
                                                if (*(int *)plVar33 == 0) {
                                                  if (pMVar43 != (MethodInfo *)0x0) {
                                                    pIVar49 = *(Il2CppClass **)
                                                               (pMVar43->methodPointer + 0x2b0);
                                                    pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5894;
                                                    (*pcVar16)(0x3f800000);
                                                    vtableDispatch = __this_04->vtable[8].methodPtr;
                                                    if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                      lVar42 = *(long *)vtableDispatch;
                                                      pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                                      pcVar16 = *(code **)(lVar42 + 0x2a8);
                                                      *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c58c3;
                                                      (*pcVar16)(0x3f800000);
                                                      pMVar43 = __this_04->vtable[0xe].method;
                                                      goto joined_r0x043c58cd;
                                                    }
                                                  }
                                                }
                                                else if (pMVar43 != (MethodInfo *)0x0) {
                                                  pIVar49 = *(Il2CppClass **)(pMVar43->methodPointer + 0x2b0);
                                                  pcVar16 = *(code **)(pMVar43->methodPointer + 0x2a8);
                                                  *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c57ef;
                                                  (*pcVar16)();
                                                  vtableDispatch = __this_04->vtable[8].methodPtr;
                                                  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
                                                    lVar42 = *(long *)vtableDispatch;
                                                    pIVar49 = *(Il2CppClass **)(lVar42 + 0x2b0);
                                                    pcVar16 = *(code **)(lVar42 + 0x2a8);
                                                    *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5819;
                                                    (*pcVar16)();
                                                    pMVar43 = __this_04->vtable[0xe].method;
joined_r0x043c58cd:
                                                    if (pMVar43 != (MethodInfo *)0x0) {
                                                      pIVar49 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5830;
                                                      pUVar35 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pMVar43,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                        pIVar49 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5843;
                                                        bVar29 = UnityEngine_GameObject__get_activeSelf
                                                                           (pUVar35,(MethodInfo *)0x0);
                                                        if ((char)bVar29 != '\0') {
                                                          return;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).nested_type_count
                                                           ) {
                                                          return;
                                                        }
                                                        if (0.0 < *(float *)&(__this_04->_2).interfaces_count)
                                                        {
                                                          return;
                                                        }
                                                        pMVar43 = __this_04->vtable[0xe].method;
                                                        if (pMVar43 != (MethodInfo *)0x0) {
                                                          pIVar49 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c58ef;
                                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pMVar43,(MethodInfo *)0x0);
                                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                            pIVar49 = (Il2CppClass *)0x1;
                                                            *(undefined8 *)((long)ppIVar46 + -0x78) =
                                                                 0x43c5907;
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar35,1,(MethodInfo *)0x0);
                                                            pUVar17 = (UnityEngine_Component_o *)
                                                                      __this_04->vtable[0xf].methodPtr;
                                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                              pIVar49 = (Il2CppClass *)0x0;
                                                              *(undefined8 *)((long)ppIVar46 + -0x78) =
                                                                   0x43c591a;
                                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                                  (pUVar17,(MethodInfo *)0x0);
                                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                pIVar49 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppIVar46 + -0x78) =
                                                                     0x43c592b;
                                                                UnityEngine_GameObject__SetActive
                                                                          (pUVar35,0,(MethodInfo *)0x0);
                                                                pMVar43 = __this_04->vtable[0xf].method;
                                                                if (pMVar43 != (MethodInfo *)0x0) {
                                                                  pIVar49 = (Il2CppClass *)0x0;
                                                                  *(undefined8 *)((long)ppIVar46 + -0x78) =
                                                                       0x43c593e;
                                                                  pUVar35 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pMVar43,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar49 = (Il2CppClass *)0x0;
                                                         *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c594f;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar35,0,(MethodInfo *)0x0);
                                                         pMVar43 = __this_04->vtable[6].method;
                                                         if (pMVar43 != (MethodInfo *)0x0) {
                                                           pIVar49 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5962
                                                           ;
                                                           pUVar35 = UnityEngine_Component__get_gameObject
                                                                               ((UnityEngine_Component_o *)
                                                                                pMVar43,(MethodInfo *)0x0);
                                                           if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                             pIVar49 = (Il2CppClass *)0x1;
                                                             *(undefined8 *)((long)ppIVar46 + -0x78) =
                                                                  0x43c5976;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar35,1,(MethodInfo *)0x0);
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_04->vtable[7].methodPtr;
                                                             goto joined_r0x043c5980;
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
                                else {
                                  pIVar49 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c53d3;
                                  fVar55 = Characters_BaseUseable__GetCooldownRatio
                                                     ((Characters_BaseUseable_o *)plVar33,(MethodInfo *)0x0);
                                  *(float *)((long)ppIVar46 + -100) = fVar55;
                                  pUVar18 = (UnityEngine_UI_Image_o *)__this_04->vtable[0x11].method;
                                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                                    pIVar44 = (Il2CppClass *)__this_04->vtable[0x11].methodPtr;
                                    pIVar49 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c53fd;
                                    UnityEngine_UI_Image__set_fillAmount
                                              (pUVar18,*(float *)((long)ppIVar46 + -100),(MethodInfo *)0x0);
                                    if (pIVar44 != (Il2CppClass *)0x0) {
                                      pIVar49 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5416;
                                      UnityEngine_UI_Image__set_fillAmount
                                                ((UnityEngine_UI_Image_o *)pIVar44,
                                                 *(float *)((long)ppIVar46 + -100),(MethodInfo *)0x0);
                                      if (((bool)*(char *)&__this_04->vtable[0x12].methodPtr ==
                                           (*(float *)((long)ppIVar46 + -100) <= 1.0 &&
                                           *(float *)((long)ppIVar46 + -100) != 1.0)) ||
                                         (bVar19 = *(float *)((long)ppIVar46 + -100) != 1.0,
                                         bVar20 = *(float *)((long)ppIVar46 + -100) <= 1.0,
                                         *(bool *)&__this_04->vtable[0x12].methodPtr = bVar20 && bVar19,
                                         bVar20 && bVar19)) {
label_043c5518:
                                        pUVar17 = (UnityEngine_Component_o *)__this_04->vtable[0x10].methodPtr
                                        ;
                                        if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                          pIVar49 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c552f;
                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                              (pUVar17,(MethodInfo *)0x0);
                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar49 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5542;
                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar35,(MethodInfo *)0x0);
                                            if (((char)bVar29 != '\0') ||
                                               (0.0 < *(float *)&(__this_04->_2).nested_type_count)) {
                                              return;
                                            }
                                            pMVar43 = __this_04->vtable[0x10].method;
                                            if (pMVar43 != (MethodInfo *)0x0) {
                                              pIVar49 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5572;
                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pMVar43,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar49 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5587;
                                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar17 = (UnityEngine_Component_o *)
                                                          __this_04->vtable[0x10].methodPtr;
joined_r0x043c5980:
                                                if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar49 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c559e;
                                                  pUVar35 = UnityEngine_Component__get_gameObject
                                                                      (pUVar17,(MethodInfo *)0x0);
                                                  if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar35,1,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pMVar43 = __this_04->vtable[0x10].method;
                                        if (pMVar43 != (MethodInfo *)0x0) {
                                          pIVar49 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5462;
                                          pUVar35 = UnityEngine_Component__get_gameObject
                                                              ((UnityEngine_Component_o *)pMVar43,
                                                               (MethodInfo *)0x0);
                                          if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar49 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5475;
                                            bVar29 = UnityEngine_GameObject__get_activeSelf
                                                               (pUVar35,(MethodInfo *)0x0);
                                            if ((char)bVar29 != '\0') goto label_043c5518;
                                            pUVar17 = (UnityEngine_Component_o *)
                                                      __this_04->vtable[0x10].methodPtr;
                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                              pIVar49 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5494;
                                              pUVar35 = UnityEngine_Component__get_gameObject
                                                                  (pUVar17,(MethodInfo *)0x0);
                                              if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar49 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c54a9;
                                                UnityEngine_GameObject__SetActive(pUVar35,0,(MethodInfo *)0x0)
                                                ;
                                                pMVar43 = __this_04->vtable[0x10].method;
                                                if (pMVar43 != (MethodInfo *)0x0) {
                                                  pIVar49 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c54c0;
                                                  pUVar35 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pMVar43,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar35 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar49 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c54d8;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar35,1,(MethodInfo *)0x0);
                                                    pMVar43 = __this_04->vtable[0x10].method;
                                                    if (pMVar43 != (MethodInfo *)0x0) {
                                                      *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c54f7;
                                                      pIVar49 = MethodInfo_Animator_GetComponent_Animator;
                                                      pUVar36 = (UnityEngine_Animator_o *)
                                                                UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pMVar43,
                                                                           (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator)
                                                      ;
                                                      if (pUVar36 != (UnityEngine_Animator_o *)0x0) {
                                                        pIVar49 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c550d;
                                                        UnityEngine_Animator__Update
                                                                  (pUVar36,0.0,(MethodInfo *)0x0);
                                                        (__this_04->_2).nested_type_count = 0;
                                                        (__this_04->_2).vtable_count = 0x3f00;
                                                        goto label_043c5518;
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
                              goto label_043c5986;
                            }
                            vtableDispatch = (((Il2CppClass *)plVar33)->_1).image;
                            cVar5 = (code)(TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            pIVar49 = TypeInfo_ThunderspearWeapon;
                            if (((byte)cVar5 <= (byte)vtableDispatch[0x130]) &&
                               (*(Il2CppClass **)
                                 (*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar5 * 8) ==
                                TypeInfo_ThunderspearWeapon)) goto label_043c537e;
                          }
                          *(undefined8 *)((long)ppIVar46 + -0x78) = 0x43c5993;
                          __this_05 = (Il2CppClass *)plVar33;
                          il2cpp_runtime_helper_022b2fd0();
                        }
                        *(Il2CppClass **)((long)ppIVar47 + -8) = pIVar44;
                        lVar42 = *(long *)&(__this_05->_2).token;
                        pIVar41 = __this_05;
                        if ((lVar42 != 0) &&
                           (pIVar41 = (Il2CppClass *)__this_05->vtable[0x12].method, pIVar44 = __this_05,
                           pIVar41 != (Il2CppClass *)0x0)) {
                          fVar60 = *(float *)(lVar42 + 0x140) / *(float *)(lVar42 + 0x134);
                          fVar55 = 1.0;
                          if (fVar60 <= 1.0) {
                            fVar55 = fVar60;
                          }
                          pIVar51 = (pIVar41->_1).image;
                          pIVar49 = (Il2CppClass *)pIVar51->vtable[0x2f].method;
                          vtableDispatch = pIVar51->vtable[0x2f].methodPtr;
                          *(undefined8 *)((long)ppIVar47 + -0x10) = 0x43c59fb;
                          (*vtableDispatch)(-(uint)(0.0 <= fVar60) & (uint)fVar55);
                          lVar42 = *(long *)&(__this_05->_2).token;
                          if (lVar42 != 0) {
                            pIVar41 = (Il2CppClass *)__this_05->vtable[0x13].methodPtr;
                            if (*(float *)(lVar42 + 0x140) <= 1.0) {
                              if (pIVar41 != (Il2CppClass *)0x0) {
                                uVar56 = SUB84((__this_05->_1).interfaceOffsets,0);
                                uVar57 = SUB84(__this_05->static_fields,0);
                                goto label_043c5a4b;
                              }
                            }
                            else if (pIVar41 != (Il2CppClass *)0x0) {
                              uVar56 = SUB84((__this_05->_1).nestedTypes,0);
                              uVar57 = SUB84((__this_05->_1).implementedInterfaces,0);
label_043c5a4b:
                              pIVar51 = (pIVar41->_1).image;
                              vtableDispatch = pIVar51->vtable[0x17].methodPtr;
                              (*vtableDispatch)
                                        (uVar56,uVar57,pIVar41,pIVar51->vtable[0x17].method,extraout_RDX,
                                         vtableDispatch);
                              return;
                            }
                          }
                        }
                        *(undefined8 *)((long)ppIVar47 + -0x10) = 0x43c5a64;
                        il2cpp_runtime_helper_022b2c90();
                        *(long **)((long)ppIVar47 + -0x10) = plVar33;
                        *(Il2CppClass **)((long)ppIVar47 + -0x18) = __this_04;
                        *(Il2CppClass **)((long)ppIVar47 + -0x20) = pIVar44;
                        if (g_data_057ae3de == '\0') {
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5a90;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5a9c;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5aa8;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5ab4;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5ac0;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                          g_data_057ae3de = '\x01';
                        }
                        pIVar45 = pIVar41->rgctx_data;
                        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5ae6;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5af0;
                        bVar29 = MiscExtensions__GetActive
                                           ((UnityEngine_GameObject_o *)pIVar45,(MethodInfo *)0x0);
                        if ((char)bVar29 != '\0') {
                          pMVar43 = pIVar41->vtable[0x13].method;
                          if (pMVar43 == (MethodInfo *)0x0) goto label_043c5bc3;
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5b1a;
                          bVar29 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              pMVar43,(Il2CppObject *)pIVar49,MethodInfo_Boolean_ContainsKey);
                          if ((char)bVar29 == '\0') {
                            if (pIVar49 == (Il2CppClass *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5b61;
                            pUVar36 = (UnityEngine_Animator_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pIVar49,
                                                 (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                            pMVar43 = pIVar41->vtable[0x13].method;
                            if (pMVar43 == (MethodInfo *)0x0) goto label_043c5bc3;
                            *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5b85;
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar43,
                                       (Il2CppObject *)pIVar49,(Il2CppObject *)pUVar36,MethodInfo_Void_Add);
                            pIVar45 = (Il2CppRGCTXData *)0x0;
                            if (pUVar36 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
                          }
                          else {
                            pMVar43 = pIVar41->vtable[0x13].method;
                            if (pMVar43 == (MethodInfo *)0x0) {
label_043c5bc3:
                              *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5bc8;
                              uVar54 = il2cpp_runtime_helper_022b2c90();
                              *(Il2CppClass **)((long)ppIVar47 + -0x28) = pIVar49;
                              *(Il2CppRGCTXData **)((long)ppIVar47 + -0x30) = pIVar45;
                              *(undefined8 *)((long)ppIVar47 + -0x38) = uVar54;
                              if (g_data_057ae3e5 == '\0') {
                                *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5bec;
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                                *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5bf8;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
                                *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5c04;
                                il2cpp_runtime_helper_023445d0(&"");
                                g_data_057ae3e5 = '\x01';
                              }
                              pMVar43->klass = (Il2CppClass *)0x3f0000003f800000;
                              pMVar43->return_type = (Il2CppType *)0x3f00000000000000;
                              pMVar43->parameters = (Il2CppType **)0x3f4000003f800000;
                              (pMVar43->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x3f8000003f000000;
                              pMVar43->field8_0x40 = (_union_14)0x3f800000;
                              pMVar43->token = 0;
                              pMVar43->flags = 0;
                              pMVar43->iflags = 0x3f00;
                              pMVar43->slot = 0;
                              pMVar43->parameters_count = 0x80;
                              pMVar43->bitflags = '?';
                              *(undefined4 *)&pMVar43->field_0x54 = 0x3f000000;
                              pMVar43[1].methodPointer = (Il2CppMethodPointer)0x3f8000003f000000;
                              pMVar43[1].virtualMethodPointer = (Il2CppMethodPointer)0x3f8000003f800000;
                              pMVar43[1].invoker_method = (InvokerMethod)0x3f0000003f800000;
                              pMVar43[1].name = (char *)0x3f8000003f800000;
                              pMVar43[1].klass = (Il2CppClass *)0x3f4000003f800000;
                              *(undefined4 *)&pMVar43[1].return_type = 0x3f800000;
                              *(undefined4 *)((long)&pMVar43[1].return_type + 4) = 0x3f800000;
                              *(undefined4 *)&pMVar43[1].parameters = 0x3f800000;
                              *(undefined4 *)((long)&pMVar43[1].parameters + 4) = 0x3f800000;
                              pMVar43[1].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x3e8000003f800000;
                              pMVar43[1].field8_0x40.genericMethod = (void *)0x3f8000003e800000;
                              pMVar43[1].token = 0x3f451eb8;
                              pMVar43[1].flags = 0x1eb8;
                              pMVar43[1].iflags = 0x3f45;
                              pMVar43[1].slot = 0x1eb8;
                              pMVar43[1].parameters_count = 'E';
                              pMVar43[1].bitflags = '?';
                              *(undefined4 *)&pMVar43[1].field_0x54 = 0x3f800000;
                              *(undefined4 *)&pMVar43[2].methodPointer = 0x3f451eb8;
                              *(undefined4 *)((long)&pMVar43[2].methodPointer + 4) = 0x3f000000;
                              *(undefined4 *)&pMVar43[2].virtualMethodPointer = 0x3f000000;
                              *(undefined4 *)((long)&pMVar43[2].virtualMethodPointer + 4) = 0x3f800000;
                              *(System_String_o **)&pMVar43[2].token = "";
                              *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5ca5;
                              il2cpp_runtime_helper_022b4080(&pMVar43[2].token);
                              *(System_String_o **)&pMVar43[2].slot = "";
                              *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5cbb;
                              il2cpp_runtime_helper_022b4080(&pMVar43[2].slot);
                              *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5cca;
                              __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
                              *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5cdf;
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
                              pMVar43[7].virtualMethodPointer = (Il2CppMethodPointer)__this_03;
                              *(undefined8 *)((long)ppIVar47 + -0x40) = 0x43c5cf5;
                              il2cpp_runtime_helper_022b4080(&pMVar43[7].virtualMethodPointer);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)pMVar43,(MethodInfo *)0x0);
                              return;
                            }
                            *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5b40;
                            pUVar36 = (UnityEngine_Animator_o *)
                                      System_Collections_Generic_Dictionary_object__object___get_Item
                                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                                 pMVar43,(Il2CppObject *)pIVar49,MethodInfo_Animator_get_Item);
                            if (pUVar36 == (UnityEngine_Animator_o *)0x0) {
                              pIVar45 = (Il2CppRGCTXData *)0x0;
                              goto label_043c5bc3;
                            }
                          }
                          *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5b94;
                          fVar55 = UnityEngine_Animator__get_speed(pUVar36,(MethodInfo *)0x0);
                          if ((fVar55 != 0.0) || (NAN(fVar55))) {
                            *(undefined8 *)((long)ppIVar47 + -0x28) = 0x43c5bab;
                            UnityEngine_Animator__Update(pUVar36,0.0,(MethodInfo *)0x0);
                            UnityEngine_Animator__set_speed(pUVar36,0.0,(MethodInfo *)0x0);
                            return;
                          }
                        }
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
      goto label_042f2984;
    }
  }
label_042f2994:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adecf == '\0') {
    uStack_a8 = 0x42f29bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecf = '\x01';
  }
  uStack_a8 = 0x42f29d3;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)__this,(Characters_BaseCharacter_o *)method,(MethodInfo *)0x0);
  pIVar41 = TypeInfo_Human;
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    pvVar11 = (((Il2CppClass *)method)->_1).image;
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= *(byte *)((long)pvVar11 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar4 * 8) == TypeInfo_Human)) {
      ((_union_14 *)&(((Il2CppClass *)__this)->_1).element_class)->genericMethod = method;
      pvVar11 = (((Il2CppClass *)method)->_1).image;
      if ((bVar4 <= *(byte *)((long)pvVar11 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar4 * 8) == pIVar41))
      goto label_042f2a2b;
    }
    uStack_a8 = 0x42f2a27;
    il2cpp_runtime_helper_022b2fd0(method);
  }
  ((_union_14 *)&(((Il2CppClass *)__this)->_1).element_class)->genericMethod = method;
label_042f2a2b:
  il2cpp_runtime_helper_022b4080((_union_14 *)&(((Il2CppClass *)__this)->_1).element_class,method);
  return;
}


