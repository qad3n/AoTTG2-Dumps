// Type: Weather.LightningParticle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/LightningParticle.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/LightningParticle.cs
// --------------------------------

// Weather.LightningParticle.<>c$$.cctor
// il2cpp: void Weather_LightningParticle___c___cctor (const MethodInfo* method);
// 0x5855b30

void Weather_LightningParticle___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_c);
    Il2CppMethodInitialized_07545076 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Weather_LightningParticle_c->static_fields->__9 = (Weather_LightningParticle___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_LightningParticle_c->static_fields->__9);
  return;
}


// Weather.LightningParticle.<>c$$.ctor
// il2cpp: void Weather_LightningParticle___c___ctor (Weather_LightningParticle___c_o* __this, const MethodInfo* method);
// 0x5855ba0

void Weather_LightningParticle___c___ctor(Weather_LightningParticle___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle.<>c$$<Awake>b__14_0
// il2cpp: System_String_o* Weather_LightningParticle___c___Awake_b__14_0 (Weather_LightningParticle___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x5855bb0

System_String_o *
Weather_LightningParticle___c___Awake_b__14_0
          (Weather_LightningParticle___c_o *__this,UnityEngine_AudioSource_o *x,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if (x != (UnityEngine_AudioSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$.ctor
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20___ctor (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5855a20

void Weather_LightningParticle__StrikeCoroutine_d__20___ctor
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.IDisposable.Dispose
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x5855be0

void Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$MoveNext
// il2cpp: bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x5855bf0

bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  uint uVar2;
  Weather_LightningParticle_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar3;
  float fVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_07545077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07545077 = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_05855f5d;
    fVar7 = (__this_00->fields).LightningColor.fields.g;
    fVar8 = (__this_00->fields).LightningColor.fields.b;
    fVar4 = (__this_00->fields).LightningColor.fields.a;
    (__this->fields)._color_5__2.fields.r = (__this_00->fields).LightningColor.fields.r;
    (__this->fields)._color_5__2.fields.g = fVar7;
    (__this->fields)._color_5__2.fields.b = fVar8;
    (__this->fields)._color_5__2.fields.a = fVar4;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    iVar5 = UnityEngine_Application__get_loadedLevel((MethodInfo *)0x0);
    (__this->fields)._maxAlpha_5__3 = *(float *)(&g_data_0100ad00 + (ulong)(iVar5 == 0) * 4);
    (__this->fields)._color_5__2.fields.a = 0.0;
    pUVar3 = (__this_00->fields)._lineRenderer;
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto label_05855f5d;
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    pUVar3 = (__this_00->fields)._lineRenderer;
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto label_05855f5d;
    method = (MethodInfo *)0x0;
    UnityEngine_LineRenderer__SetWidth(pUVar3,2.0,2.0,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar7;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar7;
    goto label_05855dcd;
  case 3:
    (__this->fields).__1__state = -1;
label_05855dcd:
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar7 - (__this->fields)._startTime_5__4) {
      if (__this_00 != (Weather_LightningParticle_o *)0x0) {
        Weather_LightningParticle__Disable(__this_00,method);
        return false;
      }
    }
    else {
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar8 = fVar8 - (__this->fields)._startTime_5__4;
      fVar7 = 1.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
      fVar7 = (float)(~-(uint)(0.0 <= fVar8) & 0x3f800000 | (uint)(1.0 - fVar7) & -(uint)(0.0 <= fVar8));
      (__this->fields)._color_5__2.fields.a = fVar7 * fVar7 * (__this->fields)._maxAlpha_5__3;
      if ((__this_00 != (Weather_LightningParticle_o *)0x0) &&
         (pUVar3 = (__this_00->fields)._lineRenderer, pUVar3 != (UnityEngine_LineRenderer_o *)0x0)) {
        pUVar1 = &(__this->fields)._color_5__2;
        method_00 = (MethodInfo *)0x0;
        UnityEngine_LineRenderer__SetColors
                  (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
                   (MethodInfo *)0x0);
        Weather_LightningParticle__SetVolume(__this_00,fVar7 * 0.3,method_00);
        pIVar6 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar6,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 3;
        return true;
      }
    }
    goto label_05855f5d;
  }
  fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (0.5 <= fVar7 - (__this->fields)._startTime_5__4) {
    if ((__this->fields).sound == false) {
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_05855f5d;
    }
    else {
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_05855f5d;
      Weather_LightningParticle__PlayAudio(__this_00,method);
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
    }
    pUVar3 = (__this_00->fields)._lineRenderer;
    if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) {
label_05855f5d:
      ThrowNullReferenceException();
    }
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,0.3,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
  }
  else {
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar8 = fVar8 - (__this->fields)._startTime_5__4;
    fVar8 = fVar8 + fVar8;
    fVar7 = 1.0;
    if (fVar8 <= 1.0) {
      fVar7 = fVar8;
    }
    (__this->fields)._color_5__2.fields.a =
         (float)(-(uint)(0.0 <= fVar8) & (uint)fVar7) * (__this->fields)._maxAlpha_5__3;
    if ((__this_00 == (Weather_LightningParticle_o *)0x0) ||
       (pUVar3 = (__this_00->fields)._lineRenderer, pUVar3 == (UnityEngine_LineRenderer_o *)0x0))
    goto label_05855f5d;
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar3,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar6,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  return true;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x5855f70

Il2CppObject *
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x5855f80

void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Weather_LightningParticle_StrikeCoroutine_d__20_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x5855fc0

Il2CppObject *
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle$$GetPerpendicularVector
// il2cpp: void Weather_LightningParticle__GetPerpendicularVector (UnityEngine_Vector3_o* directionNormalized, UnityEngine_Vector3_o* side, const MethodInfo* method);
// 0x5854170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58542a7: jmp 0x585439d

void Weather_LightningParticle__GetPerpendicularVector
               (UnityEngine_Vector3_o *directionNormalized,UnityEngine_Vector3_o *side,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint32_t uVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  undefined8 local_20;
  
  uVar1 = (directionNormalized->fields).x;
  uVar6 = (directionNormalized->fields).y;
  fVar14 = (directionNormalized->fields).z;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar12->zeroVector).fields.x;
  uVar7 = (pUVar12->zeroVector).fields.y;
  fVar14 = fVar14 - (pUVar12->zeroVector).fields.z;
  if (((float)uVar6 - (float)uVar7) * ((float)uVar6 - (float)uVar7) +
      ((float)uVar1 - (float)uVar2) * ((float)uVar1 - (float)uVar2) + fVar14 * fVar14 < 9.9999994e-11) {
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
      pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar3 = (pUVar12->rightVector).fields.x;
    uVar8 = (pUVar12->rightVector).fields.y;
    local_38 = (pUVar12->rightVector).fields.z;
    goto label_05854389;
  }
  local_48._0_4_ = (directionNormalized->fields).x;
  uVar4 = (directionNormalized->fields).y;
  uVar9 = (directionNormalized->fields).z;
  fVar14 = ABS((float)uVar4);
  if ((ABS((float)local_48._0_4_) < fVar14) || (fVar14 < ABS((float)uVar9))) {
    if (ABS((float)uVar9) <= fVar14) {
      uStack_3c = 0x80000000;
      local_48._4_4_ = -((float)local_48._0_4_ + (float)uVar9) / (float)uVar4;
      local_48._0_4_ = 1.0;
      goto label_058542cc;
    }
    uVar3 = 0x80000000;
    local_38 = -((float)local_48._0_4_ + (float)uVar4) / (float)uVar9;
    _local_48 = ZEXT816(0x3f8000003f800000);
    uStack_34 = 0x80000000;
    if (g_data_0753e72d == '\0') goto label_0585439d;
label_058542ea:
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05854300;
label_058543cb:
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    uVar3 = uStack_34;
  }
  else {
    local_48._0_4_ = -((float)uVar9 + (float)uVar4) / (float)local_48._0_4_;
    local_48._4_4_ = 1.0;
    uStack_3c = 0;
label_058542cc:
    local_48._8_4_ = 0;
    uVar3 = 0;
    local_38 = 1.0;
    uStack_34 = 0;
    if (g_data_0753e72d != '\0') goto label_058542ea;
label_0585439d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    uVar3 = uStack_34;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_058543cb;
label_05854300:
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar11 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar3 = uStack_34;
  }
  fVar14 = local_38 * local_38 +
           (float)local_48._4_4_ * (float)local_48._4_4_ + (float)local_48._0_4_ * (float)local_48._0_4_;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
    uVar3 = extraout_XMM0_Db;
    if (1e-05 < fVar14) goto label_0585436d;
label_05854349:
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_38 = (pUVar12->zeroVector).fields.z;
  }
  else {
    fVar14 = SQRT(fVar14);
    if (fVar14 <= 1e-05) goto label_05854349;
label_0585436d:
    local_38 = local_38 / fVar14;
    auVar13._4_4_ = fVar14;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = uVar3;
    auVar13._12_4_ = uVar3;
    auVar13 = divps(_local_48,auVar13);
    local_20._0_4_ = auVar13._0_4_;
    local_20._4_4_ = auVar13._4_4_;
    pUVar12 = (UnityEngine_Vector3_StaticFields *)&local_20;
  }
  uVar5 = (pUVar12->zeroVector).fields.x;
  uVar10 = (pUVar12->zeroVector).fields.y;
  uVar3 = uVar5;
  uVar8 = uVar10;
label_05854389:
  (side->fields).x = (float)uVar3;
  (side->fields).y = (float)uVar8;
  (side->fields).z = local_38;
  return;
}


// Weather.LightningParticle$$GenerateLightningBoltPositions
// il2cpp: System_Collections_Generic_List_Vector3__o* Weather_LightningParticle__GenerateLightningBoltPositions (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, float offsetAmount, const MethodInfo* method);
// 0x5854410
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58546ec: jmp 0x58546b0
// asm:   0x58548f0: cmp byte ptr [rip + 0x1ce9bbf], 0
// asm:   0x58548f7: je 0x5854ac2
// asm:   0x58549ed: jmp 0x5854b5d
// asm:   0x5854b21: jmp 0x5854b5d
// asm:   0x5854e5b: jmp 0x58546b0
// asm:   0x5854f39: jmp 0x5854fea

System_Collections_Generic_List_Vector3__o *
Weather_LightningParticle__GenerateLightningBoltPositions
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,int32_t generation,float offsetAmount,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__Fields *pSVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  uint32_t uVar11;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *pSVar12;
  System_Random_o *pSVar13;
  UnityEngine_Vector3_array *pUVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  int iVar18;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_00;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  undefined1 auVar19 [16];
  MethodInfo *pMVar20;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *__this;
  UnityEngine_Vector3_StaticFields *pUVar21;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int index;
  int iVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar24;
  float in_XMM1_Db;
  float fVar26;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar25 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float in_XMM3_Db;
  float fVar29;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar30;
  uint uVar31;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o key;
  UnityEngine_Vector3_o key_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_StaticFields local_128;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [16];
  ulong local_90;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o local_88;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined4 uStack_44;
  
  local_128.upVector.fields.z = end.fields.z;
  local_128.leftVector.fields._0_8_ = end.fields._0_8_;
  local_128.rightVector.fields.z = in_XMM1_Db;
  local_128.rightVector.fields.y = start.fields.z;
  local_128.forwardVector.fields.x = (float)in_XMM1_Dc;
  local_128.forwardVector.fields.y = (float)in_XMM1_Dd;
  local_128.positiveInfinityVector.fields.z = (float)in_XMM0_Dc;
  local_128.positiveInfinityVector.fields._0_8_ = start.fields._0_8_;
  local_128.negativeInfinityVector.fields.x = (float)in_XMM0_Dd;
  local_128.upVector.fields.x = offsetAmount;
  local_128.downVector.fields.x = in_XMM3_Db;
  local_128.downVector.fields.y = in_XMM3_Dc;
  local_128.downVector.fields.z = in_XMM3_Dd;
  local_128._56_8_ = in_XMM2_Qb;
  if (Il2CppMethodInitialized_0754506c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3);
    Il2CppMethodInitialized_0754506c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3);
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3_____ctor
            (__this,(MethodInfo_516F1A0 *)
                    MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_ctor);
  local_128.zeroVector.fields.x = 0.0;
  local_128.zeroVector.fields.y = 0.0;
  local_128.zeroVector.fields.z = 0.0;
  local_128.oneVector.fields.x = 0.0;
  local_128.oneVector.fields.y = 0.0;
  local_128.oneVector.fields.z = 0.0;
  UVar32.fields.z = local_128.rightVector.fields.y;
  UVar32.fields.x = local_128.positiveInfinityVector.fields.x;
  UVar32.fields.y = local_128.positiveInfinityVector.fields.y;
  value.fields.z = local_128.upVector.fields.z;
  value.fields.x = local_128.leftVector.fields.x;
  value.fields.y = local_128.leftVector.fields.y;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
            ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,UVar32,value,
             (MethodInfo_513B8B0 *)MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
  pMVar20 = MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add;
  if (__this != (System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (__this->fields)._items;
    if (pSVar12 != (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0) {
      uVar31 = (__this->fields)._size;
      if (uVar31 < (uint)pSVar12->max_length) {
        (__this->fields)._size = uVar31 + 1;
        pSVar12->m_Items[(int)uVar31].fields.value.fields.y = local_128.oneVector.fields.y;
        pSVar12->m_Items[(int)uVar31].fields.value.fields.z = local_128.oneVector.fields.z;
        pSVar2 = &pSVar12->m_Items[(int)uVar31].fields;
        (pSVar2->key).fields.x = local_128.zeroVector.fields.x;
        (pSVar2->key).fields.y = local_128.zeroVector.fields.y;
        *(ulong *)&(pSVar2->key).fields.z =
             CONCAT44(local_128.oneVector.fields.x,local_128.zeroVector.fields.z);
      }
      else {
        item.fields.value.fields.z = local_128.oneVector.fields.z;
        item.fields.value.fields.y = local_128.oneVector.fields.y;
        item.fields.value.fields.x = local_128.oneVector.fields.x;
        item.fields.key.fields.z = local_128.zeroVector.fields.z;
        item.fields.key.fields.x = local_128.zeroVector.fields.x;
        item.fields.key.fields.y = local_128.zeroVector.fields.y;
        System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                  (__this,item,(MethodInfo_516FB40 *)pMVar20->klass->rgctx_data[0xe].method);
      }
      fVar5 = local_128.downVector.fields.x;
      auVar25._0_8_ = local_128.rightVector.fields._4_8_;
      fVar26 = local_128.upVector.fields.x;
      if (local_128.upVector.fields.x <= 0.0) {
        auVar25._8_4_ = local_128.rightVector.fields.z;
        auVar25._12_4_ = local_128.positiveInfinityVector.fields.y;
        auVar27._8_8_ = auVar25._8_8_;
        auVar27._0_4_ = local_128.rightVector.fields.y;
        auVar27._4_4_ = local_128.positiveInfinityVector.fields.x;
        fVar26 = local_128.leftVector.fields.x;
        fVar29 = local_128.leftVector.fields.y;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          local_128.downVector.fields.x = local_128.leftVector.fields.x;
          local_128.downVector.fields.y = fVar5;
          local_128.downVector.fields.z = local_128.leftVector.fields.y;
          local_128._64_16_ = auVar27;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          auVar27 = (undefined1  [16])local_128._64_16_;
          fVar26 = local_128.downVector.fields.x;
          fVar5 = local_128.downVector.fields.y;
          fVar29 = local_128.downVector.fields.z;
        }
        fVar24 = local_128.upVector.fields.z - auVar27._0_4_;
        fVar26 = fVar26 - auVar27._4_4_;
        fVar9 = local_128.leftVector.fields.y - local_128.positiveInfinityVector.fields.y;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          local_128.leftVector.fields.y =
               local_128.leftVector.fields.y - local_128.positiveInfinityVector.fields.y;
          local_128.leftVector.fields.x =
               local_128.leftVector.fields.x - local_128.positiveInfinityVector.fields.x;
          local_128.rightVector.fields.x =
               local_128.rightVector.fields.x - local_128.negativeInfinityVector.fields.x;
          local_128.leftVector.fields.z =
               local_128.leftVector.fields.z - local_128.positiveInfinityVector.fields.z;
          local_128.upVector.fields.z = fVar24;
          local_128.downVector.fields.x = fVar26;
          local_128.downVector.fields.y = fVar5 - auVar27._8_4_;
          local_128.downVector.fields.z = fVar29 - auVar27._12_4_;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          fVar9 = local_128.leftVector.fields.y;
          fVar24 = local_128.upVector.fields.z;
          fVar26 = local_128.downVector.fields.x;
        }
        fVar26 = fVar9 * fVar9 + fVar26 * fVar26 + fVar24 * fVar24;
        if (fVar26 < 0.0) {
          fVar26 = sqrtf(fVar26);
        }
        else {
          fVar26 = SQRT(fVar26);
        }
        fVar26 = fVar26 * 0.2;
      }
      if (generation < 1) {
        index = 0;
      }
      else {
        iVar22 = 0;
        local_90 = (ulong)(uint)generation;
        do {
          index = (__this->fields)._size;
          local_128.upVector.fields.x = fVar26;
          if (iVar22 < index) {
label_05854728:
            do {
              System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                        ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,__this,
                         iVar22,(MethodInfo_516F7B0 *)
                                MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item
                        );
              local_128.forwardVector.fields.x = 0.0;
              local_128.forwardVector.fields.y = 0.0;
              local_128.rightVector.fields.y = local_128.zeroVector.fields.x;
              local_128.rightVector.fields.z = local_128.zeroVector.fields.y;
              local_128.upVector.fields.z = local_128.zeroVector.fields.z;
              System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                        ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,__this,
                         iVar22,(MethodInfo_516F7B0 *)
                                MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item
                        );
              local_58 = local_128.oneVector.fields.x;
              fStack_54 = local_128.oneVector.fields.y;
              fStack_50 = 0.0;
              fStack_4c = 0.0;
              local_128.upVector.fields.y = local_128.oneVector.fields.z;
              local_128.positiveInfinityVector.fields.y =
                   (local_128.rightVector.fields.z + local_128.oneVector.fields.y) * 0.5;
              local_128.positiveInfinityVector.fields.x =
                   (local_128.rightVector.fields.y + local_128.oneVector.fields.x) * 0.5;
              local_128.positiveInfinityVector.fields.z = (local_128.forwardVector.fields.x + 0.0) * 0.0;
              local_128.negativeInfinityVector.fields.x = (local_128.forwardVector.fields.y + 0.0) * 0.0;
              local_128.leftVector.fields.x =
                   (local_128.upVector.fields.z + local_128.oneVector.fields.z) * 0.5;
              if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
                if (Il2CppMethodInitialized_0754506d != '\0') goto label_058547ec;
label_05854a1c:
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
                Il2CppMethodInitialized_0754506d = '\x01';
                if (g_data_0753e72d != '\0') goto label_058547fc;
label_05854a3b:
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                g_data_0753e72d = '\x01';
                local_128.zeroVector.fields.x = 0.0;
                local_128.zeroVector.fields.y = 0.0;
                if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05854812;
label_05854a60:
                local_128.zeroVector.fields.x = 0.0;
                local_128.zeroVector.fields.y = 0.0;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_0753e729 = '\x01';
                uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              else {
                if (Il2CppMethodInitialized_0754506d == '\0') goto label_05854a1c;
label_058547ec:
                if (g_data_0753e72d == '\0') goto label_05854a3b;
label_058547fc:
                local_128.zeroVector.fields.x = 0.0;
                local_128.zeroVector.fields.y = 0.0;
                if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05854a60;
label_05854812:
                local_128.zeroVector.fields.x = 0.0;
                local_128.zeroVector.fields.y = 0.0;
                uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              if (uVar11 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              auVar28._0_4_ = local_58 - local_128.rightVector.fields.y;
              auVar28._4_4_ = fStack_54 - local_128.rightVector.fields.z;
              auVar28._8_4_ = fStack_50 - local_128.forwardVector.fields.x;
              auVar28._12_4_ = fStack_4c - local_128.forwardVector.fields.y;
              local_a8._4_4_ = 0;
              local_a8._8_4_ = 0;
              local_a8._12_4_ = 0;
              local_a8._0_4_ = local_128.upVector.fields.y - local_128.upVector.fields.z;
              uVar23 = 0;
              fVar5 = (float)local_a8._0_4_ * (float)local_a8._0_4_ +
                      auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
              if (fVar5 < 0.0) {
                local_a8 = ZEXT416((uint)local_a8._0_4_);
                local_128._80_16_ = auVar28;
                fVar5 = sqrtf(fVar5);
                uVar23 = extraout_XMM0_Db;
                auVar28 = (undefined1  [16])local_128._80_16_;
                if (fVar5 <= 1e-05) goto label_05854874;
label_058548b8:
                fVar26 = (float)local_a8._0_4_ / fVar5;
                auVar16._4_4_ = fVar5;
                auVar16._0_4_ = fVar5;
                auVar16._8_4_ = uVar23;
                auVar16._12_4_ = uVar23;
                auVar25 = divps(auVar28,auVar16);
                local_128.zeroVector.fields.x = (float)auVar25._0_4_;
                local_128.zeroVector.fields.y = (float)auVar25._4_4_;
                pUVar21 = &local_128;
              }
              else {
                fVar5 = SQRT(fVar5);
                if (1e-05 < fVar5) goto label_058548b8;
label_05854874:
                pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar26 = (pUVar21->zeroVector).fields.z;
                local_a8._4_4_ = 0;
                local_a8._8_4_ = 0;
                local_a8._12_4_ = 0;
              }
              fVar3 = (pUVar21->zeroVector).fields.x;
              fVar7 = (pUVar21->zeroVector).fields.y;
              local_a8._0_4_ = fVar26;
              local_68._0_4_ = fVar3;
              local_68._4_4_ = fVar7;
              uStack_60 = 0;
              fVar5 = fVar3;
              fVar29 = fVar7;
              uVar31 = local_a8._4_4_;
              if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
                fVar5 = (float)local_68._0_4_;
                fVar29 = (float)local_68._4_4_;
                fVar26 = (float)local_a8._0_4_;
                uVar31 = local_a8._4_4_;
              }
              if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b6 = '\x01';
                fVar26 = (float)local_a8._0_4_;
                uVar31 = local_a8._4_4_;
                fVar5 = (float)local_68._0_4_;
                fVar29 = (float)local_68._4_4_;
              }
              pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar4 = (pUVar21->zeroVector).fields.x;
              uVar8 = (pUVar21->zeroVector).fields.y;
              fVar9 = fVar26 - (pUVar21->zeroVector).fields.z;
              if (9.9999994e-11 <=
                  (fVar29 - (float)uVar8) * (fVar29 - (float)uVar8) +
                  (fVar5 - (float)uVar4) * (fVar5 - (float)uVar4) + fVar9 * fVar9) {
                fVar9 = ABS(fVar29);
                if ((ABS(fVar5) < fVar9) || (fVar9 < ABS(fVar26))) {
                  if (ABS(fVar26) <= fVar9) {
                    local_128.negativeInfinityVector.fields.y = 1.0;
                    local_128.negativeInfinityVector.fields.z = -(fVar26 + fVar5) / fVar29;
                    uStack_b0 = 0;
                    uStack_ac = uVar31 ^ 0x80000000;
                    fVar26 = 1.0;
                    fVar9 = 0.0;
                    fVar24 = 0.0;
                    fVar30 = 0.0;
                    local_128._80_16_ = ZEXT816(0x3f800000);
                  }
                  else {
                    fVar9 = -fVar29;
                    fVar24 = -fVar29;
                    fVar30 = -fVar29;
                    fVar26 = -(fVar29 + fVar5) / fVar26;
                    local_128.negativeInfinityVector.fields.y = 1.0;
                    local_128.negativeInfinityVector.fields.z = 1.0;
                    uStack_b0 = 0;
                    uStack_ac = 0;
                    local_128._80_8_ = CONCAT44(fVar29,fVar26) ^ 0x8000000000000000;
                    local_128.backVector.fields.y = fVar24;
                    local_128.backVector.fields.z = fVar30;
                  }
                  local_128.negativeInfinityVector.fields.y = 1.0;
                }
                else {
                  local_128.negativeInfinityVector.fields.y = -(fVar29 + fVar26) / fVar5;
                  local_128.negativeInfinityVector.fields.z = 1.0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  fVar26 = 1.0;
                  fVar9 = 0.0;
                  fVar24 = 0.0;
                  fVar30 = 0.0;
                  local_128._80_16_ = ZEXT816(0x3f800000);
                }
                uStack_b0 = 0;
                if (g_data_0753e72d == '\0') {
                  uStack_b0 = 0;
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  g_data_0753e72d = '\x01';
                  fVar26 = local_128.forwardVector.fields.z;
                  fVar9 = local_128.backVector.fields.x;
                  fVar24 = local_128.backVector.fields.y;
                  fVar30 = local_128.backVector.fields.z;
                }
                local_128.zeroVector.fields.x = 0.0;
                local_128.zeroVector.fields.y = 0.0;
                if (Il2CppMethodInitialized_0753e729 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                  Il2CppMethodInitialized_0753e729 = '\x01';
                  uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                  fVar26 = local_128.forwardVector.fields.z;
                  fVar9 = local_128.backVector.fields.x;
                  fVar24 = local_128.backVector.fields.y;
                  fVar30 = local_128.backVector.fields.z;
                }
                else {
                  uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                }
                if (uVar11 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  fVar26 = local_128.forwardVector.fields.z;
                  fVar9 = local_128.backVector.fields.x;
                  fVar24 = local_128.backVector.fields.y;
                  fVar30 = local_128.backVector.fields.z;
                }
                fVar5 = fVar26 * fVar26 +
                        local_128.negativeInfinityVector.fields.z * local_128.negativeInfinityVector.fields.z
                        + local_128.negativeInfinityVector.fields.y *
                          local_128.negativeInfinityVector.fields.y;
                if (fVar5 < 0.0) {
                  fVar5 = sqrtf(fVar5);
                  fVar9 = extraout_XMM0_Db_00;
                  fVar26 = local_128.forwardVector.fields.z;
                  fVar29 = local_128.backVector.fields.x;
                  fVar24 = local_128.backVector.fields.y;
                  fVar30 = local_128.backVector.fields.z;
                  if (fVar5 <= 1e-05) goto label_05854bd5;
label_05854c03:
                  fVar26 = fVar26 / fVar5;
                  auVar19._4_4_ = local_128.negativeInfinityVector.fields.z;
                  auVar19._0_4_ = local_128.negativeInfinityVector.fields.y;
                  auVar19._8_4_ = uStack_b0;
                  auVar19._12_4_ = uStack_ac;
                  auVar15._4_4_ = fVar5;
                  auVar15._0_4_ = fVar5;
                  auVar15._8_4_ = fVar9;
                  auVar15._12_4_ = fVar9;
                  auVar25 = divps(auVar19,auVar15);
                  local_128.zeroVector.fields.x = (float)auVar25._0_4_;
                  local_128.zeroVector.fields.y = (float)auVar25._4_4_;
                  pUVar21 = &local_128;
                }
                else {
                  fVar5 = SQRT(fVar5);
                  fVar29 = fVar9;
                  if (1e-05 < fVar5) goto label_05854c03;
label_05854bd5:
                  pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
                  fVar26 = (pUVar21->zeroVector).fields.z;
                  fVar29 = 0.0;
                  fVar24 = 0.0;
                  fVar30 = 0.0;
                }
                uVar6 = (pUVar21->zeroVector).fields.x;
                uVar10 = (pUVar21->zeroVector).fields.y;
                fVar5 = (float)uVar6;
                fVar9 = (float)uVar10;
              }
              else {
                if (Il2CppMethodInitialized_07544d56 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_07544d56 = '\x01';
                  pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
                }
                fVar5 = (pUVar21->rightVector).fields.x;
                fVar9 = (pUVar21->rightVector).fields.y;
                fVar26 = (pUVar21->rightVector).fields.z;
                fVar29 = 0.0;
                fVar24 = 0.0;
                fVar30 = 0.0;
              }
              pSVar13 = TypeInfo_Weather_LightningParticle->static_fields->_random;
              if (pSVar13 == (System_Random_o *)0x0) goto label_05854fff;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_128.backVector.fields.x = fVar29;
              local_128.forwardVector.fields.z = fVar26;
              local_128.backVector.fields.y = fVar24;
              local_128.backVector.fields.z = fVar30;
              local_128.negativeInfinityVector.fields.y = fVar5;
              local_128.negativeInfinityVector.fields.z = fVar9;
              dVar17 = (*(pSVar13->klass->vtable)._8_NextDouble.methodPtr)
                                 (pSVar13,(pSVar13->klass->vtable)._8_NextDouble.method);
              pSVar13 = TypeInfo_Weather_LightningParticle->static_fields->_random;
              if (pSVar13 == (System_Random_o *)0x0) goto label_05854fff;
              local_48 = ((float)dVar17 + 0.1) * local_128.upVector.fields.x;
              uStack_44 = (int)((ulong)dVar17 >> 0x20);
              dVar17 = (*(pSVar13->klass->vtable)._8_NextDouble.methodPtr)
                                 (pSVar13,(pSVar13->klass->vtable)._8_NextDouble.method);
              local_128.zeroVector.fields.x = (float)local_68._0_4_;
              local_128.zeroVector.fields.y = (float)local_68._4_4_;
              local_128.zeroVector.fields.z = (float)local_a8._0_4_;
              rotation = UnityEngine_Quaternion__Internal_AngleAxis
                                   ((float)dVar17 * 360.0,&local_128.zeroVector,(MethodInfo *)0x0);
              point.fields.y = local_128.negativeInfinityVector.fields.z;
              point.fields.x = local_128.negativeInfinityVector.fields.y;
              point.fields.z = local_128.forwardVector.fields.z;
              UVar32 = UnityEngine_Quaternion__op_Multiply_6905700(rotation,point,(MethodInfo *)0x0);
              value_00.fields.z = local_128.leftVector.fields.x + UVar32.fields.z * local_48;
              local_128.positiveInfinityVector.fields.x =
                   local_128.positiveInfinityVector.fields.x + local_48 * UVar32.fields.x;
              local_128.positiveInfinityVector.fields.y =
                   local_128.positiveInfinityVector.fields.y + local_48 * UVar32.fields.y;
              local_128._96_16_ =
                   CONCAT412(local_128.negativeInfinityVector.fields.x + local_48 * extraout_XMM0_Dd,
                             CONCAT48(local_128.positiveInfinityVector.fields.z + local_48 * extraout_XMM0_Dc,
                                      CONCAT44(local_128.positiveInfinityVector.fields.y,
                                               local_128.positiveInfinityVector.fields.x)));
              local_128.zeroVector.fields.x = 0.0;
              local_128.zeroVector.fields.y = 0.0;
              local_128.zeroVector.fields.z = 0.0;
              local_128.oneVector.fields.x = 0.0;
              local_128.oneVector.fields.y = 0.0;
              local_128.oneVector.fields.z = 0.0;
              local_128.leftVector.fields.x = value_00.fields.z;
              key.fields.z = local_128.upVector.fields.z;
              key.fields.x = local_128.rightVector.fields.y;
              key.fields.y = local_128.rightVector.fields.z;
              value_00.fields.x = local_128.positiveInfinityVector.fields.x;
              value_00.fields.y = local_128.positiveInfinityVector.fields.y;
              System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                        ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,key,
                         value_00,(MethodInfo_513B8B0 *)
                                  MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
              pMVar20 = MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar12 = (__this->fields)._items;
              if (pSVar12 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0)
              goto label_05854fff;
              uVar31 = (__this->fields)._size;
              if (uVar31 < (uint)pSVar12->max_length) {
                (__this->fields)._size = uVar31 + 1;
                pSVar12->m_Items[(int)uVar31].fields.value.fields.y = local_128.oneVector.fields.y;
                pSVar12->m_Items[(int)uVar31].fields.value.fields.z = local_128.oneVector.fields.z;
                pSVar2 = &pSVar12->m_Items[(int)uVar31].fields;
                (pSVar2->key).fields.x = local_128.zeroVector.fields.x;
                (pSVar2->key).fields.y = local_128.zeroVector.fields.y;
                *(ulong *)&(pSVar2->key).fields.z =
                     CONCAT44(local_128.oneVector.fields.x,local_128.zeroVector.fields.z);
              }
              else {
                item_01.fields.value.fields.z = local_128.oneVector.fields.z;
                item_01.fields.value.fields.y = local_128.oneVector.fields.y;
                item_01.fields.value.fields.x = local_128.oneVector.fields.x;
                item_01.fields.key.fields.z = local_128.zeroVector.fields.z;
                item_01.fields.key.fields.x = local_128.zeroVector.fields.x;
                item_01.fields.key.fields.y = local_128.zeroVector.fields.y;
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                          (__this,item_01,(MethodInfo_516FB40 *)pMVar20->klass->rgctx_data[0xe].method);
              }
              local_88.fields.key.fields.x = 0.0;
              local_88.fields.key.fields.y = 0.0;
              local_88.fields.key.fields.z = 0.0;
              local_88.fields.value.fields.x = 0.0;
              local_88.fields.value.fields.y = 0.0;
              local_88.fields.value.fields.z = 0.0;
              value_01.fields.y = fStack_54;
              value_01.fields.x = local_58;
              key_00.fields.z = local_128.leftVector.fields.x;
              key_00.fields.x = local_128.positiveInfinityVector.fields.x;
              key_00.fields.y = local_128.positiveInfinityVector.fields.y;
              value_01.fields.z = local_128.upVector.fields.y;
              System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                        (&local_88,key_00,value_01,
                         (MethodInfo_513B8B0 *)
                         MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_Vector3_ctor);
              pMVar20 = MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_Add;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar12 = (__this->fields)._items;
              if (pSVar12 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0)
              goto label_05854fff;
              uVar31 = (__this->fields)._size;
              if ((uint)pSVar12->max_length <= uVar31) {
                item_00.fields.key.fields.z = local_88.fields.key.fields.z;
                item_00.fields.value.fields.x = local_88.fields.value.fields.x;
                item_00.fields.key.fields.x = local_88.fields.key.fields.x;
                item_00.fields.key.fields.y = local_88.fields.key.fields.y;
                item_00.fields.value.fields.y = local_88.fields.value.fields.y;
                item_00.fields.value.fields.z = local_88.fields.value.fields.z;
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                          (__this,item_00,(MethodInfo_516FB40 *)pMVar20->klass->rgctx_data[0xe].method);
                iVar22 = iVar22 + 1;
                if (index == iVar22) break;
                goto label_05854728;
              }
              (__this->fields)._size = uVar31 + 1;
              pSVar12->m_Items[(int)uVar31].fields.value.fields.y = local_88.fields.value.fields.y;
              pSVar12->m_Items[(int)uVar31].fields.value.fields.z = local_88.fields.value.fields.z;
              pSVar2 = &pSVar12->m_Items[(int)uVar31].fields;
              (pSVar2->key).fields.x = local_88.fields.key.fields.x;
              (pSVar2->key).fields.y = local_88.fields.key.fields.y;
              *(undefined8 *)&(pSVar2->key).fields.z = local_88.fields._8_8_;
              iVar22 = iVar22 + 1;
            } while (index != iVar22);
          }
          iVar18 = (int)local_90;
          local_90 = (ulong)(iVar18 - 1);
          fVar26 = local_128.upVector.fields.x * 0.5;
          iVar22 = index;
        } while (1 < iVar18);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
      System_Collections_Generic_List_Vector3____ctor
                (__this_00,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
      System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,__this,index,
                 (MethodInfo_516F7B0 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item);
      pMVar20 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        item_02.fields.z = local_128.zeroVector.fields.z;
        item_02.fields.x = local_128.zeroVector.fields.x;
        item_02.fields.y = local_128.zeroVector.fields.y;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar14 = (__this_00->fields)._items;
        if (pUVar14 != (UnityEngine_Vector3_array *)0x0) {
          uVar31 = (__this_00->fields)._size;
          if (uVar31 < (uint)pUVar14->max_length) {
            (__this_00->fields)._size = uVar31 + 1;
            pUVar14->m_Items[(int)uVar31].fields.x = local_128.zeroVector.fields.x;
            pUVar14->m_Items[(int)uVar31].fields.y = local_128.zeroVector.fields.y;
            pUVar14->m_Items[(int)uVar31].fields.z = local_128.zeroVector.fields.z;
            iVar22 = (__this->fields)._size;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this_00,item_02,(MethodInfo_39FF950 *)pMVar20->klass->rgctx_data[0xe].method);
            iVar22 = (__this->fields)._size;
          }
          if (index < iVar22) {
            do {
              while( true ) {
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)&local_128,__this,
                           index,(MethodInfo_516F7B0 *)
                                 MethodInfo_System_Collections_Generic_List_KeyValuePair_Vector3_Vector3_get_Item
                          );
                pMVar20 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                item_03.fields.y = local_128.oneVector.fields.y;
                item_03.fields.x = local_128.oneVector.fields.x;
                item_03.fields.z = local_128.oneVector.fields.z;
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar14 = (__this_00->fields)._items;
                if (pUVar14 == (UnityEngine_Vector3_array *)0x0) goto label_05854fff;
                uVar31 = (__this_00->fields)._size;
                if ((uint)pUVar14->max_length <= uVar31) break;
                (__this_00->fields)._size = uVar31 + 1;
                pUVar14->m_Items[(int)uVar31].fields.x = local_128.oneVector.fields.x;
                pUVar14->m_Items[(int)uVar31].fields.y = local_128.oneVector.fields.y;
                pUVar14->m_Items[(int)uVar31].fields.z = local_128.oneVector.fields.z;
                index = index + 1;
                if ((__this->fields)._size <= index) {
                  return __this_00;
                }
              }
              System_Collections_Generic_List_Vector3___AddWithResize
                        (__this_00,item_03,(MethodInfo_39FF950 *)pMVar20->klass->rgctx_data[0xe].method);
              index = index + 1;
            } while (index < (__this->fields)._size);
          }
          return __this_00;
        }
      }
    }
  }
