// Type: UI.ItemHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ItemHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ItemHandler.cs
// --------------------------------

// UI.ItemHandler.<UpdateForever>d__7$$.ctor
// il2cpp: void UI_ItemHandler__UpdateForever_d__7___ctor (UI_ItemHandler__UpdateForever_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d31bb0

void UI_ItemHandler__UpdateForever_d__7___ctor
               (UI_ItemHandler__UpdateForever_d__7_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ItemHandler.<UpdateForever>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_ItemHandler__UpdateForever_d__7__System_IDisposable_Dispose (UI_ItemHandler__UpdateForever_d__7_o* __this, const MethodInfo* method);
// 0x5d31da0

void UI_ItemHandler__UpdateForever_d__7__System_IDisposable_Dispose
               (UI_ItemHandler__UpdateForever_d__7_o *__this,MethodInfo *method)

{
  return;
}


// UI.ItemHandler.<UpdateForever>d__7$$MoveNext
// il2cpp: bool UI_ItemHandler__UpdateForever_d__7__MoveNext (UI_ItemHandler__UpdateForever_d__7_o* __this, const MethodInfo* method);
// 0x5d31db0

bool UI_ItemHandler__UpdateForever_d__7__MoveNext
               (UI_ItemHandler__UpdateForever_d__7_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  UI_ItemHandler_o *__this_00;
  Settings_InputSettings_o *pSVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  UI_WheelPopup_o *__this_01;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o *title;
  UnityEngine_WaitForSeconds_o *__this_03;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_UpdateForever_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Items");
    Il2CppMethodInitialized_07547e2c = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
label_05d31f61:
    seconds = (__this->fields).delay;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_03,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_ItemHandler_o *)0x0) {
    if ((__this_00->fields).IsActive == false) goto label_05d31f61;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Interaction, pSVar4 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).ItemMenu, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
      __this_01 = (UI_WheelPopup_o *)(__this_00->fields)._itemWheelPopup;
      method_00 = (pSVar5->klass->vtable)._3_ToString.method;
      openKey = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)(pSVar5,method_00);
      options = UI_ItemHandler__GetItemWheelOptions(__this_00,method_00);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_02,(Il2CppObject *)__this_00,(intptr_t)MethodInfo_UI_ItemHandler_UpdateForever_b__7_0,
                 (MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("InGameMenu.Wheel.Items",(MethodInfo *)0x0);
      if (__this_01 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup))
        {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
        UI_WheelPopup__Show(__this_01,openKey,options,__this_02,title,false,(MethodInfo *)0x0);
        goto label_05d31f61;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler.<UpdateForever>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ItemHandler__UpdateForever_d__7_o* __this, const MethodInfo* method);
// 0x5d31fd0

Il2CppObject *
UI_ItemHandler__UpdateForever_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_ItemHandler__UpdateForever_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler.<UpdateForever>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ItemHandler__UpdateForever_d__7__System_Collections_IEnumerator_Reset (UI_ItemHandler__UpdateForever_d__7_o* __this, const MethodInfo* method);
// 0x5d31fe0

