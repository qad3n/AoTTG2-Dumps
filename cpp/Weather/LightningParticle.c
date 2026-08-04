// Type: Weather.LightningParticle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/LightningParticle.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/LightningParticle.cs
// --------------------------------

// Weather.LightningParticle.<>c$$.cctor
// il2cpp: void Weather_LightningParticle___c___cctor (const MethodInfo* method);
// 0x406bd20

void Weather_LightningParticle___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac2ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2ee = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Weather.LightningParticle.<>c$$.ctor
// il2cpp: void Weather_LightningParticle___c___ctor (Weather_LightningParticle___c_o* __this, const MethodInfo* method);
// 0x406bd90

void Weather_LightningParticle___c___ctor(Weather_LightningParticle___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle.<>c$$<Awake>b__14_0
// il2cpp: System_String_o* Weather_LightningParticle___c___Awake_b__14_0 (Weather_LightningParticle___c_o* __this, UnityEngine_AudioSource_o* x, const MethodInfo* method);
// 0x406bda0

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
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar1;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$.ctor
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20___ctor (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x406bc10

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
// 0x406bdd0

void Weather_LightningParticle__StrikeCoroutine_d__20__System_IDisposable_Dispose
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$MoveNext
// il2cpp: bool Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x406bde0

bool_conflict
Weather_LightningParticle__StrikeCoroutine_d__20__MoveNext
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  uint uVar2;
  Weather_LightningParticle_o *__this_00;
  float fVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *method_00;
  Weather_LightningParticle__StrikeCoroutine_d__20_o *pWVar7;
  UnityEngine_LineRenderer_o *pUVar8;
  float fVar9;
  float fVar10;
  
  pWVar7 = __this;
  if (g_data_057ac2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ef = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_0406c152;
    fVar9 = (__this_00->fields).LightningColor.fields.g;
    fVar10 = (__this_00->fields).LightningColor.fields.b;
    fVar3 = (__this_00->fields).LightningColor.fields.a;
    (__this->fields)._color_5__2.fields.r = (__this_00->fields).LightningColor.fields.r;
    (__this->fields)._color_5__2.fields.g = fVar9;
    (__this->fields)._color_5__2.fields.b = fVar10;
    (__this->fields)._color_5__2.fields.a = fVar3;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar4 = UnityEngine_Application__get_loadedLevel((MethodInfo *)0x0);
    (__this->fields)._maxAlpha_5__3 = *(float *)(&g_data_00d1d550 + (ulong)(iVar4 == 0) * 4);
    (__this->fields)._color_5__2.fields.a = 0.0;
    pUVar8 = (__this_00->fields)._lineRenderer;
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406c152;
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar8,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    pUVar8 = (__this_00->fields)._lineRenderer;
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406c152;
    method = (MethodInfo *)0x0;
    UnityEngine_LineRenderer__SetWidth(pUVar8,2.0,2.0,(MethodInfo *)0x0);
    fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar9;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__4 = fVar9;
    goto label_0406bf5a;
  case 3:
    (__this->fields).__1__state = -1;
label_0406bf5a:
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar9 - (__this->fields)._startTime_5__4) {
      if (__this_00 != (Weather_LightningParticle_o *)0x0) {
        Weather_LightningParticle__Disable(__this_00,method);
        return 0;
      }
      goto label_0406c152;
    }
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar10 = fVar10 - (__this->fields)._startTime_5__4;
    fVar9 = 1.0;
    if (fVar10 <= 1.0) {
      fVar9 = fVar10;
    }
    fVar9 = (float)(~-(uint)(0.0 <= fVar10) & 0x3f800000 | (uint)(1.0 - fVar9) & -(uint)(0.0 <= fVar10));
    (__this->fields)._color_5__2.fields.a = fVar9 * fVar9 * (__this->fields)._maxAlpha_5__3;
    if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_0406c152;
    pUVar8 = (__this_00->fields)._lineRenderer;
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406c152;
    pUVar1 = &(__this->fields)._color_5__2;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_LineRenderer__SetColors
              (pUVar8,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    Weather_LightningParticle__SetVolume(__this_00,fVar9 * 0.3,method_00);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    uVar6 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 3;
    goto label_0406c148;
  }
  pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
  fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (0.5 <= fVar9 - (__this->fields)._startTime_5__4) {
    if ((char)(__this->fields).sound == '\0') {
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_0406c152;
      pUVar8 = (__this_00->fields)._lineRenderer;
      pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
      if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406c152;
    }
    else {
      if (__this_00 == (Weather_LightningParticle_o *)0x0) goto label_0406c152;
      Weather_LightningParticle__PlayAudio(__this_00,method);
      (__this->fields)._color_5__2.fields.a = (__this->fields)._maxAlpha_5__3;
      pUVar8 = (__this_00->fields)._lineRenderer;
      if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) {
        pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
        goto label_0406c152;
      }
    }
    pUVar1 = &(__this->fields)._color_5__2;
    UnityEngine_LineRenderer__SetColors
              (pUVar8,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
               (MethodInfo *)0x0);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,0.3,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    uVar6 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 2;
label_0406c148:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
  }
  pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
  fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar10 = fVar10 - (__this->fields)._startTime_5__4;
  fVar10 = fVar10 + fVar10;
  fVar9 = 1.0;
  if (fVar10 <= 1.0) {
    fVar9 = fVar10;
  }
  (__this->fields)._color_5__2.fields.a =
       (float)(-(uint)(0.0 <= fVar10) & (uint)fVar9) * (__this->fields)._maxAlpha_5__3;
  if (__this_00 != (Weather_LightningParticle_o *)0x0) {
    pUVar8 = (__this_00->fields)._lineRenderer;
    pWVar7 = (Weather_LightningParticle__StrikeCoroutine_d__20_o *)0x0;
    if (pUVar8 != (UnityEngine_LineRenderer_o *)0x0) {
      pUVar1 = &(__this->fields)._color_5__2;
      UnityEngine_LineRenderer__SetColors
                (pUVar8,(UnityEngine_Color_o)pUVar1->fields,(UnityEngine_Color_o)pUVar1->fields,
                 (MethodInfo *)0x0);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar5;
      uVar6 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar5);
      (__this->fields).__1__state = 1;
      goto label_0406c148;
    }
  }
label_0406c152:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pWVar7->fields).__2__current;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x406c160

Il2CppObject *
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x406c170

void Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_Reset
               (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current (Weather_LightningParticle__StrikeCoroutine_d__20_o* __this, const MethodInfo* method);
// 0x406c1b0

Il2CppObject *
Weather_LightningParticle__StrikeCoroutine_d__20__System_Collections_IEnumerator_get_Current
          (Weather_LightningParticle__StrikeCoroutine_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.LightningParticle$$GetPerpendicularVector
// il2cpp: void Weather_LightningParticle__GetPerpendicularVector (UnityEngine_Vector3_o* directionNormalized, UnityEngine_Vector3_o* side, const MethodInfo* method);
// 0x406a7e0

void Weather_LightningParticle__GetPerpendicularVector
               (UnityEngine_Vector3_o *directionNormalized,UnityEngine_Vector3_o *side,MethodInfo *method)

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
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar13 = (float)uVar2 - (float)((ulong)*puVar4 >> 0x20);
  fVar8 = fVar8 - *(float *)(puVar4 + 1);
  fVar12 = (float)uVar1 - (float)*puVar4;
  if (fVar12 * fVar12 + fVar13 * fVar13 + fVar8 * fVar8 < 9.9999994e-11) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
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
      auVar11 = _DAT_00d19fc0;
      goto joined_r0x0406a92c;
    }
    auVar10._0_8_ = (undefined8)g_data_00d1bb80;
    auVar10._8_4_ = g_data_00d1bb80._4_4_;
    auVar10._12_4_ = 0x80000000;
    auVar11._8_8_ = auVar10._8_8_;
    auVar11._0_4_ = (undefined4)g_data_00d1bb80;
    auVar11._4_4_ = -(fVar8 + fVar13) / fVar12;
  }
  else {
    auVar11._4_8_ = 0x3f800000;
    auVar11._0_4_ = -(fVar13 + fVar12) / fVar8;
    auVar11._12_4_ = 0;
  }
  auVar15._0_12_ = ZEXT812(0x3f800000);
  auVar15._12_4_ = 0;
