// Type: Characters.BasicTitanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasicTitanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs
// --------------------------------

// Characters.BasicTitanMovementSync$$Awake
// il2cpp: void Characters_BasicTitanMovementSync__Awake (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x431ea60

void Characters_BasicTitanMovementSync__Awake(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  if (g_data_057adfec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    g_data_057adfec = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_BasicTitan_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BasicTitan_GetComponent_BasicTitan);
  (__this->fields)._titan = pCVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._titan,pCVar1);
  return;
}


// Characters.BasicTitanMovementSync$$SendCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__SendCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x431eac0

void Characters_BasicTitanMovementSync__SendCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  undefined8 uVar2;
  System_Nullable_Quaternion__o __this_00;
  System_Nullable_Quaternion__o __this_01;
  uint uVar3;
  Photon_Pun_PhotonStream_o *obj;
  Il2CppObject *pIVar4;
  float *pfVar5;
  undefined1 *puVar6;
  Characters_BaseMovementSync_o *__this_02;
  uint uVar7;
  Photon_Pun_PhotonStream_o *__this_03;
  Characters_BasicTitanMovementSync_o *pCVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Quaternion_o value;
  char *in_stack_ffffffffffffff10;
  undefined8 in_stack_ffffffffffffff18;
  float in_stack_ffffffffffffff20;
  Il2CppMethodPointer local_d0;
  Il2CppMethodPointer pIStack_c8;
  float local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  Characters_BasicTitanMovementSync_o *local_88;
  undefined1 in_stack_ffffffffffffffa8 [11];
  undefined1 in_stack_ffffffffffffffb3;
  undefined4 in_stack_ffffffffffffffb4;
  UnityEngine_Quaternion_Fields local_28;
  
  __this_03 = stream;
  pCVar8 = __this;
  if (g_data_057adfed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Quaternion_get_Value);
    pCVar8 = (Characters_BasicTitanMovementSync_o *)&TypeInfo_QuaternionCompression;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfed = '\x01';
  }
  local_28 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    if ((char)(pCVar1->fields).CustomDamage == '\0') {
      uVar2 = *(undefined8 *)&(pCVar1->fields).IsCrawler;
      if ((char)uVar2 == '\0') {
        if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
          pIVar4 = (Il2CppObject *)0x0;
          goto label_0431ec0e;
        }
      }
      else {
        __this_01.fields.value.fields.y._3_1_ = in_stack_ffffffffffffffb3;
        __this_01.fields._0_11_ = in_stack_ffffffffffffffa8;
        __this_01.fields.value.fields.z = (float)in_stack_ffffffffffffffb4;
        __this_01.fields.value.fields.w = (float)uVar2;
        local_28 = (UnityEngine_Quaternion_Fields)
                   System_Nullable_Quaternion___get_Value
                             (__this_01,(MethodInfo_37E8CF0 *)&stack0xffffffffffffffb8);
        if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        il2cpp_runtime_helper_04266c00(&stack0xffffffffffffffd8,0);
        __this_03 = (Photon_Pun_PhotonStream_o *)&stack0xffffffffffffffb4;
        pCVar8 = g_data_057b9bb8;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
        if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
label_0431ec0e:
          Photon_Pun_PhotonStream__SendNext(stream,pIVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      __this_03 = (Photon_Pun_PhotonStream_o *)&stack0xffffffffffffffb4;
      pCVar8 = g_data_057b9bb8;
      obj = (Photon_Pun_PhotonStream_o *)il2cpp_runtime_helper_02304f30();
      if ((stream != (Photon_Pun_PhotonStream_o *)0x0) &&
         (pCVar8 = (Characters_BasicTitanMovementSync_o *)stream,
         Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)obj,(MethodInfo *)0x0), __this_03 = obj,
         (__this->fields)._titan != (Characters_BasicTitan_o *)0x0)) {
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffb3);
        goto label_0431ec0e;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  local_88 = __this;
  if (g_data_057adfee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    in_stack_ffffffffffffff18 = 0x431ec8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057adfee = '\x01';
  }
  local_b8 = (char *)0x0;
  pCVar1 = (pCVar8->fields)._titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_0431f08d:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((char)(pCVar1->fields).CustomDamage == '\0') {
      if (__this_03 == (Photon_Pun_PhotonStream_o *)0x0) goto label_0431f08d;
      __this_02 = (Characters_BaseMovementSync_o *)
                  Photon_Pun_PhotonStream__ReceiveNext(__this_03,(MethodInfo *)0x0);
      if ((__this_02 != (Characters_BaseMovementSync_o *)0x0) &&
         ((Il2CppClass *)__this_02->klass != *(Il2CppClass **)(TypeInfo_int + 0x40))) goto label_0431f09a;
      il2cpp_runtime_helper_02305450(__this_02,TypeInfo_int,&stack0xffffffffffffff10);
      local_b8 = in_stack_ffffffffffffff10;
      if ((char)in_stack_ffffffffffffff10 == '\0') {
        pCVar1 = (pCVar8->fields)._titan;
        if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
          *(undefined8 *)((long)&(pCVar1->fields).Setup + 4) = 0;
          (pCVar1->fields)._oldHeadRotation.fields.y = 0.0;
          (pCVar1->fields)._oldHeadRotation.fields.z = 0.0;
          (pCVar1->fields)._oldHeadRotation.fields.w = 0.0;
          return;
        }
        goto label_0431f08d;
      }
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      local_a0 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uStack_98 = (Il2CppRGCTXData *)0x0;
      local_b0 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      uStack_a8 = (Il2CppType *)0x0;
      uVar3 = System_Nullable_int___get_Value((System_Nullable_int__o)&local_b8,MethodInfo_Int32_get_Value);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar3 >> 0x1e == 3) goto label_0431ee10;
