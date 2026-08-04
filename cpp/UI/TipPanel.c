// Type: UI.TipPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TipPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// --------------------------------

// UI.TipPanel$$Setup
// il2cpp: void UI_TipPanel__Setup (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x4413740

void UI_TipPanel__Setup(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_c *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  long lVar2;
  int32_t maxExclusive;
  uint uVar3;
  UI_TipPanel_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str0;
  long *plVar6;
  System_String_o *pSVar7;
  UI_TipPanel_o *pUVar8;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  if (g_data_057ae5fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae5fd = '\x01';
  }
  pUVar8 = __this;
  __this_00 = (UI_TipPanel_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (UI_TipPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_00,"Label",(MethodInfo *)0x0),
     pUVar8 = __this_00, __this_01 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._label = pUVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label,pUVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Notifications");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Tips");
    g_data_057ae5fe = '\x01';
  }
  pSVar7 = (System_String_o *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if ((pSVar7 != (System_String_o *)0x0) &&
     (pSVar5 = (System_String_o *)
               (*(pSVar7->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar7,"Tips",(pSVar7->klass->vtable)._7_CompareTo.method),
     pSVar5 != (System_String_o *)0x0)) {
    do {
      maxExclusive = (*(pSVar5->klass->vtable)._11_System_IConvertible_ToChar.methodPtr)
                               (pSVar5,(pSVar5->klass->vtable)._11_System_IConvertible_ToChar.method);
      uVar3 = UnityEngine_Random__Range_4df2410(0,maxExclusive,(MethodInfo *)0x0);
    } while (uVar3 == (pUVar8->fields).currentTipIndex);
    (pUVar8->fields).currentTipIndex = uVar3;
    pUVar4 = (pUVar8->fields)._label;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = UI_UIManager__GetLocale
                     ("Notifications","Tips","Title","","",(MethodInfo *)0x0);
    plVar6 = (long *)(*(pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                               (pSVar5,(ulong)uVar3,
                                (pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.method
                               );
    pSVar7 = pSVar5;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      pSVar7 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar7,"","",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3af7150(str0,": ",pSVar7,(MethodInfo *)0x0);
      pSVar7 = str0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar1 = pUVar4->klass;
        vtableDispatch = (pUVar1->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar4,pSVar5,(pUVar1->vtable)._75_set_text.method,pUVar1,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"PressAnyKey");
    g_data_057ae5ff = '\x01';
  }
  plVar6 = pSVar7[1].monitor;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = "PressAnyKey";
  pSVar7 = UI_UIManager__GetLocaleCommon((System_String_o *)"PressAnyKey",(MethodInfo *)0x0);
  if (plVar6 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&__this_02[1].monitor = 0xffffffff;
    UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
    return;
  }
  lVar2 = *plVar6;
  (**(code **)(lVar2 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(lVar2 + 0x5f0),lVar2,*(code **)(lVar2 + 0x5e8));
  return;
}


// UI.TipPanel$$SetRandomTip
// il2cpp: void UI_TipPanel__SetRandomTip (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x44137c0

void UI_TipPanel__SetRandomTip(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  int32_t maxExclusive;
  uint uVar4;
  System_String_o *pSVar5;
  System_String_o *str0;
  long *plVar6;
  System_String_o *pSVar7;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ae5fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Notifications");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Tips");
    g_data_057ae5fe = '\x01';
  }
  pSVar7 = (System_String_o *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if ((pSVar7 != (System_String_o *)0x0) &&
     (pSVar5 = (System_String_o *)
               (*(pSVar7->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar7,"Tips",(pSVar7->klass->vtable)._7_CompareTo.method),
     pSVar5 != (System_String_o *)0x0)) {
    do {
      maxExclusive = (*(pSVar5->klass->vtable)._11_System_IConvertible_ToChar.methodPtr)
                               (pSVar5,(pSVar5->klass->vtable)._11_System_IConvertible_ToChar.method);
      uVar4 = UnityEngine_Random__Range_4df2410(0,maxExclusive,(MethodInfo *)0x0);
    } while (uVar4 == (__this->fields).currentTipIndex);
    (__this->fields).currentTipIndex = uVar4;
    pUVar1 = (__this->fields)._label;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = UI_UIManager__GetLocale
                     ("Notifications","Tips","Title","","",(MethodInfo *)0x0);
    plVar6 = (long *)(*(pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                               (pSVar5,(ulong)uVar4,
                                (pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.method
                               );
    pSVar7 = pSVar5;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      pSVar7 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar7,"","",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3af7150(str0,": ",pSVar7,(MethodInfo *)0x0);
      pSVar7 = str0;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar2 = pUVar1->klass;
        vtableDispatch = (pUVar2->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar1,pSVar5,(pUVar2->vtable)._75_set_text.method,pUVar2,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"PressAnyKey");
    g_data_057ae5ff = '\x01';
  }
  plVar6 = pSVar7[1].monitor;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = "PressAnyKey";
  pSVar7 = UI_UIManager__GetLocaleCommon((System_String_o *)"PressAnyKey",(MethodInfo *)0x0);
  if (plVar6 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&__this_00[1].monitor = 0xffffffff;
    UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  lVar3 = *plVar6;
  (**(code **)(lVar3 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(lVar3 + 0x5f0),lVar3,*(code **)(lVar3 + 0x5e8));
  return;
}


// UI.TipPanel$$SetPressAnyKey
// il2cpp: void UI_TipPanel__SetPressAnyKey (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x4413990

void UI_TipPanel__SetPressAnyKey(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ae5ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"PressAnyKey");
    g_data_057ae5ff = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = "PressAnyKey";
  pSVar3 = UI_UIManager__GetLocaleCommon((System_String_o *)"PressAnyKey",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    pUVar2 = pUVar1->klass;
    vtableDispatch = (pUVar2->vtable)._75_set_text.methodPtr;
    (*vtableDispatch)(pUVar1,pSVar3,(pUVar2->vtable)._75_set_text.method,pUVar2,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_00[1].monitor = 0xffffffff;
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.TipPanel$$.ctor
// il2cpp: void UI_TipPanel___ctor (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x4413a10

void UI_TipPanel___ctor(UI_TipPanel_o *__this,MethodInfo *method)

{
  (__this->fields).currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