joined_r0x0406a92c:
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
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
  return;
}


// Weather.LightningParticle$$GenerateLightningBoltPositions
// il2cpp: System_Collections_Generic_List_Vector3__o* Weather_LightningParticle__GenerateLightningBoltPositions (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, float offsetAmount, const MethodInfo* method);
// 0x406aa70

System_Collections_Generic_List_Vector3__o *
Weather_LightningParticle__GenerateLightningBoltPositions
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,int32_t generation,float offsetAmount,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___c *pSVar2;
  _union_248223 _Var3;
  uint uVar4;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *pSVar5;
  UnityEngine_Vector3_array *pUVar6;
  long lVar7;
  Il2CppClass *__this;
  UnityEngine_LineRenderer_o *__this_00;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_Vector3_o point;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this_05;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_00;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this_06;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_01;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3__o __this_07;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  bool_conflict bVar9;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *__this_08;
  System_Collections_Generic_List_Vector3__o *extraout_RAX;
  UnityEngine_Component_c *pUVar10;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar11;
  System_Collections_Generic_List_Vector3__o *pSVar12;
  UnityEngine_GameObject_o *__this_09;
  System_Collections_Generic_List_Vector3__o *extraout_RAX_00;
  long *plVar13;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  int index;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *pSVar15;
  _union_248223 *method_00;
  UnityEngine_Component_o *__this_10;
  int iVar16;
  _union_248223 *unaff_R14;
  _union_248223 *unaff_R15;
  float fVar18;
  double dVar17;
  undefined4 in_XMM0_Dc;
  float fVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dd;
  float fVar23;
  float fVar24;
  undefined8 in_XMM2_Qb;
  undefined1 auVar26 [16];
  UnityEngine_Quaternion_o rotation;
  undefined1 auVar27 [12];
  UnityEngine_Vector3_o key;
  UnityEngine_Vector3_o key_00;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  System_Collections_Generic_List_T__o *pSVar29;
  Il2CppMethodPointer pIVar30;
  UnityEngine_AudioSource_o *__this_11;
  UnityEngine_Vector3_Fields UStack_190;
  UnityEngine_Vector3_Fields UStack_180;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *pSStack_150;
  _union_248223 *p_Stack_148;
  _union_248223 *p_Stack_140;
  _union_248223 in_stack_fffffffffffffec8;
  void *in_stack_fffffffffffffed0;
  undefined8 in_stack_fffffffffffffed8;
  float local_11c;
  _union_248223 local_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  _union_248223 local_d8;
  _union_248223 local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  _union_248223 local_a8;
  float local_a0;
  _union_248223 local_98;
  float local_90;
  _union_248223 local_88;
  float local_80;
  undefined1 local_78 [24];
  ulong local_60;
  undefined1 local_58 [16];
  _union_248223 local_48;
  void *pvStack_40;
  undefined8 local_38;
  undefined8 uVar25;
  
  local_90 = end.fields.z;
  local_e8 = end.fields._0_8_;
  UVar28.fields.z = start.fields.z;
  local_88 = start.fields._0_8_;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = local_88.genericMethod;
  local_58._12_4_ = in_XMM0_Dd;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = local_88.genericMethod;
  local_78._12_4_ = in_XMM0_Dd;
  local_f8._0_4_ = local_90;
  uStack_e0 = in_XMM2_Qb;
  local_d8 = local_e8;
  local_98 = local_e8;
  local_80 = UVar28.fields.z;
  if (g_data_057ac2e4 == '\0') {
    p_Stack_140 = (_union_248223 *)0x406aaea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3);
    p_Stack_140 = (_union_248223 *)0x406aaf6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Key);
    p_Stack_140 = (_union_248223 *)0x406ab02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    p_Stack_140 = (_union_248223 *)0x406ab0e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LightningParticle);
    p_Stack_140 = (_union_248223 *)0x406ab1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    p_Stack_140 = (_union_248223 *)0x406ab26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    p_Stack_140 = (_union_248223 *)0x406ab32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Ve);
    p_Stack_140 = (_union_248223 *)0x406ab3e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    p_Stack_140 = (_union_248223 *)0x406ab4a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    p_Stack_140 = (_union_248223 *)0x406ab56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g);
    p_Stack_140 = (_union_248223 *)0x406ab62;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    p_Stack_140 = (_union_248223 *)0x406ab6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KeyValuePair_Vector3_Vector3);
    g_data_057ac2e4 = '\x01';
  }
  local_a0 = 0.0;
  local_a8.genericMethod = (void *)0x0;
  p_Stack_140 = (_union_248223 *)0x406ab9b;
  __this_08 = (System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_KeyValuePair_Vector3_Vector3);
  p_Stack_140 = (_union_248223 *)0x406abb0;
  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3_____ctor(__this_08,MethodInfo_List_1_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Ve);
  auVar26 = local_58;
  local_c8.genericMethod = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_b8 = 0;
  method_00 = &local_c8;
  p_Stack_140 = (_union_248223 *)0x406abf1;
  __this_05.fields._8_8_ = in_stack_fffffffffffffed0;
  __this_05.fields.key.fields._0_8_ = in_stack_fffffffffffffec8.genericMethod;
  __this_05.fields.value.fields.y = (float)(int)in_stack_fffffffffffffed8;
  __this_05.fields.value.fields.z = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  UVar28.fields.x = (float)local_58._0_4_;
  UVar28.fields.y = (float)local_58._4_4_;
  value.fields.z = (float)local_f8._0_4_;
  value.fields._0_8_ = local_d8.genericMethod;
  pSVar15 = MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3;
  local_58 = auVar26;
  System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
            (__this_05,UVar28,value,(MethodInfo_3505130 *)method_00);
  lVar7 = MethodInfo_Void_Add;
  if (__this_08 != (System_Collections_Generic_List_KeyValuePair_Vector3__Vector3___o *)0x0) {
    unaff_R14 = (_union_248223 *)&MethodInfo_Void_Add;
    fStack_108 = (float)local_b8;
    fStack_104 = (float)((ulong)local_b8 >> 0x20);
    local_118.genericMethod = local_c8.genericMethod;
    fStack_110 = SUB84(pvStack_c0,0);
    fStack_10c = (float)((ulong)pvStack_c0 >> 0x20);
    piVar1 = &(__this_08->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_08->fields)._items;
    if (pSVar5 != (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0) {
      uVar4 = (__this_08->fields)._size;
      if (uVar4 < (uint)pSVar5->max_length) {
        (__this_08->fields)._size = uVar4 + 1;
        pSVar5->m_Items[(int)uVar4].fields.value.fields.y = (float)(undefined4)local_b8;
        pSVar5->m_Items[(int)uVar4].fields.value.fields.z = (float)local_b8._4_4_;
        ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))->genericMethod = (void *)local_c8;
        ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))[1].genericMethod = pvStack_c0;
      }
      else {
        p_Stack_140 = (_union_248223 *)0x406ac7f;
        item.fields._8_8_ = pvStack_c0;
        item.fields.key.fields._0_8_ = local_c8.genericMethod;
        item.fields.value.fields.y = (float)(undefined4)local_b8;
        item.fields.value.fields.z = (float)local_b8._4_4_;
        in_stack_fffffffffffffec8 = local_c8;
        in_stack_fffffffffffffed0 = pvStack_c0;
        in_stack_fffffffffffffed8 = local_b8;
        System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                  (__this_08,item,*(MethodInfo_3536250 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (offsetAmount <= 0.0) {
        fVar24 = (float)local_78._4_4_;
        fVar23 = (float)local_e8._4_4_;
        if (g_data_057a6841 == '\0') {
          local_e8._0_4_ = local_e8._4_4_;
          local_78._0_4_ = local_78._4_4_;
          p_Stack_140 = (_union_248223 *)0x406acd1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar24 = (float)local_78._0_4_;
          fVar23 = (float)(undefined4)local_e8;
        }
        uVar20 = (float)local_d8._0_4_ - (float)local_58._0_4_;
        fVar18 = fVar23 - fVar24;
        fVar19 = (float)local_f8._0_4_ - UVar28.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_f8._0_4_ = (float)local_f8._0_4_ - UVar28.fields.z;
          local_e8._0_4_ = fVar23 - fVar24;
          local_d8._0_4_ = (float)local_d8._0_4_ - (float)local_58._0_4_;
          p_Stack_140 = (_union_248223 *)0x406ad2b;
          il2cpp_runtime_helper_02337ed0();
          uVar20 = local_d8._0_4_;
          fVar18 = (float)(undefined4)local_e8;
          fVar19 = (float)local_f8._0_4_;
        }
        fVar24 = fVar19 * fVar19 + fVar18 * fVar18 + (float)uVar20 * (float)uVar20;
        if (fVar24 < 0.0) {
          p_Stack_140 = (_union_248223 *)0x406ad68;
          fVar24 = sqrtf(fVar24);
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        offsetAmount = fVar24 * 0.2;
      }
      if (generation < 1) {
        index = 0;
      }
      else {
        index = 0;
        unaff_R15 = &local_118;
        iVar16 = (__this_08->fields)._size;
        local_11c = offsetAmount;
        local_60 = (ulong)(uint)generation;
        if (0 < iVar16) goto label_0406ae12;
label_0406ada0:
        index = iVar16;
        iVar16 = (int)local_60;
        local_60 = (ulong)(iVar16 - 1);
        local_11c = local_11c * 0.5;
        if (1 < iVar16) {
          iVar16 = (__this_08->fields)._size;
          if (index < iVar16) {
label_0406ae12:
            do {
              while( true ) {
                p_Stack_140 = (_union_248223 *)0x406ae23;
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)unaff_R15,__this_08,
                           index,(MethodInfo_3535E80 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g);
                fVar24 = fStack_110;
                local_e8 = local_118;
                uStack_e0 = 0;
                local_88.genericMethod = local_118.genericMethod;
                local_80 = fStack_110;
                p_Stack_140 = (_union_248223 *)0x406ae5d;
                pMVar14 = MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g;
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)unaff_R15,__this_08,
                           index,(MethodInfo_3535E80 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g);
                local_98._4_4_ = fStack_108;
                local_98._0_4_ = fStack_10c;
                local_90 = fStack_104;
                local_78._8_8_ = 0;
                local_78._0_8_ = local_98;
                local_f8._4_4_ = ((float)local_e8._4_4_ + fStack_108) * 0.5;
                local_f8._0_4_ = ((float)(undefined4)local_e8 + fStack_10c) * 0.5;
                fStack_f0 = ((float)uStack_e0 + 0.0) * 0.0;
                fStack_ec = (uStack_e0._4_4_ + 0.0) * 0.0;
                local_58._0_4_ = fStack_104;
                fVar23 = (fVar24 + fStack_104) * 0.5;
                local_d8._0_4_ = fVar23;
                if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
                  p_Stack_140 = (_union_248223 *)0x406aed0;
                  il2cpp_runtime_helper_02337ed0();
                }
                p_Stack_140 = (_union_248223 *)0x406aef3;
                Weather_LightningParticle__RandomVector
                          ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,local_11c,
                           (UnityEngine_Vector3_o *)&local_a8,pMVar14);
                value_00.fields.z = (float)local_d8._0_4_ + local_a0;
                local_f8._0_4_ = (float)local_f8._0_4_ + local_a8._0_4_;
                fVar23 = (float)local_f8._4_4_ + local_a8._4_4_;
                _local_f8 = CONCAT412(fStack_ec + 0.0,
                                      CONCAT48(fStack_f0 + 0.0,CONCAT44(fVar23,local_f8._0_4_)));
                local_c8.genericMethod = (void *)0x0;
                pvStack_c0 = (void *)0x0;
                local_b8 = 0;
                method_00 = &local_c8;
                local_d8._0_4_ = value_00.fields.z;
                p_Stack_140 = (_union_248223 *)0x406af51;
                __this_06.fields._8_8_ = in_stack_fffffffffffffed0;
                __this_06.fields.key.fields._0_8_ = in_stack_fffffffffffffec8.genericMethod;
                __this_06.fields.value.fields.y = (float)(int)in_stack_fffffffffffffed8;
                __this_06.fields.value.fields.z = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
                key.fields.z = fVar24;
                key.fields._0_8_ = local_e8;
                value_00.fields.x = (float)local_f8._0_4_;
                value_00.fields.y = fVar23;
                pSVar15 = MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3;
                System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                          (__this_06,key,value_00,(MethodInfo_3505130 *)method_00);
                lVar7 = MethodInfo_Void_Add;
                fStack_108 = (float)local_b8;
                fStack_104 = (float)((ulong)local_b8 >> 0x20);
                local_118.genericMethod = local_c8.genericMethod;
                fStack_110 = SUB84(pvStack_c0,0);
                fStack_10c = (float)((ulong)pvStack_c0 >> 0x20);
                piVar1 = &(__this_08->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_08->fields)._items;
                if (pSVar5 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0)
                goto label_0406b1ec;
                uVar4 = (__this_08->fields)._size;
                if (uVar4 < (uint)pSVar5->max_length) {
                  (__this_08->fields)._size = uVar4 + 1;
                  pSVar5->m_Items[(int)uVar4].fields.value.fields.y = (float)(undefined4)local_b8;
                  pSVar5->m_Items[(int)uVar4].fields.value.fields.z = (float)local_b8._4_4_;
                  ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))->genericMethod = (void *)local_c8;
                  ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))[1].genericMethod = pvStack_c0;
                }
                else {
                  p_Stack_140 = (_union_248223 *)0x406afda;
                  item_01.fields._8_8_ = pvStack_c0;
                  item_01.fields.key.fields._0_8_ = local_c8.genericMethod;
                  item_01.fields.value.fields.y = (float)(undefined4)local_b8;
                  item_01.fields.value.fields.z = (float)local_b8._4_4_;
                  in_stack_fffffffffffffec8 = local_c8;
                  in_stack_fffffffffffffed0 = pvStack_c0;
                  in_stack_fffffffffffffed8 = local_b8;
                  System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                            (__this_08,item_01,
                             *(MethodInfo_3536250 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                auVar26 = _local_f8;
                local_48.genericMethod = (void *)0x0;
                pvStack_40 = (void *)0x0;
                local_38 = 0;
                method_00 = &local_48;
                value_01.fields._0_8_ = local_78._0_8_;
                p_Stack_140 = (_union_248223 *)0x406b027;
                __this_07.fields._8_8_ = in_stack_fffffffffffffed0;
                __this_07.fields.key.fields._0_8_ = in_stack_fffffffffffffec8.genericMethod;
                __this_07.fields.value.fields.y = (float)(int)in_stack_fffffffffffffed8;
                __this_07.fields.value.fields.z = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
                key_00.fields.z = (float)local_d8._0_4_;
                key_00.fields.x = (float)local_f8._0_4_;
                key_00.fields.y = (float)local_f8._4_4_;
                value_01.fields.z = (float)local_58._0_4_;
                pSVar15 = MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3;
                _local_f8 = auVar26;
                System_Collections_Generic_KeyValuePair_Vector3__Vector3____ctor
                          (__this_07,key_00,value_01,(MethodInfo_3505130 *)method_00);
                lVar7 = MethodInfo_Void_Add;
                fStack_108 = (float)local_38;
                fStack_104 = (float)((ulong)local_38 >> 0x20);
                local_118.genericMethod = local_48.genericMethod;
                fStack_110 = SUB84(pvStack_40,0);
                fStack_10c = (float)((ulong)pvStack_40 >> 0x20);
                piVar1 = &(__this_08->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_08->fields)._items;
                if (pSVar5 == (System_Collections_Generic_KeyValuePair_Vector3__Vector3__array *)0x0)
                goto label_0406b1ec;
                uVar4 = (__this_08->fields)._size;
                if ((uint)pSVar5->max_length <= uVar4) break;
                (__this_08->fields)._size = uVar4 + 1;
                pSVar5->m_Items[(int)uVar4].fields.value.fields.y = (float)(undefined4)local_38;
                pSVar5->m_Items[(int)uVar4].fields.value.fields.z = (float)local_38._4_4_;
                ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))->genericMethod = (void *)local_48;
                ((_union_248223 *)(pSVar5->m_Items + (int)uVar4))[1].genericMethod = pvStack_40;
                index = index + 1;
                if (iVar16 == index) goto label_0406ada0;
              }
              p_Stack_140 = (_union_248223 *)0x406ae0a;
              item_00.fields._8_8_ = pvStack_40;
              item_00.fields.key.fields._0_8_ = local_48.genericMethod;
              item_00.fields.value.fields.y = (float)(undefined4)local_38;
              item_00.fields.value.fields.z = (float)local_38._4_4_;
              in_stack_fffffffffffffec8 = local_48;
              in_stack_fffffffffffffed0 = pvStack_40;
              in_stack_fffffffffffffed8 = local_38;
              System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____AddWithResize
                        (__this_08,item_00,
                         *(MethodInfo_3536250 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              index = index + 1;
            } while (iVar16 != index);
          }
          goto label_0406ada0;
        }
      }
      p_Stack_140 = (_union_248223 *)0x406b0a3;
      pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
      p_Stack_140 = (_union_248223 *)0x406b0b8;
      System_Collections_Generic_List_Vector3____ctor(pSVar12,MethodInfo_List_1_UnityEngine_Vector3);
      unaff_R15 = (_union_248223 *)&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g;
      method_00 = &local_118;
      p_Stack_140 = (_union_248223 *)0x406b0d2;
      pSVar15 = __this_08;
      System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)method_00,__this_08,index,
                 (MethodInfo_3535E80 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g);
      lVar7 = MethodInfo_Void_Add;
      if (pSVar12 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        item_02.fields.z = fStack_110;
        item_02.fields._0_8_ = local_118.genericMethod;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar12->fields)._items;
        if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
          uVar4 = (pSVar12->fields)._size;
          if (uVar4 < (uint)pUVar6->max_length) {
            (pSVar12->fields)._size = uVar4 + 1;
            ((_union_248223 *)(pUVar6->m_Items + (int)uVar4))->genericMethod = (void *)local_118;
            pUVar6->m_Items[(int)uVar4].fields.z = fStack_110;
            iVar16 = (__this_08->fields)._size;
          }
          else {
            p_Stack_140 = (_union_248223 *)0x406b143;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar12,item_02,
                       *(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            iVar16 = (__this_08->fields)._size;
          }
          if (index < iVar16) {
            unaff_R14 = &local_118;
            do {
              while( true ) {
                p_Stack_140 = (_union_248223 *)0x406b192;
                pSVar15 = __this_08;
                method_00 = unaff_R14;
                System_Collections_Generic_List_KeyValuePair_Vector3__Vector3____get_Item
                          ((System_Collections_Generic_KeyValuePair_Vector3__Vector3__o *)unaff_R14,__this_08,
                           index,(MethodInfo_3535E80 *)MethodInfo_KeyValuePair_2_UnityEngine_Vector3_UnityEngine_Vector3_g);
                lVar7 = MethodInfo_Void_Add;
                item_03.fields.y = fStack_108;
                item_03.fields.x = fStack_10c;
                item_03.fields.z = fStack_104;
                piVar1 = &(pSVar12->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (pSVar12->fields)._items;
                if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_0406b1ec;
                uVar4 = (pSVar12->fields)._size;
                if ((uint)pUVar6->max_length <= uVar4) break;
                (pSVar12->fields)._size = uVar4 + 1;
                pUVar6->m_Items[(int)uVar4].fields.x = fStack_10c;
                pUVar6->m_Items[(int)uVar4].fields.y = fStack_108;
                pUVar6->m_Items[(int)uVar4].fields.z = fStack_104;
                index = index + 1;
                if ((__this_08->fields)._size <= index) {
                  return pSVar12;
                }
              }
              p_Stack_140 = (_union_248223 *)0x406b177;
              System_Collections_Generic_List_Vector3___AddWithResize
                        (pSVar12,item_03,
                         *(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              index = index + 1;
            } while (index < (__this_08->fields)._size);
          }
          return pSVar12;
        }
      }
    }
  }
