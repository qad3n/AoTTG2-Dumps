// Type: Gisketch.Aottg2UI.Game.AottgScoreboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardPopup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_PopupAnimationType (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x58b5c50

int32_t Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_PopupAnimationType
                  (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_View
// il2cpp: Gisketch_Aottg2UI_Game_AottgInGameView_o* Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_View (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x58b5c60

Gisketch_Aottg2UI_Game_AottgInGameView_o *
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_View
          (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._View_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_View
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_View (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Game_AottgInGameView_o* value, const MethodInfo* method);
// 0x58b5c70

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_View
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,
               Gisketch_Aottg2UI_Game_AottgInGameView_o *value,MethodInfo *method)

{
  (__this->fields)._View_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._View_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_Dialog
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_Dialog (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x58b5c90

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_Dialog
          (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Dialog_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_Dialog
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_Dialog (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* value, const MethodInfo* method);
// 0x58b5ca0

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_Dialog
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *value,MethodInfo *method)

{
  (__this->fields)._Dialog_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Dialog_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x58b5cc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58b5df1: lea r14, [r13 + 0xb8]
// asm:   0x58b5df8: jmp 0x58b5e0c

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  UnityEngine_RectTransform_c *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  UnityEngine_Canvas_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  MethodInfo *pMVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar7;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  float local_38;
  
  if (Il2CppMethodInitialized_07545365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    Il2CppMethodInitialized_07545365 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pMVar6 = (MethodInfo *)0x0;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(pUVar2,pMVar6);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar3,pMVar6);
  (__this->fields)._View_k__BackingField = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._View_k__BackingField);
  pUVar4 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((pUVar4 != (UnityEngine_Canvas_o *)0x0) &&
     (pUVar4 = UnityEngine_Canvas__get_rootCanvas(pUVar4,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Canvas_o *)0x0)) {
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UnityEngine_RectTransform;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._canvasRect = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar5->klass != TypeInfo_UnityEngine_RectTransform) ||
            ((__this->fields)._canvasRect = pUVar5, pUVar5->klass != pUVar1)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
    targetAddress = &(__this->fields)._canvasRect;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pGVar3 = (__this->fields)._View_k__BackingField;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._canvasRect;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
        UVar9 = UnityEngine_RectTransform__get_rect(*targetAddress,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          local_38 = UVar8.fields.m_Width;
          pMVar6 = (MethodInfo *)
                   Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                             (pGVar3,pUVar2,"inGamePauseDimOverlay",local_38,UVar9.fields.m_Height,false,
                              (System_Nullable_float__o)0x0,in_R9);
          (__this->fields)._dim = (UnityEngine_Transform_o *)pMVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._dim);
          pUVar2 = (__this->fields)._dim;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          Gisketch_Aottg2UI_Game_AottgInGameView__Position
                    (pUVar2,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,pMVar6);
          pGVar3 = (__this->fields)._View_k__BackingField;
          pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._canvasRect;
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
              UVar9 = UnityEngine_RectTransform__get_rect(*targetAddress,(MethodInfo *)0x0);
              if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                local_38 = UVar8.fields.m_Width;
                method_00 = (MethodInfo *)0x0;
                pMVar6 = (MethodInfo *)
                         Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                   (pGVar3,pUVar2,"clear",local_38,UVar9.fields.m_Height,false,
                                    (System_Nullable_float__o)0x0,in_R9);
                (__this->fields)._dialogHost = (UnityEngine_Transform_o *)pMVar6;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._dialogHost);
                pUVar2 = (__this->fields)._dialogHost;
                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                }
                Gisketch_Aottg2UI_Game_AottgInGameView__Position
                          (pUVar2,(UnityEngine_Vector2_o)
                                  (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,pMVar6);
                pGVar3 = (__this->fields)._View_k__BackingField;
                pUVar2 = (__this->fields)._dialogHost;
                id = (*(__this->klass->vtable)._62_get_DialogId.methodPtr)
                               (__this,(__this->klass->vtable)._62_get_DialogId.method);
                if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                  pGVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Dialog(pGVar3,pUVar2,id,method_00);
                  (__this->fields)._Dialog_k__BackingField = pGVar7;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._Dialog_k__BackingField);
                  return;
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


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x58b6020

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float value_00;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if (Il2CppMethodInitialized_07545366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07545366 = '\x01';
    in_RDX = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas(__this,(__this->fields)._dim,in_RDX);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas(__this,(__this->fields)._dialogHost,method_00);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
     (pUVar2 = (pGVar1->fields)._Root_k__BackingField, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    __this_00 = (__this->fields)._canvasRect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar3 = UVar4.fields.m_Height + -64.0;
      value_00 = 0.0;
      if (0.0 <= fVar3) {
        value_00 = fVar3;
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this_02,value,(MethodInfo *)0x0);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._dialogHost;
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$FitCanvas
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
// 0x58b6190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58b6249: jmp 0x58b62fa

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,UnityEngine_Transform_o *target,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  UnityEngine_Rect_o UVar3;
  
  if (Il2CppMethodInitialized_07545367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07545367 = '\x01';
  }
  if (target == (UnityEngine_Transform_o *)0x0) goto label_058b62fa;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)target,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  pUVar1 = (__this->fields)._canvasRect;
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_058b62fa;
  UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) goto label_058b626e;
label_058b623d:
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(UVar3.fields.m_Width,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor != 0) goto label_058b623d;
label_058b626e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(UVar3.fields.m_Width,(MethodInfo *)0x0);
  }
  if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_Width(__this_00,GVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._canvasRect;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(UVar3.fields.m_Height,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar2,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._canvasRect;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((UnityEngine_RectTransform_c *)target->klass != TypeInfo_UnityEngine_RectTransform) {
          il2cpp_codegen_raise_invalid_cast_exception(UVar3.fields.m_XMin,target);
        }
        UnityEngine_RectTransform__set_sizeDelta
                  ((UnityEngine_RectTransform_o *)target,(UnityEngine_Vector2_o)UVar3.fields._8_8_,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_058b62fa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x58b6310

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


