// Type: Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMobileMenuSafeArea.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$HorizontalInset
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__HorizontalInset (const MethodInfo* method);
// 0x58c46f0

float Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__HorizontalInset(MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  float local_38;
  float local_28;
  
  if (Il2CppMethodInitialized_075453ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075453ff = '\x01';
  }
  UVar8 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).MobileHorizontalSafePadding, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar7 = (pSVar2->fields)._value;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  local_28 = UVar8.fields.m_XMin;
  local_38 = UVar8.fields.m_Width;
  fVar6 = (float)iVar3 - (local_38 + local_28);
  if (local_28 <= fVar6) {
    local_28 = fVar6;
  }
  fVar7 = fVar7 * (float)iVar4;
  if (fVar7 <= local_28) {
    fVar7 = local_28;
  }
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar5 = 1;
  if (1 < iVar4) {
    iVar5 = iVar4;
  }
  return fVar7 / (float)iVar5;
}


// Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$ApplyInset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__ApplyInset (UnityEngine_RectTransform_o* rect, float inset, const MethodInfo* method);
// 0x58c4810

void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__ApplyInset
               (UnityEngine_RectTransform_o *rect,float inset,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_00.fields.y = 0.0;
  value_00.fields.x = inset;
  UnityEngine_RectTransform__set_anchorMin(rect,value_00,(MethodInfo *)0x0);
  value_01.fields.y = 1.0;
  value_01.fields.x = 1.0 - inset;
  UnityEngine_RectTransform__set_anchorMax(rect,value_01,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  UnityEngine_RectTransform__set_offsetMax(rect,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMin(rect,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__LateUpdate (Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea_o* __this, const MethodInfo* method);
// 0x58c48b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c4afe: nop 

void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  float fVar1;
  UnityEngine_Vector2_Fields value;
  int iVar2;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_RectTransform_c *pUVar3;
  bool bVar4;
  int32_t iVar5;
  uint32_t length;
  uint uVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  UI_MobileControlsOverlay_o *x;
  UI_MobileLayoutEditorOverlay_o *x_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  ulong uVar12;
  long lVar13;
  System_String_o **method_01;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  method_01 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07545400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MobileControlsOverlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MobileLayoutEditorOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform_array);
    method_01 = &"Mobile Menu Safe Area";
    il2cpp_codegen_initialize_runtime_metadata(&"Mobile Menu Safe Area");
    Il2CppMethodInitialized_07545400 = '\x01';
  }
  fVar14 = Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__HorizontalInset((MethodInfo *)method_01);
  pUVar8 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    iVar2 = (__this->fields)._childCount;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_058c4d3b;
    iVar5 = UnityEngine_Transform__get_childCount(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == iVar5) {
      fVar1 = (__this->fields)._inset;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar16 = ABS(fVar1);
      if (fVar16 <= ABS(fVar14)) {
        fVar16 = ABS(fVar14);
      }
      fVar15 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar17 = fVar16 * 1e-06;
      if (fVar16 * 1e-06 <= fVar15) {
        fVar17 = fVar15;
      }
      if (ABS(fVar14 - fVar1) < fVar17) {
        return;
      }
    }
  }
  targetAddress = &(__this->fields)._content;
  pUVar8 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
      method_00 = extraout_RDX_00;
    }
    __this_00 = Gisketch_Aottg2UI_Game_AottgMobileUi__CreateRect(pUVar7,"Mobile Menu Safe Area",method_00);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058c4d3b;
    pUVar8 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0)
    ;
    pUVar3 = TypeInfo_UnityEngine_RectTransform;
    if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) {
      *targetAddress = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar8->klass != TypeInfo_UnityEngine_RectTransform) ||
            (*targetAddress = pUVar8, pUVar8->klass != pUVar3)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
    }
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    length = UnityEngine_Transform__get_childCount(pUVar7,(MethodInfo *)0x0);
    pIVar9 = SZArrayNew(TypeInfo_UnityEngine_Transform_array,length);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (0 < *(int *)&pIVar9[1].monitor) {
        lVar13 = 0x20;
        uVar12 = 0;
        do {
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_058c4d3b;
          pIVar10 = (Il2CppClass *)UnityEngine_Transform__GetChild(pUVar7,(int32_t)uVar12,(MethodInfo *)0x0);
          if ((pIVar10 != (Il2CppClass *)0x0) &&
             (pIVar11 = il2cpp_vm_Object_IsInst((Il2CppObject *)pIVar10,(pIVar9->klass->_1).element_class),
             pIVar11 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if (*(uint *)&pIVar9[1].monitor <= uVar12) goto label_058c4d36;
          (&pIVar9[2].klass)[uVar12] = pIVar10;
          Il2CppCodeGenWriteBarrier((void **)((long)&pIVar9->klass + lVar13));
          uVar12 = uVar12 + 1;
          uVar6 = *(uint *)&pIVar9[1].monitor;
          lVar13 = lVar13 + 8;
        } while ((long)uVar12 < (long)(int)uVar6);
        if (0 < (int)uVar6) {
          uVar12 = 0;
          do {
            if (uVar6 <= uVar12) {
label_058c4d36:
              ThrowIndexOutOfRangeException();
            }
            pIVar10 = (&pIVar9[2].klass)[uVar12];
            pUVar8 = *targetAddress;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)pUVar8,
                               (MethodInfo *)0x0);
            if (!bVar4) {
              if (pIVar10 == (Il2CppClass *)0x0) goto label_058c4d3b;
              x = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pIVar10,
                             (MethodInfo_34B0830 *)
                             MethodInfo_UnityEngine_Component_GetComponent_MobileControlsOverlay);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (!bVar4) {
                x_00 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pIVar10,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_MobileLayoutEditorOverlay);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar4 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                ;
                if (!bVar4) {
                  UnityEngine_Transform__SetParent_692d510
                            ((UnityEngine_Transform_o *)pIVar10,(UnityEngine_Transform_o *)*targetAddress,
                             false,(MethodInfo *)0x0);
                }
              }
            }
            uVar12 = uVar12 + 1;
            uVar6 = *(uint *)&pIVar9[1].monitor;
          } while ((long)uVar12 < (long)(int)uVar6);
        }
      }
      pUVar8 = *targetAddress;
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        value_00.fields.y = 0.0;
        value_00.fields.x = fVar14;
        UnityEngine_RectTransform__set_anchorMin(pUVar8,value_00,(MethodInfo *)0x0);
        value_01.fields.y = 1.0;
        value_01.fields.x = 1.0 - fVar14;
        UnityEngine_RectTransform__set_anchorMax(pUVar8,value_01,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        UnityEngine_RectTransform__set_offsetMax(pUVar8,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMin(pUVar8,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          iVar5 = UnityEngine_Transform__get_childCount(pUVar7,(MethodInfo *)0x0);
          (__this->fields)._childCount = iVar5;
          (__this->fields)._inset = fVar14;
          return;
        }
      }
    }
  }
label_058c4d3b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea___ctor (Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea_o* __this, const MethodInfo* method);
// 0x58c4e90

void Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea___ctor
               (Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea_o *__this,MethodInfo *method)

{
  (__this->fields)._inset = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