label_0406b1ec:
  p_Stack_140 = (_union_248223 *)0x406b1f1;
  fStack_170 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar14 = extraout_RDX;
  pSStack_150 = __this_08;
  p_Stack_148 = unaff_R14;
  p_Stack_140 = unaff_R15;
  if (g_data_057ac2e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LightningParticle);
    g_data_057ac2e5 = '\x01';
    pMVar14 = extraout_RDX_00;
  }
  UStack_180.z = 0.0;
  UStack_180.x = 0.0;
  UStack_180.y = 0.0;
  UStack_190.z = 0.0;
  UStack_190.x = 0.0;
  UStack_190.y = 0.0;
  pSVar2 = pSVar15->klass;
  _Var3 = *method_00;
  fVar24 = *(float *)&pSVar15->monitor - *(float *)(method_00 + 1);
  fVar23 = _Var3._0_4_;
  fVar18 = _Var3._4_4_;
  fVar19 = 0.0;
  fVar21 = 0.0;
  if (g_data_057a6845 == '\0') {
    uStack_158 = 0;
    uStack_160 = _Var3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    pMVar14 = extraout_RDX_01;
    fVar23 = (float)uStack_160;
    fVar18 = uStack_160._4_4_;
    fVar19 = (float)uStack_158;
    fVar21 = uStack_158._4_4_;
  }
  auVar26._0_4_ = SUB84(pSVar2,0) - fVar23;
  auVar26._4_4_ = (float)((ulong)pSVar2 >> 0x20) - fVar18;
  auVar26._8_4_ = 0.0 - fVar19;
  auVar26._12_4_ = 0.0 - fVar21;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_02;
  }
  uVar20 = 0;
  uVar22 = 0;
  fVar23 = fVar24 * fVar24 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
  if (fVar23 < 0.0) {
    fVar23 = sqrtf(fVar23);
    pMVar14 = extraout_RDX_04;
    uVar20 = extraout_XMM0_Dc;
    uVar22 = extraout_XMM0_Dd;
  }
  else {
    fVar23 = SQRT(fVar23);
  }
  if (1e-05 < fVar23) {
    fVar24 = fVar24 / fVar23;
    auVar8._4_4_ = fVar23;
    auVar8._0_4_ = fVar23;
    auVar8._8_4_ = uVar20;
    auVar8._12_4_ = uVar22;
    auVar26 = divps(auVar26,auVar8);
    uVar25 = auVar26._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
      pMVar14 = extraout_RDX_03;
    }
    uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  UStack_180._0_8_ = uVar25;
  UStack_180.z = fVar24;
  if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_05;
  }
  Weather_LightningParticle__GetPerpendicularVector
            ((UnityEngine_Vector3_o *)&UStack_180,(UnityEngine_Vector3_o *)&UStack_190,pMVar14);
  plVar13 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
  if (plVar13 != (long *)0x0) {
    dVar17 = (double)(**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    uStack_16c = (undefined4)((ulong)dVar17 >> 0x20);
    plVar13 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
    if (plVar13 != (long *)0x0) {
      fStack_170 = ((float)dVar17 + 0.1) * fStack_170;
      dVar17 = (double)(**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
      axis.fields.z = fVar24;
      axis.fields.x = (float)uVar25;
      axis.fields.y = SUB84(uVar25,4);
      rotation = UnityEngine_Quaternion__AngleAxis((float)dVar17 * 360.0,axis,(MethodInfo *)0x0);
      point.fields.z = UStack_190.z;
      point.fields.x = UStack_190.x;
      point.fields.y = UStack_190.y;
      UVar28 = UnityEngine_Quaternion__op_Multiply_4debdf0(rotation,point,(MethodInfo *)0x0);
      extraout_RDX->methodPointer =
           (Il2CppMethodPointer)CONCAT44(fStack_170 * UVar28.fields.y,fStack_170 * UVar28.fields.x);
      *(float *)&extraout_RDX->virtualMethodPointer = UVar28.fields.z * fStack_170;
      return extraout_RAX;
    }
  }
  __this_10 = (UnityEngine_Component_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_AudioSource_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Awake_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2e6 = '\x01';
  }
  pUVar10 = (UnityEngine_Component_c *)UnityEngine_Component__GetComponent_object_(__this_10,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  __this_10[2].klass = pUVar10;
  il2cpp_runtime_helper_022b4080(__this_10 + 2);
  pUVar10 = __this_10[2].klass;
  if (pUVar10 != (UnityEngine_Component_c *)0x0) {
    UnityEngine_LineRenderer__SetVertexCount((UnityEngine_LineRenderer_o *)pUVar10,0,(MethodInfo *)0x0);
    source = UnityEngine_Component__GetComponentsInChildren_object__24e8500(__this_10,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_AudioSource_string);
      System_Func_object__object____ctor();
      lVar7 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar7 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar7 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    pSVar11 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    __this_10[2].fields.m_CachedPtr = (intptr_t)pSVar11;
    pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_022b4080(&__this_10[2].fields,pSVar11);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2e7 = '\x01';
  }
  pSVar29 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar30 = (Il2CppMethodPointer)0x0;
  __this_11 = (UnityEngine_AudioSource_o *)0x0;
  __this = (pUVar10->_1).element_class;
  if (__this != (Il2CppClass *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffdf0,
               (System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    while( true ) {
      __this_01.fields._8_8_ = pIVar30;
      __this_01.fields._list = pSVar29;
      __this_01.fields._current = (Il2CppObject *)__this_11;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffdf0);
      if ((char)bVar9 == '\0') {
        __this_02.fields._8_8_ = pIVar30;
        __this_02.fields._list = pSVar29;
        __this_02.fields._current = (Il2CppObject *)__this_11;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffdf0);
        goto label_0406b6d4;
      }
      if (__this_11 == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__Stop_4daa470(__this_11,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar27 = il2cpp_runtime_helper_022b2c90();
    if (auVar27._8_4_ != 1) {
label_0406b771:
      __this_04.fields._8_8_ = pIVar30;
      __this_04.fields._list = pSVar29;
      __this_04.fields._current = (Il2CppObject *)__this_11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffdf0);
      _Unwind_Resume(auVar27._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar7 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar30;
    __this_03.fields._list = pSVar29;
    __this_03.fields._current = (Il2CppObject *)__this_11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffdf0);
    if (lVar7 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar7);
      goto label_0406b771;
    }
label_0406b6d4:
    __this_00 = (pUVar10->_1).this_arg.data;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetColors
                (__this_00,(UnityEngine_Color_o)ZEXT816(0),(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      __this_09 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_09,0,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
    }
  } while( true );
}


// Weather.LightningParticle$$RandomVector
// il2cpp: void Weather_LightningParticle__RandomVector (UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* end, float offsetAmount, UnityEngine_Vector3_o* result, const MethodInfo* method);
// 0x406b200

void Weather_LightningParticle__RandomVector
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float offsetAmount,
               UnityEngine_Vector3_o *result,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  Il2CppClass *__this;
  UnityEngine_LineRenderer_o *__this_00;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  UnityEngine_Component_c *pUVar6;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar7;
  UnityEngine_GameObject_o *__this_05;
  long *plVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  UnityEngine_Component_o *__this_06;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar14;
  float fVar16;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o start_00;
  undefined1 auVar17 [12];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o axis;
  System_Collections_Generic_List_T__o *pSVar19;
  Il2CppMethodPointer pIVar20;
  UnityEngine_AudioSource_o *__this_07;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  float local_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar15 [16];
  
  method_00 = (MethodInfo *)result;
  local_38 = offsetAmount;
  if (g_data_057ac2e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LightningParticle);
    g_data_057ac2e5 = '\x01';
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
  uVar14._0_4_ = (start->fields).x;
  uVar14._4_4_ = (start->fields).y;
  fVar16 = (end->fields).z - (start->fields).z;
  fVar10 = 0.0;
  fVar12 = 0.0;
  if (g_data_057a6845 == '\0') {
    uStack_20 = 0;
    local_28 = uVar14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    method_00 = extraout_RDX_00;
    uVar14._0_4_ = (float)local_28;
    uVar14._4_4_ = local_28._4_4_;
    fVar10 = (float)uStack_20;
    fVar12 = uStack_20._4_4_;
  }
  auVar15._0_4_ = (float)uVar1 - (float)uVar14;
  auVar15._4_4_ = (float)uVar2 - uVar14._4_4_;
  auVar15._8_4_ = 0.0 - fVar10;
  auVar15._12_4_ = 0.0 - fVar12;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
  }
  uVar11 = 0;
  uVar13 = 0;
  uVar14._0_4_ = fVar16 * fVar16 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
  if ((float)uVar14 < 0.0) {
    uVar14._0_4_ = sqrtf((float)uVar14);
    method_00 = extraout_RDX_03;
    uVar11 = extraout_XMM0_Dc;
    uVar13 = extraout_XMM0_Dd;
  }
  else {
    uVar14._0_4_ = SQRT((float)uVar14);
  }
  if (1e-05 < (float)uVar14) {
    fVar16 = fVar16 / (float)uVar14;
    auVar4._4_4_ = (float)uVar14;
    auVar4._0_4_ = (float)uVar14;
    auVar4._8_4_ = uVar11;
    auVar4._12_4_ = uVar13;
    auVar15 = divps(auVar15,auVar4);
    uVar14 = auVar15._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
      method_00 = extraout_RDX_02;
    }
    uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  local_48._0_8_ = uVar14;
  local_48.z = fVar16;
  if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_04;
  }
  Weather_LightningParticle__GetPerpendicularVector
            ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,method_00);
  plVar8 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
  if (plVar8 != (long *)0x0) {
    dVar9 = (double)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    uStack_34 = (undefined4)((ulong)dVar9 >> 0x20);
    plVar8 = (long *)**(long **)(TypeInfo_LightningParticle + 0xb8);
    if (plVar8 != (long *)0x0) {
      local_38 = ((float)dVar9 + 0.1) * local_38;
      dVar9 = (double)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      axis.fields.z = fVar16;
      axis.fields.x = (float)uVar14;
      axis.fields.y = SUB84(uVar14,4);
      rotation = UnityEngine_Quaternion__AngleAxis((float)dVar9 * 360.0,axis,(MethodInfo *)0x0);
      UVar18.fields.z = local_58.z;
      UVar18.fields.x = local_58.x;
      UVar18.fields.y = local_58.y;
      UVar18 = UnityEngine_Quaternion__op_Multiply_4debdf0(rotation,UVar18,(MethodInfo *)0x0);
      (result->fields).x = local_38 * UVar18.fields.x;
      (result->fields).y = local_38 * UVar18.fields.y;
      (result->fields).z = UVar18.fields.z * local_38;
      return;
    }
  }
  __this_06 = (UnityEngine_Component_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_AudioSource_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Awake_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2e6 = '\x01';
  }
  pUVar6 = (UnityEngine_Component_c *)UnityEngine_Component__GetComponent_object_(__this_06,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  __this_06[2].klass = pUVar6;
  il2cpp_runtime_helper_022b4080(__this_06 + 2);
  pUVar6 = __this_06[2].klass;
  if (pUVar6 != (UnityEngine_Component_c *)0x0) {
    UnityEngine_LineRenderer__SetVertexCount((UnityEngine_LineRenderer_o *)pUVar6,0,(MethodInfo *)0x0);
    source = UnityEngine_Component__GetComponentsInChildren_object__24e8500(__this_06,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_AudioSource_string);
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar3 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar3 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    pSVar7 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    __this_06[2].fields.m_CachedPtr = (intptr_t)pSVar7;
    il2cpp_runtime_helper_022b4080(&__this_06[2].fields,pSVar7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2e7 = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  __this_07 = (UnityEngine_AudioSource_o *)0x0;
  __this = (pUVar6->_1).element_class;
  if (__this != (Il2CppClass *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff28,
               (System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    while( true ) {
      __this_01.fields._8_8_ = pIVar20;
      __this_01.fields._list = pSVar19;
      __this_01.fields._current = (Il2CppObject *)__this_07;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff28);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = pIVar20;
        __this_02.fields._list = pSVar19;
        __this_02.fields._current = (Il2CppObject *)__this_07;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
        goto label_0406b6d4;
      }
      if (__this_07 == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__Stop_4daa470(__this_07,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
label_0406b771:
      __this_04.fields._8_8_ = pIVar20;
      __this_04.fields._list = pSVar19;
      __this_04.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
      _Unwind_Resume(auVar17._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar3 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar20;
    __this_03.fields._list = pSVar19;
    __this_03.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0406b771;
    }
label_0406b6d4:
    __this_00 = (pUVar6->_1).this_arg.data;
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      start_00.fields.a = 0.0;
      start_00.fields.r = 0.0;
      uVar21._4_4_ = 0.0;
      register0x00001240 = 0.0;
      UnityEngine_LineRenderer__SetColors
                (__this_00,start_00,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_05,0,(MethodInfo *)0x0);
        return;
      }
    }
  } while( true );
}


// Weather.LightningParticle$$Awake
// il2cpp: void Weather_LightningParticle__Awake (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x406b460

void Weather_LightningParticle__Awake(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_AudioSource__o *pSVar4;
  UnityEngine_GameObject_o *__this_05;
  long *plVar5;
  UnityEngine_Color_o start;
  undefined1 auVar6 [12];
  UnityEngine_Color_o end;
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_AudioSource_o *__this_06;
  
  if (g_data_057ac2e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_AudioSource_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Awake_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2e6 = '\x01';
  }
  pUVar3 = (UnityEngine_LineRenderer_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  (__this->fields)._lineRenderer = pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lineRenderer);
  pUVar3 = (__this->fields)._lineRenderer;
  if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetVertexCount(pUVar3,0,(MethodInfo *)0x0);
    source = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)__this,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_AudioSource_string);
      System_Func_object__object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar1 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_UnityEngine_AudioSource_OrderBy_Aud);
    pSVar4 = (System_Collections_Generic_List_AudioSource__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_UnityEngine_AudioSource_ToList_AudioSource);
    (__this->fields)._audioSources = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._audioSources,pSVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2e7 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_06 = (UnityEngine_AudioSource_o *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              (((UnityEngine_Component_o *)(pUVar3 + 2))->fields).m_CachedPtr;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_06;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        goto label_0406b6d4;
      }
      if (__this_06 == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__Stop_4daa470(__this_06,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_0406b771:
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = pSVar7;
      __this_04.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_0406b771;
    }
label_0406b6d4:
    if (((UnityEngine_Component_o *)(pUVar3 + 2))->klass != (UnityEngine_Component_c *)0x0) {
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      start.fields.g = 0.0;
      start.fields.b = 0.0;
      end.fields.a = 0.0;
      end.fields.r = 0.0;
      end.fields.g = 0.0;
      end.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors
                ((UnityEngine_LineRenderer_o *)((UnityEngine_Component_o *)(pUVar3 + 2))->klass,start,end,
                 (MethodInfo *)0x0);
      __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_05,0,(MethodInfo *)0x0);
        return;
      }
    }
  } while( true );
}