label_0431ee57:
        fVar10 = (float)(uVar3 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar3 & 0x200) == 0) * 4);
        fVar9 = fVar10 * fVar10 + 0.0;
        uVar7 = uVar3 >> 10;
        fVar14 = (float)local_b0;
        uVar12 = (undefined4)uStack_a8;
        uVar13 = uStack_a8._4_4_;
        if (uVar3 >> 0x1e != 2) goto label_0431eeb2;
label_0431ef02:
        fVar15 = (float)(uVar7 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar7 & 0x200) == 0) * 4);
        fVar9 = fVar15 * fVar15 + fVar9;
        if (uVar3 >> 0x1e != 0) {
          uVar7 = uVar7 >> 10;
          goto label_0431ef5d;
        }
        fVar9 = 1.0 - fVar9;
        if (fVar9 < 0.0) {
          local_b0 = (System_Nullable_T__c *)CONCAT44(fVar10,fVar14);
          uStack_a8 = (Il2CppType *)CONCAT44(uVar13,uVar12);
          local_a0 = (Il2CppType **)CONCAT44(fVar15,(undefined4)local_a0);
          fVar17 = sqrtf(fVar9);
          fVar11 = (float)local_b0;
          fVar10 = local_b0._4_4_;
          fVar16 = local_a0._4_4_;
        }
        else {
          fVar17 = SQRT(fVar9);
          fVar11 = fVar14;
          fVar16 = fVar15;
        }
      }
      else {
        if (uVar3 >> 0x1e != 3) goto label_0431ee57;
label_0431ee10:
        fVar9 = 0.0;
        fVar10 = local_b0._4_4_;
        uVar7 = uVar3;
label_0431eeb2:
        fVar14 = (float)(uVar7 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar7 & 0x200) == 0) * 4);
        fVar9 = fVar14 * fVar14 + fVar9;
        uVar7 = uVar7 >> 10;
        uVar12 = (undefined4)uStack_a8;
        uVar13 = uStack_a8._4_4_;
        if (uVar3 >> 0x1e != 1) goto label_0431ef02;
        fVar15 = local_a0._4_4_;
