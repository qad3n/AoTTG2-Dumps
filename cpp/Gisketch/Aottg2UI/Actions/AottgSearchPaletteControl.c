// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchPaletteControl.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b235d0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_<>c__DisplayClass21_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_0$$<WireResults>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___WireResults_b__1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b24200

bool_conflict
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_<>c__DisplayClass21_0__<WireResults>b__1
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o *__this,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar3;
  undefined8 extraout_RAX;
  float fVar4;
  float fVar5;
  undefined8 in_XMM1_Qa;
  undefined4 uVar6;
  UnityEngine_Vector3_o UVar7;
  
  uVar6 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pGVar3 = (__this->fields).__4__this;
  UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception(UVar7.fields._0_8_,CONCAT44(uVar6,UVar7.fields.z));
  }
  if (*(char *)((long)&(pGVar3->fields)._hasAnimatedResults + 1) != '\0') {
    uVar1 = (pGVar3->fields)._pointerSelectionLocked;
    uVar2 = (pGVar3->fields)._pointerLockPosition.fields.x;
    fVar4 = UVar7.fields.x - (float)uVar1;
    fVar5 = UVar7.fields.y - (float)uVar2;
    if (fVar5 * fVar5 + fVar4 * fVar4 < 4.0) {
      return 0;
    }
    *(undefined1 *)((long)&(pGVar3->fields)._hasAnimatedResults + 1) = 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x3b236b0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_<>c__DisplayClass21_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_1$$<WireResults>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___WireResults_b__0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x3b24250

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_<>c__DisplayClass21_1__<WireResults>b__0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(__this->fields).CS___8__locals1;
  if ((method_00 == (MethodInfo *)0x0) ||
     (__this_01 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)method_00->invoker_method
     , __this_01 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)method_00->name;
  entry = (__this->fields).result;
  if (DAT_05701589 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701589 = '\x01';
  }
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField ==
            (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
                  (__this_01,root,0,method_00);
        __this_00 = (root->fields)._Theme_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,
                     (MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,method_01);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, TMPro_TMP_InputField_o* input, UnityEngine_UI_Button_o* submit, const MethodInfo* method);
// 0x3b21a70

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               TMPro_TMP_InputField_o *input,UnityEngine_UI_Button_o *submit,MethodInfo *method)

