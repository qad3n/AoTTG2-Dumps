// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCategoryRowRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e8df10

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x5e8e690

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x5e8e6a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this_00;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this_00,method);
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x5e8e700

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x5e8e710

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14_System_Collections_IEnumera
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x5e8e750

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, UnityEngine_RectTransform_o* content, int32_t count, float height, float gap, bool wrap, const MethodInfo* method);
// 0x5e8d3b0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,
               UnityEngine_RectTransform_o *content,int32_t count,float height,float gap,bool wrap,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    Il2CppMethodInitialized_07548898 = '\x01';
  }
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content);
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_pivot
              (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pGVar1 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._flex);
    if (content != (UnityEngine_RectTransform_o *)0x0) {
      pGVar1 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)content,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
      (__this->fields)._contentFlex = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._contentFlex);
      (__this->fields)._count = count;
      (__this->fields)._height = height;
      (__this->fields)._gap = gap;
      (__this->fields)._wrap = wrap;
      Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this,(MethodInfo *)pGVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$SpanLength
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__SpanLength (int32_t count, float size, float gap, const MethodInfo* method);
// 0x5e8d870

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__SpanLength
                (int32_t count,float size,float gap,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < count + -1) {
    iVar1 = count + -1;
  }
  return size * (float)count + (float)iVar1 * gap;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x5e8de90

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Start
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x5e8dea0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start
          (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this_00;
  
  if (Il2CppMethodInitialized_07548899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14);
    Il2CppMethodInitialized_07548899 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x5e8d890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8dc82: movss xmm0, dword ptr [rsp]

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  bool bVar3;
  char cVar4;
  int32_t columns;
  int32_t iVar5;
  UnityEngine_RectTransform_o *pUVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  UnityEngine_Object_o *x_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float value_00;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Rect_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  float local_58;
  float local_48;
  
  if (Il2CppMethodInitialized_0754889a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-base");
    Il2CppMethodInitialized_0754889a = '\x01';
  }
  pUVar6 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar1 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar1 = (__this->fields)._contentFlex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((__this->fields)._count < 1) {
    return;
  }
  pGVar1 = (__this->fields)._flex;
  if ((pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) ||
     (pUVar6 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(pGVar1,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_RectTransform_o *)0x0)) goto label_05e8de89;
  UVar13 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (UVar13.fields.m_Width <= 0.0) {
    return;
  }
  pUVar6 = (__this->fields)._sidePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._sidePanel;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x_00 = (UnityEngine_Object_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e8de89;
      pGVar2 = (x->fields)._Screens_k__BackingField;
      if ((pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) ||
         (__this_00 = (pGVar2->fields)._active, __this_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)
         ) {
        x_00 = (UnityEngine_Object_o *)0x0;
      }
      else {
        x_00 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Building_GisketchView__Find
                         (__this_00,"brush-side-panel-base",(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x_00 == (UnityEngine_Object_o *)0x0) goto label_05e8de89;
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      *targetAddress = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
  }
  pUVar6 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  value.Value = 0.0;
  value.Unit = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar12 = 0.0;
  if (bVar3) {
    pGVar1 = (__this->fields)._flex;
    if ((pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) ||
       (pUVar6 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(pGVar1,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_RectTransform_o *)0x0)) goto label_05e8de89;
    UVar14 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    UVar15.fields.x = UVar14.fields.m_XMin;
    UVar15.fields.y = 0.0;
    UVar15.fields.z = 0.0;
    UVar15 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)pUVar6,UVar15,(MethodInfo *)0x0)
    ;
    __this_01 = *targetAddress;
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_05e8de89;
    UVar14 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    UVar16.fields.x = UVar14.fields.m_XMin + UVar14.fields.m_Width;
    UVar16.fields.y = 0.0;
    UVar16.fields.z = 0.0;
    UVar16 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Transform_o *)__this_01,UVar16,(MethodInfo *)0x0);
    value.Value = 0.0;
    value.Unit = 0;
    UVar17 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
    local_48 = UVar16.fields.x;
    local_58 = UVar15.fields.x;
    fVar11 = (local_48 - local_58) / UVar17.fields.x + 56.0;
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
  }
  pGVar1 = (__this->fields)._flex;
  if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    cVar4 = il2cpp_runtime_helper_03296c30((pGVar1->fields)._paddingLeft.fields.Value,0);
    pMVar8 = extraout_RDX;
    if (cVar4 == '\0') {
      pGVar1 = (__this->fields)._flex;
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
              Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
      if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05e8de89;
      Gilzoide_FlexUi_FlexLayout__set_PaddingLeft
                (pGVar1,(Gilzoide_FlexUi_Yoga_YGValue_o)value,(MethodInfo *)0x0);
      pMVar8 = extraout_RDX_00;
    }
    fVar12 = UVar13.fields.m_Width - fVar12;
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar12;
    }
    if ((__this->fields)._wrap == false) {
      columns = (__this->fields)._count;
      fVar12 = 3.4028235e+38;
    }
    else {
      columns = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__WrapColumns
                          (__this,fVar11,(MethodInfo *)value);
      if ((__this->fields)._wrap == false) {
        fVar12 = 3.4028235e+38;
        pMVar8 = extraout_RDX_01;
      }
      else {
        fVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight
                           (__this,(MethodInfo *)value);
        pMVar8 = extraout_RDX_02;
      }
    }
    fVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                       (__this,columns,fVar11,fVar12,pMVar8);
    pMVar8 = method_00;
    if (((__this->fields)._wrap != false) && (fVar12 < 0.5)) {
      fVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                         (__this,columns,fVar11,3.4028235e+38,method_00);
      pMVar8 = extraout_RDX_03;
    }
    fVar11 = (__this->fields)._gap;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
      pMVar8 = extraout_RDX_04;
    }
    iVar10 = columns + -1;
    if (iVar10 < 1) {
      iVar10 = 0;
    }
    iVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows(__this,columns,pMVar8);
    iVar9 = 0;
    if (0 < iVar5 + -1) {
      iVar9 = iVar5 + -1;
    }
    pUVar6 = (__this->fields)._content;
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      value_00 = fVar11 * (float)iVar10 + (float)columns * 260.0;
      fVar11 = (float)iVar9 * (__this->fields)._gap + (float)iVar5 * (__this->fields)._height;
      UVar15 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
      cVar4 = il2cpp_runtime_helper_03296c30(UVar15.fields.x,fVar12,0);
      if (cVar4 != '\0') {
        pGVar1 = (__this->fields)._contentFlex;
        if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05e8de89;
        cVar4 = il2cpp_runtime_helper_03296c30((pGVar1->fields)._width.fields.Value,value_00,0);
        if (cVar4 != '\0') {
          pGVar1 = (__this->fields)._contentFlex;
          if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05e8de89;
          cVar4 = il2cpp_runtime_helper_03296c30((pGVar1->fields)._height.fields.Value,fVar11,0);
          if (cVar4 != '\0') {
            return;
          }
        }
      }
      pGVar1 = (__this->fields)._contentFlex;
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_Width(pGVar1,GVar7,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._contentFlex;
        GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar11,(MethodInfo *)0x0);
        if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_Height(pGVar1,GVar7,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._content;
          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
            UVar17.fields.y = fVar12;
            UVar17.fields.x = fVar12;
            UVar17.fields.z = 1.0;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,UVar17,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._flex;
            if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit
                                (fVar12 * fVar11 + (pGVar1->fields)._paddingTop.fields.Value,(MethodInfo *)0x0
                                );
              Gilzoide_FlexUi_FlexLayout__set_Height(pGVar1,GVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05e8de89:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$WrapColumns
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__WrapColumns (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, float width, const MethodInfo* method);
// 0x5e8df30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8df6c: movaps xmm2, xmm0
// asm:   0x5e8e078: jmp 0x5e8e09f

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__WrapColumns
                  (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,float width,
                  MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight(__this,method);
  fVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                    (__this,(__this->fields)._count,width,fVar6,method_00);
  iVar4 = (__this->fields)._count;
  if (1 < iVar4) {
    iVar2 = 2;
    do {
      if (Il2CppMethodInitialized_0753e7f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7f9 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar8 = ceilf((float)iVar4 / (float)iVar2);
      fVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                        (__this,(int)fVar8,width,fVar6,method_01);
      uVar5 = -(uint)(fVar7 * 1.1 < fVar8);
      fVar7 = (float)(~uVar5 & (uint)fVar7 | (uint)fVar8 & uVar5);
      iVar2 = iVar2 + 1;
      iVar4 = (__this->fields)._count;
    } while (iVar2 <= iVar4);
  }
  fVar6 = (__this->fields)._gap;
  if (Il2CppMethodInitialized_0753e7f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f6 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar7 <= 0.5) {
    fVar7 = 0.5;
  }
  fVar6 = floorf((width / fVar7 + fVar6) / (fVar6 + 260.0) + 0.001);
  iVar2 = (int)fVar6;
  iVar4 = (__this->fields)._count;
  if (iVar2 < iVar4) {
    iVar4 = iVar2;
  }
  iVar3 = 1;
  if (0 < iVar2) {
    iVar3 = iVar4;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Rows
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, int32_t columns, const MethodInfo* method);
// 0x5e8e5a0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows
                  (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,int32_t columns,
                  MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  float fVar3;
  
  iVar1 = (__this->fields)._count;
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar3 = ceilf((float)iVar1 / (float)columns);
  return (int)fVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Scale
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, int32_t columns, float width, float availableHeight, const MethodInfo* method);
// 0x5e8e410

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,int32_t columns,
                float width,float availableHeight,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined4 in_XMM1_Db;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  if (Il2CppMethodInitialized_0754889b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    Il2CppMethodInitialized_0754889b = '\x01';
  }
  fVar8 = (__this->fields)._gap;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    iVar3 = (__this->fields)._count;
  }
  else {
    iVar3 = (__this->fields)._count;
  }
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar4 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar6 = columns + -1;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  fVar7 = ceilf((float)iVar3 / (float)columns);
  iVar3 = (int)fVar7 + -1;
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  uVar1 = (__this->fields)._height;
  uVar2 = (__this->fields)._gap;
  auVar13._0_4_ = fVar8 * (float)iVar6 + (float)columns * 260.0;
  auVar13._4_4_ = (float)iVar5 * (float)uVar2 + (float)(int)fVar7 * (float)uVar1;
  auVar13._8_4_ = 0;
  auVar13._12_4_ = (float)iVar5 * (float)uVar2 + 0.0;
  auVar10._4_4_ = in_XMM0_Db;
  auVar10._0_4_ = width;
  auVar10._8_4_ = in_XMM0_Db;
  auVar10._12_4_ = in_XMM0_Dd;
  auVar9._8_8_ = auVar10._8_8_;
  auVar9._4_4_ = availableHeight;
  auVar9._0_4_ = width;
  auVar11._0_12_ = auVar9._0_12_;
  auVar11._12_4_ = in_XMM1_Db;
  auVar12 = divps(auVar11,auVar13);
  if (auVar12._4_4_ <= auVar12._0_4_) {
    auVar12._4_12_ = auVar12._4_12_;
    auVar12._0_4_ = auVar12._4_4_;
  }
  auVar14 = ZEXT812(0x3f800000);
  fVar8 = auVar12._0_4_;
  if (fVar8 <= auVar14._0_4_) {
    auVar14._4_8_ = auVar14._4_8_;
    auVar14._0_4_ = fVar8;
  }
  return (float)(~-(uint)(0.01 <= fVar8) & 0x3c23d70a | auVar14._0_4_ & -(uint)(0.01 <= fVar8));
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$AvailableHeight
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x5e8e110

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight
                (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_array *pUVar5;
  bool bVar6;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_RectTransform_o *pUVar7;
  Gilzoide_FlexUi_FlexLayout_o *x_00;
  UnityEngine_RectTransform_o *pUVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (Il2CppMethodInitialized_0754889c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_0754889c = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return 3.4028235e+38;
  }
  if (x != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar8 = (x->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return 3.4028235e+38;
    }
    pUVar8 = (x->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar8 = (x->fields).m_Viewport;
    }
    else {
      pUVar7 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        if (pUVar7->klass != TypeInfo_UnityEngine_RectTransform) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
        }
        pUVar8 = pUVar7;
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    }
    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__GetWorldCorners
                (pUVar8,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->
                        Corners,(MethodInfo *)0x0);
      pUVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners;
      if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
        if ((pUVar5->max_length & 0xfffffffe) == 0) {
label_05e8e3f9:
          ThrowIndexOutOfRangeException();
        }
        pUVar8 = (x->fields).m_Content;
        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
          fVar1 = pUVar5->m_Items[1].fields.y;
          fVar2 = pUVar5->m_Items[0].fields.y;
          UnityEngine_RectTransform__GetWorldCorners(pUVar8,pUVar5,(MethodInfo *)0x0);
          pUVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners;
          if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
            if ((pUVar5->max_length & 0xfffffffe) == 0) goto label_05e8e3f9;
            pUVar8 = (__this->fields)._content;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              fVar3 = pUVar5->m_Items[1].fields.y;
              UnityEngine_RectTransform__GetWorldCorners(pUVar8,pUVar5,(MethodInfo *)0x0);
              pUVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->
                       Corners;
              if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
                if ((pUVar5->max_length & 0xfffffffe) == 0) goto label_05e8e3f9;
                pUVar8 = (x->fields).m_Content;
                if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar4 = pUVar5->m_Items[1].fields.y;
                  x_00 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar8,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  fVar9 = 0.0;
                  if (bVar6) {
                    if (x_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05e8e3f4;
                    fVar9 = (x_00->fields)._paddingBottom.fields.Value;
                  }
                  pUVar8 = (__this->fields)._content;
                  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar10 = UnityEngine_Transform__get_lossyScale
                                       ((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._content;
                    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                      UVar11 = UnityEngine_Transform__get_localScale
                                         ((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
                      fVar9 = (((fVar1 - fVar2) - (fVar3 - fVar4)) / UVar10.fields.y) * UVar11.fields.y -
                              fVar9;
                      if (fVar9 < 0.0) {
                        return 0.0;
                      }
                      return fVar9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05e8e3f4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x5e8e610

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___cctor (const MethodInfo* method);
// 0x5e8e620

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___cctor(MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  
  if (Il2CppMethodInitialized_0754889d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754889d = '\x01';
  }
  pUVar1 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners = pUVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners);
  return;
}


