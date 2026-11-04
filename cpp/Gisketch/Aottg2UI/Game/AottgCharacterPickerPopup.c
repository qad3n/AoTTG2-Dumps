// Type: Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterPickerPopup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Width
// il2cpp: float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Width (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x181dd9cf0

float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Width
                (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  return 1120.0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Height
// il2cpp: float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Height (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x181dd9ce0

float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Height
                (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  return 820.0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_PopupAnimationType
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_PopupAnimationType (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_PopupAnimationType(Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Setup (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x181dd8750

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar3;
  UnityEngine_Vector2_o value;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar8;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  TMPro_TMP_Text_o *value_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_ScrollRect_o *pUVar11;
  UI_SkillTooltipPopup_o *pUVar12;
  UnityEngine_RectTransform_o *value_01;
  float fVar13;
  float fVar14;
  float headerHeight;
  float footerHeight;
  
  if (Il2CppMethodInitialized_184344a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateTooltipPopup_SkillTooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkillTooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameNeutralTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.picker.back");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344a7b = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(pUVar5,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                     (__this,(__this->klass->vtable)._5_get_Width.method);
  fVar14 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    value_01 = (UnityEngine_RectTransform_o *)0x0;
    pUVar7 = value_01;
    if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar7 = pUVar6;
    }
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
    }
    pUVar7 = value_01;
    if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar7 = pUVar6;
    }
    value.fields.y = fVar14;
    value.fields.x = fVar13;
    UnityEngine_RectTransform__set_sizeDelta(pUVar7,value,(MethodInfo *)0x0);
    pGVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar8,(MethodInfo *)0x0);
    (__this->fields)._view = pGVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view,pGVar8);
    pGVar8 = (__this->fields)._view;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                       (__this,(__this->klass->vtable)._5_get_Width.method);
    fVar14 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                       (__this,(__this->klass->vtable)._6_get_Height.method);
    if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      pUVar6 = (UnityEngine_RectTransform_o *)
               Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                         (pGVar8,pUVar5,"inGamePauseDimOverlay",fVar13,fVar14,false,
                          (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
        (__this->fields)._dim = (UnityEngine_RectTransform_o *)0x0;
      }
      else {
        pUVar7 = value_01;
        if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar7 = pUVar6;
        }
        if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
        }
        (__this->fields)._dim = pUVar7;
        if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
          value_01 = pUVar6;
        }
        if (value_01 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar6,TypeInfo_UnityEngine_RectTransform);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dim,value_01);
      pUVar6 = (__this->fields)._dim;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar6,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
        if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._dim;
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          Gisketch_Aottg2UI_Game_AottgInGameView__Position
                    ((UnityEngine_Transform_o *)pUVar6,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pGVar8 = (__this->fields)._view;
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          fVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                             (__this,(__this->klass->vtable)._5_get_Width.method);
          fVar14 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                             (__this,(__this->klass->vtable)._6_get_Height.method);
          headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                                   (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
          footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                                   (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
          if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
                      (pGVar8,pUVar5,fVar13,fVar14,headerHeight,footerHeight,&(__this->fields).TopBar,
                       &(__this->fields).BottomBar,"inGameFooter",(MethodInfo *)0x0);
            pGVar8 = (__this->fields)._view;
            pUVar5 = (__this->fields).TopBar;
            fVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                               (__this,(__this->klass->vtable)._5_get_Width.method);
            if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
              value_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                                   (pGVar8,pUVar5,"",fVar13 - 48.0,44.0,
                                    "inGameNeutralTitle",(MethodInfo *)0x0);
              (__this->fields)._title = value_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._title,value_00);
              pGVar8 = (__this->fields)._view;
              pUVar5 = (__this->fields).BottomBar;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              text = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgInGameView__Button
                          (pGVar8,pUVar5,text,"ingame.character.picker.back",(System_String_o *)0x0,220.0,44.0,3,
                           (MethodInfo *)0x0);
                pGVar8 = (__this->fields)._view;
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                __this_02 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
                if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (__this_02->fields).type = "ScrollView";
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"ScrollView");
                  (__this_02->fields).style = "clear";
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"clear");
                  fVar13 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                     (__this,(__this->klass->vtable)._5_get_Width.method);
                  width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar13,(MethodInfo *)0x0);
                  fVar13 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                                     (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
                  height = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar13,(MethodInfo *)0x0);
                  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                  (__this_02->fields).layout = pGVar9;
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,pGVar9);
                  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,24.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                  (__this_02->fields).contentLayout = pGVar9;
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).contentLayout,pGVar9);
                  if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                    pUVar10 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                        (pGVar8,pUVar5,__this_02,(MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar10,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
                      (__this->fields)._scroll = pUVar11;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,pUVar11);
                      pUVar11 = (__this->fields)._scroll;
                      if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                        pUVar5 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                          Il2CppMethodInitialized_18433e3c9 = '\x01';
                        }
                        Gisketch_Aottg2UI_Game_AottgInGameView__Position
                                  (pUVar5,(UnityEngine_Vector2_o)
                                          (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                   (MethodInfo *)0x0);
                        pUVar5 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar10 = UI_ElementFactory__CreateTooltipPopup_object_
                                            (pUVar5,false,
                                             (MethodInfo_6ABCF0 *)
                                             MethodInfo_UI_ElementFactory_CreateTooltipPopup_SkillTooltipPopup
                                            );
                        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar10,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_SkillTooltipPopup
                                              );
                          (__this->fields)._skillTooltip = pUVar12;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._skillTooltip,pUVar12);
                          pMVar4 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                          __this_00 = (__this->fields)._popups;
                          if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                            pUVar12 = (__this->fields)._skillTooltip;
                            piVar1 = &(__this_00->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (__this_00->fields)._items;
                            if (pUVar3 != (UI_BasePopup_array *)0x0) {
                              uVar2 = (__this_00->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (__this_00->fields)._size = uVar2 + 1;
                                if ((uint)pUVar3->max_length <= uVar2) {
                                  ThrowIndexOutOfRangeException();
                                }
                                pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
                                Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,pUVar12);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_00,
                                           (Il2CppObject *)pUVar12,
                                           (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
                              }
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
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, System_String_array* tooltips, System_Action_int__o* onSelect, float previewSize, const MethodInfo* method);
// 0x181dd9030
// eh: try 0x181dd93c2..0x181dd9467 -> pad 0x18333c440 catch Il2CppExceptionWrapper
// eh: try 0x181dd9467..0x181dd94bf -> pad 0x180026a30 cleanup
// eh: try 0x181dd94bf..0x181dd9ca4 -> pad 0x18333c440 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd9429: nop dword ptr [rax]
// asm:   0x181dd9487: mov rdx, qword ptr [rip + 0x22ab3b2]  ; TypeInfo_UnityEngine_Transform
// asm:   0x181dd948e: mov r8, qword ptr [rax]
// asm:   0x181dd9491: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181dd9498: cmp byte ptr [r8 + 0x130], al
// asm:   0x181dd949f: jb 0x181dd9c91
// asm:   0x181dd9537: lea rcx, [rsp + 0xd8]
// asm:   0x181dd953f: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181dd9544: mov rcx, qword ptr [rsp + 0xd0]
// asm:   0x181dd954c: test rcx, rcx
// asm:   0x181dd954f: jne 0x181dd9ca4
// asm:   0x181dd9555: xor ebx, ebx
// asm:   0x181dd9557: mov r15d, 1
// asm:   0x181dd955d: mov r14, qword ptr [rsp + 0x1e8]
// asm:   0x181dd9565: mov rsi, qword ptr [rsp + 0x1e0]
// asm:   0x181dd9729: nop dword ptr [rax]
// asm:   0x181dd9a74: mov r12, qword ptr [rsp + 0x200]
// asm:   0x181dd9a7c: mov r15, qword ptr [rsp + 0xc8]
// asm:   0x181dd9bac: mov eax, dword ptr [rsp + 0x1f0]
// asm:   0x181dd9ca4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c440: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c445: push rbp
// asm:   0x18333c446: sub rsp, 0xc0
// asm:   0x18333c44d: mov rbp, rdx
// asm:   0x18333c450: mov rax, qword ptr [rbp + 0xf0]
// asm:   0x18333c457: mov rcx, qword ptr [rax]
// asm:   0x18333c45a: mov qword ptr [rbp + 0xd0], rcx
// asm:   0x18333c461: movabs rax, 0
// asm:   0x18333c46b: add rsp, 0xc0
// asm:   0x18333c472: pop rbp
// asm:   0x18333c473: ret 

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,Settings_BaseSetting_o *setting,
               System_String_o *title,System_String_array *options,System_String_array *icons,
               System_String_array *tooltips,System_Action_int__o *onSelect,float previewSize,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  TMPro_TMP_Text_o *pTVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_ScrollRect_o *pUVar9;
  Il2CppClass *pIVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  Settings_BaseSetting_c *pSVar12;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar13;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *value;
  UnityEngine_Vector2_o value_00;
  System_String_array *pSVar15;
  Il2CppObject *__this_00;
  undefined8 parent;
  bool bVar16;
  uint uVar17;
  UnityEngine_Canvas_o *pUVar18;
  UnityEngine_Texture_o *pUVar19;
  UnityEngine_Rect_o *pUVar20;
  UnityEngine_Vector3_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  void *pvVar23;
  VirtualInvokeData *pVVar24;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *pUVar25;
  UnityEngine_Object_o *obj;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_01;
  UnityEngine_UI_RawImage_o *__this_03;
  System_String_o *pSVar26;
  UnityEngine_UI_Button_o *__this_04;
  UI_HoverTooltip_o *pUVar27;
  ushort uVar28;
  int32_t variant;
  UnityEngine_Texture_o *pUVar29;
  UnityEngine_Texture_o *pUVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  uint local_res18 [2];
  System_String_array *local_res20;
  Il2CppObject *local_118;
  UnityEngine_Transform_o *local_110;
  undefined1 local_108 [16];
  Il2CppObject **local_f8;
  Il2CppObject *local_f0 [23];
  
  local_res20 = options;
  if (Il2CppMethodInitialized_184344a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameRow");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.picker.select");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePickerPreview");
    Il2CppMethodInitialized_184344a7c = '\x01';
  }
  pUVar30 = (UnityEngine_Texture_o *)0x0;
  local_118 = (Il2CppObject *)0x0;
  local_f0[0] = (Il2CppObject *)0x0;
  local_res18[0] = 0;
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
  (__this->fields)._options = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect,onSelect);
  pTVar7 = (__this->fields)._title;
  if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar7->klass->vtable)._66_set_text.methodPtr)
              (pTVar7,title,(pTVar7->klass->vtable)._66_set_text.method);
    pUVar18 = UnityEngine_Component__GetComponentInParent_object__664f20
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    if (((pUVar18 != (UnityEngine_Canvas_o *)0x0) &&
        (pUVar18 = UnityEngine_Canvas__get_rootCanvas(pUVar18,(MethodInfo *)0x0),
        pUVar18 != (UnityEngine_Canvas_o *)0x0)) &&
       (pUVar19 = (UnityEngine_Texture_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
       pUVar19 != (UnityEngine_Texture_o *)0x0)) {
      pUVar29 = pUVar30;
      if (pUVar19->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_RectTransform) {
        pUVar29 = pUVar19;
      }
      if (pUVar29 == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar19);
      }
      pUVar8 = (__this->fields)._dim;
      pUVar20 = UnityEngine_RectTransform__get_rect
                          ((UnityEngine_Rect_o *)local_108,(UnityEngine_RectTransform_o *)pUVar29,
                           (MethodInfo *)0x0);
      fVar1 = (pUVar20->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar21 = UnityEngine_Transform__get_lossyScale
                          ((UnityEngine_Vector3_o *)local_108,(UnityEngine_Transform_o *)pUVar29,
                           (MethodInfo *)0x0);
      fVar33 = (pUVar21->fields).x;
      pUVar22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
        pUVar21 = UnityEngine_Transform__get_lossyScale
                            ((UnityEngine_Vector3_o *)local_108,pUVar22,(MethodInfo *)0x0);
        fVar34 = (pUVar21->fields).x;
        pUVar20 = UnityEngine_RectTransform__get_rect
                            ((UnityEngine_Rect_o *)local_108,(UnityEngine_RectTransform_o *)pUVar29,
                             (MethodInfo *)0x0);
        fVar2 = (pUVar20->fields).m_Height;
        pUVar21 = UnityEngine_Transform__get_lossyScale
                            ((UnityEngine_Vector3_o *)local_108,(UnityEngine_Transform_o *)pUVar29,
                             (MethodInfo *)0x0);
        fVar3 = (pUVar21->fields).y;
        pUVar22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
          pUVar21 = UnityEngine_Transform__get_lossyScale
                              ((UnityEngine_Vector3_o *)local_108,pUVar22,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
            value_00.fields.y = (fVar2 * fVar3) / (pUVar21->fields).y;
            value_00.fields.x = (fVar1 * fVar33) / fVar34;
            UnityEngine_RectTransform__set_sizeDelta(pUVar8,value_00,(MethodInfo *)0x0);
            pUVar9 = (__this->fields)._scroll;
            if ((pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar8 = (pUVar9->fields).m_Content, pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
              local_118 = (Il2CppObject *)
                          UnityEngine_Transform__GetEnumerator
                                    ((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
              local_108._0_8_ = (UnityEngine_Transform_o *)0x0;
              local_108._8_8_ = &local_118;
              local_f8 = local_f0;
              while( true ) {
                if (local_118 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pvVar23 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_118);
                __this_00 = local_118;
                if ((char)pvVar23 == '\0') break;
                if (local_118 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar10 = local_118->klass;
                uVar6 = (pIVar10->_2).interface_offsets_count;
                uVar28 = 0;
                if (uVar6 != 0) {
                  pIVar11 = (pIVar10->_1).interfaceOffsets;
                  do {
                    if (pIVar11[uVar28].interfaceType ==
                        (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                      pVVar24 = pIVar10->vtable + (pIVar11[uVar28].offset + 1);
                      goto label_181dd9452;
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < uVar6);
                }
                pVVar24 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (local_118,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181dd9452:
                __this_01 = (UnityEngine_Component_o *)(*pVVar24->methodPtr)(__this_00,pVVar24->method);
                if (__this_01 == (UnityEngine_Component_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar5 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
                if (((__this_01->klass->_2).typeHierarchyDepth < bVar5) ||
                   ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
                    (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                }
                pUVar25 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                if (pUVar25 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_GameObject__SetActive(pUVar25,false,(MethodInfo *)0x0);
                obj = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
              }
              local_f0[0] = il2cpp_vm_Object_IsInst(local_118,(Il2CppClass *)TypeInfo_System_IDisposable);
              if (local_f0[0] != (Il2CppObject *)0x0) {
                InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_f0[0]);
              }
              if (Il2CppMethodInitialized_184344a7d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value)
                ;
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                Il2CppMethodInitialized_184344a7d = '\x01';
              }
              pSVar15 = local_res20;
              if (setting != (Settings_BaseSetting_o *)0x0) {
                pSVar12 = setting->klass;
                bVar5 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                if (((pSVar12->_2).typeHierarchyDepth < bVar5) ||
                   ((pSVar12->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                  bVar5 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if (((pSVar12->_2).typeHierarchyDepth < bVar5) ||
                     ((pSVar12->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    il2cpp_codegen_raise_invalid_cast_exception(setting);
                  }
                  uVar17 = System_Array__IndexOf_object_
                                     ((System_Object_array *)local_res20,(*(uint64_t *)((char *)setting + 0x20)),
                                      (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
                }
                else {
                  uVar17 = *(uint *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
                }
                iVar31 = 2;
                if (icons != (System_String_array *)0x0) {
                  iVar31 = 5;
                }
                fVar33 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                   (__this,(__this->klass->vtable)._5_get_Width.method);
                fVar1 = previewSize;
                iVar32 = 1;
                if (icons != (System_String_array *)0x0) {
                  iVar32 = 4;
                }
                fVar33 = ((fVar33 - 48.0) - (float)iVar32 * 16.0) / (float)iVar31;
                local_res18[0] = 0;
                if (pSVar15 != (System_String_array *)0x0) {
                  local_108._0_8_ = (UnityEngine_Transform_o *)0x0;
                  pUVar19 = pUVar30;
                  while ((int)pUVar19 < (int)local_res20->max_length) {
                    if ((int)pUVar19 % iVar31 == 0) {
                      pUVar9 = (__this->fields)._scroll;
                      if (pUVar9 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_181dd9c80;
                      pGVar13 = (__this->fields)._view;
                      pUVar8 = (pUVar9->fields).m_Content;
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
                      if (__this_02 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                      goto label_181dd9c80;
                      (__this_02->fields).type = "Panel";
                      Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"Panel");
                      (__this_02->fields).style = "clear";
                      Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"clear");
                      value_01 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                           ("Row",(System_String_o *)0x0,
                                            (System_String_o *)0x0,(System_String_o *)0x0,
                                            (System_String_o *)0x0,16.0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0
                                            ,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                      (__this_02->fields).layout = value_01;
                      Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,value_01);
                      if ((pGVar13 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) ||
                         (pUVar25 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                              (pGVar13,(UnityEngine_Transform_o *)pUVar8,__this_02,
                                               (MethodInfo *)0x0), pUVar25 == (UnityEngine_GameObject_o *)0x0)
                         ) goto label_181dd9c80;
                      local_108._0_8_ = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
                    }
                    parent = local_108._0_8_;
                    pSVar14 = "inGameRow";
                    pGVar13 = (__this->fields)._view;
                    if (icons == (System_String_array *)0x0) {
                      fVar34 = 52.0;
                    }
                    else {
                      fVar34 = fVar1 + 64.0;
                    }
                    onSelect = (System_Action_int__o *)0x0;
                    System_Nullable_float____ctor
                              ((System_Nullable_float__o *)&onSelect,8.0,
                               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                    if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    local_110 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                          (pGVar13,(UnityEngine_Transform_o *)parent,pSVar14,fVar33,fVar34,
                                           false,(System_Nullable_float__o)onSelect,(MethodInfo *)0x0);
                    if (icons != (System_String_array *)0x0) {
                      pGVar13 = (__this->fields)._view;
                      if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_181dd9c80;
                      pUVar22 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                          (pGVar13,local_110,"inGamePickerPreview",fVar1,fVar1,false,
                                           (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
                      pGVar13 = (__this->fields)._view;
                      if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_181dd9c80;
                      __this_03 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
                                            (pGVar13,pUVar22,fVar1,fVar1,(MethodInfo *)0x0);
                      if ((uint)icons->max_length <= local_res18[0]) goto label_181dd9caa;
                      pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                      pSVar26 = icons->m_Items[(int)local_res18[0]];
                      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                      }
                      pUVar19 = (UnityEngine_Texture_o *)
                                ApplicationManagers_ResourceManager__LoadAsset
                                          (pSVar14,pSVar26,true,(MethodInfo *)0x0);
                      if (__this_03 == (UnityEngine_UI_RawImage_o *)0x0) goto label_181dd9c80;
                      pUVar29 = pUVar30;
                      if ((pUVar19 != (UnityEngine_Texture_o *)0x0) &&
                         (pUVar19->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
                        pUVar29 = pUVar19;
                      }
                      UnityEngine_UI_RawImage__set_texture(__this_03,pUVar29,(MethodInfo *)0x0);
                      pUVar19 = (__this_03->fields).m_Texture;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar16 = UnityEngine_Object__op_Equality
                                         ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (bVar16) {
                        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
                           (pUVar25 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0),
                           pUVar25 == (UnityEngine_GameObject_o *)0x0)) goto label_181dd9c80;
                        UnityEngine_GameObject__SetActive(pUVar25,false,(MethodInfo *)0x0);
                      }
                    }
                    pUVar22 = local_110;
                    if ((uint)local_res20->max_length <= local_res18[0]) goto label_181dd9caa;
                    pGVar13 = (__this->fields)._view;
                    pSVar14 = local_res20->m_Items[(int)local_res18[0]];
                    pSVar26 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                    variant = 0;
                    if (local_res18[0] != uVar17) {
                      variant = 3;
                    }
                    if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_181dd9c80;
                    __this_04 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                          (pGVar13,pUVar22,pSVar14,"ingame.character.picker.select",pSVar26,fVar33 - 12.0
                                           ,48.0,variant,(MethodInfo *)0x0);
                    if (tooltips != (System_String_array *)0x0) {
                      uVar4 = (uint)tooltips->max_length;
                      if ((int)local_res18[0] < (int)uVar4) {
                        if (uVar4 <= local_res18[0]) {
label_181dd9caa:
                          ThrowIndexOutOfRangeException();
                        }
                        bVar16 = System_String__IsNullOrEmpty
                                           (tooltips->m_Items[(int)local_res18[0]],(MethodInfo *)0x0);
                        if (!bVar16) {
                          if ((__this_04 == (UnityEngine_UI_Button_o *)0x0) ||
                             (pUVar25 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
                             pUVar25 == (UnityEngine_GameObject_o *)0x0)) goto label_181dd9c80;
                          pUVar27 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar25,(MethodInfo_6F4D60 *)
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip
                                              );
                          if ((uint)tooltips->max_length <= local_res18[0]) goto label_181dd9caa;
                          if (pUVar27 == (UI_HoverTooltip_o *)0x0) goto label_181dd9c80;
                          pSVar14 = tooltips->m_Items[(int)local_res18[0]];
                          (pUVar27->fields).Message = pSVar14;
                          Il2CppCodeGenWriteBarrier(&(pUVar27->fields).Message,pSVar14);
                          value = (UI_TooltipPopup_o *)(__this->fields)._skillTooltip;
                          (pUVar27->fields).PopupOverride = value;
                          Il2CppCodeGenWriteBarrier(&(pUVar27->fields).PopupOverride,value);
                        }
                      }
                    }
                    local_res18[0] = local_res18[0] + 1;
                    pUVar19 = (UnityEngine_Texture_o *)(ulonglong)local_res18[0];
                  }
                  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
                  pUVar9 = (__this->fields)._scroll;
                  if (pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    pUVar25 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar25,(MethodInfo *)0x0);
                    pUVar9 = (__this->fields)._scroll;
                    if (pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar9,1.0,(MethodInfo *)0x0);
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
  }
label_181dd9c80:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Select
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Select (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x181dd84b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd85fa: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x181dd85ff: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Select
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  System_String_array *pSVar2;
  Settings_TypedSetting_T__o *__this_00;
  System_Action_int__o *pSVar3;
  
  if ((__this->fields)._options == (System_String_array *)0x0) {
    return;
  }
  if (index < 0) {
    return;
  }
  pSVar2 = (__this->fields)._options;
  if ((int)pSVar2->max_length <= index) {
    return;
  }
  __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
  if (Il2CppMethodInitialized_184344a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344a7e = '\x01';
  }
  if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,index,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      goto label_181dd85ce;
    }
  }
  if ((uint)pSVar2->max_length <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  Settings_TypedSetting_object___set_Value
            (__this_00,(Il2CppObject *)pSVar2->m_Items[index],
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
label_181dd85ce:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  pSVar3 = (__this->fields)._onSelect;
  if (pSVar3 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,index,(pSVar3->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$GetIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex (Settings_BaseSetting_o* setting, System_String_array* options, const MethodInfo* method);
// 0x181dd83c0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                  (Settings_BaseSetting_o *setting,System_String_array *options,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184344a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344a7d = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = setting->klass;
  bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
     ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    return *(int32_t *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
  }
  bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
     ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    iVar3 = System_Array__IndexOf_object_
                      ((System_Object_array *)options,(*(uint64_t *)((char *)setting + 0x20)),
                       (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
    return iVar3;
  }
  il2cpp_codegen_raise_invalid_cast_exception(setting);
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$SetIndex
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex (Settings_BaseSetting_o* setting, System_String_array* options, int32_t index, const MethodInfo* method);
// 0x181dd8630

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex
               (Settings_BaseSetting_o *setting,System_String_array *options,int32_t index,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_184344a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344a7e = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)setting,index,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  if (options != (System_String_array *)0x0) {
    if ((uint)options->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)options->m_Items[index],
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup___ctor (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup___ctor(Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


