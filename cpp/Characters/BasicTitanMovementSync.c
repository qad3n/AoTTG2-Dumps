// Type: Characters.BasicTitanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BasicTitanMovementSync.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BasicTitanMovementSync$$Awake
// il2cpp: void Characters_BasicTitanMovementSync__Awake (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x4012060

void Characters_BasicTitanMovementSync__Awake
               (Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  if (DAT_0570427e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    DAT_0570427e = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_BasicTitan_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BasicTitan_GetComponent_BasicTitan);
  (__this->fields)._titan = pCVar1;
  il2cpp_runtime_glue(&(__this->fields)._titan,pCVar1);
  return;
}


// Characters.BasicTitanMovementSync$$SendCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__SendCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x40120c0

void Characters_BasicTitanMovementSync__SendCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  undefined8 uVar2;
  System_Nullable_Quaternion__o __this_00;
  Il2CppObject *pIVar3;
  undefined1 in_stack_ffffffffffffffa8 [11];
  undefined1 in_stack_ffffffffffffffb3;
  undefined4 in_stack_ffffffffffffffb4;
  UnityEngine_Quaternion_Fields local_28;
  
  if (DAT_0570427f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Quaternion_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    DAT_0570427f = '\x01';
  }
  local_28 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    if ((char)(pCVar1->fields).CustomDamage == '\0') {
      uVar2 = *(undefined8 *)&(pCVar1->fields).IsCrawler;
      if ((char)uVar2 == '\0') {
        if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_0401222b;
        pIVar3 = (Il2CppObject *)0x0;
      }
      else {
        __this_00.fields.value.fields.y._3_1_ = in_stack_ffffffffffffffb3;
        __this_00.fields._0_11_ = in_stack_ffffffffffffffa8;
        __this_00.fields.value.fields.z = (float)in_stack_ffffffffffffffb4;
        __this_00.fields.value.fields.w = (float)uVar2;
        local_28 = (UnityEngine_Quaternion_Fields)
                   System_Nullable<Quaternion>__get_Value
                             (__this_00,(MethodInfo_375B540 *)&stack0xffffffffffffffb8);
        if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
          il2cpp_init_class();
        }
        il2cpp_glue_03f55800(&stack0xffffffffffffffd8,0);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffb4);
        if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_0401222b;
      }
LAB_0401220e:
      Photon_Pun_PhotonStream__SendNext(stream,pIVar3,(MethodInfo *)0x0);
      return;
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffb4);
    if ((stream != (Photon_Pun_PhotonStream_o *)0x0) &&
       (Photon_Pun_PhotonStream__SendNext(stream,pIVar3,(MethodInfo *)0x0),
       (__this->fields)._titan != (Characters_BasicTitan_o *)0x0)) {
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&stack0xffffffffffffffb3);
      goto LAB_0401220e;
    }
  }
