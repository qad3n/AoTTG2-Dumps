// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotion.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x3b31850

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass10_0$$<Fade>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0___Fade_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0_o* __this, float value, const MethodInfo* method);
// 0x3b335c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0___Fade_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass10_0_o *__this,float value,
               MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector2_o offset_03;
  UnityEngine_Vector3_o value_00;
  long lVar8;
  long lVar9;
  intptr_t iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int32_t value_01;
  MethodInfo *pMVar13;
  UnityEngine_CanvasGroup_o *obj;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  CustomLogic_CustomLogicMathBuiltin_o *pCVar16;
  float fVar17;
  float fVar18;
  float value_02;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value_03;
  undefined8 uStack_138;
  UnityEngine_Material_o *pUStack_130;
  undefined8 uStack_c0;
  float fStack_90;
  float fStack_8c;
  
  obj = (__this->fields).group;
  if (obj != (UnityEngine_CanvasGroup_o *)0x0) {
    if (g_data_057b808a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_CanvasGroup,0);
      g_data_057b808a = '\x01';
    }
    lVar8 = MethodInfo_IntPtr_MarshalNullCheck_CanvasGroup;
    lVar9 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_CanvasGroup + 0x38);
    if (lVar9 == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_CanvasGroup);
      lVar9 = *(long *)(lVar8 + 0x38);
    }
    iVar10 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                       ((Il2CppObject *)obj,*(MethodInfo_26701D0 **)(lVar9 + 8));
    if (iVar10 == 0) {
      UnityEngine_Object_MarshalledUnityObject__ThrowNullExceptionObjectImpl
                ((Il2CppObject *)obj,(MethodInfo *)0x0);
    }
    if (g_data_057b8098 == (code *)0x0) {
      g_data_057b8098 = (code *)il2cpp_runtime_helper_022b28d0(
                                         "UnityEngine.CanvasGroup::set_alpha_Injected(System.IntPtr,System.Single)"
                                         );
    }
    (*g_data_057b8098)(value,iVar10);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(obj->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = SUB84(obj[1].klass,0);
    fVar20 = (float)((ulong)obj[1].klass >> 0x20);
    offset_03.fields.y = fVar17 * ((float)((ulong)obj[1].monitor >> 0x20) - fVar20) + fVar20;
    offset_03.fields.x = fVar17 * (SUB84(obj[1].monitor,0) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3a = '\x01';
  }
  pCVar16 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar17 = powf(pCVar16,1.0 - fVar17,3.0,method);
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pSVar1 = (pGVar15->fields).m_CancellationTokenSource;
    pUVar2 = (pGVar15->fields)._rect;
    fVar18 = SUB84(pSVar1,0);
    fVar20 = (float)((ulong)pSVar1 >> 0x20);
    offset_02.fields.y = (1.0 - fVar17) * ((float)((ulong)pUVar2 >> 0x20) - fVar20) + fVar20;
    offset_02.fields.x = (1.0 - fVar17) * (SUB84(pUVar2,0) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  pCVar16 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar17 = powf(pCVar16,1.0 - fVar17,3.0,method);
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    pSVar1 = (pGVar15->fields).m_CancellationTokenSource;
    pUVar2 = (pGVar15->fields)._rect;
    fVar18 = SUB84(pSVar1,0);
    fVar20 = (float)((ulong)pSVar1 >> 0x20);
    offset.fields.y = fVar17 * ((float)((ulong)pUVar2 >> 0x20) - fVar20) + fVar20;
    offset.fields.x = fVar17 * (SUB84(pUVar2,0) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset,(MethodInfo *)0x0);
    UVar6 = (pGVar15->fields)._layoutOffset.fields;
    if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
      fVar18 = (pGVar15->fields)._motionOffset.fields.x;
      fVar20 = 1.0;
      if (fVar17 <= 1.0) {
        fVar20 = fVar17;
      }
      fVar20 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar20);
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)UVar6,
                 ((pGVar15->fields)._motionOffset.fields.y - fVar18) * fVar20 + fVar18,(MethodInfo *)0x0);
      UVar6 = (pGVar15->fields)._basePosition.fields;
      if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
        fVar17 = (pGVar15->fields)._lastOffset.fields.x;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)UVar6,
                   fVar20 * (0.0 - fVar17) + fVar17,pMVar13);
        return;
      }
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar9 + 0x10);
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar14,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar9 + 0x20),(MethodInfo *)0x0)
    ;
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar9 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar9 + 0x38),0.0,pMVar13);
      return;
    }
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  fVar19 = fVar17 * 3.1415927;
  fVar18 = sinf(fVar19 * 18.0);
  fVar20 = cosf(fVar19 * 14.0);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    pSVar1 = (pGVar14->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar20 * fVar17 * 4.5 + (float)((ulong)pSVar1 >> 0x20);
    offset_00.fields.x = fVar18 * fVar17 * 10.0 + SUB84(pSVar1,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_00,(MethodInfo *)0x0);
    pUVar2 = (pGVar14->fields)._rect;
    UVar6 = (pGVar14->fields)._layoutOffset.fields;
    fVar18 = (pGVar14->fields)._motionOffset.fields.x;
    fVar20 = sinf(fVar19 * 8.0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar17 = fVar17 * fVar20 * 0.025 + 1.0;
      fStack_90 = UVar6.x;
      fStack_8c = UVar6.y;
      value_03.fields.x = fStack_90 * fVar17;
      value_03.fields.y = fStack_8c * fVar17;
      value_03.fields.z = fVar18 * fVar17;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar14,(UnityEngine_Vector2_o)(pGVar15->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar2 = (pGVar15->fields)._rect;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.x = (pGVar15->fields)._layoutOffset.fields.x;
      value_00.fields.y = (pGVar15->fields)._layoutOffset.fields.y;
      value_00.fields.z = (pGVar15->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  lVar9 = 0;
  uStack_c0 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_c0 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_c0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_c0 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_c0);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar14 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar9 + 0x10);
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = (float)*(undefined8 *)(lVar9 + 0x18);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
    offset_01.fields.y = fVar17 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar20) + fVar20;
    offset_01.fields.x = fVar17 * ((float)*(undefined8 *)(lVar9 + 0x20) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pUStack_130 = pUVar7;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_138 = uStack_138 & 0xffffffff;
  cVar4 = (char)(pGVar15->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar4 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar8 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar11 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar4 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar3 != '\0') {
      lVar8 = 0;
    }
    if (lVar8 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar11 = *(undefined4 *)(lVar8 + 0x2c);
  }
  uStack_138 = CONCAT44(uVar11,(undefined4)uStack_138);
  puVar12 = &TypeInfo_GisketchSurfaceMaterial;
  iVar10 = (pGVar15->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar10 == '\0') {
    if (cVar4 != '\0') {
      puVar12 = uStack_c0;
    }
    if (uStack_c0 != (undefined8 *)0x0) {
      puVar12 = uStack_c0;
    }
    if (puVar12 == (undefined8 *)0x0) {
      value_01 = 0;
      goto label_03b33cda;
    }
  }
  value_01 = *(int32_t *)((long)puVar12 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_138 + 4,value_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x3b31a00

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass13_0$$<MotionOffsetTween>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___MotionOffsetTween_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o* __this, float value, const MethodInfo* method);
// 0x3b335e0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___MotionOffsetTween_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  UnityEngine_RectTransform_o *pUVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector2_o offset_03;
  UnityEngine_Vector3_o value_00;
  intptr_t iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int32_t value_01;
  MethodInfo *pMVar13;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  CustomLogic_CustomLogicMathBuiltin_o *pCVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float value_02;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o value_03;
  undefined8 uStack_130;
  UnityEngine_Material_o *pUStack_128;
  undefined8 uStack_b8;
  float fStack_88;
  float fStack_84;
  
  pGVar14 = (__this->fields).layoutOffset;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar18 = UVar1.x;
    fVar19 = UVar1.y;
    offset_03.fields.y = value * (UVar2.y - fVar19) + fVar19;
    offset_03.fields.x = value * (UVar2.x - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3a = '\x01';
  }
  pCVar16 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar18 = powf(pCVar16,1.0 - fVar18,3.0,method);
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pSVar3 = (pGVar15->fields).m_CancellationTokenSource;
    pUVar4 = (pGVar15->fields)._rect;
    fVar19 = SUB84(pSVar3,0);
    fVar21 = (float)((ulong)pSVar3 >> 0x20);
    offset_02.fields.y = (1.0 - fVar18) * ((float)((ulong)pUVar4 >> 0x20) - fVar21) + fVar21;
    offset_02.fields.x = (1.0 - fVar18) * (SUB84(pUVar4,0) - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  pCVar16 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar18 = powf(pCVar16,1.0 - fVar18,3.0,method);
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = 1.0 - fVar18;
    pSVar3 = (pGVar15->fields).m_CancellationTokenSource;
    pUVar4 = (pGVar15->fields)._rect;
    fVar19 = SUB84(pSVar3,0);
    fVar21 = (float)((ulong)pSVar3 >> 0x20);
    offset.fields.y = fVar18 * ((float)((ulong)pUVar4 >> 0x20) - fVar21) + fVar21;
    offset.fields.x = fVar18 * (SUB84(pUVar4,0) - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset,(MethodInfo *)0x0);
    UVar1 = (pGVar15->fields)._layoutOffset.fields;
    if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
      fVar19 = (pGVar15->fields)._motionOffset.fields.x;
      fVar21 = 1.0;
      if (fVar18 <= 1.0) {
        fVar21 = fVar18;
      }
      fVar21 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar21);
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)UVar1,
                 ((pGVar15->fields)._motionOffset.fields.y - fVar19) * fVar21 + fVar19,(MethodInfo *)0x0);
      UVar1 = (pGVar15->fields)._basePosition.fields;
      if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
        fVar18 = (pGVar15->fields)._lastOffset.fields.x;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)UVar1,
                   fVar21 * (0.0 - fVar18) + fVar18,pMVar13);
        return;
      }
      return;
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar17 + 0x10);
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar14,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar17 + 0x20),(MethodInfo *)0x0
              );
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar17 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar17 + 0x38),0.0,pMVar13);
      return;
    }
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  fVar20 = fVar18 * 3.1415927;
  fVar19 = sinf(fVar20 * 18.0);
  fVar21 = cosf(fVar20 * 14.0);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = 1.0 - fVar18;
    pSVar3 = (pGVar14->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar21 * fVar18 * 4.5 + (float)((ulong)pSVar3 >> 0x20);
    offset_00.fields.x = fVar19 * fVar18 * 10.0 + SUB84(pSVar3,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_00,(MethodInfo *)0x0);
    pUVar4 = (pGVar14->fields)._rect;
    UVar1 = (pGVar14->fields)._layoutOffset.fields;
    fVar19 = (pGVar14->fields)._motionOffset.fields.x;
    fVar21 = sinf(fVar20 * 8.0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      fVar18 = fVar18 * fVar21 * 0.025 + 1.0;
      fStack_88 = UVar1.x;
      fStack_84 = UVar1.y;
      value_03.fields.x = fStack_88 * fVar18;
      value_03.fields.y = fStack_84 * fVar18;
      value_03.fields.z = fVar19 * fVar18;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,value_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar14,(UnityEngine_Vector2_o)(pGVar15->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar4 = (pGVar15->fields)._rect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.x = (pGVar15->fields)._layoutOffset.fields.x;
      value_00.fields.y = (pGVar15->fields)._layoutOffset.fields.y;
      value_00.fields.z = (pGVar15->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  lVar17 = 0;
  uStack_b8 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_b8 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_b8);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_b8 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_b8);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar14 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar17 + 0x10);
  if (pGVar14 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar19 = (float)*(undefined8 *)(lVar17 + 0x18);
    fVar21 = (float)((ulong)*(undefined8 *)(lVar17 + 0x18) >> 0x20);
    offset_01.fields.y = fVar18 * ((float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20) - fVar21) + fVar21;
    offset_01.fields.x = fVar18 * ((float)*(undefined8 *)(lVar17 + 0x20) - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar14,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar14->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar14->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_130 = il2cpp_runtime_helper_022b2c90();
  pUStack_128 = pUVar8;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_130 = uStack_130 & 0xffffffff;
  cVar6 = (char)(pGVar15->fields).m_CachedPtr;
  cVar5 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar6 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar10 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar11 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar6 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar5 != '\0') {
      lVar10 = 0;
    }
    if (lVar10 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar11 = *(undefined4 *)(lVar10 + 0x2c);
  }
  uStack_130 = CONCAT44(uVar11,(undefined4)uStack_130);
  puVar12 = &TypeInfo_GisketchSurfaceMaterial;
  iVar9 = (pGVar15->fields).m_CachedPtr;
  cVar6 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar7 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar7 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar9 == '\0') {
    if (cVar6 != '\0') {
      puVar12 = uStack_b8;
    }
    if (uStack_b8 != (undefined8 *)0x0) {
      puVar12 = uStack_b8;
    }
    if (puVar12 == (undefined8 *)0x0) {
      value_01 = 0;
      goto label_03b33cda;
    }
  }
  value_01 = *(int32_t *)((long)puVar12 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_130 + 4,value_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass13_0$$<MotionOffsetTween>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___MotionOffsetTween_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x3b33620

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0___MotionOffsetTween_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector3_o value;
  intptr_t iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  int32_t value_00;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar13;
  CustomLogic_CustomLogicMathBuiltin_o *pCVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float value_01;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value_02;
  undefined8 uStack_128;
  UnityEngine_Material_o *pUStack_120;
  undefined8 uStack_b0;
  float fStack_80;
  float fStack_7c;
  
  pGVar13 = (__this->fields).layoutOffset;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3a = '\x01';
  }
  pCVar14 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar17 = powf(pCVar14,1.0 - fVar17,3.0,method);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pSVar1 = (pGVar13->fields).m_CancellationTokenSource;
    pUVar2 = (pGVar13->fields)._rect;
    fVar18 = SUB84(pSVar1,0);
    fVar20 = (float)((ulong)pSVar1 >> 0x20);
    offset_02.fields.y = (1.0 - fVar17) * ((float)((ulong)pUVar2 >> 0x20) - fVar20) + fVar20;
    offset_02.fields.x = (1.0 - fVar17) * (SUB84(pUVar2,0) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(pGVar15->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  pCVar14 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar17 = powf(pCVar14,1.0 - fVar17,3.0,method);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    pSVar1 = (pGVar13->fields).m_CancellationTokenSource;
    pUVar2 = (pGVar13->fields)._rect;
    fVar18 = SUB84(pSVar1,0);
    fVar20 = (float)((ulong)pSVar1 >> 0x20);
    offset.fields.y = fVar17 * ((float)((ulong)pUVar2 >> 0x20) - fVar20) + fVar20;
    offset.fields.x = fVar17 * (SUB84(pUVar2,0) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset,(MethodInfo *)0x0);
    UVar6 = (pGVar13->fields)._layoutOffset.fields;
    if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
      fVar18 = (pGVar13->fields)._motionOffset.fields.x;
      fVar20 = 1.0;
      if (fVar17 <= 1.0) {
        fVar20 = fVar17;
      }
      fVar20 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar20);
      pMVar12 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)UVar6,
                 ((pGVar13->fields)._motionOffset.fields.y - fVar18) * fVar20 + fVar18,(MethodInfo *)0x0);
      UVar6 = (pGVar13->fields)._basePosition.fields;
      if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
        fVar17 = (pGVar13->fields)._lastOffset.fields.x;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)UVar6,
                   fVar20 * (0.0 - fVar17) + fVar17,pMVar12);
        return;
      }
      return;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar16 + 0x10);
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar16 + 0x20),(MethodInfo *)0x0
              );
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar16 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar16 + 0x38),0.0,pMVar12);
      return;
    }
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  fVar19 = fVar17 * 3.1415927;
  fVar18 = sinf(fVar19 * 18.0);
  fVar20 = cosf(fVar19 * 14.0);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    pSVar1 = (pGVar13->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar20 * fVar17 * 4.5 + (float)((ulong)pSVar1 >> 0x20);
    offset_00.fields.x = fVar18 * fVar17 * 10.0 + SUB84(pSVar1,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_00,(MethodInfo *)0x0);
    pUVar2 = (pGVar13->fields)._rect;
    UVar6 = (pGVar13->fields)._layoutOffset.fields;
    fVar18 = (pGVar13->fields)._motionOffset.fields.x;
    fVar20 = sinf(fVar19 * 8.0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar17 = fVar17 * fVar20 * 0.025 + 1.0;
      fStack_80 = UVar6.x;
      fStack_7c = UVar6.y;
      value_02.fields.x = fStack_80 * fVar17;
      value_02.fields.y = fStack_7c * fVar17;
      value_02.fields.z = fVar18 * fVar17;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(pGVar15->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar2 = (pGVar15->fields)._rect;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.x = (pGVar15->fields)._layoutOffset.fields.x;
      value.fields.y = (pGVar15->fields)._layoutOffset.fields.y;
      value.fields.z = (pGVar15->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  lVar16 = 0;
  uStack_b0 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_b0 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_b0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar16 + 0x10);
  lVar16 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_b0 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_b0);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar16 + 0x10);
  lVar16 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar16 + 0x10);
  lVar16 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar13 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar16 + 0x10);
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = (float)*(undefined8 *)(lVar16 + 0x18);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
    offset_01.fields.y = fVar17 * ((float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20) - fVar20) + fVar20;
    offset_01.fields.x = fVar17 * ((float)*(undefined8 *)(lVar16 + 0x20) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar13,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar13->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  pUStack_120 = pUVar7;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_128 = uStack_128 & 0xffffffff;
  cVar4 = (char)(pGVar15->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar4 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar9 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar10 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar4 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar3 != '\0') {
      lVar9 = 0;
    }
    if (lVar9 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar10 = *(undefined4 *)(lVar9 + 0x2c);
  }
  uStack_128 = CONCAT44(uVar10,(undefined4)uStack_128);
  puVar11 = &TypeInfo_GisketchSurfaceMaterial;
  iVar8 = (pGVar15->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar8 == '\0') {
    if (cVar4 != '\0') {
      puVar11 = uStack_b0;
    }
    if (uStack_b0 != (undefined8 *)0x0) {
      puVar11 = uStack_b0;
    }
    if (puVar11 == (undefined8 *)0x0) {
      value_00 = 0;
      goto label_03b33cda;
    }
  }
  value_00 = *(int32_t *)((long)puVar11 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_128 + 4,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3b32e40

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass25_0$$<MainMenuPanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___MainMenuPanel_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o* __this, float value, const MethodInfo* method);
// 0x3b33640

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___MainMenuPanel_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  UnityEngine_RectTransform_o *pUVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector3_o value_00;
  intptr_t iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int32_t value_01;
  MethodInfo *pMVar13;
  CustomLogic_CustomLogicMathBuiltin_o *pCVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float value_02;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o value_03;
  undefined8 uStack_120;
  UnityEngine_Material_o *pUStack_118;
  undefined8 uStack_a8;
  float fStack_78;
  float fStack_74;
  
  if (g_data_057a9c3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3a = '\x01';
  }
  pCVar14 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar18 = powf(pCVar14,1.0 - value,3.0,method);
  pGVar15 = (__this->fields).layoutOffset;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar19 = UVar1.x;
    fVar21 = UVar1.y;
    offset_02.fields.y = (1.0 - fVar18) * (UVar2.y - fVar21) + fVar21;
    offset_02.fields.x = (1.0 - fVar18) * (UVar2.x - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar16 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar16,(UnityEngine_Vector2_o)(pGVar15->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  pCVar14 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar18 = powf(pCVar14,1.0 - fVar18,3.0,method);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar16->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = 1.0 - fVar18;
    pSVar3 = (pGVar16->fields).m_CancellationTokenSource;
    pUVar4 = (pGVar16->fields)._rect;
    fVar19 = SUB84(pSVar3,0);
    fVar21 = (float)((ulong)pSVar3 >> 0x20);
    offset.fields.y = fVar18 * ((float)((ulong)pUVar4 >> 0x20) - fVar21) + fVar21;
    offset.fields.x = fVar18 * (SUB84(pUVar4,0) - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset,(MethodInfo *)0x0);
    UVar1 = (pGVar16->fields)._layoutOffset.fields;
    if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
      fVar19 = (pGVar16->fields)._motionOffset.fields.x;
      fVar21 = 1.0;
      if (fVar18 <= 1.0) {
        fVar21 = fVar18;
      }
      fVar21 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar21);
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)UVar1,
                 ((pGVar16->fields)._motionOffset.fields.y - fVar19) * fVar21 + fVar19,(MethodInfo *)0x0);
      UVar1 = (pGVar16->fields)._basePosition.fields;
      if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
        fVar18 = (pGVar16->fields)._lastOffset.fields.x;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)UVar1,
                   fVar21 * (0.0 - fVar18) + fVar18,pMVar13);
        return;
      }
      return;
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar17 + 0x10);
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar17 + 0x20),(MethodInfo *)0x0
              );
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar17 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar17 + 0x38),0.0,pMVar13);
      return;
    }
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  fVar20 = fVar18 * 3.1415927;
  fVar19 = sinf(fVar20 * 18.0);
  fVar21 = cosf(fVar20 * 14.0);
  pGVar16 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar16 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = 1.0 - fVar18;
    pSVar3 = (pGVar15->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar21 * fVar18 * 4.5 + (float)((ulong)pSVar3 >> 0x20);
    offset_00.fields.x = fVar19 * fVar18 * 10.0 + SUB84(pSVar3,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar16,offset_00,(MethodInfo *)0x0);
    pUVar4 = (pGVar15->fields)._rect;
    UVar1 = (pGVar15->fields)._layoutOffset.fields;
    fVar19 = (pGVar15->fields)._motionOffset.fields.x;
    fVar21 = sinf(fVar20 * 8.0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      fVar18 = fVar18 * fVar21 * 0.025 + 1.0;
      fStack_78 = UVar1.x;
      fStack_74 = UVar1.y;
      value_03.fields.x = fStack_78 * fVar18;
      value_03.fields.y = fStack_74 * fVar18;
      value_03.fields.z = fVar19 * fVar18;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,value_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar16->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar16->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar4 = (pGVar16->fields)._rect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.x = (pGVar16->fields)._layoutOffset.fields.x;
      value_00.fields.y = (pGVar16->fields)._layoutOffset.fields.y;
      value_00.fields.z = (pGVar16->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  lVar17 = 0;
  uStack_a8 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_a8 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_a8);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_a8 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_a8);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar17 + 0x10);
  lVar17 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar15 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar17 + 0x10);
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar19 = (float)*(undefined8 *)(lVar17 + 0x18);
    fVar21 = (float)((ulong)*(undefined8 *)(lVar17 + 0x18) >> 0x20);
    offset_01.fields.y = fVar18 * ((float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20) - fVar21) + fVar21;
    offset_01.fields.x = fVar18 * ((float)*(undefined8 *)(lVar17 + 0x20) - fVar19) + fVar19;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar16 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar16,(UnityEngine_Vector2_o)(pGVar15->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pUStack_118 = pUVar8;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_120 = uStack_120 & 0xffffffff;
  cVar6 = (char)(pGVar16->fields).m_CachedPtr;
  cVar5 = *(char *)((long)&(pGVar16->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar6 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar10 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar11 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar6 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar5 != '\0') {
      lVar10 = 0;
    }
    if (lVar10 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar11 = *(undefined4 *)(lVar10 + 0x2c);
  }
  uStack_120 = CONCAT44(uVar11,(undefined4)uStack_120);
  puVar12 = &TypeInfo_GisketchSurfaceMaterial;
  iVar9 = (pGVar16->fields).m_CachedPtr;
  cVar6 = *(char *)((long)&(pGVar16->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar7 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar7 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar9 == '\0') {
    if (cVar6 != '\0') {
      puVar12 = uStack_a8;
    }
    if (uStack_a8 != (undefined8 *)0x0) {
      puVar12 = uStack_a8;
    }
    if (puVar12 == (undefined8 *)0x0) {
      value_01 = 0;
      goto label_03b33cda;
    }
  }
  value_01 = *(int32_t *)((long)puVar12 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_120 + 4,value_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass25_0$$<MainMenuPanel>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___MainMenuPanel_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3b336f0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0___MainMenuPanel_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector3_o value;
  intptr_t iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  int32_t value_00;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar13;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  long lVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  float fVar16;
  float fVar17;
  float value_01;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o value_02;
  undefined8 uStack_108;
  UnityEngine_Material_o *pUStack_100;
  undefined8 uStack_90;
  float fStack_60;
  float fStack_5c;
  
  pGVar13 = (__this->fields).layoutOffset;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  __this_00 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar16 = powf(__this_00,1.0 - fVar16,3.0,method);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar16 = 1.0 - fVar16;
    pSVar1 = (pGVar13->fields).m_CancellationTokenSource;
    pUVar2 = (pGVar13->fields)._rect;
    fVar17 = SUB84(pSVar1,0);
    fVar19 = (float)((ulong)pSVar1 >> 0x20);
    offset.fields.y = fVar16 * ((float)((ulong)pUVar2 >> 0x20) - fVar19) + fVar19;
    offset.fields.x = fVar16 * (SUB84(pUVar2,0) - fVar17) + fVar17;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset,(MethodInfo *)0x0);
    UVar6 = (pGVar13->fields)._layoutOffset.fields;
    if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
      fVar17 = (pGVar13->fields)._motionOffset.fields.x;
      fVar19 = 1.0;
      if (fVar16 <= 1.0) {
        fVar19 = fVar16;
      }
      fVar19 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar19);
      pMVar12 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)UVar6,
                 ((pGVar13->fields)._motionOffset.fields.y - fVar17) * fVar19 + fVar17,(MethodInfo *)0x0);
      UVar6 = (pGVar13->fields)._basePosition.fields;
      if (UVar6 != (UnityEngine_Vector2_Fields)0x0) {
        fVar16 = (pGVar13->fields)._lastOffset.fields.x;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)UVar6,
                   fVar19 * (0.0 - fVar16) + fVar16,pMVar12);
        return;
      }
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar14 + 0x20),(MethodInfo *)0x0
              );
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar14 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar14 + 0x38),0.0,pMVar12);
      return;
    }
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  fVar18 = fVar16 * 3.1415927;
  fVar17 = sinf(fVar18 * 18.0);
  fVar19 = cosf(fVar18 * 14.0);
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar16 = 1.0 - fVar16;
    pSVar1 = (pGVar13->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar19 * fVar16 * 4.5 + (float)((ulong)pSVar1 >> 0x20);
    offset_00.fields.x = fVar17 * fVar16 * 10.0 + SUB84(pSVar1,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_00,(MethodInfo *)0x0);
    pUVar2 = (pGVar13->fields)._rect;
    UVar6 = (pGVar13->fields)._layoutOffset.fields;
    fVar17 = (pGVar13->fields)._motionOffset.fields.x;
    fVar19 = sinf(fVar18 * 8.0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar16 = fVar16 * fVar19 * 0.025 + 1.0;
      fStack_60 = UVar6.x;
      fStack_5c = UVar6.y;
      value_02.fields.x = fStack_60 * fVar16;
      value_02.fields.y = fStack_5c * fVar16;
      value_02.fields.z = fVar17 * fVar16;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(pGVar15->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar2 = (pGVar15->fields)._rect;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.x = (pGVar15->fields)._layoutOffset.fields.x;
      value.fields.y = (pGVar15->fields)._layoutOffset.fields.y;
      value.fields.z = (pGVar15->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  lVar14 = 0;
  uStack_90 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_90 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_90);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_90 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_90);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar13 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = (float)*(undefined8 *)(lVar14 + 0x18);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    offset_01.fields.y = fVar16 * ((float)((ulong)*(undefined8 *)(lVar14 + 0x20) >> 0x20) - fVar19) + fVar19;
    offset_01.fields.x = fVar16 * ((float)*(undefined8 *)(lVar14 + 0x20) - fVar17) + fVar17;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar13,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar13->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pUStack_100 = pUVar7;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_108 = uStack_108 & 0xffffffff;
  cVar4 = (char)(pGVar15->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar4 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar9 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar10 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar4 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar3 != '\0') {
      lVar9 = 0;
    }
    if (lVar9 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar10 = *(undefined4 *)(lVar9 + 0x2c);
  }
  uStack_108 = CONCAT44(uVar10,(undefined4)uStack_108);
  puVar11 = &TypeInfo_GisketchSurfaceMaterial;
  iVar8 = (pGVar15->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar5 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar8 == '\0') {
    if (cVar4 != '\0') {
      puVar11 = uStack_90;
    }
    if (uStack_90 != (undefined8 *)0x0) {
      puVar11 = uStack_90;
    }
    if (puVar11 == (undefined8 *)0x0) {
      value_00 = 0;
      goto label_03b33cda;
    }
  }
  value_00 = *(int32_t *)((long)puVar11 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_108 + 4,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3b32e50

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MainMenuLogo>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MainMenuLogo_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, float value, const MethodInfo* method);
// 0x3b33710

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MainMenuLogo_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  UnityEngine_CanvasGroup_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_01;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector3_o value_00;
  intptr_t iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int32_t value_01;
  MethodInfo *pMVar13;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  long lVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar16;
  float fVar17;
  float fVar18;
  float value_02;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value_03;
  undefined8 uStack_100;
  UnityEngine_Material_o *pUStack_f8;
  undefined8 uStack_88;
  float fStack_58;
  float fStack_54;
  
  if (g_data_057a9c3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3b = '\x01';
  }
  __this_02 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar17 = powf(__this_02,1.0 - value,3.0,method);
  pGVar15 = (__this->fields).layoutOffset;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar18 = UVar1.x;
    fVar20 = UVar1.y;
    offset.fields.y = fVar17 * (UVar2.y - fVar20) + fVar20;
    offset.fields.x = fVar17 * (UVar2.x - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset,(MethodInfo *)0x0);
    __this_00 = (__this->fields).group;
    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar18 = (__this->fields).startAlpha;
      fVar20 = 1.0;
      if (fVar17 <= 1.0) {
        fVar20 = fVar17;
      }
      fVar20 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar20);
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                (__this_00,((__this->fields).endAlpha - fVar18) * fVar20 + fVar18,(MethodInfo *)0x0);
      __this_01 = (__this->fields).blur;
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
        fVar17 = (__this->fields).startBlur;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  (__this_01,fVar20 * (0.0 - fVar17) + fVar17,pMVar13);
        return;
      }
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(lVar14 + 0x20),(MethodInfo *)0x0
              );
    if (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar14 + 0x38) !=
        (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (*(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **)(lVar14 + 0x38),0.0,pMVar13);
      return;
    }
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  fVar19 = fVar17 * 3.1415927;
  fVar18 = sinf(fVar19 * 18.0);
  fVar20 = cosf(fVar19 * 14.0);
  pGVar16 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar16 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = 1.0 - fVar17;
    pSVar3 = (pGVar15->fields).m_CancellationTokenSource;
    offset_00.fields.y = fVar20 * fVar17 * 4.5 + (float)((ulong)pSVar3 >> 0x20);
    offset_00.fields.x = fVar18 * fVar17 * 10.0 + SUB84(pSVar3,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar16,offset_00,(MethodInfo *)0x0);
    pUVar7 = (pGVar15->fields)._rect;
    UVar1 = (pGVar15->fields)._layoutOffset.fields;
    fVar18 = (pGVar15->fields)._motionOffset.fields.x;
    fVar20 = sinf(fVar19 * 8.0);
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
      fVar17 = fVar17 * fVar20 * 0.025 + 1.0;
      fStack_58 = UVar1.x;
      fStack_54 = UVar1.y;
      value_03.fields.x = fStack_58 * fVar17;
      value_03.fields.y = fStack_54 * fVar17;
      value_03.fields.z = fVar18 * fVar17;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar7,value_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar16->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar16->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar7 = (pGVar16->fields)._rect;
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.x = (pGVar16->fields)._layoutOffset.fields.x;
      value_00.fields.y = (pGVar16->fields)._layoutOffset.fields.y;
      value_00.fields.z = (pGVar16->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar7,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  lVar14 = 0;
  uStack_88 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_88 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_88);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_88 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_88);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar15 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar18 = (float)*(undefined8 *)(lVar14 + 0x18);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    offset_01.fields.y = fVar17 * ((float)((ulong)*(undefined8 *)(lVar14 + 0x20) >> 0x20) - fVar20) + fVar20;
    offset_01.fields.x = fVar17 * ((float)*(undefined8 *)(lVar14 + 0x20) - fVar18) + fVar18;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar15,offset_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar15->fields).m_CachedPtr;
  if (pGVar16 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar16,(UnityEngine_Vector2_o)(pGVar15->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  pUStack_f8 = pUVar8;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_100 = uStack_100 & 0xffffffff;
  cVar5 = (char)(pGVar16->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar16->fields).m_CachedPtr + 1);
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar5 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar10 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar11 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar5 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar4 != '\0') {
      lVar10 = 0;
    }
    if (lVar10 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar11 = *(undefined4 *)(lVar10 + 0x2c);
  }
  uStack_100 = CONCAT44(uVar11,(undefined4)uStack_100);
  puVar12 = &TypeInfo_GisketchSurfaceMaterial;
  iVar9 = (pGVar16->fields).m_CachedPtr;
  cVar5 = *(char *)((long)&(pGVar16->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar6 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar6 = TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar9 == '\0') {
    if (cVar5 != '\0') {
      puVar12 = uStack_88;
    }
    if (uStack_88 != (undefined8 *)0x0) {
      puVar12 = uStack_88;
    }
    if (puVar12 == (undefined8 *)0x0) {
      value_01 = 0;
      goto label_03b33cda;
    }
  }
  value_01 = *(int32_t *)((long)puVar12 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_100 + 4,value_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MainMenuLogo>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MainMenuLogo_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3b33840

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MainMenuLogo_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  UnityEngine_Vector2_Fields UVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector3_o value;
  intptr_t iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  int32_t value_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar12;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float value_01;
  float fVar18;
  UnityEngine_Vector3_o value_02;
  undefined8 uStack_e8;
  UnityEngine_Material_o *pUStack_e0;
  undefined8 uStack_70;
  float local_40;
  float fStack_3c;
  
  pGVar12 = (__this->fields).layoutOffset;
  if (pGVar12 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar12,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    __this_00 = (__this->fields).blur;
    if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,0.0,method_00);
      return;
    }
    return;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  fVar18 = fVar15 * 3.1415927;
  fVar16 = sinf(fVar18 * 18.0);
  fVar17 = cosf(fVar18 * 14.0);
  pGVar13 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar12->fields).m_CachedPtr;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar15 = 1.0 - fVar15;
    pSVar1 = (pGVar12->fields).m_CancellationTokenSource;
    offset.fields.y = fVar17 * fVar15 * 4.5 + (float)((ulong)pSVar1 >> 0x20);
    offset.fields.x = fVar16 * fVar15 * 10.0 + SUB84(pSVar1,0);
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar13,offset,(MethodInfo *)0x0);
    pUVar6 = (pGVar12->fields)._rect;
    UVar2 = (pGVar12->fields)._layoutOffset.fields;
    fVar16 = (pGVar12->fields)._motionOffset.fields.x;
    fVar17 = sinf(fVar18 * 8.0);
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      fVar15 = fVar15 * fVar17 * 0.025 + 1.0;
      local_40 = UVar2.x;
      fStack_3c = UVar2.y;
      value_02.fields.x = local_40 * fVar15;
      value_02.fields.y = fStack_3c * fVar15;
      value_02.fields.z = fVar16 * fVar15;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar12 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar12 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar12,(UnityEngine_Vector2_o)(pGVar13->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar6 = (pGVar13->fields)._rect;
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.x = (pGVar13->fields)._layoutOffset.fields.x;
      value.fields.y = (pGVar13->fields)._layoutOffset.fields.y;
      value.fields.z = (pGVar13->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,value,(MethodInfo *)0x0);
      return;
    }
  }
  lVar14 = 0;
  uStack_70 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_70 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_70);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_70 = (undefined8 *)CONCAT44(value_01,(undefined4)uStack_70);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar7 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar7,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar12 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar12 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar16 = (float)*(undefined8 *)(lVar14 + 0x18);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    offset_00.fields.y = fVar15 * ((float)((ulong)*(undefined8 *)(lVar14 + 0x20) >> 0x20) - fVar17) + fVar17;
    offset_00.fields.x = fVar15 * ((float)*(undefined8 *)(lVar14 + 0x20) - fVar16) + fVar16;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar12,offset_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar12->fields).m_CachedPtr;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar13,(UnityEngine_Vector2_o)(pGVar12->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_e8 = il2cpp_runtime_helper_022b2c90();
  pUStack_e0 = pUVar7;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_e8 = uStack_e8 & 0xffffffff;
  cVar4 = (char)(pGVar13->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(pGVar13->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar4 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar9 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar10 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar4 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar3 != '\0') {
      lVar9 = 0;
    }
    if (lVar9 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar10 = *(undefined4 *)(lVar9 + 0x2c);
  }
  uStack_e8 = CONCAT44(uVar10,(undefined4)uStack_e8);
  puVar11 = &TypeInfo_GisketchSurfaceMaterial;
  iVar8 = (pGVar13->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar13->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar5 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar8 == '\0') {
    if (cVar4 != '\0') {
      puVar11 = uStack_70;
    }
    if (uStack_70 != (undefined8 *)0x0) {
      puVar11 = uStack_70;
    }
    if (puVar11 == (undefined8 *)0x0) {
      value_00 = 0;
      goto label_03b33cda;
    }
  }
  value_00 = *(int32_t *)((long)puVar11 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_e8 + 4,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x3b32fd0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass27_0$$<LogoImpact>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___LogoImpact_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o* __this, float value, const MethodInfo* method);
// 0x3b33880

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___LogoImpact_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o *__this,float value,
               MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector3_o value_00;
  intptr_t iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int32_t value_01;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar13;
  long lVar14;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar15;
  float fVar16;
  float fVar17;
  float value_02;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o value_03;
  undefined8 uStack_e0;
  UnityEngine_Material_o *pUStack_d8;
  undefined8 uStack_68;
  float fStack_38;
  float fStack_34;
  
  fVar18 = value * 3.1415927;
  fVar16 = sinf(fVar18 * 18.0);
  fVar17 = cosf(fVar18 * 14.0);
  pGVar13 = (__this->fields).layoutOffset;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar19 = 1.0 - value;
    UVar2 = (__this->fields).origin.fields;
    offset.fields.y = fVar17 * fVar19 * 4.5 + UVar2.y;
    offset.fields.x = fVar16 * fVar19 * 10.0 + UVar2.x;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar13,offset,(MethodInfo *)0x0);
    pUVar7 = (__this->fields).rect;
    uVar1 = (__this->fields).scale.fields.x;
    uVar3 = (__this->fields).scale.fields.y;
    fVar16 = (__this->fields).scale.fields.z;
    fVar17 = sinf(fVar18 * 8.0);
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
      fVar17 = fVar19 * fVar17 * 0.025 + 1.0;
      value_03.fields.x = (float)uVar1 * fVar17;
      value_03.fields.y = (float)uVar3 * fVar17;
      value_03.fields.z = fVar16 * fVar17;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar7,value_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar13->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    pUVar7 = (pGVar13->fields)._rect;
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.x = (pGVar13->fields)._layoutOffset.fields.x;
      value_00.fields.y = (pGVar13->fields)._layoutOffset.fields.y;
      value_00.fields.z = (pGVar13->fields)._motionOffset.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar7,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  lVar14 = 0;
  uStack_68 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    uStack_68 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_68);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_68 = (undefined8 *)CONCAT44(value_02,(undefined4)uStack_68);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar8 = *(UnityEngine_Material_o **)(lVar14 + 0x10);
  lVar14 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar8,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar13 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar14 + 0x10);
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar17 = (float)*(undefined8 *)(lVar14 + 0x18);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    offset_00.fields.y = fVar16 * ((float)((ulong)*(undefined8 *)(lVar14 + 0x20) >> 0x20) - fVar18) + fVar18;
    offset_00.fields.x = fVar16 * ((float)*(undefined8 *)(lVar14 + 0x20) - fVar17) + fVar17;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar13,offset_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar13->fields).m_CachedPtr;
  if (pGVar15 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar15,(UnityEngine_Vector2_o)(pGVar13->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pUStack_d8 = pUVar8;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_e0 = uStack_e0 & 0xffffffff;
  cVar5 = (char)(pGVar15->fields).m_CachedPtr;
  cVar4 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar5 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar10 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar11 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar5 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar4 != '\0') {
      lVar10 = 0;
    }
    if (lVar10 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar11 = *(undefined4 *)(lVar10 + 0x2c);
  }
  uStack_e0 = CONCAT44(uVar11,(undefined4)uStack_e0);
  puVar12 = &TypeInfo_GisketchSurfaceMaterial;
  iVar9 = (pGVar15->fields).m_CachedPtr;
  cVar5 = *(char *)((long)&(pGVar15->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar6 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar9 == '\0') {
    if (cVar5 != '\0') {
      puVar12 = uStack_68;
    }
    if (uStack_68 != (undefined8 *)0x0) {
      puVar12 = uStack_68;
    }
    if (puVar12 == (undefined8 *)0x0) {
      value_01 = 0;
      goto label_03b33cda;
    }
  }
  value_01 = *(int32_t *)((long)puVar12 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_e0 + 4,value_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass27_0$$<LogoImpact>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___LogoImpact_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x3b33990

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0___LogoImpact_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass27_0_o *__this,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  int iVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Material_o *pUVar4;
  intptr_t iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int32_t value;
  long lVar9;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar10;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_01;
  float value_00;
  float fVar11;
  UnityEngine_Vector2_o offset;
  float fVar12;
  float fVar13;
  undefined8 uStack_98;
  UnityEngine_Material_o *pUStack_90;
  undefined8 local_20;
  
  pGVar10 = (__this->fields).layoutOffset;
  if (pGVar10 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (pGVar10,(UnityEngine_Vector2_o)(__this->fields).origin.fields,(MethodInfo *)0x0);
    __this_00 = (__this->fields).rect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)__this_00,(UnityEngine_Vector3_o)(__this->fields).scale.fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  lVar9 = 0;
  local_20 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3c == '\0') {
    local_20 = (undefined8 *)CONCAT44(value_00,(undefined4)local_20);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar4 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    local_20 = (undefined8 *)CONCAT44(value_00,(undefined4)local_20);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar4 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar4 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar10 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar9 + 0x10);
  if (pGVar10 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar12 = (float)*(undefined8 *)(lVar9 + 0x18);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
    offset.fields.x = fVar11 * ((float)*(undefined8 *)(lVar9 + 0x20) - fVar12) + fVar12;
    offset.fields.y = fVar11 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar13) + fVar13;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar10,offset,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(pGVar10->fields).m_CachedPtr;
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_01,(UnityEngine_Vector2_o)(pGVar10->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pUStack_90 = pUVar4;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_98 = uStack_98 & 0xffffffff;
  cVar2 = (char)(__this_01->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar2 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar6 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar7 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar2 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar1 != '\0') {
      lVar6 = 0;
    }
    if (lVar6 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar7 = *(undefined4 *)(lVar6 + 0x2c);
  }
  uStack_98 = CONCAT44(uVar7,(undefined4)uStack_98);
  puVar8 = &TypeInfo_GisketchSurfaceMaterial;
  iVar5 = (__this_01->fields).m_CachedPtr;
  cVar2 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar5 == '\0') {
    if (cVar2 != '\0') {
      puVar8 = local_20;
    }
    if (local_20 != (undefined8 *)0x0) {
      puVar8 = local_20;
    }
    if (puVar8 == (undefined8 *)0x0) {
      value = 0;
      goto label_03b33cda;
    }
  }
  value = *(int32_t *)((long)puVar8 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_98 + 4,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x3b33530

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass30_0$$<HorizontalSurfaceBlur>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o* __this, float value, const MethodInfo* method);
// 0x3b339d0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o *__this,float value,
               MethodInfo *method)

{
  char cVar1;
  char cVar2;
  int iVar3;
  UnityEngine_Material_o *pUVar4;
  intptr_t iVar5;
  undefined8 *in_RAX;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int32_t value_00;
  long lVar9;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_01;
  float fVar10;
  UnityEngine_Vector2_o offset;
  float fVar11;
  float fVar12;
  undefined8 uStack_90;
  UnityEngine_Material_o *pUStack_88;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057a9c3c == '\0') {
    uStack_18._0_4_ = SUB84(in_RAX,0);
    uStack_18 = (undefined8 *)CONCAT44(value,(undefined4)uStack_18);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3c = '\x01';
  }
  pUVar4 = (__this->fields).material;
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    uStack_18 = (undefined8 *)CONCAT44(value,(undefined4)uStack_18);
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar4 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar4 = *(UnityEngine_Material_o **)(lVar9 + 0x10);
  lVar9 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar9 + 0x10);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar11 = (float)*(undefined8 *)(lVar9 + 0x18);
    fVar12 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
    offset.fields.x = fVar10 * ((float)*(undefined8 *)(lVar9 + 0x20) - fVar11) + fVar11;
    offset.fields.y = fVar10 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar12) + fVar12;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_01,(UnityEngine_Vector2_o)(__this_00->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pUStack_88 = pUVar4;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_90 = uStack_90 & 0xffffffff;
  cVar2 = (char)(__this_01->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c2d == '\0') goto label_03b33c21;
label_03b33bf3:
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) != 0) goto label_03b33bff;
label_03b33c40:
    il2cpp_runtime_helper_02337ed0();
    if (cVar2 == '\0') goto label_03b33c4a;
