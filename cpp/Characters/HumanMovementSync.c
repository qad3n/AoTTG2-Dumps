// Type: Characters.HumanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanMovementSync.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HumanMovementSync.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanMovementSync$$Awake
// il2cpp: void Characters_HumanMovementSync__Awake (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x3fd4130

void Characters_HumanMovementSync__Awake(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if (DAT_057040f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    DAT_057040f0 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_Human_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  (__this->fields)._human = pCVar1;
  il2cpp_runtime_glue(&(__this->fields)._human,pCVar1);
  return;
}


// Characters.HumanMovementSync$$SendCustomStream
// il2cpp: void Characters_HumanMovementSync__SendCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3fd4190

void Characters_HumanMovementSync__SendCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Nullable_Quaternion__o __this_00;
  Il2CppObject *obj;
  undefined1 in_stack_ffffffffffffffc8 [12];
  undefined4 in_stack_ffffffffffffffd4;
  
  if (DAT_057040f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Quaternion_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    DAT_057040f1 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar1->fields)._launchLeftTime == '\0') {
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        obj = (Il2CppObject *)0x0;
        goto LAB_03fd4264;
      }
    }
    else {
      __this_00.fields.value.fields.z = (float)in_stack_ffffffffffffffd4;
      __this_00.fields.hasValue = in_stack_ffffffffffffffc8._0_4_;
      __this_00.fields.value.fields.x = (float)in_stack_ffffffffffffffc8._4_4_;
      __this_00.fields.value.fields.y = (float)in_stack_ffffffffffffffc8._8_4_;
      __this_00.fields.value.fields.w = 0.0;
      System_Nullable<Quaternion>__get_Value
                (__this_00,(MethodInfo_375B540 *)&(pCVar1->fields)._launchLeftTime);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_init_class();
      }
      il2cpp_glue_03f55800(&stack0xffffffffffffffd8,0);
      obj = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffd4);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
LAB_03fd4264:
        Photon_Pun_PhotonStream__SendNext(stream,obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_HumanMovementSync__ReceiveCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3fd4280

void Characters_HumanMovementSync__ReceiveCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Nullable_Quaternion__o __this_00;
  uint uVar2;
  Il2CppObject *pIVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  UnityEngine_Quaternion_o value;
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
  
  if (DAT_057040f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_int);
    in_stack_ffffffffffffff80 = 0x3fd42d8;
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    DAT_057040f2 = '\x01';
  }
  local_50 = (char *)0x0;
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_03fd462c;
  pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3->klass != *(Il2CppClass **)(TypeInfo_int + 0x40)))
  {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pIVar3,*(Il2CppClass **)(TypeInfo_int + 0x40));
  }
  il2cpp_glue_022c7340(pIVar3,TypeInfo_int,&stack0xffffffffffffff78);
  local_50 = in_stack_ffffffffffffff78;
  if ((char)in_stack_ffffffffffffff78 == '\0') {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      (pCVar1->fields)._isTrigger = 0;
      (pCVar1->fields)._useFixedUpdateClipping = 0;
      (pCVar1->fields)._lastPosition.fields.x = 0.0;
      (pCVar1->fields)._lastPosition.fields.y = 0.0;
      (pCVar1->fields)._lastPosition.fields.z = 0.0;
      return;
    }
    goto LAB_03fd462c;
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  local_38 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uStack_30 = (Il2CppRGCTXData *)0x0;
  local_48 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  uStack_40 = (Il2CppType *)0x0;
  uVar2 = System_Nullable<int>__get_Value((System_Nullable_int__o)&local_50,MethodInfo_Int32_get_Value);
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
    if (uVar2 >> 0x1e == 3) goto LAB_03fd43ad;
LAB_03fd43f8:
    fVar6 = (float)(uVar2 & 0x1ff) * 0.0013837706 *
            *(float *)(&DAT_00cd0ef0 + (ulong)((uVar2 & 0x200) == 0) * 4);
    fVar5 = fVar6 * fVar6 + 0.0;
    uVar4 = uVar2 >> 10;
    fVar10 = (float)local_48;
    uVar8 = (undefined4)uStack_40;
    uVar9 = uStack_40._4_4_;
    uVar12 = (undefined4)local_38;
    fVar11 = local_38._4_4_;
    uVar14 = (undefined4)uStack_30;
    uVar15 = uStack_30._4_4_;
    if (uVar2 >> 0x1e != 2) goto LAB_03fd4457;
