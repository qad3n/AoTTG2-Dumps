// Type: UI.TooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/TooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// --------------------------------

// UI.TooltipPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_TooltipPopup__get_EscapeBehavior (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8230

int32_t UI_TooltipPopup__get_EscapeBehavior(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.TooltipPopup$$get_AnimationTime
// il2cpp: float UI_TooltipPopup__get_AnimationTime (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8240

float UI_TooltipPopup__get_AnimationTime(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 0.15;
}


// UI.TooltipPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_TooltipPopup__get_PopupAnimationType (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8250

int32_t UI_TooltipPopup__get_PopupAnimationType(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.TooltipPopup$$HideWithin
// il2cpp: void UI_TooltipPopup__HideWithin (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5cb6c90
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb6cca: jmp 0x5cb6e43
// asm:   0x5cb6d41: lea r13, [rip + 0x15e03e8]  ; MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Item
// asm:   0x5cb6d48: jmp 0x5cb6d6b
// asm:   0x5cb6d63: dec ebp
// asm:   0x5cb6d65: js 0x5cb6e34
// asm:   0x5cb6e2f: jmp 0x5cb6d63

void UI_TooltipPopup__HideWithin(UnityEngine_Transform_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  int index;
  System_Collections_Generic_List_TooltipPopup__o *pSVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this;
  bool bVar3;
  UI_TooltipPopup_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b5a = '\x01';
    uVar1 = (TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
    pSVar2 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_TooltipPopup__o **)
              ((Il2CppClass *)TypeInfo_UI_TooltipPopup)->static_fields;
  }
  if (pSVar2 == (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
label_05cb6e43:
    ThrowNullReferenceException();
  }
  index = (pSVar2->fields)._size;
joined_r0x05cb6d3b:
  index = index + -1;
  if (index < 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_TooltipPopup)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  pSVar2 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  if (((pSVar2 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) &&
      (__this_00 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Item),
      __this_00 != (UI_TooltipPopup_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    bVar3 = UnityEngine_Transform__IsChildOf(pUVar4,root,(MethodInfo *)0x0);
    if (!bVar3) goto code_r0x05cb6dcf;
    goto label_05cb6d50;
  }
  goto label_05cb6e43;
code_r0x05cb6dcf:
  x = (UnityEngine_Object_o *)(__this_00->fields).Caller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this = (__this_00->fields).Caller;
    if ((__this == (UnityEngine_Component_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05cb6e43;
    bVar3 = UnityEngine_Transform__IsChildOf(pUVar4,root,(MethodInfo *)0x0);
    if (bVar3) {
label_05cb6d50:
      (*(__this_00->klass->vtable)._58_HideImmediate.methodPtr)
                (__this_00,(__this_00->klass->vtable)._58_HideImmediate.method);
    }
  }
  goto joined_r0x05cb6d3b;
}


// UI.TooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_TooltipPopup__get_TextColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8260

System_String_o * UI_TooltipPopup__get_TextColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipTextColor");
    Il2CppMethodInitialized_07547b5b = '\x01';
  }
  return "TooltipTextColor";
}


// UI.TooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_TooltipPopup__get_BackgroundColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8290

System_String_o * UI_TooltipPopup__get_BackgroundColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipBackgroundColor");
    Il2CppMethodInitialized_07547b5c = '\x01';
  }
  return "TooltipBackgroundColor";
}


// UI.TooltipPopup$$Setup
// il2cpp: void UI_TooltipPopup__Setup (UI_TooltipPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc82c0

void UI_TooltipPopup__Setup(UI_TooltipPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Label");
    Il2CppMethodInitialized_07547b5d = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._label = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
      pUVar2 = (__this->fields)._label;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                   (pUVar2->klass->vtable)._75_set_text.method);
        pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            targetAddress = &(__this->fields)._panel;
            (__this->fields)._panel = pUVar3;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar2 = (__this->fields)._label;
            pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            pSVar5 = (*(__this->klass->vtable)._62_get_TextColor.methodPtr)
                               (__this,(__this->klass->vtable)._62_get_TextColor.method);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UVar7 = UI_UIManager__GetThemeColor
                              (pSVar4,"DefaultSetting",pSVar5,"DefaultPanel",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                        (pUVar2,UVar7,(pUVar2->klass->vtable)._23_set_color.method);
              pUVar3 = *targetAddress;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar3,"Background",(MethodInfo *)0x0)
                ;
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar6 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar1,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Image);
                  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  pSVar5 = (*(__this->klass->vtable)._63_get_BackgroundColor.methodPtr)
                                     (__this,(__this->klass->vtable)._63_get_BackgroundColor.method);
                  UVar7 = UI_UIManager__GetThemeColor
                                    (pSVar4,"DefaultSetting",pSVar5,"DefaultPanel",
                                     (MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                              (pUVar6,UVar7,(pUVar6->klass->vtable)._23_set_color.method);
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


// UI.TooltipPopup$$Show
// il2cpp: void UI_TooltipPopup__Show (UI_TooltipPopup_o* __this, System_String_o* message, UnityEngine_Component_o* caller, float offset, const MethodInfo* method);
// 0x5cbef00

void UI_TooltipPopup__Show
               (UI_TooltipPopup_o *__this,System_String_o *message,UnityEngine_Component_o *caller,
               float offset,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_Collections_Generic_List_TooltipPopup__o *pSVar4;
  UI_TooltipPopup_array *pUVar5;
  bool bVar6;
  UI_BasePopup_array *callerPopups;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar7;
  float value;
  
  if (Il2CppMethodInitialized_07547b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInParent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TooltipPopup_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b5e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  callerPopups = (UI_BasePopup_array *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)caller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = extraout_RDX;
  if (!bVar6) {
    if (caller == (UnityEngine_Component_o *)0x0) goto label_05cbf1cc;
    callerPopups = (UI_BasePopup_array *)
                   UnityEngine_Component__GetComponentsInParent_object__34b1480
                             (caller,(MethodInfo_34B1480 *)
                                     MethodInfo_UnityEngine_Component_GetComponentsInParent_BasePopup);
    pMVar7 = extraout_RDX_00;
  }
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
    pMVar7 = extraout_RDX_01;
  }
  bVar6 = UI_TooltipPopup__CanShow(caller,callerPopups,pMVar7);
  if (!bVar6) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar6) {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      value = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
      if (Il2CppMethodInitialized_07547ad7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup)
        ;
        Il2CppMethodInitialized_07547ad7 = '\x01';
      }
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
         (__this_02 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
         __this_02 == (UnityEngine_CanvasGroup_o *)0x0)) goto label_05cbf1cc;
      UnityEngine_CanvasGroup__set_alpha(__this_02,value,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields)._label;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,message,(pUVar3->klass->vtable)._75_set_text.method);
      (__this->fields).Caller = caller;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Caller);
      (__this->fields)._callerPopups = callerPopups;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._callerPopups);
      (__this->fields)._offset = offset;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)callerPopups);
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)callerPopups);
      if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
      }
      pSVar4 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
      if (pSVar4 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
        bVar6 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                           (MethodInfo_395D6D0 *)
                           MethodInfo_System_Collections_Generic_List_TooltipPopup_Contains);
        if (bVar6) {
          return;
        }
        if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_TooltipPopup_Add;
        pSVar4 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
        if (pSVar4 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (pSVar4->fields)._items;
          if (pUVar5 != (UI_TooltipPopup_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2] = __this;
              Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
              return;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            return;
          }
        }
      }
    }
  }