label_03b33c04:
    if (lVar6 != 0) goto label_03b33c0e;
label_03b33c62:
    uVar7 = 0;
  }
  else {
    if (g_data_057a9c2d != '\0') goto label_03b33bf3;
label_03b33c21:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) goto label_03b33c40;
label_03b33bff:
    if (cVar2 != '\0') goto label_03b33c04;
label_03b33c4a:
    if (cVar1 != '\0') {
      lVar6 = 0;
    }
    if (lVar6 == 0) goto label_03b33c62;
label_03b33c0e:
    uVar7 = *(undefined4 *)(lVar6 + 0x2c);
  }
  uStack_90 = CONCAT44(uVar7,(undefined4)uStack_90);
  puVar8 = &TypeInfo_GisketchSurfaceMaterial;
  iVar5 = (__this_01->fields).m_CachedPtr;
  cVar2 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar5 == '\0') {
    if (cVar2 != '\0') {
      puVar8 = uStack_18;
    }
    if (uStack_18 != (undefined8 *)0x0) {
      puVar8 = uStack_18;
    }
    if (puVar8 == (undefined8 *)0x0) {
      value_00 = 0;
      goto label_03b33cda;
    }
  }
  value_00 = *(int32_t *)((long)puVar8 + 0x2c);
label_03b33cda:
  System_Int32__CompareTo_3cb42c0((int)&uStack_90 + 4,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass30_0$$<HorizontalSurfaceBlur>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x3b33a50

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UnityEngine_Material_o *pUVar3;
  intptr_t iVar4;
  long lVar5;
  undefined4 uVar6;
  int32_t value;
  long lVar7;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_01;
  long unaff_R14;
  float fVar8;
  UnityEngine_Vector2_o offset;
  float fVar9;
  float fVar10;
  long unaff_retaddr;
  undefined8 uStack_78;
  UnityEngine_Material_o *pUStack_70;
  
  if (g_data_057a9c3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3d = '\x01';
  }
  pUVar3 = (__this->fields).material;
  lVar7 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar3,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  lVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  pUVar3 = *(UnityEngine_Material_o **)(lVar7 + 0x10);
  lVar7 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (pUVar3,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar7 + 0x10);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar9 = (float)*(undefined8 *)(lVar7 + 0x18);
    fVar10 = (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
    offset.fields.x = fVar8 * ((float)*(undefined8 *)(lVar7 + 0x20) - fVar9) + fVar9;
    offset.fields.y = fVar8 * ((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) - fVar10) + fVar10;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_01,(UnityEngine_Vector2_o)(__this_00->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pUStack_70 = pUVar3;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_78 = uStack_78 & 0xffffffff;
  iVar4 = (__this_01->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((char)iVar4 == '\0') && (cVar1 != '\0')) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar5 + 0x2c);
  }
  uStack_78 = CONCAT44(uVar6,(int)uStack_78);
  iVar4 = (__this_01->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar4 == '\0') {
    if (cVar1 != '\0') {
      unaff_R14 = unaff_retaddr;
    }
    if (unaff_retaddr != 0) {
      unaff_R14 = unaff_retaddr;
    }
  }
  if (unaff_R14 == 0) {
    value = 0;
  }
  else {
    value = *(int32_t *)(unaff_R14 + 0x2c);
  }
  System_Int32__CompareTo_3cb42c0((int)&uStack_78 + 4,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass30_0$$<HorizontalSurfaceBlur>b__2
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__2 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x3b33ac0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0___HorizontalSurfaceBlur_b__2
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UnityEngine_Material_o *__this_00;
  intptr_t iVar3;
  long in_RAX;
  undefined4 uVar4;
  long unaff_RBX;
  int32_t value;
  long lVar5;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_02;
  float fVar6;
  UnityEngine_Vector2_o offset;
  float fVar7;
  float fVar8;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack_60;
  UnityEngine_Material_o *pUStack_58;
  
  if (g_data_057a9c3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    g_data_057a9c3e = '\x01';
  }
  __this_00 = (__this->fields).material;
  lVar5 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  __this_01 = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(lVar5 + 0x10);
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar7 = (float)*(undefined8 *)(lVar5 + 0x18);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
    offset.fields.x = fVar6 * ((float)*(undefined8 *)(lVar5 + 0x20) - fVar7) + fVar7;
    offset.fields.y = fVar6 * ((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - fVar8) + fVar8;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_01,offset,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(__this_01->fields).m_CachedPtr;
  if (__this_02 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_02,(UnityEngine_Vector2_o)(__this_01->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pUStack_58 = __this_00;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_60 = uStack_60 & 0xffffffff;
  iVar3 = (__this_02->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_02->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar3 == '\0') {
    if (cVar1 != '\0') {
      in_RAX = unaff_RBX;
    }
    if (unaff_RBX != 0) {
      in_RAX = unaff_RBX;
    }
  }
  if (in_RAX == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(in_RAX + 0x2c);
  }
  uStack_60 = CONCAT44(uVar4,(undefined4)uStack_60);
  iVar3 = (__this_02->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_02->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar3 == '\0') {
    if (cVar1 != '\0') {
      in_stack_00000010 = in_stack_00000018;
    }
    if (in_stack_00000018 != 0) {
      in_stack_00000010 = in_stack_00000018;
    }
  }
  if (in_stack_00000010 == 0) {
    value = 0;
  }
  else {
    value = *(int32_t *)(in_stack_00000010 + 0x2c);
  }
  System_Int32__CompareTo_3cb42c0((int)&uStack_60 + 4,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass33_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x3b33540

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass33_0$$<SlideNoFadeWithOffset>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___SlideNoFadeWithOffset_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o* __this, float value, const MethodInfo* method);
// 0x3b33b30

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___SlideNoFadeWithOffset_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  char cVar3;
  int iVar4;
  intptr_t iVar5;
  undefined4 uVar6;
  int32_t value_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_01;
  UnityEngine_Vector2_o offset;
  float fVar7;
  float fVar8;
  long unaff_retaddr;
  long in_stack_00000008;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 uStack_48;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar7 = UVar1.x;
    fVar8 = UVar1.y;
    offset.fields.x = value * (UVar2.x - fVar7) + fVar7;
    offset.fields.y = value * (UVar2.y - fVar8) + fVar8;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_01,(UnityEngine_Vector2_o)(__this_00->fields)._rect,(MethodInfo *)0x0);
    return;
  }
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_48 = uStack_48 & 0xffffffff;
  iVar5 = (__this_01->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar4 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar5 == '\0') {
    if (cVar3 != '\0') {
      unaff_retaddr = in_stack_00000008;
    }
    if (in_stack_00000008 != 0) {
      unaff_retaddr = in_stack_00000008;
    }
  }
  if (unaff_retaddr == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(unaff_retaddr + 0x2c);
  }
  uStack_48 = CONCAT44(uVar6,(undefined4)uStack_48);
  iVar5 = (__this_01->fields).m_CachedPtr;
  cVar3 = *(char *)((long)&(__this_01->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar4 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar5 == '\0') {
    if (cVar3 != '\0') {
      in_stack_00000028 = in_stack_00000030;
    }
    if (in_stack_00000030 != 0) {
      in_stack_00000028 = in_stack_00000030;
    }
  }
  if (in_stack_00000028 == 0) {
    value_00 = 0;
  }
  else {
    value_00 = *(int32_t *)(in_stack_00000028 + 0x2c);
  }
  System_Int32__CompareTo_3cb42c0((int)&uStack_48 + 4,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass33_0$$<SlideNoFadeWithOffset>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___SlideNoFadeWithOffset_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x3b33b70

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0___SlideNoFadeWithOffset_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  intptr_t iVar3;
  undefined4 uVar4;
  int32_t value;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 uStack_40;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_40 = uStack_40 & 0xffffffff;
  iVar3 = (__this_00->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_00->fields).m_CachedPtr + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar3 == '\0') {
    if (cVar1 != '\0') {
      in_stack_00000008 = in_stack_00000010;
    }
    if (in_stack_00000010 != 0) {
      in_stack_00000008 = in_stack_00000010;
    }
  }
  if (in_stack_00000008 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(in_stack_00000008 + 0x2c);
  }
  uStack_40 = CONCAT44(uVar4,(undefined4)uStack_40);
  iVar3 = (__this_00->fields).m_CachedPtr;
  cVar1 = *(char *)((long)&(__this_00->fields).m_CachedPtr + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)iVar3 == '\0') {
    if (cVar1 != '\0') {
      in_stack_00000030 = in_stack_00000038;
    }
    if (in_stack_00000038 != 0) {
      in_stack_00000030 = in_stack_00000038;
    }
  }
  if (in_stack_00000030 == 0) {
    value = 0;
  }
  else {
    value = *(int32_t *)(in_stack_00000030 + 0x2c);
  }
  System_Int32__CompareTo_3cb42c0((int)&uStack_40 + 4,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x3b306f0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass6_0$$<PlayTargets>b__0
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0___PlayTargets_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b, const MethodInfo* method);
// 0x3b33b90

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0___PlayTargets_b__0
                  (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass6_0_o *__this,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  uint in_EAX;
  int32_t iVar4;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057a9c3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c3f = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  bVar3 = (__this->fields).enter;
  cVar1 = *(char *)((long)&(__this->fields).enter + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar3 == '\0') {
    if (cVar1 != '\0') {
      a.fields.Enter = a.fields.Exit;
    }
    if (a.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      a.fields.Enter = a.fields.Exit;
    }
  }
  if (a.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((a.fields.Enter)->fields).order;
  }
  uStack_38 = CONCAT44(iVar4,(uint)uStack_38);
  bVar3 = (__this->fields).enter;
  cVar1 = *(char *)((long)&(__this->fields).enter + 1);
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar3 == '\0') {
    if (cVar1 != '\0') {
      b.fields.Enter = b.fields.Exit;
    }
    if (b.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      b.fields.Enter = b.fields.Exit;
    }
  }
  if (b.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((b.fields.Enter)->fields).order;
  }
  iVar4 = System_Int32__CompareTo_3cb42c0((int)&uStack_38 + 4,iVar4,(MethodInfo *)0x0);
  return iVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewEnter
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2f630

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (g_data_057a9c1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c1d = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar1 != 0) {
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,1,in_RDX);
    return pDVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,1,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewExit
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2fbb0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (g_data_057a9c1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c1e = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar1 != 0) {
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,0,in_RDX);
    return pDVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,0,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetViewToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2fc20

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target;
  UnityEngine_Vector3_o value;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool_conflict bVar11;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar12;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  UnityEngine_Transform_o *__this_00;
  DG_Tweening_Tween_o *tween;
  MethodInfo *in_RCX;
  MethodInfo *pMVar13;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int32_t index;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *go;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff78;
  float fStack_80;
  float fStack_7c;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o GStack_50;
  
  if (g_data_057a9c1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionTarget_get_Item);
    g_data_057a9c1f = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this_01 = (view->fields)._MotionTargets_k__BackingField;
    if (__this_01 == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
label_03b2fd30:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c2a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c2a = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      go = in_stack_ffffffffffffff60;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)in_stack_ffffffffffffff60,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return;
      }
      if (in_stack_ffffffffffffff60 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        pGVar12 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff60,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
        motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
        go = pGVar12;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (pGVar12 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
          __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pGVar12,MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
        go = __this;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (g_data_057a694c == '\0') {
            go = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)&TypeInfo_Vector2;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
          }
          if (__this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                    (__this,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        pGVar12 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff60,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
        go = pGVar12;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (pGVar12 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
          UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)pGVar12,fStack_7c,(MethodInfo *)0x0)
          ;
        }
        motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff60,(MethodInfo *)0x0);
        go = in_stack_ffffffffffffff60;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          value.fields.z = fStack_80;
          value.fields.x = (float)in_stack_ffffffffffffff78;
          value.fields.y = SUB84(in_stack_ffffffffffffff78,4);
          UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
label_03b2ff09:
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = in_RCX;
      if (g_data_057a9c20 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
        g_data_057a9c20 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_GisketchMotion[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      tween = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                        ((UnityEngine_GameObject_o *)go,motion,extraout_EDX & 0xff,pMVar13);
      pMVar13 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar13 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,(uint)in_RCX & 0xff,pMVar13);
      return;
    }
    iVar1 = (__this_01->fields)._size;
    if ((iVar1 != 0) && (0 < iVar1)) {
      index = 0;
      do {
        in_RCX = MethodInfo_GisketchMotionTarget_get_Item;
        System_Collections_Generic_List_GisketchMotionTarget___get_Item
                  (&GStack_50,__this_01,index,(MethodInfo_35EA570 *)MethodInfo_GisketchMotionTarget_get_Item);
        in_stack_ffffffffffffff78 = GStack_50.fields._32_8_;
        fVar9 = GStack_50.fields.RestScale.fields.y;
        fVar8 = GStack_50.fields.RestScale.fields.x;
        uVar7 = GStack_50.fields.Exit._4_4_;
        uVar6 = GStack_50.fields.Exit._0_4_;
        uVar5 = GStack_50.fields.Enter._4_4_;
        uVar4 = GStack_50.fields.Enter._0_4_;
        uVar3 = GStack_50.fields.GameObject._4_4_;
        uVar2 = GStack_50.fields.GameObject._0_4_;
        pMVar13 = TypeInfo_GisketchMotion;
        if (*(int *)((long)&TypeInfo_GisketchMotion[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar10 = GStack_50.fields._32_8_;
        target.fields.GameObject._4_4_ = uVar3;
        target.fields.GameObject._0_4_ = uVar2;
        in_stack_ffffffffffffff60 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)CONCAT44(uVar5,uVar4)
        ;
        target.fields.Exit._4_4_ = uVar7;
        target.fields.Exit._0_4_ = uVar6;
        target.fields.RestScale.fields.y = fVar9;
        target.fields.RestScale.fields.x = fVar8;
        target.fields.Enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)in_stack_ffffffffffffff60;
        GStack_50.fields.RestScale.fields.z = (float)in_stack_ffffffffffffff78;
        GStack_50.fields.RestAlpha = SUB84(in_stack_ffffffffffffff78,4);
        target.fields.RestScale.fields.z = GStack_50.fields.RestScale.fields.z;
        target.fields.RestAlpha = GStack_50.fields.RestAlpha;
        GStack_50.fields._32_8_ = uVar10;
        Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest(target,pMVar13);
        __this_01 = (view->fields)._MotionTargets_k__BackingField;
        if (__this_01 == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) goto label_03b2fd30;
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayNode
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, bool blocksInput, const MethodInfo* method);
// 0x3b2ff10

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,
          bool_conflict enter,bool_conflict blocksInput,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  bool_conflict bVar2;
  undefined4 in_register_0000000c;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  bVar2 = blocksInput;
  if (g_data_057a9c20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c20 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                     (go,motion,enter & 0xff,(MethodInfo *)CONCAT44(in_register_0000000c,bVar2));
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar1,blocksInput & 0xff,method_00);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayTargets
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets (Gisketch_Aottg2UI_Building_GisketchView_o* view, bool enter, const MethodInfo* method);
// 0x3b2f6a0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,bool_conflict enter,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  int iVar3;
  UnityEngine_GameObject_o *root;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  bool_conflict bVar4;
  int32_t iVar5;
  Il2CppObject *__this_03;
  DG_Tweening_Sequence_o *t;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar6;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_Dictionary_object__int__o *__this_04;
  DG_Tweening_Tween_o *pDVar7;
  long *plVar8;
  undefined8 uVar9;
  Gisketch_Aottg2UI_Building_GisketchView_o *view_00;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion;
  long lVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  undefined8 in_stack_ffffffffffffff48;
  DG_Tweening_Sequence_o *in_stack_ffffffffffffff50;
  Il2CppObject *pIVar16;
  _union_249355 _Var17;
  UnityEngine_GameObject_o *local_98;
  undefined8 uStack_90;
  _union_249355 local_68 [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_48;
  
  if (g_data_057a9c21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_GisketchMotionTarget);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionTarget_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Building_GisketchM);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchMotionTarget);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_SetDelay_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_PlayTargets_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    g_data_057a9c21 = '\x01';
  }
  pIVar16 = (Il2CppObject *)0x0;
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Il2CppObject *)0x0) {
    *(char *)&__this_03[1].klass = (char)enter;
    if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pSVar6 = (view->fields)._MotionTargets_k__BackingField;
    if (pSVar6 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
      if ((pSVar6->fields)._size == 0) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      root = (view->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      t = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      in_stack_ffffffffffffff50 =
           (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Sequence_SetUpdate_Sequence);
      pMVar10 = (MethodInfo *)(view->fields)._MotionTargets_k__BackingField;
      pSVar6 = (System_Collections_Generic_List_GisketchMotionTarget__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchMotionTarget);
      System_Collections_Generic_List_GisketchMotionTarget____ctor_35ea0b0
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pMVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
      if (*(char *)&__this_03[1].klass == '\0') {
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit(pSVar6,pMVar10);
        uVar12 = (undefined1)bVar4;
      }
      *(undefined1 *)((long)&__this_03[1].klass + 1) = uVar12;
      comparison = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_GisketchMotionTarget);
      pMVar10 = (MethodInfo *)0x0;
      System_Comparison_GisketchMotionTarget____ctor();
      if (pSVar6 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___Sort_35ed100(pSVar6,comparison,MethodInfo_Void_Sort);
        __this_04 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
        System_Collections_Generic_Dictionary_object__int____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Int32);
        System_Collections_Generic_List_GisketchMotionTarget___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_68,pSVar6,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Building_GisketchM);
        local_98 = (UnityEngine_GameObject_o *)CONCAT44(local_68[2]._4_4_,local_68[2]._0_4_);
        uStack_90 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(uStack_4c,uStack_50);
        _Var17 = local_68[0];
        while (__this.fields._8_8_ = in_stack_ffffffffffffff50,
              __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
              __this.fields._current = _Var17.genericMethod,
              bVar4 = System_Collections_Generic_List_Enumerator_GisketchMotionTarget___MoveNext
                                (__this,(MethodInfo_3214200 *)&stack0xffffffffffffff58), (char)bVar4 != '\0')
        {
          cVar1 = *(char *)&__this_03[1].klass;
          cVar2 = *(char *)((long)&__this_03[1].klass + 1);
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          motion = uStack_90;
          if (cVar1 == '\0') {
            if (cVar2 != '\0') {
              motion = local_48;
            }
            if (local_48 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              motion = local_48;
            }
          }
          pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                             (local_98,motion,(uint)*(byte *)&__this_03[1].klass,pMVar10);
          if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_00;
            }
            iVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                              ((System_Collections_Generic_Dictionary_string__int__o *)__this_04,motion,
                               method_00);
            if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              fVar13 = 0.0;
            }
            else {
              fVar13 = (motion->fields).stagger;
              fVar14 = 0.0;
              if (0.0 <= fVar13) {
                fVar14 = fVar13;
              }
              fVar13 = (float)iVar5 * fVar14 + (motion->fields).delay;
            }
            DG_Tweening_TweenSettingsExtensions__SetDelay_object_((Il2CppObject *)pDVar7,fVar13,MethodInfo_Tween_SetDelay_Tween);
            DG_Tweening_TweenSettingsExtensions__Join(in_stack_ffffffffffffff50,pDVar7,(MethodInfo *)0x0);
          }
        }
        __this_00.fields._8_8_ = in_stack_ffffffffffffff50;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_00.fields._current = _Var17.genericMethod;
        System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose
                  (__this_00,(MethodInfo_32141F0 *)&stack0xffffffffffffff58);
        pMVar10 = extraout_RDX_01;
        goto label_03b2fabd;
      }
    }
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  uVar9 = auVar15._0_8_;
  if (auVar15._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(uVar9);
    lVar11 = *plVar8;
    __cxa_end_catch();
    __this_01.fields._8_8_ = in_stack_ffffffffffffff50;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_01.fields._current = pIVar16;
    System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose
              (__this_01,(MethodInfo_32141F0 *)&stack0xffffffffffffff58);
    pMVar10 = extraout_RDX_03;
    if (lVar11 == 0) {
label_03b2fabd:
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_02;
      }
      pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                         ((DG_Tweening_Tween_o *)in_stack_ffffffffffffff50,1,pMVar10);
      return pDVar7;
    }
    uVar9 = il2cpp_runtime_helper_022fefe0(lVar11);
  }
  else {
    lVar11 = 0;
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff50;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_02.fields._current = pIVar16;
  System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose
            (__this_02,(MethodInfo_32141F0 *)&stack0xffffffffffffff58);
  if (lVar11 == 0) {
    _Unwind_Resume(uVar9);
  }
  view_00 = (Gisketch_Aottg2UI_Building_GisketchView_o *)il2cpp_runtime_helper_022fefe0(lVar11);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057a9c1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c1e = '\x01';
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    pMVar10 = extraout_RDX_05;
  }
  else {
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    pMVar10 = extraout_RDX_04;
  }
  if (iVar3 != 0) {
    pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view_00,0,pMVar10);
    return pDVar7;
  }
  il2cpp_runtime_helper_02337ed0();
  pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view_00,0,method_01);
  return pDVar7;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$CreateTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, const MethodInfo* method);
