// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgServerSelectMapRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x58d48a0

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime.<>c__DisplayClass30_0$$<CreateLabel>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0___CreateLabel_b__0 (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x58d4990

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0___CreateLabel_b__0
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Connect(__this_00,(__this->fields).index,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Setup (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, UnityEngine_Color_o mapColor, UnityEngine_Color_o highlightColor, UnityEngine_Color_o labelTextColor, const MethodInfo* method);
// 0x58d3350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d341b: lea r12, [r13 + 0x20]
// asm:   0x58d341f: jmp 0x58d342d

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,UnityEngine_Color_o mapColor,
               UnityEngine_Color_o highlightColor,UnityEngine_Color_o labelTextColor,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_UI_Image_array **targetAddress_00;
  UnityEngine_UI_Image_array **targetAddress_01;
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  System_String_o *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o region;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  UnityEngine_RectTransform_c *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_AspectRatioFitter_o *__this_00;
  UnityEngine_UI_Image_array *pUVar14;
  System_Single_array *pSVar15;
  ulong uVar16;
  UnityEngine_UI_Image_o *pUVar17;
  Il2CppObject *pIVar18;
  MethodInfo **method_00;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_04;
  Gisketch_Aottg2UI_Game_AottgServerRegion_Fields *pGVar19;
  UnityEngine_RectTransform_o **targetAddress_02;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar24;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  if (Il2CppMethodInitialized_0754548c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Image_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Viewport");
    il2cpp_codegen_initialize_runtime_metadata(&"World Map");
    Il2CppMethodInitialized_0754548c = '\x01';
  }
  pUVar12 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = TypeInfo_UnityEngine_RectTransform;
  if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) {
    (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
  }
  else if ((pUVar12->klass != TypeInfo_UnityEngine_RectTransform) ||
          ((__this->fields)._rect = pUVar12, pUVar12->klass != pUVar11)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
  }
  targetAddress_02 = &(__this->fields)._rect;
  Il2CppCodeGenWriteBarrier(targetAddress_02);
  local_78 = highlightColor.fields.r;
  fStack_74 = highlightColor.fields.g;
  local_a8 = highlightColor.fields.b;
  fStack_a4 = highlightColor.fields.a;
  (__this->fields)._highlightColor.fields.r = local_78;
  (__this->fields)._highlightColor.fields.g = fStack_74;
  (__this->fields)._highlightColor.fields.b = local_a8;
  (__this->fields)._highlightColor.fields.a = fStack_a4;
  local_88 = mapColor.fields.r;
  fStack_84 = mapColor.fields.g;
  local_98 = mapColor.fields.b;
  fStack_94 = mapColor.fields.a;
  (__this->fields)._labelFocusColor.fields.r = (local_88 - local_78) * 0.3 + local_78;
  (__this->fields)._labelFocusColor.fields.g = (fStack_84 - fStack_74) * 0.3 + fStack_74;
  (__this->fields)._labelFocusColor.fields.b = (local_98 - local_a8) * 0.3 + local_a8;
  (__this->fields)._labelFocusColor.fields.a = (fStack_94 - fStack_a4) * 0.3 + fStack_a4;
  pUVar12 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect
                      ("Viewport",(UnityEngine_Transform_o *)(__this->fields)._rect,method_02);
  targetAddress = &(__this->fields)._viewport;
  (__this->fields)._viewport = pUVar12;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar12 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect
                      ("World Map",(UnityEngine_Transform_o *)(__this->fields)._viewport,method_03);
  if ((pUVar12 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
     pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar13,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter);
    if (__this_00 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
      UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_00,3,(MethodInfo *)0x0);
      UnityEngine_UI_AspectRatioFitter__set_aspectRatio(__this_00,1.7297298,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      method_04 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
        method_04 = extraout_RDX_00;
      }
      if (Il2CppMethodInitialized_07545487 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/WorldMap");
        Il2CppMethodInitialized_07545487 = '\x01';
        method_04 = extraout_RDX_01;
      }
      color.fields.a = 0.12;
      color.fields.b = local_98;
      color.fields.r = mapColor.fields.r;
      color.fields.g = mapColor.fields.g;
      Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AddImage
                (pUVar13,"UI/Sprites/ServerSelect/WorldMap",color,method_04);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) {
        pUVar14 = (UnityEngine_UI_Image_array *)
                  SZArrayNew(TypeInfo_UnityEngine_UI_Image_array,(uint32_t)pGVar2->max_length);
        targetAddress_00 = &(__this->fields)._highlights;
        (__this->fields)._highlights = pUVar14;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        pUVar14 = (UnityEngine_UI_Image_array *)
                  SZArrayNew(TypeInfo_UnityEngine_UI_Image_array,(uint32_t)pGVar2->max_length);
        targetAddress_01 = &(__this->fields)._labels;
        (__this->fields)._labels = pUVar14;
        Il2CppCodeGenWriteBarrier(targetAddress_01);
        pSVar15 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,(uint32_t)pGVar2->max_length);
        (__this->fields)._fromAlpha = pSVar15;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._fromAlpha);
        if (0 < (int)pGVar2->max_length) {
          uVar16 = pGVar2->max_length & 0xffffffff;
          pGVar19 = &pGVar2->m_Items[0].fields;
          lVar21 = 0x20;
          uVar22 = 0;
          do {
            if (uVar16 <= uVar22) goto label_058d3891;
            pUVar14 = *targetAddress_00;
            pUVar17 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateHighlight
                                (__this,pUVar12,(Gisketch_Aottg2UI_Game_AottgServerRegion_o)*pGVar19,
                                 (int32_t)uVar22,(MethodInfo *)method_00);
            if (pUVar14 == (UnityEngine_UI_Image_array *)0x0) goto label_058d3896;
            if ((pUVar17 != (UnityEngine_UI_Image_o *)0x0) &&
               (pIVar18 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pUVar17,(((pUVar14->obj).klass)->_1).element_class),
               pIVar18 == (Il2CppObject *)0x0)) goto label_058d389b;
            if ((uint)pUVar14->max_length <= uVar22) goto label_058d3891;
            *(UnityEngine_UI_Image_o **)((long)pUVar14->m_Items + lVar21 + -0x20) = pUVar17;
            Il2CppCodeGenWriteBarrier((void **)((long)pUVar14->m_Items + lVar21 + -0x20));
            uVar22 = uVar22 + 1;
            uVar1 = (uint)pGVar2->max_length;
            uVar16 = (ulong)uVar1;
            method_00 = (MethodInfo **)(long)(int)uVar1;
            pGVar19 = pGVar19 + 1;
            lVar21 = lVar21 + 8;
          } while ((long)uVar22 < (long)method_00);
          if (0 < (int)uVar1) {
            pGVar20 = pGVar2->m_Items;
            lVar21 = 0x20;
            uVar22 = 0;
            method_01 = pGVar2;
            do {
              if (uVar16 <= uVar22) {
label_058d3891:
                ThrowIndexOutOfRangeException();
              }
              pUVar14 = *targetAddress_01;
              uVar8 = (pGVar20->fields).Id;
              uVar9 = (pGVar20->fields).Label;
              uVar10 = (pGVar20->fields).Region;
              region.fields.Region = uVar10;
              region.fields.Label = (System_String_o *)uVar9;
              region.fields.Id = (System_String_o *)uVar8;
              pSVar3 = (pGVar20->fields).MaskSprite;
              uVar4 = (pGVar20->fields).MaskArea.fields.m_XMin;
              uVar5 = (pGVar20->fields).MaskArea.fields.m_YMin;
              region.fields.MaskArea.fields.m_YMin = (float)uVar5;
              region.fields.MaskArea.fields.m_XMin = (float)uVar4;
              uVar6 = (pGVar20->fields).MaskArea.fields.m_Width;
              uVar7 = (pGVar20->fields).MaskArea.fields.m_Height;
              region.fields.MaskArea.fields.m_Height = (float)uVar7;
              region.fields.MaskArea.fields.m_Width = (float)uVar6;
              region.fields._20_4_ = (int)((ulong)*(undefined8 *)&(pGVar20->fields).Region >> 0x20);
              region.fields.MaskSprite._0_4_ = (int)pSVar3;
              region.fields.MaskSprite._4_4_ = (int)((ulong)pSVar3 >> 0x20);
              region.fields.LabelPoint.fields = (pGVar20->fields).LabelPoint.fields;
              pUVar17 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateLabel
                                  (__this,pUVar12,region,(int32_t)uVar22,labelTextColor,
                                   (MethodInfo *)method_01);
              if (pUVar14 == (UnityEngine_UI_Image_array *)0x0) goto label_058d3896;
              if ((pUVar17 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pIVar18 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pUVar17,(((pUVar14->obj).klass)->_1).element_class),
                 pIVar18 == (Il2CppObject *)0x0)) {
label_058d389b:
                pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
              }
              if ((uint)pUVar14->max_length <= uVar22) goto label_058d3891;
              *(UnityEngine_UI_Image_o **)((long)pUVar14->m_Items + lVar21 + -0x20) = pUVar17;
              Il2CppCodeGenWriteBarrier((void **)((long)pUVar14->m_Items + lVar21 + -0x20));
              uVar22 = uVar22 + 1;
              uVar1 = (uint)pGVar2->max_length;
              uVar16 = (ulong)uVar1;
              method_01 = (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)(long)(int)uVar1;
              pGVar20 = pGVar20 + 1;
              lVar21 = lVar21 + 8;
            } while ((long)uVar22 < (long)method_01);
          }
        }
        if (Il2CppMethodInitialized_07545491 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
          Il2CppMethodInitialized_07545491 = '\x01';
        }
        pUVar12 = *targetAddress_02;
        if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
          UVar24 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
            fVar23 = UVar24.fields.m_Height / 1080.0;
            value.fields.y = fVar23 * 48.0;
            value.fields.x = fVar23 * 462.0;
            UnityEngine_RectTransform__set_offsetMin(*targetAddress,value,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.y = fVar23 * -48.0;
              value_00.fields.x = fVar23 * -48.0;
              UnityEngine_RectTransform__set_offsetMax(*targetAddress,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_058d3896:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Focus
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Focus (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x58d4310

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Focus
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,int32_t index,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields)._focused = index;
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,index));
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Release
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Release (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x58d44f0

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Release
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,int32_t index,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  if ((__this->fields)._focused == index) {
    (__this->fields)._focused = -1;
    Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,index));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Connect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Connect (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x58d4510

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Connect
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UI_Image_array *pUVar1;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  UnityEngine_Object_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  System_String_o *actionId;
  System_String_o *elementId;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  
  if (Il2CppMethodInitialized_0754548d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_0754548d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._labels;
  if (pUVar1 != (UnityEngine_UI_Image_array *)0x0) {
    if ((uint)pUVar1->max_length <= (uint)index) {
label_058d4662:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar1->m_Items[index] != (UnityEngine_UI_Image_o *)0x0) {
      __this_00 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1->m_Items[index],(MethodInfo *)0x0);
      __this_01 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
      }
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) {
        if ((uint)pGVar2->max_length <= (uint)index) goto label_058d4662;
        actionId = Gisketch_Aottg2UI_Game_AottgUiActionIds_Multiplayer__Region
                             (pGVar2->m_Items[index].fields.Id,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Object_o *)0x0) {
          elementId = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          local_48.fields.InputSource = 0;
          local_48.fields._28_4_ = 0;
          local_48.fields.ElementId = (System_String_o *)0x0;
          local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                    (&local_48,elementId,(UnityEngine_GameObject_o *)__this_00,
                     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0,1,(MethodInfo *)0x0);
          if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            context.fields.GameObject = local_48.fields.GameObject;
            context.fields.ElementId = local_48.fields.ElementId;
            context.fields.Node = local_48.fields.Node;
            context.fields.InputSource = local_48.fields.InputSource;
            context.fields._28_4_ = local_48.fields._28_4_;
            Gisketch_Aottg2UI_GisketchUIRoot__HandleAction(__this_01,actionId,context,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4670

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if (Il2CppMethodInitialized_0754548e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754548e = '\x01';
  }
  pUVar1 = (__this->fields)._viewport;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07545491 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07545491 = '\x01';
    }
    pUVar1 = (__this->fields)._rect;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar1 = (__this->fields)._viewport;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        fVar3 = UVar4.fields.m_Height / 1080.0;
        value.fields.x = fVar3 * 462.0;
        value.fields.y = fVar3 * 48.0;
        UnityEngine_RectTransform__set_offsetMin(pUVar1,value,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._viewport;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.x = fVar3 * -48.0;
          value_00.fields.y = value_00.fields.x;
          UnityEngine_RectTransform__set_offsetMax(pUVar1,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4780

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  ulong uVar2;
  uint uVar4;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_UI_Image_array *pUVar6;
  uint uVar7;
  long lVar8;
  UnityEngine_Color_o UVar9;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._focused = -1;
  pUVar6 = (__this->fields)._highlights;
  if (pUVar6 == (UnityEngine_UI_Image_array *)0x0) {
    return;
  }
  lVar8 = 0;
  do {
    uVar4 = (uint)pUVar6->max_length;
    uVar7 = (uint)lVar8;
    if ((int)uVar4 <= (int)uVar7) {
      return;
    }
    if (uVar4 <= uVar7) {
label_058d4835:
      ThrowIndexOutOfRangeException();
    }
    pUVar5 = pUVar6->m_Items[lVar8];
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) break;
    uVar1 = (__this->fields)._highlightColor.fields.r;
    uVar3 = (__this->fields)._highlightColor.fields.g;
    UVar9.fields.g = (float)uVar3;
    UVar9.fields.r = (float)uVar1;
    uVar2._0_4_ = (__this->fields)._highlightColor.fields.b;
    uVar2._4_4_ = (__this->fields)._highlightColor.fields.a;
    UVar9.fields._8_8_ = uVar2 & 0xffffffff;
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (pUVar5,UVar9,(pUVar5->klass->vtable)._23_set_color.method);
    pUVar6 = (__this->fields)._labels;
    if (pUVar6 == (UnityEngine_UI_Image_array *)0x0) break;
    if ((uint)pUVar6->max_length <= uVar7) goto label_058d4835;
    pUVar5 = pUVar6->m_Items[lVar8];
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) break;
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (pUVar5,(UnityEngine_Color_o)(__this->fields)._highlightColor.fields,
               (pUVar5->klass->vtable)._23_set_color.method);
    pUVar6 = (__this->fields)._highlights;
    lVar8 = lVar8 + 1;
  } while (pUVar6 != (UnityEngine_UI_Image_array *)0x0);
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4850

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t == (DG_Tweening_Tween_o *)0x0) {
    return;
  }
  DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateHighlight
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateHighlight (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, UnityEngine_RectTransform_o* map, Gisketch_Aottg2UI_Game_AottgServerRegion_o region, int32_t index, const MethodInfo* method);
// 0x58d3bf0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateHighlight
          (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,UnityEngine_RectTransform_o *map,
          Gisketch_Aottg2UI_Game_AottgServerRegion_o region,int32_t index,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  ulong uVar2;
  uint32_t uVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Image_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *pGVar6;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  UnityEngine_Color_o color;
  float local_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,index);
  if (Il2CppMethodInitialized_0754548f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectRegionTarget);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754548f = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect
                        (region.fields.Id,(UnityEngine_Transform_o *)map,method_00);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_00,(UnityEngine_Vector2_o)region.fields.MaskArea.fields._0_8_,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075454e9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_075454e9 = '\x01';
      uVar4 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar4 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    local_38 = region.fields.MaskArea.fields.m_XMin;
    fStack_34 = region.fields.MaskArea.fields.m_YMin;
    value.fields.y = fStack_34 + region.fields.MaskArea.fields.m_Height;
    value.fields.x = local_38 + region.fields.MaskArea.fields.m_Width;
    UnityEngine_RectTransform__set_anchorMax(__this_00,value,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._highlightColor.fields.r;
    uVar3 = (__this->fields)._highlightColor.fields.g;
    color.fields.g = (float)uVar3;
    color.fields.r = (float)uVar1;
    uVar2._0_4_ = (__this->fields)._highlightColor.fields.b;
    uVar2._4_4_ = (__this->fields)._highlightColor.fields.a;
    color.fields._8_8_ = uVar2 & 0xffffffff;
    __this_01 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AddImage
                          (pUVar5,region.fields.MaskSprite,color,method_01);
    if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
      (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                (__this_01,true,(__this_01->klass->vtable)._25_set_raycastTarget.method);
      UnityEngine_UI_Image__set_alphaHitTestMinimumThreshold(__this_01,0.5,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
         (pGVar6 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar5,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectRegionTarget
                             ), pGVar6 != (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *)0x0)) {
        (pGVar6->fields)._map = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields)._map);
        (pGVar6->fields)._index = index;
        (pGVar6->fields)._connectOnClick = true;
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateLabel
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateLabel (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, UnityEngine_RectTransform_o* map, Gisketch_Aottg2UI_Game_AottgServerRegion_o region, int32_t index, UnityEngine_Color_o textColor, const MethodInfo* method);
// 0x58d3da0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateLabel
          (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,UnityEngine_RectTransform_o *map,
          Gisketch_Aottg2UI_Game_AottgServerRegion_o region,int32_t index,UnityEngine_Color_o textColor,
          MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o *__this_01;
  System_String_o *pSVar3;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *__this_04;
  TMPro_TMP_FontAsset_o *value_00;
  UnityEngine_UI_Button_o *__this_05;
  UnityEngine_Events_UnityAction_o *__this_06;
  Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *pGVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07545490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectRegionTarget);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_c__DisplayClass30_0_CreateLabel_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"menuText");
    Il2CppMethodInitialized_07545490 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_c__DisplayClass30_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___c__DisplayClass30_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).index = index;
    pSVar3 = System_String__Concat_52f0320(region.fields.Id,"-label",(MethodInfo *)0x0);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar5,pSVar3,components,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar5,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    ((UnityEngine_Transform_o *)__this_02,(UnityEngine_Transform_o *)map,false,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin(__this_02,region.fields.LabelPoint,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax(__this_02,region.fields.LabelPoint,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pUVar6 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AddImage
                             (pUVar5,"UI/Sprites/Elements/Brush",
                              (UnityEngine_Color_o)(__this->fields)._highlightColor.fields,method_00);
          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
            __this_03 = Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect
                                  ("Text",(UnityEngine_Transform_o *)__this_02,method_01);
            if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                __this_04 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar5,(MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
                if (region.fields.Label != (System_String_o *)0x0) {
                  pSVar3 = System_String__ToLowerInvariant(region.fields.Label,(MethodInfo *)0x0);
                  if (__this_04 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(__this_04->klass->vtable)._66_set_text.methodPtr)
                              (__this_04,pSVar3,(__this_04->klass->vtable)._66_set_text.method);
                    pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key
                                       ("menuText",400,(MethodInfo *)0x0);
                    value_00 = Gisketch_Aottg2UI_Styling_GisketchTypography__Load(pSVar3,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this_04,value_00,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_04,52.0,(MethodInfo *)0x0);
                    (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                              (__this_04,textColor,(__this_04->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_04,0x220,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping
                              ((TMPro_TMP_Text_o *)__this_04,false,(MethodInfo *)0x0);
                    (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (__this_04,false,(__this_04->klass->vtable)._25_set_raycastTarget.method);
                    UVar2 = TMPro_TMP_Text__GetPreferredValues
                                      ((TMPro_TMP_Text_o *)__this_04,(MethodInfo *)0x0);
                    value.fields.y = 76.0;
                    value.fields.x = UVar2.fields.x + 72.0;
                    UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      __this_05 = UnityEngine_GameObject__AddComponent_object_
                                            (pUVar5,(MethodInfo_353B6A0 *)
                                                    MethodInfo_UnityEngine_GameObject_AddComponent_Button);
                      if (__this_05 != (UnityEngine_UI_Button_o *)0x0) {
                        UnityEngine_UI_Selectable__set_transition
                                  ((UnityEngine_UI_Selectable_o *)__this_05,0,(MethodInfo *)0x0);
                        __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_05->fields).m_OnClick;
                        __this_06 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (__this_06,(Il2CppObject *)__this_01,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_c__DisplayClass30_0_CreateLabel_b__0
                                   ,(MethodInfo *)0x0);
                        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_06,(MethodInfo *)0x0);
                          pUVar5 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                            pGVar7 = UnityEngine_GameObject__AddComponent_object_
                                               (pUVar5,(MethodInfo_353B6A0 *)
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectRegionTarget
                                               );
                            if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *)0x0) {
                              iVar1 = (__this_01->fields).index;
                              (pGVar7->fields)._map = __this;
                              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._map);
                              (pGVar7->fields)._index = iVar1;
                              (pGVar7->fields)._connectOnClick = false;
                              return pUVar6;
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
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$UpdateViewport
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__UpdateViewport (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4260

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__UpdateViewport
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  if (Il2CppMethodInitialized_07545491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07545491 = '\x01';
  }
  pUVar1 = (__this->fields)._rect;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      fVar2 = UVar3.fields.m_Height / 1080.0;
      value.fields.x = fVar2 * 462.0;
      value.fields.y = fVar2 * 48.0;
      UnityEngine_RectTransform__set_offsetMin(pUVar1,value,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._viewport;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        value_00.fields.x = fVar2 * -48.0;
        value_00.fields.y = value_00.fields.x;
        UnityEngine_RectTransform__set_offsetMax(pUVar1,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$AnimateToFocus
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4320

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_Image_o *pUVar6;
  System_Single_array *pSVar7;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_UI_Image_array *pUVar9;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  UnityEngine_Color_o UVar14;
  
  if (Il2CppMethodInitialized_07545492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_ApplyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    Il2CppMethodInitialized_07545492 = '\x01';
  }
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields)._highlights;
  if (pUVar9 != (UnityEngine_UI_Image_array *)0x0) {
    lVar12 = 0;
    do {
      uVar5 = (uint)pUVar9->max_length;
      uVar11 = (uint)lVar12;
      if ((int)uVar5 <= (int)uVar11) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_ApplyTransition,
                   (MethodInfo_4293C90 *)0x0);
        pDVar10 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.2,__this_00,(MethodInfo *)0x0);
        pDVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                            ((Il2CppObject *)pDVar10,9,
                             (MethodInfo_36B0160 *)
                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        pDVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                            ((Il2CppObject *)pDVar10,true,
                             (MethodInfo_36B08F0 *)
                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
        return;
      }
      if (uVar5 <= uVar11) {
label_058d44e1:
        ThrowIndexOutOfRangeException();
      }
      pUVar6 = pUVar9->m_Items[lVar12];
      if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) break;
      pSVar7 = (__this->fields)._fromAlpha;
      UVar14 = (*(pUVar6->klass->vtable)._22_get_color.methodPtr)
                         (pUVar6,(pUVar6->klass->vtable)._22_get_color.method);
      if (pSVar7 == (System_Single_array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar11) goto label_058d44e1;
      pSVar7->m_Items[lVar12] = UVar14.fields.a;
      pUVar9 = (__this->fields)._labels;
      if (pUVar9 == (UnityEngine_UI_Image_array *)0x0) break;
      if ((uint)pUVar9->max_length <= uVar11) goto label_058d44e1;
      pUVar6 = pUVar9->m_Items[lVar12];
      if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) break;
      bVar13 = uVar11 == (__this->fields)._focused;
      pUVar8 = &(__this->fields)._highlightColor + bVar13;
      uVar1 = (pUVar8->fields).r;
      uVar3 = (pUVar8->fields).g;
      UVar14.fields.g = (float)uVar3;
      UVar14.fields.r = (float)uVar1;
      pUVar8 = &(__this->fields)._highlightColor + bVar13;
      uVar2 = (pUVar8->fields).b;
      uVar4 = (pUVar8->fields).a;
      UVar14.fields.a = (float)uVar4;
      UVar14.fields.b = (float)uVar2;
      (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                (pUVar6,UVar14,(pUVar6->klass->vtable)._23_set_color.method);
      pUVar9 = (__this->fields)._highlights;
      lVar12 = lVar12 + 1;
    } while (pUVar9 != (UnityEngine_UI_Image_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$ApplyTransition
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__ApplyTransition (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, float t, const MethodInfo* method);
// 0x58d48b0

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__ApplyTransition
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  System_Single_array *pSVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_Image_array *pUVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  
  pUVar7 = (__this->fields)._highlights;
  if (pUVar7 != (UnityEngine_UI_Image_array *)0x0) {
    fVar11 = 1.0;
    if (t <= 1.0) {
      fVar11 = t;
    }
    lVar9 = 0;
    do {
      uVar4 = (uint)pUVar7->max_length;
      uVar8 = (uint)lVar9;
      if ((int)uVar4 <= (int)uVar8) {
        return;
      }
      if (uVar4 <= uVar8) {
label_058d4975:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = (__this->fields)._fromAlpha;
      if (pSVar5 == (System_Single_array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar8) goto label_058d4975;
      pUVar6 = pUVar7->m_Items[lVar9];
      if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) break;
      fVar10 = 0.85;
      if (uVar8 != (__this->fields)._focused) {
        fVar10 = 0.0;
      }
      uVar1 = (__this->fields)._highlightColor.fields.r;
      uVar3 = (__this->fields)._highlightColor.fields.g;
      UVar12.fields.g = (float)uVar3;
      UVar12.fields.r = (float)uVar1;
      uVar2 = (__this->fields)._highlightColor.fields.b;
      UVar12.fields.a =
           (fVar10 - pSVar5->m_Items[lVar9]) * (float)(-(uint)(0.0 <= t) & (uint)fVar11) +
           pSVar5->m_Items[lVar9];
      UVar12.fields.b = (float)uVar2;
      (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                (pUVar6,UVar12,(pUVar6->klass->vtable)._23_set_color.method);
      pUVar7 = (__this->fields)._highlights;
      lVar9 = lVar9 + 1;
    } while (pUVar7 != (UnityEngine_UI_Image_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect (System_String_o* name, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58d38d0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__CreateRect
          (System_String_o *name,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  
  if (Il2CppMethodInitialized_07545493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07545493 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (__this,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  ((UnityEngine_Transform_o *)__this_00,parent,false,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMin
                  (__this_00,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMax
                  (__this_00,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_offsetMin
                  (__this_00,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_offsetMax
                  (__this_00,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$AddImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AddImage (UnityEngine_GameObject_o* go, System_String_o* sprite, UnityEngine_Color_o color, const MethodInfo* method);
// 0x58d3b10

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AddImage
          (UnityEngine_GameObject_o *go,System_String_o *sprite,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this;
  UnityEngine_Sprite_o *value;
  
  if (Il2CppMethodInitialized_07545494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    Il2CppMethodInitialized_07545494 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(sprite,(MethodInfo *)0x0);
    if (__this != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite(__this,value,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._23_set_color.methodPtr)
                (__this,color,(__this->klass->vtable)._23_set_color.method);
      (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
                (__this,false,(__this->klass->vtable)._25_set_raycastTarget.method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$WithAlpha
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x58d4840

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__WithAlpha
          (UnityEngine_Color_o color,float alpha,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields._0_8_ = color.fields._0_8_;
  UVar1.fields.a = alpha;
  UVar1.fields.b = color.fields.b;
  return (UnityEngine_Color_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___ctor (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* __this, const MethodInfo* method);
// 0x58d4980

void Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._focused = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


