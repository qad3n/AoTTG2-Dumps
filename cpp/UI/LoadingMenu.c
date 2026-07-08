// Type: UI.LoadingMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/LoadingMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.LoadingMenu.<WaitAndHide>d__7$$.ctor
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7___ctor (UI_LoadingMenu__WaitAndHide_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40dd080

void UI_LoadingMenu_<WaitAndHide>d__7___ctor
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_IDisposable_Dispose (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x40dd0b0

void UI_LoadingMenu_<WaitAndHide>d__7__System_IDisposable_Dispose
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$MoveNext
// il2cpp: bool UI_LoadingMenu__WaitAndHide_d__7__MoveNext (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x40dd0c0

bool_conflict
UI_LoadingMenu_<WaitAndHide>d__7__MoveNext
          (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  UI_LoadingMenu_o *__this_00;
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  
  if (DAT_05704781 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704781 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 1;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 2;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 3;
    break;
  case 3:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_LoadingMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_LoadingMenu__Hide(__this_00,method);
  default:
    return 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x40dd1f0

Il2CppObject *
UI_LoadingMenu_<WaitAndHide>d__7__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_Reset (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x40dd200

void UI_LoadingMenu_<WaitAndHide>d__7__System_Collections_IEnumerator_Reset
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x40dd240

Il2CppObject *
UI_LoadingMenu_<WaitAndHide>d__7__System_Collections_IEnumerator_get_Current
          (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu$$Setup
// il2cpp: void UI_LoadingMenu__Setup (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x40dca20

void UI_LoadingMenu__Setup(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_TipPanel_o *pUVar4;
  UnityEngine_GameObject_o *obj;
  
  if (DAT_0570477e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LoadingBackgroundPanel_CreateDefaultPopup_Loadin);
    il2cpp_init_method_metadata(&MethodInfo_LoadingProgressPanel_CreateDefaultPopup_LoadingP);
    DAT_0570477e = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = (UI_LoadingBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_LoadingBackgroundPanel_CreateDefaultPopup_Loadin);
  (__this->fields)._backgroundPanel = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._backgroundPanel);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = (UI_LoadingProgressPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_LoadingProgressPanel_CreateDefaultPopup_LoadingP);
  (__this->fields)._progessPanel = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._progessPanel);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = UI_ElementFactory__CreateTipPanel(pUVar1,0,(MethodInfo *)0x0);
  (__this->fields)._tipPanel = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._tipPanel);
  pUVar4 = (__this->fields)._tipPanel;
  if (pUVar4 != (UI_TipPanel_o *)0x0) {
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
    ;
    UI_ElementFactory__SetAnchor
              (obj,8,8,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingMenu$$Show
// il2cpp: void UI_LoadingMenu__Show (UI_LoadingMenu_o* __this, bool immediate, const MethodInfo* method);
// 0x40dcb20

void UI_LoadingMenu__Show(UI_LoadingMenu_o *__this,bool_conflict immediate,MethodInfo *method)

{
  UI_TipPanel_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *__this_00;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields)._tipPanel;
  if (pUVar1 != (UI_TipPanel_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
      pUVar1 = (__this->fields)._tipPanel;
      if (pUVar1 != (UI_TipPanel_o *)0x0) {
        UI_TipPanel__SetRandomTip(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._tipPanel;
        if ((pUVar1 != (UI_TipPanel_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._backgroundPanel;
          if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
            UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,in_RCX);
            pUVar2 = (__this->fields)._backgroundPanel;
            if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
              if ((char)immediate == '\0') {
                method_00 = (((UI_BasePopup_c *)pUVar2->klass)->vtable)._21_Show.method;
                (*(((UI_BasePopup_c *)pUVar2->klass)->vtable)._21_Show.methodPtr)();
              }
              else {
                method_00 = (MethodInfo *)0x0;
                UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
              }
              if (DAT_0570477f == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
                il2cpp_init_method_metadata(&TypeInfo_UIManager);
                DAT_0570477f = '\x01';
              }
              __this_00 = (__this->fields)._progessPanel;
              if (__this_00 != (UI_LoadingProgressPanel_o *)0x0) {
                if ((char)immediate != '\0') {
                  UI_LoadingProgressPanel__ShowImmediate(__this_00,0.0,method_00);
                  return;
                }
                UI_LoadingProgressPanel__Show(__this_00,0.0,method_00);
                return;
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


// UI.LoadingMenu$$Hide
// il2cpp: void UI_LoadingMenu__Hide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x40dcdc0

void UI_LoadingMenu__Hide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_TipPanel_o *__this_00;
  UI_LoadingProgressPanel_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_GameObject_o *__this_01;
  undefined8 extraout_RDX;
  
  __this_00 = (__this->fields)._tipPanel;
  if (__this_00 != (UI_TipPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._progessPanel;
      if (pUVar1 != (UI_LoadingProgressPanel_o *)0x0) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        pUVar2 = (__this->fields)._backgroundPanel;
        if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
          vtable_dispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
          (*vtable_dispatch)
                    (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,
                     vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingMenu$$UpdateLoading
// il2cpp: void UI_LoadingMenu__UpdateLoading (UI_LoadingMenu_o* __this, float percentage, bool finished, bool immediate, const MethodInfo* method);
// 0x40dcc50

void UI_LoadingMenu__UpdateLoading
               (UI_LoadingMenu_o *__this,float percentage,bool_conflict finished,
               bool_conflict immediate,MethodInfo *method)

{
  byte bVar1;
  UI_LoadingProgressPanel_o *__this_00;
  UI_InGameMenu_o *__this_01;
  Il2CppObject *__this_02;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  float fVar2;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,finished);
  if (DAT_0570477f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570477f = '\x01';
  }
  __this_00 = (__this->fields)._progessPanel;
  if (__this_00 != (UI_LoadingProgressPanel_o *)0x0) {
    fVar2 = 1.0;
    if (percentage <= 1.0) {
      fVar2 = percentage;
    }
    fVar2 = (float)(-(uint)(0.0 <= percentage) & (uint)fVar2);
    if ((char)immediate == '\0') {
      UI_LoadingProgressPanel__Show(__this_00,fVar2,method_00);
    }
    else {
      UI_LoadingProgressPanel__ShowImmediate(__this_00,fVar2,method_00);
    }
    if ((char)finished == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_01 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      UI_InGameMenu__OnFinishLoading(__this_01,(MethodInfo *)0x0);
      if (DAT_05704780 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndHide_d__7);
        DAT_05704780 = '\x01';
      }
      __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndHide_d__7);
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = 0;
      if (__this_02 != (Il2CppObject *)0x0) {
        __this_02[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_02 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingMenu$$WaitAndHide
// il2cpp: System_Collections_IEnumerator_o* UI_LoadingMenu__WaitAndHide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x40dd010

System_Collections_IEnumerator_o *
UI_LoadingMenu__WaitAndHide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704780 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndHide_d__7);
    DAT_05704780 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndHide_d__7);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingMenu$$.ctor
// il2cpp: void UI_LoadingMenu___ctor (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x40dd0a0

void UI_LoadingMenu___ctor(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