label_0431ef5d:
        fVar17 = (float)(uVar7 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar7 & 0x200) == 0) * 4);
        fVar9 = 1.0 - (fVar17 * fVar17 + fVar9);
        if (fVar9 < 0.0) {
          local_b0 = (System_Nullable_T__c *)CONCAT44(fVar10,fVar14);
          uStack_a8 = (Il2CppType *)CONCAT44(uVar13,uVar12);
          local_a0 = (Il2CppType **)CONCAT44(fVar15,(undefined4)local_a0);
          fVar9 = sqrtf(fVar9);
          fVar15 = local_a0._4_4_;
          fVar14 = (float)local_b0;
          fVar10 = local_b0._4_4_;
          in_stack_ffffffffffffff20 = fVar17;
        }
        else {
          fVar9 = SQRT(fVar9);
        }
        fVar11 = fVar14;
        fVar16 = fVar9;
        if ((uVar3 >> 0x1e != 1) && (fVar11 = fVar9, fVar16 = fVar15, uVar3 >> 0x1e != 2)) {
          fVar11 = fVar14;
          fVar10 = fVar9;
        }
      }
      pCVar1 = (pCVar8->fields)._titan;
      local_d0 = (Il2CppMethodPointer)0x0;
      pIStack_c8 = (Il2CppMethodPointer)0x0;
      local_c0 = 0.0;
      __this_00.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff18;
      __this_00.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
      __this_00.fields._0_8_ = in_stack_ffffffffffffff10;
      __this_00.fields.value.fields.w = in_stack_ffffffffffffff20;
      value.fields.y = fVar16;
      value.fields.x = fVar17;
      value.fields.w = fVar10;
      value.fields.z = fVar11;
      System_Nullable_Quaternion____ctor(__this_00,value,(MethodInfo_37E8CD0 *)&local_d0);
      if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
        (pCVar1->fields)._oldHeadRotation.fields.w = local_c0;
        *(Il2CppMethodPointer *)((long)&(pCVar1->fields).Setup + 4) = local_d0;
        *(Il2CppMethodPointer *)&(pCVar1->fields)._oldHeadRotation.fields.y = pIStack_c8;
        return;
      }
      goto label_0431f08d;
    }
    if ((__this_03 == (Photon_Pun_PhotonStream_o *)0x0) ||
       (pIVar4 = Photon_Pun_PhotonStream__ReceiveNext(__this_03,(MethodInfo *)0x0),
       pIVar4 == (Il2CppObject *)0x0)) goto label_0431f08d;
    if ((pIVar4->klass->_1).element_class ==
        *(Il2CppClass **)&(g_data_057b9bb8->fields)._correctRotation.fields.z) {
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pIVar4);
      (pCVar1->fields).LastGoodHeadAngle.fields.y = *pfVar5;
      pCVar1 = (pCVar8->fields)._titan;
      pIVar4 = Photon_Pun_PhotonStream__ReceiveNext(__this_03,(MethodInfo *)0x0);
      if ((pCVar1 == (Characters_BasicTitan_o *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) goto label_0431f08d;
      if ((pIVar4->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
        puVar6 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar4);
        *(undefined1 *)&(pCVar1->fields).BellyFlopTime = *puVar6;
        return;
      }
    }
  }
  __this_02 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_022b2fd0(pIVar4);
label_0431f09a:
  il2cpp_runtime_helper_022b2fd0();
  Characters_BaseMovementSync___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__ReceiveCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x431ec30

void Characters_BasicTitanMovementSync__ReceiveCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Nullable_Quaternion__o __this_00;
  uint uVar2;
  Il2CppObject *pIVar3;
  float *pfVar4;
  undefined1 *puVar5;
  Characters_BaseMovementSync_o *__this_01;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o value;
  char *in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  float in_stack_ffffffffffffff78;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  float fStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (g_data_057adfee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    in_stack_ffffffffffffff70 = 0x431ec8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057adfee = '\x01';
  }
  pcStack_60 = (char *)0x0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_0431f08d:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((char)(pCVar1->fields).CustomDamage == '\0') {
      if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_0431f08d;
      __this_01 = (Characters_BaseMovementSync_o *)
                  Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((__this_01 != (Characters_BaseMovementSync_o *)0x0) &&
         ((Il2CppClass *)__this_01->klass != *(Il2CppClass **)(TypeInfo_int + 0x40))) goto label_0431f09a;
      il2cpp_runtime_helper_02305450(__this_01,TypeInfo_int,&stack0xffffffffffffff68);
      pcStack_60 = in_stack_ffffffffffffff68;
      if ((char)in_stack_ffffffffffffff68 == '\0') {
        pCVar1 = (__this->fields)._titan;
        if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
          *(undefined8 *)((long)&(pCVar1->fields).Setup + 4) = 0;
          (pCVar1->fields)._oldHeadRotation.fields.y = 0.0;
          (pCVar1->fields)._oldHeadRotation.fields.z = 0.0;
          (pCVar1->fields)._oldHeadRotation.fields.w = 0.0;
          return;
        }
        goto label_0431f08d;
      }
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      uStack_48 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uStack_40 = (Il2CppRGCTXData *)0x0;
      uStack_58 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      uStack_50 = (Il2CppType *)0x0;
      uVar2 = System_Nullable_int___get_Value((System_Nullable_int__o)&pcStack_60,MethodInfo_Int32_get_Value);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar2 >> 0x1e == 3) goto label_0431ee10;
label_0431ee57:
        fVar8 = (float)(uVar2 & 0x1ff) * 0.0013837706 *
                *(float *)(&g_data_00d1d580 + (ulong)((uVar2 & 0x200) == 0) * 4);
        fVar7 = fVar8 * fVar8 + 0.0;
        uVar6 = uVar2 >> 10;
        fVar12 = (float)uStack_58;
        uVar10 = (undefined4)uStack_50;
        uVar11 = uStack_50._4_4_;
        if (uVar2 >> 0x1e != 2) goto label_0431eeb2;