LAB_03fd44a6:
    fVar11 = (float)(uVar4 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar4 & 0x200) == 0) * 4);
    fVar5 = fVar11 * fVar11 + fVar5;
    if (uVar2 >> 0x1e != 0) {
      uVar4 = uVar4 >> 10;
      goto LAB_03fd44fd;
    }
    fVar5 = 1.0 - fVar5;
    if (fVar5 < 0.0) {
      local_48 = (System_Nullable_T__c *)CONCAT44(fVar6,fVar10);
      uStack_40 = (Il2CppType *)CONCAT44(uVar9,uVar8);
      local_38 = (Il2CppType **)CONCAT44(fVar11,uVar12);
      uStack_30 = (Il2CppRGCTXData *)CONCAT44(uVar15,uVar14);
      fVar16 = sqrtf(fVar5);
      fVar7 = (float)local_48;
      fVar6 = local_48._4_4_;
      fVar13 = local_38._4_4_;
    }
    else {
      fVar16 = SQRT(fVar5);
      fVar7 = fVar10;
      fVar13 = fVar11;
    }
  }
  else {
    if (uVar2 >> 0x1e != 3) goto LAB_03fd43f8;
LAB_03fd43ad:
    fVar5 = 0.0;
    fVar6 = local_48._4_4_;
    uVar12 = (undefined4)local_38;
    fVar11 = local_38._4_4_;
    uVar14 = (undefined4)uStack_30;
    uVar15 = uStack_30._4_4_;
    uVar4 = uVar2;
LAB_03fd4457:
    fVar10 = (float)(uVar4 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar4 & 0x200) == 0) * 4);
    fVar5 = fVar10 * fVar10 + fVar5;
    uVar4 = uVar4 >> 10;
    uVar8 = (undefined4)uStack_40;
    uVar9 = uStack_40._4_4_;
    if (uVar2 >> 0x1e != 1) goto LAB_03fd44a6;
LAB_03fd44fd:
    fVar16 = (float)(uVar4 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar4 & 0x200) == 0) * 4);
    fVar5 = 1.0 - (fVar16 * fVar16 + fVar5);
    if (fVar5 < 0.0) {
      local_48 = (System_Nullable_T__c *)CONCAT44(fVar6,fVar10);
      uStack_40 = (Il2CppType *)CONCAT44(uVar9,uVar8);
      local_38 = (Il2CppType **)CONCAT44(fVar11,uVar12);
      uStack_30 = (Il2CppRGCTXData *)CONCAT44(uVar15,uVar14);
      fVar5 = sqrtf(fVar5);
      fVar11 = local_38._4_4_;
      fVar10 = (float)local_48;
      fVar6 = local_48._4_4_;
      in_stack_ffffffffffffff88 = fVar16;
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar7 = fVar10;
    fVar13 = fVar5;
    if ((uVar2 >> 0x1e != 1) && (fVar7 = fVar5, fVar13 = fVar11, uVar2 >> 0x1e != 2)) {
      fVar7 = fVar10;
      fVar6 = fVar5;
    }
  }
  pCVar1 = (__this->fields)._human;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_58 = 0.0;
  __this_00.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff80;
  __this_00.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  __this_00.fields._0_8_ = in_stack_ffffffffffffff78;
  __this_00.fields.value.fields.w = in_stack_ffffffffffffff88;
  value.fields.y = fVar13;
  value.fields.x = fVar16;
  value.fields.w = fVar6;
  value.fields.z = fVar7;
  System_Nullable<Quaternion>___ctor(__this_00,value,(MethodInfo_375B520 *)&local_68);
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields)._lastPosition.fields.z = local_58;
    *(Il2CppMethodPointer *)&(pCVar1->fields)._isTrigger = local_68;
    *(Il2CppMethodPointer *)&(pCVar1->fields)._lastPosition.fields = pIStack_60;
    return;
  }
LAB_03fd462c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanMovementSync$$Update
// il2cpp: void Characters_HumanMovementSync__Update (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x3fd4640

