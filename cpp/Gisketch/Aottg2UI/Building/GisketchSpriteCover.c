// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSpriteCover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1c520

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  
  if (DAT_0570155e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    DAT_0570155e = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Image_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._image,pUVar1);
  pGVar2 = (Gilzoide_FlexUi_FlexLayout_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  (__this->fields)._flex = pGVar2;
  il2cpp_runtime_glue(&(__this->fields)._flex,pGVar2);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1c5a0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar11;
  UnityEngine_RectTransform_o *__this_01;
  uint uVar12;
  uint uVar13;
  float value;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  
  if (DAT_0570155f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_0570155f = '\x01';
  }
  pUVar7 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar7 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pGVar8 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar2 = &(__this->fields)._flex;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar8;
    il2cpp_runtime_glue(ppGVar2);
  }
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pGVar8 = *ppGVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    __this_01 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b1cc52;
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Width <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Height <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar15 = UVar20.fields.m_Width;
  value = UVar20.fields.m_Height;
  UVar3 = (__this->fields)._lastParent.fields;
  fVar14 = fVar15 - UVar3.x;
  fVar16 = value - UVar3.y;
  if (fVar16 * fVar16 + fVar14 * fVar14 < 9.9999994e-11) {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
  }
  (__this->fields)._lastParent.fields = UVar20.fields._8_8_;
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  (__this->fields)._lastSprite = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate;
  il2cpp_runtime_glue(&(__this->fields)._lastSprite);
  pUVar7 = (__this->fields)._image;
  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate,
     __this_00 == (UnityEngine_Sprite_o *)0x0)) goto LAB_03b1cc52;
  UVar20 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  uVar12 = -(uint)(0.0 < UVar20.fields.m_Height);
  uVar13 = -(uint)(0.0 < UVar20.fields.m_Width);
  fVar17 = (float)(~uVar13 & 0x3f800000 |
                  (~uVar12 & 0x3f800000 |
                  (uint)(UVar20.fields.m_Width / UVar20.fields.m_Height) & uVar12) & uVar13);
  fVar16 = value * fVar17;
  fVar14 = fVar15;
  if (fVar15 <= fVar16) {
    fVar14 = fVar16;
  }
  fVar15 = fVar15 / fVar17;
  UnityEngine_UI_Image__set_preserveAspect(*ppUVar1,1,(MethodInfo *)0x0);
  fVar16 = (__this->fields)._lastWidth;
  if (DAT_056fdea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fdea3 = '\x01';
  }
  if (value <= fVar15) {
    value = fVar15;
  }
  fVar19 = ABS(fVar14);
  fVar17 = ABS(fVar16);
  fVar15 = fVar19;
  if (fVar19 <= fVar17) {
    fVar15 = fVar17;
  }
  fVar18 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar17 = fVar15 * 1e-06;
  if (fVar15 * 1e-06 <= fVar18) {
    fVar17 = fVar18;
  }
  if (ABS(fVar16 - fVar14) < fVar17) {
    fVar15 = (__this->fields)._lastHeight;
    fVar17 = ABS(fVar15);
    fVar16 = ABS(value);
    if (ABS(value) <= fVar17) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar17 = fVar18;
    }
    if (ABS(fVar15 - value) < fVar17) {
      return 0;
    }
  }
  (__this->fields)._lastWidth = fVar14;
  (__this->fields)._lastHeight = value;
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  if ((pGVar8->fields)._alignSelf == 2) {
    bVar6 = 0;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar8,2,(MethodInfo *)0x0);
    pGVar8 = *ppGVar2;
    bVar6 = 1;
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  }
  GVar5 = (pGVar8->fields)._width.fields;
  if ((ulong)GVar5 >> 0x20 == 1) {
    fVar15 = GVar5.Value;
    if (DAT_056fdea3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fdea3 = '\x01';
    }
    fVar16 = ABS(fVar15);
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar17 <= ABS(fVar14 - fVar15)) {
      pGVar8 = *ppGVar2;
      goto LAB_03b1cb12;
    }
  }
  else {
LAB_03b1cb12:
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar14,(MethodInfo *)0x0);
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
    Gilzoide_FlexUi_FlexLayout__set_Width(pGVar8,GVar11,(MethodInfo *)0x0);
    bVar6 = 1;
  }
  pGVar8 = *ppGVar2;
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar5 = (pGVar8->fields)._height.fields;
    if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
      fVar15 = GVar5.Value;
      if (DAT_056fdea3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Mathf);
        DAT_056fdea3 = '\x01';
      }
      fVar14 = ABS(fVar15);
      if (fVar14 <= ABS(value)) {
        fVar14 = ABS(value);
      }
      fVar17 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
      fVar16 = fVar14 * 1e-06;
      if (fVar14 * 1e-06 <= fVar17) {
        fVar16 = fVar17;
      }
      if (ABS(value - fVar15) < fVar16) {
        return bVar6;
      }
      pGVar8 = *ppGVar2;
    }
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar8,GVar11,(MethodInfo *)0x0);
      return 1;
    }
  }