// Weather.LightningParticle$$Disable
// il2cpp: void Weather_LightningParticle__Disable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x406b610

void Weather_LightningParticle__Disable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_06;
  long *plVar3;
  UnityEngine_Color_o start;
  undefined1 auVar4 [12];
  UnityEngine_Color_o end;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_AudioSource_o *__this_07;
  
  if (g_data_057ac2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2e7 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_07 = (UnityEngine_AudioSource_o *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    while( true ) {
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = pSVar5;
      __this_02.fields._current = (Il2CppObject *)__this_07;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = pSVar5;
        __this_03.fields._current = (Il2CppObject *)__this_07;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        goto label_0406b6d4;
      }
      if (__this_07 == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__Stop_4daa470(__this_07,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ != 1) {
label_0406b771:
      __this_05.fields._8_8_ = pIVar6;
      __this_05.fields._list = pSVar5;
      __this_05.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar4._0_8_);
    }
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = pSVar5;
    __this_04.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_0406b771;
    }
label_0406b6d4:
    __this_01 = (__this->fields)._lineRenderer;
    if (__this_01 != (UnityEngine_LineRenderer_o *)0x0) {
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      start.fields.g = 0.0;
      start.fields.b = 0.0;
      end.fields.a = 0.0;
      end.fields.r = 0.0;
      end.fields.g = 0.0;
      end.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors(__this_01,start,end,(MethodInfo *)0x0);
      __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_06,0,(MethodInfo *)0x0);
        return;
      }
    }
  } while( true );
}