// 0x3b2ffb0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,
          bool_conflict enter,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *item;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *pGVar2;
  undefined1 auVar3 [16];
  long lVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  char *pcVar7;
  Il2CppClass *preset;
  DG_Tweening_Tween_o *pDVar8;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar9;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar10;
  UnityEngine_CanvasGroup_o *pUVar11;
  Il2CppObject *__this;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar12;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *extraout_RAX;
  DG_Tweening_Sequence_o *pDVar13;
  UnityEngine_GameObject_o *go_00;
  UnityEngine_CanvasGroup_o *__this_01;
  undefined8 *puVar14;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar15;
  DG_Tweening_Tween_o *extraout_RAX_00;
  byte extraout_DL;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *unaff_RBX;
  undefined1 *puVar17;
  UnityEngine_GameObject_o *unaff_RBP;
  undefined1 uVar18;
  Il2CppClass *pIVar19;
  System_String_o *pSVar20;
  ulong uVar21;
  Il2CppClass *t;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  UnityEngine_CanvasGroup_o *unaff_R14;
  byte bVar22;
  ulong unaff_R15;
  uint uVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar25;
  undefined4 in_XMM1_Db;
  undefined4 uVar26;
  float fVar27;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o endValue_01;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  float local_2c;
  
  auVar28._0_8_ = (ulong)(uint)enter;
  if (g_data_057a9c22 == '\0') {
    uStack_40 = 0x3b2ffde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    uStack_40 = 0x3b2ffea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    uStack_40 = 0x3b2fff6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_40 = 0x3b30002;
    il2cpp_runtime_helper_023445d0(&"slidedown");
    uStack_40 = 0x3b3000e;
    il2cpp_runtime_helper_023445d0(&"slideleftsmall");
    uStack_40 = 0x3b3001a;
    il2cpp_runtime_helper_023445d0(&"fade");
    uStack_40 = 0x3b30026;
    il2cpp_runtime_helper_023445d0(&"sliderightsmall");
    uStack_40 = 0x3b30032;
    il2cpp_runtime_helper_023445d0(&"balloon");
    uStack_40 = 0x3b3003e;
    il2cpp_runtime_helper_023445d0(&"slide");
    uStack_40 = 0x3b3004a;
    il2cpp_runtime_helper_023445d0(&"slideright");
    uStack_40 = 0x3b30056;
    il2cpp_runtime_helper_023445d0(&"pop");
    uStack_40 = 0x3b30062;
    il2cpp_runtime_helper_023445d0(&"slideleft");
    g_data_057a9c22 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_40 = 0x3b30081;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x3b3008f;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  uVar18 = 0;
  uStack_40 = 0x3b300ad;
  bVar5 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    uStack_40 = 0x3b30149;
    il2cpp_runtime_helper_02337ed0();
    pcVar7 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    if (*pcVar7 == '\0') goto label_03b30159;
label_03b300d9:
    fVar24 = (motion->fields).duration;
    uVar23 = -(uint)(0.0 < fVar24);
    in_XMM1_Db = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    fVar24 = (float)(~uVar23 & 0x3e23d70a | (uint)fVar24 & uVar23);
    local_2c = 0.01;
    if (0.01 <= fVar24) {
      local_2c = fVar24;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      uStack_40 = 0x3b3011a;
      il2cpp_runtime_helper_02337ed0();
      pcVar7 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    local_2c = local_2c * *(float *)(pcVar7 + 4);
    pSVar20 = (motion->fields).preset;
    if (pSVar20 == (System_String_o *)0x0) {
      t = (Il2CppClass *)0x0;
      goto label_03b304ff;
    }
  }
  else {
    pcVar7 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    if (*pcVar7 != '\0') goto label_03b300d9;
label_03b30159:
    local_2c = 0.01;
    pSVar20 = (motion->fields).preset;
    t = (Il2CppClass *)0x0;
    if (pSVar20 == (System_String_o *)0x0) goto label_03b304ff;
  }
  uStack_40 = 0x3b3017b;
  preset = (Il2CppClass *)System_String__ToLowerInvariant(pSVar20,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    uStack_40 = 0x3b30190;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar22 = (byte)enter;
  auVar28._0_8_ = (ulong)bVar22;
  uStack_40 = 0x3b301a8;
  pIVar19 = preset;
  t = (Il2CppClass *)go;
  pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
                     (go,(System_String_o *)preset,local_2c,enter & 0xff,method);
  uVar18 = SUB81(pIVar19,0);
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    return pDVar8;
  }
  if (preset != (Il2CppClass *)0x0) {
    uStack_40 = 0x3b301dd;
    pSVar20 = "slideleftsmall";
    t = preset;
    bVar5 = System_String__Contains((System_String_o *)preset,"slideleftsmall",(MethodInfo *)0x0);
    uVar18 = SUB81(pSVar20,0);
    uVar23 = enter & 0xff;
    if ((char)bVar5 == '\0') {
      uStack_40 = 0x3b30232;
      pSVar20 = "sliderightsmall";
      t = preset;
      bVar5 = System_String__Contains((System_String_o *)preset,"sliderightsmall",(MethodInfo *)0x0);
      uVar18 = SUB81(pSVar20,0);
      if ((char)bVar5 == '\0') {
        uStack_40 = 0x3b30287;
        pSVar20 = "slideleft";
        t = preset;
        bVar5 = System_String__Contains((System_String_o *)preset,"slideleft",(MethodInfo *)0x0);
        uVar18 = SUB81(pSVar20,0);
        if ((char)bVar5 == '\0') {
          uStack_40 = 0x3b302dc;
          pSVar20 = "slideright";
          t = preset;
          bVar5 = System_String__Contains((System_String_o *)preset,"slideright",(MethodInfo *)0x0);
          uVar18 = SUB81(pSVar20,0);
          if ((char)bVar5 == '\0') {
            uStack_40 = 0x3b3032e;
            pSVar20 = "slidedown";
            t = preset;
            bVar5 = System_String__Contains((System_String_o *)preset,"slidedown",(MethodInfo *)0x0);
            uVar18 = SUB81(pSVar20,0);
            if ((char)bVar5 == '\0') {
              uStack_40 = 0x3b3039a;
              pSVar20 = "slide";
              t = preset;
              bVar5 = System_String__Contains((System_String_o *)preset,"slide",(MethodInfo *)0x0);
              uVar18 = SUB81(pSVar20,0);
              if ((char)bVar5 == '\0') {
                uStack_40 = 0x3b303ff;
                pMVar16 = "fade";
                bVar5 = System_String__Contains
                                  ((System_String_o *)preset,(System_String_o *)"fade",(MethodInfo *)0x0
                                  );
                if ((char)bVar5 != '\0') {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    uStack_40 = 0x3b30415;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uStack_40 = 0x3b3041d;
                  pUVar11 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar16);
                  pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar11,local_2c,uVar23,method_00);
                  return pDVar8;
                }
                uStack_40 = 0x3b3044e;
                pSVar20 = "balloon";
                t = preset;
                bVar5 = System_String__Contains((System_String_o *)preset,"balloon",(MethodInfo *)0x0);
                uVar18 = SUB81(pSVar20,0);
                if ((char)bVar5 == '\0') {
                  uStack_40 = 0x3b304b3;
                  pSVar20 = "pop";
                  System_String__Contains((System_String_o *)preset,"pop",(MethodInfo *)0x0);
                  uVar18 = SUB81(pSVar20,0);
                  t = preset;
                  if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b304ff;
                  pMVar16 = (MethodInfo *)0x0;
                  uStack_40 = 0x3b304c2;
                  pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                           UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    uStack_40 = 0x3b304d7;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uStack_40 = 0x3b304df;
                  pUVar11 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar16);
                  fVar24 = local_2c;
                }
                else {
                  if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b304ff;
                  uStack_40 = 0x3b3046d;
                  unaff_RBX = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                              UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    uStack_40 = 0x3b30482;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  register0x00000020 = (BADSPACEBASE *)&puStack_58;
                  unaff_R15 = (ulong)uVar23;
                  uStack_50 = (UnityEngine_GameObject_o *)CONCAT44(local_2c,(undefined4)uStack_50);
                  if (g_data_057a9c23 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
                    g_data_057a9c23 = '\x01';
                  }
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar11 = (UnityEngine_CanvasGroup_o *)0x0;
                  pGVar9 = unaff_RBX;
                  bVar5 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 != '\0') {
                    return (DG_Tweening_Tween_o *)0x0;
                  }
                  if (unaff_RBX != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
                    pMVar16 = (MethodInfo *)0x0;
                    go_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    __this_01 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go_00,pMVar16);
                    UVar31 = UnityEngine_Transform__get_localScale
                                       ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                    fVar24 = UVar31.fields.z;
                    fVar27 = UVar31.fields.x;
                    fVar30 = UVar31.fields.y;
                    if (g_data_057a65d5 == '\0') {
                      auStack_38._4_4_ = in_XMM1_Db;
                      auStack_38._0_4_ = UVar31.fields.z;
                      uStack_30 = in_XMM1_Dc;
                      local_2c = (float)in_XMM1_Dd;
                      unique0x100007b0 = extraout_XMM0_Dc;
                      auStack_48 = (undefined1  [8])UVar31.fields._0_8_;
                      unique0x100007b4 = extraout_XMM0_Dd;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                      g_data_057a65d5 = '\x01';
                      fVar24 = (float)auStack_38._0_4_;
                      fVar27 = (float)auStack_48._0_4_;
                      fVar30 = (float)auStack_48._4_4_;
                    }
                    unaff_RBP = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
                    puVar14 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                    fVar30 = fVar30 - (float)((ulong)*puVar14 >> 0x20);
                    fVar27 = fVar27 - (float)*puVar14;
                    if (9.9999994e-11 <=
                        fVar27 * fVar27 + fVar30 * fVar30 +
                        (fVar24 - *(float *)(puVar14 + 1)) * (fVar24 - *(float *)(puVar14 + 1))) {
                      UVar31 = UnityEngine_Transform__get_localScale
                                         ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                      fVar24 = UVar31.fields.z;
                      auVar28._0_8_ = UVar31.fields._0_8_;
                      auVar28._8_4_ = extraout_XMM0_Dc_00;
                      auVar28._12_4_ = extraout_XMM0_Dd_00;
                      auStack_48._0_4_ = fVar24;
                      _auStack_38 = auVar28;
                    }
                    else {
                      if (g_data_057a6932 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a6932 = '\x01';
                        puVar14 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      }
                      auVar28._0_8_ = *(ulong *)((long)puVar14 + 0xc);
                      fVar24 = *(float *)((long)puVar14 + 0x14);
                      _uStack_30 = 0;
                      auStack_38 = (undefined1  [8])auVar28._0_8_;
                      auStack_48._0_4_ = fVar24;
                    }
                    if (bVar22 == 0) {
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      UVar31.fields.x = (float)auStack_38._0_4_ * (float)0x3f666666;
                      UVar31.fields.y = (float)auStack_38._4_4_ * (float)0x3f666666;
                      UVar31.fields.z = (float)auStack_48._0_4_ * 0.9;
                      pDVar15 = DG_Tweening_ShortcutExtensions__DOScale
                                          ((UnityEngine_Transform_o *)unaff_RBX,UVar31,uStack_50._4_4_,
                                           (MethodInfo *)0x0);
                      pDVar8 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                         ((Il2CppObject *)pDVar15,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                      pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                      pMVar16 = extraout_RDX_01;
                      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pMVar16 = extraout_RDX_02;
                      }
                      fVar24 = uStack_50._4_4_ * 0.75;
                      bVar5 = 0;
label_03b314f1:
                      pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this_01,fVar24,bVar5,pMVar16)
                      ;
                      pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                      pDVar8 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                         ((Il2CppObject *)pDVar13,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      return pDVar8;
                    }
                    value.fields.x = (float)auVar28._0_8_ * (float)0x3f570a3d;
                    value.fields.y = (float)(auVar28._0_8_ >> 0x20) * (float)0x3f570a3d;
                    in_XMM1_Db = 0;
                    in_XMM1_Dc = 0;
                    in_XMM1_Dd = 0;
                    value.fields.z = fVar24 * 0.84;
                    pUVar11 = (UnityEngine_CanvasGroup_o *)0x0;
                    pGVar9 = unaff_RBX;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)unaff_RBX,value,(MethodInfo *)0x0);
                    unaff_R14 = (UnityEngine_CanvasGroup_o *)0x0;
                    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_alpha(__this_01,0.0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      auVar28 = _auStack_38;
                      endValue.fields.z = (float)auStack_48._0_4_;
                      endValue.fields.x = (float)auStack_38._0_4_;
                      endValue.fields.y = (float)auStack_38._4_4_;
                      _auStack_38 = auVar28;
                      pDVar15 = DG_Tweening_ShortcutExtensions__DOScale
                                          ((UnityEngine_Transform_o *)unaff_RBX,endValue,uStack_50._4_4_,
                                           (MethodInfo *)0x0);
                      pDVar8 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                                         ((Il2CppObject *)pDVar15,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                      pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                      pMVar16 = extraout_RDX_03;
                      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pMVar16 = extraout_RDX_04;
                      }
                      fVar24 = uStack_50._4_4_ * 0.8;
                      bVar5 = 1;
                      goto label_03b314f1;
                    }
                  }
                  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
                  bVar22 = extraout_DL;
                }
                *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8) = unaff_RBP;
                *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
                *(UnityEngine_CanvasGroup_o **)((long)register0x00000020 + -0x18) = unaff_R14;
                *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x20) =
                     unaff_RBX;
                *(float *)((long)register0x00000020 + -0x4c) = fVar24;
                pGVar10 = pGVar9;
                if (g_data_057a9c24 == '\0') {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3155e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3156a;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31576;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31582;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  pGVar10 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)&MethodInfo_Sequence_SetUpdate_Sequence;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3158e;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057a9c24 = '\x01';
                }
                if (pGVar9 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
label_03b3183d:
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31842;
                  il2cpp_runtime_helper_022b2c90();
                  System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
                  return extraout_RAX_00;
                }
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b315a8;
                UVar31 = UnityEngine_Transform__get_localScale
                                   ((UnityEngine_Transform_o *)pGVar9,(MethodInfo *)0x0);
                fVar30 = UVar31.fields.z;
                fVar24 = UVar31.fields.x;
                fVar27 = UVar31.fields.y;
                if (g_data_057a65d5 == '\0') {
                  *(float *)((long)register0x00000020 + -0x38) = fVar30;
                  *(undefined4 *)((long)register0x00000020 + -0x34) = in_XMM1_Db;
                  *(undefined4 *)((long)register0x00000020 + -0x30) = in_XMM1_Dc;
                  *(undefined4 *)((long)register0x00000020 + -0x2c) = in_XMM1_Dd;
                  auVar3._8_4_ = extraout_XMM0_Dc_01;
                  auVar3._0_8_ = UVar31.fields._0_8_;
                  auVar3._12_4_ = extraout_XMM0_Dd_01;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar3;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b315ca;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  fVar24 = *(float *)((long)register0x00000020 + -0x48);
                  fVar27 = *(float *)((long)register0x00000020 + -0x44);
                  fVar30 = *(float *)((long)register0x00000020 + -0x38);
                  g_data_057a65d5 = '\x01';
                }
                puVar14 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                fVar27 = fVar27 - (float)((ulong)*puVar14 >> 0x20);
                fVar24 = fVar24 - (float)*puVar14;
                if (9.9999994e-11 <=
                    fVar24 * fVar24 + fVar27 * fVar27 +
                    (fVar30 - *(float *)(puVar14 + 1)) * (fVar30 - *(float *)(puVar14 + 1))) {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31720;
                  UVar31 = UnityEngine_Transform__get_localScale
                                     ((UnityEngine_Transform_o *)pGVar9,(MethodInfo *)0x0);
                  fVar24 = UVar31.fields.z;
                  auVar29._0_8_ = UVar31.fields._0_8_;
                  auVar29._8_4_ = extraout_XMM0_Dc_02;
                  auVar29._12_4_ = extraout_XMM0_Dd_02;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar29;
                  *(float *)((long)register0x00000020 + -0x48) = fVar24;
                }
                else {
                  if (g_data_057a6932 == '\0') {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31643;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                    puVar14 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  }
                  auVar29._0_8_ = *(undefined8 *)((long)puVar14 + 0xc);
                  fVar24 = *(float *)((long)puVar14 + 0x14);
                  *(undefined8 *)((long)register0x00000020 + -0x38) = auVar29._0_8_;
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
                  *(float *)((long)register0x00000020 + -0x48) = fVar24;
                }
                if (bVar22 == 0) {
                  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3168b;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31692;
                  pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                  endValue_00.fields.x = *(float *)((long)register0x00000020 + -0x38) * 0.96;
                  endValue_00.fields.y = *(float *)((long)register0x00000020 + -0x34) * 0.96;
                  endValue_00.fields.z = *(float *)((long)register0x00000020 + -0x48) * 0.96;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b316bf;
                  pDVar15 = DG_Tweening_ShortcutExtensions__DOScale
                                      ((UnityEngine_Transform_o *)pGVar9,endValue_00,
                                       *(float *)((long)register0x00000020 + -0x4c),(MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b316d6;
                  pDVar8 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                     ((Il2CppObject *)pDVar15,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b316e3;
                  pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                  pMVar16 = extraout_RDX_05;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b316fe;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar16 = extraout_RDX_06;
                  }
                  fVar24 = *(float *)((long)register0x00000020 + -0x4c);
                  bVar5 = 0;
                }
                else {
                  value_00.fields.x = (float)auVar29._0_8_ * 0.86;
                  value_00.fields.y = (float)((ulong)auVar29._0_8_ >> 0x20) * 0.86;
                  value_00.fields.z = fVar24 * 0.86;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3175a;
                  pGVar10 = pGVar9;
                  UnityEngine_Transform__set_localScale
                            ((UnityEngine_Transform_o *)pGVar9,value_00,(MethodInfo *)0x0);
                  if (pUVar11 == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b3183d;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31770;
                  UnityEngine_CanvasGroup__set_alpha(pUVar11,0.0,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b31788;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3178f;
                  pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b317ad;
                  endValue_01.fields.z = *(float *)((long)register0x00000020 + -0x48);
                  endValue_01.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x38);
                  pDVar15 = DG_Tweening_ShortcutExtensions__DOScale
                                      ((UnityEngine_Transform_o *)pGVar9,endValue_01,
                                       *(float *)((long)register0x00000020 + -0x4c),(MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b317cc;
                  pDVar8 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                                     ((Il2CppObject *)pDVar15,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b317d9;
                  pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                  pMVar16 = extraout_RDX_07;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b317f4;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar16 = extraout_RDX_08;
                  }
                  fVar24 = *(float *)((long)register0x00000020 + -0x4c);
                  bVar5 = 1;
                }
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3180f;
                pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar11,fVar24 * 0.75,bVar5,pMVar16);
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b3181c;
                pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
                pDVar8 = (DG_Tweening_Tween_o *)
                         DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                   ((Il2CppObject *)pDVar13,1,MethodInfo_Sequence_SetUpdate_Sequence);
                return pDVar8;
              }
              if (go != (UnityEngine_GameObject_o *)0x0) {
                uStack_40 = 0x3b303b9;
                pGVar10 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                          UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
                pGVar9 = pGVar10;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  uStack_40 = 0x3b303ce;
                  pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)il2cpp_runtime_helper_02337ed0();
                }
                auVar28._0_8_ = (ulong)uVar23;
                fVar24 = local_2c;
                goto Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide;
              }
            }
            else if (go != (UnityEngine_GameObject_o *)0x0) {
              uStack_40 = 0x3b3034d;
              pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                       UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                uStack_40 = 0x3b30362;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar25 = 0;
              uVar26 = 0x41a00000;
              goto label_03b30369;
            }
          }
          else if (go != (UnityEngine_GameObject_o *)0x0) {
            uStack_40 = 0x3b302fb;
            pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                     UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              uStack_40 = 0x3b30310;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar25 = 0xc2400000;
            uVar26 = 0;
            goto label_03b30369;
          }
        }
        else if (go != (UnityEngine_GameObject_o *)0x0) {
          uStack_40 = 0x3b302a6;
          pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                   UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            uStack_40 = 0x3b302bb;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar25 = 0x42400000;
          uVar26 = 0;
          goto label_03b30369;
        }
      }
      else if (go != (UnityEngine_GameObject_o *)0x0) {
        uStack_40 = 0x3b30251;
        pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                 UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          uStack_40 = 0x3b30266;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar25 = 0xc1800000;
        uVar26 = 0;
        goto label_03b30369;
      }
    }
    else if (go != (UnityEngine_GameObject_o *)0x0) {
      uStack_40 = 0x3b301fc;
      pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
               UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        uStack_40 = 0x3b30211;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar25 = 0x41800000;
      uVar26 = 0;
label_03b30369:
      uVar21 = (ulong)uVar23;
      puVar17 = (undefined1 *)register0x00000020;
      fVar24 = local_2c;
      do {
        *(UnityEngine_GameObject_o **)(puVar17 + -8) = unaff_RBP;
        *(ulong *)(puVar17 + -0x10) = unaff_R15;
        *(UnityEngine_CanvasGroup_o **)(puVar17 + -0x18) = unaff_R14;
        *(undefined8 **)(puVar17 + -0x20) = unaff_R13;
        *(undefined8 **)(puVar17 + -0x28) = unaff_R12;
        *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(puVar17 + -0x30) = unaff_RBX;
        register0x00000020 = (BADSPACEBASE *)(puVar17 + -0x68);
        *(undefined4 *)(puVar17 + -0x58) = uVar25;
        *(undefined4 *)(puVar17 + -0x54) = uVar26;
        *(undefined4 *)(puVar17 + -0x50) = 0;
        *(undefined4 *)(puVar17 + -0x4c) = 0;
        *(float *)(puVar17 + -0x5c) = fVar24;
        if (g_data_057a9c27 == '\0') {
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30ce4;
          il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30cf0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30cfc;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d08;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
          g_data_057a9c27 = '\x01';
        }
        unaff_R12 = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d28;
          il2cpp_runtime_helper_02337ed0();
        }
        auVar28._0_8_ = 0;
        *(undefined8 *)(puVar17 + -0x70) = 0x3b30d34;
        pGVar10 = pGVar9;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (DG_Tweening_Tween_o *)0x0;
        }
        unaff_RBX = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
        if (pGVar9 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          pMVar16 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d4b;
          unaff_RBP = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
          unaff_R13 = &TypeInfo_GisketchMotion;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            *(undefined8 *)(puVar17 + -0x70) = 0x3b30d67;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d6f;
          unaff_R14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(unaff_RBP,pMVar16);
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d7c;
          unaff_RBX = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                                ((UnityEngine_RectTransform_o *)pGVar9,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar17 + -0x70) = 0x3b30d91;
            il2cpp_runtime_helper_02337ed0();
          }
          auVar28._0_8_ = 0;
          *(undefined8 *)(puVar17 + -0x70) = 0x3b30d9d;
          pGVar10 = unaff_RBX;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (DG_Tweening_Tween_o *)0x0;
          }
          if ((char)uVar21 == '\0') {
            if (unaff_RBX != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
              *(UnityEngine_Vector2_Fields *)(puVar17 + -0x48) = (unaff_RBX->fields)._motionOffset.fields;
              *(undefined8 *)(puVar17 + -0x40) = 0;
label_03b30e3a:
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                *(undefined8 *)(puVar17 + -0x70) = 0x3b30e56;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30e61;
              pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pMVar16 = extraout_RDX;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                *(undefined8 *)(puVar17 + -0x70) = 0x3b30e76;
                il2cpp_runtime_helper_02337ed0();
                pMVar16 = extraout_RDX_00;
              }
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30e90;
              pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                                 (unaff_RBX,
                                  (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar17 + -0x48),
                                  (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar17 + -0x58),
                                  *(float *)(puVar17 + -0x5c),(int)uVar21 + 8,pMVar16);
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30e9d;
              pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30eb1;
              pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                                 (unaff_R14,*(float *)(puVar17 + -0x5c),(int)uVar21,method_01);
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30ebe;
              pDVar13 = DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar8,(MethodInfo *)0x0);
              pDVar8 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                 ((Il2CppObject *)pDVar13,1,MethodInfo_Sequence_SetUpdate_Sequence);
              return pDVar8;
            }
          }
          else if (unaff_RBX != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
            auVar28._0_8_ = 0;
            *(undefined8 *)(puVar17 + -0x70) = 0x3b30dcf;
            pGVar10 = unaff_RBX;
            Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                      (unaff_RBX,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar17 + -0x58),
                       (MethodInfo *)0x0);
            if (unaff_R14 != (UnityEngine_CanvasGroup_o *)0x0) {
              *(undefined8 *)(puVar17 + -0x70) = 0x3b30de5;
              UnityEngine_CanvasGroup__set_alpha(unaff_R14,0.0,(MethodInfo *)0x0);
              *(UnityEngine_Vector2_Fields *)(puVar17 + -0x48) = (unaff_RBX->fields)._motionOffset.fields;
              *(undefined8 *)(puVar17 + -0x40) = 0;
              if (g_data_057a694c == '\0') {
                *(undefined8 *)(puVar17 + -0x70) = 0x3b30e04;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              *(undefined8 *)(puVar17 + -0x58) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
              *(undefined8 *)(puVar17 + -0x50) = 0;
              goto label_03b30e3a;
            }
          }
        }
        *(undefined8 *)(puVar17 + -0x70) = 0x3b30ee8;
        pGVar9 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)il2cpp_runtime_helper_022b2c90();
        unaff_R15 = uVar21;
        fVar24 = (float)extraout_XMM0_Da;
Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide:
        *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8) = unaff_RBP;
        *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
        *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x18) = pGVar9;
        *(float *)((long)register0x00000020 + -0x14) = fVar24;
        if (g_data_057a9c26 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f13;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f1f;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9c26 = '\x01';
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f3e;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f4a;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (DG_Tweening_Tween_o *)0x0;
        }
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f6f;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar21 = auVar28._0_8_ & 0xff;
        uVar25 = 0;
        uVar26 = 0xc1a00000;
        fVar24 = *(float *)((long)register0x00000020 + -0x14);
        unaff_RBX = *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x10);
        unaff_RBP = *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8);
        puVar17 = (undefined1 *)register0x00000020;
        pGVar9 = pGVar10;
      } while( true );
    }
  }