LAB_03b1cc52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1cc60

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar11;
  UnityEngine_RectTransform_o *__this_01;
  uint uVar12;
  uint uVar13;
  float value;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  
  if (DAT_0570155f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_0570155f = '\x01';
  }
  pUVar7 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar7 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pGVar8 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar2 = &(__this->fields)._flex;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar8;
    il2cpp_runtime_glue(ppGVar2);
  }
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pGVar8 = *ppGVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    __this_01 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b1cc52;
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Width <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Height <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar15 = UVar20.fields.m_Width;
  value = UVar20.fields.m_Height;
  UVar3 = (__this->fields)._lastParent.fields;
  fVar14 = fVar15 - UVar3.x;
  fVar16 = value - UVar3.y;
  if (fVar16 * fVar16 + fVar14 * fVar14 < 9.9999994e-11) {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
  }
  (__this->fields)._lastParent.fields = UVar20.fields._8_8_;
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  (__this->fields)._lastSprite = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate;
  il2cpp_runtime_glue(&(__this->fields)._lastSprite);
  pUVar7 = (__this->fields)._image;
  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate,
     __this_00 == (UnityEngine_Sprite_o *)0x0)) goto LAB_03b1cc52;
  UVar20 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  uVar12 = -(uint)(0.0 < UVar20.fields.m_Height);
  uVar13 = -(uint)(0.0 < UVar20.fields.m_Width);
  fVar17 = (float)(~uVar13 & 0x3f800000 |
                  (~uVar12 & 0x3f800000 |
                  (uint)(UVar20.fields.m_Width / UVar20.fields.m_Height) & uVar12) & uVar13);
  fVar16 = value * fVar17;
  fVar14 = fVar15;
  if (fVar15 <= fVar16) {
    fVar14 = fVar16;
  }
  fVar15 = fVar15 / fVar17;
  UnityEngine_UI_Image__set_preserveAspect(*ppUVar1,1,(MethodInfo *)0x0);
  fVar16 = (__this->fields)._lastWidth;
  if (DAT_056fdea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fdea3 = '\x01';
  }
  if (value <= fVar15) {
    value = fVar15;
  }
  fVar19 = ABS(fVar14);
  fVar17 = ABS(fVar16);
  fVar15 = fVar19;
  if (fVar19 <= fVar17) {
    fVar15 = fVar17;
  }
  fVar18 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar17 = fVar15 * 1e-06;
  if (fVar15 * 1e-06 <= fVar18) {
    fVar17 = fVar18;
  }
  if (ABS(fVar16 - fVar14) < fVar17) {
    fVar15 = (__this->fields)._lastHeight;
    fVar17 = ABS(fVar15);
    fVar16 = ABS(value);
    if (ABS(value) <= fVar17) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar17 = fVar18;
    }
    if (ABS(fVar15 - value) < fVar17) {
      return 0;
    }
  }
  (__this->fields)._lastWidth = fVar14;
  (__this->fields)._lastHeight = value;
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  if ((pGVar8->fields)._alignSelf == 2) {
    bVar6 = 0;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar8,2,(MethodInfo *)0x0);
    pGVar8 = *ppGVar2;
    bVar6 = 1;
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  }
  GVar5 = (pGVar8->fields)._width.fields;
  if ((ulong)GVar5 >> 0x20 == 1) {
    fVar15 = GVar5.Value;
    if (DAT_056fdea3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fdea3 = '\x01';
    }
    fVar16 = ABS(fVar15);
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar17 <= ABS(fVar14 - fVar15)) {
      pGVar8 = *ppGVar2;
      goto LAB_03b1cb12;
    }
  }
  else {
LAB_03b1cb12:
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar14,(MethodInfo *)0x0);
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
    Gilzoide_FlexUi_FlexLayout__set_Width(pGVar8,GVar11,(MethodInfo *)0x0);
    bVar6 = 1;
  }
  pGVar8 = *ppGVar2;
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar5 = (pGVar8->fields)._height.fields;
    if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
      fVar15 = GVar5.Value;
      if (DAT_056fdea3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Mathf);
        DAT_056fdea3 = '\x01';
      }
      fVar14 = ABS(fVar15);
      if (fVar14 <= ABS(value)) {
        fVar14 = ABS(value);
      }
      fVar17 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
      fVar16 = fVar14 * 1e-06;
      if (fVar14 * 1e-06 <= fVar17) {
        fVar16 = fVar17;
      }
      if (ABS(value - fVar15) < fVar16) {
        return bVar6;
      }
      pGVar8 = *ppGVar2;
    }
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar8,GVar11,(MethodInfo *)0x0);
      return 1;
    }
  }
