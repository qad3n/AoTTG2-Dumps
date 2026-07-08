// Type: Weather.LightningParticle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/LightningParticle.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/LightningParticle.cs  [CHANGED since prior version]
// --------------------------------

// Weather.LightningParticle.<>c$$.cctor
// il2cpp: void Weather_LightningParticle___c___cctor (const MethodInfo* method);
// 0x3d763d0

void Weather_LightningParticle_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570263e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570263e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Weather.LightningParticle.<>c$$.ctor
// il2cpp: void Weather_LightningParticle___c___ctor (Weather_LightningParticle___c_o* __this, const MethodInfo* method);
// 0x3d76440

void Weather_LightningParticle_<>c___ctor
               (Weather_LightningParticle___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle.<>c$$<Awake>b__14_0
// il2cpp: System_String_o* Weather_LightningParticle___c___Awake_b__14_0 (Weather_LightningParticle___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x3d76450

System_String_o *
Weather_LightningParticle_<>c__<Awake>b__14_0
          (Weather_LightningParticle___c_o *__this,UnityEngine_AudioSource_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_AudioSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$.ctor
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20___ctor (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d762c0

void Weather_LightningParticle_<StrikeCoroutine>d__20___ctor
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.IDisposable.Dispose
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x3d76480

void Weather_LightningParticle_<StrikeCoroutine>d__20__System_IDisposable_Dispose
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$MoveNext
// il2cpp: bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x3d76490

bool_conflict
Weather_LightningParticle_<StrikeCoroutine>d__20__MoveNext
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  uint uVar2;
  Weather_LightningParticle_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar3;
  float fVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *method_00;
  float fVar8;
  float fVar9;
  
  if (DAT_0570263f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata();
    DAT_0570263f = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_LightningParticle_o *)0x0) goto LAB_03d76802;
    fVar8 = (__this_00->fields).LightningColor.fields.g;
    fVar9 = (__this_00->fields).LightningColor.fields.b;
    fVar4 = (__this_00->fields).LightningColor.fields.a;
    (__this->fields)._color_5__2.fields.r = (__this_00->fields).LightningColor.fields.r;
    (__this->fields)._color_5__2.fields.g = fVar8;
    (__this->fields)._color_5__2.fields.b = fVar9;
    (__this->fields)._color_5__2.fields.a = fVar4;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar5 = UnityEngine_Application__get_loadedLevel((MethodInfo *)0x0);
    (__this->fields)._maxAlpha_5__3 = *(float *)(&DAT_00cd0eb0 + (ulong)(iVar5 == 0) * 4);
    (__this->fields)._color_5__2.fields.a = 0.0;
    pUVar3 = (__this_00->fields)._lineRenderer;
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03d76802;
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    pUVar3 = (__this_00->fields)._lineRenderer;
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03d76802;
    method = (MethodInfo *)0x0;
    UnityEngine_LineRenderer__SetWidth(pUVar3,2.0,2.0,(MethodInfo *)0x0);
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar8;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar8;
    goto LAB_03d7660a;
  case 3:
    (__this->fields).__1__state = -1;
LAB_03d7660a:
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar8 - (__this->fields)._startTime_5__4) {
      if (__this_00 != (Weather_LightningParticle_o *)0x0) {
        Weather_LightningParticle__Disable(__this_00,method);
        return 0;
      }
      goto LAB_03d76802;
    }
    fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar9 = fVar9 - (__this->fields)._startTime_5__4;
    fVar8 = 1.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9;
    }
    fVar8 = (float)(~-(uint)(0.0 <= fVar9) & 0x3f800000 |
                   (uint)(1.0 - fVar8) & -(uint)(0.0 <= fVar9));
    (__this->fields)._color_5__2.fields.a = fVar8 * fVar8 * (__this->fields)._maxAlpha_5__3;
    if ((__this_00 == (Weather_LightningParticle_o *)0x0) ||
       (pUVar3 = (__this_00->fields)._lineRenderer, pUVar3 == (UnityEngine_LineRenderer_o *)0x0))
    goto LAB_03d76802;
    pUVar1 = &(__this->fields)._color_5__2;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    Weather_LightningParticle__SetVolume(__this_00,fVar8 * 0.3,method_00);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar6,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 3;
    goto LAB_03d767f8;
  }
  fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar8 - (__this->fields)._startTime_5__4 < 0.5) {
    fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar9 = fVar9 - (__this->fields)._startTime_5__4;
    fVar9 = fVar9 + fVar9;
    fVar8 = 1.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9;
    }
    (__this->fields)._color_5__2.fields.a =
         (float)(-(uint)(0.0 <= fVar9) & (uint)fVar8) * (__this->fields)._maxAlpha_5__3;
    if ((__this_00 == (Weather_LightningParticle_o *)0x0) ||
       (pUVar3 = (__this_00->fields)._lineRenderer, pUVar3 == (UnityEngine_LineRenderer_o *)0x0))
    goto LAB_03d76802;
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar6,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 1;
  }
  else {
    if ((char)(__this->fields).sound == '\0') {
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto LAB_03d76802;
      pUVar3 = (__this_00->fields)._lineRenderer;
    }
    else {
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto LAB_03d76802;
      Weather_LightningParticle__PlayAudio(__this_00,method);
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      pUVar3 = (__this_00->fields)._lineRenderer;
    }
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) {
LAB_03d76802:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,0.3,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 2;
  }
