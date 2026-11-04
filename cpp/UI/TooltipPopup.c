// Type: UI.TooltipPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/TooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// --------------------------------

// UI.TooltipPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_TooltipPopup__get_EscapeBehavior (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_TooltipPopup__get_EscapeBehavior(UI_TooltipPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.TooltipPopup$$get_AnimationTime
// il2cpp: float UI_TooltipPopup__get_AnimationTime (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e5490

float UI_TooltipPopup__get_AnimationTime(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 0.15;
}


// UI.TooltipPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_TooltipPopup__get_PopupAnimationType (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_TooltipPopup__get_PopupAnimationType(UI_TooltipPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.TooltipPopup$$HideWithin
// il2cpp: void UI_TooltipPopup__HideWithin (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x1821e49a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e4b03: sub edi, 1
// asm:   0x1821e4b06: js 0x1821e4b14
// asm:   0x1821e4b08: mov rcx, qword ptr [rip + 0x1e9ec91]  ; TypeInfo_UI_TooltipPopup
// asm:   0x1821e4b0f: jmp 0x1821e4a32

void UI_TooltipPopup__HideWithin(UnityEngine_Transform_o *root,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_TooltipPopup__o *pSVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this;
  bool bVar2;
  UI_TooltipPopup_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f60 = '\x01';
  }
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  pSVar1 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  if (pSVar1 == (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
label_1821e4b29:
    ThrowNullReferenceException();
  }
  index = (pSVar1->fields)._size;
joined_r0x0001821e4a2c:
  index = index + -1;
  if (index < 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_TooltipPopup)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  pSVar1 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  if (((pSVar1 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) &&
      (__this_00 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_TooltipPopup_get_Item),
      __this_00 != (UI_TooltipPopup_o *)0x0)) &&
     (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    bVar2 = UnityEngine_Transform__IsChildOf(pUVar3,root,(MethodInfo *)0x0);
    if (!bVar2) goto code_r0x0001821e4a99;
    goto label_1821e4af0;
  }
  goto label_1821e4b29;
code_r0x0001821e4a99:
  x = (UnityEngine_Object_o *)(__this_00->fields).Caller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this = (__this_00->fields).Caller;
    if ((__this == (UnityEngine_Component_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_1821e4b29;
    bVar2 = UnityEngine_Transform__IsChildOf(pUVar3,root,(MethodInfo *)0x0);
    if (bVar2) {
label_1821e4af0:
      (*(__this_00->klass->vtable)._58_HideImmediate.methodPtr)
                (__this_00,(__this_00->klass->vtable)._58_HideImmediate.method);
    }
  }
  goto joined_r0x0001821e4a2c;
}


// UI.TooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_TooltipPopup__get_TextColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e54d0

System_String_o * UI_TooltipPopup__get_TextColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipTextColor");
    Il2CppMethodInitialized_184346f61 = '\x01';
  }
  return "TooltipTextColor";
}


// UI.TooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_TooltipPopup__get_BackgroundColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e54a0

System_String_o * UI_TooltipPopup__get_BackgroundColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipBackgroundColor");
    Il2CppMethodInitialized_184346f62 = '\x01';
  }
  return "TooltipBackgroundColor";
}


// UI.TooltipPopup$$Setup
// il2cpp: void UI_TooltipPopup__Setup (UI_TooltipPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821e4df0