LAB_03b1cc52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1cc70

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar11;
  UnityEngine_RectTransform_o *__this_01;
  uint uVar12;
  uint uVar13;
  float value;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  
  if (DAT_0570155f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_0570155f = '\x01';
  }
  pUVar7 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar7 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pGVar8 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar2 = &(__this->fields)._flex;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar8;
    il2cpp_runtime_glue(ppGVar2);
  }
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pGVar8 = *ppGVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    __this_01 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b1cc52;
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Width <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Height <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar15 = UVar20.fields.m_Width;
  value = UVar20.fields.m_Height;
  UVar3 = (__this->fields)._lastParent.fields;
  fVar14 = fVar15 - UVar3.x;
  fVar16 = value - UVar3.y;
  if (fVar16 * fVar16 + fVar14 * fVar14 < 9.9999994e-11) {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
  }
  (__this->fields)._lastParent.fields = UVar20.fields._8_8_;
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  (__this->fields)._lastSprite = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate;
  il2cpp_runtime_glue(&(__this->fields)._lastSprite);
  pUVar7 = (__this->fields)._image;
  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate,
     __this_00 == (UnityEngine_Sprite_o *)0x0)) goto LAB_03b1cc52;
  UVar20 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  uVar12 = -(uint)(0.0 < UVar20.fields.m_Height);
  uVar13 = -(uint)(0.0 < UVar20.fields.m_Width);
  fVar17 = (float)(~uVar13 & 0x3f800000 |
                  (~uVar12 & 0x3f800000 |
                  (uint)(UVar20.fields.m_Width / UVar20.fields.m_Height) & uVar12) & uVar13);
  fVar16 = value * fVar17;
  fVar14 = fVar15;
  if (fVar15 <= fVar16) {
    fVar14 = fVar16;
  }
  fVar15 = fVar15 / fVar17;
  UnityEngine_UI_Image__set_preserveAspect(*ppUVar1,1,(MethodInfo *)0x0);
  fVar16 = (__this->fields)._lastWidth;
  if (DAT_056fdea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fdea3 = '\x01';
  }
  if (value <= fVar15) {
    value = fVar15;
  }
  fVar19 = ABS(fVar14);
  fVar17 = ABS(fVar16);
  fVar15 = fVar19;
  if (fVar19 <= fVar17) {
    fVar15 = fVar17;
  }
  fVar18 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar17 = fVar15 * 1e-06;
  if (fVar15 * 1e-06 <= fVar18) {
    fVar17 = fVar18;
  }
  if (ABS(fVar16 - fVar14) < fVar17) {
    fVar15 = (__this->fields)._lastHeight;
    fVar17 = ABS(fVar15);
    fVar16 = ABS(value);
    if (ABS(value) <= fVar17) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar17 = fVar18;
    }
    if (ABS(fVar15 - value) < fVar17) {
      return 0;
    }
  }
  (__this->fields)._lastWidth = fVar14;
  (__this->fields)._lastHeight = value;
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  if ((pGVar8->fields)._alignSelf == 2) {
    bVar6 = 0;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar8,2,(MethodInfo *)0x0);
    pGVar8 = *ppGVar2;
    bVar6 = 1;
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  }
  GVar5 = (pGVar8->fields)._width.fields;
  if ((ulong)GVar5 >> 0x20 == 1) {
    fVar15 = GVar5.Value;
    if (DAT_056fdea3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fdea3 = '\x01';
    }
    fVar16 = ABS(fVar15);
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar17 <= ABS(fVar14 - fVar15)) {
      pGVar8 = *ppGVar2;
      goto LAB_03b1cb12;
    }
  }
  else {
LAB_03b1cb12:
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar14,(MethodInfo *)0x0);
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
    Gilzoide_FlexUi_FlexLayout__set_Width(pGVar8,GVar11,(MethodInfo *)0x0);
    bVar6 = 1;
  }
  pGVar8 = *ppGVar2;
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar5 = (pGVar8->fields)._height.fields;
    if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
      fVar15 = GVar5.Value;
      if (DAT_056fdea3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Mathf);
        DAT_056fdea3 = '\x01';
      }
      fVar14 = ABS(fVar15);
      if (fVar14 <= ABS(value)) {
        fVar14 = ABS(value);
      }
      fVar17 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
      fVar16 = fVar14 * 1e-06;
      if (fVar14 * 1e-06 <= fVar17) {
        fVar16 = fVar17;
      }
      if (ABS(value - fVar15) < fVar16) {
        return bVar6;
      }
      pGVar8 = *ppGVar2;
    }
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar8,GVar11,(MethodInfo *)0x0);
      return 1;
    }
  }
