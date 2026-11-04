// Type: UI.ItemHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ItemHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ItemHandler.cs
// --------------------------------

// UI.ItemHandler.<UpdateForever>d__8$$.ctor
// il2cpp: void UI_ItemHandler__UpdateForever_d__8___ctor (UI_ItemHandler__UpdateForever_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_ItemHandler__UpdateForever_d__8___ctor(UI_ItemHandler__UpdateForever_d__8_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_IDisposable_Dispose (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_ItemHandler__UpdateForever_d__8__System_IDisposable_Dispose(UI_ItemHandler__UpdateForever_d__8_o* __this, MethodInfo* method)

{
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$MoveNext
// il2cpp: bool UI_ItemHandler__UpdateForever_d__8__MoveNext (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x18226df00

bool UI_ItemHandler__UpdateForever_d__8__MoveNext
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  byte bVar1;
  int iVar2;
  UI_ItemHandler_o *__this_00;
  Settings_InputSettings_o *pSVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  UI_WheelPopup_o *__this_01;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_02;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_1843472af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_UpdateForever_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Items");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Items");
    Il2CppMethodInitialized_1843472af = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
label_18226dfa3:
    amplificationFactor = (__this->fields).delay;
    __this_02 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_02,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 != 1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_ItemHandler_o *)0x0) {
    if ((__this_00->fields).IsActive == false) goto label_18226dfa3;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Interaction, pSVar4 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).ItemMenu, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
      __this_01 = (UI_WheelPopup_o *)(__this_00->fields)._itemWheelPopup;
      openKey = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                          (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
      options = UI_ItemHandler__GetItemWheelOptions(__this_00,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_UI_ItemHandler_UpdateForever_b__8_0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("InGameMenu.Wheel.Items","Items",(MethodInfo *)0x0);
      if (__this_01 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_WheelPopup);
        }
        UI_WheelPopup__Show(__this_01,openKey,options,__this_03,title,false,(MethodInfo *)0x0);
        goto label_18226dfa3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ItemHandler__UpdateForever_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_ItemHandler__UpdateForever_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_Reset (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x18226e150

void UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_Reset
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ItemHandler_UpdateForever_d__8_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_get_Current(UI_ItemHandler__UpdateForever_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler$$Awake
// il2cpp: void UI_ItemHandler__Awake (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255030

void UI_ItemHandler__Awake(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *value;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_BasePopup_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843472a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_Awake_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/WheelMenu");
    Il2CppMethodInitialized_1843472a9 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/WheelMenu",false,
                         (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup
                        );
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._itemWheelPopup = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._itemWheelPopup,pUVar2);
    pUVar2 = (__this->fields)._itemWheelPopup;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ItemHandler_Awake_b__4_0,(MethodInfo *)0x0);
    if (pUVar2 != (UI_BasePopup_o *)0x0) {
      bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
      (*(uint64_t *)((char *)pUVar2 + 0xc0)) = (System_Threading_CancellationTokenSource_o *)__this_01;
      bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pUVar2 + 0xc0)),__this_01);
      value = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (value == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        (__this->fields)._inGameManager = value;
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler$$Start
// il2cpp: void UI_ItemHandler__Start (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x1822558d0

void UI_ItemHandler__Start(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__UpdateForever_d__8_o *routine;
  
  if (Il2CppMethodInitialized_1843472ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ItemHandler_UpdateForever_d__8);
    Il2CppMethodInitialized_1843472ab = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ItemHandler_UpdateForever_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  (routine->fields).delay = 1.0;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$ToggleItemWheel
// il2cpp: void UI_ItemHandler__ToggleItemWheel (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255950

void UI_ItemHandler__ToggleItemWheel(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__SetItemWheel(__this,(__this->fields).IsActive == false,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$SetItemWheel
// il2cpp: void UI_ItemHandler__SetItemWheel (UI_ItemHandler_o* __this, bool enable, const MethodInfo* method);
// 0x1822556e0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182255887: mov qword ptr [rsp + 0x30], 0
// asm:   0x182255890: mov r9, rsi
// asm:   0x182255893: mov byte ptr [rsp + 0x28], 0
// asm:   0x182255898: mov r8, r14
// asm:   0x18225589b: mov rdx, rbp
// asm:   0x18225589e: mov qword ptr [rsp + 0x20], rax
// asm:   0x1822558a3: mov rcx, rdi
// asm:   0x1822558a6: call 0x182284450  ; UI_WheelPopup__Show()
// asm:   0x1822558ab: mov byte ptr [rbx + 0x28], 1
// asm:   0x1822558af: jmp 0x182255789

void UI_ItemHandler__SetItemWheel(UI_ItemHandler_o *__this,bool enable,MethodInfo *method)

{
  byte bVar1;
  UI_BasePopup_o *pUVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  UI_WheelPopup_o *__this_00;
  bool bVar6;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_1843472aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_SetItemWheel_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Items");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Items");
    Il2CppMethodInitialized_1843472aa = '\x01';
  }
  if (enable) {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar6) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Interaction, pSVar4 != (Settings_InteractionInputSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).ItemMenu, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
        __this_00 = (UI_WheelPopup_o *)(__this->fields)._itemWheelPopup;
        openKey = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                            (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
        options = UI_ItemHandler__GetItemWheelOptions(__this,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_ItemHandler_SetItemWheel_b__7_0,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("InGameMenu.Wheel.Items","Items",(MethodInfo *)0x0);
        if (__this_00 != (UI_WheelPopup_o *)0x0) {
          bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
            UI_WheelPopup__Show(__this_00,openKey,options,__this_01,title,false,(MethodInfo *)0x0);
            (__this->fields).IsActive = true;
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_WheelPopup);
        }
      }
      goto label_1822558b4;
    }
  }
  else {
    pUVar2 = (__this->fields)._itemWheelPopup;
    if (pUVar2 == (UI_BasePopup_o *)0x0) {
label_1822558b4:
      ThrowNullReferenceException();
    }
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
  }
  return;
}


