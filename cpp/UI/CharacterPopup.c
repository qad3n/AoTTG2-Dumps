// Type: UI.CharacterPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// --------------------------------

// UI.CharacterPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterPopup__get_EscapeBehavior (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05400

int32_t UI_CharacterPopup__get_EscapeBehavior(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.CharacterPopup$$DismissFromEscape
// il2cpp: bool UI_CharacterPopup__DismissFromEscape (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05410

bool UI_CharacterPopup__DismissFromEscape(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07547d1c = '\x01';
  }
  __this_00 = (__this->fields)._Dropdowns_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
      return true;
    }
  }
  bVar1 = UI_BasePopup__DismissFromEscape((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// UI.CharacterPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterPopup__get_Title (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05480

System_String_o * UI_CharacterPopup__get_Title(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.CharacterPopup$$get_Width
// il2cpp: float UI_CharacterPopup__get_Width (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d054a0

float UI_CharacterPopup__get_Width(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.CharacterPopup$$get_Height
// il2cpp: float UI_CharacterPopup__get_Height (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d054b0

float UI_CharacterPopup__get_Height(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547d1d = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).PVP, pSVar3 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return *(float *)(&g_data_0100b030 + (ulong)((pSVar3->fields)._value == 2) * 4);
}


// UI.CharacterPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_CharacterPopup__get_PopupAnimationType (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05530

int32_t UI_CharacterPopup__get_PopupAnimationType(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CharacterPopup$$get_CategoryPanel
// il2cpp: bool UI_CharacterPopup__get_CategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05540

bool UI_CharacterPopup__get_CategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CharacterPopup$$get_CategoryButtons
// il2cpp: bool UI_CharacterPopup__get_CategoryButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05550

bool UI_CharacterPopup__get_CategoryButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CharacterPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CharacterPopup__get_DefaultCategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05560

System_String_o * UI_CharacterPopup__get_DefaultCategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d1e = '\x01';
  }
  return "";
}


// UI.CharacterPopup$$get_Picker
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* UI_CharacterPopup__get_Picker (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05590

Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *
UI_CharacterPopup__get_Picker(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Picker_k__BackingField;
}


// UI.CharacterPopup$$set_Picker
// il2cpp: void UI_CharacterPopup__set_Picker (UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* value, const MethodInfo* method);
// 0x5d055a0

void UI_CharacterPopup__set_Picker
               (UI_CharacterPopup_o *__this,Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *value,
               MethodInfo *method)

{
  (__this->fields)._Picker_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Picker_k__BackingField);
  return;
}


// UI.CharacterPopup$$get_Dropdowns
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* UI_CharacterPopup__get_Dropdowns (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d055c0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
UI_CharacterPopup__get_Dropdowns(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Dropdowns_k__BackingField;
}


// UI.CharacterPopup$$set_Dropdowns
// il2cpp: void UI_CharacterPopup__set_Dropdowns (UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x5d055d0

void UI_CharacterPopup__set_Dropdowns
               (UI_CharacterPopup_o *__this,Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value,
               MethodInfo *method)

{
  (__this->fields)._Dropdowns_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Dropdowns_k__BackingField);
  return;
}


// UI.CharacterPopup$$Setup
// il2cpp: void UI_CharacterPopup__Setup (UI_CharacterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d055f0

void UI_CharacterPopup__Setup(UI_CharacterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o **targetAddress;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar4;
  Il2CppType *handle;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Type_o *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *pGVar11;
  UI_ViewportScaler_o *pUVar12;
  UnityEngine_RectTransform_o *pUVar13;
  System_Type_array *components;
  Il2CppObject *pIVar14;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar15;
  float width;
  float height;
  float headerHeight;
  float footerHeight;
  UnityEngine_Rect_o UVar16;
  
  if (Il2CppMethodInitialized_07547d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ViewportScaler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_AottgCharacterPickerPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Spawn Dropdowns");
    Il2CppMethodInitialized_07547d1f = '\x01';
  }
  (*(__this->klass->vtable)._62_SetAllowedCategories.methodPtr)
            (__this,(__this->klass->vtable)._62_SetAllowedCategories.method);
  pSVar3 = (__this->fields)._allowedCategories;
  pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar8 = UI_UIManager__GetLastcategory(pSVar7,(MethodInfo *)0x0);
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar8,
                       (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar6) {
      pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._allowedCategories;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d05b8b;
      pSVar8 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,0,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__SetLastCategory(pSVar7,pSVar8,(MethodInfo *)0x0);
    }
    (__this->fields).Parent = parent;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    width = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_Width.method);
    height = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                       (__this,(__this->klass->vtable)._6_get_Height.method);
    headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                             (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
    footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                             (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    }
    pGVar10 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar9,width,height,headerHeight,footerHeight,&(__this->fields).TopBar,
                         &(__this->fields).BottomBar,"inGameFooter",(MethodInfo *)0x0);
    targetAddress = &(__this->fields).View;
    (__this->fields).View = pGVar10;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
              (__this,(__this->klass->vtable)._44_SetupTopButtons.method);
    (*(__this->klass->vtable)._63_SetupBottomButtons.methodPtr)
              (__this,(__this->klass->vtable)._63_SetupBottomButtons.method);
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pGVar11 = UI_ElementFactory__CreateDefaultPopup_object_
                        (pUVar9,false,
                         (MethodInfo_34D7290 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_AottgCharacterPickerPopup);
    (__this->fields)._Picker_k__BackingField = pGVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Picker_k__BackingField);
    pUVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ViewportScaler);
    pGVar11 = (__this->fields)._Picker_k__BackingField;
    if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *)0x0) {
      pUVar13 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
        if (pUVar13->klass != TypeInfo_UnityEngine_RectTransform) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar13);
        }
        UVar16 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (pUVar12 != (UI_ViewportScaler_o *)0x0) {
          (pUVar12->fields).ContentSize.fields = UVar16.fields._8_8_;
          (*(pUVar12->klass->vtable)._5_ApplyScale.methodPtr)
                    (pUVar12,(pUVar12->klass->vtable)._5_ApplyScale.method);
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          __this_00 = (__this->fields)._popups;
          if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pGVar11 = (__this->fields)._Picker_k__BackingField;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (__this_00->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pGVar11;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pGVar11,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
              handle = TypeRef_UnityEngine_RectTransform;
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if (components != (System_Type_array *)0x0) {
                if (pSVar7 != (System_Type_o *)0x0) {
                  pIVar14 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar7,(((components->obj).klass)->_1).element_class);
                  if (pIVar14 == (Il2CppObject *)0x0) {
                    pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
                  }
                }
                if ((int)components->max_length == 0) {
                  ThrowIndexOutOfRangeException();
                }
                components->m_Items[0] = pSVar7;
                Il2CppCodeGenWriteBarrier(components->m_Items);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_691aa60
                          (__this_01,"AoTTG Spawn Dropdowns",components,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_01,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  (__this->fields)._dropdownLayer = pUVar13;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdownLayer);
                  pUVar13 = (__this->fields)._dropdownLayer;
                  pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_Transform__SetParent_692d510
                              ((UnityEngine_Transform_o *)pUVar13,pUVar9,false,(MethodInfo *)0x0);
                    pGVar10 = *targetAddress;
                    if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
                      pGVar15 = Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager
                                          (pGVar10,(UnityEngine_Transform_o *)(__this->fields)._dropdownLayer,
                                           (MethodInfo *)0x0);
                      (__this->fields)._Dropdowns_k__BackingField = pGVar15;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._Dropdowns_k__BackingField);
                      (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)
                                (__this,(__this->klass->vtable)._27_RegisterCategoryPanels.method);
                      pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pSVar8 = UI_UIManager__GetLastcategory(pSVar7,(MethodInfo *)0x0);
                      (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                                (__this,pSVar8,(__this->klass->vtable)._28_SetCategoryPanel.method);
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
  }
label_05d05b8b:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$Show
// il2cpp: void UI_CharacterPopup__Show (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05bb0

void UI_CharacterPopup__Show(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d20 = '\x01';
  }
  bVar1 = (__this->fields).IsActive;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  if (bVar1 == false) {
    x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.CharacterPopup$$SetCategoryPanel
// il2cpp: void UI_CharacterPopup__SetCategoryPanel (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d05c30

void UI_CharacterPopup__SetCategoryPanel(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  UI_CharacterPopup__RememberChoices(__this,(MethodInfo *)name);
  UI_HeadedPanel__SetCategoryPanel((UI_HeadedPanel_o *)__this,name,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._dropdownLayer;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$SelectCategory
// il2cpp: void UI_CharacterPopup__SelectCategory (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d05da0

void UI_CharacterPopup__SelectCategory(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547d21 = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Inequality(name,(pSVar1->fields)._value,(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  return;
}


// UI.CharacterPopup$$RestoreChoices
// il2cpp: bool UI_CharacterPopup__RestoreChoices (UI_CharacterPopup_o* __this, System_String_o* characterType, const MethodInfo* method);
// 0x5d05e10

bool UI_CharacterPopup__RestoreChoices
               (UI_CharacterPopup_o *__this,System_String_o *characterType,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_InGameCharacterSettings_o *__this_01;
  bool bVar1;
  Settings_InGameCharacterSettings_o *local_18;
  
  if (Il2CppMethodInitialized_07547d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547d22 = '\x01';
  }
  local_18 = (Settings_InGameCharacterSettings_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d05ea0:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)characterType,(Il2CppObject **)&local_18,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue
                    );
  if (bVar1) {
    __this_01 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if (__this_01 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05d05ea0;
    Settings_InGameCharacterSettings__CopyHumanChoices(__this_01,local_18,(MethodInfo *)0x0);
  }
  return bVar1;
}


// UI.CharacterPopup$$RememberChoices
// il2cpp: void UI_CharacterPopup__RememberChoices (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05c70

void UI_CharacterPopup__RememberChoices(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameCharacterSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  Settings_InGameCharacterSettings_o *__this_00;
  Settings_InGameCharacterSettings_o *local_20;
  
  if (Il2CppMethodInitialized_07547d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547d23 = '\x01';
  }
  local_20 = (Settings_InGameCharacterSettings_o *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if (((pSVar1 != (Settings_InGameCharacterSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).CharacterType, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue
                      );
    if (!bVar4) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
      Settings_InGameCharacterSettings___ctor(__this_00,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).CharacterType;
      local_20 = __this_00;
      if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
         pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05d05d9b;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject *)__this_00,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    }
    if (local_20 != (Settings_InGameCharacterSettings_o *)0x0) {
      (*(local_20->klass->vtable)._10_Copy.methodPtr)
                (local_20,(Settings_BaseSetting_o *)pSVar1,(local_20->klass->vtable)._10_Copy.method);
      return;
    }
  }
label_05d05d9b:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$HideAllPopups
// il2cpp: void UI_CharacterPopup__HideAllPopups (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05eb0

void UI_CharacterPopup__HideAllPopups(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  __this_00 = (__this->fields)._Dropdowns_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear(__this_00,(MethodInfo *)0x0);
  }
  UI_BasePopup__HideAllPopups((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$OnDisable
// il2cpp: void UI_CharacterPopup__OnDisable (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05ee0

void UI_CharacterPopup__OnDisable(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  __this_00 = (__this->fields)._Dropdowns_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear(__this_00,(MethodInfo *)0x0);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$LateUpdate
// il2cpp: void UI_CharacterPopup__LateUpdate (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d05f10

void UI_CharacterPopup__LateUpdate(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Canvas_o *pUVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_64;
  float fStack_54;
  float local_48;
  float local_38;
  float local_28;
  
  if (Il2CppMethodInitialized_07547d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547d24 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if (pUVar1 != (UnityEngine_Canvas_o *)0x0) {
    pUVar1 = UnityEngine_Canvas__get_rootCanvas(pUVar1,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Canvas_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        if (__this_01->klass != TypeInfo_UnityEngine_RectTransform) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
        __this_00 = (__this->fields)._dropdownLayer;
        UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        UVar7 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_lossyScale(pUVar2,(MethodInfo *)0x0);
          UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
          UVar9 = UnityEngine_Transform__get_lossyScale
                            ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UVar10 = UnityEngine_Transform__get_lossyScale(pUVar2,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              local_28 = UVar5.fields.m_Width;
              fStack_64 = UVar6.fields.m_Height;
              local_38 = UVar7.fields.x;
              fStack_54 = UVar9.fields.y;
              auVar3._0_4_ = local_38 * local_28;
              auVar3._4_4_ = fStack_54 * fStack_64;
              auVar3._8_4_ = extraout_XMM0_Dc * in_XMM1_Dc;
              auVar3._12_4_ = extraout_XMM0_Dd * in_XMM1_Dd;
              local_48 = UVar8.fields.x;
              auVar4._4_4_ = UVar10.fields.y;
              auVar4._0_4_ = local_48;
              auVar4._8_4_ = extraout_XMM0_Dc_00;
              auVar4._12_4_ = extraout_XMM0_Dd_00;
              auVar4 = divps(auVar3,auVar4);
              UnityEngine_RectTransform__set_sizeDelta
                        (__this_00,(UnityEngine_Vector2_o)auVar4._0_8_,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetAllowedCategories
// il2cpp: void UI_CharacterPopup__SetAllowedCategories (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d060a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d06157: jmp 0x5d061d4

void UI_CharacterPopup__SetAllowedCategories(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  System_String_array *pSVar7;
  MethodInfo *pMVar8;
  System_String_o *pSVar9;
  bool bVar10;
  
  if (Il2CppMethodInitialized_07547d25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547d25 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar3 == (Settings_InGameSet_o *)0x0) goto label_05d06358;
  pSVar4 = (pSVar3->fields).Misc;
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    bVar10 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
    if (bVar10) goto label_05d06169;
  }
  else {
    bVar10 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
    if (bVar10) {
label_05d06169:
      pSVar9 = "Human";
      pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar6 = (__this->fields)._allowedCategories;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d06358;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (pSVar6->fields)._items;
      if (pSVar7 == (System_String_array *)0x0) goto label_05d06358;
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar7->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar7->m_Items[(int)uVar2] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
  }
  pSVar9 = "Titan";
  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
  if ((pSVar4 == (Settings_InGameMiscSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).AllowPlayerTitans, pSVar5 == (Settings_BoolSetting_o *)0x0))
  goto label_05d06358;
  if ((pSVar5->fields)._value != false) {
    pSVar6 = (__this->fields)._allowedCategories;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d06358;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar6->fields)._items;
    if (pSVar7 == (System_String_array *)0x0) goto label_05d06358;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar7->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      pSVar7->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar9,
                 (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
  }
  pSVar9 = "Shifter";
  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar5 = (pSVar4->fields).AllowShifters;
  if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05d06358;
  if ((pSVar5->fields)._value != false) {
    pSVar6 = (__this->fields)._allowedCategories;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d06358;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar6->fields)._items;
    if (pSVar7 == (System_String_array *)0x0) goto label_05d06358;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar7->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      pSVar7->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar9,
                 (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
  }
  pSVar9 = "Human";
  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar6 = (__this->fields)._allowedCategories;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar6->fields)._size != 0) {
      return;
    }
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar6->fields)._items;
    if (pSVar7 != (System_String_array *)0x0) {
      if ((int)pSVar7->max_length == 0) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        return;
      }
      (pSVar6->fields)._size = 1;
      pSVar7->m_Items[0] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items);
      return;
    }
  }
label_05d06358:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetupTopButtons
// il2cpp: void UI_CharacterPopup__SetupTopButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d06360
// eh: try 0x5d0643a..0x5d06508 -> pad 0x5d06515 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d0652f..0x5d06534 -> pad 0x5d06555 cleanup
// eh: try 0x5d06558..0x5d06562 -> pad 0x5d0656a catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0650d: jmp 0x5d06517
// asm:   0x5d0650f: jmp 0x5d06517
// asm:   0x5d06511: jmp 0x5d06517
// asm:   0x5d06513: jmp 0x5d06517
// asm:   0x5d06515: jmp 0x5d06517
// asm:   0x5d06517: mov rbx, rax
// asm:   0x5d0651a: cmp edx, 1
// asm:   0x5d0651d: jne 0x5d06558
// asm:   0x5d0651f: mov rdi, rbx
// asm:   0x5d06522: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d06527: mov rbx, qword ptr [rax]
// asm:   0x5d0652a: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d0652f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d06534: lea rax, [rip + 0x15885bd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d0653b: mov rsi, qword ptr [rax]
// asm:   0x5d0653e: lea rdi, [rsp + 0x10]
// asm:   0x5d06543: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d06548: test rbx, rbx
// asm:   0x5d0654b: je 0x5d064ef
// asm:   0x5d0654d: mov rdi, rbx
// asm:   0x5d06550: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d06555: mov rbx, rax
// asm:   0x5d06558: lea rdi, [rsp + 0x28]
// asm:   0x5d0655d: call 0x2fdbb40  ; il2cpp_runtime_helper_02fdbb40()
// asm:   0x5d06562: mov rdi, rbx
// asm:   0x5d06565: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d0656a: mov rdi, rax
// asm:   0x5d0656d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterPopup__SetupTopButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_02;
  Il2CppObject *item;
  bool bVar1;
  System_String_o *text;
  UnityEngine_UI_Button_o *value;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_40;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07547d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.tab");
    Il2CppMethodInitialized_07547d26 = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  uStack_40 = 0;
  pSStack_38 = &SStack_58;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    item = SStack_58.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      return;
    }
    parent = (__this->fields).TopBar;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
    __this_02 = (__this->fields).View;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    text = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
    if (__this_02 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) break;
    value = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                      (__this_02,parent,text,"ingame.character.tab",(System_String_o *)item,220.0,44.0,3,
                       (MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_01,item,(Il2CppObject *)value,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetTopButton
// il2cpp: void UI_CharacterPopup__SetTopButton (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d06580
// eh: try 0x5d06644..0x5d066ab -> pad 0x5d066b2 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d066cb..0x5d066d0 -> pad 0x5d066f1 cleanup
// eh: try 0x5d066f4..0x5d066fc -> pad 0x5d06704 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d066b0: jmp 0x5d066b4
// asm:   0x5d066b2: jmp 0x5d066b4
// asm:   0x5d066b4: mov rbx, rax
// asm:   0x5d066b7: cmp edx, 1
// asm:   0x5d066ba: jne 0x5d066f4
// asm:   0x5d066bc: mov rdi, rbx
// asm:   0x5d066bf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d066c4: mov rbx, qword ptr [rax]
// asm:   0x5d066c7: mov qword ptr [rsp], rbx
// asm:   0x5d066cb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d066d0: lea rax, [rip + 0x15897b9]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose
// asm:   0x5d066d7: mov rsi, qword ptr [rax]
// asm:   0x5d066da: lea rdi, [rsp + 0x10]
// asm:   0x5d066df: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d066e4: test rbx, rbx
// asm:   0x5d066e7: je 0x5d06697
// asm:   0x5d066e9: mov rdi, rbx
// asm:   0x5d066ec: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d066f1: mov rbx, rax
// asm:   0x5d066f4: mov rdi, rsp
// asm:   0x5d066f7: call 0x2fdbb70  ; il2cpp_runtime_helper_02fdbb70()
// asm:   0x5d066fc: mov rdi, rbx
// asm:   0x5d066ff: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d06704: mov rdi, rax
// asm:   0x5d06707: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterPopup__SetTopButton(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Il2CppObject *button;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  
  if (Il2CppMethodInitialized_07547d27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Button_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Button_get_Value);
    Il2CppMethodInitialized_07547d27 = '\x01';
  }
  SStack_58.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_58.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_58.fields._version = 0;
  SStack_58.fields._index = 0;
  SStack_58.fields._getEnumeratorRetType = 0;
  SStack_58.fields._36_4_ = 0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&SStack_58,__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
  while( true ) {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
    button = SStack_58.fields._current.fields.value;
    if (!bVar1) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
      return;
    }
    __this_01 = (__this->fields).View;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)SStack_58.fields._current.fields.key,name,(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) break;
    Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected
              (__this_01,(UnityEngine_UI_Button_o *)button,bVar1,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$RegisterCategoryPanels
// il2cpp: void UI_CharacterPopup__RegisterCategoryPanels (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d06710

void UI_CharacterPopup__RegisterCategoryPanels(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547d28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterHumanPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterShifterPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterTitanPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547d28 = '\x01';
  }
  handle = TypeRef_UI_CharacterHumanPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Human",(Il2CppObject *)pSVar2,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_CharacterTitanPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Titan",(Il2CppObject *)pSVar2,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_CharacterShifterPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Shifter",(Il2CppObject *)pSVar2,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetupBottomButtons
// il2cpp: void UI_CharacterPopup__SetupBottomButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d06850

void UI_CharacterPopup__SetupBottomButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547d29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d29 = '\x01';
  }
  pGVar1 = (__this->fields).View;
  pUVar2 = (__this->fields).BottomBar;
  pSVar3 = (__this->fields).LocaleCategory;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     (pSVar3,"Bottom","SpectateButton","",
                      "",(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Button
              (pGVar1,pUVar2,pSVar3,"ingame.character.confirm","Spectate",220.0,44.0,3,(MethodInfo *)0x0
              );
    pUVar2 = (__this->fields).BottomBar;
    pGVar1 = (__this->fields).View;
    pSVar3 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgInGameView__Button
                (pGVar1,pUVar2,pSVar3,"ingame.character.confirm","Join",220.0,44.0,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterPopup__OnBottomBarButtonClick (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d069d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d06b9a: jmp 0x5d06c21
// asm:   0x5d06c8d: jmp 0x5d06c3d

void UI_CharacterPopup__OnBottomBarButtonClick
               (UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  uint32_t uVar4;
  GameManagers_InGameManager_o *__this_00;
  Settings_InGameCharacterSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  CustomLogic_CustomLogicEvaluator_o *pCVar7;
  Settings_InGameSet_o *pSVar8;
  Settings_InGameMiscSettings_o *pSVar9;
  Settings_FloatSetting_o *pSVar10;
  bool bVar11;
  MethodInfo *method_00;
  UI_CharacterPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_07547d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    Il2CppMethodInitialized_07547d2a = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar11 = System_String__op_Equality(name,"Spectate",(MethodInfo *)0x0);
  if (bVar11) {
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar5 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).ChooseStatus, pSVar6 == (Settings_IntSetting_o *)0x0)) goto label_05d06c8f;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar6,1,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
    GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    goto label_05d06c55;
  }
  bVar11 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if (!bVar11) {
    return;
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar5 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).ChooseStatus, pSVar6 == (Settings_IntSetting_o *)0x0)) goto label_05d06c8f;
  method_00 = (MethodInfo *)0x2;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar6,2,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar11) goto label_05d06bb9;
label_05d06c21:
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_05d06c8f:
      ThrowNullReferenceException();
    }
    if ((__this_00->fields).HasSpawned != false) goto label_05d06c30;
    method_00 = (MethodInfo *)0x0;
    GameManagers_InGameManager__SpawnPlayer(__this_00,false,(MethodInfo *)0x0);
    uVar4 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar11) goto label_05d06c21;
label_05d06bb9:
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((((pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
         (pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
         pSVar8 == (Settings_InGameSet_o *)0x0)) ||
        (pSVar9 = (pSVar8->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar10 = (pSVar9->fields).AllowSpawnTime, pSVar10 == (Settings_FloatSetting_o *)0x0))
    goto label_05d06c8f;
    fVar2 = (pSVar10->fields)._value;
    pfVar1 = &(pCVar7->fields).CurrentTime;
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) goto label_05d06c21;
label_05d06c30:
    uVar4 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  __this_01 = (UI_CharacterPopup_o *)0x0;
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter(__this_01,method_00);
label_05d06c55:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterPopup$$SaveLastCharacter
// il2cpp: void UI_CharacterPopup__SaveLastCharacter (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d06ca0

void UI_CharacterPopup__SaveLastCharacter(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameSettings_o *pSVar1;
  Settings_InGameCharacterSettings_o *source;
  Settings_StringSetting_o *pSVar2;
  Settings_InGameCharacterSettings_o *__this_00;
  System_String_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *__this_01;
  Settings_StringSetting_o *__this_02;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547d2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547d2b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (((pSVar1 == (Settings_InGameSettings_o *)0x0) ||
      (source = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
      source == (Settings_InGameCharacterSettings_o *)0x0)) ||
     (pSVar2 = (source->fields).CharacterType, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_05d06edc;
  __this_00 = (pSVar1->fields).LastCharacter;
  pSVar3 = (pSVar2->fields)._value;
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar5 = System_String__op_Equality
                    (pSVar3,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_00 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05d06edc;
    pSVar2 = (__this_00->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05d06edc;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    Settings_InGameCharacterSettings__CopyHumanChoices(__this_00,source,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (source->fields).CharacterType;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05d06edc;
    pSVar3 = (pSVar2->fields)._value;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar5 = System_String__op_Equality
                      (pSVar3,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    if (__this_00 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05d06edc;
    pSVar2 = (__this_00->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05d06edc;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar4 = (source->fields).CustomSet;
    if ((pSVar4 == (Settings_IntSetting_o *)0x0) ||
       (__this_01 = (__this_00->fields).CustomSet, __this_01 == (Settings_IntSetting_o *)0x0))
    goto label_05d06edc;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_01,(pSVar4->fields)._value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (source->fields).Loadout;
    if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
       (__this_02 = (__this_00->fields).Loadout, __this_02 == (Settings_StringSetting_o *)0x0))
    goto label_05d06edc;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)(pSVar2->fields)._value,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (pSVar1 != (Settings_InGameSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    return;
  }
label_05d06edc:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$.ctor
// il2cpp: void UI_CharacterPopup___ctor (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x5d06ef0

void UI_CharacterPopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_string__InGameCharacterSettings__o *__this_01;
  
  if (Il2CppMethodInitialized_07547d2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_07547d2c = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._allowedCategories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._allowedCategories);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
  (__this->fields)._choices = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._choices);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