LAB_03b1cc52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1c5b0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar11;
  UnityEngine_RectTransform_o *__this_01;
  uint uVar12;
  uint uVar13;
  float value;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  
  if (DAT_0570155f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_0570155f = '\x01';
  }
  pUVar7 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar7 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pGVar8 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar2 = &(__this->fields)._flex;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar8;
    il2cpp_runtime_glue(ppGVar2);
  }
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pGVar8 = *ppGVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1cc52;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    __this_01 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b1cc52;
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Width <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  if (UVar20.fields.m_Height <= 0.0) {
    return 0;
  }
  UVar20 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar15 = UVar20.fields.m_Width;
  value = UVar20.fields.m_Height;
  UVar3 = (__this->fields)._lastParent.fields;
  fVar14 = fVar15 - UVar3.x;
  fVar16 = value - UVar3.y;
  if (fVar16 * fVar16 + fVar14 * fVar14 < 9.9999994e-11) {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
  }
  (__this->fields)._lastParent.fields = UVar20.fields._8_8_;
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  (__this->fields)._lastSprite = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate;
  il2cpp_runtime_glue(&(__this->fields)._lastSprite);
  pUVar7 = (__this->fields)._image;
  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = *(UnityEngine_Sprite_o **)&(pUVar7->fields).m_ShouldRecalculate,
     __this_00 == (UnityEngine_Sprite_o *)0x0)) goto LAB_03b1cc52;
  UVar20 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1cc52;
  uVar12 = -(uint)(0.0 < UVar20.fields.m_Height);
  uVar13 = -(uint)(0.0 < UVar20.fields.m_Width);
  fVar17 = (float)(~uVar13 & 0x3f800000 |
                  (~uVar12 & 0x3f800000 |
                  (uint)(UVar20.fields.m_Width / UVar20.fields.m_Height) & uVar12) & uVar13);
  fVar16 = value * fVar17;
  fVar14 = fVar15;
  if (fVar15 <= fVar16) {
    fVar14 = fVar16;
  }
  fVar15 = fVar15 / fVar17;
  UnityEngine_UI_Image__set_preserveAspect(*ppUVar1,1,(MethodInfo *)0x0);
  fVar16 = (__this->fields)._lastWidth;
  if (DAT_056fdea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fdea3 = '\x01';
  }
  if (value <= fVar15) {
    value = fVar15;
  }
  fVar19 = ABS(fVar14);
  fVar17 = ABS(fVar16);
  fVar15 = fVar19;
  if (fVar19 <= fVar17) {
    fVar15 = fVar17;
  }
  fVar18 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar17 = fVar15 * 1e-06;
  if (fVar15 * 1e-06 <= fVar18) {
    fVar17 = fVar18;
  }
  if (ABS(fVar16 - fVar14) < fVar17) {
    fVar15 = (__this->fields)._lastHeight;
    fVar17 = ABS(fVar15);
    fVar16 = ABS(value);
    if (ABS(value) <= fVar17) {
      fVar16 = fVar17;
    }
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar17 = fVar18;
    }
    if (ABS(fVar15 - value) < fVar17) {
      return 0;
    }
  }
  (__this->fields)._lastWidth = fVar14;
  (__this->fields)._lastHeight = value;
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  if ((pGVar8->fields)._alignSelf == 2) {
    bVar6 = 0;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar8,2,(MethodInfo *)0x0);
    pGVar8 = *ppGVar2;
    bVar6 = 1;
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
  }
  GVar5 = (pGVar8->fields)._width.fields;
  if ((ulong)GVar5 >> 0x20 == 1) {
    fVar15 = GVar5.Value;
    if (DAT_056fdea3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fdea3 = '\x01';
    }
    fVar16 = ABS(fVar15);
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar17 <= ABS(fVar14 - fVar15)) {
      pGVar8 = *ppGVar2;
      goto LAB_03b1cb12;
    }
  }
  else {
LAB_03b1cb12:
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar14,(MethodInfo *)0x0);
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1cc52;
    Gilzoide_FlexUi_FlexLayout__set_Width(pGVar8,GVar11,(MethodInfo *)0x0);
    bVar6 = 1;
  }
  pGVar8 = *ppGVar2;
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar5 = (pGVar8->fields)._height.fields;
    if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
      fVar15 = GVar5.Value;
      if (DAT_056fdea3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Mathf);
        DAT_056fdea3 = '\x01';
      }
      fVar14 = ABS(fVar15);
      if (fVar14 <= ABS(value)) {
        fVar14 = ABS(value);
      }
      fVar17 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
      fVar16 = fVar14 * 1e-06;
      if (fVar14 * 1e-06 <= fVar17) {
        fVar16 = fVar17;
      }
      if (ABS(value - fVar15) < fVar16) {
        return bVar6;
      }
      pGVar8 = *ppGVar2;
    }
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar8,GVar11,(MethodInfo *)0x0);
      return 1;
    }
  }