label_03b304ff:
  uStack_40 = 0x3b30504;
  il2cpp_runtime_helper_022b2c90();
  uStack_40 = 0;
  auStack_48 = (undefined1  [8])auVar28._0_8_;
  puStack_58 = &TypeInfo_GisketchMotion;
  uStack_50 = go;
  if (g_data_057a9c40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActiveTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnKill_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Track_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    g_data_057a9c40 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (t != (Il2CppClass *)0x0) {
    iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ActiveTween);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    pMVar16 = (MethodInfo *)(__this_00 + 1);
    __this_00[1].klass = t;
    il2cpp_runtime_helper_022b4080();
    *(undefined1 *)&__this_00[1].monitor = uVar18;
    *(int32_t *)((long)&__this_00[1].monitor + 4) = iVar6;
    if (__this != (Il2CppObject *)0x0) {
      __this[1].monitor = __this_00;
      il2cpp_runtime_helper_022b4080(&__this[1].monitor);
      pMVar16 = TypeInfo_GisketchMotionDriver;
      if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar12 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(pMVar16);
      lVar4 = MethodInfo_Void_Add;
      if ((pGVar12 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) &&
         (pMVar16 = (MethodInfo *)(pGVar12->fields)._active, pMVar16 != (MethodInfo *)0x0)) {
        item = __this[1].monitor;
        piVar1 = (int32_t *)((long)&pMVar16->name + 4);
        *piVar1 = *piVar1 + 1;
        pGVar2 = ((System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__Fields *)
                 &pMVar16->invoker_method)->_items;
        if (pGVar2 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *)0x0) {
          uVar23 = *(uint *)&pMVar16->name;
          if (uVar23 < (uint)pGVar2->max_length) {
            *(uint *)&pMVar16->name = uVar23 + 1;
            pGVar2->m_Items[(int)uVar23] = item;
            il2cpp_runtime_helper_022b4080(pGVar2->m_Items + (int)uVar23);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar16,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          __this[1].klass = (t->_1).events;
          il2cpp_runtime_helper_022b4080(__this + 1);
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__OnKill_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnKill_Tween);
          return (DG_Tweening_Tween_o *)t;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pMVar16,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Balloon
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3b311b0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  undefined8 *puVar6;
  DG_Tweening_Tween_o *extraout_RAX;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar7;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_02;
  float fStack_90;
  float fStack_8c;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057a9c23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c23 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_CanvasGroup_o *)0x0;
  __this_01 = rect;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar7);
    UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar6 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = UVar12.fields.y - (float)((ulong)*puVar6 >> 0x20);
    fVar8 = UVar12.fields.z - *(float *)(puVar6 + 1);
    fVar9 = UVar12.fields.x - (float)*puVar6;
    if (9.9999994e-11 <= fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) {
      UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      fVar8 = UVar12.fields.z;
      fVar9 = UVar12.fields.x;
      fVar10 = UVar12.fields.y;
      uVar1 = UVar12.fields._0_8_;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar6 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar6 + 0xc);
      fVar9 = (float)uVar1;
      fVar10 = (float)((ulong)uVar1 >> 0x20);
      fVar8 = *(float *)((long)puVar6 + 0x14);
    }
    if ((char)enter == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      fStack_38 = (float)uVar1;
      fStack_34 = (float)((ulong)uVar1 >> 0x20);
      endValue.fields.x = fStack_38 * (float)0x3f666666;
      endValue.fields.y = fStack_34 * (float)0x3f666666;
      endValue.fields.z = fVar8 * 0.9;
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar4,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar7 = extraout_RDX_00;
      }
      fVar8 = duration * 0.75;
      bVar2 = 0;
label_03b314f1:
      pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar8,bVar2,pMVar7);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
      return pDVar5;
    }
    UVar12.fields.x = fVar9 * (float)0x3f570a3d;
    UVar12.fields.y = fVar10 * (float)0x3f570a3d;
    UVar12.fields.z = fVar8 * 0.84;
    __this_00 = (UnityEngine_CanvasGroup_o *)0x0;
    __this_01 = rect;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,UVar12,(MethodInfo *)0x0);
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.z = fVar8;
      endValue_00.fields.x = (float)(int)uVar1;
      endValue_00.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue_00,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar4,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar7 = extraout_RDX_02;
      }
      fVar8 = duration * 0.8;
      bVar2 = 1;
      goto label_03b314f1;
    }
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01;
  if (g_data_057a9c24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    __this_02 = (UnityEngine_RectTransform_o *)&MethodInfo_Sequence_SetUpdate_Sequence;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c24 = '\x01';
  }
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar6 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar11 = UVar12.fields.y - (float)((ulong)*puVar6 >> 0x20);
    fVar9 = UVar12.fields.z - *(float *)(puVar6 + 1);
    fVar10 = UVar12.fields.x - (float)*puVar6;
    if (9.9999994e-11 <= fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9) {
      UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar9 = UVar12.fields.z;
      fVar10 = UVar12.fields.x;
      fVar11 = UVar12.fields.y;
      uVar1 = UVar12.fields._0_8_;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar6 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar6 + 0xc);
      fVar10 = (float)uVar1;
      fVar11 = (float)((ulong)uVar1 >> 0x20);
      fVar9 = *(float *)((long)puVar6 + 0x14);
    }
    if (extraout_DL == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      fStack_90 = (float)uVar1;
      fStack_8c = (float)((ulong)uVar1 >> 0x20);
      endValue_01.fields.x = fStack_90 * 0.96;
      endValue_01.fields.y = fStack_8c * 0.96;
      endValue_01.fields.z = fVar9 * 0.96;
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)__this_01,endValue_01,fVar8,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar4,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX_03;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar7 = extraout_RDX_04;
      }
      bVar2 = 0;
    }
    else {
      value.fields.x = fVar10 * 0.86;
      value.fields.y = fVar11 * 0.86;
      value.fields.z = fVar9 * 0.86;
      __this_02 = __this_01;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_01,value,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b3183d;
      UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_02.fields.z = fVar9;
      endValue_02.fields.x = (float)(int)uVar1;
      endValue_02.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)__this_01,endValue_02,fVar8,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar4,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX_05;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar7 = extraout_RDX_06;
      }
      bVar2 = 1;
    }
    pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this_00,fVar8 * 0.75,bVar2,pMVar7);
    pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
    return pDVar5;
  }
label_03b3183d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Pop
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop (UnityEngine_Transform_o* target, UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x3b31530

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
          (UnityEngine_Transform_o *target,UnityEngine_CanvasGroup_o *group,float duration,bool_conflict enter
          ,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  bool_conflict enter_00;
  UnityEngine_Transform_o *__this;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  float fStack_38;
  float fStack_34;
  
  __this = target;
  if (g_data_057a9c24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    __this = (UnityEngine_Transform_o *)&MethodInfo_Sequence_SetUpdate_Sequence;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c24 = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    UVar9 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = UVar9.fields.y - (float)((ulong)*puVar2 >> 0x20);
    fVar6 = UVar9.fields.z - *(float *)(puVar2 + 1);
    fVar7 = UVar9.fields.x - (float)*puVar2;
    if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
      UVar9 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
      fVar6 = UVar9.fields.z;
      fVar7 = UVar9.fields.x;
      fVar8 = UVar9.fields.y;
      uVar1 = UVar9.fields._0_8_;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar2 + 0xc);
      fVar7 = (float)uVar1;
      fVar8 = (float)((ulong)uVar1 >> 0x20);
      fVar6 = *(float *)((long)puVar2 + 0x14);
    }
    if ((char)enter == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      fStack_38 = (float)uVar1;
      fStack_34 = (float)((ulong)uVar1 >> 0x20);
      endValue.fields.x = fStack_38 * 0.96;
      endValue.fields.y = fStack_34 * 0.96;
      endValue.fields.z = fVar6 * 0.96;
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale(target,endValue,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar4,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      enter_00 = 0;
    }
    else {
      UVar9.fields.x = fVar7 * 0.86;
      UVar9.fields.y = fVar8 * 0.86;
      UVar9.fields.z = fVar6 * 0.86;
      __this = target;
      UnityEngine_Transform__set_localScale(target,UVar9,(MethodInfo *)0x0);
      if (group == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b3183d;
      UnityEngine_CanvasGroup__set_alpha(group,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.z = fVar6;
      endValue_00.fields.x = (float)(int)uVar1;
      endValue_00.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale(target,endValue_00,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar4,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_02;
      }
      enter_00 = 1;
    }
    pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration * 0.75,enter_00,method_00);
    pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
    return pDVar5;
  }
label_03b3183d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Fade
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade (UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x3b31040

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
          (UnityEngine_CanvasGroup_o *group,float duration,bool_conflict enter,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_Tween_o *pDVar6;
  undefined8 *puVar7;
  DG_Tweening_Tween_o *extraout_RAX;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar8;
  char cVar9;
  UnityEngine_CanvasGroup_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o endValue_01;
  float local_c8;
  float fStack_c4;
  float local_70;
  float fStack_6c;
  
  if (g_data_057a9c25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Fade_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    g_data_057a9c25 = '\x01';
  }
  pUVar3 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  cVar9 = '\0';
  pUVar11 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    (pUVar3->fields).m_CachedPtr = (intptr_t)group;
    pUVar11 = (UnityEngine_Transform_o *)&pUVar3->fields;
    il2cpp_runtime_helper_022b4080();
    cVar9 = (char)group;
    pUVar10 = (UnityEngine_CanvasGroup_o *)(pUVar3->fields).m_CachedPtr;
    if ((char)enter == '\0') {
      if (pUVar10 != (UnityEngine_CanvasGroup_o *)0x0) {
        fVar12 = UnityEngine_CanvasGroup__get_alpha(pUVar10,(MethodInfo *)0x0);
        goto label_03b310fe;
      }
    }
    else {
      fVar12 = 0.0;
      if (pUVar10 != (UnityEngine_CanvasGroup_o *)0x0) {
label_03b310fe:
        cVar9 = '\0';
        UnityEngine_CanvasGroup__set_alpha(pUVar10,fVar12,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_CanvasGroup_o *)(pUVar3->fields).m_CachedPtr;
        pUVar11 = (UnityEngine_Transform_o *)0x0;
        if (pUVar10 != (UnityEngine_CanvasGroup_o *)0x0) {
          fVar12 = UnityEngine_CanvasGroup__get_alpha(pUVar10,(MethodInfo *)0x0);
          if ((char)enter == '\0') {
            fVar13 = 0.0;
          }
          else {
            fVar13 = 1.0;
          }
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          t = DG_Tweening_DOVirtual__Float(fVar12,fVar13,duration,onVirtualUpdate,(MethodInfo *)0x0);
          pDVar6 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
          return pDVar6;
        }
      }
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c23 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = (UnityEngine_CanvasGroup_o *)0x0;
  pUVar3 = pUVar11;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
    pMVar8 = (MethodInfo *)0x0;
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar8);
    UVar16 = UnityEngine_Transform__get_localScale(pUVar11,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar7 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar15 = UVar16.fields.y - (float)((ulong)*puVar7 >> 0x20);
    fVar13 = UVar16.fields.z - *(float *)(puVar7 + 1);
    fVar14 = UVar16.fields.x - (float)*puVar7;
    if (9.9999994e-11 <= fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13) {
      UVar16 = UnityEngine_Transform__get_localScale(pUVar11,(MethodInfo *)0x0);
      fVar13 = UVar16.fields.z;
      fVar14 = UVar16.fields.x;
      fVar15 = UVar16.fields.y;
      uVar1 = UVar16.fields._0_8_;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar7 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar7 + 0xc);
      fVar14 = (float)uVar1;
      fVar15 = (float)((ulong)uVar1 >> 0x20);
      fVar13 = *(float *)((long)puVar7 + 0x14);
    }
    if (cVar9 == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_70 = (float)uVar1;
      fStack_6c = (float)((ulong)uVar1 >> 0x20);
      UVar16.fields.x = local_70 * (float)0x3f666666;
      UVar16.fields.y = fStack_6c * (float)0x3f666666;
      UVar16.fields.z = fVar13 * 0.9;
      pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar11,UVar16,fVar12,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar5,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
      pMVar8 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar8 = extraout_RDX_00;
      }
      fVar12 = fVar12 * 0.75;
      bVar2 = 0;
label_03b314f1:
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar12,bVar2,pMVar8);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
      return pDVar6;
    }
    value.fields.x = fVar14 * (float)0x3f570a3d;
    value.fields.y = fVar15 * (float)0x3f570a3d;
    value.fields.z = fVar13 * 0.84;
    pUVar10 = (UnityEngine_CanvasGroup_o *)0x0;
    pUVar3 = pUVar11;
    UnityEngine_Transform__set_localScale(pUVar11,value,(MethodInfo *)0x0);
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue.fields.z = fVar13;
      endValue.fields.x = (float)(int)uVar1;
      endValue.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar11,endValue,fVar12,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar5,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
      pMVar8 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar8 = extraout_RDX_02;
      }
      fVar12 = fVar12 * 0.8;
      bVar2 = 1;
      goto label_03b314f1;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar3;
  if (g_data_057a9c24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pUVar11 = (UnityEngine_Transform_o *)&MethodInfo_Sequence_SetUpdate_Sequence;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c24 = '\x01';
  }
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
label_03b3183d:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar16 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  puVar7 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar15 = UVar16.fields.y - (float)((ulong)*puVar7 >> 0x20);
  fVar13 = UVar16.fields.z - *(float *)(puVar7 + 1);
  fVar14 = UVar16.fields.x - (float)*puVar7;
  if (9.9999994e-11 <= fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13) {
    UVar16 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
    fVar13 = UVar16.fields.z;
    fVar14 = UVar16.fields.x;
    fVar15 = UVar16.fields.y;
    uVar1 = UVar16.fields._0_8_;
  }
  else {
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
      puVar7 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    uVar1 = *(undefined8 *)((long)puVar7 + 0xc);
    fVar14 = (float)uVar1;
    fVar15 = (float)((ulong)uVar1 >> 0x20);
    fVar13 = *(float *)((long)puVar7 + 0x14);
  }
  if (extraout_DL == '\0') {
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    local_c8 = (float)uVar1;
    fStack_c4 = (float)((ulong)uVar1 >> 0x20);
    endValue_00.fields.x = local_c8 * 0.96;
    endValue_00.fields.y = fStack_c4 * 0.96;
    endValue_00.fields.z = fVar13 * 0.96;
    pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar3,endValue_00,fVar12,(MethodInfo *)0x0);
    pDVar6 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar5,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_04;
    }
    bVar2 = 0;
  }
  else {
    value_00.fields.x = fVar14 * 0.86;
    value_00.fields.y = fVar15 * 0.86;
    value_00.fields.z = fVar13 * 0.86;
    pUVar11 = pUVar3;
    UnityEngine_Transform__set_localScale(pUVar3,value_00,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b3183d;
    UnityEngine_CanvasGroup__set_alpha(pUVar10,0.0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    endValue_01.fields.z = fVar13;
    endValue_01.fields.x = (float)(int)uVar1;
    endValue_01.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
    pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar3,endValue_01,fVar12,(MethodInfo *)0x0);
    pDVar6 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                       ((Il2CppObject *)pDVar5,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_05;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_06;
    }
    bVar2 = 1;
  }
  pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar10,fVar12 * 0.75,bVar2,pMVar8);
  pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
  pDVar6 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
  return pDVar6;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Slide
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3b30ef0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  bool_conflict bVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  undefined8 in_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *unaff_RBX;
  UnityEngine_GameObject_o *unaff_RBP;
  uint enter_00;
  ulong uVar7;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar8;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  UnityEngine_CanvasGroup_o *unaff_R14;
  ulong unaff_R15;
  float extraout_XMM0_Da;
  
  uVar7 = (ulong)(uint)enter;
  do {
    *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    bVar2 = (byte)uVar7;
    *(float *)((long)register0x00000020 + -0x14) = duration;
    if (g_data_057a9c26 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f13;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f1f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c26 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f3e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f4a;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b30f6f;
      il2cpp_runtime_helper_02337ed0();
    }
    enter_00 = (uint)bVar2;
    uVar1 = *(undefined8 *)((long)register0x00000020 + -0x10);
    unaff_RBP = *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8);
    *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_CanvasGroup_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar1;
    *(undefined4 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x54) = 0xc1a00000;
    *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x4c) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x5c) = *(undefined4 *)((long)register0x00000020 + -0x14);
    if (g_data_057a9c27 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ce4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30cf0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30cfc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9c27 = '\x01';
    }
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d28;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar7 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d34;
    pGVar8 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    unaff_RBX = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    if ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect !=
        (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d4b;
      unaff_RBP = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      unaff_R13 = &TypeInfo_GisketchMotion;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d67;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d6f;
      unaff_R14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(unaff_RBP,pMVar6);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d7c;
      unaff_RBX = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d91;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar7 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d9d;
      pGVar8 = unaff_RBX;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if (bVar2 == 0) {
        if (unaff_RBX != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
               (unaff_RBX->fields)._motionOffset.fields;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
          goto label_03b30e3a;
        }
      }
      else if (unaff_RBX != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        uVar7 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30dcf;
        pGVar8 = unaff_RBX;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  (unaff_RBX,
                   (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),
                   (MethodInfo *)0x0);
        if (unaff_R14 != (UnityEngine_CanvasGroup_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30de5;
          UnityEngine_CanvasGroup__set_alpha(unaff_R14,0.0,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
               (unaff_RBX->fields)._motionOffset.fields;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
          if (g_data_057a694c == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e04;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          *(undefined8 *)((long)register0x00000020 + -0x58) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
label_03b30e3a:
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e56;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e61;
          pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pMVar6 = extraout_RDX;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e76;
            il2cpp_runtime_helper_02337ed0();
            pMVar6 = extraout_RDX_00;
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e90;
          pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                             (unaff_RBX,
                              (UnityEngine_Vector2_o)
                              *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48),
                              (UnityEngine_Vector2_o)
                              *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),
                              *(float *)((long)register0x00000020 + -0x5c),enter_00 + 8,pMVar6);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e9d;
          pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30eb1;
          pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                             (unaff_R14,*(float *)((long)register0x00000020 + -0x5c),enter_00,method_00);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ebe;
          pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar5,(MethodInfo *)0x0);
          pDVar5 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar5;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ee8;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x68);
    rect = (UnityEngine_RectTransform_o *)pGVar8;
    unaff_R15 = (ulong)enter_00;
    duration = extraout_XMM0_Da;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b30cb0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  uint enter_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Tween_o *pDVar3;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  UnityEngine_GameObject_o *unaff_RBP;
  ulong uVar6;
  ulong uVar7;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *x;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  UnityEngine_CanvasGroup_o *unaff_R14;
  ulong unaff_R15;
  undefined4 extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  fVar8 = offset.fields.x;
  fVar9 = offset.fields.y;
  uVar7 = (ulong)(uint)enter;
  do {
    uVar6 = uVar7;
    *(UnityEngine_GameObject_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_CanvasGroup_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(float *)((long)register0x00000020 + -0x58) = fVar8;
    *(float *)((long)register0x00000020 + -0x54) = fVar9;
    *(undefined4 *)((long)register0x00000020 + -0x50) = in_XMM1_Dc;
    *(undefined4 *)((long)register0x00000020 + -0x4c) = in_XMM1_Dd;
    *(float *)((long)register0x00000020 + -0x5c) = duration;
    if (g_data_057a9c27 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ce4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30cf0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30cfc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9c27 = '\x01';
    }
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d28;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar7 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d34;
    x = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    if ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect !=
        (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      pMVar5 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d4b;
      unaff_RBP = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      unaff_R13 = &TypeInfo_GisketchMotion;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d67;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d6f;
      unaff_R14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(unaff_RBP,pMVar5);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d7c;
      __this = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d91;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar7 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30d9d;
      x = __this;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if ((char)uVar6 == '\0') {
        if (__this != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
               (__this->fields)._motionOffset.fields;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
label_03b30e3a:
          enter_00 = (uint)uVar6 & 0xff;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e56;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e61;
          pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pMVar5 = extraout_RDX;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e76;
            il2cpp_runtime_helper_02337ed0();
            pMVar5 = extraout_RDX_00;
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e90;
          pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                             (__this,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48),
                              (UnityEngine_Vector2_o)
                              *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),
                              *(float *)((long)register0x00000020 + -0x5c),enter_00 + 8,pMVar5);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e9d;
          pDVar2 = DG_Tweening_TweenSettingsExtensions__Join(pDVar2,pDVar3,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30eb1;
          pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                             (unaff_R14,*(float *)((long)register0x00000020 + -0x5c),enter_00,method_00);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ebe;
          pDVar2 = DG_Tweening_TweenSettingsExtensions__Join(pDVar2,pDVar3,(MethodInfo *)0x0);
          pDVar3 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar2,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar3;
        }
      }
      else if (__this != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        uVar7 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30dcf;
        x = __this;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  (__this,(UnityEngine_Vector2_o)
                          *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),(MethodInfo *)0x0)
        ;
        if (unaff_R14 != (UnityEngine_CanvasGroup_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30de5;
          UnityEngine_CanvasGroup__set_alpha(unaff_R14,0.0,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
               (__this->fields)._motionOffset.fields;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
          if (g_data_057a694c == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30e04;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          *(undefined8 *)((long)register0x00000020 + -0x58) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
          goto label_03b30e3a;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b30ee8;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x70) = unaff_RBP;
    *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)((long)register0x00000020 + -0x78) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x80) = uVar4;
    *(undefined4 *)((long)register0x00000020 + -0x7c) = extraout_XMM0_Da;
    if (g_data_057a9c26 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b30f13;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b30f1f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c26 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b30f3e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b30f4a;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b30f6f;
      il2cpp_runtime_helper_02337ed0();
    }
    fVar8 = 0.0;
    fVar9 = -20.0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    duration = *(float *)((long)register0x00000020 + -0x7c);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x78);
    unaff_RBP = *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x70);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x68);
    uVar7 = uVar7 & 0xff;
    rect = (UnityEngine_RectTransform_o *)x;
    unaff_R15 = uVar6;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOffsetTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* layoutOffset, UnityEngine_Vector2_o start, UnityEngine_Vector2_o target, float duration, int32_t ease, const MethodInfo* method);
// 0x3b31860

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *layoutOffset,UnityEngine_Vector2_o start,
          UnityEngine_Vector2_o target,float duration,int32_t ease,MethodInfo *method)

{
  Il2CppObject *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar1;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Tween_o *extraout_RAX;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9c28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MotionOffsetTween_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MotionOffsetTween_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass13_0);
    g_data_057a9c28 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass13_0);
  pIVar1 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)layoutOffset;
    il2cpp_runtime_helper_022b4080(__this + 1,layoutOffset);
    local_38 = start.fields.x;
    fStack_34 = start.fields.y;
    *(float *)&__this[1].monitor = local_38;
    *(float *)((long)&__this[1].monitor + 4) = fStack_34;
    *(float *)&__this[2].klass = target.fields.x;
    *(float *)((long)&__this[2].klass + 4) = target.fields.y;
    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
    DG_Tweening_TweenCallback_float____ctor();
    t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
    pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    pIVar1 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar1,action,MethodInfo_Tweener_OnComplete_Tweener);
    pDVar2 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar1,1,MethodInfo_Tweener_SetUpdate_Tweener);
    return pDVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$EnsureCanvasGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b30f90

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  UnityEngine_CanvasGroup_o *__this;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar6;
  DG_Tweening_Tween_o *pDVar7;
  undefined8 *puVar8;
  UnityEngine_CanvasGroup_o *extraout_RAX;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar9;
  char cVar10;
  char cVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o endValue_01;
  float fStack_e0;
  float fStack_dc;
  float fStack_88;
  float fStack_84;
  
  cVar10 = (char)method;
  pUVar12 = go;
  if (g_data_057a9c29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    pUVar12 = (UnityEngine_GameObject_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c29 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_CanvasGroup_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return pUVar3;
    }
    pUVar3 = (UnityEngine_CanvasGroup_o *)UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    return pUVar3;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Fade_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    g_data_057a9c25 = '\x01';
  }
  pUVar4 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  cVar11 = '\0';
  pUVar13 = pUVar4;
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    (pUVar4->fields).m_CachedPtr = (intptr_t)pUVar12;
    pUVar13 = (UnityEngine_Transform_o *)&pUVar4->fields;
    il2cpp_runtime_helper_022b4080();
    cVar11 = (char)pUVar12;
    pUVar3 = (UnityEngine_CanvasGroup_o *)(pUVar4->fields).m_CachedPtr;
    if (cVar10 == '\0') {
      if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
        fVar15 = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
        goto label_03b310fe;
      }
    }
    else {
      fVar15 = 0.0;
      if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
label_03b310fe:
        cVar11 = '\0';
        UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar15,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_CanvasGroup_o *)(pUVar4->fields).m_CachedPtr;
        pUVar13 = (UnityEngine_Transform_o *)0x0;
        if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
          fVar15 = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
          if (cVar10 == '\0') {
            fVar16 = 0.0;
          }
          else {
            fVar16 = 1.0;
          }
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          t = DG_Tweening_DOVirtual__Float(fVar15,fVar16,fVar14,onVirtualUpdate,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_CanvasGroup_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
          return pUVar3;
        }
      }
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c23 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_CanvasGroup_o *)0x0;
  pUVar4 = pUVar13;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (UnityEngine_CanvasGroup_o *)0x0;
  }
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    pMVar9 = (MethodInfo *)0x0;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(pUVar12,pMVar9);
    UVar18 = UnityEngine_Transform__get_localScale(pUVar13,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar17 = UVar18.fields.y - (float)((ulong)*puVar8 >> 0x20);
    fVar15 = UVar18.fields.z - *(float *)(puVar8 + 1);
    fVar16 = UVar18.fields.x - (float)*puVar8;
    if (9.9999994e-11 <= fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) {
      UVar18 = UnityEngine_Transform__get_localScale(pUVar13,(MethodInfo *)0x0);
      fVar15 = UVar18.fields.z;
      fVar16 = UVar18.fields.x;
      fVar17 = UVar18.fields.y;
      uVar1 = UVar18.fields._0_8_;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar8 + 0xc);
      fVar16 = (float)uVar1;
      fVar17 = (float)((ulong)uVar1 >> 0x20);
      fVar15 = *(float *)((long)puVar8 + 0x14);
    }
    if (cVar11 == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      fStack_88 = (float)uVar1;
      fStack_84 = (float)((ulong)uVar1 >> 0x20);
      UVar18.fields.x = fStack_88 * (float)0x3f666666;
      UVar18.fields.y = fStack_84 * (float)0x3f666666;
      UVar18.fields.z = fVar15 * 0.9;
      pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar13,UVar18,fVar14,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar6,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_00;
      }
      fVar14 = fVar14 * 0.75;
      bVar2 = 0;
