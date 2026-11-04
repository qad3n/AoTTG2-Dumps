// Type: UI.CharacterPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// --------------------------------

// UI.CharacterPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterPopup__get_EscapeBehavior (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x180565fb0

int32_t
UI_CharacterPopup__get_EscapeBehavior(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return 3;
}


// UI.CharacterPopup$$DismissFromEscape
// il2cpp: bool UI_CharacterPopup__DismissFromEscape (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x1822258c0

bool UI_CharacterPopup__DismissFromEscape(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843471ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_1843471ac = '\x01';
  }
  if ((__this->fields)._Dropdowns_k__BackingField !=
      (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((__this->fields)._Dropdowns_k__BackingField,true,(MethodInfo *)0x0);
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
// 0x1818c6010

System_String_o*
UI_CharacterPopup__get_Title(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.CharacterPopup$$get_Width
// il2cpp: float UI_CharacterPopup__get_Width (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x18210fa90

float
UI_CharacterPopup__get_Width(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// UI.CharacterPopup$$get_Height
// il2cpp: float UI_CharacterPopup__get_Height (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182227300

float UI_CharacterPopup__get_Height(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843471ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843471ad = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).PVP, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 2) {
      return 506.0;
    }
    return 440.0;
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_CharacterPopup__get_PopupAnimationType (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_CharacterPopup__get_PopupAnimationType(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.CharacterPopup$$get_CategoryPanel
// il2cpp: bool UI_CharacterPopup__get_CategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CharacterPopup__get_CategoryPanel(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CharacterPopup$$get_CategoryButtons
// il2cpp: bool UI_CharacterPopup__get_CategoryButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CharacterPopup__get_CategoryButtons(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CharacterPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CharacterPopup__get_DefaultCategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x1822272d0

System_String_o * UI_CharacterPopup__get_DefaultCategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843471ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843471ae = '\x01';
  }
  return "";
}


// UI.CharacterPopup$$get_Picker
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* UI_CharacterPopup__get_Picker (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x180c8ff80

Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o*
UI_CharacterPopup__get_Picker(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._Picker_k__BackingField.fields;
}


// UI.CharacterPopup$$set_Picker
// il2cpp: void UI_CharacterPopup__set_Picker (UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* value, const MethodInfo* method);
// 0x180c8ffc0

void
UI_CharacterPopup__set_Picker(UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o* value, MethodInfo* method)

{
  (__this->fields)._Picker_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Picker_k__BackingField,value);
  return;
}


// UI.CharacterPopup$$get_Dropdowns
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* UI_CharacterPopup__get_Dropdowns (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x18187bc00

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o*
UI_CharacterPopup__get_Dropdowns(UI_CharacterPopup_o* __this, MethodInfo* method)

{
  return (__this->fields)._Dropdowns_k__BackingField;
}


// UI.CharacterPopup$$set_Dropdowns
// il2cpp: void UI_CharacterPopup__set_Dropdowns (UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x181c42420

void
UI_CharacterPopup__set_Dropdowns(UI_CharacterPopup_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, MethodInfo* method)

{
  (__this->fields)._Dropdowns_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Dropdowns_k__BackingField,value);
  return;
}


// UI.CharacterPopup$$Setup
// il2cpp: void UI_CharacterPopup__Setup (UI_CharacterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182226c80

void UI_CharacterPopup__Setup(UI_CharacterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  UI_ViewportScaler_c *pUVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar5;
  MethodInfo *pMVar6;
  Il2CppType *handle;
  bool bVar7;
  System_Type_o *pSVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *pGVar12;
  UI_ViewportScaler_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_Rect_o *pUVar15;
  System_Type_array *components;
  Il2CppObject *pIVar16;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value;
  UnityEngine_RectTransform_o *pUVar17;
  float fVar18;
  float fVar19;
  float headerHeight;
  float footerHeight;
  UnityEngine_Rect_o local_78 [5];
  
  if (Il2CppMethodInitialized_1843471af == '\0') {
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
    Il2CppMethodInitialized_1843471af = '\x01';
  }
  (*(__this->klass->vtable)._62_SetAllowedCategories.methodPtr)
            (__this,(__this->klass->vtable)._62_SetAllowedCategories.method);
  pSVar3 = (__this->fields)._allowedCategories;
  pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar9 = UI_UIManager__GetLastcategory(pSVar8,(MethodInfo *)0x0);
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar7 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar9,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar7) {
      pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._allowedCategories;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_182227228;
      pSVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,0,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__SetLastCategory(pSVar8,pSVar9,(MethodInfo *)0x0);
    }
    (__this->fields).Parent = parent;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar18 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                       (__this,(__this->klass->vtable)._5_get_Width.method);
    fVar19 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                       (__this,(__this->klass->vtable)._6_get_Height.method);
    headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                             (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
    footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                             (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    }
    pGVar11 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar10,fVar18,fVar19,headerHeight,footerHeight,&(__this->fields).TopBar,
                         &(__this->fields).BottomBar,"inGameFooter",(MethodInfo *)0x0);
    (__this->fields).View = pGVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).View,pGVar11);
    (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
              (__this,(__this->klass->vtable)._44_SetupTopButtons.method);
    (*(__this->klass->vtable)._63_SetupBottomButtons.methodPtr)
              (__this,(__this->klass->vtable)._63_SetupBottomButtons.method);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pGVar12 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar10,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_AottgCharacterPickerPopup);
    (__this->fields)._Picker_k__BackingField = pGVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Picker_k__BackingField,pGVar12);
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ViewportScaler);
    pGVar12 = (__this->fields)._Picker_k__BackingField;
    if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *)0x0) goto label_182227228;
    pUVar14 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar12,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_182227228;
    pUVar17 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar14->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar17 = pUVar14;
    }
    if (pUVar17 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar14,TypeInfo_UnityEngine_RectTransform);
    }
    pUVar17 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar14->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar17 = pUVar14;
    }
    pUVar15 = UnityEngine_RectTransform__get_rect(local_78,pUVar17,(MethodInfo *)0x0);
    fVar18 = (pUVar15->fields).m_Width;
    fVar19 = (pUVar15->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (pUVar13 == (UI_ViewportScaler_o *)0x0) goto label_182227228;
    pUVar4 = pUVar13->klass;
    (pUVar13->fields).ContentSize.fields.x = fVar18;
    (pUVar13->fields).ContentSize.fields.y = fVar19;
    (*(pUVar4->vtable)._5_ApplyScale.methodPtr)(pUVar13,(pUVar4->vtable)._5_ApplyScale.method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_182227228;
    pGVar12 = (__this->fields)._Picker_k__BackingField;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (__this_00->fields)._items;
    if (pUVar5 == (UI_BasePopup_array *)0x0) goto label_182227228;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_18222723e;
      pUVar5->m_Items[(int)uVar2] = (UI_BasePopup_o *)pGVar12;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pGVar12);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pGVar12,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (pSVar8 != (System_Type_o *)0x0) {
        pIVar16 = il2cpp_vm_Object_IsInst
                            ((Il2CppObject *)pSVar8,(((components->obj).klass)->_1).element_class);
        if (pIVar16 == (Il2CppObject *)0x0) {
          pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
label_18222723e:
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = pSVar8;
      Il2CppCodeGenWriteBarrier(components->m_Items,pSVar8);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_01,"AoTTG Spawn Dropdowns",components,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar14 = UnityEngine_GameObject__GetComponent_object_
                            (__this_01,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                            );
        (__this->fields)._dropdownLayer = pUVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdownLayer,pUVar14);
        pUVar14 = (__this->fields)._dropdownLayer;
        pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    ((UnityEngine_Transform_o *)pUVar14,pUVar10,false,(MethodInfo *)0x0);
          pGVar11 = (__this->fields).View;
          if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            value = Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager
                              (pGVar11,(UnityEngine_Transform_o *)(__this->fields)._dropdownLayer,
                               (MethodInfo *)0x0);
            (__this->fields)._Dropdowns_k__BackingField = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._Dropdowns_k__BackingField,value);
            (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)
                      (__this,(__this->klass->vtable)._27_RegisterCategoryPanels.method);
            pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar9 = UI_UIManager__GetLastcategory(pSVar8,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                      (__this,pSVar9,(__this->klass->vtable)._28_SetCategoryPanel.method);
            return;
          }
        }
      }
    }
  }