label_0431ef02:
        fVar13 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar6 & 0x200) == 0) * 4);
        fVar7 = fVar13 * fVar13 + fVar7;
        if (uVar2 >> 0x1e != 0) {
          uVar6 = uVar6 >> 10;
          goto label_0431ef5d;
        }
        fVar7 = 1.0 - fVar7;
        if (fVar7 < 0.0) {
          uStack_58 = (System_Nullable_T__c *)CONCAT44(fVar8,fVar12);
          uStack_50 = (Il2CppType *)CONCAT44(uVar11,uVar10);
          uStack_48 = (Il2CppType **)CONCAT44(fVar13,(undefined4)uStack_48);
          fVar15 = sqrtf(fVar7);
          fVar9 = (float)uStack_58;
          fVar8 = uStack_58._4_4_;
          fVar14 = uStack_48._4_4_;
        }
        else {
          fVar15 = SQRT(fVar7);
          fVar9 = fVar12;
          fVar14 = fVar13;
        }
      }
      else {
        if (uVar2 >> 0x1e != 3) goto label_0431ee57;
label_0431ee10:
        fVar7 = 0.0;
        fVar8 = uStack_58._4_4_;
        uVar6 = uVar2;
label_0431eeb2:
        fVar12 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar6 & 0x200) == 0) * 4);
        fVar7 = fVar12 * fVar12 + fVar7;
        uVar6 = uVar6 >> 10;
        uVar10 = (undefined4)uStack_50;
        uVar11 = uStack_50._4_4_;
        if (uVar2 >> 0x1e != 1) goto label_0431ef02;
        fVar13 = uStack_48._4_4_;
label_0431ef5d:
        fVar15 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar6 & 0x200) == 0) * 4);
        fVar7 = 1.0 - (fVar15 * fVar15 + fVar7);
        if (fVar7 < 0.0) {
          uStack_58 = (System_Nullable_T__c *)CONCAT44(fVar8,fVar12);
          uStack_50 = (Il2CppType *)CONCAT44(uVar11,uVar10);
          uStack_48 = (Il2CppType **)CONCAT44(fVar13,(undefined4)uStack_48);
          fVar7 = sqrtf(fVar7);
          fVar13 = uStack_48._4_4_;
          fVar12 = (float)uStack_58;
          fVar8 = uStack_58._4_4_;
          in_stack_ffffffffffffff78 = fVar15;
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        fVar9 = fVar12;
        fVar14 = fVar7;
        if ((uVar2 >> 0x1e != 1) && (fVar9 = fVar7, fVar14 = fVar13, uVar2 >> 0x1e != 2)) {
          fVar9 = fVar12;
          fVar8 = fVar7;
        }
      }
      pCVar1 = (__this->fields)._titan;
      pIStack_78 = (Il2CppMethodPointer)0x0;
      pIStack_70 = (Il2CppMethodPointer)0x0;
      fStack_68 = 0.0;
      __this_00.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff70;
      __this_00.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_00.fields._0_8_ = in_stack_ffffffffffffff68;
      __this_00.fields.value.fields.w = in_stack_ffffffffffffff78;
      value.fields.y = fVar14;
      value.fields.x = fVar15;
      value.fields.w = fVar8;
      value.fields.z = fVar9;
      System_Nullable_Quaternion____ctor(__this_00,value,(MethodInfo_37E8CD0 *)&pIStack_78);
      if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
        (pCVar1->fields)._oldHeadRotation.fields.w = fStack_68;
        *(Il2CppMethodPointer *)((long)&(pCVar1->fields).Setup + 4) = pIStack_78;
        *(Il2CppMethodPointer *)&(pCVar1->fields)._oldHeadRotation.fields.y = pIStack_70;
        return;
      }
      goto label_0431f08d;
    }
    if ((stream == (Photon_Pun_PhotonStream_o *)0x0) ||
       (pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0), pIVar3 == (Il2CppObject *)0x0
       )) goto label_0431f08d;
    if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(pIVar3);
      (pCVar1->fields).LastGoodHeadAngle.fields.y = *pfVar4;
      pCVar1 = (__this->fields)._titan;
      pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((pCVar1 == (Characters_BasicTitan_o *)0x0) || (pIVar3 == (Il2CppObject *)0x0)) goto label_0431f08d;
      if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
        puVar5 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar3);
        *(undefined1 *)&(pCVar1->fields).BellyFlopTime = *puVar5;
        return;
      }
    }
  }
  __this_01 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_022b2fd0(pIVar3);
label_0431f09a:
  il2cpp_runtime_helper_022b2fd0();
  Characters_BaseMovementSync___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanMovementSync$$.ctor
// il2cpp: void Characters_BasicTitanMovementSync___ctor (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x431f0b0

void Characters_BasicTitanMovementSync___ctor(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