label_03b314f1:
      pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar14,bVar2,pMVar9);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_CanvasGroup_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar5,1,MethodInfo_Sequence_SetUpdate_Sequence);
      return pUVar3;
    }
    value.fields.x = fVar16 * (float)0x3f570a3d;
    value.fields.y = fVar17 * (float)0x3f570a3d;
    value.fields.z = fVar15 * 0.84;
    pUVar3 = (UnityEngine_CanvasGroup_o *)0x0;
    pUVar4 = pUVar13;
    UnityEngine_Transform__set_localScale(pUVar13,value,(MethodInfo *)0x0);
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue.fields.z = fVar15;
      endValue.fields.x = (float)(int)uVar1;
      endValue.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar13,endValue,fVar14,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar6,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_02;
      }
      fVar14 = fVar14 * 0.8;
      bVar2 = 1;
      goto label_03b314f1;
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar4;
  if (g_data_057a9c24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pUVar13 = (UnityEngine_Transform_o *)&MethodInfo_Sequence_SetUpdate_Sequence;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c24 = '\x01';
  }
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
label_03b3183d:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar18 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar17 = UVar18.fields.y - (float)((ulong)*puVar8 >> 0x20);
  fVar15 = UVar18.fields.z - *(float *)(puVar8 + 1);
  fVar16 = UVar18.fields.x - (float)*puVar8;
  if (9.9999994e-11 <= fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) {
    UVar18 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
    fVar15 = UVar18.fields.z;
    fVar16 = UVar18.fields.x;
    fVar17 = UVar18.fields.y;
    uVar1 = UVar18.fields._0_8_;
  }
  else {
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    uVar1 = *(undefined8 *)((long)puVar8 + 0xc);
    fVar16 = (float)uVar1;
    fVar17 = (float)((ulong)uVar1 >> 0x20);
    fVar15 = *(float *)((long)puVar8 + 0x14);
  }
  if (extraout_DL == '\0') {
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    fStack_e0 = (float)uVar1;
    fStack_dc = (float)((ulong)uVar1 >> 0x20);
    endValue_00.fields.x = fStack_e0 * 0.96;
    endValue_00.fields.y = fStack_dc * 0.96;
    endValue_00.fields.z = fVar15 * 0.96;
    pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,endValue_00,fVar14,(MethodInfo *)0x0);
    pDVar7 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar6,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_04;
    }
    bVar2 = 0;
  }
  else {
    value_00.fields.x = fVar16 * 0.86;
    value_00.fields.y = fVar17 * 0.86;
    value_00.fields.z = fVar15 * 0.86;
    pUVar13 = pUVar4;
    UnityEngine_Transform__set_localScale(pUVar4,value_00,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b3183d;
    UnityEngine_CanvasGroup__set_alpha(pUVar3,0.0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    endValue_01.fields.z = fVar15;
    endValue_01.fields.x = (float)(int)uVar1;
    endValue_01.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
    pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,endValue_01,fVar14,(MethodInfo *)0x0);
    pDVar7 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                       ((Il2CppObject *)pDVar6,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_05;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_06;
    }
    bVar2 = 1;
  }
  pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar3,fVar14 * 0.75,bVar2,pMVar9);
  pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_CanvasGroup_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar5,1,MethodInfo_Sequence_SetUpdate_Sequence);
  return pUVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetTargetToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x3b2fd40

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  UnityEngine_Transform_o *__this_00;
  DG_Tweening_Tween_o *tween;
  uint in_ECX;
  uint uVar3;
  undefined4 in_register_0000000c;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *go;
  
  if (g_data_057a9c2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c2a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  go = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)target.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (target.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
             UnityEngine_GameObject__GetComponent_object_(target.fields.GameObject,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    go = pGVar2;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
      __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar2,MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    go = __this;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (g_data_057a694c == '\0') {
        go = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)&TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (__this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                (__this,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
    }
    pGVar2 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
             UnityEngine_GameObject__GetComponent_object_(target.fields.GameObject,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    go = pGVar2;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_03b2ff09;
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)pGVar2,target.fields.RestAlpha,(MethodInfo *)0x0);
    }
    motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    __this_00 = UnityEngine_GameObject__get_transform(target.fields.GameObject,(MethodInfo *)0x0);
    go = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)target.fields.GameObject;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale(__this_00,target.fields.RestScale,(MethodInfo *)0x0);
      return;
    }
  }
label_03b2ff09:
  il2cpp_runtime_helper_022b2c90();
  uVar3 = in_ECX;
  if (g_data_057a9c20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c20 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  tween = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                    ((UnityEngine_GameObject_o *)go,motion,extraout_EDX & 0xff,
                     (MethodInfo *)CONCAT44(in_register_0000000c,uVar3));
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,in_ECX & 0xff,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Delay
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, int32_t index, const MethodInfo* method);
// 0x3b308d0

float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay
                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,int32_t index,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    fVar1 = (motion->fields).stagger;
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    return (float)index * fVar2 + (motion->fields).delay;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$NextGroupIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex (System_Collections_Generic_Dictionary_string__int__o* groupIndexes, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3b30810

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                  (System_Collections_Generic_Dictionary_string__int__o *groupIndexes,
                  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  System_String_o *key;
  uint in_EAX;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o **ppSVar3;
  System_Collections_Generic_Dictionary_string__int__o *value;
  undefined8 uStack_18;
  
  value = groupIndexes;
  uStack_18._0_4_ = in_EAX;
  if (g_data_057a9c2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    value = (System_Collections_Generic_Dictionary_string__int__o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c2b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    value = (System_Collections_Generic_Dictionary_string__int__o *)(motion->fields).group;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      ppSVar3 = &(motion->fields).group;
      goto joined_r0x03b308c4;
    }
  }
  ppSVar3 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
joined_r0x03b308c4:
  if (groupIndexes != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    key = *ppSVar3;
    System_Collections_Generic_Dictionary_object__int___TryGetValue
              ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,(Il2CppObject *)key,
               (int32_t *)((long)&uStack_18 + 4),MethodInfo_Boolean_TryGetValue);
    System_Collections_Generic_Dictionary_object__int___set_Item
              ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,(Il2CppObject *)key,
               uStack_18._4_4_ + 1,MethodInfo_Void_set_Item);
    return uStack_18._4_4_;
  }
  iVar2 = il2cpp_runtime_helper_022b2c90();
  if (value == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    return iVar2;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionFor
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x3b307f0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor
          (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool_conflict enter,
          bool_conflict explicitExitOnly,MethodInfo *method)

{
  if ((enter != 0) ||
     ((target.fields.Exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 &&
      ((char)explicitExitOnly == '\0')))) {
    target.fields.Exit = target.fields.Enter;
  }
  return target.fields.Exit;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasExplicitExit
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit (System_Collections_Generic_List_GisketchMotionTarget__o* targets, const MethodInfo* method);
// 0x3b30700

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit
          (System_Collections_Generic_List_GisketchMotionTarget__o *targets,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar7;
  undefined1 auStack_58 [40];
  
  cVar5 = (char)method;
  pSVar7 = targets;
  if (g_data_057a9c2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar7 = (System_Collections_Generic_List_GisketchMotionTarget__o *)&MethodInfo_GisketchMotionTarget_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c2c = '\x01';
  }
  iVar6 = (int)pSVar7;
  if (targets == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((iVar6 != 0) ||
       (((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)auStack_58._24_8_ ==
         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 && (cVar5 == '\0')))) {
      auStack_58._24_8_ = auStack_58._16_8_;
    }
    return (bool_conflict)auStack_58._24_8_;
  }
  uVar4 = 0;
  if (0 < (targets->fields)._size) {
    do {
      System_Collections_Generic_List_GisketchMotionTarget___get_Item
                ((Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *)auStack_58,targets,(int)uVar4,
                 MethodInfo_GisketchMotionTarget_get_Item);
      uVar1 = auStack_58._16_8_;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)uVar1 !=
           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
         (bVar2 = System_String__IsNullOrEmpty
                            (((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_Fields *)(uVar1 + 0x10))->
                             preset,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
        return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (targets->fields)._size);
  }
  return 0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3b31a10

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion
          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  uint uVar1;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x3b31a30

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder
                  (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool_conflict enter,
                  bool_conflict explicitExitOnly,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057a9c2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c2d = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)enter == '\0') {
    if ((char)explicitExitOnly != '\0') {
      target.fields.Enter = target.fields.Exit;
    }
    if (target.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      target.fields.Enter = target.fields.Exit;
    }
  }
  if (target.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((target.fields.Enter)->fields).order;
  }
  return iVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayMainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel (UnityEngine_GameObject_o* go, bool enter, float duration, const MethodInfo* method);
// 0x3b31ac0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
          (UnityEngine_GameObject_o *go,bool_conflict enter,float duration,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  DG_Tweening_Tween_o *pDVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *pIVar9;
  DG_Tweening_TweenCallback_float__o *pDVar10;
  DG_Tweening_Tweener_o *pDVar11;
  DG_Tweening_TweenCallback_o *pDVar12;
  UnityEngine_GameObject_o *go_00;
  UnityEngine_CanvasGroup_o *pUVar13;
  Il2CppObject *pIVar14;
  DG_Tweening_Sequence_o *pDVar15;
  UnityEngine_RectTransform_o *pUVar16;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar17;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar18;
  UnityEngine_RectTransform_o *pUVar19;
  DG_Tweening_Tween_o *pDVar20;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *in_RCX;
  undefined8 *puVar21;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar22;
  Il2CppObject *pIVar23;
  void **ppvVar24;
  MethodInfo *method_01;
  char cVar25;
  char cVar26;
  uint uVar27;
  ulong uVar28;
  Il2CppClass *pIVar29;
  Il2CppClass *rect;
  float fVar30;
  undefined4 uVar31;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar36;
  undefined8 uStack_158;
  UnityEngine_Vector2_Fields UStack_c8;
  
  if (g_data_057a9c2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c2e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar7 = (DG_Tweening_Tween_o *)0x0;
  cVar25 = '\0';
  pIVar29 = (Il2CppClass *)go;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar22 = extraout_RDX;
  if ((char)bVar5 == '\0') {
label_03b31b87:
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar22 = extraout_RDX_01;
    }
    pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar7,0,pMVar22);
    return pDVar7;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel(pUVar6,duration,enter & 0xff,0,in_RCX);
    pMVar22 = extraout_RDX_00;
    goto label_03b31b87;
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuPanel_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuPanel_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    g_data_057a9c30 = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar26 = '\0';
  rect = pIVar29;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pIVar29 != (Il2CppClass *)0x0) {
    UVar36 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pIVar29,(MethodInfo *)0x0);
    fVar33 = UVar36.fields.m_Width;
    in_XMM1_Db = UVar36.fields.m_Height;
    cVar26 = '\0';
    in_XMM1_Da = fVar33;
    pIVar9 = (Il2CppClass *)
             Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                       ((UnityEngine_RectTransform_o *)pIVar29,(MethodInfo *)0x0);
    rect = pIVar29;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar23 = pIVar8 + 1;
      pIVar8[1].klass = pIVar9;
      il2cpp_runtime_helper_022b4080(pIVar23);
      rect = pIVar8[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar26 = '\0';
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      fVar32 = 1.0;
      if (1.0 <= fVar33) {
        fVar32 = fVar33;
      }
      fVar32 = fVar32 * 1.08;
      pIVar29 = rect;
      if ((cVar25 != '\0') && (extraout_DL != '\0')) {
        pIVar29 = pIVar23->klass;
        if (g_data_057a9c8a == '\0') {
          rect = (Il2CppClass *)&TypeInfo_Vector2;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9c8a = '\x01';
        }
        if (pIVar29 == (Il2CppClass *)0x0) goto label_03b31ecd;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
        in_XMM1_Da = (float)uVar1;
        in_XMM1_Db = (float)((ulong)uVar1 >> 0x20);
        cVar26 = '\0';
        offset.fields.y = fVar32 * in_XMM1_Db;
        offset.fields.x = fVar32 * in_XMM1_Da;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar29,offset,(MethodInfo *)0x0);
      }
      rect = pIVar29;
      if (pIVar23->klass != (Il2CppClass *)0x0) {
        pIVar8[1].monitor = (pIVar23->klass->_1).this_arg.data;
        if (cVar25 == '\0') {
          if (g_data_057a9c8a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a9c8a = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
          fVar33 = fVar32 * (float)uVar1;
          fVar32 = fVar32 * (float)((ulong)uVar1 >> 0x20);
        }
        else {
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          fVar33 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar32 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        }
        pIVar8[2].klass = (Il2CppClass *)CONCAT44(fVar32,fVar33);
        pDVar10 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        pDVar11 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar30,pDVar10,(MethodInfo *)0x0);
        pDVar12 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar8 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar11,pDVar12,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar8,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar7;
      }
    }
  }
label_03b31ecd:
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  UStack_c8.y = in_XMM1_Db;
  UStack_c8.x = in_XMM1_Da;
  if (g_data_057a9c31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    g_data_057a9c31 = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pIVar29 = rect;
  pIVar9 = (Il2CppClass *)
           Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                     ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar23 = pIVar8 + 1;
    pIVar8[1].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(pIVar23);
    pIVar29 = pIVar8[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (rect != (Il2CppClass *)0x0) {
      pMVar22 = (MethodInfo *)0x0;
      go_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar13 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go_00,pMVar22);
      pIVar8[2].monitor = pUVar13;
      il2cpp_runtime_helper_022b4080(&pIVar8[2].monitor,pUVar13);
      pIVar14 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)rect,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
      ppvVar24 = &pIVar8[3].monitor;
      pIVar8[3].monitor = pIVar14;
      pIVar29 = (Il2CppClass *)ppvVar24;
      il2cpp_runtime_helper_022b4080();
      if (cVar26 == '\0') {
label_03b3210c:
        if (pIVar23->klass != (Il2CppClass *)0x0) {
          pIVar8[1].monitor = (pIVar23->klass->_1).this_arg.data;
          if (cVar26 != '\0') {
            if (g_data_057a694c == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            UStack_c8 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          }
          pIVar8[2].klass = (Il2CppClass *)UStack_c8;
          pIVar29 = (Il2CppClass *)0x0;
          if (pIVar8[2].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
            fVar33 = UnityEngine_CanvasGroup__get_alpha(pIVar8[2].monitor,(MethodInfo *)0x0);
            *(float *)&pIVar8[3].klass = fVar33;
            if (cVar26 == '\0') {
              uVar31 = 0;
            }
            else {
              uVar31 = 0x3f800000;
            }
            *(undefined4 *)((long)&pIVar8[3].klass + 4) = uVar31;
            pUVar3 = pIVar8[3].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar22 = (MethodInfo *)0x0;
            bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            fVar33 = 0.0;
            if ((char)bVar5 == '\0') {
label_03b321d8:
              *(float *)&pIVar8[4].klass = fVar33;
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar10 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
              DG_Tweening_TweenCallback_float____ctor();
              pDVar11 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar30,pDVar10,(MethodInfo *)0x0);
              pDVar15 = DG_Tweening_TweenSettingsExtensions__Join
                                  (pDVar15,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
              pDVar12 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pIVar8 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                 ((Il2CppObject *)pDVar15,pDVar12,MethodInfo_Sequence_OnComplete_Sequence);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
              return pDVar7;
            }
            pIVar29 = (Il2CppClass *)0x0;
            if (*ppvVar24 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
              fVar33 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(*ppvVar24,pMVar22);
              goto label_03b321d8;
            }
          }
        }
      }
      else {
        pIVar29 = (Il2CppClass *)0x0;
        if (pIVar23->klass != (Il2CppClass *)0x0) {
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                    ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar23->klass,
                     (UnityEngine_Vector2_o)UStack_c8,(MethodInfo *)0x0);
          pUVar13 = pIVar8[2].monitor;
          pIVar29 = (Il2CppClass *)0x0;
          if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
            pMVar22 = (MethodInfo *)0x0;
            UnityEngine_CanvasGroup__set_alpha(pUVar13,0.0,(MethodInfo *)0x0);
            pIVar29 = *ppvVar24;
            if (pIVar29 != (Il2CppClass *)0x0) {
              Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)pIVar29,ABS(in_XMM1_Db) * 0.18,
                         pMVar22);
            }
            goto label_03b3210c;
          }
        }
      }
    }
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    g_data_057a9c32 = '\x01';
  }
  pUVar16 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  cVar25 = '\0';
  pUVar6 = pUVar16;
  System_Object___ctor((Il2CppObject *)pUVar16,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar16[1].monitor = pIVar29;
    il2cpp_runtime_helper_022b4080(&pUVar16[1].monitor);
    pUVar3 = pUVar16[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pGVar17 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(pUVar16[1].monitor,(MethodInfo *)0x0);
    ((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr = (intptr_t)pGVar17;
    il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16->fields);
    pUVar6 = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar25 = '\0';
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    lVar4 = ((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr;
    if (lVar4 != 0) {
      pUVar16[1].klass = *(UnityEngine_RectTransform_c **)(lVar4 + 0x30);
      pUVar6 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar16[1].monitor != (UnityEngine_Transform_o *)0x0) {
        cVar25 = '\0';
        UVar35 = UnityEngine_Transform__get_localScale(pUVar16[1].monitor,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar34 = UVar35.fields.y - (float)((ulong)*puVar21 >> 0x20);
        fVar33 = UVar35.fields.z - *(float *)(puVar21 + 1);
        fVar32 = UVar35.fields.x - (float)*puVar21;
        if (fVar32 * fVar32 + fVar34 * fVar34 + fVar33 * fVar33 < 9.9999994e-11) {
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
            puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar32 = (float)*(undefined8 *)((long)puVar21 + 0xc);
          fVar34 = (float)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20);
          fVar33 = *(float *)((long)puVar21 + 0x14);
label_03b32504:
          ((UnityEngine_Object_Fields *)&pUVar16[1].fields)->m_CachedPtr = CONCAT44(fVar34,fVar32);
          *(float *)&pUVar16[2].klass = fVar33;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pDVar10 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          pDVar11 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar30,pDVar10,(MethodInfo *)0x0);
          pDVar15 = DG_Tweening_TweenSettingsExtensions__Join
                              (pDVar15,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
          pDVar12 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          pIVar8 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar15,pDVar12,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar7 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar7;
        }
        __this = pUVar16[1].monitor;
        pUVar6 = (UnityEngine_RectTransform_o *)0x0;
        if (__this != (UnityEngine_Transform_o *)0x0) {
          UVar35 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
          fVar33 = UVar35.fields.z;
          fVar32 = UVar35.fields.x;
          fVar34 = UVar35.fields.y;
          goto label_03b32504;
        }
      }
    }
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    g_data_057a9c36 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar27 = 0;
  pUVar16 = pUVar6;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    UVar35 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar34 = UVar35.fields.y - (float)((ulong)*puVar21 >> 0x20);
    fVar33 = UVar35.fields.z - *(float *)(puVar21 + 1);
    fVar32 = UVar35.fields.x - (float)*puVar21;
    if (9.9999994e-11 <= fVar32 * fVar32 + fVar34 * fVar34 + fVar33 * fVar33) {
      UVar35 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
      fVar33 = UVar35.fields.z;
      fVar32 = UVar35.fields.x;
      fVar34 = UVar35.fields.y;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar32 = (float)*(undefined8 *)((long)puVar21 + 0xc);
      fVar34 = (float)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20);
      fVar33 = *(float *)((long)puVar21 + 0x14);
    }
    if (cVar25 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      value.fields.y = fVar34;
      value.fields.x = fVar32;
      value.fields.z = fVar33;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,value,(MethodInfo *)0x0);
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar6,(UnityEngine_Vector3_o)endValue,fVar30,
                           (MethodInfo *)0x0);
      pDVar15 = (DG_Tweening_Sequence_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar18,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      puVar21 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
    }
    else {
      UVar35.fields.x = fVar32 * 1.35;
      UVar35.fields.y = fVar34 * 1.35;
      UVar35.fields.z = fVar33 * 1.35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,UVar35,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.x = fVar32 * 0.88;
      endValue_00.fields.y = fVar34 * 0.88;
      endValue_00.fields.z = fVar33 * 0.88;
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar6,endValue_00,fVar30 * 0.55,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar18,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar15 = DG_Tweening_TweenSettingsExtensions__Append(pDVar15,pDVar7,(MethodInfo *)0x0);
      endValue_01.fields.z = fVar33;
      endValue_01.fields.x = fVar32;
      endValue_01.fields.y = fVar34;
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar6,endValue_01,fVar30 * 0.45,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar18,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar15 = DG_Tweening_TweenSettingsExtensions__Append(pDVar15,pDVar7,(MethodInfo *)0x0);
      puVar21 = &MethodInfo_Sequence_SetUpdate_Sequence;
    }
    pDVar7 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar15,1,(MethodInfo_25F47A0 *)*puVar21);
    return pDVar7;
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar28 = 0;
  pUVar6 = pUVar16;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    UVar36 = UnityEngine_RectTransform__get_rect(pUVar16,(MethodInfo *)0x0);
    fVar33 = 64.0;
    if (64.0 <= UVar36.fields.m_Width) {
      fVar33 = UVar36.fields.m_Width;
    }
    if ((char)uVar27 == '\0') {
      fVar33 = fVar33 * 1.5;
    }
    pMVar22 = extraout_RDX_02;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar22 = extraout_RDX_03;
    }
    offset_02.fields.y = 0.0;
    offset_02.fields.x = fVar33;
    pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (pUVar16,fVar30,uVar27 & 0xff,offset_02,pMVar22);
    return pDVar7;
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar19 = (UnityEngine_RectTransform_o *)0x0;
  uVar27 = 0;
  pUVar16 = pUVar6;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar27 = 0;
    pUVar16 = pUVar19;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar19 != (UnityEngine_RectTransform_o *)0x0) {
      UVar36 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
      fVar33 = 64.0;
      if (64.0 <= UVar36.fields.m_Width) {
        fVar33 = UVar36.fields.m_Width;
      }
      pMVar22 = extraout_RDX_04;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar22 = extraout_RDX_05;
      }
      method_01 = (MethodInfo *)(uVar28 & 0xff);
      uVar27 = (uint)method_01;
      offset_00.fields.y = 0.0;
      offset_00.fields.x = fVar33;
      pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         (pUVar19,fVar30,uVar27,offset_00,pMVar22);
      pUVar16 = (UnityEngine_RectTransform_o *)
                Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                          ((UnityEngine_GameObject_o *)pUVar6,method_01);
      pDVar20 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                          ((UnityEngine_CanvasGroup_o *)pUVar16,fVar30,uVar27,method_00);
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar22 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar30,52.0,pMVar22);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar15 = (DG_Tweening_Sequence_o *)
                  DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                            ((Il2CppObject *)pDVar15,1,MethodInfo_Sequence_SetUpdate_Sequence);
        if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar7,(MethodInfo *)0x0);
        }
        if (pDVar20 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar20,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar15;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar15,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar15;
      }
    }
  }
  else if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar30 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar19 = (UnityEngine_RectTransform_o *)0x0;
  pUVar6 = pUVar16;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pUVar16 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = pUVar19;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar36 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
  fVar33 = 64.0;
  if (64.0 <= UVar36.fields.m_Width) {
    fVar33 = UVar36.fields.m_Width;
  }
  pMVar22 = extraout_RDX_06;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar22 = extraout_RDX_07;
  }
  offset_01.fields.y = 0.0;
  offset_01.fields.x = -fVar33;
  pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (pUVar19,fVar30,uVar27 & 0xff,offset_01,pMVar22);
  if ((char)uVar27 != '\0') {
    pUVar6 = pUVar19;
    if (pUVar16 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus)
    ;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar20 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                          (__this_00,fVar30,(MethodInfo *)0x0);
      iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar20 = (DG_Tweening_Tween_o *)0x0;
  iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar15 = (DG_Tweening_Sequence_o *)
            DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar15,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar7,(MethodInfo *)0x0);
  }
  if (pDVar20 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar20,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar15;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween (UnityEngine_GameObject_o* go, System_String_o* preset, float duration, bool enter, const MethodInfo* method);
// 0x3b308f0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
          (UnityEngine_GameObject_o *go,System_String_o *preset,float duration,bool_conflict enter,
          MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  undefined1 auVar2 [16];
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  DG_Tweening_Tween_o *pDVar5;
  MethodInfo *pMVar6;
  UnityEngine_CanvasGroup_o *pUVar7;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  DG_Tweening_Sequence_o *pDVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  UnityEngine_Object_Fields UVar11;
  UnityEngine_GameObject_o *go_00;
  Il2CppObject *pIVar12;
  DG_Tweening_TweenCallback_float__o *pDVar13;
  DG_Tweening_Tweener_o *pDVar14;
  DG_Tweening_TweenCallback_o *pDVar15;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar16;
  DG_Tweening_Tween_o *pDVar17;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_01;
  DG_Tweening_Tween_o *extraout_RAX;
  undefined8 *puVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *unaff_RBX;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char cVar21;
  UnityEngine_Object_Fields unaff_RBP;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  System_String_o *pSVar25;
  MethodInfo *pMVar26;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar27;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *x_00;
  MethodInfo *unaff_R12;
  undefined8 *unaff_R13;
  MethodInfo *unaff_R14;
  MethodInfo *unaff_R15;
  UnityEngine_Object_Fields __this_02;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  float fVar29;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Da;
  uint in_XMM1_Db;
  float fVar30;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar34;
  undefined1 auStack_b0 [12];
  float local_a4;
  undefined1 auStack_a0 [16];
  float fStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  MethodInfo *local_80;
  MethodInfo *pMStack_78;
  MethodInfo *local_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  float fStack_4c;
  UnityEngine_Vector2_Fields UStack_48;
  undefined8 uStack_40;
  MethodInfo *pMStack_30;
  
  puVar19 = &stack0xffffffffffffffd8;
  pUVar7 = (UnityEngine_CanvasGroup_o *)(ulong)(uint)enter;
  pSVar25 = preset;
  pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)go;
  if (g_data_057a9c2f == '\0') {
    pMStack_30 = (MethodInfo *)0x3b3091c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pMStack_30 = (MethodInfo *)0x3b30928;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pMStack_30 = (MethodInfo *)0x3b30934;
    il2cpp_runtime_helper_023445d0(&"mainmenubrushintro");
    pMStack_30 = (MethodInfo *)0x3b30940;
    il2cpp_runtime_helper_023445d0(&"mainmenulogoblades");
    pMStack_30 = (MethodInfo *)0x3b3094c;
    il2cpp_runtime_helper_023445d0(&"mainmenutippanel");
    pMStack_30 = (MethodInfo *)0x3b30958;
    il2cpp_runtime_helper_023445d0(&"mainmenulogoimpact");
    pMStack_30 = (MethodInfo *)0x3b30964;
    il2cpp_runtime_helper_023445d0(&"brushsidepanelcontentintro");
    pMStack_30 = (MethodInfo *)0x3b30970;
    il2cpp_runtime_helper_023445d0(&"mainmenulogotext");
    pMStack_30 = (MethodInfo *)0x3b3097c;
    il2cpp_runtime_helper_023445d0(&"mainmenupanel");
    pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)&"mainmenufootericonintro";
    pMStack_30 = (MethodInfo *)0x3b30988;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c2f = '\x01';
  }
  if (preset == (System_String_o *)0x0) {
label_03b30ca2:
    pMStack_30 = (MethodInfo *)0x3b30ca7;
    uVar28 = il2cpp_runtime_helper_022b2c90();
    do {
      *(System_String_o **)(puVar19 + -8) = preset;
      *(MethodInfo **)(puVar19 + -0x10) = unaff_R15;
      *(UnityEngine_CanvasGroup_o **)(puVar19 + -0x18) = pUVar7;
      *(undefined8 **)(puVar19 + -0x20) = unaff_R13;
      *(MethodInfo **)(puVar19 + -0x28) = unaff_R12;
      *(UnityEngine_GameObject_o **)(puVar19 + -0x30) = go;
      *(undefined4 *)(puVar19 + -0x58) = in_XMM1_Da;
      *(uint *)(puVar19 + -0x54) = in_XMM1_Db;
      *(undefined4 *)(puVar19 + -0x50) = in_XMM1_Dc;
      *(undefined4 *)(puVar19 + -0x4c) = in_XMM1_Dd;
      unaff_R15 = (MethodInfo *)((ulong)pSVar25 & 0xffffffff);
      *(undefined4 *)(puVar19 + -0x5c) = uVar28;
      if (g_data_057a9c27 == '\0') {
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30ce4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30cf0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30cfc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d08;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
        g_data_057a9c27 = '\x01';
      }
      unaff_R12 = (MethodInfo *)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d28;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar23 = 0;
      *(undefined8 *)(puVar19 + -0x70) = 0x3b30d34;
      x_00 = pGVar27;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      __this_00 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
      if (pGVar27 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d4b;
        preset = (System_String_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar27,(MethodInfo *)0x0);
        unaff_R13 = &TypeInfo_GisketchMotion;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          *(undefined8 *)(puVar19 + -0x70) = 0x3b30d67;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d6f;
        pUVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                           ((UnityEngine_GameObject_o *)preset,pMVar6);
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d7c;
        __this_00 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                              ((UnityEngine_RectTransform_o *)pGVar27,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar19 + -0x70) = 0x3b30d91;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar23 = 0;
        *(undefined8 *)(puVar19 + -0x70) = 0x3b30d9d;
        x_00 = __this_00;
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return (DG_Tweening_Tween_o *)0x0;
        }
        if ((char)unaff_R15 == '\0') {
          if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
            *(UnityEngine_Vector2_Fields *)(puVar19 + -0x48) = (__this_00->fields)._motionOffset.fields;
            *(undefined8 *)(puVar19 + -0x40) = 0;
label_03b30e3a:
            uVar22 = (uint)pSVar25 & 0xff;
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              *(undefined8 *)(puVar19 + -0x70) = 0x3b30e56;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30e61;
            pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pMVar6 = extraout_RDX;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              *(undefined8 *)(puVar19 + -0x70) = 0x3b30e76;
              il2cpp_runtime_helper_02337ed0();
              pMVar6 = extraout_RDX_00;
            }
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30e90;
            pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                               (__this_00,
                                (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar19 + -0x48),
                                (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar19 + -0x58),
                                *(float *)(puVar19 + -0x5c),uVar22 + 8,pMVar6);
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30e9d;
            pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar5,(MethodInfo *)0x0);
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30eb1;
            pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                               (pUVar7,*(float *)(puVar19 + -0x5c),uVar22,method_00);
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30ebe;
            pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar5,(MethodInfo *)0x0);
            pDVar5 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                               ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
            return pDVar5;
          }
        }
        else if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          uVar23 = 0;
          *(undefined8 *)(puVar19 + -0x70) = 0x3b30dcf;
          x_00 = __this_00;
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                    (__this_00,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar19 + -0x58),
                     (MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_CanvasGroup_o *)0x0) {
            *(undefined8 *)(puVar19 + -0x70) = 0x3b30de5;
            UnityEngine_CanvasGroup__set_alpha(pUVar7,0.0,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)(puVar19 + -0x48) = (__this_00->fields)._motionOffset.fields;
            *(undefined8 *)(puVar19 + -0x40) = 0;
            if (g_data_057a694c == '\0') {
              *(undefined8 *)(puVar19 + -0x70) = 0x3b30e04;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            *(undefined8 *)(puVar19 + -0x58) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
            *(undefined8 *)(puVar19 + -0x50) = 0;
            goto label_03b30e3a;
          }
        }
      }
      *(undefined8 *)(puVar19 + -0x70) = 0x3b30ee8;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      *(System_String_o **)(puVar19 + -0x70) = preset;
      *(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o **)(puVar19 + -0x78) = __this_00;
      *(undefined8 *)(puVar19 + -0x80) = uVar9;
      *(undefined4 *)(puVar19 + -0x7c) = extraout_XMM0_Da;
      if (g_data_057a9c26 == '\0') {
        *(undefined8 *)(puVar19 + -0x88) = 0x3b30f13;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
        *(undefined8 *)(puVar19 + -0x88) = 0x3b30f1f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c26 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar19 + -0x88) = 0x3b30f3e;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar19 + -0x88) = 0x3b30f4a;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        *(undefined8 *)(puVar19 + -0x88) = 0x3b30f6f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = (System_String_o *)(uVar23 & 0xff);
      in_XMM1_Da = 0;
      in_XMM1_Db = 0xc1a00000;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      uVar28 = *(undefined4 *)(puVar19 + -0x7c);
      go = *(UnityEngine_GameObject_o **)(puVar19 + -0x78);
      preset = *(System_String_o **)(puVar19 + -0x70);
      puVar19 = puVar19 + -0x68;
      pGVar27 = x_00;
    } while( true );
  }
  pMStack_30 = (MethodInfo *)0x3b309ac;
  pSVar25 = "mainmenupanel";
  pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
  bVar3 = System_String__Contains(preset,"mainmenupanel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pMStack_30 = (MethodInfo *)0x3b309cb;
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b309e6;
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel(pUVar4,duration,enter & 0xff,1,method)
      ;
      return pDVar5;
    }
    goto label_03b30ca2;
  }
  pMStack_30 = (MethodInfo *)0x3b30a19;
  pSVar25 = "mainmenulogotext";
  pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
  bVar3 = System_String__Contains(preset,"mainmenulogotext",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pMStack_30 = (MethodInfo *)0x3b30a74;
    pSVar25 = "mainmenulogoblades";
    pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
    bVar3 = System_String__Contains(preset,"mainmenulogoblades",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b30ca2;
      pMStack_30 = (MethodInfo *)0x3b30a93;
      unaff_R14 = (MethodInfo *)
                  UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b30aae;
        il2cpp_runtime_helper_02337ed0();
      }
      in_XMM1_Db = 0xc3820000;
      goto label_03b30ab9;
    }
    pMStack_30 = (MethodInfo *)0x3b30ae3;
    pSVar25 = "mainmenulogoimpact";
    pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
    bVar3 = System_String__Contains(preset,"mainmenulogoimpact",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (go != (UnityEngine_GameObject_o *)0x0) {
        pMStack_30 = (MethodInfo *)0x3b30b02;
        pMVar6 = MethodInfo_RectTransform_GetComponent_RectTransform;
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          pMStack_30 = (MethodInfo *)0x3b30b1d;
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact(pUVar4,duration,pMVar6);
        return pDVar5;
      }
      goto label_03b30ca2;
    }
    pMStack_30 = (MethodInfo *)0x3b30b47;
    pSVar25 = "mainmenufootericonintro";
    pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
    bVar3 = System_String__Contains(preset,"mainmenufootericonintro",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b30ca2;
      pMStack_30 = (MethodInfo *)0x3b30b66;
      pMVar6 = (MethodInfo *)
               UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b30b81;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar23 = (ulong)(enter & 0xff);
      goto Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro;
    }
    pMStack_30 = (MethodInfo *)0x3b30baf;
    pSVar25 = "mainmenutippanel";
    pGVar27 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)preset;
    bVar3 = System_String__Contains(preset,"mainmenutippanel",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b30ca2;
      pMStack_30 = (MethodInfo *)0x3b30bce;
      pMVar10 = (MethodInfo *)
                UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b30be9;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar23 = (ulong)(enter & 0xff);
      goto Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel;
    }
    pMStack_30 = (MethodInfo *)0x3b30c17;
    bVar3 = System_String__Contains(preset,"brushsidepanelcontentintro",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b30c33;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = (ulong)(enter & 0xff);
      puVar20 = (undefined1 *)register0x00000020;
      pMVar6 = (MethodInfo *)go;
      goto Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro;
    }
    pMStack_30 = (MethodInfo *)0x3b30c61;
    bVar3 = System_String__Contains(preset,"mainmenubrushintro",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      pMStack_30 = (MethodInfo *)0x3b30c7d;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar22 = enter & 0xff;
  }
  else {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b30ca2;
    pMStack_30 = (MethodInfo *)0x3b30a38;
    unaff_R14 = (MethodInfo *)
                UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      pMStack_30 = (MethodInfo *)0x3b30a53;
      il2cpp_runtime_helper_02337ed0();
    }
    in_XMM1_Db = 0x43700000;