label_05854fff:
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$RandomVector
// il2cpp: void Weather_LightningParticle__RandomVector (UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* end, float offsetAmount, UnityEngine_Vector3_o* result, const MethodInfo* method);
// 0x5855010

void Weather_LightningParticle__RandomVector
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float offsetAmount,
               UnityEngine_Vector3_o *result,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  System_Random_o *pSVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar18;
  float fStack_78;
  float fStack_74;
  UnityEngine_Vector3_Fields UStack_68;
  UnityEngine_Vector3_Fields UStack_58;
  UnityEngine_Vector3_Fields UStack_48;
  undefined1 auStack_38 [12];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fStack_28 = offsetAmount;
  method_00 = (MethodInfo *)result;
  if (Il2CppMethodInitialized_0754506d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    Il2CppMethodInitialized_0754506d = '\x01';
    method_00 = extraout_RDX;
  }
  UStack_48.z = 0.0;
  UStack_48.x = 0.0;
  UStack_48.y = 0.0;
  UStack_58.z = 0.0;
  UStack_58.x = 0.0;
  UStack_58.y = 0.0;
  fVar12 = (end->fields).x;
  fVar6 = (end->fields).y;
  uVar8 = (end->fields).x;
  uVar9 = (end->fields).y;
  uVar1._0_4_ = (start->fields).x;
  uVar1._4_4_ = (start->fields).y;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = (end->fields).z - (start->fields).z;
  if (g_data_0753e72d == '\0') {
    auStack_38._8_4_ = 0.0;
    fStack_2c = 0.0;
    auStack_38._0_8_ = uVar1;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
    method_00 = extraout_RDX_03;
    fVar11 = (float)auStack_38._0_4_;
    fVar13 = (float)auStack_38._4_4_;
    fVar14 = (float)auStack_38._8_4_;
    fVar15 = fStack_2c;
    fVar12 = (float)uVar8;
    fVar6 = (float)uVar9;
  }
  else {
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
    fVar11 = (float)uVar1;
    fVar13 = uVar1._4_4_;
  }
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_68.x = 0.0;
    UStack_68.y = 0.0;
    auStack_38._4_4_ = fVar13;
    auStack_38._0_4_ = fVar11;
    fStack_2c = fVar15;
    auStack_38._8_4_ = fVar14;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    method_00 = extraout_RDX_04;
    fVar11 = (float)auStack_38._0_4_;
    fVar13 = (float)auStack_38._4_4_;
    fVar14 = (float)auStack_38._8_4_;
    fVar15 = fStack_2c;
  }
  auVar17._0_4_ = fVar12 - fVar11;
  auVar17._4_4_ = fVar6 - fVar13;
  auVar17._8_4_ = 0.0 - fVar14;
  auVar17._12_4_ = 0.0 - fVar15;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    method_00 = extraout_RDX_00;
  }
  uVar7 = 0;
  fVar12 = fVar16 * fVar16 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  if (fVar12 < 0.0) {
    fVar12 = sqrtf(fVar12);
    method_00 = extraout_RDX_01;
    uVar7 = extraout_XMM0_Db;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  if (1e-05 < fVar12) {
    fVar16 = fVar16 / fVar12;
    auVar4._4_4_ = fVar12;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = uVar7;
    auVar4._12_4_ = uVar7;
    auVar17 = divps(auVar17,auVar4);
    UStack_68.x = auVar17._0_4_;
    UStack_68.y = auVar17._4_4_;
    pUVar10 = (UnityEngine_Vector3_StaticFields *)&UStack_68;
  }
  else {
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar16 = (pUVar10->zeroVector).fields.z;
  }
  uVar2._0_4_ = (pUVar10->zeroVector).fields.x;
  uVar2._4_4_ = (pUVar10->zeroVector).fields.y;
  UStack_48._0_8_ = uVar2;
  UStack_48.z = fVar16;
  if ((((Il2CppClass *)TypeInfo_Weather_LightningParticle)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
    method_00 = extraout_RDX_02;
  }
  Weather_LightningParticle__GetPerpendicularVector
            ((UnityEngine_Vector3_o *)&UStack_48,(UnityEngine_Vector3_o *)&UStack_58,method_00);
  pSVar3 = TypeInfo_Weather_LightningParticle->static_fields->_random;
  if (pSVar3 != (System_Random_o *)0x0) {
    dVar5 = (*(pSVar3->klass->vtable)._8_NextDouble.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._8_NextDouble.method);
    fStack_24 = (float)((ulong)dVar5 >> 0x20);
    pSVar3 = TypeInfo_Weather_LightningParticle->static_fields->_random;
    if (pSVar3 != (System_Random_o *)0x0) {
      fStack_28 = ((float)dVar5 + 0.1) * fStack_28;
      dVar5 = (*(pSVar3->klass->vtable)._8_NextDouble.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._8_NextDouble.method);
      UStack_68._0_8_ = uVar2;
      UStack_68.z = fVar16;
      rotation = UnityEngine_Quaternion__Internal_AngleAxis
                           ((float)dVar5 * 360.0,(UnityEngine_Vector3_o *)&UStack_68,(MethodInfo *)0x0);
      UVar18.fields.z = UStack_58.z;
      UVar18.fields.x = UStack_58.x;
      UVar18.fields.y = UStack_58.y;
      UVar18 = UnityEngine_Quaternion__op_Multiply_6905700(rotation,UVar18,(MethodInfo *)0x0);
      (result->fields).x = fStack_28 * UVar18.fields.x;
      (result->fields).y = fStack_28 * UVar18.fields.y;
      (result->fields).z = UVar18.fields.z * fStack_28;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Awake
// il2cpp: void Weather_LightningParticle__Awake (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x58552d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58553b1: jmp 0x58553cc

void Weather_LightningParticle__Awake(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_LineRenderer_o *pUVar1;
  System_Object_array *source;
  Weather_LightningParticle___c_StaticFields *pWVar2;
  System_Func_AudioSource__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_AudioSource__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754506e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AudioSource_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_LightningParticle_c_Awake_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_c);
    Il2CppMethodInitialized_0754506e = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
  (__this->fields)._lineRenderer = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderer);
  pUVar1 = (__this->fields)._lineRenderer;
  if (pUVar1 == (UnityEngine_LineRenderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_LineRenderer__SetVertexCount(pUVar1,0,(MethodInfo *)0x0);
  source = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource);
  if ((TypeInfo_Weather_LightningParticle_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
    pWVar2 = TypeInfo_Weather_LightningParticle_c->static_fields;
    __this_00 = pWVar2->__9__14_0;
  }
  else {
    pWVar2 = TypeInfo_Weather_LightningParticle_c->static_fields;
    __this_00 = pWVar2->__9__14_0;
  }
  if (__this_00 == (System_Func_AudioSource__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Weather_LightningParticle_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle_c);
      pWVar2 = TypeInfo_Weather_LightningParticle_c->static_fields;
    }
    object = (Il2CppObject *)pWVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AudioSource_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,object,
               (intptr_t)MethodInfo_Weather_LightningParticle_c_Awake_b__14_0,(MethodInfo_4F19B50 *)0x0);
    pWVar2 = TypeInfo_Weather_LightningParticle_c->static_fields;
    pWVar2->__9__14_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pWVar2->__9__14_0);
  }
  source_00 = System_Linq_Enumerable__OrderBy_object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TKey__o *)__this_00,
                         (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_AudioSource_string);
  pSVar3 = (System_Collections_Generic_List_AudioSource__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_AudioSource);
  (__this->fields)._audioSources = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources);
  return;
}