// Weather.LightningParticle$$Enable
// il2cpp: void Weather_LightningParticle__Enable (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x406b7b0

void Weather_LightningParticle__Enable(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  int32_t index;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_06;
  Il2CppObject *__this_07;
  Weather_LightningParticle_o *__this_08;
  UnityEngine_AudioSource_o *__this_09;
  long *plVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  MethodInfo *method_00;
  Il2CppClass *__this_10;
  Il2CppObject *pIVar6;
  Weather_LightningParticle_o *__this_11;
  System_Collections_Generic_List_AudioSource__o *__this_12;
  undefined4 uVar7;
  UnityEngine_Color_o start;
  undefined1 auVar8 [12];
  UnityEngine_Color_o end;
  undefined1 in_stack_ffffffffffffff88 [12];
  
  uVar4 = SUB81(method,0);
  __this_00 = (__this->fields)._lineRenderer;
  __this_10 = (Il2CppClass *)0x0;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    start.fields.a = 0.0;
    start.fields.r = 0.0;
    start.fields.g = 0.0;
    start.fields.b = 0.0;
    end.fields.a = 0.0;
    end.fields.r = 0.0;
    end.fields.g = 0.0;
    end.fields.b = 0.0;
    UnityEngine_LineRenderer__SetColors(__this_00,start,end,(MethodInfo *)0x0);
    uVar4 = 0;
    __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_10 = (Il2CppClass *)__this;
    if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_06,1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
    g_data_057ac2ea = '\x01';
  }
  __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
  uVar5 = 0;
  pIVar6 = __this_07;
  System_Object___ctor(__this_07,(MethodInfo *)0x0);
  *(undefined4 *)&__this_07[1].klass = 0;
  if (__this_07 != (Il2CppObject *)0x0) {
    __this_07[2].klass = __this_10;
    il2cpp_runtime_helper_022b4080(__this_07 + 2,__this_10);
    *(undefined1 *)&__this_07[2].monitor = uVar4;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this_10,(System_Collections_IEnumerator_o *)__this_07,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
    g_data_057ac2ea = '\x01';
  }
  __this_08 = (Weather_LightningParticle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
  method_00 = (MethodInfo *)0x0;
  __this_11 = __this_08;
  System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_08->fields).m_CachedPtr = 0;
  if (__this_08 != (Weather_LightningParticle_o *)0x0) {
    *(Il2CppObject **)&(__this_08->fields).LightningColor.fields = pIVar6;
    il2cpp_runtime_helper_022b4080(&(__this_08->fields).LightningColor,pIVar6);
    *(undefined1 *)&(__this_08->fields).LightningColor.fields.b = uVar5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    g_data_057ac2e8 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this_11,0.3,method_00);
  index = UnityEngine_Random__Range_4df2410(0,2,(MethodInfo *)0x0);
  __this_12 = (__this_11->fields)._audioSources;
  if ((__this_12 != (System_Collections_Generic_List_AudioSource__o *)0x0) &&
     (__this_09 = (UnityEngine_AudioSource_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_12,index,MethodInfo_AudioSource_get_Item),
     __this_09 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_4daa2c0(__this_09,(MethodInfo *)0x0);
    return;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2eb = '\x01';
  }
  pIVar6 = (Il2CppObject *)0x0;
  __this_01 = *(System_Collections_Generic_List_object__o **)&__this_12[1].fields._size;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,__this_01,
               MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    __this_02.fields._version = uVar7;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_02.fields._current = pIVar6;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_03.fields._version = uVar7;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_03.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._version = uVar7;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._version = uVar7;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar8._0_8_);
}