label_03b30ab9:
    in_XMM1_Dd = 0;
    in_XMM1_Dc = 0;
    pMVar6 = (MethodInfo *)(ulong)(enter & 0xff);
    UStack_48 = (UnityEngine_Vector2_Fields)((ulong)in_XMM1_Db << 0x20);
    uStack_40 = 0;
    fStack_4c = duration;
    pMStack_30 = unaff_RBX;
    if (g_data_057a9c31 == '\0') {
      pMStack_60 = (MethodInfo *)0x3b31f18;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
      pMStack_60 = (MethodInfo *)0x3b31f24;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      pMStack_60 = (MethodInfo *)0x3b31f30;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      pMStack_60 = (MethodInfo *)0x3b31f3c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      pMStack_60 = (MethodInfo *)0x3b31f48;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      pMStack_60 = (MethodInfo *)0x3b31f54;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
      pMStack_60 = (MethodInfo *)0x3b31f60;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
      pMStack_60 = (MethodInfo *)0x3b31f6c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      pMStack_60 = (MethodInfo *)0x3b31f78;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__0);
      pMStack_60 = (MethodInfo *)0x3b31f84;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__1);
      pMStack_60 = (MethodInfo *)0x3b31f90;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
      g_data_057a9c31 = '\x01';
    }
    pMStack_60 = (MethodInfo *)0x3b31fa6;
    pMVar10 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
    pMStack_60 = (MethodInfo *)0x3b31fb3;
    System_Object___ctor((Il2CppObject *)pMVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_60 = (MethodInfo *)0x3b31fcb;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_60 = (MethodInfo *)0x3b31fd7;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pMStack_60 = (MethodInfo *)0x3b31fe5;
    __this_02.m_CachedPtr = (intptr_t)unaff_R14;
    UVar11.m_CachedPtr =
         (intptr_t)
         Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                   ((UnityEngine_RectTransform_o *)unaff_R14,(MethodInfo *)0x0);
    unaff_RBX = pMVar10;
    pMVar26 = pMVar6;
    if (pMVar10 != (MethodInfo *)0x0) {
      unaff_R12 = (MethodInfo *)&pMVar10->invoker_method;
      ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->invoker_method)->m_CachedPtr =
           UVar11.m_CachedPtr;
      pMStack_60 = (MethodInfo *)0x3b32004;
      il2cpp_runtime_helper_022b4080(unaff_R12);
      unaff_RBP.m_CachedPtr =
           ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->invoker_method)->m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_60 = (MethodInfo *)0x3b32020;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_60 = (MethodInfo *)0x3b3202c;
      __this_02.m_CachedPtr = unaff_RBP.m_CachedPtr;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP.m_CachedPtr,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      unaff_R15 = pMVar10;
      if (unaff_R14 != (MethodInfo *)0x0) {
        pMVar26 = (MethodInfo *)0x0;
        pMStack_60 = (MethodInfo *)0x3b32057;
        go_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)unaff_R14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          pMStack_60 = (MethodInfo *)0x3b32072;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_60 = (MethodInfo *)0x3b3207a;
        pUVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go_00,pMVar26);
        pMVar26 = (MethodInfo *)&pMVar10->return_type;
        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->return_type)->m_CachedPtr =
             (intptr_t)pUVar7;
        pMStack_60 = (MethodInfo *)0x3b3208d;
        il2cpp_runtime_helper_022b4080(pMVar26,pUVar7);
        pMStack_60 = (MethodInfo *)0x3b3209f;
        pIVar12 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)unaff_R14,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
        unaff_RBX = (MethodInfo *)&pMVar10->field7_0x38;
        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->field7_0x38)->m_CachedPtr =
             (intptr_t)pIVar12;
        pMStack_60 = (MethodInfo *)0x3b320b2;
        __this_02.m_CachedPtr = (intptr_t)unaff_RBX;
        il2cpp_runtime_helper_022b4080();
        cVar21 = (char)enter;
        unaff_RBP.m_CachedPtr = (intptr_t)pMVar6;
        if (cVar21 == '\0') {
label_03b3210c:
          if (((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R12)->m_CachedPtr != 0) {
            ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->name)->m_CachedPtr =
                 (intptr_t)
                 *(System_Threading_CancellationTokenSource_o **)
                  (((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R12)->m_CachedPtr + 0x30)
            ;
            if (cVar21 != '\0') {
              if (g_data_057a694c == '\0') {
                pMStack_60 = (MethodInfo *)0x3b3213b;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UStack_48 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_40 = 0;
            }
            ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->klass)->m_CachedPtr =
                 (intptr_t)UStack_48;
            pUVar7 = (UnityEngine_CanvasGroup_o *)
                     ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->return_type)->
                     m_CachedPtr;
            __this_02.m_CachedPtr = 0;
            if (pUVar7 != (UnityEngine_CanvasGroup_o *)0x0) {
              pMStack_60 = (MethodInfo *)0x3b3217a;
              fVar29 = UnityEngine_CanvasGroup__get_alpha(pUVar7,(MethodInfo *)0x0);
              *(float *)&((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->parameters)->
                         m_CachedPtr = fVar29;
              if (cVar21 == '\0') {
                uVar28 = 0;
              }
              else {
                uVar28 = 0x3f800000;
              }
              *(undefined4 *)
               &((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)((long)&pMVar10->parameters + 4))
                ->m_CachedPtr = uVar28;
              unaff_RBP.m_CachedPtr =
                   ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->field7_0x38)->
                   m_CachedPtr;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pMStack_60 = (MethodInfo *)0x3b321b4;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar6 = (MethodInfo *)0x0;
              pMStack_60 = (MethodInfo *)0x3b321c0;
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_RBP.m_CachedPtr,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              fVar29 = 0.0;
              if ((char)bVar3 == '\0') {
label_03b321d8:
                *(float *)&((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&pMVar10->field8_0x40)
                           ->m_CachedPtr = fVar29;
                if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                  pMStack_60 = (MethodInfo *)0x3b321f6;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMStack_60 = (MethodInfo *)0x3b321fd;
                pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                pMStack_60 = (MethodInfo *)0x3b3220f;
                pDVar13 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                pMStack_60 = (MethodInfo *)0x3b32229;
                DG_Tweening_TweenCallback_float____ctor();
                pMStack_60 = (MethodInfo *)0x3b32244;
                pDVar14 = DG_Tweening_DOVirtual__Float(0.0,1.0,fStack_4c,pDVar13,(MethodInfo *)0x0);
                pMStack_60 = (MethodInfo *)0x3b32251;
                pDVar8 = DG_Tweening_TweenSettingsExtensions__Join
                                   (pDVar8,(DG_Tweening_Tween_o *)pDVar14,(MethodInfo *)0x0);
                pMStack_60 = (MethodInfo *)0x3b32263;
                pDVar15 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                pMStack_60 = (MethodInfo *)0x3b3227d;
                DG_Tweening_TweenCallback___ctor();
                pMStack_60 = (MethodInfo *)0x3b32292;
                pIVar12 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                    ((Il2CppObject *)pDVar8,pDVar15,MethodInfo_Sequence_OnComplete_Sequence);
                pDVar5 = (DG_Tweening_Tween_o *)
                         DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar12,1,MethodInfo_Sequence_SetUpdate_Sequence);
                return pDVar5;
              }
              __this_02.m_CachedPtr = 0;
              if ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)
                  ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_RBX)->m_CachedPtr !=
                  (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
                pMStack_60 = (MethodInfo *)0x3b321d8;
                fVar29 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                                   ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)
                                    ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_RBX)->
                                    m_CachedPtr,pMVar6);
                goto label_03b321d8;
              }
            }
          }
        }
        else {
          __this_02.m_CachedPtr = 0;
          if (((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R12)->m_CachedPtr != 0) {
            pMStack_60 = (MethodInfo *)0x3b320d0;
            Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                      ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                       ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R12)->m_CachedPtr,
                       (UnityEngine_Vector2_o)UStack_48,(MethodInfo *)0x0);
            __this_02.m_CachedPtr = 0;
            if ((UnityEngine_CanvasGroup_o *)
                ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)pMVar26)->m_CachedPtr !=
                (UnityEngine_CanvasGroup_o *)0x0) {
              pMVar6 = (MethodInfo *)0x0;
              pMStack_60 = (MethodInfo *)0x3b320e7;
              UnityEngine_CanvasGroup__set_alpha
                        ((UnityEngine_CanvasGroup_o *)
                         ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)pMVar26)->m_CachedPtr,0.0
                         ,(MethodInfo *)0x0);
              __this_02.m_CachedPtr =
                   ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_RBX)->m_CachedPtr;
              if ((MethodInfo *)__this_02.m_CachedPtr != (MethodInfo *)0x0) {
                pMStack_60 = (MethodInfo *)0x3b3210c;
                Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                          ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)__this_02.m_CachedPtr,
                           ABS(UStack_48.y) * 0.18,pMVar6);
              }
              goto label_03b3210c;
            }
          }
        }
      }
    }
    pMStack_60 = (MethodInfo *)0x3b322bc;
    local_a4 = (float)il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)auStack_b0;
    local_80 = unaff_RBX;
    pMStack_78 = unaff_R12;
    local_70 = pMVar26;
    pMStack_68 = unaff_R14;
    pMStack_60 = unaff_R15;
    if (g_data_057a9c32 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__1);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
      g_data_057a9c32 = '\x01';
    }
    unaff_R12 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
    uVar23 = 0;
    pMVar6 = unaff_R12;
    System_Object___ctor((Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (MethodInfo *)0x0) {
      unaff_R14 = (MethodInfo *)&unaff_R12->klass;
      ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->klass)->m_CachedPtr =
           __this_02.m_CachedPtr;
      il2cpp_runtime_helper_022b4080(unaff_R14);
      x = (UnityEngine_Object_o *)
          ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->klass)->m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pGVar27 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                          ((UnityEngine_RectTransform_o *)
                           ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->klass)->
                           m_CachedPtr,(MethodInfo *)0x0);
      unaff_RBX = (MethodInfo *)&unaff_R12->invoker_method;
      ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->invoker_method)->m_CachedPtr =
           (intptr_t)pGVar27;
      il2cpp_runtime_helper_022b4080(unaff_RBX);
      __this_02.m_CachedPtr =
           ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->invoker_method)->
           m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar23 = 0;
      pMVar6 = (MethodInfo *)__this_02.m_CachedPtr;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_02.m_CachedPtr,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if (((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_RBX)->m_CachedPtr != 0) {
        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->name)->m_CachedPtr =
             (intptr_t)
             *(System_Threading_CancellationTokenSource_o **)
              (((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_RBX)->m_CachedPtr + 0x30);
        __this = (UnityEngine_Transform_o *)
                 ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->klass)->m_CachedPtr;
        pMVar6 = (MethodInfo *)0x0;
        if (__this != (UnityEngine_Transform_o *)0x0) {
          uVar23 = 0;
          UVar33 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
          fVar29 = UVar33.fields.z;
          fVar30 = UVar33.fields.x;
          fVar32 = UVar33.fields.y;
          if (g_data_057a65d5 == '\0') {
            auStack_a0._8_4_ = extraout_XMM0_Dc;
            auStack_a0._0_8_ = UVar33.fields._0_8_;
            auStack_a0._12_4_ = extraout_XMM0_Dd;
            fStack_90 = UVar33.fields.z;
            uStack_8c = in_XMM1_Db;
            uStack_88 = in_XMM1_Dc;
            local_84 = in_XMM1_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
            fVar29 = fStack_90;
            fVar30 = (float)auStack_a0._0_4_;
            fVar32 = (float)auStack_a0._4_4_;
          }
          __this_02.m_CachedPtr = (intptr_t)&TypeInfo_Vector3;
          puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar32 = fVar32 - (float)((ulong)*puVar18 >> 0x20);
          fVar30 = fVar30 - (float)*puVar18;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          if (fVar30 * fVar30 + fVar32 * fVar32 +
              (fVar29 - *(float *)(puVar18 + 1)) * (fVar29 - *(float *)(puVar18 + 1)) < 9.9999994e-11) {
            if (g_data_057a6932 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6932 = '\x01';
              puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            }
            fVar30 = (float)*(undefined8 *)((long)puVar18 + 0xc);
            fVar32 = (float)((ulong)*(undefined8 *)((long)puVar18 + 0xc) >> 0x20);
            fVar29 = *(float *)((long)puVar18 + 0x14);
label_03b32504:
            ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->return_type)->m_CachedPtr
                 = CONCAT44(fVar32,fVar30);
            *(float *)&((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)&unaff_R12->parameters)->
                       m_CachedPtr = fVar29;
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pDVar13 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor();
            pDVar14 = DG_Tweening_DOVirtual__Float(0.0,1.0,local_a4,pDVar13,(MethodInfo *)0x0);
            pDVar8 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar8,(DG_Tweening_Tween_o *)pDVar14,(MethodInfo *)0x0);
            pDVar15 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
            DG_Tweening_TweenCallback___ctor();
            pIVar12 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                ((Il2CppObject *)pDVar8,pDVar15,MethodInfo_Sequence_OnComplete_Sequence);
            pDVar5 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar12,1,MethodInfo_Sequence_SetUpdate_Sequence);
            return pDVar5;
          }
          pMVar6 = (MethodInfo *)0x0;
          if ((UnityEngine_Transform_o *)
              ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R14)->m_CachedPtr !=
              (UnityEngine_Transform_o *)0x0) {
            UVar33 = UnityEngine_Transform__get_localScale
                               ((UnityEngine_Transform_o *)
                                ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_Fields *)unaff_R14)->
                                m_CachedPtr,(MethodInfo *)0x0);
            fVar29 = UVar33.fields.z;
            fVar30 = UVar33.fields.x;
            fVar32 = UVar33.fields.y;
            goto label_03b32504;
          }
        }
      }
    }
    duration = (float)il2cpp_runtime_helper_022b2c90();
    unaff_R15 = (MethodInfo *)__this_02.m_CachedPtr;
Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro:
    *(intptr_t *)((long)register0x00000020 + -8) = unaff_RBP.m_CachedPtr;
    *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_RBX;
    unaff_RBP.m_CachedPtr = uVar23 & 0xffffffff;
    *(float *)((long)register0x00000020 + -0x3c) = duration;
    if (g_data_057a9c36 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32618;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32624;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32630;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3263c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32648;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32654;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      g_data_057a9c36 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32673;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar23 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3267f;
    pMVar10 = pMVar6;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pMVar6 != (MethodInfo *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b326a1;
      UVar33 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pMVar6,(MethodInfo *)0x0);
      fVar32 = UVar33.fields.z;
      fVar29 = UVar33.fields.x;
      fVar30 = UVar33.fields.y;
      if (g_data_057a65d5 == '\0') {
        *(float *)((long)register0x00000020 + -0x28) = fVar32;
        *(uint *)((long)register0x00000020 + -0x24) = in_XMM1_Db;
        *(undefined4 *)((long)register0x00000020 + -0x20) = in_XMM1_Dc;
        *(undefined4 *)((long)register0x00000020 + -0x1c) = in_XMM1_Dd;
        auVar2._8_4_ = extraout_XMM0_Dc_00;
        auVar2._0_8_ = UVar33.fields._0_8_;
        auVar2._12_4_ = extraout_XMM0_Dd_00;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar2;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b326c3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        fVar29 = *(float *)((long)register0x00000020 + -0x38);
        fVar30 = *(float *)((long)register0x00000020 + -0x34);
        fVar32 = *(float *)((long)register0x00000020 + -0x28);
        g_data_057a65d5 = '\x01';
      }
      puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar30 = fVar30 - (float)((ulong)*puVar18 >> 0x20);
      fVar29 = fVar29 - (float)*puVar18;
      if (9.9999994e-11 <=
          fVar29 * fVar29 + fVar30 * fVar30 +
          (fVar32 - *(float *)(puVar18 + 1)) * (fVar32 - *(float *)(puVar18 + 1))) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32807;
        UVar33 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pMVar6,(MethodInfo *)0x0);
        fVar29 = UVar33.fields.z;
        fVar30 = UVar33.fields.x;
        fVar32 = UVar33.fields.y;
        uVar28 = extraout_XMM0_Dc_01;
        uVar31 = extraout_XMM0_Dd_01;
      }
      else {
        if (g_data_057a6932 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3273b;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
          puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        }
        fVar30 = (float)*(undefined8 *)((long)puVar18 + 0xc);
        fVar32 = (float)((ulong)*(undefined8 *)((long)puVar18 + 0xc) >> 0x20);
        uVar28 = 0;
        uVar31 = 0;
        fVar29 = *(float *)((long)puVar18 + 0x14);
      }
      if ((char)unaff_RBP.m_CachedPtr == '\0') {
        if (g_data_057a65d5 == '\0') {
          *(float *)((long)register0x00000020 + -0x28) = fVar30;
          *(float *)((long)register0x00000020 + -0x24) = fVar32;
          *(undefined4 *)((long)register0x00000020 + -0x20) = uVar28;
          *(undefined4 *)((long)register0x00000020 + -0x1c) = uVar31;
          *(float *)((long)register0x00000020 + -0x38) = fVar29;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3277f;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          fVar29 = *(float *)((long)register0x00000020 + -0x38);
          fVar30 = *(float *)((long)register0x00000020 + -0x28);
          fVar32 = *(float *)((long)register0x00000020 + -0x24);
          g_data_057a65d5 = '\x01';
        }
        puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        *(undefined8 *)((long)register0x00000020 + -0x28) = *puVar18;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
        *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)(puVar18 + 1);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b327bf;
        value.fields.y = fVar32;
        value.fields.x = fVar30;
        value.fields.z = fVar29;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pMVar6,value,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b327da;
        endValue.fields.z = *(float *)((long)register0x00000020 + -0x38);
        endValue.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x28);
        pDVar16 = DG_Tweening_ShortcutExtensions__DOScale
                            ((UnityEngine_Transform_o *)pMVar6,endValue,
                             *(float *)((long)register0x00000020 + -0x3c),(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b327f1;
        pDVar8 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar16,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        puVar18 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
      }
      else {
        UVar33.fields.x = fVar30 * 1.35;
        UVar33.fields.y = fVar32 * 1.35;
        UVar33.fields.z = fVar29 * 1.35;
        *(float *)((long)register0x00000020 + -0x28) = fVar30;
        *(float *)((long)register0x00000020 + -0x24) = fVar32;
        *(undefined4 *)((long)register0x00000020 + -0x20) = uVar28;
        *(undefined4 *)((long)register0x00000020 + -0x1c) = uVar31;
        *(float *)((long)register0x00000020 + -0x38) = fVar29;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32841;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pMVar6,UVar33,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32859;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32860;
        pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        endValue_00.fields.x = *(float *)((long)register0x00000020 + -0x28) * 0.88;
        endValue_00.fields.y = *(float *)((long)register0x00000020 + -0x24) * 0.88;
        endValue_00.fields.z = *(float *)((long)register0x00000020 + -0x38) * 0.88;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32895;
        pDVar16 = DG_Tweening_ShortcutExtensions__DOScale
                            ((UnityEngine_Transform_o *)pMVar6,endValue_00,
                             *(float *)((long)register0x00000020 + -0x3c) * 0.55,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b328ac;
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar16,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b328b9;
        pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar5,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b328df;
        endValue_01.fields.z = *(float *)((long)register0x00000020 + -0x38);
        endValue_01.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x28);
        pDVar16 = DG_Tweening_ShortcutExtensions__DOScale
                            ((UnityEngine_Transform_o *)pMVar6,endValue_01,
                             *(float *)((long)register0x00000020 + -0x3c) * 0.45,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b328fe;
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                           ((Il2CppObject *)pDVar16,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3290b;
        pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar5,(MethodInfo *)0x0);
        puVar18 = &MethodInfo_Sequence_SetUpdate_Sequence;
      }
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar8,1,(MethodInfo_25F47A0 *)*puVar18);
      return pDVar5;
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3292f;
    duration = (float)il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (MethodInfo *)0x0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel:
    *(intptr_t *)((long)register0x00000020 + -8) = unaff_RBP.m_CachedPtr;
    *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_RBX;
    unaff_RBP.m_CachedPtr = uVar23 & 0xffffffff;
    *(float *)((long)register0x00000020 + -0x2c) = duration;
    if (g_data_057a9c37 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b32956;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b32962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c37 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b32981;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar24 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b3298d;
    pMVar6 = pMVar10;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pMVar10 != (MethodInfo *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b329a9;
      UVar34 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pMVar10,(MethodInfo *)0x0);
      fVar29 = 64.0;
      if (64.0 <= UVar34.fields.m_Width) {
        fVar29 = UVar34.fields.m_Width;
      }
      if ((char)unaff_RBP.m_CachedPtr == '\0') {
        fVar29 = fVar29 * 1.5;
      }
      fVar30 = 0.0;
      pMVar6 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = ZEXT416((uint)fVar29);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b329e6;
        il2cpp_runtime_helper_02337ed0();
        fVar29 = *(float *)((long)register0x00000020 + -0x28);
        fVar30 = *(float *)((long)register0x00000020 + -0x24);
        pMVar6 = extraout_RDX_02;
      }
      offset_01.fields.y = fVar30;
      offset_01.fields.x = fVar29;
      pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         ((UnityEngine_RectTransform_o *)pMVar10,*(float *)((long)register0x00000020 + -0x2c),
                          (uint)uVar23 & 0xff,offset_01,pMVar6);
      return pDVar5;
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b32a08;
    duration = (float)il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (MethodInfo *)0x0;
    puVar20 = (undefined1 *)((long)register0x00000020 + -0x38);
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro:
    *(intptr_t *)(puVar20 + -8) = unaff_RBP.m_CachedPtr;
    *(MethodInfo **)(puVar20 + -0x10) = unaff_R15;
    *(MethodInfo **)(puVar20 + -0x18) = unaff_R14;
    *(MethodInfo **)(puVar20 + -0x20) = unaff_R12;
    *(MethodInfo **)(puVar20 + -0x28) = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)(puVar20 + -0x48);
    unaff_R14 = (MethodInfo *)(uVar24 & 0xffffffff);
    *(float *)(puVar20 + -0x3c) = duration;
    if (g_data_057a9c34 == '\0') {
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a3d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a49;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a55;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a61;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a6d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a79;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9c34 = '\x01';
    }
    unaff_RBX = (MethodInfo *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32a98;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP.m_CachedPtr = 0;
    uVar22 = 0;
    *(undefined8 *)(puVar20 + -0x50) = 0x3b32aa6;
    go = (UnityEngine_GameObject_o *)pMVar6;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
label_03b32ac8:
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar20 + -0x50) = 0x3b32ad9;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (MethodInfo *)0x0;
      uVar22 = 0;
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32ae7;
      go = (UnityEngine_GameObject_o *)unaff_RBP.m_CachedPtr;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP.m_CachedPtr,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if ((MethodInfo *)unaff_RBP.m_CachedPtr != (MethodInfo *)0x0) {
        *(undefined8 *)(puVar20 + -0x50) = 0x3b32b02;
        UVar34 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBP.m_CachedPtr,(MethodInfo *)0x0);
        fVar29 = 64.0;
        if (64.0 <= UVar34.fields.m_Width) {
          fVar29 = UVar34.fields.m_Width;
        }
        fVar30 = 0.0;
        pMVar10 = extraout_RDX_03;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          *(undefined1 (*) [16])(puVar20 + -0x38) = ZEXT416((uint)fVar29);
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32b32;
          il2cpp_runtime_helper_02337ed0();
          fVar29 = *(float *)(puVar20 + -0x38);
          fVar30 = *(float *)(puVar20 + -0x34);
          pMVar10 = extraout_RDX_04;
        }
        unaff_RBX = (MethodInfo *)(uVar24 & 0xff);
        *(undefined8 *)(puVar20 + -0x50) = 0x3b32b4b;
        uVar22 = (uint)unaff_RBX;
        offset.fields.y = fVar30;
        offset.fields.x = fVar29;
        pMVar26 = unaff_RBX;
        pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                           ((UnityEngine_RectTransform_o *)unaff_RBP.m_CachedPtr,*(float *)(puVar20 + -0x3c),
                            uVar22,offset,pMVar10);
        *(undefined8 *)(puVar20 + -0x50) = 0x3b32b56;
        go = (UnityEngine_GameObject_o *)
             Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                       ((UnityEngine_GameObject_o *)pMVar6,pMVar26);
        *(undefined8 *)(puVar20 + -0x50) = 0x3b32b66;
        pDVar17 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                            ((UnityEngine_CanvasGroup_o *)go,*(float *)(puVar20 + -0x3c),uVar22,method_01);
        if (pMVar6 != (MethodInfo *)0x0) {
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32b84;
          pMVar10 = MethodInfo_Image_GetComponent_Image;
          image = (UnityEngine_UI_Image_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pMVar6,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32b9a;
          t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
                        (image,*(float *)(puVar20 + -0x3c),52.0,pMVar10);
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            *(undefined8 *)(puVar20 + -0x50) = 0x3b32bb5;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32bbc;
          pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32bd3;
          pDVar8 = (DG_Tweening_Sequence_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
          if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
            *(undefined8 *)(puVar20 + -0x50) = 0x3b32be8;
            DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar5,(MethodInfo *)0x0);
          }
          if (pDVar17 != (DG_Tweening_Tween_o *)0x0) {
            *(undefined8 *)(puVar20 + -0x50) = 0x3b32bfa;
            DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar17,(MethodInfo *)0x0);
          }
          if (t == (DG_Tweening_Tween_o *)0x0) {
            return (DG_Tweening_Tween_o *)pDVar8;
          }
          *(undefined8 *)(puVar20 + -0x50) = 0x3b32c0c;
          DG_Tweening_TweenSettingsExtensions__Join(pDVar8,t,(MethodInfo *)0x0);
          return (DG_Tweening_Tween_o *)pDVar8;
        }
      }
    }
    else if (pMVar6 != (MethodInfo *)0x0) {
      *(undefined8 *)(puVar20 + -0x50) = 0x3b32ac5;
      unaff_RBP.m_CachedPtr =
           (intptr_t)
           UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)pMVar6,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      goto label_03b32ac8;
    }
    *(undefined8 *)(puVar20 + -0x50) = 0x3b32c21;
    duration = (float)il2cpp_runtime_helper_022b2c90();
    unaff_R15 = pMVar6;
  }
  *(intptr_t *)((long)register0x00000020 + -8) = unaff_RBP.m_CachedPtr;
  *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(MethodInfo **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(float *)((long)register0x00000020 + -0x3c) = duration;
  if (g_data_057a9c33 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c67;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c73;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32c97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32cb6;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32cc4;
  pMVar6 = (MethodInfo *)go;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if ((MethodInfo *)go == (MethodInfo *)0x0) goto label_03b32e2c;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32ce3;
    pMVar10 = (MethodInfo *)
              UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32cf7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32d05;
  pMVar6 = pMVar10;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pMVar10 == (MethodInfo *)0x0) {
label_03b32e2c:
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32e31;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pMVar6,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32d20;
  UVar34 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pMVar10,(MethodInfo *)0x0);
  fVar29 = 64.0;
  if (64.0 <= UVar34.fields.m_Width) {
    fVar29 = UVar34.fields.m_Width;
  }
  fVar29 = -fVar29;
  fVar30 = 0.0;
  pMVar6 = extraout_RDX_05;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = ZEXT416((uint)fVar29);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32d57;
    il2cpp_runtime_helper_02337ed0();
    fVar29 = *(float *)((long)register0x00000020 + -0x38);
    fVar30 = *(float *)((long)register0x00000020 + -0x34);
    pMVar6 = extraout_RDX_06;
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32d70;
  offset_00.fields.y = fVar30;
  offset_00.fields.x = fVar29;
  pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     ((UnityEngine_RectTransform_o *)pMVar10,*(float *)((long)register0x00000020 + -0x3c),
                      uVar22 & 0xff,offset_00,pMVar6);
  if ((char)uVar22 != '\0') {
    pMVar6 = pMVar10;
    if ((MethodInfo *)go == (MethodInfo *)0x0) goto label_03b32e2c;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32d92;
    __this_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this_01 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32da7;
      pDVar17 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                          (__this_01,*(float *)((long)register0x00000020 + -0x3c),(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar17 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32dd9;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32de0;
  pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32df7;
  pDVar8 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32e0c;
    DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar5,(MethodInfo *)0x0);
  }
  if (pDVar17 != (DG_Tweening_Tween_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b32e1e;
    DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar17,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar8;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, bool resetEnterStart, const MethodInfo* method);
// 0x3b31bc0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,bool_conflict resetEnterStart,
          MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  DG_Tweening_TweenCallback_float__o *pDVar8;
  DG_Tweening_Tweener_o *pDVar9;
  DG_Tweening_TweenCallback_o *pDVar10;
  DG_Tweening_Tween_o *pDVar11;
  Il2CppClass *pIVar12;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *pUVar13;
  Il2CppObject *pIVar14;
  DG_Tweening_Sequence_o *pDVar15;
  UnityEngine_RectTransform_o *pUVar16;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar17;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar18;
  UnityEngine_RectTransform_o *pUVar19;
  DG_Tweening_Tween_o *pDVar20;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *extraout_RAX;
  undefined8 *puVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar22;
  Il2CppObject *pIVar23;
  void **ppvVar24;
  MethodInfo *method_01;
  char cVar25;
  uint uVar26;
  ulong uVar27;
  Il2CppClass *rect_00;
  UnityEngine_RectTransform_o *pUVar28;
  undefined4 uVar29;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar35;
  undefined8 uStack_130;
  UnityEngine_Vector2_Fields local_a0;
  
  if (g_data_057a9c30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuPanel_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuPanel_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    g_data_057a9c30 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar25 = '\0';
  rect_00 = (Il2CppClass *)rect;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar35 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    fVar32 = UVar35.fields.m_Width;
    in_XMM1_Db = UVar35.fields.m_Height;
    cVar25 = '\0';
    in_XMM1_Da = fVar32;
    pIVar7 = (Il2CppClass *)Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    rect_00 = (Il2CppClass *)rect;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar23 = pIVar6 + 1;
      pIVar6[1].klass = pIVar7;
      il2cpp_runtime_helper_022b4080(pIVar23);
      rect_00 = pIVar6[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar25 = '\0';
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      fVar31 = 1.0;
      if (1.0 <= fVar32) {
        fVar31 = fVar32;
      }
      fVar31 = fVar31 * 1.08;
      pIVar7 = rect_00;
      if (((char)enter != '\0') && ((char)resetEnterStart != '\0')) {
        pIVar7 = pIVar23->klass;
        if (g_data_057a9c8a == '\0') {
          rect_00 = (Il2CppClass *)&TypeInfo_Vector2;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9c8a = '\x01';
        }
        if (pIVar7 == (Il2CppClass *)0x0) goto label_03b31ecd;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
        in_XMM1_Da = (float)uVar1;
        in_XMM1_Db = (float)((ulong)uVar1 >> 0x20);
        cVar25 = '\0';
        offset.fields.y = fVar31 * in_XMM1_Db;
        offset.fields.x = fVar31 * in_XMM1_Da;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar7,offset,(MethodInfo *)0x0);
      }
      rect_00 = pIVar7;
      if (pIVar23->klass != (Il2CppClass *)0x0) {
        pIVar6[1].monitor = (pIVar23->klass->_1).this_arg.data;
        if ((char)enter == '\0') {
          if (g_data_057a9c8a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a9c8a = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
          fVar32 = fVar31 * (float)uVar1;
          fVar31 = fVar31 * (float)((ulong)uVar1 >> 0x20);
        }
        else {
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          fVar32 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar31 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        }
        pIVar6[2].klass = (Il2CppClass *)CONCAT44(fVar31,fVar32);
        pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,pDVar8,(MethodInfo *)0x0);
        pDVar10 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar9,pDVar10,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar11 = (DG_Tweening_Tween_o *)
                  DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar6,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar11;
      }
    }
  }
label_03b31ecd:
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  local_a0.y = in_XMM1_Db;
  local_a0.x = in_XMM1_Da;
  if (g_data_057a9c31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    g_data_057a9c31 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pIVar7 = rect_00;
  pIVar12 = (Il2CppClass *)
            Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                      ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar23 = pIVar6 + 1;
    pIVar6[1].klass = pIVar12;
    il2cpp_runtime_helper_022b4080(pIVar23);
    pIVar7 = pIVar6[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (rect_00 != (Il2CppClass *)0x0) {
      pMVar22 = (MethodInfo *)0x0;
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar13 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar22);
      pIVar6[2].monitor = pUVar13;
      il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pUVar13);
      pIVar14 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)rect_00,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
      ppvVar24 = &pIVar6[3].monitor;
      pIVar6[3].monitor = pIVar14;
      pIVar7 = (Il2CppClass *)ppvVar24;
      il2cpp_runtime_helper_022b4080();
      if (cVar25 == '\0') {
label_03b3210c:
        if (pIVar23->klass != (Il2CppClass *)0x0) {
          pIVar6[1].monitor = (pIVar23->klass->_1).this_arg.data;
          if (cVar25 != '\0') {
            if (g_data_057a694c == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            local_a0 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          }
          pIVar6[2].klass = (Il2CppClass *)local_a0;
          pIVar7 = (Il2CppClass *)0x0;
          if (pIVar6[2].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
            fVar31 = UnityEngine_CanvasGroup__get_alpha(pIVar6[2].monitor,(MethodInfo *)0x0);
            *(float *)&pIVar6[3].klass = fVar31;
            if (cVar25 == '\0') {
              uVar29 = 0;
            }
            else {
              uVar29 = 0x3f800000;
            }
            *(undefined4 *)((long)&pIVar6[3].klass + 4) = uVar29;
            pUVar3 = pIVar6[3].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar22 = (MethodInfo *)0x0;
            bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            fVar31 = 0.0;
            if ((char)bVar5 == '\0') {
label_03b321d8:
              *(float *)&pIVar6[4].klass = fVar31;
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
              DG_Tweening_TweenCallback_float____ctor();
              pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar32,pDVar8,(MethodInfo *)0x0);
              pDVar15 = DG_Tweening_TweenSettingsExtensions__Join
                                  (pDVar15,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
              pDVar10 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pIVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                 ((Il2CppObject *)pDVar15,pDVar10,MethodInfo_Sequence_OnComplete_Sequence);
              pDVar11 = (DG_Tweening_Tween_o *)
                        DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
              return pDVar11;
            }
            pIVar7 = (Il2CppClass *)0x0;
            if (*ppvVar24 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
              fVar31 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(*ppvVar24,pMVar22);
              goto label_03b321d8;
            }
          }
        }
      }
      else {
        pIVar7 = (Il2CppClass *)0x0;
        if (pIVar23->klass != (Il2CppClass *)0x0) {
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                    ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar23->klass,
                     (UnityEngine_Vector2_o)local_a0,(MethodInfo *)0x0);
          pUVar13 = pIVar6[2].monitor;
          pIVar7 = (Il2CppClass *)0x0;
          if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
            pMVar22 = (MethodInfo *)0x0;
            UnityEngine_CanvasGroup__set_alpha(pUVar13,0.0,(MethodInfo *)0x0);
            pIVar7 = *ppvVar24;
            if (pIVar7 != (Il2CppClass *)0x0) {
              Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)pIVar7,ABS(in_XMM1_Db) * 0.18,
                         pMVar22);
            }
            goto label_03b3210c;
          }
        }
      }
    }
  }
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    g_data_057a9c32 = '\x01';
  }
  pUVar16 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  cVar25 = '\0';
  pUVar28 = pUVar16;
  System_Object___ctor((Il2CppObject *)pUVar16,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar16[1].monitor = pIVar7;
    il2cpp_runtime_helper_022b4080(&pUVar16[1].monitor);
    pUVar3 = pUVar16[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pGVar17 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(pUVar16[1].monitor,(MethodInfo *)0x0);
    ((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr = (intptr_t)pGVar17;
    il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16->fields);
    pUVar28 = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar25 = '\0';
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    lVar4 = ((UnityEngine_Object_Fields *)&pUVar16->fields)->m_CachedPtr;
    if (lVar4 != 0) {
      pUVar16[1].klass = *(UnityEngine_RectTransform_c **)(lVar4 + 0x30);
      pUVar28 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar16[1].monitor != (UnityEngine_Transform_o *)0x0) {
        cVar25 = '\0';
        UVar34 = UnityEngine_Transform__get_localScale(pUVar16[1].monitor,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar33 = UVar34.fields.y - (float)((ulong)*puVar21 >> 0x20);
        fVar31 = UVar34.fields.z - *(float *)(puVar21 + 1);
        fVar30 = UVar34.fields.x - (float)*puVar21;
        if (fVar30 * fVar30 + fVar33 * fVar33 + fVar31 * fVar31 < 9.9999994e-11) {
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
            puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar30 = (float)*(undefined8 *)((long)puVar21 + 0xc);
          fVar33 = (float)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20);
          fVar31 = *(float *)((long)puVar21 + 0x14);
label_03b32504:
          ((UnityEngine_Object_Fields *)&pUVar16[1].fields)->m_CachedPtr = CONCAT44(fVar33,fVar30);
          *(float *)&pUVar16[2].klass = fVar31;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar32,pDVar8,(MethodInfo *)0x0);
          pDVar15 = DG_Tweening_TweenSettingsExtensions__Join
                              (pDVar15,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
          pDVar10 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          pIVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar15,pDVar10,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar11 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar11;
        }
        __this = pUVar16[1].monitor;
        pUVar28 = (UnityEngine_RectTransform_o *)0x0;
        if (__this != (UnityEngine_Transform_o *)0x0) {
          UVar34 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
          fVar31 = UVar34.fields.z;
          fVar30 = UVar34.fields.x;
          fVar33 = UVar34.fields.y;
          goto label_03b32504;
        }
      }
    }
  }
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    g_data_057a9c36 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar26 = 0;
  pUVar16 = pUVar28;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
    UVar34 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar28,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar33 = UVar34.fields.y - (float)((ulong)*puVar21 >> 0x20);
    fVar31 = UVar34.fields.z - *(float *)(puVar21 + 1);
    fVar30 = UVar34.fields.x - (float)*puVar21;
    if (9.9999994e-11 <= fVar30 * fVar30 + fVar33 * fVar33 + fVar31 * fVar31) {
      UVar34 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar28,(MethodInfo *)0x0);
      fVar31 = UVar34.fields.z;
      fVar30 = UVar34.fields.x;
      fVar33 = UVar34.fields.y;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar21 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar30 = (float)*(undefined8 *)((long)puVar21 + 0xc);
      fVar33 = (float)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20);
      fVar31 = *(float *)((long)puVar21 + 0x14);
    }
    if (cVar25 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      value.fields.y = fVar33;
      value.fields.x = fVar30;
      value.fields.z = fVar31;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar28,value,(MethodInfo *)0x0);
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar28,(UnityEngine_Vector3_o)endValue,fVar32,
                           (MethodInfo *)0x0);
      pDVar15 = (DG_Tweening_Sequence_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar18,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      puVar21 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
    }
    else {
      UVar34.fields.x = fVar30 * 1.35;
      UVar34.fields.y = fVar33 * 1.35;
      UVar34.fields.z = fVar31 * 1.35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar28,UVar34,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.x = fVar30 * 0.88;
      endValue_00.fields.y = fVar33 * 0.88;
      endValue_00.fields.z = fVar31 * 0.88;
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar28,endValue_00,fVar32 * 0.55,(MethodInfo *)0x0);
      pDVar11 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar18,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar15 = DG_Tweening_TweenSettingsExtensions__Append(pDVar15,pDVar11,(MethodInfo *)0x0);
      endValue_01.fields.z = fVar31;
      endValue_01.fields.x = fVar30;
      endValue_01.fields.y = fVar33;
      pDVar18 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar28,endValue_01,fVar32 * 0.45,(MethodInfo *)0x0);
      pDVar11 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                          ((Il2CppObject *)pDVar18,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar15 = DG_Tweening_TweenSettingsExtensions__Append(pDVar15,pDVar11,(MethodInfo *)0x0);
      puVar21 = &MethodInfo_Sequence_SetUpdate_Sequence;
    }
    pDVar11 = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                        ((Il2CppObject *)pDVar15,1,(MethodInfo_25F47A0 *)*puVar21);
    return pDVar11;
  }
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar27 = 0;
  pUVar28 = pUVar16;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    UVar35 = UnityEngine_RectTransform__get_rect(pUVar16,(MethodInfo *)0x0);
    fVar31 = 64.0;
    if (64.0 <= UVar35.fields.m_Width) {
      fVar31 = UVar35.fields.m_Width;
    }
    if ((char)uVar26 == '\0') {
      fVar31 = fVar31 * 1.5;
    }
    pMVar22 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar22 = extraout_RDX_00;
    }
    offset_02.fields.y = 0.0;
    offset_02.fields.x = fVar31;
    pDVar11 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                        (pUVar16,fVar32,uVar26 & 0xff,offset_02,pMVar22);
    return pDVar11;
  }
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar19 = (UnityEngine_RectTransform_o *)0x0;
  uVar26 = 0;
  pUVar16 = pUVar28;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar26 = 0;
    pUVar16 = pUVar19;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar19 != (UnityEngine_RectTransform_o *)0x0) {
      UVar35 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
      fVar31 = 64.0;
      if (64.0 <= UVar35.fields.m_Width) {
        fVar31 = UVar35.fields.m_Width;
      }
      pMVar22 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar22 = extraout_RDX_02;
      }
      method_01 = (MethodInfo *)(uVar27 & 0xff);
      uVar26 = (uint)method_01;
      offset_00.fields.y = 0.0;
      offset_00.fields.x = fVar31;
      pDVar11 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                          (pUVar19,fVar32,uVar26,offset_00,pMVar22);
      pUVar16 = (UnityEngine_RectTransform_o *)
                Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                          ((UnityEngine_GameObject_o *)pUVar28,method_01);
      pDVar20 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                          ((UnityEngine_CanvasGroup_o *)pUVar16,fVar32,uVar26,method_00);
      if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar22 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar28,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar32,52.0,pMVar22);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar15 = (DG_Tweening_Sequence_o *)
                  DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                            ((Il2CppObject *)pDVar15,1,MethodInfo_Sequence_SetUpdate_Sequence);
        if (pDVar11 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar11,(MethodInfo *)0x0);
        }
        if (pDVar20 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar20,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar15;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar15,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar15;
      }
    }
  }
  else if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar32 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar19 = (UnityEngine_RectTransform_o *)0x0;
  pUVar28 = pUVar16;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pUVar16 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar28 = pUVar19;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar28,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar35 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
  fVar31 = 64.0;
  if (64.0 <= UVar35.fields.m_Width) {
    fVar31 = UVar35.fields.m_Width;
  }
  pMVar22 = extraout_RDX_03;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar22 = extraout_RDX_04;
  }
  offset_01.fields.y = 0.0;
  offset_01.fields.x = -fVar31;
  pDVar11 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                      (pUVar19,fVar32,uVar26 & 0xff,offset_01,pMVar22);
  if ((char)uVar26 != '\0') {
    pUVar28 = pUVar19;
    if (pUVar16 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus)
    ;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar20 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                          (__this_00,fVar32,(MethodInfo *)0x0);
      iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar20 = (DG_Tweening_Tween_o *)0x0;
  iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar15 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar15 = (DG_Tweening_Sequence_o *)
            DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar15,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar11 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar11,(MethodInfo *)0x0);
  }
  if (pDVar20 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar15,pDVar20,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar15;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuLogo
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b31ee0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o offset_02;
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *pUVar8;
  Il2CppObject *pIVar9;
  DG_Tweening_Sequence_o *pDVar10;
  DG_Tweening_TweenCallback_float__o *pDVar11;
  DG_Tweening_Tweener_o *pDVar12;
  DG_Tweening_TweenCallback_o *pDVar13;
  DG_Tweening_Tween_o *pDVar14;
  UnityEngine_RectTransform_o *pUVar15;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar16;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar17;
  UnityEngine_RectTransform_o *pUVar18;
  DG_Tweening_Tween_o *pDVar19;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *extraout_RAX;
  undefined8 *puVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar21;
  void **ppvVar22;
  MethodInfo *method_01;
  char cVar23;
  uint uVar24;
  ulong uVar25;
  Il2CppClass *__this_01;
  UnityEngine_RectTransform_o *pUVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar33;
  undefined8 uStack_d8;
  UnityEngine_Vector2_Fields UStack_48;
  
  if (g_data_057a9c31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MainMenuLogo_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    g_data_057a9c31 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  __this_01 = (Il2CppClass *)rect;
  pIVar7 = (Il2CppClass *)Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar6 + 1;
    pIVar6[1].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(pIVar1);
    __this_01 = pIVar6[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar21);
      pIVar6[2].monitor = pUVar8;
      il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pUVar8);
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)rect,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogoMotionBl);
      ppvVar22 = &pIVar6[3].monitor;
      pIVar6[3].monitor = pIVar9;
      __this_01 = (Il2CppClass *)ppvVar22;
      il2cpp_runtime_helper_022b4080();
      cVar23 = (char)enter;
      if (cVar23 == '\0') {
label_03b3210c:
        if (pIVar1->klass != (Il2CppClass *)0x0) {
          pIVar6[1].monitor = (pIVar1->klass->_1).this_arg.data;
          UStack_48 = offset.fields;
          if (cVar23 != '\0') {
            if (g_data_057a694c == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            UStack_48 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          }
          pIVar6[2].klass = (Il2CppClass *)UStack_48;
          __this_01 = (Il2CppClass *)0x0;
          if (pIVar6[2].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
            fVar27 = UnityEngine_CanvasGroup__get_alpha(pIVar6[2].monitor,(MethodInfo *)0x0);
            *(float *)&pIVar6[3].klass = fVar27;
            if (cVar23 == '\0') {
              uVar28 = 0;
            }
            else {
              uVar28 = 0x3f800000;
            }
            *(undefined4 *)((long)&pIVar6[3].klass + 4) = uVar28;
            pUVar3 = pIVar6[3].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar21 = (MethodInfo *)0x0;
            bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            fVar27 = 0.0;
            if ((char)bVar5 == '\0') {
label_03b321d8:
              *(float *)&pIVar6[4].klass = fVar27;
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar11 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
              DG_Tweening_TweenCallback_float____ctor();
              pDVar12 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,pDVar11,(MethodInfo *)0x0);
              pDVar10 = DG_Tweening_TweenSettingsExtensions__Join
                                  (pDVar10,(DG_Tweening_Tween_o *)pDVar12,(MethodInfo *)0x0);
              pDVar13 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pIVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                 ((Il2CppObject *)pDVar10,pDVar13,MethodInfo_Sequence_OnComplete_Sequence);
              pDVar14 = (DG_Tweening_Tween_o *)
                        DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
              return pDVar14;
            }
            __this_01 = (Il2CppClass *)0x0;
            if (*ppvVar22 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
              fVar27 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(*ppvVar22,pMVar21);
              goto label_03b321d8;
            }
          }
        }
      }
      else {
        __this_01 = (Il2CppClass *)0x0;
        if (pIVar1->klass != (Il2CppClass *)0x0) {
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                    ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar1->klass,offset,
                     (MethodInfo *)0x0);
          pUVar8 = pIVar6[2].monitor;
          __this_01 = (Il2CppClass *)0x0;
          if (pUVar8 != (UnityEngine_CanvasGroup_o *)0x0) {
            pMVar21 = (MethodInfo *)0x0;
            UnityEngine_CanvasGroup__set_alpha(pUVar8,0.0,(MethodInfo *)0x0);
            __this_01 = *ppvVar22;
            if (__this_01 != (Il2CppClass *)0x0) {
              Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                        ((Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)__this_01,
                         ABS(offset.fields.y) * 0.18,pMVar21);
            }
            goto label_03b3210c;
          }
        }
      }
    }
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    g_data_057a9c32 = '\x01';
  }
  pUVar15 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  cVar23 = '\0';
  pUVar26 = pUVar15;
  System_Object___ctor((Il2CppObject *)pUVar15,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar15[1].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&pUVar15[1].monitor);
    pUVar3 = pUVar15[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pGVar16 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(pUVar15[1].monitor,(MethodInfo *)0x0);
    ((UnityEngine_Object_Fields *)&pUVar15->fields)->m_CachedPtr = (intptr_t)pGVar16;
    il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar15->fields);
    pUVar26 = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar15->fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar23 = '\0';
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    lVar4 = ((UnityEngine_Object_Fields *)&pUVar15->fields)->m_CachedPtr;
    if (lVar4 != 0) {
      pUVar15[1].klass = *(UnityEngine_RectTransform_c **)(lVar4 + 0x30);
      pUVar26 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar15[1].monitor != (UnityEngine_Transform_o *)0x0) {
        cVar23 = '\0';
        UVar32 = UnityEngine_Transform__get_localScale(pUVar15[1].monitor,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        puVar20 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar31 = UVar32.fields.y - (float)((ulong)*puVar20 >> 0x20);
        fVar29 = UVar32.fields.z - *(float *)(puVar20 + 1);
        fVar30 = UVar32.fields.x - (float)*puVar20;
        if (fVar30 * fVar30 + fVar31 * fVar31 + fVar29 * fVar29 < 9.9999994e-11) {
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
            puVar20 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar30 = (float)*(undefined8 *)((long)puVar20 + 0xc);
          fVar31 = (float)((ulong)*(undefined8 *)((long)puVar20 + 0xc) >> 0x20);
          fVar29 = *(float *)((long)puVar20 + 0x14);
label_03b32504:
          ((UnityEngine_Object_Fields *)&pUVar15[1].fields)->m_CachedPtr = CONCAT44(fVar31,fVar30);
          *(float *)&pUVar15[2].klass = fVar29;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pDVar11 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          pDVar12 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar27,pDVar11,(MethodInfo *)0x0);
          pDVar10 = DG_Tweening_TweenSettingsExtensions__Join
                              (pDVar10,(DG_Tweening_Tween_o *)pDVar12,(MethodInfo *)0x0);
          pDVar13 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          pIVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar10,pDVar13,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar14 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar14;
        }
        __this = pUVar15[1].monitor;
        pUVar26 = (UnityEngine_RectTransform_o *)0x0;
        if (__this != (UnityEngine_Transform_o *)0x0) {
          UVar32 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
          fVar29 = UVar32.fields.z;
          fVar30 = UVar32.fields.x;
          fVar31 = UVar32.fields.y;
          goto label_03b32504;
        }
      }
    }
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    g_data_057a9c36 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar24 = 0;
  pUVar15 = pUVar26;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
    UVar32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar26,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar20 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar31 = UVar32.fields.y - (float)((ulong)*puVar20 >> 0x20);
    fVar29 = UVar32.fields.z - *(float *)(puVar20 + 1);
    fVar30 = UVar32.fields.x - (float)*puVar20;
    if (9.9999994e-11 <= fVar30 * fVar30 + fVar31 * fVar31 + fVar29 * fVar29) {
      UVar32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar26,(MethodInfo *)0x0);
      fVar29 = UVar32.fields.z;
      fVar30 = UVar32.fields.x;
      fVar31 = UVar32.fields.y;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar20 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar30 = (float)*(undefined8 *)((long)puVar20 + 0xc);
      fVar31 = (float)((ulong)*(undefined8 *)((long)puVar20 + 0xc) >> 0x20);
      fVar29 = *(float *)((long)puVar20 + 0x14);
    }
    if (cVar23 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      value.fields.y = fVar31;
      value.fields.x = fVar30;
      value.fields.z = fVar29;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar26,value,(MethodInfo *)0x0);
      pDVar17 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar26,(UnityEngine_Vector3_o)endValue,fVar27,
                           (MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Sequence_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar17,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      puVar20 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
    }
    else {
      UVar32.fields.x = fVar30 * 1.35;
      UVar32.fields.y = fVar31 * 1.35;
      UVar32.fields.z = fVar29 * 1.35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar26,UVar32,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.x = fVar30 * 0.88;
      endValue_00.fields.y = fVar31 * 0.88;
      endValue_00.fields.z = fVar29 * 0.88;
      pDVar17 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar26,endValue_00,fVar27 * 0.55,(MethodInfo *)0x0);
      pDVar14 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar17,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar10 = DG_Tweening_TweenSettingsExtensions__Append(pDVar10,pDVar14,(MethodInfo *)0x0);
      endValue_01.fields.z = fVar29;
      endValue_01.fields.x = fVar30;
      endValue_01.fields.y = fVar31;
      pDVar17 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar26,endValue_01,fVar27 * 0.45,(MethodInfo *)0x0);
      pDVar14 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                          ((Il2CppObject *)pDVar17,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar10 = DG_Tweening_TweenSettingsExtensions__Append(pDVar10,pDVar14,(MethodInfo *)0x0);
      puVar20 = &MethodInfo_Sequence_SetUpdate_Sequence;
    }
    pDVar14 = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                        ((Il2CppObject *)pDVar10,1,(MethodInfo_25F47A0 *)*puVar20);
    return pDVar14;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar25 = 0;
  pUVar26 = pUVar15;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
    UVar33 = UnityEngine_RectTransform__get_rect(pUVar15,(MethodInfo *)0x0);
    fVar29 = 64.0;
    if (64.0 <= UVar33.fields.m_Width) {
      fVar29 = UVar33.fields.m_Width;
    }
    if ((char)uVar24 == '\0') {
      fVar29 = fVar29 * 1.5;
    }
    pMVar21 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar21 = extraout_RDX_00;
    }
    offset_02.fields.y = 0.0;
    offset_02.fields.x = fVar29;
    pDVar14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                        (pUVar15,fVar27,uVar24 & 0xff,offset_02,pMVar21);
    return pDVar14;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar18 = (UnityEngine_RectTransform_o *)0x0;
  uVar24 = 0;
  pUVar15 = pUVar26;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar24 = 0;
    pUVar15 = pUVar18;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
      UVar33 = UnityEngine_RectTransform__get_rect(pUVar18,(MethodInfo *)0x0);
      fVar29 = 64.0;
      if (64.0 <= UVar33.fields.m_Width) {
        fVar29 = UVar33.fields.m_Width;
      }
      pMVar21 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar21 = extraout_RDX_02;
      }
      method_01 = (MethodInfo *)(uVar25 & 0xff);
      uVar24 = (uint)method_01;
      offset_00.fields.y = 0.0;
      offset_00.fields.x = fVar29;
      pDVar14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                          (pUVar18,fVar27,uVar24,offset_00,pMVar21);
      pUVar15 = (UnityEngine_RectTransform_o *)
                Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                          ((UnityEngine_GameObject_o *)pUVar26,method_01);
      pDVar19 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                          ((UnityEngine_CanvasGroup_o *)pUVar15,fVar27,uVar24,method_00);
      if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar21 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar26,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar27,52.0,pMVar21);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar10 = (DG_Tweening_Sequence_o *)
                  DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                            ((Il2CppObject *)pDVar10,1,MethodInfo_Sequence_SetUpdate_Sequence);
        if (pDVar14 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
        }
        if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar19,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar10;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar10,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar10;
      }
    }
  }
  else if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar18 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar26,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar18 = (UnityEngine_RectTransform_o *)0x0;
  pUVar26 = pUVar15;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar18 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar15,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar26 = pUVar18;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar18 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar26,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar33 = UnityEngine_RectTransform__get_rect(pUVar18,(MethodInfo *)0x0);
  fVar29 = 64.0;
  if (64.0 <= UVar33.fields.m_Width) {
    fVar29 = UVar33.fields.m_Width;
  }
  pMVar21 = extraout_RDX_03;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar21 = extraout_RDX_04;
  }
  offset_01.fields.y = 0.0;
  offset_01.fields.x = -fVar29;
  pDVar14 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                      (pUVar18,fVar27,uVar24 & 0xff,offset_01,pMVar21);
  if ((char)uVar24 != '\0') {
    pUVar26 = pUVar18;
    if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar15,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus)
    ;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar19 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                          (__this_00,fVar27,(MethodInfo *)0x0);
      iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar19 = (DG_Tweening_Tween_o *)0x0;
  iVar2 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar10 = (DG_Tweening_Sequence_o *)
            DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar10,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar14 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
  }
  if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar19,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar10;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$LogoImpact
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact (UnityEngine_RectTransform_o* rect, float duration, const MethodInfo* method);
// 0x3b322c0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact
          (UnityEngine_RectTransform_o *rect,float duration,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar8;
  UnityEngine_RectTransform_o *pUVar9;
  DG_Tweening_Tween_o *pDVar10;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t_01;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *extraout_RAX;
  undefined8 *puVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar12;
  MethodInfo *method_01;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  UnityEngine_RectTransform_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar22;
  undefined8 local_80;
  
  if (g_data_057a9c32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogoImpact_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    g_data_057a9c32 = '\x01';
  }
  pUVar4 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  cVar13 = '\0';
  pUVar16 = pUVar4;
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4[1].monitor = rect;
    il2cpp_runtime_helper_022b4080(&pUVar4[1].monitor);
    x = pUVar4[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pGVar5 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(pUVar4[1].monitor,(MethodInfo *)0x0);
    ((UnityEngine_Object_Fields *)&pUVar4->fields)->m_CachedPtr = (intptr_t)pGVar5;
    il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar4->fields);
    pUVar16 = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar4->fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar13 = '\0';
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    lVar2 = ((UnityEngine_Object_Fields *)&pUVar4->fields)->m_CachedPtr;
    if (lVar2 != 0) {
      pUVar4[1].klass = *(UnityEngine_RectTransform_c **)(lVar2 + 0x30);
      pUVar16 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar4[1].monitor != (UnityEngine_Transform_o *)0x0) {
        cVar13 = '\0';
        UVar21 = UnityEngine_Transform__get_localScale(pUVar4[1].monitor,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        puVar11 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar19 = UVar21.fields.y - (float)((ulong)*puVar11 >> 0x20);
        fVar17 = UVar21.fields.z - *(float *)(puVar11 + 1);
        fVar18 = UVar21.fields.x - (float)*puVar11;
        if (fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17 < 9.9999994e-11) {
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
            puVar11 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          fVar18 = (float)*(undefined8 *)((long)puVar11 + 0xc);
          fVar19 = (float)((ulong)*(undefined8 *)((long)puVar11 + 0xc) >> 0x20);
          fVar17 = *(float *)((long)puVar11 + 0x14);
label_03b32504:
          ((UnityEngine_Object_Fields *)&pUVar4[1].fields)->m_CachedPtr = CONCAT44(fVar19,fVar18);
          *(float *)&pUVar4[2].klass = fVar17;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor();
          t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
          pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar6,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          t_00 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar6,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar7 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar7;
        }
        __this = pUVar4[1].monitor;
        pUVar16 = (UnityEngine_RectTransform_o *)0x0;
        if (__this != (UnityEngine_Transform_o *)0x0) {
          UVar21 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
          fVar17 = UVar21.fields.z;
          fVar18 = UVar21.fields.x;
          fVar19 = UVar21.fields.y;
          goto label_03b32504;
        }
      }
    }
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    g_data_057a9c36 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar14 = 0;
  pUVar4 = pUVar16;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    UVar21 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar16,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar11 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = UVar21.fields.y - (float)((ulong)*puVar11 >> 0x20);
    fVar18 = UVar21.fields.z - *(float *)(puVar11 + 1);
    fVar19 = UVar21.fields.x - (float)*puVar11;
    if (9.9999994e-11 <= fVar19 * fVar19 + fVar20 * fVar20 + fVar18 * fVar18) {
      UVar21 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar16,(MethodInfo *)0x0);
      fVar18 = UVar21.fields.z;
      fVar19 = UVar21.fields.x;
      fVar20 = UVar21.fields.y;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar11 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar19 = (float)*(undefined8 *)((long)puVar11 + 0xc);
      fVar20 = (float)((ulong)*(undefined8 *)((long)puVar11 + 0xc) >> 0x20);
      fVar18 = *(float *)((long)puVar11 + 0x14);
    }
    if (cVar13 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      value.fields.y = fVar20;
      value.fields.x = fVar19;
      value.fields.z = fVar18;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar16,value,(MethodInfo *)0x0);
      pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)pUVar16,(UnityEngine_Vector3_o)endValue,fVar17,
                          (MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar8,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      puVar11 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
    }
    else {
      UVar21.fields.x = fVar19 * 1.35;
      UVar21.fields.y = fVar20 * 1.35;
      UVar21.fields.z = fVar18 * 1.35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar16,UVar21,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.x = fVar19 * 0.88;
      endValue_00.fields.y = fVar20 * 0.88;
      endValue_00.fields.z = fVar18 * 0.88;
      pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)pUVar16,endValue_00,fVar17 * 0.55,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar8,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
      endValue_01.fields.z = fVar18;
      endValue_01.fields.x = fVar19;
      endValue_01.fields.y = fVar20;
      pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)pUVar16,endValue_01,fVar17 * 0.45,(MethodInfo *)0x0);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar8,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
      puVar11 = &MethodInfo_Sequence_SetUpdate_Sequence;
    }
    pDVar7 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar6,1,(MethodInfo_25F47A0 *)*puVar11);
    return pDVar7;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar15 = 0;
  pUVar16 = pUVar4;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar22 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
    fVar18 = 64.0;
    if (64.0 <= UVar22.fields.m_Width) {
      fVar18 = UVar22.fields.m_Width;
    }
    if ((char)uVar14 == '\0') {
      fVar18 = fVar18 * 1.5;
    }
    pMVar12 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar12 = extraout_RDX_00;
    }
    offset_01.fields.y = 0.0;
    offset_01.fields.x = fVar18;
    pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (pUVar4,fVar17,uVar14 & 0xff,offset_01,pMVar12);
    return pDVar7;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_RectTransform_o *)0x0;
  uVar14 = 0;
  pUVar4 = pUVar16;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    pUVar4 = pUVar9;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
      UVar22 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
      fVar18 = 64.0;
      if (64.0 <= UVar22.fields.m_Width) {
        fVar18 = UVar22.fields.m_Width;
      }
      pMVar12 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_02;
      }
      method_01 = (MethodInfo *)(uVar15 & 0xff);
      uVar14 = (uint)method_01;
      offset.fields.y = 0.0;
      offset.fields.x = fVar18;
      pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         (pUVar9,fVar17,uVar14,offset,pMVar12);
      pUVar4 = (UnityEngine_RectTransform_o *)
               Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                         ((UnityEngine_GameObject_o *)pUVar16,method_01);
      pDVar10 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                          ((UnityEngine_CanvasGroup_o *)pUVar4,fVar17,uVar14,method_00);
      if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar12 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t_01 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar17,52.0,pMVar12);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar6 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar6,1,MethodInfo_Sequence_SetUpdate_Sequence)
        ;
        if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
        }
        if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
        }
        if (t_01 == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar6;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar6,t_01,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar6;
      }
    }
  }
  else if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_RectTransform_o *)0x0;
  pUVar16 = pUVar4;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar16 = pUVar9;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar16,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar22 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
  fVar18 = 64.0;
  if (64.0 <= UVar22.fields.m_Width) {
    fVar18 = UVar22.fields.m_Width;
  }
  pMVar12 = extraout_RDX_03;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar12 = extraout_RDX_04;
  }
  offset_00.fields.y = 0.0;
  offset_00.fields.x = -fVar18;
  pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (pUVar9,fVar17,uVar14 & 0xff,offset_00,pMVar12);
  if ((char)uVar14 != '\0') {
    pUVar16 = pUVar9;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar4,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar10 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                          (__this_00,fVar17,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar10 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar6 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
  }
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar6;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x3b32c30

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
          (UnityEngine_GameObject_o *go,float duration,bool_conflict enter,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_o offset;
  float fVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *__this;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Rect_o UVar5;
  
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  __this_01 = (UnityEngine_RectTransform_o *)go;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b32e2c;
    __this = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = __this;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar5 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
  fVar2 = 64.0;
  if (64.0 <= UVar5.fields.m_Width) {
    fVar2 = UVar5.fields.m_Width;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  offset.fields.y = 0.0;
  offset.fields.x = -fVar2;
  t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                (__this,duration,enter & 0xff,offset,method_00);
  if ((char)enter != '\0') {
    __this_01 = __this;
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      t_00 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                       (__this_00,duration,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  t_00 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar4 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t,(MethodInfo *)0x0);
  }
  if (t_00 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t_00,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushSidePanelContentIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x3b32a10

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
          (UnityEngine_GameObject_o *go,float duration,bool_conflict enter,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  DG_Tweening_Tween_o *pDVar5;
  UnityEngine_RectTransform_o *group;
  DG_Tweening_Tween_o *pDVar6;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  DG_Tweening_Sequence_o *pDVar7;
  UnityEngine_RectTransform_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  uint enter_00;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  enter_00 = 0;
  group = (UnityEngine_RectTransform_o *)go;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enter_00 = 0;
    group = pUVar4;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      fVar9 = 64.0;
      if (64.0 <= UVar10.fields.m_Width) {
        fVar9 = UVar10.fields.m_Width;
      }
      pMVar8 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar8 = extraout_RDX_00;
      }
      method_01 = (MethodInfo *)((ulong)(uint)enter & 0xff);
      enter_00 = (uint)method_01;
      offset.fields.y = 0.0;
      offset.fields.x = fVar9;
      pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         (pUVar4,duration,enter_00,offset,pMVar8);
      group = (UnityEngine_RectTransform_o *)
              Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,method_01);
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                         ((UnityEngine_CanvasGroup_o *)group,duration,enter_00,method_00);
      if (go != (UnityEngine_GameObject_o *)0x0) {
        pMVar8 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,duration,52.0,pMVar8);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar7 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence)
        ;
        if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar5,(MethodInfo *)0x0);
        }
        if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar6,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar7;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar7,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar7;
      }
    }
  }
  else if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  pUVar4 = group;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)group,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (group == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)group,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = __this;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar10 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
  fVar2 = 64.0;
  if (64.0 <= UVar10.fields.m_Width) {
    fVar2 = UVar10.fields.m_Width;
  }
  pMVar8 = extraout_RDX_01;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_02;
  }
  offset_00.fields.y = 0.0;
  offset_00.fields.x = -fVar2;
  pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (__this,fVar9,enter_00 & 0xff,offset_00,pMVar8);
  if ((char)enter_00 != '\0') {
    pUVar4 = __this;
    if (group == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)group,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar6 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                         (__this_00,fVar9,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar6 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar7 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar5,(MethodInfo *)0x0);
  }
  if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar6,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar7;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HorizontalSurfaceBlur
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur (UnityEngine_UI_Image_o* image, float duration, float blurPixels, const MethodInfo* method);
// 0x3b33260

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
          (UnityEngine_UI_Image_o *image,float duration,float blurPixels,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  DG_Tweening_Tween_o *extraout_RAX;
  UnityEngine_UI_Image_o *__this;
  Il2CppObject *pIVar6;
  
  if (g_data_057a9c35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnKill_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    g_data_057a9c35 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = (Il2CppClass *)0x0;
  __this = image;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b3352b;
    pIVar3 = (Il2CppClass *)(*(image->klass->vtable)._32_get_material.methodPtr)();
    __this = image;
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar6 = pIVar2 + 1;
    pIVar2[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(pIVar6);
    pIVar3 = pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pIVar3 = pIVar6->klass;
    __this = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&(TypeInfo_GisketchSurfaceMaterial->fields).m_Corners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pIVar3 != (Il2CppClass *)0x0) {
      bVar1 = UnityEngine_Material__HasProperty
                        ((UnityEngine_Material_o *)pIVar3,
                         (((TypeInfo_GisketchSurfaceMaterial->fields).m_ParentMask)->fields).m_ForceClip,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pIVar3 = pIVar6->klass;
      __this = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&(TypeInfo_GisketchSurfaceMaterial->fields).m_Corners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (pIVar3 != (Il2CppClass *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pIVar3,
                   (((TypeInfo_GisketchSurfaceMaterial->fields).m_ParentMask)->fields).m_ForceClip,blurPixels,(MethodInfo *)0x0);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        t = DG_Tweening_DOVirtual__Float(blurPixels,0.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)t,pDVar4,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar4 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnKill_object_(pIVar2,pDVar4,MethodInfo_Tweener_OnKill_Tweener);
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar2,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar5;
      }
    }
  }
label_03b3352b:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$FooterIconIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3b325f0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  DG_Tweening_Tween_o *pDVar8;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this;
  DG_Tweening_Tween_o *extraout_RAX;
  undefined8 *puVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar10;
  MethodInfo *method_01;
  uint uVar11;
  ulong uVar12;
  UnityEngine_RectTransform_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  UnityEngine_Rect_o UVar18;
  undefined8 uStack_28;
  
  if (g_data_057a9c36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    g_data_057a9c36 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = 0;
  pUVar7 = rect;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar17 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    puVar9 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar16 = UVar17.fields.y - (float)((ulong)*puVar9 >> 0x20);
    fVar14 = UVar17.fields.z - *(float *)(puVar9 + 1);
    fVar15 = UVar17.fields.x - (float)*puVar9;
    if (9.9999994e-11 <= fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14) {
      UVar17 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      fVar14 = UVar17.fields.z;
      fVar15 = UVar17.fields.x;
      fVar16 = UVar17.fields.y;
    }
    else {
      if (g_data_057a6932 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        puVar9 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar15 = (float)*(undefined8 *)((long)puVar9 + 0xc);
      fVar16 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xc) >> 0x20);
      fVar14 = *(float *)((long)puVar9 + 0x14);
    }
    if ((char)enter == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      value.fields.y = fVar16;
      value.fields.x = fVar15;
      value.fields.z = fVar14;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o)endValue,duration,
                          (MethodInfo *)0x0);
      pDVar4 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar3,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      puVar9 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG;
    }
    else {
      UVar17.fields.x = fVar15 * 1.35;
      UVar17.fields.y = fVar16 * 1.35;
      UVar17.fields.z = fVar14 * 1.35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,UVar17,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.x = fVar15 * 0.88;
      endValue_00.fields.y = fVar16 * 0.88;
      endValue_00.fields.z = fVar14 * 0.88;
      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue_00,duration * 0.55,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar3,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Append(pDVar4,pDVar5,(MethodInfo *)0x0);
      endValue_01.fields.z = fVar14;
      endValue_01.fields.x = fVar15;
      endValue_01.fields.y = fVar16;
      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue_01,duration * 0.45,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                         ((Il2CppObject *)pDVar3,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Append(pDVar4,pDVar5,(MethodInfo *)0x0);
      puVar9 = &MethodInfo_Sequence_SetUpdate_Sequence;
    }
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar4,1,(MethodInfo_25F47A0 *)*puVar9);
    return pDVar5;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar12 = 0;
  pUVar13 = pUVar7;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
    UVar18 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
    fVar15 = 64.0;
    if (64.0 <= UVar18.fields.m_Width) {
      fVar15 = UVar18.fields.m_Width;
    }
    if ((char)uVar11 == '\0') {
      fVar15 = fVar15 * 1.5;
    }
    pMVar10 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar10 = extraout_RDX_00;
    }
    offset_01.fields.y = 0.0;
    offset_01.fields.x = fVar15;
    pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (pUVar7,fVar14,uVar11 & 0xff,offset_01,pMVar10);
    return pDVar5;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  uVar11 = 0;
  pUVar7 = pUVar13;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar11 = 0;
    pUVar7 = pUVar6;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      UVar18 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
      fVar15 = 64.0;
      if (64.0 <= UVar18.fields.m_Width) {
        fVar15 = UVar18.fields.m_Width;
      }
      pMVar10 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_02;
      }
      method_01 = (MethodInfo *)(uVar12 & 0xff);
      uVar11 = (uint)method_01;
      offset.fields.y = 0.0;
      offset.fields.x = fVar15;
      pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         (pUVar6,fVar14,uVar11,offset,pMVar10);
      pUVar7 = (UnityEngine_RectTransform_o *)
               Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                         ((UnityEngine_GameObject_o *)pUVar13,method_01);
      pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                         ((UnityEngine_CanvasGroup_o *)pUVar7,fVar14,uVar11,method_00);
      if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar10 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar14,52.0,pMVar10);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence)
        ;
        if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar5,(MethodInfo *)0x0);
        }
        if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar8,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar4;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar4;
      }
    }
  }
  else if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar6 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar13,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  pUVar13 = pUVar7;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar6 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar13 = pUVar6;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar18 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
  fVar15 = 64.0;
  if (64.0 <= UVar18.fields.m_Width) {
    fVar15 = UVar18.fields.m_Width;
  }
  pMVar10 = extraout_RDX_03;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar10 = extraout_RDX_04;
  }
  offset_00.fields.y = 0.0;
  offset_00.fields.x = -fVar15;
  pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (pUVar6,fVar14,uVar11 & 0xff,offset_00,pMVar10);
  if ((char)uVar11 != '\0') {
    pUVar13 = pUVar6;
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar7,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar8 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play(__this,fVar14,(MethodInfo *)0x0)
      ;
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar8 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar4 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar5,(MethodInfo *)0x0);
  }
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar8,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$TipPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3b32930

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  float fVar2;
  bool_conflict bVar3;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *group;
  DG_Tweening_Tween_o *pDVar6;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t;
  DG_Tweening_Sequence_o *pDVar7;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  uint enter_00;
  ulong uVar9;
  UnityEngine_RectTransform_o *pUVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  
  if (g_data_057a9c37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c37 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 0;
  pUVar10 = rect;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    fVar11 = 64.0;
    if (64.0 <= UVar12.fields.m_Width) {
      fVar11 = UVar12.fields.m_Width;
    }
    if ((char)enter == '\0') {
      fVar11 = fVar11 * 1.5;
    }
    pMVar8 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_00;
    }
    offset_01.fields.y = 0.0;
    offset_01.fields.x = fVar11;
    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (rect,duration,enter & 0xff,offset_01,pMVar8);
    return pDVar4;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c34 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_RectTransform_o *)0x0;
  enter_00 = 0;
  group = pUVar10;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_03b32ac8:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enter_00 = 0;
    group = pUVar5;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar12 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      fVar2 = 64.0;
      if (64.0 <= UVar12.fields.m_Width) {
        fVar2 = UVar12.fields.m_Width;
      }
      pMVar8 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar8 = extraout_RDX_02;
      }
      method_01 = (MethodInfo *)(uVar9 & 0xff);
      enter_00 = (uint)method_01;
      offset.fields.y = 0.0;
      offset.fields.x = fVar2;
      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                         (pUVar5,fVar11,enter_00,offset,pMVar8);
      group = (UnityEngine_RectTransform_o *)
              Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                        ((UnityEngine_GameObject_o *)pUVar10,method_01);
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                         ((UnityEngine_CanvasGroup_o *)group,fVar11,enter_00,method_00);
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        pMVar8 = MethodInfo_Image_GetComponent_Image;
        image = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo_255A0F0 *)MethodInfo_Image_GetComponent_Image);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,fVar11,52.0,pMVar8);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar7 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence)
        ;
        if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar4,(MethodInfo *)0x0);
        }
        if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar6,(MethodInfo *)0x0);
        }
        if (t == (DG_Tweening_Tween_o *)0x0) {
          return (DG_Tweening_Tween_o *)pDVar7;
        }
        DG_Tweening_TweenSettingsExtensions__Join(pDVar7,t,(MethodInfo *)0x0);
        return (DG_Tweening_Tween_o *)pDVar7;
      }
    }
  }
  else if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b32ac8;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c33 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_RectTransform_o *)0x0;
  pUVar10 = group;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)group,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (group == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)group,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = pUVar5;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