void UI_ItemHandler__UpdateForever_d__7__System_Collections_IEnumerator_Reset
               (UI_ItemHandler__UpdateForever_d__7_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ItemHandler_UpdateForever_d__7_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ItemHandler.<UpdateForever>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__7__System_Collections_IEnumerator_get_Current (UI_ItemHandler__UpdateForever_d__7_o* __this, const MethodInfo* method);
// 0x5d32020

Il2CppObject *
UI_ItemHandler__UpdateForever_d__7__System_Collections_IEnumerator_get_Current
          (UI_ItemHandler__UpdateForever_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler$$Awake
// il2cpp: void UI_ItemHandler__Awake (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d314a0

void UI_ItemHandler__Awake(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass **ppIVar2;
  GameManagers_InGameManager_o *pGVar3;
  GameManagers_InGameManager_c *pGVar4;
  UI_WheelPopup_c *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_BasePopup_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_Awake_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/WheelMenu");
    Il2CppMethodInitialized_07547e27 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/WheelMenu",false,
                         (MethodInfo_34D7620 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._itemWheelPopup = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._itemWheelPopup);
    pUVar6 = (__this->fields)._itemWheelPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ItemHandler_Awake_b__3_0,
               (MethodInfo *)0x0);
    pUVar5 = TypeInfo_UI_WheelPopup;
    if (pUVar6 != (UI_BasePopup_o *)0x0) {
      bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if ((((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
          (ppIVar2 = (pUVar6->klass->_2).typeHierarchy,
          ppIVar2[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) ||
         ((*(uint64_t *)((char *)pUVar6 + 0xc0)) = (System_Threading_CancellationTokenSource_o *)__this_01
         , ppIVar2[(ulong)bVar1 - 1] != (Il2CppClass *)pUVar5)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pUVar6 + 0xc0)));
      pGVar4 = TypeInfo_GameManagers_InGameManager;
      pGVar3 = (GameManagers_InGameManager_o *)
               TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar3 == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
label_05d3166b:
        Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
        return;
      }
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (pGVar3->klass->_2).typeHierarchyDepth) &&
         ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        (__this->fields)._inGameManager = pGVar3;
        if ((bVar1 <= (pGVar3->klass->_2).typeHierarchyDepth) &&
           ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pGVar4)) goto label_05d3166b;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3,pGVar4);
    }
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler$$Start
// il2cpp: void UI_ItemHandler__Start (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31690

void UI_ItemHandler__Start(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__UpdateForever_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ItemHandler_UpdateForever_d__7);
    Il2CppMethodInitialized_07547e29 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ItemHandler_UpdateForever_d__7);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = 1.0;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$ToggleItemWheel
// il2cpp: void UI_ItemHandler__ToggleItemWheel (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31790

void UI_ItemHandler__ToggleItemWheel(UI_ItemHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_ItemHandler__SetItemWheel(__this,(__this->fields).IsActive == false,in_RDX);
  return;
}


// UI.ItemHandler$$SetItemWheel
// il2cpp: void UI_ItemHandler__SetItemWheel (UI_ItemHandler_o* __this, bool enable, const MethodInfo* method);
// 0x5d30820

void UI_ItemHandler__SetItemWheel(UI_ItemHandler_o *__this,bool enable,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  UI_WheelPopup_o *__this_00;
  UI_BasePopup_o *pUVar5;
  bool bVar6;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  MethodInfo *method_00;
  System_String_o **method_01;
  
  method_01 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07547e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_SetItemWheel_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    method_01 = &"InGameMenu.Wheel.Items";
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Items");
    Il2CppMethodInitialized_07547e28 = '\x01';
  }
  if (enable) {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_01);
    if (bVar6) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Interaction, pSVar3 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).ItemMenu, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      __this_00 = (UI_WheelPopup_o *)(__this->fields)._itemWheelPopup;
      method_00 = (pSVar4->klass->vtable)._3_ToString.method;
      openKey = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)(pSVar4,method_00);
      options = UI_ItemHandler__GetItemWheelOptions(__this,method_00);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ItemHandler_SetItemWheel_b__6_0,
                 (MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("InGameMenu.Wheel.Items",(MethodInfo *)0x0);
      if (__this_00 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup))
        {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        UI_WheelPopup__Show(__this_00,openKey,options,__this_01,title,false,(MethodInfo *)0x0);
        bVar6 = true;
        goto label_05d309b7;
      }
    }
  }
  else {
    pUVar5 = (__this->fields)._itemWheelPopup;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
      bVar6 = false;
label_05d309b7:
      (__this->fields).IsActive = bVar6;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler$$UpdateForever
// il2cpp: System_Collections_IEnumerator_o* UI_ItemHandler__UpdateForever (UI_ItemHandler_o* __this, float delay, const MethodInfo* method);
// 0x5d31710

System_Collections_IEnumerator_o *
UI_ItemHandler__UpdateForever(UI_ItemHandler_o *__this,float delay,MethodInfo *method)

{
  UI_ItemHandler__UpdateForever_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ItemHandler_UpdateForever_d__7);
    Il2CppMethodInitialized_07547e29 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ItemHandler_UpdateForever_d__7);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.ItemHandler$$OnItemWheelSelect