{
  TMPro_TMP_InputField_o **ppTVar1;
  UnityEngine_UI_Button_o **ppUVar2;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  UnityEngine_UI_Button_o *x_00;
  UnityEngine_Events_UnityEvent_o *__this_02;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_T0__o *pUVar4;
  UnityEngine_Events_UnityAction_o *call;
  
  if (DAT_0570157d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_ActivateSelected);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_1);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_0570157d = '\x01';
  }
  ppTVar1 = &(__this->fields)._input;
  (__this->fields)._input = input;
  il2cpp_runtime_glue(ppTVar1,input);
  ppUVar2 = &(__this->fields)._submit;
  (__this->fields)._submit = submit;
  il2cpp_runtime_glue(ppUVar2);
  x = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b21c86;
    __this_00 = ((*ppTVar1)->fields).m_OnEndTextSelection;
    pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto LAB_03b21c86;
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar4,MethodInfo_Void_AddListener);
    if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b21c86;
    __this_01 = ((*ppTVar1)->fields).m_OnEndEdit;
    pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_01 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto LAB_03b21c86;
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar4,MethodInfo_Void_AddListener);
  }
  x_00 = *ppUVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (*ppUVar2 != (UnityEngine_UI_Button_o *)0x0) {
    __this_02 = (UnityEngine_Events_UnityEvent_o *)((*ppUVar2)->fields).m_CanvasGroupCache;
    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03b21c86:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b21c90

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  long lVar4;
  UnityEngine_GameObject_o *selected;
  
  if (DAT_0570157e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570157e = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      if (DAT_057015b9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
        DAT_057015b9 = '\x01';
      }
      if (DAT_0570136d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
        DAT_0570136d = '\x01';
      }
      lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (DAT_057015f6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
          DAT_057015f6 = '\x01';
          lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        }
        *(undefined4 *)(lVar4 + 0x18) = 0;
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
        }
      }
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      pTVar1 = (__this->fields)._input;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        selected = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                    (pUVar3,selected,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._input;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            (*(pTVar1->klass->vtable)._38_Select.methodPtr)();
            pTVar1 = (__this->fields)._input;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$FocusInput
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b21ca0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  long lVar4;
  UnityEngine_GameObject_o *selected;
  
  if (DAT_0570157e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570157e = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      if (DAT_057015b9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
        DAT_057015b9 = '\x01';
      }
      if (DAT_0570136d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
        DAT_0570136d = '\x01';
      }
      lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (DAT_057015f6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
          DAT_057015f6 = '\x01';
          lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        }
        *(undefined4 *)(lVar4 + 0x18) = 0;
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
        }
      }
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      pTVar1 = (__this->fields)._input;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        selected = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                    (pUVar3,selected,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._input;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            (*(pTVar1->klass->vtable)._38_Select.methodPtr)();
            pTVar1 = (__this->fields)._input;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b21e60

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  float fVar1;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  UnityEngine_Object_o *y;
  int iVar6;
  int iVar7;
  MethodInfo *method_00;
  
  if (DAT_0570157f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570157f = '\x01';
  }
  pTVar2 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) ||
         (pTVar2 = (__this->fields)._input, pTVar2 == (TMPro_TMP_InputField_o *)0x0)) {
LAB_03b22040:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x = (UnityEngine_Object_o *)(pUVar5->fields).m_CurrentSelected;
      y = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        method_00 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          method_00 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            fVar1 = (__this->fields)._pointerLockPosition.fields.y;
            if (DAT_05701586 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
              DAT_05701586 = '\x01';
            }
            pSVar3 = (__this->fields)._results;
            if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
            goto LAB_03b22040;
            iVar7 = (pSVar3->fields)._size;
            iVar6 = 8;
            if (iVar7 < 9) {
              iVar6 = iVar7;
            }
            if (iVar6 != 0) {
              iVar7 = (int)fVar1 + -1;
              goto LAB_03b22017;
            }
          }
        }
        else {
          fVar1 = (__this->fields)._pointerLockPosition.fields.y;
          if (DAT_05701586 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
            DAT_05701586 = '\x01';
          }
          pSVar3 = (__this->fields)._results;
          if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
          goto LAB_03b22040;
          iVar7 = (pSVar3->fields)._size;
          iVar6 = 8;
          if (iVar7 < 9) {
            iVar6 = iVar7;
          }
          if (iVar6 != 0) {
            iVar7 = (int)fVar1 + 1;
LAB_03b22017:
            (__this->fields)._pointerLockPosition.fields.y =
                 (float)((iVar7 % iVar6 + iVar6) % iVar6);
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,method_00);
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                      (__this,method_00);
            return;
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b220c0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._pointerLockPosition.fields.y = 0.0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (int)UVar1.fields._0_8_;
  (__this->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b220f0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o **ppSVar1;
  float fVar2;
  int iVar3;
  TMPro_TMP_InputField_o *pTVar4;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  float fVar6;
  bool_conflict bVar7;
  float fVar8;
  UnityEngine_EventSystems_EventSystem_o *pUVar9;
  long lVar10;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  float *pfVar11;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  MethodInfo *pMVar13;
  UnityEngine_GameObject_o *pUVar14;
  int iVar15;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05701580 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"search-palette-results");
    DAT_05701580 = '\x01';
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
         UnityEngine_Component__GetComponentInParent<object>
                   ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_03b2235f;
    if (((root->fields)._Manifest_k__BackingField !=
         (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       ((root->fields)._Theme_k__BackingField != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
    {
      pTVar4 = (__this->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pfVar11 = *(float **)(DAT_057110b0 + 0xb8);
      }
      else {
        pTVar4 = (__this->fields)._input;
        if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b2235f;
        pfVar11 = &(pTVar4->fields).m_SelectionColor.fields.a;
      }
      value = *(System_String_o **)pfVar11;
      pMVar13 = (MethodInfo *)0x0;
      bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pSVar12 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries(root,pMVar13);
        pSVar12 = Gisketch_Aottg2UI_Search_GisketchSearchService__Query
                            ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                             pSVar12,value,(MethodInfo *)0x0);
        ppSVar1 = &(__this->fields)._results;
        (__this->fields)._results = pSVar12;
        il2cpp_runtime_glue(ppSVar1,pSVar12);
        pSVar12 = (__this->fields)._results;
        if (pSVar12 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          if ((pSVar12->fields)._size == 0)
          goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput;
          fVar2 = (__this->fields)._pointerLockPosition.fields.y;
          pMVar13 = extraout_RDX;
          if (DAT_05701586 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
            DAT_05701586 = '\x01';
            pSVar12 = *ppSVar1;
            pMVar13 = extraout_RDX_00;
            if (pSVar12 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
            goto LAB_03b2235f;
          }
          iVar3 = (pSVar12->fields)._size;
          iVar15 = 8;
          if (iVar3 < 9) {
            iVar15 = iVar3;
          }
          fVar6 = (float)(iVar15 + -1);
          if ((int)fVar2 <= iVar15 + -1) {
            fVar6 = fVar2;
          }
          fVar8 = 0.0;
          if (-1 < (int)fVar2) {
            fVar8 = fVar6;
          }
          (__this->fields)._pointerLockPosition.fields.y = fVar8;
          bVar7 = (__this->fields)._hasAnimatedResults;
          *(undefined1 *)&(__this->fields)._hasAnimatedResults = 1;
          pGVar5 = (root->fields)._Manifest_k__BackingField;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
            __this_00 = (root->fields)._Theme_k__BackingField;
            root_00 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
                                (__this,(System_String_o *)(pGVar5->fields).dialogs,pMVar13);
            pMVar13 = (MethodInfo *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              pUVar14 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,
                                   "search-palette-results",root_00,(UnityEngine_GameObject_o *)pMVar13,0,1,0.0,
                                   (uint)((char)bVar7 == '\0'),(MethodInfo *)0x0);
              (__this->fields)._popoverContent = pUVar14;
              il2cpp_runtime_glue(&(__this->fields)._popoverContent,pUVar14);
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
                        (__this,(__this->fields)._popoverContent,root,pMVar13);
              return;
            }
          }
        }
LAB_03b2235f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput:
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,0,in_RCX);
      if (DAT_0570157e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_EventSystem);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_0570157e = '\x01';
      }
      pTVar4 = (__this->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          if (DAT_057015b9 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
            DAT_057015b9 = '\x01';
          }
          if (DAT_0570136d == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
            DAT_0570136d = '\x01';
          }
          lVar10 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          if (*(int *)(lVar10 + 0x18) != 0) {
            if (DAT_057015f6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
              DAT_057015f6 = '\x01';
              lVar10 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
            }
            *(undefined4 *)(lVar10 + 0x18) = 0;
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
            }
          }
          if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          pTVar4 = (__this->fields)._input;
          if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
            pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar4,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                        (pUVar9,pUVar14,(MethodInfo *)0x0);
              pTVar4 = (__this->fields)._input;
              if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
                (*(pTVar4->klass->vtable)._38_Select.methodPtr)();
                pTVar4 = (__this->fields)._input;
                if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__ActivateInputField(pTVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ActivateSelected
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b23150

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  float fVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float index;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  
  if (DAT_05701581 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchEntry_get_Item);
    DAT_05701581 = '\x01';
  }
  __this_01 = (__this->fields)._results;
  if (__this_01 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if ((__this_01->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
      __this_01 = (__this->fields)._results;
      if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
      goto LAB_03b23202;
    }
    iVar1 = (__this_01->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    fVar2 = (__this->fields)._pointerLockPosition.fields.y;
    method_00 = (MethodInfo *)(ulong)(uint)fVar2;
    fVar3 = (float)(iVar1 - 1);
    if ((int)fVar2 <= (int)fVar3) {
      fVar3 = fVar2;
    }
    index = 0.0;
    if (-1 < (int)fVar2) {
      index = fVar3;
    }
    entry = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_01,(int32_t)index,
                       MethodInfo_GisketchSearchEntry_get_Item);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_Component__GetComponentInParent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    if (DAT_05701589 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05701589 = '\x01';
    }
    if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar4 == '\0') {
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((root->fields)._Theme_k__BackingField ==
              (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            return;
          }
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,0,method_00)
          ;
          __this_00 = (root->fields)._Theme_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,
                       (MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,method_01);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return;
  }
LAB_03b23202:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultsNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b22580

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          System_String_o *activeScreenId,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *in_RCX;
  int iVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar7;
  
  if (DAT_05701582 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"search-palette-results");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"popover");
    DAT_05701582 = '\x01';
  }
  if (DAT_05701586 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05701586 = '\x01';
    pSVar2 = (__this->fields)._results;
  }
  else {
    pSVar2 = (__this->fields)._results;
  }
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    iVar5 = 8;
    if (iVar1 < 9) {
      iVar5 = iVar1;
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
    if (0 < iVar1) {
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                  (__this,0,activeScreenId,in_RCX);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      ppGVar7 = pGVar3->m_Items;
      pMVar6 = (MethodInfo *)0x0;
      do {
        pGVar4 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                           (__this,(int32_t)pMVar6,activeScreenId,in_RCX);
        in_RCX = (MethodInfo *)(ulong)(uint)pGVar3->max_length;
        if (in_RCX <= pMVar6) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *ppGVar7 = pGVar4;
        il2cpp_runtime_glue(ppGVar7);
        pMVar6 = (MethodInfo *)((long)&pMVar6->methodPointer + 1);
        ppGVar7 = ppGVar7 + 1;
      } while ((long)pMVar6 < (long)iVar5);
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).type = "Panel";
      il2cpp_runtime_glue(&pGVar4->fields);
      (pGVar4->fields).id = "search-palette-results";
      il2cpp_runtime_glue(&(pGVar4->fields).id);
      (pGVar4->fields).style = "popover";
      il2cpp_runtime_glue(&(pGVar4->fields).style);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).direction = "Column";
        il2cpp_runtime_glue(&__this_00->fields);
        (__this_00->fields).alignItems = "Stretch";
        il2cpp_runtime_glue(&(__this_00->fields).alignItems);
        (__this_00->fields).gap = 0.0;
        (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_00;
        il2cpp_runtime_glue(&(pGVar4->fields).search,__this_00);
        (pGVar4->fields).deferredChildren = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).deferredChildren,pGVar3);
        return pGVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b232c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
          System_String_o *activeScreenId,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_06;
  int32_t local_24;
  
  local_24 = index;
  if (DAT_05701583 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchDefinition);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_init_method_metadata(&"slideDown");
    il2cpp_init_method_metadata(&"percent");
    il2cpp_init_method_metadata(&"search-results");
    il2cpp_init_method_metadata(&"searchResultItem");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"search-result-");
    DAT_05701583 = '\x01';
  }
  __this_00 = (__this->fields)._results;
  if (__this_00 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchSearchEntry_get_Item
                          );
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "Button";
      il2cpp_runtime_glue(&__this_02->fields);
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat("search-result-",pSVar1,(MethodInfo *)0x0);
      (__this_02->fields).id = pSVar1;
      il2cpp_runtime_glue(&(__this_02->fields).id,pSVar1);
      if (__this_01 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                           (__this_01,activeScreenId,(MethodInfo *)0x0);
        (__this_02->fields).text = pSVar1;
        il2cpp_runtime_glue(&(__this_02->fields).text,pSVar1);
        (__this_02->fields).icon = (__this_01->fields)._Icon_k__BackingField;
        il2cpp_runtime_glue(&(__this_02->fields).icon);
        *(undefined1 *)&(__this_02->fields).hasIcon = 1;
        (__this_02->fields).style = "searchResultItem";
        il2cpp_runtime_glue(&(__this_02->fields).style);
        __this_03 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchMotionDefinition);
        Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          (__this_03->fields).preset = "slideDown";
          il2cpp_runtime_glue(&__this_03->fields);
          (__this_03->fields).group = "search-results";
          il2cpp_runtime_glue(&(__this_03->fields).group);
          (__this_03->fields).duration = 0.12;
          (__this_03->fields).stagger = 0.025;
          (__this_03->fields).order = local_24;
          (__this_02->fields).motion = __this_03;
          il2cpp_runtime_glue(&(__this_02->fields).motion);
          __this_04 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                      il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
          __this_05 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
          Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_05,(MethodInfo *)0x0);
          if (__this_05 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            (__this_05->fields).value = 100.0;
            (__this_05->fields).unit = "percent";
            il2cpp_runtime_glue(&(__this_05->fields).unit);
            if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (__this_04->fields).width = __this_05;
              il2cpp_runtime_glue(&(__this_04->fields).width,__this_05);
              (__this_02->fields).search =
                   (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
              il2cpp_runtime_glue(&(__this_02->fields).search);
              __this_06 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
                          il2cpp_runtime_glue(TypeInfo_GisketchSearchDefinition);
              Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_06,(MethodInfo *)0x0);
              if (__this_06 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
                *(undefined1 *)((long)&(__this_06->fields).autoAddKeywords + 1) = 1;
                (__this_02->fields).popover = (System_String_o *)__this_06;
                il2cpp_runtime_glue(&(__this_02->fields).popover,__this_06);
                return __this_02;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WireResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b227f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_GameObject_o *content,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar5;
  TMPro_TMP_InputField_o *pTVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar7;
  long lVar8;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  void *pvVar11;
  System_Object_array *pSVar12;
  undefined8 uVar13;
  System_String_o *query;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool_conflict bVar24;
  Il2CppObject *pIVar25;
  float *pfVar26;
  Il2CppObject *pIVar27;
  Il2CppClass *pIVar28;
  UnityEngine_Transform_o *pUVar29;
  System_String_o *pSVar30;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar31;
  System_String_o *pSVar32;
  MethodInfo *pMVar33;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  void **ppvVar34;
  UnityEngine_Object_o *pUVar35;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_02;
  float fVar36;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  UnityEngine_Color_o UVar42;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  Il2CppClass *local_70;
  UnityEngine_GameObject_o *local_68;
  System_String_o *local_60;
  System_String_o *local_58;
  System_String_o *local_50;
  System_String_o *local_48;
  System_String_o *local_40;
  Il2CppObject *local_38;
  
  if (DAT_05701584 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
    il2cpp_init_method_metadata(&TypeInfo_Func_bool);
    il2cpp_init_method_metadata(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSea);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__WireResults_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__WireResults_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_1);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"search-result-");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"negativeText");
    DAT_05701584 = '\x01';
  }
  local_bc = 0.0;
  pIVar25 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar25,(MethodInfo *)0x0);
  fVar36 = local_98;
  fVar37 = fStack_94;
  uVar39 = uStack_90;
  uVar41 = uStack_8c;
  fVar14 = local_88;
  fVar15 = fStack_84;
  uVar16 = uStack_80;
  uVar17 = uStack_7c;
  if (pIVar25 == (Il2CppObject *)0x0) goto LAB_03b23132;
  pIVar25[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar25 + 1,__this);
  ppvVar34 = &pIVar25[1].monitor;
  pIVar25[1].monitor = root;
  il2cpp_runtime_glue(ppvVar34);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar24 != '\0') {
    return;
  }
  pSVar5 = (__this->fields)._feedback;
  fVar36 = local_98;
  fVar37 = fStack_94;
  uVar39 = uStack_90;
  uVar41 = uStack_8c;
  fVar14 = local_88;
  fVar15 = fStack_84;
  uVar16 = uStack_80;
  uVar17 = uStack_7c;
  if (pSVar5 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
  goto LAB_03b23132;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar5->fields)._size;
  (pSVar5->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  pTVar6 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar24 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar30 = "text";
  if ((char)bVar24 == '\0') {
    pfVar26 = *(float **)(DAT_057110b0 + 0xb8);
  }
  else {
    pTVar6 = (__this->fields)._input;
    fVar36 = local_98;
    fVar37 = fStack_94;
    uVar39 = uStack_90;
    uVar41 = uStack_8c;
    fVar14 = local_88;
    fVar15 = fStack_84;
    uVar16 = uStack_80;
    uVar17 = uStack_7c;
    if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b23132;
    pfVar26 = &(pTVar6->fields).m_SelectionColor.fields.a;
  }
  local_40 = *(System_String_o **)pfVar26;
  pUVar35 = *ppvVar34;
  if (DAT_05701585 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701585 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar24 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar36 = local_98;
  fVar37 = fStack_94;
  uVar39 = uStack_90;
  uVar41 = uStack_8c;
  fVar14 = local_88;
  fVar15 = fStack_84;
  uVar16 = uStack_80;
  uVar17 = uStack_7c;
  if ((char)bVar24 == '\0') {
LAB_03b22a84:
    pUVar35 = *ppvVar34;
    fVar18 = 1.0;
    fVar19 = 1.0;
    fVar20 = 1.0;
    fVar21 = 1.0;
    uVar22 = 0;
    uVar38 = 0;
    uVar23 = 0;
    uVar40 = 0;
    pSVar30 = "negativeText";
  }
  else {
    if (pUVar35 == (UnityEngine_Object_o *)0x0) goto LAB_03b23132;
    pGVar7 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar35[6].fields.m_CachedPtr;
    if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto LAB_03b22a84;
    uVar38 = DAT_00ccd980._8_4_;
    uVar40 = DAT_00ccd980._12_4_;
    uVar13 = DAT_00ccd980;
    UVar42.fields.b = (float)(int)uVar13;
    UVar42.fields.a = (float)(int)((ulong)uVar13 >> 0x20);
    UVar42.fields.r = (float)(int)uVar13;
    UVar42.fields.g = (float)(int)((ulong)uVar13 >> 0x20);
    UVar42 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (pGVar7,pSVar30,UVar42,(MethodInfo *)0x0);
    pUVar35 = *ppvVar34;
    fVar18 = UVar42.fields.r;
    fVar19 = UVar42.fields.b;
    fVar20 = UVar42.fields.g;
    fVar21 = UVar42.fields.a;
    uVar22 = extraout_XMM0_Dc;
    uVar23 = extraout_XMM0_Dd;
    pSVar30 = "negativeText";
    fVar36 = local_98;
    fVar37 = fStack_94;
    uVar39 = uStack_90;
    uVar41 = uStack_8c;
    fVar14 = local_88;
    fVar15 = fStack_84;
    uVar16 = uStack_80;
    uVar17 = uStack_7c;
  }
  uStack_8c = uVar40;
  uStack_7c = uVar23;
  uStack_90 = uVar38;
  uStack_80 = uVar22;
  fStack_94 = fVar21;
  fStack_84 = fVar20;
  local_98 = fVar19;
  local_88 = fVar18;
  "negativeText" = pSVar30;
  if (pUVar35 != (UnityEngine_Object_o *)0x0) {
    lVar8 = pUVar35[6].fields.m_CachedPtr;
    local_b8 = local_88;
    fStack_b4 = fStack_84;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    if ((lVar8 == 0) ||
       (fVar36 = local_98, fVar37 = fStack_94, uStack_a0 = uStack_90, uStack_9c = uStack_8c,
       *(char *)(lVar8 + 0x2c) == '\0')) {
      if (DAT_05701585 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05701585 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar24 = UnityEngine_Object__op_Inequality
                         (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_88 = 1.0;
      fStack_84 = 1.0;
      uStack_80 = 0;
      uStack_7c = 0;
      fVar36 = local_88;
      fVar37 = fStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      if (((char)bVar24 != '\0') &&
         (pGVar7 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar35[6].fields.m_CachedPtr,
         pGVar7 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
        uVar39 = DAT_00ccd980._8_4_;
        uVar41 = DAT_00ccd980._12_4_;
        uVar13 = DAT_00ccd980;
        fallback.fields.b = (float)(int)uVar13;
        fallback.fields.a = (float)(int)((ulong)uVar13 >> 0x20);
        fallback.fields.r = (float)(int)uVar13;
        fallback.fields.g = (float)(int)((ulong)uVar13 >> 0x20);
        UVar42 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           (pGVar7,pSVar30,fallback,(MethodInfo *)0x0);
        local_88 = UVar42.fields.r;
        fStack_84 = UVar42.fields.g;
        uStack_80 = extraout_XMM0_Dc_00;
        uStack_7c = extraout_XMM0_Dd_00;
        fVar36 = UVar42.fields.b;
        fVar37 = UVar42.fields.a;
        uStack_a0 = uVar39;
        uStack_9c = uVar41;
      }
    }
    local_a8 = (UnityEngine_Transform_o *)CONCAT44(fVar37,fVar36);
    color.fields.g = fStack_b4;
    color.fields.r = local_b8;
    color.fields.a = fStack_94;
    color.fields.b = local_98;
    local_48 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar37 = fStack_94 * 0.75;
    fVar36 = 1.0;
    if (fVar37 <= 1.0) {
      fVar36 = fVar37;
    }
    color_00.fields.g = fStack_b4;
    color_00.fields.r = local_b8;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar37) & (uint)fVar36);
    color_00.fields.b = local_98;
    local_50 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_84;
    color_01.fields.r = local_88;
    color_01.fields._8_8_ = local_a8;
    local_58 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar37 = local_a8._4_4_ * 0.75;
    fVar36 = 1.0;
    if (fVar37 <= 1.0) {
      fVar36 = fVar37;
    }
    color_02.fields.g = fStack_84;
    color_02.fields.r = local_88;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar37) & (uint)fVar36);
    color_02.fields.b = (float)(undefined4)local_a8;
    local_60 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (DAT_05701586 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05701586 = '\x01';
    }
    pSVar9 = (__this->fields)._results;
    fVar36 = local_98;
    fVar37 = fStack_94;
    uVar39 = uStack_90;
    uVar41 = uStack_8c;
    fVar14 = local_88;
    fVar15 = fStack_84;
    uVar16 = uStack_80;
    uVar17 = uStack_7c;
    if (pSVar9 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      fVar36 = (float)(pSVar9->fields)._size;
      local_98 = 1.12104e-44;
      if ((int)fVar36 < 9) {
        local_98 = fVar36;
      }
      local_bc = 0.0;
      if (0 < (int)fVar36) {
        uStack_80 = (undefined4)local_a8;
        uStack_7c = local_a8._4_4_;
        local_70 = (Il2CppClass *)__this;
        local_68 = content;
        local_38 = pIVar25;
        do {
          pIVar27 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_1);
          System_Object___ctor(pIVar27,(MethodInfo *)0x0);
          fVar36 = local_98;
          fVar37 = fStack_94;
          uVar39 = uStack_90;
          uVar41 = uStack_8c;
          fVar14 = local_88;
          fVar15 = fStack_84;
          uVar16 = uStack_80;
          uVar17 = uStack_7c;
          if (pIVar27 == (Il2CppObject *)0x0) goto LAB_03b23132;
          ppvVar34 = &pIVar27[1].monitor;
          pIVar27[1].monitor = pIVar25;
          il2cpp_runtime_glue(ppvVar34,pIVar25);
          pSVar10 = (((Il2CppClass *)__this)->_1).this_arg.data;
          fVar36 = local_98;
          fVar37 = fStack_94;
          uVar39 = uStack_90;
          uVar41 = uStack_8c;
          fVar14 = local_88;
          fVar15 = fStack_84;
          uVar16 = uStack_80;
          uVar17 = uStack_7c;
          if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03b23132;
          local_b8 = local_bc;
          pIVar28 = (Il2CppClass *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar10,(int32_t)local_bc,MethodInfo_GisketchSearchEntry_get_Item);
          pIVar25 = pIVar27 + 1;
          pIVar27[1].klass = pIVar28;
          il2cpp_runtime_glue(pIVar25);
          fVar36 = local_98;
          fVar37 = fStack_94;
          uVar39 = uStack_90;
          uVar41 = uStack_8c;
          fVar14 = local_88;
          fVar15 = fStack_84;
          uVar16 = uStack_80;
          uVar17 = uStack_7c;
          if (content == (UnityEngine_GameObject_o *)0x0) goto LAB_03b23132;
          pUVar29 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
          pSVar30 = System_Int32__ToString((int32_t)&local_bc,(MethodInfo *)0x0);
          pSVar30 = System_String__Concat("search-result-",pSVar30,(MethodInfo *)0x0);
          pUVar29 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep
                              (pUVar29,pSVar30,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          local_a8 = pUVar29;
          bVar24 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          pUVar35 = (UnityEngine_Object_o *)0x0;
          if ((char)bVar24 != '\0') {
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (local_a8 == (UnityEngine_Transform_o *)0x0) goto LAB_03b23132;
            pUVar35 = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)local_a8,MethodInfo_Button_GetComponent_Button);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar24 = UnityEngine_Object__op_Inequality
                             (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar24 != '\0') {
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (pUVar35 == (UnityEngine_Object_o *)0x0) goto LAB_03b23132;
            __this_00 = (UnityEngine_Events_UnityEvent_o *)pUVar35[10].fields.m_CachedPtr;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03b23132;
            UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar29 = local_a8;
          bVar24 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)local_a8,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          __this_02 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
          if ((char)bVar24 != '\0') {
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto LAB_03b23132;
            __this_02 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar29,MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar24 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar24 != '\0') {
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if ((((*ppvVar34 == (void *)0x0) ||
                 (lVar8 = *(long *)((long)*ppvVar34 + 0x18), lVar8 == 0)) ||
                (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) ||
               (pIVar25->klass == (Il2CppClass *)0x0)) goto LAB_03b23132;
            pMVar33 = *(MethodInfo **)(lVar8 + 0x30);
            pSVar30 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,
                                 (System_String_o *)pMVar33,(MethodInfo *)0x0);
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
            goto LAB_03b23132;
            *(ulong *)&(__this_02->fields)._hoverBg.fields.a = CONCAT44(fStack_84,local_88);
            (__this_02->fields)._hoverText.fields.g = (float)uStack_80;
            (__this_02->fields)._hoverText.fields.b = (float)uStack_7c;
            Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar33);
            pvVar11 = *ppvVar34;
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (pvVar11 == (void *)0x0) goto LAB_03b23132;
            pSVar31 = *(System_Func_bool__o **)((long)pvVar11 + 0x20);
            if (pSVar31 == (System_Func_bool__o *)0x0) {
              pSVar31 = (System_Func_bool__o *)il2cpp_runtime_glue(TypeInfo_Func_bool);
              System_Func<bool>___ctor();
              *(System_Func_bool__o **)((long)pvVar11 + 0x20) = pSVar31;
              il2cpp_runtime_glue((long)pvVar11 + 0x20,pSVar31);
            }
            (__this_02->fields)._pointerHoverAllowed = pSVar31;
            il2cpp_runtime_glue(&(__this_02->fields)._pointerHoverAllowed,pSVar31);
            query = local_40;
            pSVar32 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
                                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,
                                 local_40,0,local_48,pSVar30,local_50,(MethodInfo *)0x0);
            pMVar33 = (MethodInfo *)
                      Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
                                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,
                                 query,1,local_58,pSVar30,local_60,(MethodInfo *)0x0);
            if (pSVar32 == (System_String_o *)0x0) {
              pSVar32 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            ppSVar2 = &(__this_02->fields)._normalLabelText;
            (__this_02->fields)._normalLabelText = pSVar32;
            il2cpp_runtime_glue(ppSVar2,pSVar32);
            content = local_68;
            pIVar28 = local_70;
            if (pMVar33 == (MethodInfo *)0x0) {
              pMVar33 = (MethodInfo *)*ppSVar2;
            }
            (__this_02->fields)._activeLabelText = (System_String_o *)pMVar33;
            il2cpp_runtime_glue(&(__this_02->fields)._activeLabelText);
            *(undefined1 *)&(__this_02->fields)._normalLabelOwnsColor = 1;
            Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar33);
            *(bool *)((long)&(__this_02->fields)._hovered + 2) =
                 local_b8 == *(float *)((long)&(pIVar28->_1).declaringType + 4);
            Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar33);
            pUVar29 = local_a8;
          }
          pIVar25 = local_38;
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)local_70;
          lVar8 = MethodInfo_Void_Add;
          pSVar10 = *(System_Collections_Generic_List_object__o **)&(local_70->_1).this_arg.bits;
          fVar36 = local_98;
          fVar37 = fStack_94;
          uVar39 = uStack_90;
          uVar41 = uStack_8c;
          fVar14 = local_88;
          fVar15 = fStack_84;
          uVar16 = uStack_80;
          uVar17 = uStack_7c;
          if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03b23132;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (pSVar10->fields)._items;
          if (pSVar12 == (System_Object_array *)0x0) goto LAB_03b23132;
          uVar4 = (pSVar10->fields)._size;
          if (uVar4 < (uint)pSVar12->max_length) {
            (pSVar10->fields)._size = uVar4 + 1;
            pSVar12->m_Items[(int)uVar4] = (Il2CppObject *)__this_02;
            il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar4);
            iVar3 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar10,(Il2CppObject *)__this_02,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            iVar3 = *(int *)(TypeInfo_Object + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_init_class();
          }
          bVar24 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar24 != '\0') {
            fVar36 = local_98;
            fVar37 = fStack_94;
            uVar39 = uStack_90;
            uVar41 = uStack_8c;
            fVar14 = local_88;
            fVar15 = fStack_84;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
            if (((pUVar29 == (UnityEngine_Transform_o *)0x0) ||
                (__this_01 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0),
                fVar36 = local_98, fVar37 = fStack_94, uVar39 = uStack_90, uVar41 = uStack_8c,
                fVar14 = local_88, fVar15 = fStack_84, uVar16 = uStack_80, uVar17 = uStack_7c,
                __this_01 == (UnityEngine_GameObject_o *)0x0)) ||
               (pIVar27 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSea),
               fVar36 = local_98, fVar37 = fStack_94, uVar39 = uStack_90, uVar41 = uStack_8c,
               fVar14 = local_88, fVar15 = fStack_84, uVar16 = uStack_80, uVar17 = uStack_7c,
               pIVar27 == (Il2CppObject *)0x0)) goto LAB_03b23132;
            pIVar27[2].klass = (Il2CppClass *)__this;
            il2cpp_runtime_glue(pIVar27 + 2);
            *(float *)&pIVar27[2].monitor = local_b8;
          }
          local_bc = (float)((int)local_bc + 1);
        } while ((int)local_bc < (int)local_98);
      }
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
      return;
    }
  }