label_182227228:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$Show
// il2cpp: void UI_CharacterPopup__Show (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182227250

void UI_CharacterPopup__Show(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843471b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471b0 = '\x01';
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
    }
  }
  return;
}


// UI.CharacterPopup$$SetCategoryPanel
// il2cpp: void UI_CharacterPopup__SetCategoryPanel (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822265e0

void UI_CharacterPopup__SetCategoryPanel(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_InGameCharacterSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_RectTransform_o *__this_00;
  bool bVar4;
  Settings_InGameCharacterSettings_o *__this_01;
  Settings_InGameCharacterSettings_o *local_res8;
  
  if (Il2CppMethodInitialized_1843471b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471b3 = '\x01';
  }
  local_res8 = (Settings_InGameCharacterSettings_o *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if (((pSVar1 != (Settings_InGameCharacterSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).CharacterType, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue
                      );
    if (!bVar4) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
      Settings_InGameCharacterSettings___ctor(__this_01,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).CharacterType;
      local_res8 = __this_01;
      if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
         pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_182226738;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject *)__this_01,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    }
    if (local_res8 != (Settings_InGameCharacterSettings_o *)0x0) {
      (*(local_res8->klass->vtable)._10_Copy.methodPtr)
                (local_res8,(Settings_BaseSetting_o *)pSVar1,(local_res8->klass->vtable)._10_Copy.method);
      UI_HeadedPanel__SetCategoryPanel((UI_HeadedPanel_o *)__this,name,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._dropdownLayer;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
label_182226738:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SelectCategory
// il2cpp: void UI_CharacterPopup__SelectCategory (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822263e0

void UI_CharacterPopup__SelectCategory(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843471b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471b1 = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__op_Inequality(name,(pSVar1->fields)._value,(MethodInfo *)0x0);
    if (bVar2) {
      (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$RestoreChoices
// il2cpp: bool UI_CharacterPopup__RestoreChoices (UI_CharacterPopup_o* __this, System_String_o* characterType, const MethodInfo* method);
// 0x1822260c0

bool UI_CharacterPopup__RestoreChoices
               (UI_CharacterPopup_o *__this,System_String_o *characterType,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_InGameCharacterSettings_o *__this_01;
  bool bVar1;
  Settings_InGameCharacterSettings_o *local_res8;
  
  if (Il2CppMethodInitialized_1843471b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843471b2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices;
  local_res8 = (Settings_InGameCharacterSettings_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)characterType,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue
                      );
    if (!bVar1) {
      return false;
    }
    __this_01 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if (__this_01 != (Settings_InGameCharacterSettings_o *)0x0) {
      Settings_InGameCharacterSettings__CopyHumanChoices(__this_01,local_res8,(MethodInfo *)0x0);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$RememberChoices
// il2cpp: void UI_CharacterPopup__RememberChoices (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182225f80

void UI_CharacterPopup__RememberChoices(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameCharacterSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  Settings_InGameCharacterSettings_o *__this_00;
  Settings_InGameCharacterSettings_o *local_res8;
  
  if (Il2CppMethodInitialized_1843471b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471b3 = '\x01';
  }
  local_res8 = (Settings_InGameCharacterSettings_o *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if (((pSVar1 != (Settings_InGameCharacterSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).CharacterType, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_TryGetValue
                      );
    if (!bVar4) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
      Settings_InGameCharacterSettings___ctor(__this_00,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).CharacterType;
      local_res8 = __this_00;
      if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choices,
         pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_1822260ab;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)(pSVar2->fields)._value,(Il2CppObject *)__this_00,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_Add);
    }
    if (local_res8 != (Settings_InGameCharacterSettings_o *)0x0) {
      (*(local_res8->klass->vtable)._10_Copy.methodPtr)
                (local_res8,(Settings_BaseSetting_o *)pSVar1,(local_res8->klass->vtable)._10_Copy.method);
      return;
    }
  }
label_1822260ab:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$HideAllPopups
// il2cpp: void UI_CharacterPopup__HideAllPopups (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182225940

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
// 0x182225e10

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
// 0x182225970

void UI_CharacterPopup__LateUpdate(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Canvas_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Rect_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_o local_68 [6];
  
  if (Il2CppMethodInitialized_1843471b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843471b4 = '\x01';
  }
  pUVar6 = UnityEngine_Component__GetComponentInParent_object__664f20
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if (pUVar6 != (UnityEngine_Canvas_o *)0x0) {
    pUVar6 = UnityEngine_Canvas__get_rootCanvas(pUVar6,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Canvas_o *)0x0) {
      pUVar7 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        __this_00 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
          __this_00 = pUVar7;
        }
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
        }
        pUVar7 = (__this->fields)._dropdownLayer;
        pUVar8 = UnityEngine_RectTransform__get_rect(local_68,__this_00,(MethodInfo *)0x0);
        fVar1 = (pUVar8->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar9 = UnityEngine_Transform__get_lossyScale
                           ((UnityEngine_Vector3_o *)local_68,(UnityEngine_Transform_o *)__this_00,
                            (MethodInfo *)0x0);
        fVar2 = (pUVar9->fields).x;
        pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__get_lossyScale
                             ((UnityEngine_Vector3_o *)local_68,pUVar10,(MethodInfo *)0x0);
          fVar3 = (pUVar9->fields).x;
          pUVar8 = UnityEngine_RectTransform__get_rect(local_68,__this_00,(MethodInfo *)0x0);
          fVar4 = (pUVar8->fields).m_Height;
          pUVar9 = UnityEngine_Transform__get_lossyScale
                             ((UnityEngine_Vector3_o *)local_68,(UnityEngine_Transform_o *)__this_00,
                              (MethodInfo *)0x0);
          fVar5 = (pUVar9->fields).y;
          pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = UnityEngine_Transform__get_lossyScale
                               ((UnityEngine_Vector3_o *)local_68,pUVar10,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              value.fields.y = (fVar4 * fVar5) / (pUVar9->fields).y;
              value.fields.x = (fVar1 * fVar2) / fVar3;
              UnityEngine_RectTransform__set_sizeDelta(pUVar7,value,(MethodInfo *)0x0);
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
// 0x182226450

void UI_CharacterPopup__SetAllowedCategories(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_1843471b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_1843471b5 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    pSVar2 = (pSVar1->fields).Misc;
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar5 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
    if (bVar5) {
      pSVar3 = (__this->fields)._allowedCategories;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822265d1;
      il2cpp_runtime_helper_180012890(pSVar3,"Human",MethodInfo_System_Collections_Generic_List_string_Add);
    }
    if ((pSVar2 != (Settings_InGameMiscSettings_o *)0x0) &&
       (pSVar4 = (pSVar2->fields).AllowPlayerTitans, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar4->fields)._value != false) {
        pSVar3 = (__this->fields)._allowedCategories;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822265d1;
        il2cpp_runtime_helper_180012890(pSVar3,"Titan",MethodInfo_System_Collections_Generic_List_string_Add);
      }
      pSVar4 = (pSVar2->fields).AllowShifters;
      if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar4->fields)._value != false) {
          pSVar3 = (__this->fields)._allowedCategories;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822265d1;
          il2cpp_runtime_helper_180012890(pSVar3,"Shifter",MethodInfo_System_Collections_Generic_List_string_Add);
        }
        pSVar3 = (__this->fields)._allowedCategories;
        if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((pSVar3->fields)._size == 0) {
            il2cpp_runtime_helper_180012890(pSVar3,"Human",MethodInfo_System_Collections_Generic_List_string_Add);
          }
          return;
        }
      }
    }
  }
label_1822265d1:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetupTopButtons
// il2cpp: void UI_CharacterPopup__SetupTopButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182226a70
// eh: try 0x182226b52..0x182226c67 -> pad 0x183331790 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182226c1d: mov rdx, qword ptr [rip + 0x1e70cf4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182226c24: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x182226c29: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182226c2e: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x182226c33: test rcx, rcx
// asm:   0x182226c36: jne 0x182226c67
// asm:   0x182226c67: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331790: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331795: push rbp
// asm:   0x183331796: sub rsp, 0x50
// asm:   0x18333179a: mov rbp, rdx
// asm:   0x18333179d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833317a1: mov rcx, qword ptr [rax]
// asm:   0x1833317a4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833317a8: movabs rax, 0
// asm:   0x1833317b2: add rsp, 0x50
// asm:   0x1833317b6: pop rbp
// asm:   0x1833317b7: ret 

void UI_CharacterPopup__SetupTopButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_02;
  UnityEngine_Transform_o *parent;
  Il2CppObject *item;
  bool bVar1;
  System_String_o *text;
  UnityEngine_UI_Button_o *value;
  undefined1 local_90 [16];
  System_String_o *local_80;
  System_Collections_Generic_List_Enumerator_object__o local_78 [2];
  
  if (Il2CppMethodInitialized_1843471b6 == '\0') {
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
    Il2CppMethodInitialized_1843471b6 = '\x01';
  }
  local_78[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78[0].fields._index = 0;
  local_78[0].fields._version = 0;
  local_78[0].fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_78[0].fields._list = (System_Collections_Generic_List_T__o *)local_90._0_8_;
    local_78[0].fields._index = local_90._8_4_;
    local_78[0].fields._version = local_90._12_4_;
    local_78[0].fields._current = (Il2CppObject *)local_80;
    local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_90._8_8_ = local_78;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (local_78,(MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      item = local_78[0].fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        return;
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      __this_02 = (__this->fields).View;
      parent = (__this->fields).TopBar;
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
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetTopButton
// il2cpp: void UI_CharacterPopup__SetTopButton (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182226750
// eh: try 0x182226830..0x1822268bb -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222688b: mov rdx, qword ptr [rip + 0x1e92dee]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose
// asm:   0x182226892: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182226897: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222689c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822268a1: test rcx, rcx
// asm:   0x1822268a4: jne 0x1822268bb
// asm:   0x1822268bb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_CharacterPopup__SetTopButton(UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Il2CppObject *button;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_1843471b7 == '\0') {
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
    Il2CppMethodInitialized_1843471b7 = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  __this_00 = (__this->fields)._topButtons;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
    local_80.fields._dictionary = local_58.fields._dictionary;
    local_80.fields._version = local_58.fields._version;
    local_80.fields._index = local_58.fields._index;
    local_80.fields._current.fields.key = local_58.fields._current.fields.key;
    local_80.fields._current.fields.value = local_58.fields._current.fields.value;
    local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_58.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_80,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
      button = local_80.fields._current.fields.value;
      if (!bVar1) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
        return;
      }
      __this_01 = (__this->fields).View;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)local_80.fields._current.fields.key,name,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) break;
      Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected
                (__this_01,(UnityEngine_UI_Button_o *)button,bVar1,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$RegisterCategoryPanels
// il2cpp: void UI_CharacterPopup__RegisterCategoryPanels (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182225e40

void UI_CharacterPopup__RegisterCategoryPanels(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843471b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterHumanPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterShifterPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CharacterTitanPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_1843471b8 = '\x01';
  }
  handle = TypeRef_UI_CharacterHumanPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Human",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_CharacterTitanPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Titan",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_CharacterShifterPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Shifter",(Il2CppObject *)pSVar2,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$SetupBottomButtons
// il2cpp: void UI_CharacterPopup__SetupBottomButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x1822268d0

void UI_CharacterPopup__SetupBottomButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843471b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843471b9 = '\x01';
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
    pGVar1 = (__this->fields).View;
    pUVar2 = (__this->fields).BottomBar;
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
// 0x182225b60

void UI_CharacterPopup__OnBottomBarButtonClick
               (UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  GameManagers_InGameManager_o *__this_00;
  Settings_InGameCharacterSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  CustomLogic_CustomLogicEvaluator_o *pCVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  bool bVar10;
  
  if (Il2CppMethodInitialized_1843471ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    Il2CppMethodInitialized_1843471ba = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar10 = System_String__op_Equality(name,"Spectate",(MethodInfo *)0x0);
  if (bVar10) {
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).ChooseStatus, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_182225e03;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar5,1,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
    GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    goto label_182225cad;
  }
  bVar10 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if (!bVar10) {
    return;
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).ChooseStatus, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_182225e03;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar5,2,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar10) {
label_182225dad:
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_182225e03:
      ThrowNullReferenceException();
    }
    if ((__this_00->fields).HasSpawned == false) {
      GameManagers_InGameManager__SpawnPlayer(__this_00,false,(MethodInfo *)0x0);
    }
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((((pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
         (pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
         pSVar7 == (Settings_InGameSet_o *)0x0)) ||
        (pSVar8 = (pSVar7->fields).Misc, pSVar8 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar9 = (pSVar8->fields).AllowSpawnTime, pSVar9 == (Settings_FloatSetting_o *)0x0))
    goto label_182225e03;
    fVar2 = (pSVar9->fields)._value;
    pfVar1 = &(pCVar6->fields).CurrentTime;
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) goto label_182225dad;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter(__this,(MethodInfo *)0x0);
label_182225cad:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterPopup$$SaveLastCharacter
// il2cpp: void UI_CharacterPopup__SaveLastCharacter (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x182226170

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
  
  if (Il2CppMethodInitialized_1843471bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_1843471bb = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (((pSVar1 == (Settings_InGameSettings_o *)0x0) ||
      (source = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
      source == (Settings_InGameCharacterSettings_o *)0x0)) ||
     (pSVar2 = (source->fields).CharacterType, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_1822263d1;
  __this_00 = (pSVar1->fields).LastCharacter;
  pSVar3 = (pSVar2->fields)._value;
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar5 = System_String__op_Equality
                    (pSVar3,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_00 == (Settings_InGameCharacterSettings_o *)0x0) goto label_1822263d1;
    pSVar2 = (__this_00->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822263d1;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    Settings_InGameCharacterSettings__CopyHumanChoices(__this_00,source,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (source->fields).CharacterType;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822263d1;
    pSVar3 = (pSVar2->fields)._value;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar5 = System_String__op_Equality
                      (pSVar3,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    if (__this_00 == (Settings_InGameCharacterSettings_o *)0x0) goto label_1822263d1;
    pSVar2 = (__this_00->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822263d1;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar4 = (source->fields).CustomSet;
    if ((pSVar4 == (Settings_IntSetting_o *)0x0) ||
       (__this_01 = (__this_00->fields).CustomSet, __this_01 == (Settings_IntSetting_o *)0x0))
    goto label_1822263d1;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_01,(pSVar4->fields)._value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (source->fields).Loadout;
    if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
       (__this_02 = (__this_00->fields).Loadout, __this_02 == (Settings_StringSetting_o *)0x0))
    goto label_1822263d1;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)(pSVar2->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (pSVar1 != (Settings_InGameSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    return;
  }
label_1822263d1:
  ThrowNullReferenceException();
}


// UI.CharacterPopup$$.ctor
// il2cpp: void UI_CharacterPopup___ctor (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x18221e8f0

void UI_CharacterPopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_string__InGameCharacterSettings__o *__this_01;
  
  if (Il2CppMethodInitialized_1843471bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_1843471bc = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"CharacterPopup");
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._allowedCategories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._allowedCategories,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
  (__this->fields)._choices = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._choices,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


