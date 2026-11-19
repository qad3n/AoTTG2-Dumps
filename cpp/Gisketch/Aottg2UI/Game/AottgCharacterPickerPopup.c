// Type: Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterPickerPopup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Width
// il2cpp: float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Width (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x58aeec0

float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Width
                (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  return 1120.0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Height
// il2cpp: float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Height (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x58aeed0

float Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_Height
                (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  return 820.0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_PopupAnimationType
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_PopupAnimationType (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x58aeee0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__get_PopupAnimationType
                  (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Setup (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x58aeef0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58af152: lea r14, [rbp + 0xc8]
// asm:   0x58af159: jmp 0x58af16d

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_c *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar7;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  TMPro_TMP_Text_o *pTVar8;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_ScrollRect_o *pUVar11;
  UI_SkillTooltipPopup_o *pUVar12;
  MethodInfo *pMVar13;
  MethodInfo *in_R9;
  UnityEngine_RectTransform_o **targetAddress;
  float fVar14;
  float fVar15;
  float headerHeight;
  float footerHeight;
  MethodInfo *in_stack_ffffffffffffff58;
  
  if (Il2CppMethodInitialized_07545324 == '\0') {
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
    Il2CppMethodInitialized_07545324 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pMVar13 = (MethodInfo *)0x0;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(pUVar5,pMVar13);
  pUVar6 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar14 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                     (__this,(__this->klass->vtable)._5_get_Width.method);
  fVar15 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar6->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
    }
    pMVar13 = (MethodInfo *)0x0;
    value.fields.y = fVar15;
    value.fields.x = fVar14;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
    pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar7,pMVar13);
    (__this->fields)._view = pGVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
    pGVar7 = (__this->fields)._view;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar14 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                       (__this,(__this->klass->vtable)._5_get_Width.method);
    fVar15 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                       (__this,(__this->klass->vtable)._6_get_Height.method);
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      pUVar6 = (UnityEngine_RectTransform_o *)
               Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                         (pGVar7,pUVar5,"inGamePauseDimOverlay",fVar14,fVar15,false,
                          (System_Nullable_float__o)0x0,in_R9);
      pUVar4 = TypeInfo_UnityEngine_RectTransform;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
        (__this->fields)._dim = (UnityEngine_RectTransform_o *)0x0;
      }
      else if ((pUVar6->klass != TypeInfo_UnityEngine_RectTransform) ||
              ((__this->fields)._dim = pUVar6, pUVar6->klass != pUVar4)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
      targetAddress = &(__this->fields)._dim;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if ((*targetAddress != (UnityEngine_RectTransform_o *)0x0) &&
         (__this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)*targetAddress,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_FlexLayout),
         __this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0)) {
        pMVar13 = (MethodInfo *)0x0;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
        pUVar6 = *targetAddress;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        Gisketch_Aottg2UI_Game_AottgInGameView__Position
                  ((UnityEngine_Transform_o *)pUVar6,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   pMVar13);
        pGVar7 = (__this->fields)._view;
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        fVar14 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                           (__this,(__this->klass->vtable)._5_get_Width.method);
        fVar15 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                           (__this,(__this->klass->vtable)._6_get_Height.method);
        headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                                 (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
        footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                                 (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
        if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          pMVar13 = (MethodInfo *)"inGameFooter";
          Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
                    (pGVar7,pUVar5,fVar14,fVar15,headerHeight,footerHeight,&(__this->fields).TopBar,
                     &(__this->fields).BottomBar,"inGameFooter",in_R9);
          pGVar7 = (__this->fields)._view;
          pUVar5 = (__this->fields).TopBar;
          fVar14 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                             (__this,(__this->klass->vtable)._5_get_Width.method);
          if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            pTVar8 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                               (pGVar7,pUVar5,"",fVar14 + -48.0,44.0,"inGameNeutralTitle",
                                pMVar13);
            (__this->fields)._title = pTVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
            pUVar5 = (__this->fields).BottomBar;
            pGVar7 = (__this->fields)._view;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            text = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
            if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgInGameView__Button
                        (pGVar7,pUVar5,text,"ingame.character.picker.back",(System_String_o *)0x0,220.0,44.0,3,
                         in_stack_ffffffffffffff58);
              pGVar7 = (__this->fields)._view;
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
              Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
              if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (__this_02->fields).type = "ScrollView";
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).type);
                (__this_02->fields).style = "clear";
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).style);
                fVar14 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                   (__this,(__this->klass->vtable)._5_get_Width.method);
                width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar14,(MethodInfo *)0x0);
                fVar14 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                                   (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
                height = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar14,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                (__this_02->fields).layout = pGVar9;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout);
                pMVar13 = (MethodInfo *)0x0;
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
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).contentLayout);
                if ((pGVar7 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
                   (pUVar10 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(pGVar7,pUVar5,__this_02,pMVar13),
                   pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar10,(MethodInfo_353B730 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
                  (__this->fields)._scroll = pUVar11;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll);
                  pUVar11 = (__this->fields)._scroll;
                  if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    pMVar13 = (MethodInfo *)0x0;
                    pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                      Il2CppMethodInitialized_0753ecc8 = '\x01';
                    }
                    Gisketch_Aottg2UI_Game_AottgInGameView__Position
                              (pUVar5,(UnityEngine_Vector2_o)
                                      (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,pMVar13
                              );
                    pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar10 = UI_ElementFactory__CreateTooltipPopup_object_
                                        (pUVar5,false,
                                         (MethodInfo_34D75C0 *)
                                         MethodInfo_UI_ElementFactory_CreateTooltipPopup_SkillTooltipPopup);
                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar10,(MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_SkillTooltipPopup
                                          );
                      (__this->fields)._skillTooltip = pUVar12;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._skillTooltip);
                      pMVar13 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
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
                            pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
                            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
                            return;
                          }
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pUVar12,
                                     (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, System_String_array* tooltips, System_Action_int__o* onSelect, float previewSize, System_String_array* labels, const MethodInfo* method);
// 0x58b08e0
// eh: try 0x58b0c70..0x58b1482 -> pad 0x58b149e (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58b14c0..0x58b14c5 -> pad 0x58b14ca cleanup
// eh: try 0x58b14cd..0x58b14da -> pad 0x58b14e2 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58b0f07: jmp 0x58b13ed
// asm:   0x58b124c: jmp 0x58b1252
// asm:   0x58b148a: mov rdi, r14
// asm:   0x58b148d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58b1492: jmp 0x58b14a0
// asm:   0x58b1494: jmp 0x58b14a0
// asm:   0x58b1496: jmp 0x58b14a0
// asm:   0x58b1498: jmp 0x58b14a0
// asm:   0x58b149a: jmp 0x58b14a0
// asm:   0x58b149c: jmp 0x58b14a0
// asm:   0x58b149e: jmp 0x58b14a0
// asm:   0x58b14a0: mov rbx, rax
// asm:   0x58b14a3: mov r15, qword ptr [rsp + 0x58]
// asm:   0x58b14a8: cmp edx, 1
// asm:   0x58b14ab: jne 0x58b14cd
// asm:   0x58b14ad: mov rdi, rbx
// asm:   0x58b14b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58b14b5: mov r14, qword ptr [rax]
// asm:   0x58b14b8: mov qword ptr [rsp + 0x98], r14
// asm:   0x58b14c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58b14c5: jmp 0x58b0e03
// asm:   0x58b14ca: mov rbx, rax
// asm:   0x58b14cd: lea rdi, [rsp + 0x98]
// asm:   0x58b14d5: call 0x2fcfd40  ; il2cpp_runtime_helper_02fcfd40()
// asm:   0x58b14da: mov rdi, rbx
// asm:   0x58b14dd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58b14e2: mov rdi, rax
// asm:   0x58b14e5: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,Settings_BaseSetting_o *setting,
               System_String_o *title,System_String_array *options,System_String_array *icons,
               System_String_array *tooltips,System_Action_int__o *onSelect,float previewSize,
               System_String_array *labels,MethodInfo *method)