// Weather.LightningParticle$$Disable
// il2cpp: void Weather_LightningParticle__Disable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x5855480
// eh: try 0x5855523..0x585559a -> pad 0x58555a3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58555bb..0x58555c0 -> pad 0x58555e3 cleanup
// eh: try 0x58555e6..0x58555f0 -> pad 0x58555f8 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585559f: jmp 0x58555a3
// asm:   0x58555a1: jmp 0x58555a3
// asm:   0x58555a3: mov r14, rax
// asm:   0x58555a6: cmp edx, 1
// asm:   0x58555a9: jne 0x58555e6
// asm:   0x58555ab: mov rdi, r14
// asm:   0x58555ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58555b3: mov rbx, qword ptr [rax]
// asm:   0x58555b6: mov qword ptr [rsp + 0x20], rbx
// asm:   0x58555bb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58555c0: lea rax, [rip + 0x1a380f1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x58555c7: mov rsi, qword ptr [rax]
// asm:   0x58555ca: mov rdi, rsp
// asm:   0x58555cd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58555d2: test rbx, rbx
// asm:   0x58555d5: je 0x5855554
// asm:   0x58555db: mov rdi, rbx
// asm:   0x58555de: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58555e3: mov r14, rax
// asm:   0x58555e6: lea rdi, [rsp + 0x20]
// asm:   0x58555eb: call 0x2fce660  ; il2cpp_runtime_helper_02fce660()
// asm:   0x58555f0: mov rdi, r14
// asm:   0x58555f3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58555f8: mov rdi, rax
// asm:   0x58555fb: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_LightningParticle__Disable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  bool bVar1;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_0754506f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_0754506f = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
      if (!bVar1) break;
      if ((UnityEngine_AudioSource_o *)local_48.fields._current == (UnityEngine_AudioSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_AudioSource__Stop_68b0850
                ((UnityEngine_AudioSource_o *)local_48.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
              );
    __this_01 = (__this->fields)._lineRenderer;
    if (__this_01 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetColors
                (__this_01,(UnityEngine_Color_o)ZEXT416(0),(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Enable
// il2cpp: void Weather_LightningParticle__Enable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x5855600

void Weather_LightningParticle__Enable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._lineRenderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetColors
              (__this_00,(UnityEngine_Color_o)ZEXT816(0),(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Strike
// il2cpp: void Weather_LightningParticle__Strike (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x5855650

void Weather_LightningParticle__Strike(Weather_LightningParticle_o *__this,bool sound,MethodInfo *method)

{
  Weather_LightningParticle__StrikeCoroutine_d__20_o *__this_00;
  
  if (Il2CppMethodInitialized_07545072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
    Il2CppMethodInitialized_07545072 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).sound = sound;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$PlayAudio
// il2cpp: void Weather_LightningParticle__PlayAudio (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x5855730

void Weather_LightningParticle__PlayAudio(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  int32_t index;
  UnityEngine_AudioSource_o *__this_01;
  
  if (Il2CppMethodInitialized_07545070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    Il2CppMethodInitialized_07545070 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this,0.3,method);
  index = UnityEngine_Random__Range_690e2b0(0,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    __this_01 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_AudioSource_get_Item);
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_68b06a0(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$Setup
// il2cpp: void Weather_LightningParticle__Setup (Weather_LightningParticle_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, const MethodInfo* method);
// 0x58558f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58559d4: lea r13, [rip + 0x1a41bd5]  ; MethodInfo_System_Collections_Generic_List_Vector3_get_Item
// asm:   0x58559db: nop dword ptr [rax + rax]

void Weather_LightningParticle__Setup
               (Weather_LightningParticle_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
               int32_t generation,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int32_t index;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UnityEngine_Vector3_o position;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,generation);
  if (Il2CppMethodInitialized_07545071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_07545071 = '\x01';
  }
  if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
  }
  __this_00 = Weather_LightningParticle__GenerateLightningBoltPositions(start,end,generation,0.0,method_00);
  if ((__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
     (pUVar1 = (__this->fields)._lineRenderer, pUVar1 == (UnityEngine_LineRenderer_o *)0x0)) {
label_05855a19:
    ThrowNullReferenceException();
  }
  index = 0;
  UnityEngine_LineRenderer__SetVertexCount(pUVar1,(__this_00->fields)._size,(MethodInfo *)0x0);
  if (0 < (__this_00->fields)._size) {
    do {
      pUVar1 = (__this->fields)._lineRenderer;
      position = System_Collections_Generic_List_Vector3___get_Item
                           (__this_00,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
      ;
      if (pUVar1 == (UnityEngine_LineRenderer_o *)0x0) goto label_05855a19;
      UnityEngine_LineRenderer__SetPosition(pUVar1,index,position,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < (__this_00->fields)._size);
  }
  return;
}


// Weather.LightningParticle$$StrikeCoroutine
// il2cpp: System_Collections_IEnumerator_o* Weather_LightningParticle__StrikeCoroutine (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x58556c0

System_Collections_IEnumerator_o *
Weather_LightningParticle__StrikeCoroutine(Weather_LightningParticle_o *__this,bool sound,MethodInfo *method)

{
  Weather_LightningParticle__StrikeCoroutine_d__20_o *__this_00;
  
  if (Il2CppMethodInitialized_07545072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
    Il2CppMethodInitialized_07545072 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).sound = sound;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.LightningParticle$$SetVolume
// il2cpp: void Weather_LightningParticle__SetVolume (Weather_LightningParticle_o* __this, float volume, const MethodInfo* method);
// 0x58557a0
// eh: try 0x5855843..0x5855889 -> pad 0x5855892 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58558aa..0x58558af -> pad 0x58558d0 cleanup
// eh: try 0x58558d3..0x58558dd -> pad 0x58558e5 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585588e: jmp 0x5855892
// asm:   0x5855890: jmp 0x5855892
// asm:   0x5855892: mov rbx, rax
// asm:   0x5855895: cmp edx, 1
// asm:   0x5855898: jne 0x58558d3
// asm:   0x585589a: mov rdi, rbx
// asm:   0x585589d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58558a2: mov rbx, qword ptr [rax]
// asm:   0x58558a5: mov qword ptr [rsp + 0x28], rbx
// asm:   0x58558aa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58558af: lea rax, [rip + 0x1a37e02]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose
// asm:   0x58558b6: mov rsi, qword ptr [rax]
// asm:   0x58558b9: lea rdi, [rsp + 0x10]
// asm:   0x58558be: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58558c3: test rbx, rbx
// asm:   0x58558c6: je 0x585587c
// asm:   0x58558c8: mov rdi, rbx
// asm:   0x58558cb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58558d0: mov rbx, rax
// asm:   0x58558d3: lea rdi, [rsp + 0x28]
// asm:   0x58558d8: call 0x2fce690  ; il2cpp_runtime_helper_02fce690()
// asm:   0x58558dd: mov rdi, rbx
// asm:   0x58558e0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58558e5: mov rdi, rax
// asm:   0x58558e8: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_LightningParticle__SetVolume(Weather_LightningParticle_o *__this,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  undefined8 local_20;
  System_Collections_Generic_List_Enumerator_T__o *local_18;
  
  if (Il2CppMethodInitialized_07545073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
    Il2CppMethodInitialized_07545073 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AudioSource_GetEnumerator);
  local_20 = 0;
  local_18 = &local_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_AudioSource_Dispose);
      return;
    }
    if ((UnityEngine_AudioSource_o *)local_38.fields._current == (UnityEngine_AudioSource_o *)0x0) break;
    UnityEngine_AudioSource__set_volume
              ((UnityEngine_AudioSource_o *)local_38.fields._current,volume,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.LightningParticle$$.ctor
// il2cpp: void Weather_LightningParticle___ctor (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x5855a40

void Weather_LightningParticle___ctor(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  
  if (Il2CppMethodInitialized_07545074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AudioSource);
    Il2CppMethodInitialized_07545074 = '\x01';
  }
  (__this->fields).LightningColor.fields.r = 228.0;
  (__this->fields).LightningColor.fields.g = 245.0;
  (__this->fields).LightningColor.fields.b = 255.0;
  (__this->fields).LightningColor.fields.a = 1.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AudioSource_ctor);
  (__this->fields)._audioSources = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSources);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$.cctor
// il2cpp: void Weather_LightningParticle___cctor (const MethodInfo* method);
// 0x5855ac0

void Weather_LightningParticle___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if (Il2CppMethodInitialized_07545075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    Il2CppMethodInitialized_07545075 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Weather_LightningParticle->static_fields->_random = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_LightningParticle->static_fields->_random);
  return;
}