// UI.ItemHandler$$UpdateForever
// il2cpp: System_Collections_IEnumerator_o* UI_ItemHandler__UpdateForever (UI_ItemHandler_o* __this, float delay, const MethodInfo* method);
// 0x182255a10

System_Collections_IEnumerator_o *
UI_ItemHandler__UpdateForever(UI_ItemHandler_o *__this,float delay,MethodInfo *method)

{
  UI_ItemHandler__UpdateForever_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_1843472ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ItemHandler_UpdateForever_d__8);
    Il2CppMethodInitialized_1843472ab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ItemHandler_UpdateForever_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.ItemHandler$$OnItemWheelSelect
// il2cpp: void UI_ItemHandler__OnItemWheelSelect (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255520

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
  
  if (Il2CppMethodInitialized_1843472ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_1843472ac = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar4 = (__this->fields)._itemWheelPopup, pUVar4 != (UI_BasePopup_o *)0x0)) {
    bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
    x = (pGVar3->fields).CurrentCharacter;
    iVar2 = *(int *)((longlong)&(*(uint64_t *)((char *)pUVar4 + 0xb0)) + 4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar5 = (x->fields).Items, pSVar5 == (System_Collections_Generic_List_BaseUseable__o *)0x0))
      goto label_1822556c2;
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
           ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          *(undefined1 *)&(*(uint64_t *)((char *)pUVar6 + 0x168)) = 1;
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
    }
  }
label_1822556c2:
  ThrowNullReferenceException();
}


