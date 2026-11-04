// Type: Gisketch.Aottg2UI.Game.AottgScoreboardPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardPopup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_PopupAnimationType (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_PopupAnimationType(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_View
// il2cpp: Gisketch_Aottg2UI_Game_AottgInGameView_o* Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_View (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18058a890

Gisketch_Aottg2UI_Game_AottgInGameView_o*
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_View(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, MethodInfo* method)

{
  return (__this->fields)._View_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_View
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_View (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Game_AottgInGameView_o* value, const MethodInfo* method);
// 0x18058aa30

void
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_View(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Game_AottgInGameView_o* value, MethodInfo* method)

{
  (__this->fields)._View_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._View_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_Dialog
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_Dialog (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x181537220

Gisketch_Aottg2UI_Building_GisketchView_o*
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__get_Dialog(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[2].fields.m_Properties.fields._list;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_Dialog
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_Dialog (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* value, const MethodInfo* method);
// 0x181537500

void
Gisketch_Aottg2UI_Game_AottgScoreboardPopup__set_Dialog(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* value, MethodInfo* method)

{
  __this[2].fields.m_Properties.fields._list = (System_Collections_Generic_List_T__o *)value;
  Il2CppCodeGenWriteBarrier((void **)&__this[2].fields.m_Properties,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x181de6ef0

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  UnityEngine_Canvas_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Building_GisketchView_o *value;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    Il2CppMethodInitialized_184344abd = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(pUVar2,(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar3,(MethodInfo *)0x0);
  (__this->fields)._View_k__BackingField = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._View_k__BackingField,pGVar3);
  pUVar4 = UnityEngine_Component__GetComponentInParent_object__664f20
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if (pUVar4 != (UnityEngine_Canvas_o *)0x0) {
    pUVar4 = UnityEngine_Canvas__get_rootCanvas(pUVar4,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Canvas_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
        (__this->fields)._canvasRect = (UnityEngine_RectTransform_o *)0x0;
      }
      else {
        pUVar7 = pUVar8;
        if (pUVar5->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar7 = pUVar5;
        }
        if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
        }
        (__this->fields)._canvasRect = pUVar7;
        if (pUVar5->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar8 = pUVar5;
        }
        if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_RectTransform);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._canvasRect,pUVar8);
      pGVar3 = (__this->fields)._View_k__BackingField;
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._canvasRect;
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar6 = UnityEngine_RectTransform__get_rect(local_28,pUVar8,(MethodInfo *)0x0);
        fVar1 = (pUVar6->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar8 = (__this->fields)._canvasRect;
        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar6 = UnityEngine_RectTransform__get_rect(local_28,pUVar8,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                               (pGVar3,pUVar2,"inGamePauseDimOverlay",fVar1,(pUVar6->fields).m_Height,false,
                                (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
            (__this->fields)._dim = pUVar2;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._dim,pUVar2);
            pUVar2 = (__this->fields)._dim;
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__Position
                      (pUVar2,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            pGVar3 = (__this->fields)._View_k__BackingField;
            pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar8 = (__this->fields)._canvasRect;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar6 = UnityEngine_RectTransform__get_rect(local_28,pUVar8,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._canvasRect;
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (pUVar6->fields).m_Width;
                pUVar6 = UnityEngine_RectTransform__get_rect(local_28,pUVar8,(MethodInfo *)0x0);
                if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                  pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                     (pGVar3,pUVar2,"clear",fVar1,(pUVar6->fields).m_Height,
                                      false,(System_Nullable_float__o)0x0,(MethodInfo *)0x0);
                  (__this->fields)._dialogHost = pUVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._dialogHost,pUVar2);
                  pUVar2 = (__this->fields)._dialogHost;
                  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                    Il2CppMethodInitialized_18433e3c9 = '\x01';
                  }
                  Gisketch_Aottg2UI_Game_AottgInGameView__Position
                            (pUVar2,(UnityEngine_Vector2_o)
                                    (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pGVar3 = (__this->fields)._View_k__BackingField;
                  pUVar2 = (__this->fields)._dialogHost;
                  id = (*(__this->klass->vtable)._62_get_DialogId.methodPtr)
                                 (__this,(__this->klass->vtable)._62_get_DialogId.method);
                  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                    if (Il2CppMethodInitialized_184344a85 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      Il2CppMethodInitialized_184344a85 = '\x01';
                    }
                    __this_00 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry)
                    ;
                    Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
                    overlay = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
                                        (id,__this_00,(MethodInfo *)0x0);
                    context = (pGVar3->fields)._context;
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                                      (overlay,pUVar2,context,(MethodInfo *)0x0);
                    (__this->fields)._Dialog_k__BackingField = value;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._Dialog_k__BackingField,value);
                    return;
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


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x181de7340

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  UnityEngine_Rect_o *pUVar2;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_GameObject_o *pUVar3;
  float value_00;
  float fVar4;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184344abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184344abe = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas(__this,(__this->fields)._dim,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas
            (__this,(__this->fields)._dialogHost,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
     (pUVar3 = (pGVar1->fields)._Root_k__BackingField, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar3,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    __this_00 = (__this->fields)._canvasRect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar2 = UnityEngine_RectTransform__get_rect(local_38,__this_00,(MethodInfo *)0x0);
      fVar4 = (pUVar2->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar4 = fVar4 - 64.0;
      value_00 = 0.0;
      if (0.0 <= fVar4) {
        value_00 = fVar4;
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
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$FitCanvas
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
// 0x181de6d60

void Gisketch_Aottg2UI_Game_AottgScoreboardPopup__FitCanvas
               (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *__this,UnityEngine_Transform_o *target,
               MethodInfo *method)

{
  float value;
  UnityEngine_Vector2_o value_00;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_Rect_o *pUVar1;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184344abf = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)target,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    pUVar4 = (__this->fields)._canvasRect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar1 = UnityEngine_RectTransform__get_rect(local_28,pUVar4,(MethodInfo *)0x0);
      value = (pUVar1->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
      if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_Width(__this_00,GVar2,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._canvasRect;
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar1 = UnityEngine_RectTransform__get_rect(local_28,pUVar4,(MethodInfo *)0x0);
          GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit((pUVar1->fields).m_Height,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar2,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._canvasRect;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar1 = UnityEngine_RectTransform__get_rect(local_28,pUVar4,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Transform_o *)0x0;
            if ((UnityEngine_RectTransform_c *)target->klass == TypeInfo_UnityEngine_RectTransform) {
              pUVar3 = target;
            }
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              value_00.fields.x = (pUVar1->fields).m_Width;
              value_00.fields.y = (pUVar1->fields).m_Height;
              pUVar4 = (UnityEngine_RectTransform_o *)0x0;
              if ((UnityEngine_RectTransform_c *)target->klass == TypeInfo_UnityEngine_RectTransform) {
                pUVar4 = (UnityEngine_RectTransform_o *)target;
              }
              UnityEngine_RectTransform__set_sizeDelta(pUVar4,value_00,(MethodInfo *)0x0);
              return;
            }
            il2cpp_codegen_raise_invalid_cast_exception(target);
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor(Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