// il2cpp: void UI_ItemHandler__OnItemWheelSelect (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31bd0

void UI_ItemHandler__OnItemWheelSelect(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_BaseUseable__o *pSVar5;
  UI_BaseMenu_o *pUVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_07547e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_07547e2a = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar4 = (__this->fields)._itemWheelPopup, pUVar4 != (UI_BasePopup_o *)0x0)) {
    bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
label_05d31d5b:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    x = (pGVar3->fields).CurrentCharacter;
    iVar2 = *(int *)((long)&(*(uint64_t *)((char *)pUVar4 + 0xb0)) + 4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar5 = (x->fields).Items, pSVar5 == (System_Collections_Generic_List_BaseUseable__o *)0x0))
      goto label_05d31d56;
      if (iVar2 < (pSVar5->fields)._size) {
        (*(x->klass->vtable)._85_UseItem.methodPtr)(x,iVar2,(x->klass->vtable)._85_UseItem.method);
      }
    }
    pUVar4 = (__this->fields)._itemWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      (__this->fields).IsActive = false;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar6 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar6->klass->_2).typeHierarchyDepth) &&
           ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          *(undefined1 *)&(*(uint64_t *)((char *)pUVar6 + 0x158)) = 1;
          return;
        }
        goto label_05d31d5b;
      }
    }
  }
label_05d31d56:
  ThrowNullReferenceException();
}