{
  byte bVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar6;
  System_String_o *pSVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  int32_t iVar11;
  int iVar12;
  UnityEngine_Canvas_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  VirtualInvokeData *pVVar16;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar18;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  UnityEngine_Transform_o *parent;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_RawImage_o *__this_03;
  UnityEngine_Texture_o *pUVar20;
  System_String_o *pSVar21;
  UnityEngine_UI_Button_o *__this_04;
  UI_HoverTooltip_o *pUVar22;
  ulong uVar23;
  MethodInfo *pMVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  System_String_array *pSVar25;
  long lVar26;
  Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this_05;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  UnityEngine_Rect_o UVar30;
  UnityEngine_Vector3_o UVar31;
  MethodInfo *in_stack_fffffffffffffed8;
  uint local_d4;
  Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *local_d0;
  float local_c4;
  System_String_array *local_c0;
  Il2CppObject *local_b8;
  float local_ac;
  undefined1 local_a8 [12];
  float fStack_9c;
  Il2CppObject *local_98;
  System_Nullable_float__Fields local_90;
  Il2CppObject **local_88;
  Il2CppObject **local_80;
  undefined1 local_78 [12];
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  System_String_array *local_38;
  
  local_c4 = previewSize;
  local_c0 = options;
  local_38 = tooltips;
  if (Il2CppMethodInitialized_07545325 == '\0') {
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
    Il2CppMethodInitialized_07545325 = '\x01';
  }
  local_b8 = (Il2CppObject *)0x0;
  local_98 = (Il2CppObject *)0x0;
  local_d4 = 0;
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  (__this->fields)._options = local_c0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  pTVar2 = (__this->fields)._title;
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,title,(pTVar2->klass->vtable)._66_set_text.method);
    pUVar13 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    if (((pUVar13 != (UnityEngine_Canvas_o *)0x0) &&
        (pUVar13 = UnityEngine_Canvas__get_rootCanvas(pUVar13,(MethodInfo *)0x0),
        pUVar13 != (UnityEngine_Canvas_o *)0x0)) &&
       (pUVar14 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar14 != (UnityEngine_RectTransform_o *)0x0)) {
      if (pUVar14->klass != TypeInfo_UnityEngine_RectTransform) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar14);
      }
      __this_00 = (__this->fields)._dim;
      UVar30 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
      local_a8._8_4_ = in_XMM1_Dc;
      local_a8._0_8_ = UVar30.fields._8_8_;
      fStack_9c = (float)in_XMM1_Dd;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      UVar31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)pUVar14,(MethodInfo *)0x0);
      local_78._8_4_ = extraout_XMM0_Dc;
      local_78._0_8_ = UVar31.fields._0_8_;
      fStack_6c = (float)extraout_XMM0_Dd;
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
        UVar31 = UnityEngine_Transform__get_lossyScale(pUVar15,(MethodInfo *)0x0);
        local_48._8_4_ = extraout_XMM0_Dc_00;
        local_48._0_8_ = UVar31.fields._0_8_;
        local_48._12_4_ = extraout_XMM0_Dd_00;
        UVar30 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
        local_68._8_4_ = in_XMM1_Dc;
        local_68._0_8_ = UVar30.fields._8_8_;
        local_68._12_4_ = in_XMM1_Dd;
        UVar31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)pUVar14,(MethodInfo *)0x0);
        local_58._8_4_ = extraout_XMM0_Dc_01;
        local_58._0_8_ = UVar31.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd_01;
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          UVar31 = UnityEngine_Transform__get_lossyScale(pUVar15,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            auVar28._0_4_ = (float)local_78._0_4_ * (float)local_a8._0_4_;
            auVar28._4_4_ = (float)local_58._4_4_ * (float)local_68._4_4_;
            auVar28._8_4_ = (float)local_78._8_4_ * (float)local_a8._8_4_;
            auVar28._12_4_ = fStack_6c * fStack_9c;
            auVar29._4_4_ = UVar31.fields.y;
            auVar29._0_4_ = local_48._0_4_;
            auVar29._8_4_ = local_48._8_4_;
            auVar29._12_4_ = local_48._12_4_;
            auVar29 = divps(auVar28,auVar29);
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_00,(UnityEngine_Vector2_o)auVar29._0_8_,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._scroll;
            if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              local_a8._0_8_ = icons;
              pUVar14 = (pUVar3->fields).m_Content;
              local_d0 = __this;
              if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                local_b8 = (Il2CppObject *)
                           UnityEngine_Transform__GetEnumerator
                                     ((UnityEngine_Transform_o *)pUVar14,(MethodInfo *)0x0);
                local_90.hasValue = false;
                local_90._1_3_ = 0;
                local_90.value = 0.0;
                local_88 = &local_b8;
                local_80 = &local_98;
                do {
                  pIVar18 = local_b8;
                  if (local_b8 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar4 = local_b8->klass;
                  uVar23 = (ulong)(pIVar4->_2).interface_offsets_count;
                  if (uVar23 != 0) {
                    pIVar5 = (pIVar4->_1).interfaceOffsets;
                    lVar26 = 0;
                    do {
                      if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar26) ==
                          TypeInfo_System_Collections_IEnumerator) {
                        pVVar16 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar26);
                        goto label_058b0ce3;
                      }
                      lVar26 = lVar26 + 0x10;
                    } while (uVar23 * 0x10 != lVar26);
                  }
                  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_b8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058b0ce3:
                  bVar10 = (*pVVar16->methodPtr)(pIVar18,pVVar16->method);
                  pIVar18 = local_b8;
                  __this_05 = local_d0;
                  if (!bVar10) {
                    pIVar18 = il2cpp_vm_Object_IsInst(local_b8,(Il2CppClass *)TypeInfo_System_IDisposable);
                    pMVar24 = extraout_RDX;
                    local_98 = pIVar18;
                    if (pIVar18 == (Il2CppObject *)0x0) goto label_058b0e86;
                    pIVar4 = pIVar18->klass;
                    uVar23 = (ulong)(pIVar4->_2).interface_offsets_count;
                    if (uVar23 == 0) goto label_058b0e5f;
                    pIVar5 = (pIVar4->_1).interfaceOffsets;
                    lVar26 = 0;
                    goto label_058b0e50;
                  }
                  if (local_b8 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar4 = local_b8->klass;
                  uVar23 = (ulong)(pIVar4->_2).interface_offsets_count;
                  if (uVar23 != 0) {
                    pIVar5 = (pIVar4->_1).interfaceOffsets;
                    lVar26 = 0;
                    do {
                      if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar26) ==
                          TypeInfo_System_Collections_IEnumerator) {
                        pVVar16 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar26) + 1);
                        goto label_058b0d77;
                      }
                      lVar26 = lVar26 + 0x10;
                    } while (uVar23 * 0x10 != lVar26);
                  }
                  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_b8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058b0d77:
                  __this_01 = (UnityEngine_Component_o *)(*pVVar16->methodPtr)(pIVar18,pVVar16->method);
                  if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
                  if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                  }
                  pUVar17 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
                  obj = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto label_058b145c;
  while (lVar26 = lVar26 + 0x10, uVar23 * 0x10 != lVar26) {
label_058b0e50:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar26) == TypeInfo_System_IDisposable) {
      pVVar16 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar26);
      goto label_058b0e7d;
    }
  }
