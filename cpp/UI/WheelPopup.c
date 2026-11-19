// Type: UI.WheelPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/WheelPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// --------------------------------

// UI.WheelPopup$$get_PlayEscapeSound
// il2cpp: bool UI_WheelPopup__get_PlayEscapeSound (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54140

bool UI_WheelPopup__get_PlayEscapeSound(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return false;
}


// UI.WheelPopup$$get_AnimationTime
// il2cpp: float UI_WheelPopup__get_AnimationTime (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54150

float UI_WheelPopup__get_AnimationTime(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.WheelPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_WheelPopup__get_PopupAnimationType (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54160

int32_t UI_WheelPopup__get_PopupAnimationType(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.WheelPopup$$DismissFromEscape
// il2cpp: bool UI_WheelPopup__DismissFromEscape (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54170

bool UI_WheelPopup__DismissFromEscape(UI_WheelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool bVar2;
  
  pUVar1 = (__this->fields).OnCancel;
  if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
    bVar2 = UI_BasePopup__DismissFromEscape((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return bVar2;
  }
  (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  return true;
}


// UI.WheelPopup$$Setup
// il2cpp: void UI_WheelPopup__Setup (UI_WheelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d541a0

void UI_WheelPopup__Setup(UI_WheelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameWheelView);
    Il2CppMethodInitialized_07547f16 = '\x01';
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  return;
}


// UI.WheelPopup$$Show
// il2cpp: void UI_WheelPopup__Show (UI_WheelPopup_o* __this, System_String_o* openKey, System_Collections_Generic_List_string__o* options, UnityEngine_Events_UnityAction_o* callback, System_String_o* title, bool showNext, const MethodInfo* method);
// 0x5d54250

void UI_WheelPopup__Show(UI_WheelPopup_o *__this,System_String_o *openKey,
                        System_Collections_Generic_List_string__o *options,
                        UnityEngine_Events_UnityAction_o *callback,System_String_o *title,bool showNext,
                        MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  Settings_InputSettings_o *pSVar5;
  Settings_InteractionInputSettings_o *pSVar6;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  Il2CppClass *pIVar8;
  System_String_array *pSVar9;
  Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this_00;
  Settings_KeybindSetting_o *pSVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  int iVar13;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  System_String_o *second;
  int iVar17;
  int32_t capacity;
  undefined7 in_register_00000089;
  float alpha;
  int32_t local_50;
  undefined4 local_4c;
  System_Collections_Generic_List_string__o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  local_38 = title;
  if (Il2CppMethodInitialized_07547f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&" - ");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Empty");
    Il2CppMethodInitialized_07547f17 = '\x01';
  }
  local_50 = 0;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05d547fd;
  bVar12 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
  if (bVar12) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    alpha = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
    UI_BasePopup__SetTransformAlpha((UI_BasePopup_o *)__this,alpha,(MethodInfo *)0x0);
  }
  local_4c = (undefined4)CONCAT71(in_register_00000089,showNext);
  (__this->fields)._callback = callback;
  local_40 = openKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callback);
  if (options == (System_Collections_Generic_List_string__o *)0x0) goto label_05d547fd;
  iVar13 = (options->fields)._size;
  capacity = 8;
  if (iVar13 < 8) {
    capacity = iVar13;
  }
  (__this->fields)._optionCount = capacity;
  local_48 = options;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395c990
            ((System_Collections_Generic_List_object__o *)__this_02,capacity,
             (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
  iVar13 = (__this->fields)._optionCount;
  if (0 < iVar13) {
    if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if ((pSVar5 != (Settings_InputSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).Interaction, pSVar6 != (Settings_InteractionInputSettings_o *)0x0)) {
        pSVar7 = (pSVar6->fields).Settings;
        local_50 = 1;
        pSVar14 = System_Int32__ToString(&local_50,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_52f0320("QuickSelect",pSVar14,(MethodInfo *)0x0);
        if ((pSVar7 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) &&
           (pIVar15 = System_Collections_Specialized_OrderedDictionary__get_Item
                                (pSVar7,(Il2CppObject *)pSVar14,(MethodInfo *)0x0),
           pIVar15 != (Il2CppObject *)0x0)) {
          pIVar8 = pIVar15->klass;
          bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
          if ((bVar2 <= (pIVar8->_2).typeHierarchyDepth) &&
             ((pIVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_KeybindSetting)
             ) {
            (*pIVar8->vtable[3].methodPtr)(pIVar15,pIVar8->vtable[3].method);
            ThrowNullReferenceException();
          }
label_05d54841:
          il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
        }
      }
      goto label_05d547fd;
    }
    iVar17 = 0;
    do {
      while( true ) {
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if ((pSVar5 == (Settings_InputSettings_o *)0x0) ||
           (pSVar6 = (pSVar5->fields).Interaction, pSVar6 == (Settings_InteractionInputSettings_o *)0x0))
        goto label_05d547fd;
        pSVar7 = (pSVar6->fields).Settings;
        iVar17 = iVar17 + 1;
        local_50 = iVar17;
        pSVar14 = System_Int32__ToString(&local_50,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_52f0320("QuickSelect",pSVar14,(MethodInfo *)0x0);
        if ((pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
           (pIVar15 = System_Collections_Specialized_OrderedDictionary__get_Item
                                (pSVar7,(Il2CppObject *)pSVar14,(MethodInfo *)0x0),
           pIVar15 == (Il2CppObject *)0x0)) goto label_05d547fd;
        pIVar8 = pIVar15->klass;
        bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
        if (((pIVar8->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_KeybindSetting))
        goto label_05d54841;
        pSVar14 = (System_String_o *)(*pIVar8->vtable[3].methodPtr)(pIVar15,pIVar8->vtable[3].method);
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_02->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) goto label_05d547fd;
        uVar3 = (__this_02->fields)._size;
        if ((uint)pSVar9->max_length <= uVar3) break;
        (__this_02->fields)._size = uVar3 + 1;
        pSVar9->m_Items[(int)uVar3] = pSVar14;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
        iVar13 = (__this->fields)._optionCount;
        if (iVar13 <= iVar17) goto label_05d54557;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar14,
                 (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      iVar13 = (__this->fields)._optionCount;
    } while (iVar17 < iVar13);
  }
label_05d54557:
  if (iVar13 == 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar14 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("InGameMenu.Wheel.Empty",(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_52f0320(pSVar14,"\n",(MethodInfo *)0x0);
    if ((char)local_4c == '\0') goto label_05d54586;
label_05d546b6:
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar5 == (Settings_InputSettings_o *)0x0) ||
        (pSVar6 = (pSVar5->fields).Interaction, pSVar6 == (Settings_InteractionInputSettings_o *)0x0)) ||
       (pSVar10 = (pSVar6->fields).MenuNext, pSVar10 == (Settings_KeybindSetting_o *)0x0)) goto label_05d547fd;
    pSVar16 = (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    second = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar16 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                        (pSVar16," - ",second,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_5301f10(pSVar14,pSVar16,"\n",(MethodInfo *)0x0);
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((char)local_4c != '\0') goto label_05d546b6;
label_05d54586:
    uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar16 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar16 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                      (local_40," - ",pSVar16,(MethodInfo *)0x0);
  pSVar16 = System_String__Concat_52f0320(pSVar14,pSVar16,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._view;
  pSVar14 = local_38;
  if (local_38 == (System_String_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar14 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.Emotes",(MethodInfo *)0x0);
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show
              (__this_00,pSVar14,pSVar16,(System_Collections_Generic_IReadOnlyList_string__o *)local_48,
               (System_Collections_Generic_IReadOnlyList_string__o *)__this_02,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_05d547fd:
  ThrowNullReferenceException();
}


// UI.WheelPopup$$OnButtonClick
// il2cpp: void UI_WheelPopup__OnButtonClick (UI_WheelPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x5d54850

void UI_WheelPopup__OnButtonClick(UI_WheelPopup_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtableDispatch;
  
  if (((-1 < index) && ((__this->fields).IsActive != false)) && (index < (__this->fields)._optionCount)) {
    (__this->fields).SelectedItem = index;
    pUVar1 = (__this->fields)._callback;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,method,vtableDispatch);
      return;
    }
  }
  return;
}


// UI.WheelPopup$$Update
// il2cpp: void UI_WheelPopup__Update (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54890

void UI_WheelPopup__Update(UI_WheelPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  bool bVar5;
  uint in_EAX;
  System_String_o *pSVar6;
  Settings_KeybindSetting_o *__this_01;
  int iVar7;
  int iVar8;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect");
    Il2CppMethodInitialized_07547f18 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if ((__this->fields).IsActive != false) {
    iVar7 = -1;
    do {
      iVar8 = iVar7 + 1;
      if ((__this->fields)._optionCount <= iVar8) {
        return;
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if ((pSVar2 == (Settings_InputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Interaction, pSVar3 == (Settings_InteractionInputSettings_o *)0x0)) {
label_05d549f3:
        ThrowNullReferenceException();
      }
      __this_00 = (pSVar3->fields).Settings;
      uStack_38 = CONCAT44(iVar7 + 2,(uint)uStack_38);
      pSVar6 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_52f0320("QuickSelect",pSVar6,(MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
         (__this_01 = (Settings_KeybindSetting_o *)
                      System_Collections_Specialized_OrderedDictionary__get_Item
                                (__this_00,(Il2CppObject *)pSVar6,(MethodInfo *)0x0),
         __this_01 == (Settings_KeybindSetting_o *)0x0)) goto label_05d549f3;
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      bVar5 = Settings_KeybindSetting__GetKeyDown(__this_01,false,(MethodInfo *)0x0);
      iVar7 = iVar8;
    } while (!bVar5);
    if (((__this->fields).IsActive != false) && (iVar8 < (__this->fields)._optionCount)) {
      (__this->fields).SelectedItem = iVar8;
      pUVar4 = (__this->fields)._callback;
      if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
      }
    }
  }
  return;
}


// UI.WheelPopup$$.ctor
// il2cpp: void UI_WheelPopup___ctor (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x5d54a00

void UI_WheelPopup___ctor(UI_WheelPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