// UI.ItemHandler$$GetItemWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_ItemHandler__GetItemWheelOptions (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d317a0
// eh: try 0x5d3193f..0x5d31b31 -> pad 0x5d31b4b (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d31b69..0x5d31b6e -> pad 0x5d31b93 cleanup
// eh: try 0x5d31b96..0x5d31ba0 -> pad 0x5d31ba8 catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d31a03: mov r13, rax
// asm:   0x5d31b31: jmp 0x5d31b51
// asm:   0x5d31b33: jmp 0x5d31b51
// asm:   0x5d31b35: jmp 0x5d31b51
// asm:   0x5d31b37: jmp 0x5d31b51
// asm:   0x5d31b39: jmp 0x5d31b51
// asm:   0x5d31b3b: jmp 0x5d31b51
// asm:   0x5d31b3d: jmp 0x5d31b51
// asm:   0x5d31b3f: jmp 0x5d31b51
// asm:   0x5d31b41: jmp 0x5d31b51
// asm:   0x5d31b43: jmp 0x5d31b51
// asm:   0x5d31b45: jmp 0x5d31b51
// asm:   0x5d31b47: jmp 0x5d31b51
// asm:   0x5d31b49: jmp 0x5d31b51
// asm:   0x5d31b4b: jmp 0x5d31b51
// asm:   0x5d31b4d: jmp 0x5d31b51
// asm:   0x5d31b4f: jmp 0x5d31b51
// asm:   0x5d31b51: mov r14, rax
// asm:   0x5d31b54: cmp edx, 1
// asm:   0x5d31b57: jne 0x5d31b96
// asm:   0x5d31b59: mov rdi, r14
// asm:   0x5d31b5c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d31b61: mov rbx, qword ptr [rax]
// asm:   0x5d31b64: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d31b69: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d31b6e: lea rax, [rip + 0x155bc7b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_Dispose
// asm:   0x5d31b75: mov rsi, qword ptr [rax]
// asm:   0x5d31b78: lea rdi, [rsp + 0x10]
// asm:   0x5d31b7d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d31b82: test rbx, rbx
// asm:   0x5d31b85: je 0x5d31a78
// asm:   0x5d31b8b: mov rdi, rbx
// asm:   0x5d31b8e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d31b93: mov r14, rax
// asm:   0x5d31b96: lea rdi, [rsp + 0x30]
// asm:   0x5d31b9b: call 0x2fdc490  ; il2cpp_runtime_helper_02fdc490()
// asm:   0x5d31ba0: mov rdi, r14
// asm:   0x5d31ba3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d31ba8: mov rdi, rax
// asm:   0x5d31bab: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_ItemHandler__GetItemWheelOptions(UI_ItemHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_BaseUseable__o *__this_00;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  float fVar10;
  int32_t local_6c;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Characters_BaseUseable_o *local_38;
  
  if (Il2CppMethodInitialized_07547e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_07547e2b = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  local_6c = 0;
  pGVar3 = (__this->fields)._inGameManager;
  if (pGVar3 == (GameManagers_InGameManager_o *)0x0) {
label_05d31a8a:
    ThrowNullReferenceException();
  }
  x = (pGVar3->fields).CurrentCharacter;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((x == (Characters_BaseCharacter_o *)0x0) ||
       (__this_00 = (x->fields).Items, __this_00 == (System_Collections_Generic_List_BaseUseable__o *)0x0))
    goto label_05d31a8a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseUseable_GetEnumerator);
    local_68.fields._current = (Il2CppObject *)local_38;
    local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_68;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_MoveNext);
      pIVar6 = local_68.fields._current;
      if (bVar7) {
        if ((Characters_BaseUseable_o *)local_68.fields._current != (Characters_BaseUseable_o *)0x0) {
          pSVar9 = ((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->Name;
          if (((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->MaxUses == -1) {
            fVar10 = Characters_BaseUseable__GetCooldownLeft
                               ((Characters_BaseUseable_o *)local_68.fields._current,(MethodInfo *)0x0);
            if (0.0 < fVar10) {
              fVar10 = Characters_BaseUseable__GetCooldownLeft
                                 ((Characters_BaseUseable_o *)pIVar6,(MethodInfo *)0x0);
              local_6c = (int32_t)fVar10;
              pSVar8 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
              System_String__Concat_5302810
                        (pSVar9," (",pSVar8,")",(MethodInfo *)0x0);
            }
          }
          else {
            pSVar8 = System_Int32__ToString
                               (&((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->
                                 UsesLeft,(MethodInfo *)0x0);
            System_String__Concat_5302810
                      (pSVar9," (",pSVar8,")",(MethodInfo *)0x0);
          }
label_05d31b2c:
          ThrowNullReferenceException();
        }
label_05d31a99:
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_MoveNext);
        pIVar6 = local_68.fields._current;
        if (!bVar7) break;
        if ((Characters_BaseUseable_o *)local_68.fields._current == (Characters_BaseUseable_o *)0x0)
        goto label_05d31a99;
        pSVar9 = ((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->Name;
        if (((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->MaxUses == -1) {
          fVar10 = Characters_BaseUseable__GetCooldownLeft
                             ((Characters_BaseUseable_o *)local_68.fields._current,(MethodInfo *)0x0);
          if (0.0 < fVar10) {
            fVar10 = Characters_BaseUseable__GetCooldownLeft
                               ((Characters_BaseUseable_o *)pIVar6,(MethodInfo *)0x0);
            local_6c = (int32_t)fVar10;
            pSVar8 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat_5302810
                               (pSVar9," (",pSVar8,")",(MethodInfo *)0x0);
          }
        }
        else {
          pSVar8 = System_Int32__ToString
                             (&((Characters_BaseUseable_Fields *)((long)local_68.fields._current + 0x10))->
                               UsesLeft,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat_5302810
                             (pSVar9," (",pSVar8,")",(MethodInfo *)0x0);
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_05d31b2c;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_Dispose
              );
  }
  return __this_01;
}


// UI.ItemHandler$$.ctor
// il2cpp: void UI_ItemHandler___ctor (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31d60

void UI_ItemHandler___ctor(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$<Awake>b__3_0
// il2cpp: void UI_ItemHandler___Awake_b__3_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31d70

void UI_ItemHandler___Awake_b__3_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_ItemHandler__SetItemWheel(__this,false,in_RDX);
  return;
}


// UI.ItemHandler$$<SetItemWheel>b__6_0
// il2cpp: void UI_ItemHandler___SetItemWheel_b__6_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31d80

void UI_ItemHandler___SetItemWheel_b__6_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__OnItemWheelSelect(__this,method);
  return;
}


// UI.ItemHandler$$<UpdateForever>b__7_0
// il2cpp: void UI_ItemHandler___UpdateForever_b__7_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x5d31d90

void UI_ItemHandler___UpdateForever_b__7_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__OnItemWheelSelect(__this,method);
  return;
}