// Weather.LightningParticle$$Strike
// il2cpp: void Weather_LightningParticle__Strike (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x406b800

void Weather_LightningParticle__Strike
               (Weather_LightningParticle_o *__this,bool_conflict sound,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t index;
  bool_conflict bVar2;
  Il2CppObject *__this_05;
  Weather_LightningParticle_o *__this_06;
  UnityEngine_AudioSource_o *__this_07;
  long *plVar3;
  undefined1 uVar4;
  MethodInfo *method_00;
  Il2CppObject *pIVar5;
  Weather_LightningParticle_o *__this_08;
  System_Collections_Generic_List_AudioSource__o *__this_09;
  undefined4 uVar6;
  undefined1 auVar7 [12];
  undefined1 in_stack_ffffffffffffff90 [12];
  
  if (g_data_057ac2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
    g_data_057ac2ea = '\x01';
  }
  __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
  uVar4 = 0;
  pIVar5 = __this_05;
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&__this_05[1].klass = 0;
  if (__this_05 != (Il2CppObject *)0x0) {
    __this_05[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_05 + 2,__this);
    *(char *)&__this_05[2].monitor = (char)sound;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_05,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
    g_data_057ac2ea = '\x01';
  }
  __this_06 = (Weather_LightningParticle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
  method_00 = (MethodInfo *)0x0;
  __this_08 = __this_06;
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_06->fields).m_CachedPtr = 0;
  if (__this_06 == (Weather_LightningParticle_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
      g_data_057ac2e8 = '\x01';
    }
    Weather_LightningParticle__SetVolume(__this_08,0.3,method_00);
    index = UnityEngine_Random__Range_4df2410(0,2,(MethodInfo *)0x0);
    __this_09 = (__this_08->fields)._audioSources;
    if ((__this_09 != (System_Collections_Generic_List_AudioSource__o *)0x0) &&
       (__this_07 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_09,index,MethodInfo_AudioSource_get_Item),
       __this_07 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_07,(MethodInfo *)0x0);
      return;
    }
    uVar6 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2eb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
      g_data_057ac2eb = '\x01';
    }
    pIVar5 = (Il2CppObject *)0x0;
    __this_00 = *(System_Collections_Generic_List_object__o **)&__this_09[1].fields._size;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_00,
                 MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
      __this_01.fields._version = uVar6;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff90._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff90._8_4_;
      __this_01.fields._current = pIVar5;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      if ((char)bVar2 == '\0') {
        __this_02.fields._version = uVar6;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff90._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff90._8_4_;
        __this_02.fields._current = pIVar5;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._version = uVar6;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff90._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff90._8_4_;
      __this_03.fields._current = pIVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._version = uVar6;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff90._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff90._8_4_;
    __this_04.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar7._0_8_);
  }
  *(Il2CppObject **)&(__this_06->fields).LightningColor.fields = pIVar5;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields).LightningColor,pIVar5);
  *(undefined1 *)&(__this_06->fields).LightningColor.fields.b = uVar4;
  return;
}