LAB_03b1cc52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$CoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize (UnityEngine_Vector2_o parentSize, UnityEngine_Vector2_o spriteSize, const MethodInfo* method);
// 0x3b1cc80

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize
          (UnityEngine_Vector2_o parentSize,UnityEngine_Vector2_o spriteSize,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = parentSize.fields.x;
  fVar3 = parentSize.fields.y;
  fVar5 = 1.0;
  if ((0.0 < spriteSize.fields.x) && (0.0 < spriteSize.fields.y)) {
    fVar5 = spriteSize.fields.x / spriteSize.fields.y;
  }
  fVar4 = fVar2;
  if (fVar2 <= fVar3 * fVar5) {
    fVar4 = fVar3 * fVar5;
  }
  if (fVar3 <= fVar2 / fVar5) {
    fVar3 = fVar2 / fVar5;
  }
  UVar1.fields.y = fVar3;
  UVar1.fields.x = fVar4;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$SamePoint
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint (Gilzoide_FlexUi_Yoga_YGValue_o value, float expected, const MethodInfo* method);
// 0x3b1ccd0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
          (Gilzoide_FlexUi_Yoga_YGValue_o value,float expected,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((ulong)value.fields >> 0x20 == 1) {
    if (DAT_056fdea3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fdea3 = '\x01';
    }
    fVar2 = ABS(value.fields.Value);
    if (fVar2 <= ABS(expected)) {
      fVar2 = ABS(expected);
    }
    fVar1 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar3 = fVar2 * 1e-06;
    if (fVar2 * 1e-06 <= fVar1) {
      fVar3 = fVar1;
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(float **)(TypeInfo_Mathf + 0xb8) >> 8),
                    ABS(expected - value.fields.Value) < fVar3);
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1cd70

void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  (__this->fields)._lastWidth = -1.0;
  (__this->fields)._lastHeight = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


