// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCategoryRowRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x1823cdd00

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
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this_00,(MethodInfo *)0x0);
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime.<Start>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, const MethodInfo* method);
// 0x1823cdd70

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, UnityEngine_RectTransform_o* content, int32_t count, float height, float gap, bool wrap, const MethodInfo* method);
// 0x1823c13d0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,
               UnityEngine_RectTransform_o *content,int32_t count,float height,float gap,bool wrap,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    Il2CppMethodInitialized_184347d65 = '\x01';
  }
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content,content);
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_pivot
              (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pGVar1 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._flex,pGVar1);
    if (content != (UnityEngine_RectTransform_o *)0x0) {
      pGVar1 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)content,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
      (__this->fields)._contentFlex = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._contentFlex,pGVar1);
      (__this->fields)._gap = gap;
      (__this->fields)._wrap = wrap;
      (__this->fields)._height = height;
      (__this->fields)._count = count;
      Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$SpanLength
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__SpanLength (int32_t count, float size, float gap, const MethodInfo* method);
// 0x1823c14d0

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__SpanLength
                (int32_t count,float size,float gap,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < count + -1) {
    iVar1 = count + -1;
  }
  return (float)iVar1 * gap + (float)count * size;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x1823c11f0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Start
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x1823c1500

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start
          (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Start_d__14_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14);
    Il2CppMethodInitialized_184347d66 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_Start_d__14);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x1823c0690
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c08ba: mov rbx, rbp
// asm:   0x1823c0aec: movaps xmmword ptr [rsp + 0x60], xmm10
// asm:   0x1823c0af2: movss xmm10, dword ptr [rip + 0xf9838d]
// asm:   0x1823c0afb: nop dword ptr [rax + rax]
// asm:   0x1823c0b7c: movaps xmm10, xmmword ptr [rsp + 0x60]

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  uint columns;
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  UnityEngine_RectTransform_o *__this_00;
  bool bVar3;
  char cVar4;
  int32_t iVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Rect_o *pUVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Vector3_o *pUVar8;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar9;
  int iVar10;
  MethodInfo *method_00;
  int iVar11;
  int32_t columns_00;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Rect_o local_78 [7];
  
  if (Il2CppMethodInitialized_184347d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-base");
    Il2CppMethodInitialized_184347d67 = '\x01';
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
     pUVar6 == (UnityEngine_RectTransform_o *)0x0)) goto label_1823c0e8a;
  pUVar7 = UnityEngine_RectTransform__get_rect(local_78,pUVar6,(MethodInfo *)0x0);
  fVar16 = (pUVar7->fields).m_Width;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (fVar16 <= 0.0) {
    return;
  }
  pUVar6 = (__this->fields)._sidePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  x_00 = (UnityEngine_Object_o *)0x0;
  if (bVar3) {
    x = UnityEngine_Component__GetComponentInParent_object__664f20
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823c0e8a;
      if (((x->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
         (pGVar2 = (x->fields)._Screens_k__BackingField,
         (pGVar2->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
        x_00 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((pGVar2->fields)._active,"brush-side-panel-base",(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x_00 == (UnityEngine_Object_o *)0x0) goto label_1823c0e8a;
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      (__this->fields)._sidePanel = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._sidePanel,pUVar6);
    }
  }
  fVar15 = 0.0;
  pUVar6 = (__this->fields)._sidePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._flex;
    if ((pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) ||
       (pUVar6 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(pGVar1,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_RectTransform_o *)0x0)) goto label_1823c0e8a;
    pUVar7 = UnityEngine_RectTransform__get_rect(local_78,pUVar6,(MethodInfo *)0x0);
    local_88.fields.x = (pUVar7->fields).m_XMin;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    local_88.fields.y = 0.0;
    local_88.fields.z = 0.0;
    pUVar8 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Transform_o *)pUVar6,&local_88,
                        (MethodInfo *)0x0);
    __this_00 = (__this->fields)._sidePanel;
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c0e8a;
    fVar15 = (pUVar8->fields).x;
    pUVar7 = UnityEngine_RectTransform__get_rect(local_78,__this_00,(MethodInfo *)0x0);
    local_88.fields.y = 0.0;
    local_88.fields.z = 0.0;
    local_88.fields.x = (pUVar7->fields).m_Width + (pUVar7->fields).m_XMin;
    pUVar8 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Transform_o *)__this_00,&local_88,
                        (MethodInfo *)0x0);
    fVar12 = (pUVar8->fields).x;
    pUVar8 = UnityEngine_Transform__get_lossyScale
                       ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0)
    ;
    fVar15 = (fVar12 - fVar15) / (pUVar8->fields).x + 56.0;
    if (fVar15 < 0.0) {
      fVar15 = 0.0;
    }
  }
  if ((__this->fields)._flex != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    cVar4 = il2cpp_runtime_helper_180562af0();
    if (cVar4 == '\0') {
      pGVar1 = (__this->fields)._flex;
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar9 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar15,(MethodInfo *)0x0);
      if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1823c0e8a;
      Gilzoide_FlexUi_FlexLayout__set_PaddingLeft(pGVar1,GVar9,(MethodInfo *)0x0);
    }
    fVar16 = fVar16 - fVar15;
    fVar15 = 0.0;
    if (0.0 <= fVar16) {
      fVar15 = fVar16;
    }
    if ((__this->fields)._wrap == false) {
      columns_00 = (__this->fields)._count;
    }
    else {
      fVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight
                         (__this,(MethodInfo *)0x0);
      columns = (__this->fields)._count;
      method_00 = (MethodInfo *)(ulonglong)columns;
      fVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                         (__this,columns,fVar15,fVar12,(MethodInfo *)0x0);
      iVar11 = 2;
      if (1 < (__this->fields)._count) {
        do {
          iVar10 = (__this->fields)._count;
          if (Il2CppMethodInitialized_18433df29 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433df29 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar14 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar10 / (float)iVar11),method_00);
          method_00 = (MethodInfo *)(ulonglong)(uint)(int)dVar14;
          fVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                             (__this,(int)dVar14,fVar15,fVar12,(MethodInfo *)0x0);
          if (fVar16 * 1.1 < fVar13) {
            fVar16 = fVar13;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= (__this->fields)._count);
      }
      if (fVar16 <= 0.5) {
        fVar16 = 0.5;
      }
      fVar12 = (__this->fields)._gap;
      fVar13 = (__this->fields)._gap;
      if (Il2CppMethodInitialized_18433df26 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df26 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar14 = il2cpp_runtime_helper_1804f4690((double)((fVar15 / fVar16 + fVar13) / (fVar12 + 260.0) + 0.001),method_00);
      iVar11 = (int)dVar14;
      if (iVar11 < 1) {
        columns_00 = 1;
      }
      else {
        columns_00 = (__this->fields)._count;
        if (iVar11 <= columns_00) {
          columns_00 = iVar11;
        }
      }
    }
    if ((__this->fields)._wrap == false) {
      fVar16 = 3.4028235e+38;
    }
    else {
      fVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight
                         (__this,(MethodInfo *)0x0);
    }
    fVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                       (__this,columns_00,fVar15,fVar16,(MethodInfo *)0x0);
    if (((__this->fields)._wrap != false) && (fVar16 < 0.5)) {
      fVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                         (__this,columns_00,fVar15,3.4028235e+38,(MethodInfo *)0x0);
    }
    fVar15 = (__this->fields)._gap;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    }
    iVar11 = 0;
    if (-1 < columns_00 + -1) {
      iVar11 = columns_00 + -1;
    }
    iVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows
                      (__this,columns_00,(MethodInfo *)0x0);
    iVar10 = 0;
    if (-1 < iVar5 + -1) {
      iVar10 = iVar5 + -1;
    }
    pUVar6 = (__this->fields)._content;
    fVar12 = (float)iVar5 * (__this->fields)._height + (float)iVar10 * (__this->fields)._gap;
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_Transform__get_localScale
                ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
      cVar4 = il2cpp_runtime_helper_180562af0();
      if (cVar4 != '\0') {
        if ((__this->fields)._contentFlex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1823c0e8a;
        cVar4 = il2cpp_runtime_helper_180562af0();
        if (cVar4 != '\0') {
          if ((__this->fields)._contentFlex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1823c0e8a;
          cVar4 = il2cpp_runtime_helper_180562af0();
          if (cVar4 != '\0') {
            return;
          }
        }
      }
      pGVar1 = (__this->fields)._contentFlex;
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar9 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit
                        ((float)iVar11 * fVar15 + (float)columns_00 * 260.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_Width(pGVar1,GVar9,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._contentFlex;
        GVar9 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
        if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_Height(pGVar1,GVar9,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._content;
          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
            local_88.fields.z = 1.0;
            local_88.fields.y = fVar16;
            local_88.fields.x = fVar16;
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar6,&local_88,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._flex;
            if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              local_res8 = (pGVar1->fields)._paddingTop.fields.Value;
              GVar9 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit
                                (fVar12 * fVar16 + local_res8,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_Height(pGVar1,GVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1823c0e8a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$WrapColumns
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__WrapColumns (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, float width, const MethodInfo* method);
// 0x1823c1570
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c15cc: movaps xmmword ptr [rsp + 0x70], xmm6
// asm:   0x1823c15d1: movaps xmmword ptr [rsp + 0x40], xmm9
// asm:   0x1823c15d7: movss xmm9, dword ptr [rip + 0xf978a8]
// asm:   0x1823c165c: movaps xmm9, xmmword ptr [rsp + 0x40]
// asm:   0x1823c1662: movaps xmm6, xmmword ptr [rsp + 0x70]

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__WrapColumns
                  (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,float width,
                  MethodInfo *method)

{
  uint columns;
  int iVar1;
  MethodInfo *method_00;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight(__this,(MethodInfo *)0x0);
  columns = (__this->fields)._count;
  method_00 = (MethodInfo *)(ulonglong)columns;
  fVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                    (__this,columns,width,fVar3,(MethodInfo *)0x0);
  iVar2 = 2;
  if (1 < (__this->fields)._count) {
    do {
      iVar1 = (__this->fields)._count;
      if (Il2CppMethodInitialized_18433df29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df29 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar6 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar1 / (float)iVar2),method_00);
      method_00 = (MethodInfo *)(ulonglong)(uint)(int)dVar6;
      fVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                        (__this,(int)dVar6,width,fVar3,(MethodInfo *)0x0);
      if (fVar4 * 1.1 < fVar5) {
        fVar4 = fVar5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (__this->fields)._count);
  }
  if (fVar4 <= 0.5) {
    fVar4 = 0.5;
  }
  fVar3 = (__this->fields)._gap;
  fVar5 = (__this->fields)._gap;
  if (Il2CppMethodInitialized_18433df26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar6 = il2cpp_runtime_helper_1804f4690((double)((width / fVar4 + fVar5) / (fVar3 + 260.0) + 0.001),method_00);
  iVar2 = (int)dVar6;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else {
    iVar1 = (__this->fields)._count;
    if (iVar1 < iVar2) {
      return iVar1;
    }
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Rows
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, int32_t columns, const MethodInfo* method);
// 0x1823c1200

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Rows
                  (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,int32_t columns,
                  MethodInfo *method)

{
  int iVar1;
  undefined4 in_register_00000014;
  float fVar2;
  double dVar3;
  
  iVar1 = (__this->fields)._count;
  fVar2 = (float)columns;
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar3 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar1 / fVar2),(MethodInfo *)CONCAT44(in_register_00000014,columns));
  return (int)dVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$Scale
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, int32_t columns, float width, float availableHeight, const MethodInfo* method);
// 0x1823c1270
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c139e: jmp 0x1823c13a6
// asm:   0x1823c13a0: movaps xmm6, xmm0

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Scale
                (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,int32_t columns,
                float width,float availableHeight,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,columns);
  if (Il2CppMethodInitialized_184347d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    Il2CppMethodInitialized_184347d68 = '\x01';
  }
  fVar6 = (__this->fields)._gap;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
  }
  iVar2 = 0;
  if (-1 < columns + -1) {
    iVar2 = columns + -1;
  }
  iVar1 = (__this->fields)._count;
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar5 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar1 / (float)columns),method_00);
  iVar1 = (int)dVar5 + -1;
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  fVar6 = width / ((float)iVar2 * fVar6 + (float)columns * 260.0);
  fVar7 = availableHeight /
          ((float)(int)dVar5 * (__this->fields)._height + (float)iVar3 * (__this->fields)._gap);
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  fVar7 = 0.01;
  if ((fVar6 < 0.01) || (fVar4 = 1.0, fVar7 = fVar6, fVar6 <= 1.0)) {
    fVar4 = fVar7;
  }
  return fVar4;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$AvailableHeight
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x1823c0e90

float Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__AvailableHeight
                (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_array *pUVar6;
  bool bVar7;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_RectTransform_o *pUVar8;
  Gilzoide_FlexUi_FlexLayout_o *x_00;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  float local_res18;
  UnityEngine_Vector3_o local_78 [9];
  
  if (Il2CppMethodInitialized_184347d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184347d69 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return 3.4028235e+38;
  }
  if (x != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar10 = (x->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      return 3.4028235e+38;
    }
    pUVar10 = (x->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar10 = (x->fields).m_Viewport;
    }
    else {
      pUVar8 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pUVar10 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        if (pUVar8->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar10 = pUVar8;
        }
        if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
        }
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    }
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__GetWorldCorners
                (pUVar10,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->
                         Corners,(MethodInfo *)0x0);
      pUVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners;
      if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
        if ((uint)pUVar6->max_length < 2) {
label_1823c11de:
          ThrowIndexOutOfRangeException();
        }
        pUVar10 = (x->fields).m_Content;
        if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
          fVar1 = pUVar6->m_Items[1].fields.y;
          fVar2 = pUVar6->m_Items[0].fields.y;
          UnityEngine_RectTransform__GetWorldCorners(pUVar10,pUVar6,(MethodInfo *)0x0);
          pUVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners;
          if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
            if ((uint)pUVar6->max_length < 2) goto label_1823c11de;
            pUVar10 = (__this->fields)._content;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              fVar3 = pUVar6->m_Items[1].fields.y;
              UnityEngine_RectTransform__GetWorldCorners(pUVar10,pUVar6,(MethodInfo *)0x0);
              pUVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->
                       Corners;
              if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
                if ((uint)pUVar6->max_length < 2) goto label_1823c11de;
                pUVar10 = (x->fields).m_Content;
                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar4 = pUVar6->m_Items[1].fields.y;
                  x_00 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar10,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar7 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar7) {
                    if (x_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1823c11d8;
                    local_res18 = (x_00->fields)._paddingBottom.fields.Value;
                  }
                  else {
                    local_res18 = 0.0;
                  }
                  pUVar10 = (__this->fields)._content;
                  if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                    pUVar9 = UnityEngine_Transform__get_lossyScale
                                       (local_78,(UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                    pUVar10 = (__this->fields)._content;
                    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                      fVar5 = (pUVar9->fields).y;
                      pUVar9 = UnityEngine_Transform__get_localScale
                                         (local_78,(UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                      local_res18 = (((fVar1 - fVar2) - (fVar3 - fVar4)) / fVar5) * (pUVar9->fields).y -
                                    local_res18;
                      if (0.0 <= local_res18) {
                        return local_res18;
                      }
                      return 0.0;
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
label_1823c11d8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___cctor (const MethodInfo* method);
// 0x1823c1730

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime___cctor(MethodInfo *method)

{
  UnityEngine_Vector3_array *value;
  
  if (Il2CppMethodInitialized_184347d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184347d6a = '\x01';
  }
  value = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->static_fields->Corners,value)
  ;
  return;
}