label_03b32e2c:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  UVar12 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
  fVar2 = 64.0;
  if (64.0 <= UVar12.fields.m_Width) {
    fVar2 = UVar12.fields.m_Width;
  }
  pMVar8 = extraout_RDX_03;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_04;
  }
  offset_00.fields.y = 0.0;
  offset_00.fields.x = -fVar2;
  pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (pUVar5,fVar11,enter_00 & 0xff,offset_00,pMVar8);
  if ((char)enter_00 != '\0') {
    pUVar10 = pUVar5;
    if (group == (UnityEngine_RectTransform_o *)0x0) goto label_03b32e2c;
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)group,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_GisketchBrus);
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pDVar6 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play(__this,fVar11,(MethodInfo *)0x0)
      ;
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03b32dd2;
    }
  }
  pDVar6 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03b32dd2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar7 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar4,(MethodInfo *)0x0);
  }
  if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar6,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar7;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideNoFadeWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b32fe0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  DG_Tweening_TweenCallback_float__o *pDVar4;
  DG_Tweening_Tweener_o *pDVar5;
  DG_Tweening_TweenCallback_o *pDVar6;
  DG_Tweening_Tween_o *pDVar7;
  Il2CppClass *pIVar8;
  DG_Tweening_Tween_o *extraout_RAX;
  Il2CppObject *pIVar9;
  float duration_00;
  float value;
  UnityEngine_Vector2_Fields local_38;
  
  value = offset.fields.x;
  if (g_data_057a9c38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SlideNoFadeWithOffset_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SlideNoFadeWithOffset_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass33_0);
    g_data_057a9c38 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass33_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pIVar3 = (Il2CppClass *)Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar2 + 1;
    pIVar2[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(pIVar9);
    rect = (UnityEngine_RectTransform_o *)pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if ((char)enter != '\0') {
      rect = (UnityEngine_RectTransform_o *)pIVar9->klass;
      if ((Il2CppClass *)rect == (Il2CppClass *)0x0) goto label_03b33251;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect,offset,(MethodInfo *)0x0);
    }
    if (pIVar9->klass != (Il2CppClass *)0x0) {
      pIVar2[1].monitor = (pIVar9->klass->_1).this_arg.data;
      local_38 = offset.fields;
      if ((char)enter != '\0') {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        local_38 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      *(float *)&pIVar2[2].klass = local_38.x;
      *(float *)((long)&pIVar2[2].klass + 4) = local_38.y;
      pDVar4 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      pDVar5 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,pDVar4,(MethodInfo *)0x0);
      pIVar2 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar5,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar6 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
      DG_Tweening_TweenCallback___ctor();
      pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar2,pDVar6,MethodInfo_Tweener_OnComplete_Tweener);
      pDVar7 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar2,1,MethodInfo_Tweener_SetUpdate_Tweener);
      return pDVar7;
    }
  }