void UI_TooltipPopup__Setup(UI_TooltipPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Label");
    Il2CppMethodInitialized_184346f63 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._label = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar2);
      pUVar2 = (__this->fields)._label;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (pUVar2->klass->vtable)._75_set_text.method);
        pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            (__this->fields)._panel = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._panel,pUVar3);
            pUVar2 = (__this->fields)._label;
            pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            pSVar5 = (*(__this->klass->vtable)._62_get_TextColor.methodPtr)
                               (__this,(__this->klass->vtable)._62_get_TextColor.method);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar6 = UI_UIManager__GetThemeColor
                               ((UnityEngine_Color_o *)&local_18,pSVar4,"DefaultSetting",pSVar5,
                                "DefaultPanel",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
              local_18.r = (pUVar6->fields).r;
              local_18.g = (pUVar6->fields).g;
              local_18.b = (pUVar6->fields).b;
              local_18.a = (pUVar6->fields).a;
              (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                        (pUVar2,(UnityEngine_Color_o *)&local_18,(pUVar2->klass->vtable)._23_set_color.method)
              ;
              pUVar3 = (__this->fields)._panel;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar3,"Background",(MethodInfo *)0x0)
                ;
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar7 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar1,
                                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image
                                     );
                  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  pSVar5 = (*(__this->klass->vtable)._63_get_BackgroundColor.methodPtr)
                                     (__this,(__this->klass->vtable)._63_get_BackgroundColor.method);
                  pUVar6 = UI_UIManager__GetThemeColor
                                     ((UnityEngine_Color_o *)&local_18,pSVar4,"DefaultSetting",pSVar5,
                                      "DefaultPanel",(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                    local_18.r = (pUVar6->fields).r;
                    local_18.g = (pUVar6->fields).g;
                    local_18.b = (pUVar6->fields).b;
                    local_18.a = (pUVar6->fields).a;
                    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                              (pUVar7,(UnityEngine_Color_o *)&local_18,
                               (pUVar7->klass->vtable)._23_set_color.method);
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
// 0x1821e50d0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e533d: lea rax, [r8 + 4]
// asm:   0x1821e5341: mov qword ptr [rdx + r8*8 + 0x20], rbx
// asm:   0x1821e5346: lea rcx, [rdx + rax*8]
// asm:   0x1821e534a: mov rdx, rbx
// asm:   0x1821e534d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1821e5352: jmp 0x1821e5316

void UI_TooltipPopup__Show
               (UI_TooltipPopup_o *__this,System_String_o *message,UnityEngine_Component_o *caller,
               float offset,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_Collections_Generic_List_TooltipPopup__o *pSVar4;
  UI_TooltipPopup_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  UI_BasePopup_array *callerPopups;
  UnityEngine_GameObject_o *__this_00;
  float alpha;
  
  if (Il2CppMethodInitialized_184346f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInParent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TooltipPopup_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f64 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)caller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    callerPopups = (UI_BasePopup_array *)0x0;
  }
  else {
    if (caller == (UnityEngine_Component_o *)0x0) goto label_1821e5354;
    callerPopups = (UI_BasePopup_array *)
                   UnityEngine_Component__GetComponentsInParent_object__665520
                             (caller,(MethodInfo_665520 *)
                                     MethodInfo_UnityEngine_Component_GetComponentsInParent_BasePopup);
  }
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  bVar7 = UI_TooltipPopup__CanShow(caller,callerPopups,(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar7 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar7) {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      alpha = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
      UI_BasePopup__SetTransformAlpha((UI_BasePopup_o *)__this,alpha,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields)._label;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,message,(pUVar3->klass->vtable)._75_set_text.method);
      (__this->fields).Caller = caller;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Caller,caller);
      (__this->fields)._callerPopups = callerPopups;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._callerPopups,callerPopups);
      (__this->fields)._offset = offset;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)0x0);
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
      }
      pSVar4 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
      if (pSVar4 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
        bVar7 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                           (MethodInfo_93FC70 *)
                           MethodInfo_System_Collections_Generic_List_TooltipPopup_Contains);
        if (bVar7) {
          return;
        }
        if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
        }
        pMVar6 = MethodInfo_System_Collections_Generic_List_TooltipPopup_Add;
        pSVar4 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
        if (pSVar4 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (pSVar4->fields)._items;
          if (pUVar5 != (UI_TooltipPopup_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if ((uint)pUVar5->max_length <= uVar2) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                         (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
              return;
            }
            (pSVar4->fields)._size = uVar2 + 1;
            if (uVar2 < (uint)pUVar5->max_length) {
              pUVar5->m_Items[(int)uVar2] = __this;
              Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,__this);
              return;
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_1821e5354:
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$SetTooltipPosition
// il2cpp: void UI_TooltipPopup__SetTooltipPosition (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e4bf0

void UI_TooltipPopup__SetTooltipPosition(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  undefined8 uVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184346f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346f65 = '\x01';
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar7 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar7 = pUVar3;
    }
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    pUVar7 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar7 = pUVar3;
    }
    UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar7,(MethodInfo *)0x0);
    fVar10 = (__this->fields)._offset;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (__this->fields).Caller;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      fVar11 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
      pUVar5 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        fVar11 = (UVar4.fields.x * 0.5 + fVar10) * fVar11;
        pUVar6 = UnityEngine_Transform__get_position(&local_58,pUVar5,(MethodInfo *)0x0);
        fVar10 = (pUVar6->fields).x;
        uVar1._0_4_ = (pUVar6->fields).y;
        uVar1._4_4_ = (pUVar6->fields).z;
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        if ((float)iVar2 < fVar10 + fVar11) {
          fVar10 = fVar10 - fVar11;
        }
        else {
          fVar10 = fVar10 + fVar11;
        }
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          local_58.fields._4_8_ = uVar1;
          pUVar6 = UnityEngine_Transform__get_position(local_48,pUVar5,(MethodInfo *)0x0);
          fVar8 = (pUVar6->fields).x - fVar10;
          fVar9 = (pUVar6->fields).y - local_58.fields.y;
          fVar11 = (pUVar6->fields).z - local_58.fields.z;
          if (9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11) {
            pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821e4dd5;
            local_58.fields.x = fVar10;
            local_58.fields._4_8_ = uVar1;
            UnityEngine_Transform__set_position(pUVar5,&local_58,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_1821e4dd5:
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$Update
// il2cpp: void UI_TooltipPopup__Update (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e5360

void UI_TooltipPopup__Update(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *caller;
  UI_BasePopup_array *callerPopups;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f66 = '\x01';
  }
  caller = (__this->fields).Caller;
  callerPopups = (__this->fields)._callerPopups;
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  bVar1 = UI_TooltipPopup__CanShow(caller,callerPopups,(MethodInfo *)0x0);
  if (bVar1) {
    UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)0x0);
    return;
  }
  (*(__this->klass->vtable)._58_HideImmediate.methodPtr)
            (__this,(__this->klass->vtable)._58_HideImmediate.method);
  return;
}