LAB_03b23132:
  uStack_7c = uVar17;
  uStack_80 = uVar16;
  fStack_84 = fVar15;
  local_88 = fVar14;
  uStack_8c = uVar41;
  uStack_90 = uVar39;
  fStack_94 = fVar37;
  local_98 = fVar36;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b22050

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  int iVar3;
  int32_t iVar4;
  undefined4 in_register_00000034;
  
  iVar4 = index;
  if (DAT_05701586 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05701586 = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (pSVar2->fields)._size;
  iVar3 = 8;
  if (iVar1 < 9) {
    iVar3 = iVar1;
  }
  if (iVar3 != 0) {
    (__this->fields)._pointerLockPosition.fields.y = (float)((index % iVar3 + iVar3) % iVar3);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar4));
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar4));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b23d50

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar4;
  int iVar5;
  int32_t iVar6;
  undefined4 in_register_00000034;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 in_XMM1_Qa;
  undefined4 uVar11;
  undefined8 uVar10;
  UnityEngine_Vector3_o UVar12;
  
  uVar11 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  iVar6 = index;
  UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  uVar10 = CONCAT44(uVar11,UVar12.fields.z);
  uVar8 = UVar12.fields._0_8_;
  if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
    uVar1 = (__this->fields)._pointerSelectionLocked;
    uVar2 = (__this->fields)._pointerLockPosition.fields.x;
    fVar7 = UVar12.fields.x - (float)uVar1;
    fVar9 = UVar12.fields.y - (float)uVar2;
    fVar9 = fVar9 * fVar9;
    fVar7 = fVar9 + fVar7 * fVar7;
    uVar10 = CONCAT44(fVar9,fVar7);
    uVar8 = 0x40800000;
    if (fVar7 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
  }
  if (DAT_05701586 == '\0') {
    il2cpp_init_method_metadata(uVar8,uVar10,&MethodInfo_Int32_get_Count);
    DAT_05701586 = '\x01';
  }
  pSVar4 = (__this->fields)._results;
  if (pSVar4 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    iVar5 = 8;
    if (iVar3 < 9) {
      iVar5 = iVar3;
    }
    if (iVar5 == 0) {
      return;
    }
    (__this->fields)._pointerLockPosition.fields.y = (float)((index % iVar5 + iVar5) % iVar5);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar6));
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar6));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b23e00

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar4;
  int iVar5;
  int32_t iVar6;
  undefined4 in_register_00000034;
  float fVar7;
  float fVar8;
  
  if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
    uVar1 = (__this->fields)._pointerSelectionLocked;
    uVar2 = (__this->fields)._pointerLockPosition.fields.x;
    fVar7 = pointerPosition.fields.x - (float)uVar1;
    fVar8 = pointerPosition.fields.y - (float)uVar2;
    if (fVar8 * fVar8 + fVar7 * fVar7 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
  }
  iVar6 = index;
  if (DAT_05701586 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05701586 = '\x01';
  }
  pSVar4 = (__this->fields)._results;
  if (pSVar4 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    iVar5 = 8;
    if (iVar3 < 9) {
      iVar5 = iVar3;
    }
    if (iVar5 == 0) {
      return;
    }
    (__this->fields)._pointerLockPosition.fields.y = (float)((index % iVar5 + iVar5) % iVar5);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar6));
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar6));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b23ea0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  float fVar3;
  float fVar4;
  
  if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
    uVar1 = (__this->fields)._pointerSelectionLocked;
    uVar2 = (__this->fields)._pointerLockPosition.fields.x;
    fVar3 = pointerPosition.fields.x - (float)uVar1;
    fVar4 = pointerPosition.fields.y - (float)uVar2;
    if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      return 0;
    }
    *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b220e0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (bool_conflict)pointerPosition.fields.x;
  (__this->fields)._pointerLockPosition.fields.x = pointerPosition.fields.y;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ThemeColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x3b235e0

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *token,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  float fVar2;
  UnityEngine_Color_o UVar6;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_05701585 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701585 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    fVar4 = fallback.fields.b;
    fVar5 = fallback.fields.a;
    fVar2 = fallback.fields.r;
    fVar3 = fallback.fields.g;
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(root->fields)._State_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (__this,token,fallback,(MethodInfo *)0x0);
        fVar4 = UVar6.fields.b;
        fVar5 = UVar6.fields.a;
        fVar2 = UVar6.fields.r;
        fVar3 = UVar6.fields.g;
      }
      UVar6.fields.g = fVar3;
      UVar6.fields.r = fVar2;
      UVar6.fields.a = fVar5;
      UVar6.fields.b = fVar4;
      return (UnityEngine_Color_o)UVar6.fields;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (UnityEngine_Color_o)fallback.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WithAlpha
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x3b23680

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha
          (UnityEngine_Color_o color,float alpha,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Color_o UVar2;
  
  UVar2.fields._0_8_ = color.fields._0_8_;
  fVar1 = 1.0;
  if (alpha <= 1.0) {
    fVar1 = alpha;
  }
  UVar2.fields.b = color.fields.b;
  UVar2.fields.a = (float)((uint)fVar1 & -(uint)(0.0 <= alpha));
  return (UnityEngine_Color_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$VisibleResultCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b22540

int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount
                  (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  int iVar3;
  
  if (DAT_05701586 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05701586 = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    iVar3 = 8;
    if (iVar1 < 9) {
      iVar3 = iVar1;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RefreshSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b23b90

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_00;
  float index;
  MethodInfo *method_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar2;
  
  if (DAT_05701587 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701587 = '\x01';
  }
  pSVar2 = (__this->fields)._feedback;
  if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
LAB_03b23c79:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0.0;
  if (0 < (pSVar2->fields)._size) {
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar2,(int32_t)index,MethodInfo_GisketchDropdownItemFeedback_get_Item
                    );
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        pSVar2 = (__this->fields)._feedback;
        if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
        goto LAB_03b23c79;
        method_00 = (MethodInfo *)(ulong)(uint)index;
        __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,(int32_t)index,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
        goto LAB_03b23c79;
        *(bool *)((long)&(__this_00->fields)._hovered + 2) =
             index == (__this->fields)._pointerLockPosition.fields.y;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_00,method_00);
      }
      index = (float)((int)index + 1);
      pSVar2 = (__this->fields)._feedback;
      if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
      goto LAB_03b23c79;
    } while ((int)index < (pSVar2->fields)._size);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RevealSelectedResult
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b23c80

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  float index;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *focused;
  MethodInfo *method_00;
  
  if (DAT_05701588 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701588 = '\x01';
  }
  index = (__this->fields)._pointerLockPosition.fields.y;
  if (-1 < (int)index) {
    pSVar1 = (__this->fields)._feedback;
    if (pSVar1 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
LAB_03b23d49:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)index < (pSVar1->fields)._size) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,(int32_t)index,MethodInfo_GisketchDropdownItemFeedback_get_Item
                    );
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (__this->fields)._feedback;
        if (pSVar1 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          __this_00 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,
                                 (int32_t)(__this->fields)._pointerLockPosition.fields.y,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            focused = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,method_00);
            return;
          }
        }
        goto LAB_03b23d49;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b23210

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (DAT_05701589 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701589 = '\x01';
  }
  if (result != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField ==
            (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,0,method);
        __this_00 = (root->fields)._Theme_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,
                     (MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(result,root,method_00);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CloseResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, bool restoreFocus, const MethodInfo* method);
// 0x3b22370

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,bool_conflict restoreFocus,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_GameObject_o **ppUVar2;
  
  if (DAT_0570158a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570158a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._popoverContent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField ==
            (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        ppUVar2 = &(__this->fields)._popoverContent;
        *ppUVar2 = (UnityEngine_GameObject_o *)0x0;
        il2cpp_runtime_glue(ppUVar2,0);
        __this_00 = (root->fields)._Theme_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,
                     restoreFocus & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Entries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b22440

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *activeScreenId;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *live;
  
  if (DAT_0570158b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570158b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = (root->fields)._Manifest_k__BackingField;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) goto LAB_03b224e8;
      activeScreenId = (pGVar1->fields).dialogs;
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                         (*(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)
                           &(root->fields)._suppressNextBuildMotion,
                          (System_String_o *)activeScreenId,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._Manifest_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        pGVar2 = (pGVar1->fields).screens;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
          live = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0;
        }
        else {
          live = pGVar2->m_Items[1];
        }
        pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
                           ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar4,
                            (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)live,
                            (System_String_o *)activeScreenId,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03b224e8:
  pSVar4 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
           il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  return pSVar4;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b24100

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_01;
  
  if (DAT_0570158c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdow);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchDropdownItemFeedback);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    DAT_0570158c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  (__this->fields)._results = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._results,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchDropdownItemFeedback);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdow);
  (__this->fields)._feedback = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b241c0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__<Setup>b__12_0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._pointerLockPosition.fields.y = 0.0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (int)UVar1.fields._0_8_;
  (__this->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b241f0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__<Setup>b__12_1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  float fVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float index;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  
  if (DAT_05701581 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSearchEntry_get_Item);
    DAT_05701581 = '\x01';
  }
  __this_01 = (__this->fields)._results;
  if (__this_01 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if ((__this_01->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
      __this_01 = (__this->fields)._results;
      if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
      goto LAB_03b23202;
    }
    iVar1 = (__this_01->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    fVar2 = (__this->fields)._pointerLockPosition.fields.y;
    method_00 = (MethodInfo *)(ulong)(uint)fVar2;
    fVar3 = (float)(iVar1 - 1);
    if ((int)fVar2 <= (int)fVar3) {
      fVar3 = fVar2;
    }
    index = 0.0;
    if (-1 < (int)fVar2) {
      index = fVar3;
    }
    entry = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_01,(int32_t)index,
                       MethodInfo_GisketchSearchEntry_get_Item);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_Component__GetComponentInParent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    if (DAT_05701589 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05701589 = '\x01';
    }
    if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar4 == '\0') {
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((root->fields)._Theme_k__BackingField ==
              (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            return;
          }
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,0,method_00)
          ;
          __this_00 = (root->fields)._Theme_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,
                       (MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,method_01);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return;
  }
LAB_03b23202:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