/* WARNING: Type propagation algorithm not settling */

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
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar10;
  System_String_o *pSVar11;
  System_String_Fields SVar12;
  Characters_Human_o *pCVar13;
  UnityEngine_Quaternion_Fields b;
  bool_conflict bVar14;
  Characters_Human_o *pCVar15;
  UnityEngine_Transform_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o UVar24;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  
  if (DAT_057040f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057040f3 = '\x01';
  }
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pPVar9 = (__this->fields)._photonView;
  if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar9->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    pCVar15 = (__this->fields)._human;
    if (pCVar15 == (Characters_Human_o *)0x0) goto LAB_03fd4bdc;
    if ((*(int *)&(pCVar15->fields).Weapon == 2) &&
       (*(char *)&(pCVar15->fields)._mountedVelocity.fields.x == '\0')) {
      x = *(UnityEngine_Object_o **)&(pCVar15->fields).CarryVelocity.fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pCVar15 = (__this->fields)._human;
        if ((pCVar15 == (Characters_Human_o *)0x0) ||
           (pUVar10 = *(UnityEngine_Transform_o **)&(pCVar15->fields).CarryVelocity.fields,
           pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fd4bdc;
        pUVar16 = (__this->fields)._transform;
        UVar21 = UnityEngine_Transform__TransformPoint
                           (pUVar10,*(UnityEngine_Vector3_Fields *)
                                     &(pCVar15->fields).CarryVelocity.fields.z,(MethodInfo *)0x0);
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto LAB_03fd4bdc;
        UnityEngine_Transform__set_position(pUVar16,UVar21,(MethodInfo *)0x0);
        pCVar15 = (__this->fields)._human;
        if ((pCVar15 == (Characters_Human_o *)0x0) ||
           (pUVar10 = *(UnityEngine_Transform_o **)&(pCVar15->fields).CarryVelocity.fields,
           pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fd4bdc;
        pUVar16 = (__this->fields)._transform;
        UVar24 = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
        UVar21 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar24,(MethodInfo *)0x0);
        UVar22.fields.x = UVar21.fields.x * 57.29578;
        UVar22.fields.y = UVar21.fields.y * 57.29578;
        UVar22.fields.z = UVar21.fields.z * 57.29578;
        UVar21 = UnityEngine_Quaternion__Internal_MakePositive(UVar22,(MethodInfo *)0x0);
        pCVar15 = (__this->fields)._human;
        if (pCVar15 == (Characters_Human_o *)0x0) goto LAB_03fd4bdc;
        uVar5 = *(undefined8 *)((long)&(pCVar15->fields).MountedMapObject + 4);
        UVar23.fields.x = (UVar21.fields.x + (float)uVar5) * 0.017453292;
        UVar23.fields.y = (UVar21.fields.y + (float)((ulong)uVar5 >> 0x20)) * 0.017453292;
        UVar23.fields.z =
             (UVar21.fields.z + *(float *)((long)&(pCVar15->fields).MountedTransform + 4)) *
             0.017453292;
        UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar23,(MethodInfo *)0x0);
        fVar18 = UVar24.fields.z;
        fVar20 = UVar24.fields.w;
        fVar19 = UVar24.fields.x;
        fVar17 = UVar24.fields.y;
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto LAB_03fd4bdc;
        goto LAB_03fd49a0;
      }
      pCVar15 = (__this->fields)._human;
      if (pCVar15 == (Characters_Human_o *)0x0) goto LAB_03fd4bdc;
    }
    if (*(int *)((long)&(pCVar15->fields).Weapon + 4) == 1) {
      pSVar11 = (pCVar15->fields).CurrentSpecial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pCVar15 = (__this->fields)._human;
        if ((((pCVar15 != (Characters_Human_o *)0x0) &&
             (pSVar11 = (pCVar15->fields).CurrentSpecial, pSVar11 != (System_String_o *)0x0)) &&
            (SVar12 = pSVar11[4].fields, SVar12 != (System_String_Fields)0x0)) &&
           (pUVar10 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          UVar21 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
          pCVar15 = (__this->fields)._human;
          if (((pCVar15 != (Characters_Human_o *)0x0) &&
              (pSVar11 = (pCVar15->fields).CurrentSpecial, pSVar11 != (System_String_o *)0x0)) &&
             ((SVar12 = pSVar11[4].fields, SVar12 != (System_String_Fields)0x0 &&
              (pUVar10 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10),
              pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
            UVar22 = UnityEngine_Transform__get_up(pUVar10,(MethodInfo *)0x0);
            pCVar15 = (__this->fields)._human;
            if (((pCVar15 != (Characters_Human_o *)0x0) &&
                (pSVar11 = (pCVar15->fields).CurrentSpecial, pSVar11 != (System_String_o *)0x0)) &&
               ((SVar12 = pSVar11[4].fields, SVar12 != (System_String_Fields)0x0 &&
                (pUVar10 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10),
                pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
              pUVar16 = (__this->fields)._transform;
              UVar23 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
              if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                fStack_38 = UVar21.fields.x;
                fStack_34 = UVar21.fields.y;
                fStack_48 = UVar22.fields.x;
                fStack_44 = UVar22.fields.y;
                value.fields.y = (fStack_44 * 0.5 - fStack_34 * 0.4) + UVar23.fields.y;
                value.fields.x = (fStack_48 * 0.5 - fStack_38 * 0.4) + UVar23.fields.x;
                value.fields.z = (UVar22.fields.z * 0.5 - UVar21.fields.z * 0.4) + UVar23.fields.z;
                UnityEngine_Transform__set_position(pUVar16,value,(MethodInfo *)0x0);
                pCVar15 = (__this->fields)._human;
                if ((((pCVar15 != (Characters_Human_o *)0x0) &&
                     (pSVar11 = (pCVar15->fields).CurrentSpecial, pSVar11 != (System_String_o *)0x0)
                     ) && (SVar12 = pSVar11[4].fields, SVar12 != (System_String_Fields)0x0)) &&
                   (pUVar10 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10),
                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  pUVar16 = (__this->fields)._transform;
                  UVar24 = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
                  fVar18 = UVar24.fields.z;
                  fVar20 = UVar24.fields.w;
                  fVar19 = UVar24.fields.x;
                  fVar17 = UVar24.fields.y;
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
LAB_03fd49a0:
                    UVar24.fields.y = fVar17;
                    UVar24.fields.x = fVar19;
                    UVar24.fields.w = fVar20;
                    UVar24.fields.z = fVar18;
                    UnityEngine_Transform__set_rotation(pUVar16,UVar24,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LAB_03fd4bdc;
      }
    }
    pUVar10 = (__this->fields)._transform;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UVar21 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._correctPosition.fields.x;
      uVar6 = (__this->fields)._correctPosition.fields.y;
      fVar19 = (__this->fields)._correctPosition.fields.z;
      fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar18 = Characters_BaseMovementSync__get_SmoothingDelay
                         ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
      fVar18 = fVar18 * fVar17;
      fVar17 = 1.0;
      if (fVar18 <= 1.0) {
        fVar17 = fVar18;
      }
      fVar17 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar17);
      fStack_48 = UVar21.fields.x;
      fStack_44 = UVar21.fields.y;
      value_00.fields.y = fStack_44 + fVar17 * ((float)uVar6 - fStack_44);
      value_00.fields.x = fStack_48 + fVar17 * ((float)uVar2 - fStack_48);
      value_00.fields.z = UVar21.fields.z + (fVar19 - UVar21.fields.z) * fVar17;
      UnityEngine_Transform__set_position(pUVar10,value_00,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._transform;
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UVar24 = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar17 = Characters_BaseMovementSync__get_SmoothingDelay
                           ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
        UVar24 = UnityEngine_Quaternion__Lerp(UVar24,b,fVar17 * fVar19,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar10,UVar24,(MethodInfo *)0x0);
        pCVar15 = (__this->fields)._human;
        if (pCVar15 != (Characters_Human_o *)0x0) {
          pUVar10 = (pCVar15->fields).GrabHand;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar14 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            pCVar15 = (__this->fields)._human;
            pCVar13 = *(Characters_Human_o **)&(__this->fields)._correctVelocity.fields;
            if (pCVar15 == (Characters_Human_o *)0x0) goto LAB_03fd4bdc;
            *(float *)&(pCVar15->fields).CarryBack = (__this->fields)._correctVelocity.fields.z;
            (pCVar15->fields).Carrier = pCVar13;
          }
          fVar19 = (float)(__this->fields)._syncCamera;
          pfVar1 = &(__this->fields)._timeSinceLastMessage;
          if (fVar19 < *pfVar1 || fVar19 == *pfVar1) {
            return;
          }
          uVar3 = (__this->fields)._correctPosition.fields.x;
          uVar7 = (__this->fields)._correctPosition.fields.y;
          fVar19 = (__this->fields)._correctPosition.fields.z;
          uVar4 = (__this->fields)._correctVelocity.fields.x;
          uVar8 = (__this->fields)._correctVelocity.fields.y;
          fVar17 = (__this->fields)._correctVelocity.fields.z;
          fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields.x = fVar18 * (float)uVar4 + (float)uVar3;
          (__this->fields)._correctPosition.fields.y = fVar18 * (float)uVar8 + (float)uVar7;
          (__this->fields)._correctPosition.fields.z = fVar17 * fVar18 + fVar19;
          fVar19 = (__this->fields)._timeSinceLastMessage;
          fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._timeSinceLastMessage = fVar17 + fVar19;
          return;
        }
      }
    }
  }
LAB_03fd4bdc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanMovementSync$$.ctor
// il2cpp: void Characters_HumanMovementSync___ctor (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x3fd4bf0

void Characters_HumanMovementSync___ctor(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