label_058b0e5f:
  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar18,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058b0e7d:
  (*pVVar16->methodPtr)(pIVar18,pVVar16->method);
  pMVar24 = extraout_RDX_00;
label_058b0e86:
  pSVar25 = local_c0;
  iVar11 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex(setting,local_c0,pMVar24);
  local_48._0_4_ = iVar11;
  uVar9 = local_a8._0_8_;
  bVar10 = local_a8._0_8_ != 0;
  fVar27 = (*(__this_05->klass->vtable)._5_get_Width.methodPtr)
                     (__this_05,(__this_05->klass->vtable)._5_get_Width.method);
  local_d4 = 0;
  if (pSVar25 != (System_String_array *)0x0) {
    if (uVar9 == 0) {
      local_78._0_4_ = 0x42500000;
      iVar12 = (int)local_c0->max_length;
    }
    else {
      local_78._0_4_ = local_c4 + 64.0;
      iVar12 = (int)local_c0->max_length;
    }
    if (0 < iVar12) {
      iVar12 = (uint)bVar10 * 3 + 2;
      local_58._0_4_ = iVar12;
      local_ac = ((float)(byte)(bVar10 * '\x03' + 1) * -16.0 + fVar27 + -48.0) / (float)iVar12;
      local_68._0_4_ = local_ac;
      local_ac = local_ac + -12.0;
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      do {
        if ((int)local_d4 % (int)local_58._0_4_ == 0) {
          pUVar3 = (__this_05->fields)._scroll;
          if (pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_058b145c;
          pGVar6 = (__this_05->fields)._view;
          pUVar14 = (pUVar3->fields).m_Content;
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058b145c;
          (__this_02->fields).type = "Panel";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).type);
          (__this_02->fields).style = "clear";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).style);
          in_stack_fffffffffffffed8 = (MethodInfo *)0x0;
          pMVar24 = (MethodInfo *)0x0;
          tooltips = (System_String_array *)0x0;
          pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_02->fields).layout = pGVar19;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout);
          if ((pGVar6 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) ||
             (pUVar17 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                  (pGVar6,(UnityEngine_Transform_o *)pUVar14,__this_02,pMVar24),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_058b145c;
          pUVar15 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
        }
        pSVar7 = "inGameRow";
        pGVar6 = (__this_05->fields)._view;
        local_90.hasValue = false;
        local_90._1_3_ = 0;
        local_90.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_90,8.0,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_058b145c;
        parent = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                           (pGVar6,pUVar15,pSVar7,(float)local_68._0_4_,(float)local_78._0_4_,false,
                            (System_Nullable_float__o)local_90,(MethodInfo *)tooltips);
        if (local_a8._0_8_ != 0) {
          pGVar6 = (__this_05->fields)._view;
          if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_058b145c;
          parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                (pGVar6,parent,"inGamePickerPreview",local_c4,local_c4,false,
                                 (System_Nullable_float__o)0x0,(MethodInfo *)tooltips);
          pGVar6 = (__this_05->fields)._view;
          if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_058b145c;
          __this_03 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
                                (pGVar6,parent_00,local_c4,local_c4,method_00);
          if (*(uint *)(local_a8._0_8_ + 0x18) <= local_d4) goto label_058b1469;
          pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          pSVar21 = *(System_String_o **)(local_a8._0_8_ + 0x20 + (long)(int)local_d4 * 8);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar20 = (UnityEngine_Texture_o *)
                    ApplicationManagers_ResourceManager__LoadAsset
                              (pSVar7,pSVar21,true,false,(MethodInfo *)0x0);
          __this_05 = local_d0;
          if (__this_03 == (UnityEngine_UI_RawImage_o *)0x0) goto label_058b145c;
          if (pUVar20 == (UnityEngine_Texture_o *)0x0) {
            pUVar20 = (UnityEngine_Texture_o *)0x0;
          }
          else if (pUVar20->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar20 = (UnityEngine_Texture_o *)0x0;
          }
          UnityEngine_UI_RawImage__set_texture(__this_03,pUVar20,(MethodInfo *)0x0);
          pUVar20 = (__this_03->fields).m_Texture;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar10) {
            if ((parent_00 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)parent_00,(MethodInfo *)0x0),
               pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_058b145c;
            UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
          }
        }
        pGVar6 = (__this_05->fields)._view;
        pSVar25 = labels;
        if (labels == (System_String_array *)0x0) {
          pSVar25 = local_c0;
        }
        if ((uint)pSVar25->max_length <= local_d4) goto label_058b1469;
        pSVar7 = pSVar25->m_Items[(int)local_d4];
        pSVar21 = System_Int32__ToString((int32_t *)&local_d4,(MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_058b145c;
        uVar8 = (uint)(local_d4 != local_48._0_4_) * 3;
        tooltips = (System_String_array *)(ulong)uVar8;
        __this_04 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                              (pGVar6,parent,pSVar7,"ingame.character.picker.select",pSVar21,local_ac,48.0,uVar8,
                               in_stack_fffffffffffffed8);
        pSVar25 = local_38;
        if (local_38 != (System_String_array *)0x0) {
          uVar8 = (uint)local_38->max_length;
          if ((int)local_d4 < (int)uVar8) {
            if (uVar8 <= local_d4) {
label_058b1469:
              ThrowIndexOutOfRangeException();
            }
            bVar10 = System_String__IsNullOrEmpty(local_38->m_Items[(int)local_d4],(MethodInfo *)0x0);
            if (!bVar10) {
              if ((__this_04 == (UnityEngine_UI_Button_o *)0x0) ||
                 (pUVar17 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
                 pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_058b145c;
              pUVar22 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar17,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
              if ((uint)pSVar25->max_length <= local_d4) goto label_058b1469;
              if (pUVar22 == (UI_HoverTooltip_o *)0x0) goto label_058b145c;
              (pUVar22->fields).Message = pSVar25->m_Items[(int)local_d4];
              Il2CppCodeGenWriteBarrier(&(pUVar22->fields).Message);
              (pUVar22->fields).PopupOverride = (UI_TooltipPopup_o *)(__this_05->fields)._skillTooltip;
              Il2CppCodeGenWriteBarrier(&(pUVar22->fields).PopupOverride);
            }
          }
        }
        local_d4 = local_d4 + 1;
      } while ((int)local_d4 < (int)local_c0->max_length);
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this_05,(MethodInfo *)0x0);
    pUVar3 = (__this_05->fields)._scroll;
    if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar17,(MethodInfo *)0x0);
      pUVar3 = (__this_05->fields)._scroll;
      if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar3,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_058b145c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Select
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Select (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x58b1780

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Select
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,int32_t index,MethodInfo *method)

{
  System_String_array *options;
  System_Action_int__o *pSVar1;
  code *vtableDispatch;
  MethodInfo *in_RCX;
  
  options = (__this->fields)._options;
  if (((options != (System_String_array *)0x0) && (-1 < index)) && (index < (int)options->max_length)) {
    Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex((__this->fields)._setting,options,index,in_RCX)
    ;
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    pSVar1 = (__this->fields)._onSelect;
    if (pSVar1 != (System_Action_int__o *)0x0) {
      vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar1->fields).method_code,index,(pSVar1->fields).method,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$GetIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex (Settings_BaseSetting_o* setting, System_String_array* options, const MethodInfo* method);
// 0x58b14f0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                  (Settings_BaseSetting_o *setting,System_String_array *options,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07545326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545326 = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = setting->klass;
  bVar1 = (pSVar3->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    return *(int32_t *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
  }
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    il2cpp_codegen_raise_invalid_cast_exception(setting);
  }
  iVar4 = System_Array__IndexOf_object_
                    ((System_Object_array *)options,(*(uint64_t *)((char *)setting + 0x20)),
                     (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  return iVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$SetIndex
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex (Settings_BaseSetting_o* setting, System_String_array* options, int32_t index, const MethodInfo* method);
// 0x58b17f0

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex
               (Settings_BaseSetting_o *setting,System_String_array *options,int32_t index,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07545327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545327 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting))
    {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)setting,index,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  if (options != (System_String_array *)0x0) {
    if ((uint)options->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)options->m_Items[index],
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup___ctor (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* __this, const MethodInfo* method);
// 0x58b18f0

void Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


