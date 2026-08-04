// Type: Characters.HumanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanMovementSync.cs
// --------------------------------

// Characters.HumanMovementSync$$Awake
// il2cpp: void Characters_HumanMovementSync__Awake (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x42e09f0

void Characters_HumanMovementSync__Awake(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if (g_data_057ade5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057ade5e = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_Human_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  (__this->fields)._human = pCVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,pCVar1);
  return;
}


// Characters.HumanMovementSync$$SendCustomStream
// il2cpp: void Characters_HumanMovementSync__SendCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x42e0a50

void Characters_HumanMovementSync__SendCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  System_String_o *pSVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  UnityEngine_Transform_o *__this_00;
  Il2CppMethodPointer pIVar12;
  long lVar13;
  MethodInfo *pMVar14;
  System_Nullable_Quaternion__o __this_01;
  System_Nullable_Quaternion__o __this_02;
  UnityEngine_Quaternion_Fields b;
  uint uVar15;
  bool_conflict bVar16;
  Il2CppObject *obj;
  Characters_BaseMovementSync_o *__this_03;
  Characters_BaseMovementSync_c *pCVar17;
  uint uVar18;
  Photon_Pun_PhotonStream_o *__this_04;
  Characters_Human_o *pCVar19;
  Characters_BaseMovementSync_o *__this_05;
  UnityEngine_Transform_o *__this_06;
  Characters_BaseMovementSync_o *pCVar20;
  Characters_BaseMovementSync_o *__this_07;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o value_01;
  float fStackY_118;
  float fStackY_114;
  float fStackY_108;
  float fStackY_104;
  float fStackY_f8;
  float fStackY_f4;
  char *in_stack_ffffffffffffff40;
  undefined8 in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff50;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  Characters_HumanMovementSync_o *pCStack_58;
  Photon_Pun_PhotonStream_o *pPStack_50;
  undefined1 in_stack_ffffffffffffffc8 [12];
  undefined4 in_stack_ffffffffffffffd4;
  
  __this_04 = stream;
  if (g_data_057ade5f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Quaternion_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057ade5f = '\x01';
  }
  pCVar19 = (__this->fields)._human;
  if (pCVar19 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar19->fields)._launchLeftTime == '\0') {
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        obj = (Il2CppObject *)0x0;
        goto label_042e0b24;
      }
    }
    else {
      __this_02.fields.value.fields.z = (float)in_stack_ffffffffffffffd4;
      __this_02.fields.hasValue = in_stack_ffffffffffffffc8._0_4_;
      __this_02.fields.value.fields.x = (float)in_stack_ffffffffffffffc8._4_4_;
      __this_02.fields.value.fields.y = (float)in_stack_ffffffffffffffc8._8_4_;
      __this_02.fields.value.fields.w = 0.0;
      System_Nullable_Quaternion___get_Value
                (__this_02,(MethodInfo_37E8CF0 *)&(pCVar19->fields)._launchLeftTime);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      il2cpp_runtime_helper_04266c00(&stack0xffffffffffffffd8,0);
      __this_04 = (Photon_Pun_PhotonStream_o *)&stack0xffffffffffffffd4;
      pCVar19 = g_data_057b9bb8;
      obj = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
label_042e0b24:
        Photon_Pun_PhotonStream__SendNext(stream,obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __this;
  pPStack_50 = stream;
  if (g_data_057ade60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    in_stack_ffffffffffffff48 = 0x42e0b98;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057ade60 = '\x01';
  }
  auStack_a0._24_8_ = (char *)0x0;
  if (__this_04 == (Photon_Pun_PhotonStream_o *)0x0) {
label_042e0eec:
    __this_03 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_03 = (Characters_BaseMovementSync_o *)
                Photon_Pun_PhotonStream__ReceiveNext(__this_04,(MethodInfo *)0x0);
    if ((__this_03 == (Characters_BaseMovementSync_o *)0x0) ||
       ((Il2CppClass *)__this_03->klass == *(Il2CppClass **)(TypeInfo_int + 0x40))) {
      il2cpp_runtime_helper_02305450(__this_03,TypeInfo_int,&stack0xffffffffffffff40);
      auStack_a0._24_8_ = in_stack_ffffffffffffff40;
      if ((char)in_stack_ffffffffffffff40 == '\0') {
        pSVar10 = (pCVar19->fields).Team;
        if (pSVar10 != (System_String_o *)0x0) {
          pSVar10[0x1c].fields._stringLength = 0;
          pSVar10[0x1c].fields._firstChar = 0;
          *(undefined2 *)&pSVar10[0x1c].fields.field_0x6 = 0;
          pSVar10[0x1d].klass = (System_String_c *)0x0;
          *(undefined4 *)&pSVar10[0x1d].monitor = 0;
          return;
        }
        goto label_042e0eec;
      }
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      uStack_70 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uStack_68 = (Il2CppRGCTXData *)0x0;
      uStack_80 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      uStack_78 = (Il2CppType *)0x0;
      uVar15 = System_Nullable_int___get_Value((System_Nullable_int__o)((long)auStack_a0 + 0x18),MethodInfo_Int32_get_Value)
      ;
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar15 >> 0x1e == 3) goto label_042e0c6d;
label_042e0cb8:
        fVar22 = (float)(uVar15 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar15 & 0x200) == 0) * 4);
        fVar21 = fVar22 * fVar22 + 0.0;
        uVar18 = uVar15 >> 10;
        fVar27 = (float)uStack_80;
        uVar25 = (undefined4)uStack_78;
        uVar26 = uStack_78._4_4_;
        uVar28 = (undefined4)uStack_70;
        fVar23 = uStack_70._4_4_;
        uVar30 = (undefined4)uStack_68;
        uVar31 = uStack_68._4_4_;
        if (uVar15 >> 0x1e != 2) goto label_042e0d17;
label_042e0d66:
        fVar23 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar21 = fVar23 * fVar23 + fVar21;
        if (uVar15 >> 0x1e != 0) {
          uVar18 = uVar18 >> 10;
          goto label_042e0dbd;
        }
        fVar21 = 1.0 - fVar21;
        if (fVar21 < 0.0) {
          uStack_80 = (System_Nullable_T__c *)CONCAT44(fVar22,fVar27);
          uStack_78 = (Il2CppType *)CONCAT44(uVar26,uVar25);
          uStack_70 = (Il2CppType **)CONCAT44(fVar23,uVar28);
          uStack_68 = (Il2CppRGCTXData *)CONCAT44(uVar31,uVar30);
          fVar32 = sqrtf(fVar21);
          fVar24 = (float)uStack_80;
          fVar22 = uStack_80._4_4_;
          fVar29 = uStack_70._4_4_;
        }
        else {
          fVar32 = SQRT(fVar21);
          fVar24 = fVar27;
          fVar29 = fVar23;
        }
      }
      else {
        if (uVar15 >> 0x1e != 3) goto label_042e0cb8;
label_042e0c6d:
        fVar21 = 0.0;
        fVar22 = uStack_80._4_4_;
        uVar28 = (undefined4)uStack_70;
        fVar23 = uStack_70._4_4_;
        uVar30 = (undefined4)uStack_68;
        uVar31 = uStack_68._4_4_;
        uVar18 = uVar15;
label_042e0d17:
        fVar27 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar21 = fVar27 * fVar27 + fVar21;
        uVar18 = uVar18 >> 10;
        uVar25 = (undefined4)uStack_78;
        uVar26 = uStack_78._4_4_;
        if (uVar15 >> 0x1e != 1) goto label_042e0d66;
label_042e0dbd:
        fVar32 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar21 = 1.0 - (fVar32 * fVar32 + fVar21);
        if (fVar21 < 0.0) {
          uStack_80 = (System_Nullable_T__c *)CONCAT44(fVar22,fVar27);
          uStack_78 = (Il2CppType *)CONCAT44(uVar26,uVar25);
          uStack_70 = (Il2CppType **)CONCAT44(fVar23,uVar28);
          uStack_68 = (Il2CppRGCTXData *)CONCAT44(uVar31,uVar30);
          fVar21 = sqrtf(fVar21);
          fVar23 = uStack_70._4_4_;
          fVar27 = (float)uStack_80;
          fVar22 = uStack_80._4_4_;
          in_stack_ffffffffffffff50 = fVar32;
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar24 = fVar27;
        fVar29 = fVar21;
        if ((uVar15 >> 0x1e != 1) && (fVar24 = fVar21, fVar29 = fVar23, uVar15 >> 0x1e != 2)) {
          fVar24 = fVar27;
          fVar22 = fVar21;
        }
      }
      pSVar10 = (pCVar19->fields).Team;
      auStack_a0._0_4_ = 0;
      auStack_a0._4_2_ = 0;
      auStack_a0._6_2_ = 0;
      auStack_a0._8_8_ = (System_String_c *)0x0;
      auStack_a0._16_4_ = 0;
      __this_01.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff48;
      __this_01.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
      __this_01.fields._0_8_ = in_stack_ffffffffffffff40;
      __this_01.fields.value.fields.w = in_stack_ffffffffffffff50;
      UVar36.fields.y = fVar29;
      UVar36.fields.x = fVar32;
      UVar36.fields.w = fVar22;
      UVar36.fields.z = fVar24;
      System_Nullable_Quaternion____ctor(__this_01,UVar36,(MethodInfo_37E8CD0 *)auStack_a0);
      if (pSVar10 != (System_String_o *)0x0) {
        *(undefined4 *)&pSVar10[0x1d].monitor = auStack_a0._16_4_;
        pSVar10[0x1c].fields._stringLength = auStack_a0._0_4_;
        pSVar10[0x1c].fields._firstChar = auStack_a0._4_2_;
        *(undefined2 *)&pSVar10[0x1c].fields.field_0x6 = auStack_a0._6_2_;
        pSVar10[0x1d].klass = (System_String_c *)auStack_a0._8_8_;
        return;
      }
      goto label_042e0eec;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  __this_05 = __this_03;
  if (g_data_057ade61 == '\0') {
    __this_05 = (Characters_BaseMovementSync_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade61 = '\x01';
  }
  if ((char)(__this_03->fields).Disabled != '\0') {
    return;
  }
  pPVar11 = (__this_03->fields)._photonView;
  if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar11->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    pCVar17 = __this_03[1].klass;
    if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
    if (((pCVar17->_2).token == 2) && (*(char *)((long)&pCVar17[1]._1.name + 4) == '\0')) {
      __this_05 = (Characters_BaseMovementSync_o *)(pCVar17->vtable)._7_ReceiveCustomStream.methodPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        pCVar17 = __this_03[1].klass;
        if ((pCVar17 == (Characters_BaseMovementSync_c *)0x0) ||
           (__this_05 = (Characters_BaseMovementSync_o *)(pCVar17->vtable)._7_ReceiveCustomStream.methodPtr,
           __this_05 == (Characters_BaseMovementSync_o *)0x0)) goto label_042e149c;
        pCVar20 = (Characters_BaseMovementSync_o *)(__this_03->fields)._transform;
        UVar33 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)__this_05,
                            *(UnityEngine_Vector3_Fields *)&(pCVar17->vtable)._7_ReceiveCustomStream.method,
                            (MethodInfo *)0x0);
        if (pCVar20 == (Characters_BaseMovementSync_o *)0x0) goto label_042e149c;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar20,UVar33,(MethodInfo *)0x0);
        __this_05 = pCVar20;
        if (__this_03[1].klass == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
        __this_00 = (UnityEngine_Transform_o *)((__this_03[1].klass)->vtable)._7_ReceiveCustomStream.methodPtr
        ;
        __this_05 = (Characters_BaseMovementSync_o *)0x0;
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        __this_06 = (__this_03->fields)._transform;
        UVar36 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        UVar33 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar36,(MethodInfo *)0x0);
        UVar34.fields.x = UVar33.fields.x * 57.29578;
        UVar34.fields.y = UVar33.fields.y * 57.29578;
        UVar34.fields.z = UVar33.fields.z * 57.29578;
        __this_05 = (Characters_BaseMovementSync_o *)0x0;
        UVar33 = UnityEngine_Quaternion__Internal_MakePositive(UVar34,(MethodInfo *)0x0);
        pCVar17 = __this_03[1].klass;
        if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
        uVar5 = *(undefined8 *)((long)&(pCVar17->vtable)._8_OnPhotonSerializeView.methodPtr + 4);
        UVar35.fields.x = (UVar33.fields.x + (float)uVar5) * 0.017453292;
        UVar35.fields.y = (UVar33.fields.y + (float)((ulong)uVar5 >> 0x20)) * 0.017453292;
        UVar35.fields.z =
             (UVar33.fields.z + *(float *)((long)&(pCVar17->vtable)._8_OnPhotonSerializeView.method + 4)) *
             0.017453292;
        __this_05 = (Characters_BaseMovementSync_o *)0x0;
        UVar36 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar35,(MethodInfo *)0x0);
        fVar21 = UVar36.fields.z;
        fVar27 = UVar36.fields.w;
        fVar23 = UVar36.fields.x;
        fVar22 = UVar36.fields.y;
        if (__this_06 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        goto label_042e1260;
      }
      pCVar17 = __this_03[1].klass;
      if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
    }
    iVar9._0_2_ = (pCVar17->_2).method_count;
    iVar9._2_2_ = (pCVar17->_2).property_count;
    if (iVar9 == 1) {
      __this_05 = (Characters_BaseMovementSync_o *)
                  (pCVar17->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.methodPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        if ((((__this_03[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
             (pIVar12 = ((__this_03[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                        methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
            (lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0)) &&
           (__this_05 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
           __this_05 != (Characters_BaseMovementSync_o *)0x0)) {
          UVar33 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
          if (((__this_03[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
              (pIVar12 = ((__this_03[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                         methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
             ((lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0 &&
              (__this_05 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
              __this_05 != (Characters_BaseMovementSync_o *)0x0)))) {
            UVar34 = UnityEngine_Transform__get_up((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
            if (((__this_03[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
                (pIVar12 = ((__this_03[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                           methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
               ((lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0 &&
                (__this_05 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
                __this_05 != (Characters_BaseMovementSync_o *)0x0)))) {
              pCVar20 = (Characters_BaseMovementSync_o *)(__this_03->fields)._transform;
              UVar35 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
              if (pCVar20 != (Characters_BaseMovementSync_o *)0x0) {
                fStackY_f8 = UVar33.fields.x;
                fStackY_f4 = UVar33.fields.y;
                fStackY_108 = UVar34.fields.x;
                fStackY_104 = UVar34.fields.y;
                value.fields.y = (fStackY_104 * 0.5 - fStackY_f4 * 0.4) + UVar35.fields.y;
                value.fields.x = (fStackY_108 * 0.5 - fStackY_f8 * 0.4) + UVar35.fields.x;
                value.fields.z = (UVar34.fields.z * 0.5 - UVar33.fields.z * 0.4) + UVar35.fields.z;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)pCVar20,value,(MethodInfo *)0x0);
                __this_05 = pCVar20;
                if ((((__this_03[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
                     (pIVar12 = ((__this_03[1].klass)->vtable).
                                _4_Photon_Pun_IPunObservable_OnPhotonSerializeView.methodPtr,
                     pIVar12 != (Il2CppMethodPointer)0x0)) &&
                    (lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0)) &&
                   (__this_05 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
                   __this_05 != (Characters_BaseMovementSync_o *)0x0)) {
                  __this_06 = (__this_03->fields)._transform;
                  UVar36 = UnityEngine_Transform__get_rotation
                                     ((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
                  fVar21 = UVar36.fields.z;
                  fVar27 = UVar36.fields.w;
                  fVar23 = UVar36.fields.x;
                  fVar22 = UVar36.fields.y;
                  if (__this_06 != (UnityEngine_Transform_o *)0x0) {
label_042e1260:
                    value_01.fields.y = fVar22;
                    value_01.fields.x = fVar23;
                    value_01.fields.w = fVar27;
                    value_01.fields.z = fVar21;
                    UnityEngine_Transform__set_rotation(__this_06,value_01,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_042e149c;
      }
    }
    pCVar20 = (Characters_BaseMovementSync_o *)(__this_03->fields)._transform;
    if (pCVar20 != (Characters_BaseMovementSync_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar20,(MethodInfo *)0x0);
      uVar2 = (__this_03->fields)._correctPosition.fields.x;
      uVar6 = (__this_03->fields)._correctPosition.fields.y;
      fVar23 = (__this_03->fields)._correctPosition.fields.z;
      fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar21 = Characters_BaseMovementSync__get_SmoothingDelay(__this_03,(MethodInfo *)0x0);
      fVar21 = fVar21 * fVar22;
      fVar22 = 1.0;
      if (fVar21 <= 1.0) {
        fVar22 = fVar21;
      }
      fVar22 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar22);
      fStackY_108 = UVar33.fields.x;
      fStackY_104 = UVar33.fields.y;
      value_00.fields.y = fStackY_104 + fVar22 * ((float)uVar6 - fStackY_104);
      value_00.fields.x = fStackY_108 + fVar22 * ((float)uVar2 - fStackY_108);
      value_00.fields.z = UVar33.fields.z + (fVar23 - UVar33.fields.z) * fVar22;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar20,value_00,(MethodInfo *)0x0);
      __this_07 = (Characters_BaseMovementSync_o *)(__this_03->fields)._transform;
      __this_05 = pCVar20;
      if (__this_07 != (Characters_BaseMovementSync_o *)0x0) {
        UVar36 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)__this_07,(MethodInfo *)0x0);
        b = (__this_03->fields)._correctRotation.fields;
        fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar22 = Characters_BaseMovementSync__get_SmoothingDelay(__this_03,(MethodInfo *)0x0);
        UVar36 = UnityEngine_Quaternion__Lerp(UVar36,b,fVar22 * fVar23,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this_07,UVar36,(MethodInfo *)0x0);
        __this_05 = __this_07;
        if (__this_03[1].klass != (Characters_BaseMovementSync_c *)0x0) {
          __this_05 = (Characters_BaseMovementSync_o *)((__this_03[1].klass)->vtable)._5_Awake.methodPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar16 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar16 != '\0') {
            pCVar17 = __this_03[1].klass;
            pMVar14 = *(MethodInfo **)&(__this_03->fields)._correctVelocity.fields;
            if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
            *(float *)&(pCVar17->vtable)._6_SendCustomStream.methodPtr =
                 (__this_03->fields)._correctVelocity.fields.z;
            (pCVar17->vtable)._5_Awake.method = pMVar14;
          }
          fVar23 = (float)(__this_03->fields)._syncCamera;
          pfVar1 = &(__this_03->fields)._timeSinceLastMessage;
          if (fVar23 < *pfVar1 || fVar23 == *pfVar1) {
            return;
          }
          uVar3 = (__this_03->fields)._correctPosition.fields.x;
          uVar7 = (__this_03->fields)._correctPosition.fields.y;
          fVar23 = (__this_03->fields)._correctPosition.fields.z;
          uVar4 = (__this_03->fields)._correctVelocity.fields.x;
          uVar8 = (__this_03->fields)._correctVelocity.fields.y;
          fVar22 = (__this_03->fields)._correctVelocity.fields.z;
          fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_03->fields)._correctPosition.fields.x = fVar21 * (float)uVar4 + (float)uVar3;
          (__this_03->fields)._correctPosition.fields.y = fVar21 * (float)uVar8 + (float)uVar7;
          (__this_03->fields)._correctPosition.fields.z = fVar22 * fVar21 + fVar23;
          fVar23 = (__this_03->fields)._timeSinceLastMessage;
          fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_03->fields)._timeSinceLastMessage = fVar22 + fVar23;
          return;
        }
      }
    }
  }
label_042e149c:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// Characters.HumanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_HumanMovementSync__ReceiveCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x42e0b40

void Characters_HumanMovementSync__ReceiveCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  Characters_Human_o *pCVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  UnityEngine_Transform_o *__this_00;
  Il2CppMethodPointer pIVar12;
  long lVar13;
  MethodInfo *pMVar14;
  System_Nullable_Quaternion__o __this_01;
  UnityEngine_Quaternion_Fields b;
  uint uVar15;
  bool_conflict bVar16;
  Characters_BaseMovementSync_o *__this_02;
  Characters_BaseMovementSync_c *pCVar17;
  uint uVar18;
  Characters_BaseMovementSync_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  Characters_BaseMovementSync_o *pCVar19;
  Characters_BaseMovementSync_o *__this_05;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o UVar35;
  UnityEngine_Quaternion_o value_01;
  float local_e0;
  float fStackY_dc;
  float local_d0;
  float fStackY_cc;
  float local_c0;
  float fStackY_bc;
  char *in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  float in_stack_ffffffffffffff88;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  float local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (g_data_057ade60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    in_stack_ffffffffffffff80 = 0x42e0b98;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057ade60 = '\x01';
  }
  local_50 = (char *)0x0;
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) {
label_042e0eec:
    __this_02 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = (Characters_BaseMovementSync_o *)
                Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if ((__this_02 == (Characters_BaseMovementSync_o *)0x0) ||
       ((Il2CppClass *)__this_02->klass == *(Il2CppClass **)(TypeInfo_int + 0x40))) {
      il2cpp_runtime_helper_02305450(__this_02,TypeInfo_int,&stack0xffffffffffffff78);
      local_50 = in_stack_ffffffffffffff78;
      if ((char)in_stack_ffffffffffffff78 == '\0') {
        pCVar10 = (__this->fields)._human;
        if (pCVar10 != (Characters_Human_o *)0x0) {
          (pCVar10->fields)._isTrigger = 0;
          (pCVar10->fields)._useFixedUpdateClipping = 0;
          (pCVar10->fields)._lastPosition.fields.x = 0.0;
          (pCVar10->fields)._lastPosition.fields.y = 0.0;
          (pCVar10->fields)._lastPosition.fields.z = 0.0;
          return;
        }
        goto label_042e0eec;
      }
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      local_38 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uStack_30 = (Il2CppRGCTXData *)0x0;
      local_48 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      uStack_40 = (Il2CppType *)0x0;
      uVar15 = System_Nullable_int___get_Value((System_Nullable_int__o)&local_50,MethodInfo_Int32_get_Value);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar15 >> 0x1e == 3) goto label_042e0c6d;
label_042e0cb8:
        fVar21 = (float)(uVar15 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar15 & 0x200) == 0) * 4);
        fVar20 = fVar21 * fVar21 + 0.0;
        uVar18 = uVar15 >> 10;
        fVar26 = (float)local_48;
        uVar24 = (undefined4)uStack_40;
        uVar25 = uStack_40._4_4_;
        uVar27 = (undefined4)local_38;
        fVar22 = local_38._4_4_;
        uVar29 = (undefined4)uStack_30;
        uVar30 = uStack_30._4_4_;
        if (uVar15 >> 0x1e != 2) goto label_042e0d17;
label_042e0d66:
        fVar22 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar20 = fVar22 * fVar22 + fVar20;
        if (uVar15 >> 0x1e != 0) {
          uVar18 = uVar18 >> 10;
          goto label_042e0dbd;
        }
        fVar20 = 1.0 - fVar20;
        if (fVar20 < 0.0) {
          local_48 = (System_Nullable_T__c *)CONCAT44(fVar21,fVar26);
          uStack_40 = (Il2CppType *)CONCAT44(uVar25,uVar24);
          local_38 = (Il2CppType **)CONCAT44(fVar22,uVar27);
          uStack_30 = (Il2CppRGCTXData *)CONCAT44(uVar30,uVar29);
          fVar31 = sqrtf(fVar20);
          fVar23 = (float)local_48;
          fVar21 = local_48._4_4_;
          fVar28 = local_38._4_4_;
        }
        else {
          fVar31 = SQRT(fVar20);
          fVar23 = fVar26;
          fVar28 = fVar22;
        }
      }
      else {
        if (uVar15 >> 0x1e != 3) goto label_042e0cb8;
label_042e0c6d:
        fVar20 = 0.0;
        fVar21 = local_48._4_4_;
        uVar27 = (undefined4)local_38;
        fVar22 = local_38._4_4_;
        uVar29 = (undefined4)uStack_30;
        uVar30 = uStack_30._4_4_;
        uVar18 = uVar15;
label_042e0d17:
        fVar26 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar20 = fVar26 * fVar26 + fVar20;
        uVar18 = uVar18 >> 10;
        uVar24 = (undefined4)uStack_40;
        uVar25 = uStack_40._4_4_;
        if (uVar15 >> 0x1e != 1) goto label_042e0d66;
label_042e0dbd:
        fVar31 = (float)(uVar18 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar18 & 0x200) == 0) * 4);
        fVar20 = 1.0 - (fVar31 * fVar31 + fVar20);
        if (fVar20 < 0.0) {
          local_48 = (System_Nullable_T__c *)CONCAT44(fVar21,fVar26);
          uStack_40 = (Il2CppType *)CONCAT44(uVar25,uVar24);
          local_38 = (Il2CppType **)CONCAT44(fVar22,uVar27);
          uStack_30 = (Il2CppRGCTXData *)CONCAT44(uVar30,uVar29);
          fVar20 = sqrtf(fVar20);
          fVar22 = local_38._4_4_;
          fVar26 = (float)local_48;
          fVar21 = local_48._4_4_;
          in_stack_ffffffffffffff88 = fVar31;
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        fVar23 = fVar26;
        fVar28 = fVar20;
        if ((uVar15 >> 0x1e != 1) && (fVar23 = fVar20, fVar28 = fVar22, uVar15 >> 0x1e != 2)) {
          fVar23 = fVar26;
          fVar21 = fVar20;
        }
      }
      pCVar10 = (__this->fields)._human;
      local_68 = (Il2CppMethodPointer)0x0;
      pIStack_60 = (Il2CppMethodPointer)0x0;
      local_58 = 0.0;
      __this_01.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff80;
      __this_01.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
      __this_01.fields._0_8_ = in_stack_ffffffffffffff78;
      __this_01.fields.value.fields.w = in_stack_ffffffffffffff88;
      UVar35.fields.y = fVar28;
      UVar35.fields.x = fVar31;
      UVar35.fields.w = fVar21;
      UVar35.fields.z = fVar23;
      System_Nullable_Quaternion____ctor(__this_01,UVar35,(MethodInfo_37E8CD0 *)&local_68);
      if (pCVar10 != (Characters_Human_o *)0x0) {
        (pCVar10->fields)._lastPosition.fields.z = local_58;
        *(Il2CppMethodPointer *)&(pCVar10->fields)._isTrigger = local_68;
        *(Il2CppMethodPointer *)&(pCVar10->fields)._lastPosition.fields = pIStack_60;
        return;
      }
      goto label_042e0eec;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  __this_03 = __this_02;
  if (g_data_057ade61 == '\0') {
    __this_03 = (Characters_BaseMovementSync_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade61 = '\x01';
  }
  if ((char)(__this_02->fields).Disabled != '\0') {
    return;
  }
  pPVar11 = (__this_02->fields)._photonView;
  if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar11->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    pCVar17 = __this_02[1].klass;
    if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
    if (((pCVar17->_2).token == 2) && (*(char *)((long)&pCVar17[1]._1.name + 4) == '\0')) {
      __this_03 = (Characters_BaseMovementSync_o *)(pCVar17->vtable)._7_ReceiveCustomStream.methodPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        pCVar17 = __this_02[1].klass;
        if ((pCVar17 == (Characters_BaseMovementSync_c *)0x0) ||
           (__this_03 = (Characters_BaseMovementSync_o *)(pCVar17->vtable)._7_ReceiveCustomStream.methodPtr,
           __this_03 == (Characters_BaseMovementSync_o *)0x0)) goto label_042e149c;
        pCVar19 = (Characters_BaseMovementSync_o *)(__this_02->fields)._transform;
        UVar32 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)__this_03,
                            *(UnityEngine_Vector3_Fields *)&(pCVar17->vtable)._7_ReceiveCustomStream.method,
                            (MethodInfo *)0x0);
        if (pCVar19 == (Characters_BaseMovementSync_o *)0x0) goto label_042e149c;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar19,UVar32,(MethodInfo *)0x0);
        __this_03 = pCVar19;
        if (__this_02[1].klass == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
        __this_00 = (UnityEngine_Transform_o *)((__this_02[1].klass)->vtable)._7_ReceiveCustomStream.methodPtr
        ;
        __this_03 = (Characters_BaseMovementSync_o *)0x0;
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        __this_04 = (__this_02->fields)._transform;
        UVar35 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar35,(MethodInfo *)0x0);
        UVar33.fields.x = UVar32.fields.x * 57.29578;
        UVar33.fields.y = UVar32.fields.y * 57.29578;
        UVar33.fields.z = UVar32.fields.z * 57.29578;
        __this_03 = (Characters_BaseMovementSync_o *)0x0;
        UVar32 = UnityEngine_Quaternion__Internal_MakePositive(UVar33,(MethodInfo *)0x0);
        pCVar17 = __this_02[1].klass;
        if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
        uVar5 = *(undefined8 *)((long)&(pCVar17->vtable)._8_OnPhotonSerializeView.methodPtr + 4);
        UVar34.fields.x = (UVar32.fields.x + (float)uVar5) * 0.017453292;
        UVar34.fields.y = (UVar32.fields.y + (float)((ulong)uVar5 >> 0x20)) * 0.017453292;
        UVar34.fields.z =
             (UVar32.fields.z + *(float *)((long)&(pCVar17->vtable)._8_OnPhotonSerializeView.method + 4)) *
             0.017453292;
        __this_03 = (Characters_BaseMovementSync_o *)0x0;
        UVar35 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar34,(MethodInfo *)0x0);
        fVar20 = UVar35.fields.z;
        fVar26 = UVar35.fields.w;
        fVar22 = UVar35.fields.x;
        fVar21 = UVar35.fields.y;
        if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        goto label_042e1260;
      }
      pCVar17 = __this_02[1].klass;
      if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
    }
    iVar9._0_2_ = (pCVar17->_2).method_count;
    iVar9._2_2_ = (pCVar17->_2).property_count;
    if (iVar9 == 1) {
      __this_03 = (Characters_BaseMovementSync_o *)
                  (pCVar17->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.methodPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        if ((((__this_02[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
             (pIVar12 = ((__this_02[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                        methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
            (lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0)) &&
           (__this_03 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
           __this_03 != (Characters_BaseMovementSync_o *)0x0)) {
          UVar32 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
          if (((__this_02[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
              (pIVar12 = ((__this_02[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                         methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
             ((lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0 &&
              (__this_03 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
              __this_03 != (Characters_BaseMovementSync_o *)0x0)))) {
            UVar33 = UnityEngine_Transform__get_up((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
            if (((__this_02[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
                (pIVar12 = ((__this_02[1].klass)->vtable)._4_Photon_Pun_IPunObservable_OnPhotonSerializeView.
                           methodPtr, pIVar12 != (Il2CppMethodPointer)0x0)) &&
               ((lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0 &&
                (__this_03 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
                __this_03 != (Characters_BaseMovementSync_o *)0x0)))) {
              pCVar19 = (Characters_BaseMovementSync_o *)(__this_02->fields)._transform;
              UVar34 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
              if (pCVar19 != (Characters_BaseMovementSync_o *)0x0) {
                local_c0 = UVar32.fields.x;
                fStackY_bc = UVar32.fields.y;
                local_d0 = UVar33.fields.x;
                fStackY_cc = UVar33.fields.y;
                value.fields.y = (fStackY_cc * 0.5 - fStackY_bc * 0.4) + UVar34.fields.y;
                value.fields.x = (local_d0 * 0.5 - local_c0 * 0.4) + UVar34.fields.x;
                value.fields.z = (UVar33.fields.z * 0.5 - UVar32.fields.z * 0.4) + UVar34.fields.z;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)pCVar19,value,(MethodInfo *)0x0);
                __this_03 = pCVar19;
                if ((((__this_02[1].klass != (Characters_BaseMovementSync_c *)0x0) &&
                     (pIVar12 = ((__this_02[1].klass)->vtable).
                                _4_Photon_Pun_IPunObservable_OnPhotonSerializeView.methodPtr,
                     pIVar12 != (Il2CppMethodPointer)0x0)) &&
                    (lVar13 = *(long *)(pIVar12 + 0x70), lVar13 != 0)) &&
                   (__this_03 = *(Characters_BaseMovementSync_o **)(lVar13 + 0x10),
                   __this_03 != (Characters_BaseMovementSync_o *)0x0)) {
                  __this_04 = (__this_02->fields)._transform;
                  UVar35 = UnityEngine_Transform__get_rotation
                                     ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                  fVar20 = UVar35.fields.z;
                  fVar26 = UVar35.fields.w;
                  fVar22 = UVar35.fields.x;
                  fVar21 = UVar35.fields.y;
                  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
label_042e1260:
                    value_01.fields.y = fVar21;
                    value_01.fields.x = fVar22;
                    value_01.fields.w = fVar26;
                    value_01.fields.z = fVar20;
                    UnityEngine_Transform__set_rotation(__this_04,value_01,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_042e149c;
      }
    }
    pCVar19 = (Characters_BaseMovementSync_o *)(__this_02->fields)._transform;
    if (pCVar19 != (Characters_BaseMovementSync_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar19,(MethodInfo *)0x0);
      uVar2 = (__this_02->fields)._correctPosition.fields.x;
      uVar6 = (__this_02->fields)._correctPosition.fields.y;
      fVar22 = (__this_02->fields)._correctPosition.fields.z;
      fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar20 = Characters_BaseMovementSync__get_SmoothingDelay(__this_02,(MethodInfo *)0x0);
      fVar20 = fVar20 * fVar21;
      fVar21 = 1.0;
      if (fVar20 <= 1.0) {
        fVar21 = fVar20;
      }
      fVar21 = (float)(-(uint)(0.0 <= fVar20) & (uint)fVar21);
      local_d0 = UVar32.fields.x;
      fStackY_cc = UVar32.fields.y;
      value_00.fields.y = fStackY_cc + fVar21 * ((float)uVar6 - fStackY_cc);
      value_00.fields.x = local_d0 + fVar21 * ((float)uVar2 - local_d0);
      value_00.fields.z = UVar32.fields.z + (fVar22 - UVar32.fields.z) * fVar21;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar19,value_00,(MethodInfo *)0x0);
      __this_05 = (Characters_BaseMovementSync_o *)(__this_02->fields)._transform;
      __this_03 = pCVar19;
      if (__this_05 != (Characters_BaseMovementSync_o *)0x0) {
        UVar35 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
        b = (__this_02->fields)._correctRotation.fields;
        fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar21 = Characters_BaseMovementSync__get_SmoothingDelay(__this_02,(MethodInfo *)0x0);
        UVar35 = UnityEngine_Quaternion__Lerp(UVar35,b,fVar21 * fVar22,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this_05,UVar35,(MethodInfo *)0x0);
        __this_03 = __this_05;
        if (__this_02[1].klass != (Characters_BaseMovementSync_c *)0x0) {
          __this_03 = (Characters_BaseMovementSync_o *)((__this_02[1].klass)->vtable)._5_Awake.methodPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar16 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar16 != '\0') {
            pCVar17 = __this_02[1].klass;
            pMVar14 = *(MethodInfo **)&(__this_02->fields)._correctVelocity.fields;
            if (pCVar17 == (Characters_BaseMovementSync_c *)0x0) goto label_042e149c;
            *(float *)&(pCVar17->vtable)._6_SendCustomStream.methodPtr =
                 (__this_02->fields)._correctVelocity.fields.z;
            (pCVar17->vtable)._5_Awake.method = pMVar14;
          }
          fVar22 = (float)(__this_02->fields)._syncCamera;
          pfVar1 = &(__this_02->fields)._timeSinceLastMessage;
          if (fVar22 < *pfVar1 || fVar22 == *pfVar1) {
            return;
          }
          uVar3 = (__this_02->fields)._correctPosition.fields.x;
          uVar7 = (__this_02->fields)._correctPosition.fields.y;
          fVar22 = (__this_02->fields)._correctPosition.fields.z;
          uVar4 = (__this_02->fields)._correctVelocity.fields.x;
          uVar8 = (__this_02->fields)._correctVelocity.fields.y;
          fVar21 = (__this_02->fields)._correctVelocity.fields.z;
          fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_02->fields)._correctPosition.fields.x = fVar20 * (float)uVar4 + (float)uVar3;
          (__this_02->fields)._correctPosition.fields.y = fVar20 * (float)uVar8 + (float)uVar7;
          (__this_02->fields)._correctPosition.fields.z = fVar21 * fVar20 + fVar22;
          fVar22 = (__this_02->fields)._timeSinceLastMessage;
          fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_02->fields)._timeSinceLastMessage = fVar21 + fVar22;
          return;
        }
      }
    }
  }
label_042e149c:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// Characters.HumanMovementSync$$Update
// il2cpp: void Characters_HumanMovementSync__Update (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x42e0f00

void Characters_HumanMovementSync__Update(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Photon_Pun_PhotonView_o *pPVar9;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar10;
  System_String_Fields SVar11;
  Characters_Human_o *pCVar12;
  UnityEngine_Quaternion_Fields b;
  bool_conflict bVar13;
  Characters_Human_o *pCVar14;
  Characters_HumanMovementSync_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Characters_HumanMovementSync_o *pCVar15;
  Characters_HumanMovementSync_o *__this_03;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o UVar23;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  
  __this_01 = __this;
  if (g_data_057ade61 == '\0') {
    __this_01 = (Characters_HumanMovementSync_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade61 = '\x01';
  }
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pPVar9 = (__this->fields)._photonView;
  if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar9->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    pCVar14 = (__this->fields)._human;
    if (pCVar14 == (Characters_Human_o *)0x0) goto label_042e149c;
    if ((*(int *)&(pCVar14->fields).Weapon == 2) &&
       (*(char *)&(pCVar14->fields)._mountedVelocity.fields.x == '\0')) {
      __this_01 = *(Characters_HumanMovementSync_o **)&(pCVar14->fields).CarryVelocity.fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        pCVar14 = (__this->fields)._human;
        if ((pCVar14 == (Characters_Human_o *)0x0) ||
           (__this_01 = *(Characters_HumanMovementSync_o **)&(pCVar14->fields).CarryVelocity.fields,
           __this_01 == (Characters_HumanMovementSync_o *)0x0)) goto label_042e149c;
        pCVar15 = (Characters_HumanMovementSync_o *)(__this->fields)._transform;
        UVar20 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)__this_01,
                            *(UnityEngine_Vector3_Fields *)&(pCVar14->fields).CarryVelocity.fields.z,
                            (MethodInfo *)0x0);
        if (pCVar15 == (Characters_HumanMovementSync_o *)0x0) goto label_042e149c;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar15,UVar20,(MethodInfo *)0x0);
        pCVar14 = (__this->fields)._human;
        __this_01 = pCVar15;
        if (pCVar14 == (Characters_Human_o *)0x0) goto label_042e149c;
        __this_00 = *(UnityEngine_Transform_o **)&(pCVar14->fields).CarryVelocity.fields;
        __this_01 = (Characters_HumanMovementSync_o *)0x0;
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        __this_02 = (__this->fields)._transform;
        UVar23 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar23,(MethodInfo *)0x0);
        UVar21.fields.x = UVar20.fields.x * 57.29578;
        UVar21.fields.y = UVar20.fields.y * 57.29578;
        UVar21.fields.z = UVar20.fields.z * 57.29578;
        __this_01 = (Characters_HumanMovementSync_o *)0x0;
        UVar20 = UnityEngine_Quaternion__Internal_MakePositive(UVar21,(MethodInfo *)0x0);
        pCVar14 = (__this->fields)._human;
        if (pCVar14 == (Characters_Human_o *)0x0) goto label_042e149c;
        uVar5 = *(undefined8 *)((long)&(pCVar14->fields).MountedMapObject + 4);
        UVar22.fields.x = (UVar20.fields.x + (float)uVar5) * 0.017453292;
        UVar22.fields.y = (UVar20.fields.y + (float)((ulong)uVar5 >> 0x20)) * 0.017453292;
        UVar22.fields.z =
             (UVar20.fields.z + *(float *)((long)&(pCVar14->fields).MountedTransform + 4)) * 0.017453292;
        __this_01 = (Characters_HumanMovementSync_o *)0x0;
        UVar23 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar22,(MethodInfo *)0x0);
        fVar17 = UVar23.fields.z;
        fVar19 = UVar23.fields.w;
        fVar18 = UVar23.fields.x;
        fVar16 = UVar23.fields.y;
        if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_042e149c;
        goto label_042e1260;
      }
      pCVar14 = (__this->fields)._human;
      if (pCVar14 == (Characters_Human_o *)0x0) goto label_042e149c;
    }
    if (*(int *)((long)&(pCVar14->fields).Weapon + 4) == 1) {
      __this_01 = (Characters_HumanMovementSync_o *)(pCVar14->fields).CurrentSpecial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        pCVar14 = (__this->fields)._human;
        if ((((pCVar14 != (Characters_Human_o *)0x0) &&
             (pSVar10 = (pCVar14->fields).CurrentSpecial, pSVar10 != (System_String_o *)0x0)) &&
            (SVar11 = pSVar10[4].fields, SVar11 != (System_String_Fields)0x0)) &&
           (__this_01 = *(Characters_HumanMovementSync_o **)((long)SVar11 + 0x10),
           __this_01 != (Characters_HumanMovementSync_o *)0x0)) {
          UVar20 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
          pCVar14 = (__this->fields)._human;
          if (((pCVar14 != (Characters_Human_o *)0x0) &&
              (pSVar10 = (pCVar14->fields).CurrentSpecial, pSVar10 != (System_String_o *)0x0)) &&
             ((SVar11 = pSVar10[4].fields, SVar11 != (System_String_Fields)0x0 &&
              (__this_01 = *(Characters_HumanMovementSync_o **)((long)SVar11 + 0x10),
              __this_01 != (Characters_HumanMovementSync_o *)0x0)))) {
            UVar21 = UnityEngine_Transform__get_up((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            pCVar14 = (__this->fields)._human;
            if (((pCVar14 != (Characters_Human_o *)0x0) &&
                (pSVar10 = (pCVar14->fields).CurrentSpecial, pSVar10 != (System_String_o *)0x0)) &&
               ((SVar11 = pSVar10[4].fields, SVar11 != (System_String_Fields)0x0 &&
                (__this_01 = *(Characters_HumanMovementSync_o **)((long)SVar11 + 0x10),
                __this_01 != (Characters_HumanMovementSync_o *)0x0)))) {
              pCVar15 = (Characters_HumanMovementSync_o *)(__this->fields)._transform;
              UVar22 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
              if (pCVar15 != (Characters_HumanMovementSync_o *)0x0) {
                fStack_38 = UVar20.fields.x;
                fStack_34 = UVar20.fields.y;
                fStack_48 = UVar21.fields.x;
                fStack_44 = UVar21.fields.y;
                value.fields.y = (fStack_44 * 0.5 - fStack_34 * 0.4) + UVar22.fields.y;
                value.fields.x = (fStack_48 * 0.5 - fStack_38 * 0.4) + UVar22.fields.x;
                value.fields.z = (UVar21.fields.z * 0.5 - UVar20.fields.z * 0.4) + UVar22.fields.z;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)pCVar15,value,(MethodInfo *)0x0);
                pCVar14 = (__this->fields)._human;
                __this_01 = pCVar15;
                if ((((pCVar14 != (Characters_Human_o *)0x0) &&
                     (pSVar10 = (pCVar14->fields).CurrentSpecial, pSVar10 != (System_String_o *)0x0)) &&
                    (SVar11 = pSVar10[4].fields, SVar11 != (System_String_Fields)0x0)) &&
                   (__this_01 = *(Characters_HumanMovementSync_o **)((long)SVar11 + 0x10),
                   __this_01 != (Characters_HumanMovementSync_o *)0x0)) {
                  __this_02 = (__this->fields)._transform;
                  UVar23 = UnityEngine_Transform__get_rotation
                                     ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                  fVar17 = UVar23.fields.z;
                  fVar19 = UVar23.fields.w;
                  fVar18 = UVar23.fields.x;
                  fVar16 = UVar23.fields.y;
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
label_042e1260:
                    UVar23.fields.y = fVar16;
                    UVar23.fields.x = fVar18;
                    UVar23.fields.w = fVar19;
                    UVar23.fields.z = fVar17;
                    UnityEngine_Transform__set_rotation(__this_02,UVar23,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_042e149c;
      }
    }
    pCVar15 = (Characters_HumanMovementSync_o *)(__this->fields)._transform;
    if (pCVar15 != (Characters_HumanMovementSync_o *)0x0) {
      UVar20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar15,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._correctPosition.fields.x;
      uVar6 = (__this->fields)._correctPosition.fields.y;
      fVar18 = (__this->fields)._correctPosition.fields.z;
      fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar17 = Characters_BaseMovementSync__get_SmoothingDelay
                         ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
      fVar17 = fVar17 * fVar16;
      fVar16 = 1.0;
      if (fVar17 <= 1.0) {
        fVar16 = fVar17;
      }
      fVar16 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar16);
      fStack_48 = UVar20.fields.x;
      fStack_44 = UVar20.fields.y;
      value_00.fields.y = fStack_44 + fVar16 * ((float)uVar6 - fStack_44);
      value_00.fields.x = fStack_48 + fVar16 * ((float)uVar2 - fStack_48);
      value_00.fields.z = UVar20.fields.z + (fVar18 - UVar20.fields.z) * fVar16;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar15,value_00,(MethodInfo *)0x0);
      __this_03 = (Characters_HumanMovementSync_o *)(__this->fields)._transform;
      __this_01 = pCVar15;
      if (__this_03 != (Characters_HumanMovementSync_o *)0x0) {
        UVar23 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar16 = Characters_BaseMovementSync__get_SmoothingDelay
                           ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
        UVar23 = UnityEngine_Quaternion__Lerp(UVar23,b,fVar16 * fVar18,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this_03,UVar23,(MethodInfo *)0x0);
        pCVar14 = (__this->fields)._human;
        __this_01 = __this_03;
        if (pCVar14 != (Characters_Human_o *)0x0) {
          __this_01 = (Characters_HumanMovementSync_o *)(pCVar14->fields).GrabHand;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar13 != '\0') {
            pCVar14 = (__this->fields)._human;
            pCVar12 = *(Characters_Human_o **)&(__this->fields)._correctVelocity.fields;
            if (pCVar14 == (Characters_Human_o *)0x0) goto label_042e149c;
            *(float *)&(pCVar14->fields).CarryBack = (__this->fields)._correctVelocity.fields.z;
            (pCVar14->fields).Carrier = pCVar12;
          }
          fVar18 = (float)(__this->fields)._syncCamera;
          pfVar1 = &(__this->fields)._timeSinceLastMessage;
          if (fVar18 < *pfVar1 || fVar18 == *pfVar1) {
            return;
          }
          uVar3 = (__this->fields)._correctPosition.fields.x;
          uVar7 = (__this->fields)._correctPosition.fields.y;
          fVar18 = (__this->fields)._correctPosition.fields.z;
          uVar4 = (__this->fields)._correctVelocity.fields.x;
          uVar8 = (__this->fields)._correctVelocity.fields.y;
          fVar16 = (__this->fields)._correctVelocity.fields.z;
          fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields.x = fVar17 * (float)uVar4 + (float)uVar3;
          (__this->fields)._correctPosition.fields.y = fVar17 * (float)uVar8 + (float)uVar7;
          (__this->fields)._correctPosition.fields.z = fVar16 * fVar17 + fVar18;
          fVar18 = (__this->fields)._timeSinceLastMessage;
          fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._timeSinceLastMessage = fVar16 + fVar18;
          return;
        }
      }
    }
  }
label_042e149c:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Characters.HumanMovementSync$$.ctor
// il2cpp: void Characters_HumanMovementSync___ctor (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x42e14b0

void Characters_HumanMovementSync___ctor(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


