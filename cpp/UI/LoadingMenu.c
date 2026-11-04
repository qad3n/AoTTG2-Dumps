// Type: UI.LoadingMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LoadingMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs
// --------------------------------

// UI.LoadingMenu.<WaitAndHide>d__7$$.ctor
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7___ctor (UI_LoadingMenu__WaitAndHide_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_LoadingMenu__WaitAndHide_d__7___ctor(UI_LoadingMenu__WaitAndHide_d__7_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_IDisposable_Dispose (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_LoadingMenu__WaitAndHide_d__7__System_IDisposable_Dispose(UI_LoadingMenu__WaitAndHide_d__7_o* __this, MethodInfo* method)

{
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$MoveNext
// il2cpp: bool UI_LoadingMenu__WaitAndHide_d__7__MoveNext (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x1822839c0

bool UI_LoadingMenu__WaitAndHide_d__7__MoveNext(UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_LoadingMenu_o *pUVar2;
  UI_TipPanel_o *__this_00;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_LoadingBackgroundPanel_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_1843473a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_1843473a7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 2;
    return true;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return false;
    }
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_LoadingMenu_o *)0x0) &&
        (__this_00 = (pUVar2->fields)._tipPanel, __this_00 != (UI_TipPanel_o *)0x0)) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      pUVar3 = (pUVar2->fields)._progessPanel;
      if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
        (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
        pUVar4 = (pUVar2->fields)._backgroundPanel;
        if (pUVar4 != (UI_LoadingBackgroundPanel_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
          return false;
        }
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
  (__this->fields).__1__state = 3;
  return true;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_LoadingMenu__WaitAndHide_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_LoadingMenu__WaitAndHide_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_Reset (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x182283b70

void UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_Reset
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_LoadingMenu_WaitAndHide_d__7_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_get_Current(UI_LoadingMenu__WaitAndHide_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu$$Setup
// il2cpp: void UI_LoadingMenu__Setup (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x18227a8a0

void UI_LoadingMenu__Setup(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_LoadingBackgroundPanel_o *value;
  UI_LoadingProgressPanel_o *value_00;
  UI_TipPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_1843473a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingBackgroundPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
    Il2CppMethodInitialized_1843473a4 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value = UI_ElementFactory__CreateHeadedPanel_object_
                    (pUVar1,false,
                     (MethodInfo_6ABA40 *)
                     MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingBackgroundPanel);
  (__this->fields)._backgroundPanel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundPanel,value);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_00 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar1,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_LoadingProgressPanel);
  (__this->fields)._progessPanel = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._progessPanel,value_00);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateTipPanel(pUVar1,false,(MethodInfo *)0x0);
  (__this->fields)._tipPanel = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel,pUVar2);
  pUVar2 = (__this->fields)._tipPanel;
  if (pUVar2 != (UI_TipPanel_o *)0x0) {
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(obj,8,8,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$Show
// il2cpp: void UI_LoadingMenu__Show (UI_LoadingMenu_o* __this, bool immediate, const MethodInfo* method);
// 0x18227a9d0

void UI_LoadingMenu__Show(UI_LoadingMenu_o *__this,bool immediate,MethodInfo *method)

{
  UI_TipPanel_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  UI_LoadingProgressPanel_o *__this_00;
  System_String_o *path;
  bool bVar4;
  int32_t backgroundIndex;
  UnityEngine_GameObject_o *pUVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  
  pUVar1 = (__this->fields)._tipPanel;
  if ((pUVar1 != (UI_TipPanel_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pUVar1 = (__this->fields)._tipPanel;
    if (pUVar1 != (UI_TipPanel_o *)0x0) {
      UI_TipPanel__SetRandomTip(pUVar1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._tipPanel;
      if ((pUVar1 != (UI_TipPanel_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._backgroundPanel;
        if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
          if (Il2CppMethodInitialized_1843473a1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
            il2cpp_codegen_initialize_runtime_metadata(&"LoadingBackgrounds");
            il2cpp_codegen_initialize_runtime_metadata(&"EventBackgrounds");
            il2cpp_codegen_initialize_runtime_metadata(&"MainBackgrounds");
            Il2CppMethodInitialized_1843473a1 = '\x01';
          }
          path = "MainBackgrounds";
          pSVar3 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar6 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,(MethodInfo *)"LoadingBackgrounds");
            do {
              if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18227abc5;
              pSVar7 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                                 (pSVar6,(pSVar6->klass->vtable)._11_get_NameAttribute.method);
              backgroundIndex = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar7,(MethodInfo *)0x0);
            } while (backgroundIndex == (pUVar2->fields).BackgroundIndex);
            UI_LoadingBackgroundPanel__SetBackground(pUVar2,true,backgroundIndex,path,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._backgroundPanel;
            if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
              if (immediate) {
                UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
              }
              else {
                (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
              }
              if (Il2CppMethodInitialized_1843473a5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                Il2CppMethodInitialized_1843473a5 = '\x01';
              }
              __this_00 = (__this->fields)._progessPanel;
              if (__this_00 != (UI_LoadingProgressPanel_o *)0x0) {
                UI_LoadingProgressPanel__SetProgress(__this_00,0.0,(MethodInfo *)0x0);
                if (!immediate) {
                  UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
                  return;
                }
                UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_18227abc5:
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$Hide
// il2cpp: void UI_LoadingMenu__Hide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x18227a820

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
// 0x18227abd0

void UI_LoadingMenu__UpdateLoading
               (UI_LoadingMenu_o *__this,float percentage,bool finished,bool immediate,MethodInfo *method)

{
  byte bVar1;
  UI_LoadingProgressPanel_o *__this_00;
  UI_InGameMenu_o *__this_01;
  UI_LoadingMenu__WaitAndHide_d__7_o *routine;
  float progress;
  
  if (Il2CppMethodInitialized_1843473a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843473a5 = '\x01';
  }
  progress = 0.0;
  if ((0.0 <= percentage) && (progress = 1.0, percentage <= 1.0)) {
    progress = percentage;
  }
  __this_00 = (__this->fields)._progessPanel;
  if (__this_00 != (UI_LoadingProgressPanel_o *)0x0) {
    UI_LoadingProgressPanel__SetProgress(__this_00,progress,(MethodInfo *)0x0);
    if (immediate) {
      UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
    }
    if (finished) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_18227ad38;
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_InGameMenu);
      }
      UI_InGameMenu__OnFinishLoading(__this_01,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843473a6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LoadingMenu_WaitAndHide_d__7);
        Il2CppMethodInitialized_1843473a6 = '\x01';
      }
      routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LoadingMenu_WaitAndHide_d__7);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_18227ad38:
  ThrowNullReferenceException();
}


// UI.LoadingMenu$$WaitAndHide
// il2cpp: System_Collections_IEnumerator_o* UI_LoadingMenu__WaitAndHide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x18227ad50

System_Collections_IEnumerator_o * UI_LoadingMenu__WaitAndHide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_LoadingMenu__WaitAndHide_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_1843473a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LoadingMenu_WaitAndHide_d__7);
    Il2CppMethodInitialized_1843473a6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LoadingMenu_WaitAndHide_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.LoadingMenu$$.ctor
// il2cpp: void UI_LoadingMenu___ctor (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void
UI_LoadingMenu___ctor(UI_LoadingMenu_o* __this, MethodInfo* method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