label_05cbf1cc:
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$SetTooltipPosition
// il2cpp: void UI_TooltipPopup__SetTooltipPosition (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc86a0

void UI_TooltipPopup__SetTooltipPosition(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  undefined8 local_48;
  
  if (Il2CppMethodInitialized_07547b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547b5f = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    if (__this_01->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    fVar4 = (__this->fields)._offset;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (__this->fields).Caller;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      fVar4 = (fVar4 + UVar1.fields.x * 0.5) * TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
      pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar7 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        local_48._0_4_ = UVar7.fields.x;
        local_48._4_4_ = UVar7.fields.y;
        if ((float)iVar2 < fVar4 + (float)local_48) {
          local_48._0_4_ = (float)local_48 - fVar4;
        }
        else {
          local_48._0_4_ = (float)local_48 + fVar4;
        }
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          fVar4 = UVar8.fields.y - local_48._4_4_;
          fVar5 = UVar8.fields.z - UVar7.fields.z;
          fVar6 = UVar8.fields.x - (float)local_48;
          if (fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11) {
            return;
          }
          pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar7.fields.x = (float)local_48;
            UVar7.fields.y = local_48._4_4_;
            UnityEngine_Transform__set_position(pUVar3,UVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$Update
// il2cpp: void UI_TooltipPopup__Update (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8850

void UI_TooltipPopup__Update(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *caller;
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UI_BasePopup_array *callerPopups;
  
  if (Il2CppMethodInitialized_07547b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b60 = '\x01';
    in_RDX = extraout_RDX;
  }
  caller = (__this->fields).Caller;
  callerPopups = (__this->fields)._callerPopups;
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = UI_TooltipPopup__CanShow(caller,callerPopups,in_RDX);
  if (bVar1) {
    UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)callerPopups);
    return;
  }
  (*(__this->klass->vtable)._58_HideImmediate.methodPtr)
            (__this,(__this->klass->vtable)._58_HideImmediate.method);
  return;
}


// UI.TooltipPopup$$OnDisable
// il2cpp: void UI_TooltipPopup__OnDisable (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc88e0

void UI_TooltipPopup__OnDisable(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TooltipPopup__o *__this_00;
  
  if (Il2CppMethodInitialized_07547b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b61 = '\x01';
  }
  (__this->fields).IsActive = false;
  UI_BasePopup__HideTooltips((UI_BasePopup_o *)__this,method);
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  __this_00 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  if (__this_00 == (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_TooltipPopup_Remove);
  (__this->fields).Caller = (UnityEngine_Component_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Caller);
  (__this->fields)._callerPopups = (UI_BasePopup_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callerPopups);
  return;
}


// UI.TooltipPopup$$CanShow
// il2cpp: bool UI_TooltipPopup__CanShow (UnityEngine_Component_o* caller, UI_BasePopup_array* callerPopups, const MethodInfo* method);
// 0x5cc8580

bool UI_TooltipPopup__CanShow
               (UnityEngine_Component_o *caller,UI_BasePopup_array *callerPopups,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this;
  int iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547b62 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)caller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if ((caller == (UnityEngine_Component_o *)0x0) ||
     (__this = UnityEngine_Component__get_gameObject(caller,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) {
label_05cc8692:
    ThrowNullReferenceException();
  }
  bVar5 = false;
  bVar3 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
  if (bVar3) {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if (((bVar1 <= (caller->klass->_2).typeHierarchyDepth) &&
        ((caller->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)
        ) && (bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                                ((UnityEngine_Behaviour_o *)caller,(MethodInfo *)0x0), !bVar3)) {
      return false;
    }
    if (callerPopups == (UI_BasePopup_array *)0x0) goto label_05cc8692;
    iVar2 = (int)callerPopups->max_length;
    if (iVar2 < 1) {
      bVar5 = true;
    }
    else {
      iVar4 = 0;
      do {
        if (callerPopups->m_Items[iVar4] == (UI_BasePopup_o *)0x0) goto label_05cc8692;
        bVar3 = (callerPopups->m_Items[iVar4]->fields).IsActive;
      } while ((bVar3 != false) && (bVar5 = iVar2 + -1 != iVar4, iVar4 = iVar4 + 1, bVar5));
      bVar5 = bVar3 != false;
    }
  }
  return bVar5;
}


// UI.TooltipPopup$$.ctor
// il2cpp: void UI_TooltipPopup___ctor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8220

void UI_TooltipPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


// UI.TooltipPopup$$.cctor
// il2cpp: void UI_TooltipPopup___cctor (const MethodInfo* method);
// 0x5cc89a0

void UI_TooltipPopup___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_TooltipPopup__o *__this;
  
  if (Il2CppMethodInitialized_07547b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TooltipPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b63 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TooltipPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_TooltipPopup_ctor);
  TypeInfo_UI_TooltipPopup->static_fields->Visible = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_TooltipPopup->static_fields->Visible);
  return;
}