LAB_0401222b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__ReceiveCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x4012230

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
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  float local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_05704280 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_int);
    in_stack_ffffffffffffff70 = 0x401228c;
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    DAT_05704280 = '\x01';
  }
  local_60 = (char *)0x0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_0401268d;
  if ((char)(pCVar1->fields).CustomDamage != '\0') {
    if ((stream != (Photon_Pun_PhotonStream_o *)0x0) &&
       (pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0),
       pIVar3 != (Il2CppObject *)0x0)) {
      if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
        pfVar4 = (float *)il2cpp_glue_022c7330(pIVar3);
        (pCVar1->fields).LastGoodHeadAngle.fields.y = *pfVar4;
        pCVar1 = (__this->fields)._titan;
        pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
        if ((pCVar1 == (Characters_BasicTitan_o *)0x0) || (pIVar3 == (Il2CppObject *)0x0))
        goto LAB_0401268d;
        if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(DAT_05711048 + 0x40)) {
          puVar5 = (undefined1 *)il2cpp_glue_022c7330(pIVar3);
          *(undefined1 *)&(pCVar1->fields).BellyFlopTime = *puVar5;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar3);
    }
    goto LAB_0401268d;
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_0401268d;
  pIVar3 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3->klass != *(Il2CppClass **)(TypeInfo_int + 0x40)))
  {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pIVar3,*(Il2CppClass **)(TypeInfo_int + 0x40));
  }
  il2cpp_glue_022c7340(pIVar3,TypeInfo_int,&stack0xffffffffffffff68);
  local_60 = in_stack_ffffffffffffff68;
  if ((char)in_stack_ffffffffffffff68 == '\0') {
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      *(undefined8 *)((long)&(pCVar1->fields).Setup + 4) = 0;
      (pCVar1->fields)._oldHeadRotation.fields.y = 0.0;
      (pCVar1->fields)._oldHeadRotation.fields.z = 0.0;
      (pCVar1->fields)._oldHeadRotation.fields.w = 0.0;
      return;
    }
    goto LAB_0401268d;
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  local_48 = (Il2CppType **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uStack_40 = (Il2CppRGCTXData *)0x0;
  local_58 = (System_Nullable_T__c *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  uStack_50 = (Il2CppType *)0x0;
  uVar2 = System_Nullable<int>__get_Value((System_Nullable_int__o)&local_60,MethodInfo_Int32_get_Value);
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
    if (uVar2 >> 0x1e == 3) goto LAB_04012410;
LAB_04012457:
    fVar8 = (float)(uVar2 & 0x1ff) * 0.0013837706 *
            *(float *)(&DAT_00cd0ef0 + (ulong)((uVar2 & 0x200) == 0) * 4);
    fVar7 = fVar8 * fVar8 + 0.0;
    uVar6 = uVar2 >> 10;
    fVar12 = (float)local_58;
    uVar10 = (undefined4)uStack_50;
    uVar11 = uStack_50._4_4_;
    if (uVar2 >> 0x1e != 2) goto LAB_040124b2;
LAB_04012502:
    fVar13 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
    fVar7 = fVar13 * fVar13 + fVar7;
    if (uVar2 >> 0x1e != 0) {
      uVar6 = uVar6 >> 10;
      goto LAB_0401255d;
    }
    fVar7 = 1.0 - fVar7;
    if (fVar7 < 0.0) {
      local_58 = (System_Nullable_T__c *)CONCAT44(fVar8,fVar12);
      uStack_50 = (Il2CppType *)CONCAT44(uVar11,uVar10);
      local_48 = (Il2CppType **)CONCAT44(fVar13,(undefined4)local_48);
      fVar15 = sqrtf(fVar7);
      fVar9 = (float)local_58;
      fVar8 = local_58._4_4_;
      fVar14 = local_48._4_4_;
    }
    else {
      fVar15 = SQRT(fVar7);
      fVar9 = fVar12;
      fVar14 = fVar13;
    }
  }
  else {
    if (uVar2 >> 0x1e != 3) goto LAB_04012457;
LAB_04012410:
    fVar7 = 0.0;
    fVar8 = local_58._4_4_;
    uVar6 = uVar2;
LAB_040124b2:
    fVar12 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
    fVar7 = fVar12 * fVar12 + fVar7;
    uVar6 = uVar6 >> 10;
    uVar10 = (undefined4)uStack_50;
    uVar11 = uStack_50._4_4_;
    if (uVar2 >> 0x1e != 1) goto LAB_04012502;
    fVar13 = local_48._4_4_;
LAB_0401255d:
    fVar15 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
    fVar7 = 1.0 - (fVar15 * fVar15 + fVar7);
    if (fVar7 < 0.0) {
      local_58 = (System_Nullable_T__c *)CONCAT44(fVar8,fVar12);
      uStack_50 = (Il2CppType *)CONCAT44(uVar11,uVar10);
      local_48 = (Il2CppType **)CONCAT44(fVar13,(undefined4)local_48);
      fVar7 = sqrtf(fVar7);
      fVar13 = local_48._4_4_;
      fVar12 = (float)local_58;
      fVar8 = local_58._4_4_;
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
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  local_68 = 0.0;
  __this_00.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff70;
  __this_00.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  __this_00.fields._0_8_ = in_stack_ffffffffffffff68;
  __this_00.fields.value.fields.w = in_stack_ffffffffffffff78;
  value.fields.y = fVar14;
  value.fields.x = fVar15;
  value.fields.w = fVar8;
  value.fields.z = fVar9;
  System_Nullable<Quaternion>___ctor(__this_00,value,(MethodInfo_375B520 *)&local_78);
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    (pCVar1->fields)._oldHeadRotation.fields.w = local_68;
    *(Il2CppMethodPointer *)((long)&(pCVar1->fields).Setup + 4) = local_78;
    *(Il2CppMethodPointer *)&(pCVar1->fields)._oldHeadRotation.fields.y = pIStack_70;
    return;
  }
LAB_0401268d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanMovementSync$$.ctor
// il2cpp: void Characters_BasicTitanMovementSync___ctor (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x40126b0

void Characters_BasicTitanMovementSync___ctor
               (Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


