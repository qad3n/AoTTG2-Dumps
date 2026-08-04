// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, bool selectMode, const MethodInfo* method);
// 0x3b89d80

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool_conflict selectMode,
               MethodInfo *method)

{
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)control;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_OnClick);
  *(char *)&(__this->fields)._control = (char)selectMode;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b89db0

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b89f20

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  char cVar2;
  Il2CppClass *__this_01;
  Il2CppObject *__this_02;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_03;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  if (g_data_057b6fb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Button.onClick",eventData,0);
    g_data_057b6fb0 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if ((cVar2 != '\0') &&
     (cVar2 = (*(__this->klass->vtable)._24_IsInteractable.methodPtr)
                        (__this,(__this->klass->vtable)._24_IsInteractable.method), cVar2 != '\0')) {
    UnityEngine_UISystemProfilerApi__AddMarker("Button.onClick",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).m_CanvasGroupCache;
    pIVar4 = (Il2CppClass *)0x0;
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_04ff0750;
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
  }
  cVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if ((cVar2 == '\0') ||
     (cVar2 = (*(__this->klass->vtable)._24_IsInteractable.methodPtr)
                        (__this,(__this->klass->vtable)._24_IsInteractable.method), cVar2 == '\0')) {
    return;
  }
  (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
            (__this,2,0,(__this->klass->vtable)._26_DoStateTransition.method);
  if (g_data_057b6fb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnFinishSubmit_d__9);
    g_data_057b6fb1 = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_OnFinishSubmit_d__9);
  pIVar4 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->_1).name = 0;
  if (__this_01 != (Il2CppClass *)0x0) {
    (__this_01->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    return;
  }
label_04ff0750:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057b6fb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnFinishSubmit_d__9);
    g_data_057b6fb1 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnFinishSubmit_d__9);
  uVar3 = 0;
  __this_03 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar3;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x3b8a090

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *x;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  char cVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *x_00;
  UnityEngine_GameObject_o *value;
  uint uVar6;
  MethodInfo *method_00;
  int iVar7;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_Object_o *pUVar8;
  
  if (g_data_057a9e96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e96 = '\x01';
  }
  if (*(char *)&(__this->fields)._control != '\0') {
    x = (__this->fields).m_OnClick;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_00 = (UnityEngine_UI_Button_o *)(__this->fields).m_OnClick;
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) {
label_03b8a1ad:
        il2cpp_runtime_helper_022b2c90();
        pGVar2 = *(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)&(__this_00->fields).m_Navigation.fields;
        if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
          return;
        }
        pGVar3 = (pGVar2->fields)._items;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          iVar1 = (int)pGVar3->max_length;
          iVar7 = 0;
          if (0 < iVar1) {
            do {
              __this_00 = (UnityEngine_UI_Button_o *)0x0;
              if (pGVar3->m_Items[iVar7] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
              goto label_03b8a206;
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
          }
          return;
        }
label_03b8a206:
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_UI_Button___ctor(__this_00,(MethodInfo *)0x0);
        return;
      }
      pGVar2 = *(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)&(__this_00->fields).m_Navigation.fields;
      if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pGVar3 = (pGVar2->fields)._items;
        if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8a1ad;
        iVar1 = (int)pGVar3->max_length;
        if (0 < iVar1) {
          iVar7 = 0;
          method_00 = (MethodInfo *)0x0;
          do {
            if (pGVar3->m_Items[iVar7] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
            goto label_03b8a1ad;
            uVar6 = (int)method_00 + (uint)(byte)(pGVar3->m_Items[iVar7]->fields).enabled;
            method_00 = (MethodInfo *)(ulong)uVar6;
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
          if ((eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) && (1 < (int)uVar6)) {
            iVar1 = (eventData->fields)._moveDir_k__BackingField;
            if (iVar1 == 2) {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next
                        ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_00,2,method_00);
            }
            else {
              if (iVar1 != 0) goto label_03b8a16d;
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous
                        ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_00,2,method_00);
            }
            Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
            (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method)
            ;
            return;
          }
        }
      }
    }
  }
label_03b8a16d:
  if (eventData == (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
    il2cpp_runtime_helper_022b2c90(__this,0,0);
    if (((__this->fields).m_Navigation.fields.m_Mode == 3) && (*(uint *)&(__this->fields).m_OnClick < 2)) {
      return;
    }
    UnityEngine_UI_Selectable__FindSelectableOnLeft
              ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)eventData);
    return;
  }
  switch((eventData->fields)._moveDir_k__BackingField) {
  case 0:
    x_00 = (UnityEngine_Object_o *)
           (*(__this->klass->vtable)._27_FindSelectableOnLeft.methodPtr)
                     (__this,(__this->klass->vtable)._27_FindSelectableOnLeft.method);
    break;
  case 1:
    x_00 = (UnityEngine_Object_o *)
           (*(__this->klass->vtable)._29_FindSelectableOnUp.methodPtr)
                     (__this,(__this->klass->vtable)._29_FindSelectableOnUp.method);
    break;
  case 2:
    x_00 = (UnityEngine_Object_o *)
           (*(__this->klass->vtable)._28_FindSelectableOnRight.methodPtr)
                     (__this,(__this->klass->vtable)._28_FindSelectableOnRight.method);
    break;
  case 3:
    x_00 = (UnityEngine_Object_o *)
           (*(__this->klass->vtable)._30_FindSelectableOnDown.methodPtr)
                     (__this,(__this->klass->vtable)._30_FindSelectableOnDown.method);
    break;
  default:
    return;
  }
  if (g_data_057b83f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b83f4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = x_00;
  bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (x_00 != (UnityEngine_Object_o *)0x0) {
      cVar4 = (*(code *)x_00->klass[1]._1.declaringType)(x_00);
      if (cVar4 == '\0') {
        return;
      }
      value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
      pUVar8 = x_00;
      if (eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
        UnityEngine_EventSystems_BaseEventData__set_selectedObject
                  ((UnityEngine_EventSystems_BaseEventData_o *)eventData,value,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    cVar4 = (*(code *)pUVar8->klass[1]._1.declaringType)();
    if ((((cVar4 != '\0') &&
         (cVar4 = (*(code *)pUVar8->klass[1].vtable._0_Equals.method)
                            (pUVar8,pUVar8->klass[1].vtable._1_Finalize.methodPtr), cVar4 != '\0')) &&
        (*(char *)&pUVar8[10].klass != '\0')) && (*(char *)((long)&pUVar8[10].klass + 1) == '\0')) {
      return;
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, const MethodInfo* method);
// 0x3b8a210

void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