LAB_03d767f8:
  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x3d76810

Il2CppObject *
Weather_LightningParticle_<StrikeCoroutine>d__20__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x3d76820

void Weather_LightningParticle_<StrikeCoroutine>d__20__System_Collections_IEnumerator_Reset
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x3d76860

Il2CppObject *
Weather_LightningParticle_<StrikeCoroutine>d__20__System_Collections_IEnumerator_get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle$$GetPerpendicularVector
// il2cpp: void Weather_LightningParticle__GetPerpendicularVector (UnityEngine_Vector3_o* directionNormalized, UnityEngine_Vector3_o* side, const MethodInfo* method);
// 0x3d74e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Weather_LightningParticle__GetPerpendicularVector
               (UnityEngine_Vector3_o *directionNormalized,UnityEngine_Vector3_o *side,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 extraout_var [12];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar9;
  
  uVar1 = (directionNormalized->fields).x;
  uVar2 = (directionNormalized->fields).y;
  fVar8 = (directionNormalized->fields).z;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar13 = (float)uVar2 - (float)((ulong)*puVar4 >> 0x20);
  fVar8 = fVar8 - *(float *)(puVar4 + 1);
  fVar12 = (float)uVar1 - (float)*puVar4;
  if (fVar12 * fVar12 + fVar13 * fVar13 + fVar8 * fVar8 < 9.9999994e-11) {
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
      puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    uVar9 = *(undefined8 *)((long)puVar4 + 0x3c);
    fVar8 = *(float *)((long)puVar4 + 0x44);
    (side->fields).x = (float)(int)uVar9;
    (side->fields).y = (float)(int)((ulong)uVar9 >> 0x20);
    (side->fields).z = fVar8;
    return;
  }
  fVar8 = (directionNormalized->fields).x;
  fVar12 = (directionNormalized->fields).y;
  fVar13 = (directionNormalized->fields).z;
  fVar7 = ABS(fVar12);
  if ((ABS(fVar8) < fVar7) || (fVar7 < ABS(fVar13))) {
    if (fVar7 < ABS(fVar13)) {
      auVar14._0_4_ = -(fVar8 + fVar12);
      auVar14._4_4_ = 0x80000000;
      auVar14._8_4_ = 0x80000000;
      auVar14._12_4_ = 0x80000000;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = auVar14._0_4_ / fVar13;
      auVar11 = _DAT_00ccd980;
      goto joined_r0x03d74fdc;
    }
    auVar10._0_8_ = (undefined8)DAT_00ccf520;
    auVar10._8_4_ = DAT_00ccf520._4_4_;
    auVar10._12_4_ = 0x80000000;
    auVar11._8_8_ = auVar10._8_8_;
    auVar11._0_4_ = (undefined4)DAT_00ccf520;
    auVar11._4_4_ = -(fVar8 + fVar13) / fVar12;
  }
  else {
    auVar11._4_8_ = 0x3f800000;
    auVar11._0_4_ = -(fVar13 + fVar12) / fVar8;
    auVar11._12_4_ = 0;
  }
  auVar15._0_12_ = ZEXT812(0x3f800000);
  auVar15._12_4_ = 0;
joined_r0x03d74fdc:
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
                    /* WARNING: Read-only address (ram,0x00ccf520) is written */
    il2cpp_init_class();
  }
  fVar8 = auVar15._0_4_;
  auVar5._4_12_ = auVar15._4_12_;
  fVar12 = fVar8 * fVar8 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if (fVar12 < 0.0) {
    auVar5._0_4_ = sqrtf(fVar12);
    auVar5._4_12_ = extraout_var;
    fVar12 = auVar5._0_4_;
  }
  else {
    auVar5._0_4_ = SQRT(fVar12);
    fVar12 = auVar5._0_4_;
  }
  if (fVar12 <= 1e-05) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar6._0_4_ = auVar5._0_4_;
    fVar8 = fVar8 / auVar6._0_4_;
    auVar6._8_4_ = auVar5._8_4_;
    auVar6._12_4_ = auVar5._12_4_;
    auVar6._4_4_ = auVar6._0_4_;
    auVar11 = divps(auVar11,auVar6);
    uVar9 = auVar11._0_8_;
  }
  (side->fields).x = (float)(int)uVar9;
  (side->fields).y = (float)(int)((ulong)uVar9 >> 0x20);
  (side->fields).z = fVar8;
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
                    /* WARNING: Read-only address (ram,0x00ccf520) is written */
  return;
}


