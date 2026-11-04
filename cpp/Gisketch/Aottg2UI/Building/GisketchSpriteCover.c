// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x181908500

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *value;
  Gilzoide_FlexUi_FlexLayout_o *value_00;
  
  if (Il2CppMethodInitialized_1843421be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    Il2CppMethodInitialized_1843421be = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,value);
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  (__this->fields)._flex = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._flex,value_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x1819085f0

void
Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable(Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x1819085f0

void
Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate(Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x1819085f0

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x181908600

bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar4;
  UnityEngine_Vector2_o spriteSize;
  bool bVar5;
  char cVar6;
  UnityEngine_UI_Image_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Rect_o *pUVar11;
  UnityEngine_Vector2_o UVar12;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar13;
  UnityEngine_RectTransform_o *__this_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  float fStackX_c;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843421bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_1843421bf = '\x01';
  }
  pUVar7 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._image = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._image,pUVar7);
  }
  pGVar8 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pGVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._flex,pGVar8);
  }
  pUVar7 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_181908ba2;
  pUVar2 = (UnityEngine_Object_o *)(pUVar7->fields).m_Sprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  pGVar8 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181908ba2;
  pUVar9 = UnityEngine_Transform__GetParent(pUVar9,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181908ba2;
  pUVar10 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar9,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar10->klass == TypeInfo_UnityEngine_RectTransform)) {
    __this_00 = pUVar10;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_181908ba2;
  pUVar11 = UnityEngine_RectTransform__get_rect(local_58,__this_00,(MethodInfo *)0x0);
  fVar16 = (pUVar11->fields).m_Width;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (fVar16 <= 0.0) {
    return false;
  }
  pUVar11 = UnityEngine_RectTransform__get_rect(local_58,__this_00,(MethodInfo *)0x0);
  fVar16 = (pUVar11->fields).m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (fVar16 <= 0.0) {
    return false;
  }
  pUVar11 = UnityEngine_RectTransform__get_rect(local_58,__this_00,(MethodInfo *)0x0);
  fVar16 = (pUVar11->fields).m_Width;
  fVar1 = (pUVar11->fields).m_Height;
  UVar12.fields.x = (pUVar11->fields).m_Width;
  UVar12.fields.y = (pUVar11->fields).m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar14 = fVar16 - (__this->fields)._lastParent.fields.x;
  fVar15 = fVar1 - (__this->fields)._lastParent.fields.y;
  if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
    pUVar7 = (__this->fields)._image;
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_181908ba2;
    pUVar2 = (UnityEngine_Object_o *)(pUVar7->fields).m_Sprite;
    y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,y,(MethodInfo *)0x0);
    if (bVar5) {
      return false;
    }
  }
  pUVar7 = (__this->fields)._image;
  (__this->fields)._lastParent.fields.x = fVar16;
  (__this->fields)._lastParent.fields.y = fVar1;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_181908ba2;
  pUVar3 = (pUVar7->fields).m_Sprite;
  (__this->fields)._lastSprite = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSprite,pUVar3);
  pUVar7 = (__this->fields)._image;
  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar3 = (pUVar7->fields).m_Sprite, pUVar3 == (UnityEngine_Sprite_o *)0x0)) goto label_181908ba2;
  pUVar11 = UnityEngine_Sprite__get_rect(local_58,pUVar3,(MethodInfo *)0x0);
  spriteSize.fields.x = (pUVar11->fields).m_Width;
  spriteSize.fields.y = (pUVar11->fields).m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  UVar12 = Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize(UVar12,spriteSize,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._image;
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_181908ba2;
  fStackX_c = UVar12.fields.y;
  UnityEngine_UI_Image__set_preserveAspect(pUVar7,true,(MethodInfo *)0x0);
  fVar16 = UVar12.fields.x;
  cVar6 = il2cpp_runtime_helper_180562af0(fVar16,(__this->fields)._lastWidth);
  if ((cVar6 != '\0') && (cVar6 = il2cpp_runtime_helper_180562af0(fStackX_c,(__this->fields)._lastHeight), cVar6 != '\0')) {
    return false;
  }
  pGVar8 = (__this->fields)._flex;
  (__this->fields)._lastWidth = fVar16;
  (__this->fields)._lastHeight = fStackX_c;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_181908ba2;
  bVar5 = (pGVar8->fields)._alignSelf != 2;
  if (bVar5) {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar8,2,(MethodInfo *)0x0);
  }
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_181908ba2;
  GVar4 = (pGVar8->fields)._width.fields;
  if (GVar4.Unit == 1) {
    local_res8 = GVar4.Value;
    cVar6 = il2cpp_runtime_helper_180562af0(local_res8,fVar16);
    if (cVar6 == '\0') goto label_181908acf;
  }
  else {
label_181908acf:
    pGVar8 = (__this->fields)._flex;
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar13 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar16,(MethodInfo *)0x0);
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_181908ba2;
    Gilzoide_FlexUi_FlexLayout__set_Width(pGVar8,GVar13,(MethodInfo *)0x0);
    bVar5 = true;
  }
  pGVar8 = (__this->fields)._flex;
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar4 = (pGVar8->fields)._height.fields;
    if (GVar4.Unit == 1) {
      local_res8 = GVar4.Value;
      cVar6 = il2cpp_runtime_helper_180562af0(local_res8,fStackX_c);
      if (cVar6 != '\0') {
        return bVar5;
      }
    }
    pGVar8 = (__this->fields)._flex;
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar13 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fStackX_c,(MethodInfo *)0x0);
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar8,GVar13,(MethodInfo *)0x0);
      return true;
    }
  }
label_181908ba2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$CoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize (UnityEngine_Vector2_o parentSize, UnityEngine_Vector2_o spriteSize, const MethodInfo* method);
// 0x181908580

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize
          (UnityEngine_Vector2_o parentSize,UnityEngine_Vector2_o spriteSize,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  undefined4 uStackX_24;
  undefined4 uStack_14;
  
  if ((spriteSize.fields.x <= 0.0) || (uStackX_24 = spriteSize.fields.y, uStackX_24 <= 0.0)) {
    uStackX_24 = 1.0;
  }
  else {
    uStackX_24 = spriteSize.fields.x / uStackX_24;
  }
  uStack_14 = parentSize.fields.y;
  fVar3 = parentSize.fields.x;
  fVar2 = uStack_14;
  if (uStack_14 <= fVar3 / uStackX_24) {
    fVar2 = fVar3 / uStackX_24;
  }
  if (fVar3 <= uStack_14 * uStackX_24) {
    fVar3 = uStack_14 * uStackX_24;
  }
  UVar1.y = fVar2;
  UVar1.x = fVar3;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$SamePoint
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint (Gilzoide_FlexUi_Yoga_YGValue_o value, float expected, const MethodInfo* method);
// 0x181908bb0

bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
               (Gilzoide_FlexUi_Yoga_YGValue_o value,float expected,MethodInfo *method)

{
  bool bVar1;
  undefined4 local_res8;
  
  if (value.fields.Unit != 1) {
    return false;
  }
  local_res8 = value.fields.Value;
  bVar1 = (bool)il2cpp_runtime_helper_180562af0(local_res8,expected,0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x181908be0

void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  (__this->fields)._lastWidth = -1.0;
  (__this->fields)._lastHeight = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