// Weather.LightningParticle$$PlayAudio
// il2cpp: void Weather_LightningParticle__PlayAudio (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x406b900

void Weather_LightningParticle__PlayAudio(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t index;
  bool_conflict bVar2;
  UnityEngine_AudioSource_o *__this_05;
  long *plVar3;
  System_Collections_Generic_List_AudioSource__o *__this_06;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined1 in_stack_ffffffffffffffc0 [12];
  Il2CppObject *pIVar6;
  
  if (g_data_057ac2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    g_data_057ac2e8 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this,0.3,method);
  index = UnityEngine_Random__Range_4df2410(0,2,(MethodInfo *)0x0);
  __this_06 = (__this->fields)._audioSources;
  if ((__this_06 != (System_Collections_Generic_List_AudioSource__o *)0x0) &&
     (__this_05 = (UnityEngine_AudioSource_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_06,index,MethodInfo_AudioSource_get_Item),
     __this_05 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_4daa2c0(__this_05,(MethodInfo *)0x0);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2eb = '\x01';
  }
  pIVar6 = (Il2CppObject *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&__this_06[1].fields._size;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    __this_01.fields._version = uVar4;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc0._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffffc0._8_4_;
    __this_01.fields._current = pIVar6;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd0);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = uVar4;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc0._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffffc0._8_4_;
      __this_02.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._version = uVar4;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc0._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffffc0._8_4_;
    __this_03.fields._current = pIVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd0);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version = uVar4;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc0._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffffc0._8_4_;
  __this_04.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd0);
  _Unwind_Resume(auVar5._0_8_);
}