label_03b33251:
  duration_00 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnKill_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HorizontalSurfaceBlur_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    g_data_057a9c35 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppClass *)0x0;
  pIVar3 = (Il2CppClass *)rect;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((Il2CppClass *)rect == (Il2CppClass *)0x0) goto label_03b3352b;
    pIVar8 = (Il2CppClass *)(*(code *)(((Il2CppClass *)rect)->_1).image[2]._1.castClass)();
    pIVar3 = (Il2CppClass *)rect;
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar2 + 1;
    pIVar2[1].klass = pIVar8;
    il2cpp_runtime_helper_022b4080(pIVar9);
    pIVar3 = pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pIVar8 = pIVar9->klass;
    pIVar3 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)&(TypeInfo_GisketchSurfaceMaterial->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pIVar8 != (Il2CppClass *)0x0) {
      bVar1 = UnityEngine_Material__HasProperty
                        ((UnityEngine_Material_o *)pIVar8,
                         *(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial->static_fields + 0x60),(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pIVar8 = pIVar9->klass;
      pIVar3 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)&(TypeInfo_GisketchSurfaceMaterial->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (pIVar8 != (Il2CppClass *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pIVar8,*(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial->static_fields + 0x60),
                   value,(MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        pDVar5 = DG_Tweening_DOVirtual__Float(value,0.0,duration_00,pDVar4,(MethodInfo *)0x0);
        pDVar6 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar5,pDVar6,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar6 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnKill_object_(pIVar2,pDVar6,MethodInfo_Tweener_OnKill_Tweener);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar2,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar7;
      }
    }
  }
label_03b3352b:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar3,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$OutCubic
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic (float value, const MethodInfo* method);
// 0x3b33550

float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic(float value,MethodInfo *method)

{
  MethodInfo *in_RSI;
  float fVar1;
  
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)method,1.0 - value,3.0,in_RSI);
  return 1.0 - fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor (const MethodInfo* method);
// 0x3b33580

void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor(MethodInfo *method)

{
  undefined1 *puVar1;
  
  if (g_data_057a9c39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c39 = '\x01';
  }
  puVar1 = *(undefined1 **)(TypeInfo_GisketchMotion + 0xb8);
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  return;
}


