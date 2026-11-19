// Type: Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMobileUiSafeArea.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__Awake (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o* __this, const MethodInfo* method);
// 0x58c5300

void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__Awake
               (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
    Il2CppMethodInitialized_07545406 = '\x01';
  }
  pGVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
  (__this->fields)._root = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__LateUpdate (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o* __this, const MethodInfo* method);
// 0x58c5350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c53c4: jmp 0x58c5733

void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  UnityEngine_RectTransform_array *pUVar4;
  UnityEngine_UI_Image_o *x;
  System_String_array *pSVar5;
  UnityEngine_Vector2_o value_00;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  MethodInfo *method_00;
  UnityEngine_RectTransform_c **method_01;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o UStack_48;
  
  method_01 = (UnityEngine_RectTransform_c **)__this;
  if (Il2CppMethodInitialized_07545407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    method_01 = &TypeInfo_UnityEngine_RectTransform;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07545407 = '\x01';
  }
  UStack_48.fields.x =
       Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__HorizontalInset((MethodInfo *)method_01);
  pGVar2 = (__this->fields)._root;
  if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar3 = (pGVar2->fields)._Screens_k__BackingField;
    if (pGVar3 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pUVar4 = (__this->fields)._layers;
    }
    else {
      method_00 = (MethodInfo *)(pGVar3->fields)._activeId;
      pUVar4 = (__this->fields)._layers;
    }
    if (pUVar4 != (UnityEngine_RectTransform_array *)0x0) {
      if ((int)pUVar4->max_length != 0) {
        pUVar8 = pUVar4->m_Items[0];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          fVar1 = (__this->fields)._inset;
          if (Il2CppMethodInitialized_0753e7b4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
            Il2CppMethodInitialized_0753e7b4 = '\x01';
          }
          fVar11 = ABS(fVar1);
          if (fVar11 <= ABS(UStack_48.fields.x)) {
            fVar11 = ABS(UStack_48.fields.x);
          }
          fVar10 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
          fVar12 = fVar11 * 1e-06;
          if (fVar11 * 1e-06 <= fVar10) {
            fVar12 = fVar10;
          }
          if ((ABS(UStack_48.fields.x - fVar1) < fVar12) &&
             (bVar6 = System_String__op_Equality
                                ((System_String_o *)method_00,(__this->fields)._screenId,(MethodInfo *)0x0),
             bVar6)) {
            pUVar7 = (__this->fields)._screen;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((method_00 == (MethodInfo *)0x0) || (bVar6)) {
              x = (__this->fields)._source;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((__this->fields)._hasSource == bVar6) {
                return;
              }
            }
          }
        }
        (__this->fields)._inset = UStack_48.fields.x;
        (__this->fields)._screenId = (System_String_o *)method_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._screenId);
        uVar9 = 0;
        while( true ) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
          }
          pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->static_fields->LayerPaths;
          if (pSVar5 == (System_String_array *)0x0) goto label_058c5733;
          if ((long)(int)pSVar5->max_length <= (long)uVar9) {
            Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__UpdateBackdrop(__this,UStack_48.fields.x,method_00);
            return;
          }
          pUVar4 = (__this->fields)._layers;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
          }
          pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->static_fields->LayerPaths;
          if (pSVar5 == (System_String_array *)0x0) goto label_058c5733;
          if ((uint)pSVar5->max_length <= uVar9) break;
          if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar8 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Transform__Find(pUVar7,pSVar5->m_Items[uVar9],(MethodInfo *)0x0),
             pUVar4 == (UnityEngine_RectTransform_array *)0x0)) goto label_058c5733;
          if ((pUVar8 == (UnityEngine_RectTransform_o *)0x0) ||
             (pUVar8->klass != TypeInfo_UnityEngine_RectTransform)) {
            pUVar8 = (UnityEngine_RectTransform_o *)0x0;
          }
          if ((uint)pUVar4->max_length <= uVar9) break;
          pUVar4->m_Items[uVar9] = pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + uVar9);
          pUVar4 = (__this->fields)._layers;
          if (pUVar4 == (UnityEngine_RectTransform_array *)0x0) goto label_058c5733;
          if ((uint)pUVar4->max_length <= uVar9) break;
          pUVar8 = pUVar4->m_Items[uVar9];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          method_00 = (MethodInfo *)0x0;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pUVar4 = (__this->fields)._layers;
            if (pUVar4 == (UnityEngine_RectTransform_array *)0x0) goto label_058c5733;
            if ((uint)pUVar4->max_length <= uVar9) break;
            pUVar8 = pUVar4->m_Items[uVar9];
            if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_058c5733;
            UStack_48.fields.y = 0.0;
            UnityEngine_RectTransform__set_anchorMin(pUVar8,UStack_48,(MethodInfo *)0x0);
            value_00.fields.y = 1.0;
            value_00.fields.x = 1.0 - UStack_48.fields.x;
            UnityEngine_RectTransform__set_anchorMax(pUVar8,value_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
            UnityEngine_RectTransform__set_offsetMax(pUVar8,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            UnityEngine_RectTransform__set_offsetMin(pUVar8,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          }
          uVar9 = uVar9 + 1;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_058c5733:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$UpdateBackdrop
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__UpdateBackdrop (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o* __this, float inset, const MethodInfo* method);
// 0x58c5740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c5b2b: cmp byte ptr [rip + 0x1c79196], 0
// asm:   0x58c5b32: je 0x58c5d70

void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__UpdateBackdrop
               (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *__this,float inset,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_UI_Image_o **targetAddress_00;
  uint32_t uVar1;
  UnityEngine_RectTransform_array *pUVar2;
  System_String_o *n;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar4;
  int32_t value_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  System_Type_array *components;
  System_Type_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Material_o *pUVar11;
  MethodInfo *method_00;
  UnityEngine_Vector2_o value_01;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Color_o UVar14;
  
  if (Il2CppMethodInitialized_07545408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Safe Area Backdrop");
    Il2CppMethodInitialized_07545408 = '\x01';
  }
  pUVar2 = (__this->fields)._layers;
  if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) goto label_058c5d90;
  if ((int)pUVar2->max_length == 0) goto label_058c5d95;
  pUVar10 = pUVar2->m_Items[0];
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    n = (__this->fields)._screenId;
    if (n == (System_String_o *)0x0) {
      pUVar5 = (UnityEngine_Transform_o *)0x0;
    }
    else {
      pUVar2 = (__this->fields)._layers;
      if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) goto label_058c5d90;
      if ((int)pUVar2->max_length == 0) goto label_058c5d95;
      if (pUVar2->m_Items[0] == (UnityEngine_RectTransform_o *)0x0) goto label_058c5d90;
      pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar2->m_Items[0],n,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._screen = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screen);
  pUVar5 = (__this->fields)._screen;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar6 = (UnityEngine_UI_Image_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__FindBackground
                       (__this,(__this->fields)._screen,method_00);
  }
  targetAddress = &(__this->fields)._source;
  (__this->fields)._source = pUVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar6 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  (__this->fields)._hasSource = bVar4;
  targetAddress_00 = &(__this->fields)._backdrop;
  pUVar6 = (__this->fields)._backdrop;
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar4) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components == (System_Type_array *)0x0) goto label_058c5d90;
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar7,(((components->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
label_058c5da2:
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
      if ((int)components->max_length == 0) goto label_058c5d95;
      components->m_Items[0] = pSVar7;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      pSVar7 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar7,(((components->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) goto label_058c5da2;
      if ((components->max_length & 0xfffffffe) == 0) goto label_058c5d95;
      components->m_Items[1] = pSVar7;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar9,"AoTTG Safe Area Backdrop",components,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_058c5d90;
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
      *targetAddress_00 = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
    }
    if ((*targetAddress_00 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)*targetAddress_00,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
      UnityEngine_Transform__SetParent_692d510
                ((UnityEngine_Transform_o *)pUVar10,(__this->fields)._screen,false,(MethodInfo *)0x0);
      UnityEngine_Transform__SetAsFirstSibling((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._screen;
      if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
         ((__this_00 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
          __this_00 != (UnityEngine_GameObject_o *)0x0 &&
          (value_00 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0),
          pUVar9 != (UnityEngine_GameObject_o *)0x0)))) {
        UnityEngine_GameObject__set_layer(pUVar9,value_00,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._layers;
        if (pUVar2 != (UnityEngine_RectTransform_array *)0x0) {
          if ((int)pUVar2->max_length == 0) {
label_058c5d95:
            ThrowIndexOutOfRangeException();
          }
          if ((pUVar2->m_Items[0] != (UnityEngine_RectTransform_o *)0x0) &&
             (__this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Transform__get_parent
                                    ((UnityEngine_Transform_o *)pUVar2->m_Items[0],(MethodInfo *)0x0),
             __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
            if (__this_01->klass != TypeInfo_UnityEngine_RectTransform) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01);
            }
            UVar13 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            fVar12 = UVar13.fields.m_Width * inset;
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar10,(UnityEngine_Vector2_o)
                               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07542885 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_07542885 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar10,(UnityEngine_Vector2_o)
                               (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            value_01.fields.y = 0.0;
            value_01.fields.x = -fVar12;
            UnityEngine_RectTransform__set_offsetMin(pUVar10,value_01,(MethodInfo *)0x0);
            value.fields.y = 0.0;
            value.fields.x = fVar12;
            UnityEngine_RectTransform__set_offsetMax(pUVar10,value,(MethodInfo *)0x0);
            if ((*targetAddress != (UnityEngine_UI_Image_o *)0x0) &&
               (*targetAddress_00 != (UnityEngine_UI_Image_o *)0x0)) {
              UnityEngine_UI_Image__set_sprite
                        (*targetAddress_00,((*targetAddress)->fields).m_Sprite,(MethodInfo *)0x0);
              if ((*targetAddress != (UnityEngine_UI_Image_o *)0x0) &&
                 (*targetAddress_00 != (UnityEngine_UI_Image_o *)0x0)) {
                UnityEngine_UI_Image__set_type
                          (*targetAddress_00,((*targetAddress)->fields).m_Type,(MethodInfo *)0x0);
                pUVar6 = *targetAddress;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  pUVar3 = *targetAddress_00;
                  UVar14 = (*(pUVar6->klass->vtable)._22_get_color.methodPtr)
                                     (pUVar6,(pUVar6->klass->vtable)._22_get_color.method);
                  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                              (pUVar3,UVar14,(pUVar3->klass->vtable)._23_set_color.method);
                    pUVar6 = *targetAddress;
                    if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                      pUVar3 = *targetAddress_00;
                      pUVar11 = (*(pUVar6->klass->vtable)._32_get_material.methodPtr)
                                          (pUVar6,(pUVar6->klass->vtable)._32_get_material.method);
                      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                        (*(pUVar3->klass->vtable)._33_set_material.methodPtr)
                                  (pUVar3,pUVar11,(pUVar3->klass->vtable)._33_set_material.method);
                        if ((*targetAddress != (UnityEngine_UI_Image_o *)0x0) &&
                           (*targetAddress_00 != (UnityEngine_UI_Image_o *)0x0)) {
                          UnityEngine_UI_Image__set_pixelsPerUnitMultiplier
                                    (*targetAddress_00,((*targetAddress)->fields).m_PixelsPerUnitMultiplier,
                                     (MethodInfo *)0x0);
                          pUVar6 = *targetAddress;
                          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                            pUVar3 = *targetAddress_00;
                            bVar4 = (*(pUVar6->klass->vtable)._24_get_raycastTarget.methodPtr)
                                              (pUVar6,(pUVar6->klass->vtable)._24_get_raycastTarget.method);
                            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                              (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                                        (pUVar3,bVar4,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
                              pUVar6 = *targetAddress_00;
                              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                                bVar4 = true;
                                goto label_058c5d32;
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
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pUVar6 = *targetAddress_00;
    if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
      bVar4 = false;
label_058c5d32:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar6,bVar4,(MethodInfo *)0x0);
      return;
    }
  }
label_058c5d90:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$FindBackground
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__FindBackground (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o* __this, UnityEngine_Transform_o* screen, const MethodInfo* method);
// 0x58c5dc0
// eh: try 0x58c5eef..0x58c616e -> pad 0x58c6191 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58c61ab..0x58c61b0 -> pad 0x58c61b8 cleanup
// eh: try 0x58c61bb..0x58c61c5 -> pad 0x58c61cd catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c5edd: nop dword ptr [rax]
// asm:   0x58c60fe: nop 
// asm:   0x58c6173: mov rdi, r14
// asm:   0x58c6176: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58c617b: jmp 0x58c6193
// asm:   0x58c617d: jmp 0x58c6193
// asm:   0x58c617f: jmp 0x58c6193
// asm:   0x58c6181: jmp 0x58c6193
// asm:   0x58c6183: jmp 0x58c6193
// asm:   0x58c6185: jmp 0x58c6193
// asm:   0x58c6187: jmp 0x58c6193
// asm:   0x58c6189: jmp 0x58c6193
// asm:   0x58c618b: jmp 0x58c6193
// asm:   0x58c618d: jmp 0x58c6193
// asm:   0x58c618f: jmp 0x58c6193
// asm:   0x58c6191: jmp 0x58c6193
// asm:   0x58c6193: mov rbx, rax
// asm:   0x58c6196: cmp edx, 1
// asm:   0x58c6199: jne 0x58c61bb
// asm:   0x58c619b: mov rdi, rbx
// asm:   0x58c619e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58c61a3: mov r14, qword ptr [rax]
// asm:   0x58c61a6: mov qword ptr [rsp + 0x30], r14
// asm:   0x58c61ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58c61b0: xor r15d, r15d
// asm:   0x58c61b3: jmp 0x58c60bc
// asm:   0x58c61b8: mov rbx, rax
// asm:   0x58c61bb: lea rdi, [rsp + 0x30]
// asm:   0x58c61c0: call 0x2fd01c0  ; il2cpp_runtime_helper_02fd01c0()
// asm:   0x58c61c5: mov rdi, rbx
// asm:   0x58c61c8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58c61cd: mov rdi, rax
// asm:   0x58c61d0: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea__FindBackground
          (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *__this,UnityEngine_Transform_o *screen,
          MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_Image_o *y;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Component_o *__this_00;
  Il2CppObject *pIVar7;
  ulong uVar8;
  long lVar9;
  UnityEngine_UI_Image_o *pUVar10;
  UnityEngine_UI_Image_o *local_70;
  Il2CppObject *local_68;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_50 = __this;
  if (Il2CppMethodInitialized_07545409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07545409 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_70 = (UnityEngine_UI_Image_o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  if (screen == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_68 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(screen,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = &local_68;
  local_38 = &local_60;
  if (local_68 != (Il2CppObject *)0x0) {
    do {
      pIVar7 = local_68;
      pIVar3 = local_68->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar9) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9);
            goto label_058c5f13;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058c5f13:
      bVar5 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
      pIVar7 = local_68;
      if (!bVar5) {
        pUVar10 = (UnityEngine_UI_Image_o *)0x0;
label_058c60b9:
        pIVar7 = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (pIVar7 == (Il2CppObject *)0x0) {
          return pUVar10;
        }
        pIVar3 = pIVar7->klass;
        uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
        local_60 = pIVar7;
        if (uVar8 == 0) goto label_058c610f;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar9 = 0;
        goto label_058c6100;
      }
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_68->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar9) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar6 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar9) + 1);
            goto label_058c5fa7;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058c5fa7:
      __this_00 = (UnityEngine_Component_o *)(*pVVar6->methodPtr)(pIVar7,pVVar6->method);
      if (__this_00 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      bVar5 = UnityEngine_Component__TryGetComponent_object_
                        (__this_00,&local_58,
                         (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
      if (bVar5) {
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((*(int *)&local_58[2].monitor == 2) && (*(int *)&local_58[4].klass == 1)) &&
            (fVar1 = *(float *)((long)&local_58[3].monitor + 4), fVar1 == 0.0)) &&
           ((!NAN(fVar1) &&
            (bVar5 = UnityEngine_Component__TryGetComponent_object_
                               (__this_00,(Il2CppObject **)&local_70,
                                (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Image),
            bVar5)))) {
          if (local_70 == (UnityEngine_UI_Image_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)local_70,(MethodInfo *)0x0);
          pUVar10 = local_70;
          if (bVar5) {
            y = (local_50->fields)._backdrop;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
            if (bVar5) {
              pUVar10 = local_70;
              goto label_058c60b9;
            }
          }
        }
      }
    } while (local_68 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
label_058c6100:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9);
      goto label_058c612d;
    }
  }
label_058c610f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058c612d:
  (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
  return pUVar10;
}


// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea___ctor (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o* __this, const MethodInfo* method);
// 0x58c61e0

void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea___ctor
               (Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  UnityEngine_RectTransform_array *pUVar3;
  
  if (Il2CppMethodInitialized_0754540a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform_array);
    Il2CppMethodInitialized_0754540a = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->static_fields->LayerPaths;
  }
  else {
    pSVar2 = *(System_String_array **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea)->static_fields;
  }
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar3 = (UnityEngine_RectTransform_array *)
           SZArrayNew(TypeInfo_UnityEngine_RectTransform_array,(uint32_t)pSVar2->max_length);
  (__this->fields)._layers = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layers);
  (__this->fields)._inset = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea___cctor (const MethodInfo* method);
// 0x58c62b0

void Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_0754540b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Canvas/AoTTG Screens");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Canvas/AoTTG Toasts");
    Il2CppMethodInitialized_0754540b = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "AoTTG UI Canvas/AoTTG Screens";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "AoTTG UI Canvas/AoTTG Toasts";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->static_fields->LayerPaths = pSVar1;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUiSafeArea->static_fields->LayerPaths);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