// UI.ItemHandler$$GetItemWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_ItemHandler__GetItemWheelOptions (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255270
// eh: try 0x1822553e0..0x182255517 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822554c1: mov rdx, qword ptr [rip + 0x1e217e8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_Dispose
// asm:   0x1822554c8: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822554cd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822554d2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822554d7: test rcx, rcx
// asm:   0x1822554da: jne 0x182255517
// asm:   0x1822554dc: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x182255517: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_Collections_Generic_List_string__o *
UI_ItemHandler__GetItemWheelOptions(UI_ItemHandler_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_BaseUseable__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar3;
  System_String_o *str0;
  float fVar4;
  int32_t local_res8 [2];
  undefined1 local_60 [16];
  Characters_BaseUseable_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48 [2];
  
  if (Il2CppMethodInitialized_1843472ad == '\0') {
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
    Il2CppMethodInitialized_1843472ad = '\x01';
  }
  local_48[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48[0].fields._index = 0;
  local_48[0].fields._version = 0;
  local_48[0].fields._current = (Il2CppObject *)0x0;
  local_res8[0] = 0;
  pGVar1 = (__this->fields)._inGameManager;
  if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
    x = (pGVar1->fields).CurrentCharacter;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (__this_00 = (x->fields).Items, __this_00 == (System_Collections_Generic_List_BaseUseable__o *)0x0))
      goto label_182255505;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseUseable_GetEnumerator);
      local_48[0].fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48[0].fields._index = local_60._8_4_;
      local_48[0].fields._version = local_60._12_4_;
      local_48[0].fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (local_48,(MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_MoveNext
                          );
        __this_01 = local_48[0].fields._current;
        if (!bVar2) break;
        if ((Characters_BaseUseable_o *)local_48[0].fields._current == (Characters_BaseUseable_o *)0x0) {
          ThrowNullReferenceException();
        }
        str0 = ((Characters_BaseUseable_Fields *)((longlong)local_48[0].fields._current + 0x10))->Name;
        if (((Characters_BaseUseable_Fields *)((longlong)local_48[0].fields._current + 0x10))->MaxUses == -1)
        {
          fVar4 = Characters_BaseUseable__GetCooldownLeft
                            ((Characters_BaseUseable_o *)local_48[0].fields._current,(MethodInfo *)0x0);
          if (0.0 < fVar4) {
            fVar4 = Characters_BaseUseable__GetCooldownLeft
                              ((Characters_BaseUseable_o *)__this_01,(MethodInfo *)0x0);
            local_res8[0] = (int32_t)fVar4;
            pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
            str0 = System_String__Concat_1969590
                             (str0," (",pSVar3,")",(MethodInfo *)0x0);
          }
        }
        else {
          pSVar3 = System_Int32__ToString
                             (&((Characters_BaseUseable_Fields *)
                               ((longlong)local_48[0].fields._current + 0x10))->UsesLeft,(MethodInfo *)0x0);
          str0 = System_String__Concat_1969590
                           (str0," (",pSVar3,")",(MethodInfo *)0x0);
        }
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_02,str0,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseUseable_Dispose);
    }
    return __this_02;
  }
label_182255505:
  ThrowNullReferenceException();
}


// UI.ItemHandler$$.ctor
// il2cpp: void UI_ItemHandler___ctor (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ItemHandler___ctor(UI_ItemHandler_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$.cctor
// il2cpp: void UI_ItemHandler___cctor (const MethodInfo* method);
// 0x182255a90

void UI_ItemHandler___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_1843472ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ItemHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Flare1");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare2");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare3");
    Il2CppMethodInitialized_1843472ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Flare1";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182255c71;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182255c77;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = "Flare2";
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182255c71;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182255c77;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = "Flare3";
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_182255c77:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      TypeInfo_UI_ItemHandler->static_fields->AvailableItems = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ItemHandler->static_fields->AvailableItems,__this);
      return;
    }
  }
label_182255c71:
  ThrowNullReferenceException();
}


// UI.ItemHandler$$<Awake>b__4_0
// il2cpp: void UI_ItemHandler___Awake_b__4_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255960

void UI_ItemHandler___Awake_b__4_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843472aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ItemHandler_SetItemWheel_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Items");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Items");
    Il2CppMethodInitialized_1843472aa = '\x01';
  }
  pUVar1 = (__this->fields)._itemWheelPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
    return;
  }
  ThrowNullReferenceException();
}


// UI.ItemHandler$$<SetItemWheel>b__7_0
// il2cpp: void UI_ItemHandler___SetItemWheel_b__7_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255a00

void
UI_ItemHandler___SetItemWheel_b__7_0(UI_ItemHandler_o* __this, MethodInfo* method)

{
  UI_ItemHandler__OnItemWheelSelect(__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$<UpdateForever>b__8_0
// il2cpp: void UI_ItemHandler___UpdateForever_b__8_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x182255a00

void UI_ItemHandler___UpdateForever_b__8_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UI_ItemHandler__OnItemWheelSelect(__this,(MethodInfo *)0x0);
  return;
}