// UI.TooltipPopup$$OnDisable
// il2cpp: void UI_TooltipPopup__OnDisable (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e4b30

void UI_TooltipPopup__OnDisable(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TooltipPopup__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TooltipPopup_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f67 = '\x01';
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  __this_00 = TypeInfo_UI_TooltipPopup->static_fields->Visible;
  if (__this_00 != (System_Collections_Generic_List_TooltipPopup__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_TooltipPopup_Remove);
    (__this->fields).Caller = (UnityEngine_Component_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Caller,(void *)0x0);
    (__this->fields)._callerPopups = (UI_BasePopup_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._callerPopups,(void *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$CanShow
// il2cpp: bool UI_TooltipPopup__CanShow (UnityEngine_Component_o* caller, UI_BasePopup_array* callerPopups, const MethodInfo* method);
// 0x1821e4880

bool UI_TooltipPopup__CanShow
               (UnityEngine_Component_o *caller,UI_BasePopup_array *callerPopups,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f68 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)caller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if ((caller != (UnityEngine_Component_o *)0x0) &&
     (__this = UnityEngine_Component__get_gameObject(caller,(MethodInfo *)0x0),
     __this != (UnityEngine_GameObject_o *)0x0)) {
    bVar3 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if (((bVar1 <= (caller->klass->_2).typeHierarchyDepth) &&
        ((caller->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) &&
       (bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          ((UnityEngine_Behaviour_o *)caller,(MethodInfo *)0x0), !bVar3)) {
      return false;
    }
    if (callerPopups != (UI_BasePopup_array *)0x0) {
      uVar2 = (uint)callerPopups->max_length;
      uVar4 = 0;
      while( true ) {
        if ((int)uVar2 <= (int)uVar4) {
          return true;
        }
        if (uVar2 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if (callerPopups->m_Items[(int)uVar4] == (UI_BasePopup_o *)0x0) break;
        if ((callerPopups->m_Items[(int)uVar4]->fields).IsActive == false) {
          return false;
        }
        uVar4 = uVar4 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.TooltipPopup$$.ctor
// il2cpp: void UI_TooltipPopup___ctor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_TooltipPopup___ctor(UI_TooltipPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.TooltipPopup$$.cctor
// il2cpp: void UI_TooltipPopup___cctor (const MethodInfo* method);
// 0x1821e5400

void UI_TooltipPopup___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_TooltipPopup__o *__this;
  
  if (Il2CppMethodInitialized_184346f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TooltipPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TooltipPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_TooltipPopup_ctor);
  TypeInfo_UI_TooltipPopup->static_fields->Visible = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_TooltipPopup->static_fields->Visible,__this);
  return;
}


