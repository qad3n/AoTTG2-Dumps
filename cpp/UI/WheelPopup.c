// Type: UI.WheelPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/WheelPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// --------------------------------

// UI.WheelPopup$$get_PlayEscapeSound
// il2cpp: bool UI_WheelPopup__get_PlayEscapeSound (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_WheelPopup__get_PlayEscapeSound(UI_WheelPopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.WheelPopup$$get_AnimationTime
// il2cpp: float UI_WheelPopup__get_AnimationTime (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x182245d40

float
UI_WheelPopup__get_AnimationTime(UI_WheelPopup_o* __this, MethodInfo* method)

{
  return 0.2;
}


// UI.WheelPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_WheelPopup__get_PopupAnimationType (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_WheelPopup__get_PopupAnimationType(UI_WheelPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.WheelPopup$$DismissFromEscape
// il2cpp: bool UI_WheelPopup__DismissFromEscape (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x182284310

bool UI_WheelPopup__DismissFromEscape(UI_WheelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool bVar2;
  
  if ((__this->fields).OnCancel != (UnityEngine_Events_UnityAction_o *)0x0) {
    pUVar1 = (__this->fields).OnCancel;
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    return true;
  }
  bVar2 = UI_BasePopup__DismissFromEscape((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return bVar2;
}


// UI.WheelPopup$$Setup
// il2cpp: void UI_WheelPopup__Setup (UI_WheelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182284390

void UI_WheelPopup__Setup(UI_WheelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this_00;
  
  if (Il2CppMethodInitialized_18434739d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameWheelView);
    Il2CppMethodInitialized_18434739d = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(pUVar1,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameWheelView);
  Gisketch_Aottg2UI_Game_AottgInGameWheelView___ctor(__this_00,pUVar1,(MethodInfo *)0x0);
  (__this->fields)._view = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view,__this_00);
  return;
}


// UI.WheelPopup$$Show
// il2cpp: void UI_WheelPopup__Show (UI_WheelPopup_o* __this, System_String_o* openKey, System_Collections_Generic_List_string__o* options, UnityEngine_Events_UnityAction_o* callback, System_String_o* title, bool showNext, const MethodInfo* method);
// 0x182284450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182284615: nop word ptr [rax + rax]

void UI_WheelPopup__Show(UI_WheelPopup_o *__this,System_String_o *openKey,
                        System_Collections_Generic_List_string__o *options,
                        UnityEngine_Events_UnityAction_o *callback,System_String_o *title,bool showNext,
                        MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_InputSettings_o *pSVar4;
  Settings_InteractionInputSettings_o *pSVar5;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  Il2CppClass *pIVar6;
  Settings_KeybindSetting_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this_01;
  MethodInfo *pMVar8;
  bool bVar9;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  System_String_o *str3;
  int32_t capacity;
  int iVar13;
  float alpha;
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_18434739e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"No options available");
    il2cpp_codegen_initialize_runtime_metadata(&"Emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&" - ");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Empty");
    Il2CppMethodInitialized_18434739e = '\x01';
  }
  local_28[0] = 0;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    bVar9 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
    if (bVar9) {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      alpha = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
      UI_BasePopup__SetTransformAlpha((UI_BasePopup_o *)__this,alpha,(MethodInfo *)0x0);
    }
    (__this->fields)._callback = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._callback,callback);
    if (options != (System_Collections_Generic_List_string__o *)0x0) {
      iVar13 = (options->fields)._size;
      capacity = 8;
      if (iVar13 < 8) {
        capacity = iVar13;
      }
      (__this->fields)._optionCount = capacity;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_T__o *)__this_03,capacity,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
      iVar13 = 0;
      if (0 < (__this->fields)._optionCount) {
        do {
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
          if ((pSVar4 == (Settings_InputSettings_o *)0x0) ||
             (pSVar5 = (pSVar4->fields).Interaction, pSVar5 == (Settings_InteractionInputSettings_o *)0x0))
          goto label_1822849a1;
          __this_00 = (pSVar5->fields).Settings;
          local_28[0] = iVar13 + 1;
          pSVar10 = System_Int32__ToString(local_28,(MethodInfo *)0x0);
          pSVar10 = System_String__Concat_1969e50("QuickSelect",pSVar10,(MethodInfo *)0x0);
          if ((__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
             (pIVar11 = System_Collections_Specialized_OrderedDictionary__get_Item
                                  (__this_00,(Il2CppObject *)pSVar10,(MethodInfo *)0x0),
             pIVar11 == (Il2CppObject *)0x0)) goto label_1822849a1;
          pIVar6 = pIVar11->klass;
          bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
          if (((pIVar6->_2).typeHierarchyDepth < bVar2) ||
             ((pIVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar11,TypeInfo_Settings_KeybindSetting);
          }
          pSVar10 = (System_String_o *)(*pIVar6->vtable[3].methodPtr)(pIVar11,pIVar6->vtable[3].method);
          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822849a1;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (__this_03->fields)._items;
          if (pSVar12 == (System_String_array *)0x0) goto label_1822849a1;
          uVar3 = (__this_03->fields)._size;
          if (uVar3 < (uint)pSVar12->max_length) {
            (__this_03->fields)._size = uVar3 + 1;
            if ((uint)pSVar12->max_length <= uVar3) goto label_1822849b3;
            pSVar12->m_Items[(int)uVar3] = pSVar10;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3,pSVar10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar10,
                       (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (__this->fields)._optionCount);
      }
      if ((__this->fields)._optionCount == 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                            ("InGameMenu.Wheel.Empty","No options available",(MethodInfo *)0x0);
        pSVar10 = System_String__Concat_1969e50(pSVar10,"\n",(MethodInfo *)0x0);
      }
      else {
        pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if (showNext) {
        pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
        if (pSVar12 == (System_String_array *)0x0) goto label_1822849a1;
        if ((int)pSVar12->max_length == 0) goto label_1822849b3;
        pSVar12->m_Items[0] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar10);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if ((pSVar4 == (Settings_InputSettings_o *)0x0) ||
           (pSVar5 = (pSVar4->fields).Interaction, pSVar5 == (Settings_InteractionInputSettings_o *)0x0))
        goto label_1822849a1;
        pSVar7 = (pSVar5->fields).MenuNext;
        if (pSVar7 == (Settings_KeybindSetting_o *)0x0) {
          pSVar10 = (System_String_o *)0x0;
        }
        else {
          pSVar10 = (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                              (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
        }
        if ((uint)pSVar12->max_length < 2) {
label_1822849b3:
          ThrowIndexOutOfRangeException();
        }
        pSVar12->m_Items[1] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar10);
        pSVar10 = " - ";
        if ((uint)pSVar12->max_length < 3) goto label_1822849b3;
        pSVar12->m_Items[2] = " - ";
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 2,pSVar10);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar10 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
        if ((uint)pSVar12->max_length < 4) goto label_1822849b3;
        pSVar12->m_Items[3] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 3,pSVar10);
        pSVar10 = "\n";
        if ((uint)pSVar12->max_length < 5) goto label_1822849b3;
        pSVar12->m_Items[4] = "\n";
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 4,pSVar10);
        pSVar10 = System_String__Concat_1969830(pSVar12,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      str3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_1969590(pSVar10,openKey," - ",str3,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._view;
      if (title == (System_String_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("InGameMenu.Wheel.Emotes","Emotes",(MethodInfo *)0x0);
      }
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show
                  (__this_01,title,pSVar10,(System_Collections_Generic_IReadOnlyList_string__o *)options,
                   (System_Collections_Generic_IReadOnlyList_string__o *)__this_03,(MethodInfo *)0x0);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822849a1:
  ThrowNullReferenceException();
}


// UI.WheelPopup$$OnButtonClick
// il2cpp: void UI_WheelPopup__OnButtonClick (UI_WheelPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x182284350

void UI_WheelPopup__OnButtonClick(UI_WheelPopup_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if ((((__this->fields).IsActive != false) && (-1 < index)) && (index < (__this->fields)._optionCount)) {
    pUVar1 = (__this->fields)._callback;
    (__this->fields).SelectedItem = index;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      return;
    }
  }
  return;
}


// UI.WheelPopup$$Update
// il2cpp: void UI_WheelPopup__Update (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x1822849c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182284a25: mov qword ptr [rsp + 0x40], rsi
// asm:   0x182284a2a: nop word ptr [rax + rax]
// asm:   0x182284af0: mov rsi, qword ptr [rsp + 0x40]
// asm:   0x182284af5: mov rbx, qword ptr [rsp + 0x38]

void UI_WheelPopup__Update(UI_WheelPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  bool bVar5;
  System_String_o *pSVar6;
  Settings_KeybindSetting_o *__this_01;
  int iVar7;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434739f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect");
    Il2CppMethodInitialized_18434739f = '\x01';
  }
  local_res8[0] = 0;
  if (((__this->fields).IsActive != false) && (iVar7 = 0, 0 < (__this->fields)._optionCount)) {
    do {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if ((pSVar2 == (Settings_InputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Interaction, pSVar3 == (Settings_InteractionInputSettings_o *)0x0)) {
label_182284b42:
        ThrowNullReferenceException();
      }
      __this_00 = (pSVar3->fields).Settings;
      local_res8[0] = iVar7 + 1;
      pSVar6 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969e50("QuickSelect",pSVar6,(MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
         (__this_01 = (Settings_KeybindSetting_o *)
                      System_Collections_Specialized_OrderedDictionary__get_Item
                                (__this_00,(Il2CppObject *)pSVar6,(MethodInfo *)0x0),
         __this_01 == (Settings_KeybindSetting_o *)0x0)) goto label_182284b42;
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_KeybindSetting);
      }
      bVar5 = Settings_KeybindSetting__GetKeyDown(__this_01,false,(MethodInfo *)0x0);
      if (bVar5) {
        if ((__this->fields).IsActive == false) {
          return;
        }
        if (iVar7 < 0) {
          return;
        }
        if ((__this->fields)._optionCount <= iVar7) {
          return;
        }
        pUVar4 = (__this->fields)._callback;
        (__this->fields).SelectedItem = iVar7;
        if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
          return;
        }
        (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (__this->fields)._optionCount);
  }
  return;
}


// UI.WheelPopup$$.ctor
// il2cpp: void UI_WheelPopup___ctor (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_WheelPopup___ctor(UI_WheelPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


