// Type: UI.LoadingMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/LoadingMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs
// --------------------------------

// UI.LoadingMenu.<WaitAndHide>d__8$$.ctor
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__8___ctor (UI_LoadingMenu__WaitAndHide_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d563b0

void UI_LoadingMenu__WaitAndHide_d__8___ctor
               (UI_LoadingMenu__WaitAndHide_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__8__System_IDisposable_Dispose (UI_LoadingMenu__WaitAndHide_d__8_o* __this, const MethodInfo* method);
// 0x5d563e0

void UI_LoadingMenu__WaitAndHide_d__8__System_IDisposable_Dispose
               (UI_LoadingMenu__WaitAndHide_d__8_o *__this,MethodInfo *method)

{
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__8$$MoveNext
// il2cpp: bool UI_LoadingMenu__WaitAndHide_d__8__MoveNext (UI_LoadingMenu__WaitAndHide_d__8_o* __this, const MethodInfo* method);
// 0x5d563f0

bool UI_LoadingMenu__WaitAndHide_d__8__MoveNext(UI_LoadingMenu__WaitAndHide_d__8_o *__this,MethodInfo *method)

{
  UI_LoadingMenu_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07547f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547f2b = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 3;
    break;
  case 3:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_LoadingMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_LoadingMenu__Hide(__this_00,method);
  default:
    return false;
  }
  return true;
}


// UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_LoadingMenu__WaitAndHide_d__8_o* __this, const MethodInfo* method);
// 0x5d56510

Il2CppObject *
UI_LoadingMenu__WaitAndHide_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_LoadingMenu__WaitAndHide_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__8__System_Collections_IEnumerator_Reset (UI_LoadingMenu__WaitAndHide_d__8_o* __this, const MethodInfo* method);
// 0x5d56520

void UI_LoadingMenu__WaitAndHide_d__8__System_Collections_IEnumerator_Reset
               (UI_LoadingMenu__WaitAndHide_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_LoadingMenu_WaitAndHide_d__8_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__8__System_Collections_IEnumerator_get_Current (UI_LoadingMenu__WaitAndHide_d__8_o* __this, const MethodInfo* method);
// 0x5d56560

Il2CppObject *
UI_LoadingMenu__WaitAndHide_d__8__System_Collections_IEnumerator_get_Current
          (UI_LoadingMenu__WaitAndHide_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu$$Setup
// il2cpp: void UI_LoadingMenu__Setup (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x5d55d60

void UI_LoadingMenu__Setup(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_TipPanel_o *pUVar4;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_07547f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingBackgroundPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
    Il2CppMethodInitialized_07547f27 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar1,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingBackgroundPanel);
  (__this->fields)._backgroundPanel = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundPanel);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar1,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
  (__this->fields)._progessPanel = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._progessPanel);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateTipPanel(pUVar1,false,(MethodInfo *)0x0);
  (__this->fields)._tipPanel = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel);
  pUVar4 = (__this->fields)._tipPanel;
  if (pUVar4 == (UI_TipPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(obj,8,8,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
  return;
}


// UI.LoadingMenu$$RebuildPopups
// il2cpp: void UI_LoadingMenu__RebuildPopups (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x5d55e60

void UI_LoadingMenu__RebuildPopups(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_LoadingProgressPanel_o **targetAddress;
  bool value;
  int32_t index;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Object_o *obj;
  UI_LoadingProgressPanel_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547f28 = '\x01';
  }
  pUVar3 = (__this->fields)._progessPanel;
  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      targetAddress = &(__this->fields)._progessPanel;
      index = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
      if (*targetAddress != (UI_LoadingProgressPanel_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
          if (*targetAddress != (UI_LoadingProgressPanel_o *)0x0) {
            obj = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
            pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar3 = UI_ElementFactory__CreateDefaultPopup_object_
                               (pUVar1,false,
                                (MethodInfo_34D7290 *)
                                MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
            (__this->fields)._progessPanel = pUVar3;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar3 = (__this->fields)._progessPanel;
            if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
              pUVar1 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetSiblingIndex(pUVar1,index,(MethodInfo *)0x0);
                if (*targetAddress != (UI_LoadingProgressPanel_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
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


// UI.LoadingMenu$$Show
// il2cpp: void UI_LoadingMenu__Show (UI_LoadingMenu_o* __this, bool immediate, const MethodInfo* method);
// 0x5d55fb0

void UI_LoadingMenu__Show(UI_LoadingMenu_o *__this,bool immediate,MethodInfo *method)

{
  UI_TipPanel_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UI_LoadingBackgroundPanel_o *pUVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_UI_Text_c *method_00;
  void *in_R8;
  
  pUVar1 = (__this->fields)._tipPanel;
  if (pUVar1 != (UI_TipPanel_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar4) {
        return;
      }
      pUVar1 = (__this->fields)._tipPanel;
      if (pUVar1 != (UI_TipPanel_o *)0x0) {
        pUVar2 = (pUVar1->fields)._label;
        pMVar6 = (MethodInfo *)UI_TipPanel__RandomTipText(&(pUVar1->fields).currentTipIndex,pMVar6);
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          method_00 = pUVar2->klass;
          (*(method_00->vtable)._75_set_text.methodPtr)
                    ((Il2CppMethodPointer)pUVar2,pMVar6,(method_00->vtable)._75_set_text.method,
                     (void **)method_00,in_R8);
          pUVar1 = (__this->fields)._tipPanel;
          if (pUVar1 != (UI_TipPanel_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._backgroundPanel;
              if (pUVar3 != (UI_LoadingBackgroundPanel_o *)0x0) {
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar3,true,false,(MethodInfo *)method_00);
                pUVar3 = (__this->fields)._backgroundPanel;
                if (immediate) {
                  if (pUVar3 == (UI_LoadingBackgroundPanel_o *)0x0) goto label_05d560ad;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar3,(MethodInfo *)0x0);
                }
                else {
                  if (pUVar3 == (UI_LoadingBackgroundPanel_o *)0x0) goto label_05d560ad;
                  (*(((UI_BasePopup_c *)pUVar3->klass)->vtable)._21_Show.methodPtr)
                            (pUVar3,(((UI_BasePopup_c *)pUVar3->klass)->vtable)._21_Show.method);
                }
                UI_LoadingMenu__UpdateLoading(__this,0.0,false,immediate,(MethodInfo *)method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05d560ad:
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$Hide
// il2cpp: void UI_LoadingMenu__Hide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x5d56290

void UI_LoadingMenu__Hide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_TipPanel_o *__this_00;
  UI_LoadingProgressPanel_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._tipPanel;
  if (__this_00 != (UI_TipPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._progessPanel;
      if (pUVar1 != (UI_LoadingProgressPanel_o *)0x0) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        pUVar2 = (__this->fields)._backgroundPanel;
        if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
          (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$UpdateLoading
// il2cpp: void UI_LoadingMenu__UpdateLoading (UI_LoadingMenu_o* __this, float percentage, bool finished, bool immediate, const MethodInfo* method);
// 0x5d56100

void UI_LoadingMenu__UpdateLoading
               (UI_LoadingMenu_o *__this,float percentage,bool finished,bool immediate,MethodInfo *method)

{
  byte bVar1;
  UI_LoadingProgressPanel_o *__this_00;
  UI_InGameMenu_o *__this_01;
  UI_LoadingMenu__WaitAndHide_d__8_o *__this_02;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  float fVar2;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,finished);
  if (Il2CppMethodInitialized_07547f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547f29 = '\x01';
  }
  fVar2 = 1.0;
  if (percentage <= 1.0) {
    fVar2 = percentage;
  }
  fVar2 = (float)(-(uint)(0.0 <= percentage) & (uint)fVar2);
  __this_00 = (__this->fields)._progessPanel;
  if (immediate) {
    if (__this_00 == (UI_LoadingProgressPanel_o *)0x0) goto label_05d56279;
    UI_LoadingProgressPanel__SetProgress(__this_00,fVar2,method_00);
    UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
  }
  else {
    if (__this_00 == (UI_LoadingProgressPanel_o *)0x0) goto label_05d56279;
    UI_LoadingProgressPanel__SetProgress(__this_00,fVar2,method_00);
    UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
  }
  if (!finished) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_01 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    UI_InGameMenu__OnFinishLoading(__this_01,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547f2a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LoadingMenu_WaitAndHide_d__8);
      Il2CppMethodInitialized_07547f2a = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LoadingMenu_WaitAndHide_d__8);
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields).__1__state = 0;
    (__this_02->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02,
               (MethodInfo *)0x0);
    return;
  }
label_05d56279:
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$WaitAndHide
// il2cpp: System_Collections_IEnumerator_o* UI_LoadingMenu__WaitAndHide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x5d56340

System_Collections_IEnumerator_o * UI_LoadingMenu__WaitAndHide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_LoadingMenu__WaitAndHide_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LoadingMenu_WaitAndHide_d__8);
    Il2CppMethodInitialized_07547f2a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LoadingMenu_WaitAndHide_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.LoadingMenu$$.ctor
// il2cpp: void UI_LoadingMenu___ctor (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x5d563d0

void UI_LoadingMenu___ctor(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