// Weather.LightningParticle$$GenerateLightningBoltPositions
// il2cpp: System_Collections_Generic_List_Vector3__o* Weather_LightningParticle__GenerateLightningBoltPositions (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, float offsetAmount, const MethodInfo* method);
// 0x3d75120

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Vector3__o *
Weather_LightningParticle__GenerateLightningBoltPositions
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,int32_t generation,
          float offsetAmount,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *pSVar2;
  uint uVar3;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *pSVar4;
  UnityEngine_Vector3_array *pUVar5;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_00;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this_00;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_01;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *__this_02;
  System_Collections_Generic_List_Vector3__o *__this_03;
  MethodInfo *method_00;
  int index;
  int iVar9;
  float fVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar14;
  UnityEngine_Vector3_o key;
  UnityEngine_Vector3_o key_00;
  UnityEngine_Vector3_o key_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  Il2CppMethodPointer in_stack_fffffffffffffec8;
  Il2CppMethodPointer in_stack_fffffffffffffed0;
  InvokerMethod in_stack_fffffffffffffed8;
  float local_11c;
  _union_245890 local_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [40];
  float local_a0;
  Il2CppType **local_98;
  float local_90;
  _union_245890 local_88;
  float local_80;
  undefined1 local_78 [24];
  ulong local_60;
  undefined1 local_58 [16];
  Il2CppMethodPointer local_48;
  Il2CppMethodPointer pIStack_40;
  InvokerMethod local_38;
  
  local_f8 = end.fields.z;
  key.fields.z = start.fields.z;
  local_98 = end.fields._0_8_;
  local_d8._8_4_ = in_XMM2_Dc;
  local_d8._0_8_ = local_98;
  local_d8._12_4_ = in_XMM2_Dd;
  local_88 = start.fields._0_8_;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = local_88.genericMethod;
  local_58._12_4_ = in_XMM0_Dd;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = local_88.genericMethod;
  local_78._12_4_ = in_XMM0_Dd;
  fStack_e0 = (float)in_XMM2_Dc;
  local_e8 = (undefined1  [8])local_98;
  fStack_dc = (float)in_XMM2_Dd;
  local_90 = local_f8;
  local_80 = key.fields.z;
  if (DAT_05702634 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_LightningParticle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_UnityEngine_Vector3_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_KeyValuePair_Vector3__Vector3);
    DAT_05702634 = '\x01';
  }
  local_a0 = 0.0;
  local_c8._32_8_ = (System_Collections_Generic_KeyValuePair_TKey__TValue__c *)0x0;
  __this_02 = (System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *)
              il2cpp_runtime_glue(TypeInfo_List_KeyValuePair_Vector3__Vector3);
  System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>___ctor(__this_02,MethodInfo_List_1_KeyValuePair_2_UnityEngine_Vector3_UnityE);
  auVar8 = local_58;
  auVar7 = local_d8;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  __this.fields._8_8_ = in_stack_fffffffffffffed0;
  __this.fields.key.fields._0_8_ = in_stack_fffffffffffffec8;
  __this.fields.value.fields._4_8_ = in_stack_fffffffffffffed8;
  key.fields.x = (float)local_58._0_4_;
  key.fields.y = (float)local_58._4_4_;
  value.fields.z = local_f8;
  value.fields.x = (float)local_d8._0_4_;
  value.fields.y = (float)local_d8._4_4_;
  local_d8 = auVar7;
  local_58 = auVar8;
  System_Collections_Generic_KeyValuePair<Vector3__Vector3>___ctor
            (__this,key,value,(MethodInfo_347EBD0 *)local_c8);
  lVar6 = MethodInfo_Void_Add;
  if (__this_02 != (System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *)0x0) {
    fStack_108 = (float)local_c8._16_8_;
    fStack_104 = SUB84(local_c8._16_8_,4);
    local_118.genericMethod = (void *)local_c8._0_8_;
    fStack_110 = (float)local_c8._8_8_;
    fStack_10c = SUB84(local_c8._8_8_,4);
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_02->fields)._items;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0) {
      uVar3 = (__this_02->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (__this_02->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3].fields.value.fields.y = (float)local_c8._16_4_;
        pSVar4->m_Items[(int)uVar3].fields.value.fields.z = (float)local_c8._20_4_;
        pSVar2 = pSVar4->m_Items + (int)uVar3;
        (pSVar2->fields).key.fields.x = (float)local_c8._0_4_;
        (pSVar2->fields).key.fields.y = (float)local_c8._4_4_;
        *(undefined8 *)&(pSVar2->fields).key.fields.z = local_c8._8_8_;
      }
      else {
        item.fields.key.fields.z = (float)local_c8._8_4_;
        item.fields.value.fields.x = (float)local_c8._12_4_;
        item.fields.key.fields.x = (float)local_c8._0_4_;
        item.fields.key.fields.y = (float)local_c8._4_4_;
        item.fields.value.fields.y = (float)local_c8._16_4_;
        item.fields.value.fields.z = (float)local_c8._20_4_;
        in_stack_fffffffffffffec8 = (Il2CppMethodPointer)local_c8._0_8_;
        in_stack_fffffffffffffed0 = (Il2CppMethodPointer)local_c8._8_8_;
        in_stack_fffffffffffffed8 = (InvokerMethod)local_c8._16_8_;
        System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__AddWithResize
                  (__this_02,item,
                   *(MethodInfo_34AFA60 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if (offsetAmount <= 0.0) {
        fVar13 = (float)local_78._4_4_;
        fVar11 = (float)local_e8._4_4_;
        if (DAT_056fde1c == '\0') {
          local_e8._0_4_ = local_e8._4_4_;
          local_78._0_4_ = local_78._4_4_;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
          fVar13 = (float)local_78._0_4_;
          fVar11 = (float)local_e8._0_4_;
        }
        fVar10 = (float)local_d8._0_4_ - (float)local_58._0_4_;
        fVar12 = local_f8 - key.fields.z;
        fVar14 = fVar11 - fVar13;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_e8._0_4_ = fVar11 - fVar13;
          local_d8._0_4_ = (float)local_d8._0_4_ - (float)local_58._0_4_;
          local_f8 = local_f8 - key.fields.z;
          il2cpp_init_class();
          fVar10 = (float)local_d8._0_4_;
          fVar12 = local_f8;
          fVar14 = (float)local_e8._0_4_;
        }
        fVar13 = fVar12 * fVar12 + fVar14 * fVar14 + fVar10 * fVar10;
        if (fVar13 < 0.0) {
          fVar13 = sqrtf(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        offsetAmount = fVar13 * 0.2;
      }
      if (generation < 1) {
        index = 0;
      }
      else {
        index = 0;
        iVar9 = (__this_02->fields)._size;
        local_11c = offsetAmount;
        local_60 = (ulong)(uint)generation;
        if (0 < iVar9) goto LAB_03d754c2;
LAB_03d75450:
        index = iVar9;
        iVar9 = (int)local_60;
        local_60 = (ulong)(iVar9 - 1);
        local_11c = local_11c * 0.5;
        if (1 < iVar9) {
          iVar9 = (__this_02->fields)._size;
          if (index < iVar9) {
LAB_03d754c2:
            do {
              while( true ) {
                System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_118
                           ,__this_02,index,(MethodInfo_34AF690 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
                fVar13 = fStack_110;
                _fStack_e0 = 0;
                local_e8 = (undefined1  [8])local_118;
                local_88 = local_118;
                local_80 = fStack_110;
                method_00 = MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V;
                System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_118
                           ,__this_02,index,(MethodInfo_34AF690 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
                local_98 = (Il2CppType **)CONCAT44(fStack_108,fStack_10c);
                local_90 = fStack_104;
                local_78._8_8_ = 0;
                local_78._0_8_ = local_98;
                local_f8 = ((float)local_e8._0_4_ + fStack_10c) * 0.5;
                fStack_f4 = ((float)local_e8._4_4_ + fStack_108) * 0.5;
                fStack_f0 = (fStack_e0 + 0.0) * 0.0;
                fStack_ec = (fStack_dc + 0.0) * 0.0;
                local_58._0_4_ = fStack_104;
                fVar11 = (fVar13 + fStack_104) * 0.5;
                local_d8._0_4_ = fVar11;
                if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                Weather_LightningParticle__RandomVector
                          ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,
                           local_11c,(UnityEngine_Vector3_o *)(local_c8 + 0x20),method_00);
                auVar7 = _local_e8;
                value_00.fields.z = (float)local_d8._0_4_ + local_a0;
                value_00.fields.x = local_f8 + (float)local_c8._32_8_;
                value_00.fields.y = fStack_f4 + SUB84(local_c8._32_8_,4);
                fStack_f0 = fStack_f0 + 0.0;
                fStack_ec = fStack_ec + 0.0;
                local_c8._0_8_ = (Il2CppMethodPointer)0x0;
                local_c8._8_8_ = (Il2CppMethodPointer)0x0;
                local_c8._16_8_ = (InvokerMethod)0x0;
                local_d8._0_4_ = value_00.fields.z;
                __this_00.fields._8_8_ = in_stack_fffffffffffffed0;
                __this_00.fields.key.fields._0_8_ = in_stack_fffffffffffffec8;
                __this_00.fields.value.fields._4_8_ = in_stack_fffffffffffffed8;
                key_00.fields.z = fVar13;
                key_00.fields.x = (float)local_e8._0_4_;
                key_00.fields.y = (float)local_e8._4_4_;
                local_f8 = value_00.fields.x;
                fStack_f4 = value_00.fields.y;
                _local_e8 = auVar7;
                System_Collections_Generic_KeyValuePair<Vector3__Vector3>___ctor
                          (__this_00,key_00,value_00,(MethodInfo_347EBD0 *)local_c8);
                lVar6 = MethodInfo_Void_Add;
                fStack_108 = (float)local_c8._16_8_;
                fStack_104 = SUB84(local_c8._16_8_,4);
                local_118.genericMethod = (void *)local_c8._0_8_;
                fStack_110 = (float)local_c8._8_8_;
                fStack_10c = SUB84(local_c8._8_8_,4);
                piVar1 = &(__this_02->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (__this_02->fields)._items;
                if (pSVar4 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0
                   ) goto LAB_03d7589c;
                uVar3 = (__this_02->fields)._size;
                if (uVar3 < (uint)pSVar4->max_length) {
                  (__this_02->fields)._size = uVar3 + 1;
                  pSVar4->m_Items[(int)uVar3].fields.value.fields.y = (float)local_c8._16_4_;
                  pSVar4->m_Items[(int)uVar3].fields.value.fields.z = (float)local_c8._20_4_;
                  pSVar2 = pSVar4->m_Items + (int)uVar3;
                  (pSVar2->fields).key.fields.x = (float)local_c8._0_4_;
                  (pSVar2->fields).key.fields.y = (float)local_c8._4_4_;
                  *(undefined8 *)&(pSVar2->fields).key.fields.z = local_c8._8_8_;
                }
                else {
                  item_01.fields.key.fields.z = (float)local_c8._8_4_;
                  item_01.fields.value.fields.x = (float)local_c8._12_4_;
                  item_01.fields.key.fields.x = (float)local_c8._0_4_;
                  item_01.fields.key.fields.y = (float)local_c8._4_4_;
                  item_01.fields.value.fields.y = (float)local_c8._16_4_;
                  item_01.fields.value.fields.z = (float)local_c8._20_4_;
                  in_stack_fffffffffffffec8 = (Il2CppMethodPointer)local_c8._0_8_;
                  in_stack_fffffffffffffed0 = (Il2CppMethodPointer)local_c8._8_8_;
                  in_stack_fffffffffffffed8 = (InvokerMethod)local_c8._16_8_;
                  System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__AddWithResize
                            (__this_02,item_01,
                             *(MethodInfo_34AFA60 **)
                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                auVar7 = local_78._0_16_;
                key_01.fields.y = fStack_f4;
                key_01.fields.x = local_f8;
                local_48 = (Il2CppMethodPointer)0x0;
                pIStack_40 = (Il2CppMethodPointer)0x0;
                local_38 = (InvokerMethod)0x0;
                __this_01.fields._8_8_ = in_stack_fffffffffffffed0;
                __this_01.fields.key.fields._0_8_ = in_stack_fffffffffffffec8;
                __this_01.fields.value.fields._4_8_ = in_stack_fffffffffffffed8;
                key_01.fields.z = (float)local_d8._0_4_;
                value_01.fields.z = (float)local_58._0_4_;
                value_01.fields.x = (float)local_78._0_4_;
                value_01.fields.y = (float)local_78._4_4_;
                local_78._0_16_ = auVar7;
                System_Collections_Generic_KeyValuePair<Vector3__Vector3>___ctor
                          (__this_01,key_01,value_01,(MethodInfo_347EBD0 *)&stack0xffffffffffffffb8)
                ;
                lVar6 = MethodInfo_Void_Add;
                fStack_108 = SUB84(local_38,0);
                fStack_104 = (float)((ulong)local_38 >> 0x20);
                local_118.genericMethod = local_48;
                fStack_110 = SUB84(pIStack_40,0);
                fStack_10c = (float)((ulong)pIStack_40 >> 0x20);
                piVar1 = &(__this_02->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (__this_02->fields)._items;
                if (pSVar4 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0
                   ) goto LAB_03d7589c;
                uVar3 = (__this_02->fields)._size;
                if ((uint)pSVar4->max_length <= uVar3) break;
                (__this_02->fields)._size = uVar3 + 1;
                *(InvokerMethod *)&pSVar4->m_Items[(int)uVar3].fields.value.fields.y = local_38;
                *(Il2CppMethodPointer *)&pSVar4->m_Items[(int)uVar3].fields.key.fields = local_48;
                *(Il2CppMethodPointer *)&pSVar4->m_Items[(int)uVar3].fields.key.fields.z =
                     pIStack_40;
                index = index + 1;
                if (iVar9 == index) goto LAB_03d75450;
              }
              item_00.fields._8_8_ = pIStack_40;
              item_00.fields.key.fields._0_8_ = local_48;
              item_00.fields.value.fields._4_8_ = local_38;
              in_stack_fffffffffffffec8 = local_48;
              in_stack_fffffffffffffed0 = pIStack_40;
              in_stack_fffffffffffffed8 = local_38;
              System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__AddWithResize
                        (__this_02,item_00,
                         *(MethodInfo_34AFA60 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              index = index + 1;
            } while (iVar9 != index);
          }
          goto LAB_03d75450;
        }
      }
      __this_03 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
      System_Collections_Generic_List<Vector3>___ctor(__this_03,MethodInfo_List_1_UnityEngine_Vector3);
      System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__get_Item
                ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_118,__this_02
                 ,index,(MethodInfo_34AF690 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
      lVar6 = MethodInfo_Void_Add;
      if (__this_03 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        item_02.fields.z = fStack_110;
        item_02.fields._0_8_ = local_118.genericMethod;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (__this_03->fields)._items;
        if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
          uVar3 = (__this_03->fields)._size;
          if (uVar3 < (uint)pUVar5->max_length) {
            (__this_03->fields)._size = uVar3 + 1;
            ((_union_245890 *)(pUVar5->m_Items + (int)uVar3))->genericMethod = (void *)local_118;
            pUVar5->m_Items[(int)uVar3].fields.z = fStack_110;
            iVar9 = (__this_02->fields)._size;
          }
          else {
            System_Collections_Generic_List<Vector3>__AddWithResize
                      (__this_03,item_02,
                       *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            iVar9 = (__this_02->fields)._size;
          }
          if (index < iVar9) {
            do {
              while( true ) {
                System_Collections_Generic_List<KeyValuePair<Vector3__Vector3>>__get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_118
                           ,__this_02,index,(MethodInfo_34AF690 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_V);
                lVar6 = MethodInfo_Void_Add;
                item_03.fields.y = fStack_108;
                item_03.fields.x = fStack_10c;
                item_03.fields.z = fStack_104;
                piVar1 = &(__this_03->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (__this_03->fields)._items;
                if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto LAB_03d7589c;
                uVar3 = (__this_03->fields)._size;
                if ((uint)pUVar5->max_length <= uVar3) break;
                (__this_03->fields)._size = uVar3 + 1;
                pUVar5->m_Items[(int)uVar3].fields.x = fStack_10c;
                pUVar5->m_Items[(int)uVar3].fields.y = fStack_108;
                pUVar5->m_Items[(int)uVar3].fields.z = fStack_104;
                index = index + 1;
                if ((__this_02->fields)._size <= index) {
                  return __this_03;
                }
              }
              System_Collections_Generic_List<Vector3>__AddWithResize
                        (__this_03,item_03,
                         *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              index = index + 1;
            } while (index < (__this_02->fields)._size);
          }
          return __this_03;
        }
      }
    }
  }
LAB_03d7589c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$RandomVector
// il2cpp: void Weather_LightningParticle__RandomVector (UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* end, float offsetAmount, UnityEngine_Vector3_o* result, const MethodInfo* method);
// 0x3d758b0

void Weather_LightningParticle__RandomVector
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float offsetAmount,
               UnityEngine_Vector3_o *result,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar10;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  float local_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 auVar11 [16];
  
  method_00 = (MethodInfo *)result;
  local_38 = offsetAmount;
  if (DAT_05702635 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LightningParticle);
    DAT_05702635 = '\x01';
    method_00 = extraout_RDX;
  }
  local_48.z = 0.0;
  local_48.x = 0.0;
  local_48.y = 0.0;
  local_58.z = 0.0;
  local_58.x = 0.0;
  local_58.y = 0.0;
  uVar1 = (end->fields).x;
  uVar2 = (end->fields).y;
  uVar10._0_4_ = (start->fields).x;
  uVar10._4_4_ = (start->fields).y;
  fVar12 = (end->fields).z - (start->fields).z;
  fVar6 = 0.0;
  fVar8 = 0.0;
  if (DAT_056fde20 == '\0') {
    uStack_20 = 0;
    local_28 = uVar10;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    method_00 = extraout_RDX_00;
    uVar10._0_4_ = (float)local_28;
    uVar10._4_4_ = local_28._4_4_;
    fVar6 = (float)uStack_20;
    fVar8 = uStack_20._4_4_;
  }
  auVar11._0_4_ = (float)uVar1 - (float)uVar10;
  auVar11._4_4_ = (float)uVar2 - uVar10._4_4_;
  auVar11._8_4_ = 0.0 - fVar6;
  auVar11._12_4_ = 0.0 - fVar8;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_01;
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar10._0_4_ = fVar12 * fVar12 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if ((float)uVar10 < 0.0) {
    uVar10._0_4_ = sqrtf((float)uVar10);
    method_00 = extraout_RDX_03;
    uVar7 = extraout_XMM0_Dc;
    uVar9 = extraout_XMM0_Dd;
  }
  else {
    uVar10._0_4_ = SQRT((float)uVar10);
  }
  if (1e-05 < (float)uVar10) {
    fVar12 = fVar12 / (float)uVar10;
    auVar4._4_4_ = (float)uVar10;
    auVar4._0_4_ = (float)uVar10;
    auVar4._8_4_ = uVar7;
    auVar4._12_4_ = uVar9;
    auVar11 = divps(auVar11,auVar4);
    uVar10 = auVar11._0_8_;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
      method_00 = extraout_RDX_02;
    }
    uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  local_48._0_8_ = uVar10;
  local_48.z = fVar12;
  if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_04;
  }
  Weather_LightningParticle__GetPerpendicularVector
            ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,method_00);
  plVar3 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
  if (plVar3 != (long *)0x0) {
    dVar5 = (double)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uStack_34 = (undefined4)((ulong)dVar5 >> 0x20);
    plVar3 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
    if (plVar3 != (long *)0x0) {
      local_38 = ((float)dVar5 + 0.1) * local_38;
      dVar5 = (double)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      axis.fields.z = fVar12;
      axis.fields.x = (float)uVar10;
      axis.fields.y = SUB84(uVar10,4);
      rotation = UnityEngine_Quaternion__AngleAxis((float)dVar5 * 360.0,axis,(MethodInfo *)0x0);
      UVar13.fields.z = local_58.z;
      UVar13.fields.x = local_58.x;
      UVar13.fields.y = local_58.y;
      UVar13 = UnityEngine_Quaternion__op_Multiply(rotation,UVar13,(MethodInfo *)0x0);
      (result->fields).x = local_38 * UVar13.fields.x;
      (result->fields).y = local_38 * UVar13.fields.y;
      (result->fields).z = UVar13.fields.z * local_38;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$Awake
// il2cpp: void Weather_LightningParticle__Awake (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x3d75b10

void Weather_LightningParticle__Awake(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_LineRenderer_o *pUVar2;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_AudioSource__o *pSVar3;
  
  if (DAT_05702636 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource__Or);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AudioSource__ToList_AudioSour);
    il2cpp_init_method_metadata(&TypeInfo_Func_AudioSource__string);
    il2cpp_init_method_metadata(&MethodInfo_String__Awake_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702636 = '\x01';
  }
  pUVar2 = (UnityEngine_LineRenderer_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  (__this->fields)._lineRenderer = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._lineRenderer);
  pUVar2 = (__this->fields)._lineRenderer;
  if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetVertexCount(pUVar2,0,(MethodInfo *)0x0);
    source = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_AudioSource__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar1 + 8) = keySelector;
      il2cpp_runtime_glue(lVar1 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy<object__object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource__Or);
    pSVar3 = (System_Collections_Generic_List_AudioSource__o *)
             System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_UnityEngine_AudioSource__ToList_AudioSour)
    ;
    (__this->fields)._audioSources = pSVar3;
    il2cpp_runtime_glue(&(__this->fields)._audioSources,pSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$Disable
// il2cpp: void Weather_LightningParticle__Disable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x3d75cc0

void Weather_LightningParticle__Disable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Color_o start;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_AudioSource_o *__this_05;
  
  if (DAT_05702637 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    DAT_05702637 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_05 = (UnityEngine_AudioSource_o *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    while( true ) {
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)__this_05;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') break;
      if (__this_05 == (UnityEngine_AudioSource_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_AudioSource__Stop(__this_05,(MethodInfo *)0x0);
    }
    __this_03.fields._8_8_ = pIVar3;
    __this_03.fields._list = pSVar2;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    __this_01 = (__this->fields)._lineRenderer;
    if (__this_01 != (UnityEngine_LineRenderer_o *)0x0) {
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      start.fields.g = 0.0;
      start.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors
                (__this_01,start,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      __this_04 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_04,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$Enable
// il2cpp: void Weather_LightningParticle__Enable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x3d75e60

void Weather_LightningParticle__Enable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._lineRenderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetColors
              (__this_00,(UnityEngine_Color_o)ZEXT816(0),(UnityEngine_Color_o)ZEXT816(0),
               (MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$Strike
// il2cpp: void Weather_LightningParticle__Strike (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x3d75eb0

void Weather_LightningParticle__Strike
               (Weather_LightningParticle_o *__this,bool_conflict sound,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570263a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StrikeCoroutine_d__20);
    DAT_0570263a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StrikeCoroutine_d__20);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(char *)&__this_00[2].monitor = (char)sound;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$PlayAudio
// il2cpp: void Weather_LightningParticle__PlayAudio (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x3d75fb0

void Weather_LightningParticle__PlayAudio(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  int32_t index;
  UnityEngine_AudioSource_o *__this_01;
  
  if (DAT_05702638 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05702638 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this,0.3,method);
  index = UnityEngine_Random__Range(0,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    __this_01 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_AudioSource_get_Item
                          );
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$Setup
// il2cpp: void Weather_LightningParticle__Setup (Weather_LightningParticle_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, const MethodInfo* method);
// 0x3d76190

void Weather_LightningParticle__Setup
               (Weather_LightningParticle_o *__this,UnityEngine_Vector3_o start,
               UnityEngine_Vector3_o end,int32_t generation,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int index;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UnityEngine_Vector3_o position;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,generation);
  if (DAT_05702639 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LightningParticle);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    DAT_05702639 = '\x01';
  }
  if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = Weather_LightningParticle__GenerateLightningBoltPositions
                        (start,end,generation,0.0,method_00);
  if ((__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (pUVar1 = (__this->fields)._lineRenderer, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)) {
    index = 0;
    UnityEngine_LineRenderer__SetVertexCount(pUVar1,(__this_00->fields)._size,(MethodInfo *)0x0);
    if (0 < (__this_00->fields)._size) {
      do {
        pUVar1 = (__this->fields)._lineRenderer;
        position = System_Collections_Generic_List<Vector3>__get_Item(__this_00,index,MethodInfo_Vector3_get_Item);
        if (pUVar1 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03d762ba;
        UnityEngine_LineRenderer__SetPosition(pUVar1,index,position,(MethodInfo *)0x0);
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    return;
  }
LAB_03d762ba:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$StrikeCoroutine
// il2cpp: System_Collections_IEnumerator_o* Weather_LightningParticle__StrikeCoroutine (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x3d75f30

System_Collections_IEnumerator_o *
Weather_LightningParticle__StrikeCoroutine
          (Weather_LightningParticle_o *__this,bool_conflict sound,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570263a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StrikeCoroutine_d__20);
    DAT_0570263a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StrikeCoroutine_d__20);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(char *)&__this_00[2].monitor = (char)sound;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.LightningParticle$$SetVolume
// il2cpp: void Weather_LightningParticle__SetVolume (Weather_LightningParticle_o* __this, float volume, const MethodInfo* method);
// 0x3d76020

/* WARNING: Removing unreachable block (ram,0x03d760c9) */

void Weather_LightningParticle__SetVolume
               (Weather_LightningParticle_o *__this,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  undefined1 in_stack_ffffffffffffffc8 [12];
  Il2CppObject *pIVar2;
  
  if (DAT_0570263b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
    DAT_0570263b = '\x01';
  }
  pIVar2 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_AudioSource__Ge);
  __this_01.fields._version = (int32_t)volume;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_01.fields._current = pIVar2;
  bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
  if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_02.fields._version = (int32_t)volume;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_02.fields._current = pIVar2;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
  return;
}


// Weather.LightningParticle$$.ctor
// il2cpp: void Weather_LightningParticle___ctor (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x3d762e0

void Weather_LightningParticle___ctor(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  
  if (DAT_0570263c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AudioSource);
    il2cpp_init_method_metadata(&TypeInfo_List_AudioSource);
    DAT_0570263c = '\x01';
  }
  (__this->fields).LightningColor.fields.r = 228.0;
  (__this->fields).LightningColor.fields.g = 245.0;
  (__this->fields).LightningColor.fields.b = 255.0;
  (__this->fields).LightningColor.fields.a = 1.0;
  __this_00 = (System_Collections_Generic_List_AudioSource__o *)il2cpp_runtime_glue(TypeInfo_List_AudioSource);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_AudioSource);
  (__this->fields)._audioSources = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._audioSources);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$.cctor
// il2cpp: void Weather_LightningParticle___cctor (const MethodInfo* method);
// 0x3d76360

void Weather_LightningParticle___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if (DAT_0570263d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LightningParticle);
    il2cpp_init_method_metadata(&TypeInfo_Random);
    DAT_0570263d = '\x01';
  }
  __this = (System_Random_o *)il2cpp_runtime_glue(TypeInfo_Random);
  System_Random___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_LightningParticle + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_LightningParticle + 0xb8),__this);
  return;
}