// Weather.LightningParticle$$Setup
// il2cpp: void Weather_LightningParticle__Setup (Weather_LightningParticle_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t generation, const MethodInfo* method);
// 0x406bae0

void Weather_LightningParticle__Setup
               (Weather_LightningParticle_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
               int32_t generation,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *__this_00;
  int32_t index;
  int32_t iVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  UnityEngine_Vector3_o position;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,generation);
  __this_01 = (System_Collections_Generic_List_Vector3__o *)(ulong)(uint)generation;
  if (g_data_057ac2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LightningParticle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    g_data_057ac2e9 = '\x01';
  }
  if (*(int *)(TypeInfo_LightningParticle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = Weather_LightningParticle__GenerateLightningBoltPositions(start,end,generation,0.0,method_00);
  iVar2 = (int32_t)method_00;
  if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    pUVar1 = (__this->fields)._lineRenderer;
    __this_01 = (System_Collections_Generic_List_Vector3__o *)0x0;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      index = 0;
      UnityEngine_LineRenderer__SetVertexCount(pUVar1,(__this_00->fields)._size,(MethodInfo *)0x0);
      if (0 < (__this_00->fields)._size) {
        do {
          pUVar1 = (__this->fields)._lineRenderer;
          __this_01 = __this_00;
          iVar2 = index;
          position = System_Collections_Generic_List_Vector3___get_Item(__this_00,index,MethodInfo_Vector3_get_Item);
          if (pUVar1 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406bc0a;
          UnityEngine_LineRenderer__SetPosition(pUVar1,index,position,(MethodInfo *)0x0);
          index = index + 1;
        } while (index < (__this_00->fields)._size);
      }
      return;
    }
  }
label_0406bc0a:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(int32_t *)&(__this_01->fields)._items = iVar2;
  return;
}


// Weather.LightningParticle$$StrikeCoroutine
// il2cpp: System_Collections_IEnumerator_o* Weather_LightningParticle__StrikeCoroutine (Weather_LightningParticle_o* __this, bool sound, const MethodInfo* method);
// 0x406b880

System_Collections_IEnumerator_o *
Weather_LightningParticle__StrikeCoroutine
          (Weather_LightningParticle_o *__this,bool_conflict sound,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t index;
  bool_conflict bVar2;
  Weather_LightningParticle_o *__this_05;
  UnityEngine_AudioSource_o *__this_06;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  long *plVar3;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  MethodInfo *method_00;
  Weather_LightningParticle_o *__this_07;
  System_Collections_Generic_List_AudioSource__o *__this_08;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined1 in_stack_ffffffffffffffa8 [12];
  Il2CppObject *pIVar6;
  
  if (g_data_057ac2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
    g_data_057ac2ea = '\x01';
  }
  __this_05 = (Weather_LightningParticle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
  method_00 = (MethodInfo *)0x0;
  __this_07 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_05->fields).m_CachedPtr = 0;
  if (__this_05 != (Weather_LightningParticle_o *)0x0) {
    *(Weather_LightningParticle_o **)&(__this_05->fields).LightningColor.fields = __this;
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).LightningColor,__this);
    *(char *)&(__this_05->fields).LightningColor.fields.b = (char)sound;
    return (System_Collections_IEnumerator_o *)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    g_data_057ac2e8 = '\x01';
  }
  Weather_LightningParticle__SetVolume(__this_07,0.3,method_00);
  index = UnityEngine_Random__Range_4df2410(0,2,(MethodInfo *)0x0);
  __this_08 = (__this_07->fields)._audioSources;
  if ((__this_08 != (System_Collections_Generic_List_AudioSource__o *)0x0) &&
     (__this_06 = (UnityEngine_AudioSource_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_08,index,MethodInfo_AudioSource_get_Item),
     __this_06 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_4daa2c0(__this_06,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2eb = '\x01';
  }
  pIVar6 = (Il2CppObject *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&__this_08[1].fields._size;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    __this_01.fields._version = uVar4;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffffa8._8_4_;
    __this_01.fields._current = pIVar6;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = uVar4;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffffa8._8_4_;
      __this_02.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._version = uVar4;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffffa8._8_4_;
    __this_03.fields._current = pIVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return extraout_RAX_01;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version = uVar4;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffffa8._8_4_;
  __this_04.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// Weather.LightningParticle$$SetVolume
// il2cpp: void Weather_LightningParticle__SetVolume (Weather_LightningParticle_o* __this, float volume, const MethodInfo* method);
// 0x406b970

void Weather_LightningParticle__SetVolume(Weather_LightningParticle_o *__this,float volume,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  undefined1 in_stack_ffffffffffffffc8 [12];
  Il2CppObject *pIVar5;
  
  if (g_data_057ac2eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    g_data_057ac2eb = '\x01';
  }
  pIVar5 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._audioSources;
  if (__this_00 != (System_Collections_Generic_List_AudioSource__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_AudioSource_GetEnumerato);
    __this_01.fields._version = (int32_t)volume;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffffc8._8_4_;
    __this_01.fields._current = pIVar5;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = (int32_t)volume;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffffc8._8_4_;
      __this_02.fields._current = pIVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)volume;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffffc8._8_4_;
    __this_03.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version = (int32_t)volume;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_04.fields._current = pIVar5;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// Weather.LightningParticle$$.ctor
// il2cpp: void Weather_LightningParticle___ctor (Weather_LightningParticle_o* __this, const MethodInfo* method);
// 0x406bc30

void Weather_LightningParticle___ctor(Weather_LightningParticle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AudioSource__o *__this_00;
  
  if (g_data_057ac2ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AudioSource);
    g_data_057ac2ec = '\x01';
  }
  (__this->fields).LightningColor.fields.r = 228.0;
  (__this->fields).LightningColor.fields.g = 245.0;
  (__this->fields).LightningColor.fields.b = 255.0;
  (__this->fields).LightningColor.fields.a = 1.0;
  __this_00 = (System_Collections_Generic_List_AudioSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AudioSource);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_AudioSource);
  (__this->fields)._audioSources = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._audioSources);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.LightningParticle$$.cctor
// il2cpp: void Weather_LightningParticle___cctor (const MethodInfo* method);
// 0x406bcb0

void Weather_LightningParticle___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if (g_data_057ac2ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LightningParticle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    g_data_057ac2ed = '\x01';
  }
  __this = (System_Random_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
  System_Random___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_LightningParticle + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_LightningParticle + 0xb8),__this);
  return;
}


