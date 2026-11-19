// Type: UI.CharacterCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterCategoryPanel.cs
// --------------------------------

// UI.CharacterCategoryPanel.<>c__DisplayClass11_0$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass11_0___ctor (UI_CharacterCategoryPanel___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5cfcc40

void UI_CharacterCategoryPanel___c__DisplayClass11_0___ctor
               (UI_CharacterCategoryPanel___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass11_0$$<Labels>b__0
// il2cpp: System_String_o* UI_CharacterCategoryPanel___c__DisplayClass11_0___Labels_b__0 (UI_CharacterCategoryPanel___c__DisplayClass11_0_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5cfd950

System_String_o *
UI_CharacterCategoryPanel___c__DisplayClass11_0___Labels_b__0
          (UI_CharacterCategoryPanel___c__DisplayClass11_0_o *__this,System_String_o *option,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547cf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547cf0 = '\x01';
  }
  pSVar1 = (__this->fields).group;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterPopup",pSVar1,option,"",option,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass12_0___ctor (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5cfd1e0

void UI_CharacterCategoryPanel___c__DisplayClass12_0___ctor
               (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<Choice>b__1
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* UI_CharacterCategoryPanel___c__DisplayClass12_0___Choice_b__1 (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, System_String_o* label, int32_t index, const MethodInfo* method);
// 0x5cfd9e0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
UI_CharacterCategoryPanel___c__DisplayClass12_0___Choice_b__1
          (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this,System_String_o *label,int32_t index,
          MethodInfo *method)

{
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07547cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Il2CppMethodInitialized_07547cf1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).options;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((uint)pSVar1->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      (__this_00->fields).value = pSVar1->m_Items[index];
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
      (__this_00->fields).text = label;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<Choice>b__0
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass12_0___Choice_b__0 (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cfda80

void UI_CharacterCategoryPanel___c__DisplayClass12_0___Choice_b__0
               (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  int32_t index;
  
  if (Il2CppMethodInitialized_07547cf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    Il2CppMethodInitialized_07547cf2 = '\x01';
  }
  index = System_Array__IndexOf_object_
                    ((System_Object_array *)(__this->fields).options,(Il2CppObject *)value,
                     (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if (-1 < index) {
    Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex
              ((__this->fields).setting,(__this->fields).options,index,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).changed;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      return;
    }
  }
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass15_0___ctor (UI_CharacterCategoryPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5cfd840

void UI_CharacterCategoryPanel___c__DisplayClass15_0___ctor
               (UI_CharacterCategoryPanel___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$<IconPicker>b__0
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass15_0___IconPicker_b__0 (UI_CharacterCategoryPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5cfdb00

void UI_CharacterCategoryPanel___c__DisplayClass15_0___IconPicker_b__0
               (UI_CharacterCategoryPanel___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterCategoryPanel_o *pUVar2;
  UI_BasePanel_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this_00;
  Settings_BaseSetting_o *setting;
  System_String_o *title;
  System_String_array *options;
  System_String_array *icons;
  System_String_array *tooltips;
  System_Action_int__o *__this_01;
  
  if (Il2CppMethodInitialized_07547cf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__1);
    Il2CppMethodInitialized_07547cf3 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterCategoryPanel_o *)0x0) {
    if (Il2CppMethodInitialized_07547ce5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
      Il2CppMethodInitialized_07547ce5 = '\x01';
    }
    pUVar3 = (pUVar2->fields).Parent;
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (*(uint64_t *)((char *)pUVar3 + 0xc0));
      setting = (__this->fields).setting;
      title = (__this->fields).title;
      options = (__this->fields).options;
      icons = (__this->fields).icons;
      tooltips = (__this->fields).tooltips;
      __this_01 = (__this->fields).__9__1;
      if (__this_01 == (System_Action_int__o *)0x0) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
        System_Action_int____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__1,
                   (MethodInfo_4A80B60 *)0x0);
        (__this->fields).__9__1 = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show
                  ((Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *)__this_00,setting,title,options,icons
                   ,tooltips,__this_01,(__this->fields).previewSize,(__this->fields).labels,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel.<>c__DisplayClass15_0$$<IconPicker>b__1
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass15_0___IconPicker_b__1 (UI_CharacterCategoryPanel___c__DisplayClass15_0_o* __this, int32_t selected, const MethodInfo* method);
// 0x5cfdc60

void UI_CharacterCategoryPanel___c__DisplayClass15_0___IconPicker_b__1
               (UI_CharacterCategoryPanel___c__DisplayClass15_0_o *__this,int32_t selected,MethodInfo *method)

{
  System_String_array *pSVar1;
  TMPro_TMP_Text_o *pTVar2;
  System_Action_o *pSVar3;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  pSVar1 = (__this->fields).displayed;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((uint)pSVar1->max_length <= (uint)selected) {
      ThrowIndexOutOfRangeException();
    }
    pTVar2 = (__this->fields).label;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,pSVar1->m_Items[selected],(pTVar2->klass->vtable)._66_set_text.method);
      pSVar3 = (__this->fields).changed;
      if (pSVar3 == (System_Action_o *)0x0) {
        return;
      }
      vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar3->fields).method_code,(pSVar3->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$get_DoublePanel
// il2cpp: bool UI_CharacterCategoryPanel__get_DoublePanel (UI_CharacterCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cfc630

bool UI_CharacterCategoryPanel__get_DoublePanel(UI_CharacterCategoryPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CharacterCategoryPanel$$get_Popup
// il2cpp: UI_CharacterPopup_o* UI_CharacterCategoryPanel__get_Popup (UI_CharacterCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cfc640

UI_CharacterPopup_o *
UI_CharacterCategoryPanel__get_Popup(UI_CharacterCategoryPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterPopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
    Il2CppMethodInitialized_07547ce5 = '\x01';
  }
  pUVar2 = (UI_CharacterPopup_o *)(__this->fields).Parent;
  if (pUVar2 != (UI_CharacterPopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  return pUVar2;
}


// UI.CharacterCategoryPanel$$Setup
// il2cpp: void UI_CharacterCategoryPanel__Setup (UI_CharacterCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cfc6a0

void UI_CharacterCategoryPanel__Setup
               (UI_CharacterCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  float fVar5;
  System_Nullable_float__Fields local_30;
  
  if (Il2CppMethodInitialized_07547ce6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07547ce6 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar1,(MethodInfo *)0x0);
  (__this->fields).View = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).View);
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar4 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar5 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    value.fields.y = fVar5;
    value.fields.x = fVar4;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).View;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar4 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                      (__this,(__this->klass->vtable)._33_GetWidth.method);
    fVar5 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                      (__this,(__this->klass->vtable)._34_GetHeight.method);
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_30,32.0,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                         (pGVar1,pUVar2,"clear",fVar4,fVar5,true,
                          (System_Nullable_float__o)local_30,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__Position
                (pUVar2,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0);
      pUVar3 = UI_CharacterCategoryPanel__CreateColumn(__this,pUVar2,method_00);
      (__this->fields).DoublePanelLeft = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft);
      pUVar2 = UI_CharacterCategoryPanel__CreateColumn(__this,pUVar2,method_01);
      (__this->fields).DoublePanelRight = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelRight);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$CreateColumn
// il2cpp: UnityEngine_Transform_o* UI_CharacterCategoryPanel__CreateColumn (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5cfc900

UnityEngine_Transform_o *
UI_CharacterCategoryPanel__CreateColumn
          (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  float value;
  
  if (Il2CppMethodInitialized_07547ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07547ce7 = '\x01';
  }
  __this_00 = (__this->fields).View;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
    (__this_01->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(440.0,(MethodInfo *)0x0);
    value = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                      (__this,(__this->klass->vtable)._34_GetHeight.method);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,18.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,20.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    (__this_01->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this_00,parent,__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$OpenSetting
// il2cpp: void UI_CharacterCategoryPanel__OpenSetting (UI_CharacterCategoryPanel_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5cfcad0

void UI_CharacterCategoryPanel__OpenSetting
               (UI_CharacterCategoryPanel_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *pIStack_18;
  
  if (Il2CppMethodInitialized_07547ce8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
    Il2CppMethodInitialized_07547ce8 = '\x01';
  }
  pIStack_18 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settingActions;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05cfcb3c:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)id,&pIStack_18,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
  if (bVar1) {
    if (pIStack_18 == (Il2CppObject *)0x0) goto label_05cfcb3c;
    (*pIStack_18[1].monitor)(pIStack_18[4].klass,pIStack_18[2].monitor);
  }
  return;
}


// UI.CharacterCategoryPanel$$Labels
// il2cpp: System_String_array* UI_CharacterCategoryPanel__Labels (System_String_o* group, System_Collections_Generic_IEnumerable_string__o* options, const MethodInfo* method);
// 0x5cfcb50

System_String_array *
UI_CharacterCategoryPanel__Labels
          (System_String_o *group,System_Collections_Generic_IEnumerable_string__o *options,MethodInfo *method
          )

{
  UI_CharacterCategoryPanel___c__DisplayClass11_0_o *__this;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07547ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass11_0_Labels_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass11_0);
    Il2CppMethodInitialized_07547ce9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (UI_CharacterCategoryPanel___c__DisplayClass11_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).group = group;
  Il2CppCodeGenWriteBarrier(&(__this->fields).group);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass11_0_Labels_b__0,
             (MethodInfo_4F19B50 *)0x0);
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                      (System_Func_TSource__TResult__o *)__this_00,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// UI.CharacterCategoryPanel$$Choice
// il2cpp: void UI_CharacterCategoryPanel__Choice (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_Action_o* changed, System_String_array* labels, const MethodInfo* method);
// 0x5cfcc50

void UI_CharacterCategoryPanel__Choice
               (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,
               Settings_BaseSetting_o *setting,System_String_o *title,System_String_array *options,
               System_Action_o *changed,System_String_array *labels,MethodInfo *method)

{
  UI_CharacterCategoryPanel___c__DisplayClass12_0_Fields *targetAddress;
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_array *options_00;
  UI_BasePanel_o *pUVar4;
  UI_CharacterCategoryPanel_o *pUVar5;
  uint uVar6;
  UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this_01;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_Func_T1__T2__TResult__o *__this_03;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  UnityEngine_GameObject_o *__this_04;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar11;
  System_Action_string__o *__this_05;
  uint uVar12;
  System_String_o **method_00;
  int32_t local_64;
  UI_CharacterCategoryPanel_o *local_60;
  UnityEngine_Transform_o *local_58;
  Settings_BaseSetting_o **local_50;
  System_Enum_o local_48;
  undefined4 local_38;
  
  local_60 = __this;
  if (Il2CppMethodInitialized_07547cea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_string_int_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"button");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.choice");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"character-choice-");
    Il2CppMethodInitialized_07547cea = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *)0x0) {
    targetAddress = &__this_01->fields;
    (__this_01->fields).options = options;
    Il2CppCodeGenWriteBarrier(&targetAddress->options);
    local_50 = &(__this_01->fields).setting;
    (__this_01->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(local_50);
    (__this_01->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).changed);
    pUVar5 = local_60;
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(local_60->fields)._choiceActions;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_64 = System_Collections_Generic_Dictionary_object__object___get_Count
                           (pSVar3,(MethodInfo_4AAD0E0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_get_Count
                           );
      pSVar7 = System_Int32__ToString(&local_64,(MethodInfo *)0x0);
      method_00 = &"character-choice-";
      pSVar7 = System_String__Concat_52f0320("character-choice-",pSVar7,(MethodInfo *)0x0);
      __this_00 = (pUVar5->fields).View;
      local_58 = UI_CharacterCategoryPanel__SettingRow(pUVar5,parent,title,(MethodInfo *)method_00);
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_02->fields).type = "Dropdown";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).type);
        (__this_02->fields).id = pSVar7;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).id);
        (__this_02->fields).style = "dropdown";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).style);
        (__this_02->fields).options = targetAddress->options;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).options);
        if (labels == (System_String_array *)0x0) {
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
        }
        else {
          __this_03 = (System_Func_T1__T2__TResult__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_string_int_GisketchChoiceOptionDefinition
                                );
          System_Func_object__int__object____ctor
                    (__this_03,(Il2CppObject *)__this_01,
                     (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__1,
                     (MethodInfo_4F20870 *)0x0);
          source = System_Linq_Enumerable__Select_object__object__34f63f0
                             ((System_Collections_Generic_IEnumerable_TSource__o *)labels,
                              (System_Func_TSource__int__TResult__o *)__this_03,
                              (MethodInfo_34F63F0 *)
                              MethodInfo_System_Linq_Enumerable_Select_string_GisketchChoiceOptionDefinition);
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                   System_Linq_Enumerable__ToArray_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (MethodInfo_34FEA80 *)
                              MethodInfo_System_Linq_Enumerable_ToArray_GisketchChoiceOptionDefinition);
        }
        (__this_02->fields).choiceOptions = pGVar8;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).choiceOptions);
        local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = 3;
        pSVar9 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_52f0320("button",pSVar9,(MethodInfo *)0x0);
        (__this_02->fields).choiceArrowStyle = pSVar9;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).choiceArrowStyle);
        options_00 = targetAddress->options;
        uVar6 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                          (*local_50,options_00,(MethodInfo *)0x0);
        if (options_00 != (System_String_array *)0x0) {
          uVar2 = (uint)options_00->max_length;
          uVar12 = uVar2 - 1;
          if ((int)uVar6 < (int)uVar12) {
            uVar12 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar12 = 0;
          }
          if (uVar2 <= uVar12) {
            ThrowIndexOutOfRangeException();
          }
          (__this_02->fields).value = options_00->m_Items[(int)uVar12];
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).value);
          (__this_02->fields).action = "ingame.character.choice";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).action);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Row",(System_String_o *)0x0,"Center",
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_02->fields).layout = pGVar10;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout);
          pUVar5 = local_60;
          if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            __this_04 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                  (__this_00,local_58,__this_02,(MethodInfo *)0x0);
            if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
              pGVar11 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_04,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
              if (Il2CppMethodInitialized_07547ce5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
                Il2CppMethodInitialized_07547ce5 = '\x01';
              }
              pUVar4 = (pUVar5->fields).Parent;
              if (pUVar4 != (UI_BasePanel_o *)0x0) {
                bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
                if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                if (pGVar11 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                  (pGVar11->fields)._OverlayManager_k__BackingField =
                       (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(*(uint64_t *)((char *)pUVar4 + 0xc8));
                  Il2CppCodeGenWriteBarrier(&(pGVar11->fields)._OverlayManager_k__BackingField);
                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (pUVar5->fields)._choiceActions;
                  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
                  System_Action_object____ctor
                            ((System_Action_object__o *)__this_05,(Il2CppObject *)__this_01,
                             (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_Choice_b__0,
                             (MethodInfo_4A81BE0 *)0x0);
                  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar3,(Il2CppObject *)pSVar7,(Il2CppObject *)__this_05,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_set_Item)
                    ;
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


// UI.CharacterCategoryPanel$$TeamChoice
// il2cpp: void UI_CharacterCategoryPanel__TeamChoice (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x5cfd370

void UI_CharacterCategoryPanel__TeamChoice
               (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,
               Settings_BaseSetting_o *setting,MethodInfo *method)

{
  System_String_array *options;
  System_String_o *title;
  System_String_array *labels;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07547ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    Il2CppMethodInitialized_07547ceb = '\x01';
  }
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  if (options == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)options->max_length != 0) {
    options->m_Items[0] = TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
    Il2CppCodeGenWriteBarrier(options->m_Items);
    if ((options->max_length & 0xfffffffe) != 0) {
      options->m_Items[1] = TypeInfo_GameManagers_TeamInfo->static_fields->Red;
      Il2CppCodeGenWriteBarrier(options->m_Items + 1);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      title = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
      labels = UI_CharacterCategoryPanel__Labels
                         ("Team",(System_Collections_Generic_IEnumerable_string__o *)options,
                          method_00);
      UI_CharacterCategoryPanel__Choice
                (__this,parent,setting,title,options,(System_Action_o *)0x0,labels,in_stack_ffffffffffffffc0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.CharacterCategoryPanel$$SelectChoice
// il2cpp: void UI_CharacterCategoryPanel__SelectChoice (UI_CharacterCategoryPanel_o* __this, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x5cfd4c0

void UI_CharacterCategoryPanel__SelectChoice
               (UI_CharacterCategoryPanel_o *__this,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *pIStack_20;
  
  if (Il2CppMethodInitialized_07547cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_TryGetValue);
    Il2CppMethodInitialized_07547cec = '\x01';
  }
  pIStack_20 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choiceActions;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05cfd53d:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)id,&pIStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_TryGetValue);
  if (bVar1) {
    if (pIStack_20 == (Il2CppObject *)0x0) goto label_05cfd53d;
    (*pIStack_20[1].monitor)(pIStack_20[4].klass,value,pIStack_20[2].monitor);
  }
  return;
}


// UI.CharacterCategoryPanel$$IconPicker
// il2cpp: void UI_CharacterCategoryPanel__IconPicker (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, System_Action_o* changed, System_String_array* tooltips, float previewSize, System_String_array* labels, const MethodInfo* method);
// 0x5cfd550

void UI_CharacterCategoryPanel__IconPicker
               (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,
               Settings_BaseSetting_o *setting,System_String_o *title,System_String_array *options,
               System_String_array *icons,System_Action_o *changed,System_String_array *tooltips,
               float previewSize,System_String_array *labels,MethodInfo *method)

{
  System_String_array **targetAddress;
  System_String_array **targetAddress_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_array *options_00;
  uint uVar2;
  UI_CharacterCategoryPanel___c__DisplayClass15_0_o *__this_01;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Button_o *__this_02;
  TMPro_TMP_Text_o *pTVar4;
  System_Action_o *__this_03;
  uint uVar5;
  System_String_o **method_00;
  uint uVar6;
  System_String_array *pSVar7;
  int32_t local_44;
  System_String_o *local_40;
  UnityEngine_Transform_o *local_38;
  
  local_40 = (System_String_o *)CONCAT44(local_40._4_4_,previewSize);
  local_38 = parent;
  if (Il2CppMethodInitialized_07547ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.setting");
    il2cpp_codegen_initialize_runtime_metadata(&"character-setting-");
    Il2CppMethodInitialized_07547ced = '\x01';
  }
  local_44 = 0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_CharacterCategoryPanel___c__DisplayClass15_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).setting);
    (__this_01->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).title);
    targetAddress = &(__this_01->fields).options;
    (__this_01->fields).options = options;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_01->fields).icons = icons;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).icons);
    (__this_01->fields).tooltips = tooltips;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).tooltips);
    (__this_01->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).changed);
    (__this_01->fields).previewSize = local_40._0_4_;
    targetAddress_00 = &(__this_01->fields).labels;
    (__this_01->fields).labels = labels;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settingActions;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_44 = System_Collections_Generic_Dictionary_object__object___get_Count
                           (pSVar1,(MethodInfo_4AAD0E0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Action_get_Count);
      pSVar3 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
      method_00 = &"character-setting-";
      local_40 = System_String__Concat_52f0320("character-setting-",pSVar3,(MethodInfo *)0x0);
      pSVar7 = *targetAddress_00;
      if (pSVar7 == (System_String_array *)0x0) {
        pSVar7 = *targetAddress;
      }
      (__this_01->fields).displayed = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).displayed);
      parent_00 = UI_CharacterCategoryPanel__SettingRow
                            (__this,local_38,(__this_01->fields).title,(MethodInfo *)method_00);
      __this_00 = (__this->fields).View;
      pSVar7 = (__this_01->fields).displayed;
      options_00 = (__this_01->fields).options;
      uVar2 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                        ((__this_01->fields).setting,options_00,(MethodInfo *)0x0);
      pSVar3 = local_40;
      if ((options_00 != (System_String_array *)0x0) && (pSVar7 != (System_String_array *)0x0)) {
        uVar6 = (int)options_00->max_length - 1;
        if ((int)uVar2 < (int)uVar6) {
          uVar6 = uVar2;
        }
        uVar5 = 0;
        if (-1 < (int)uVar2) {
          uVar5 = uVar6;
        }
        if ((uint)pSVar7->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                (__this_00,parent_00,pSVar7->m_Items[(int)uVar5],"ingame.character.setting",
                                 local_40,240.0,48.0,3,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_UI_Button_o *)0x0) {
            pTVar4 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                               ((UnityEngine_Component_o *)__this_02,
                                (MethodInfo_34B09D0 *)
                                MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
            (__this_01->fields).label = pTVar4;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).label);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._settingActions;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      (__this_03,(Il2CppObject *)__this_01,
                       (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass15_0_IconPicker_b__0,
                       (MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar1,(Il2CppObject *)pSVar3,(Il2CppObject *)__this_03,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$CurrentOption
// il2cpp: System_String_o* UI_CharacterCategoryPanel__CurrentOption (Settings_BaseSetting_o* setting, System_String_array* options, const MethodInfo* method);
// 0x5cfd320

System_String_o *
UI_CharacterCategoryPanel__CurrentOption
          (Settings_BaseSetting_o *setting,System_String_array *options,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex(setting,options,(MethodInfo *)0x0);
  if (options == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)options->max_length;
  uVar3 = uVar1 - 1;
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  if (uVar1 <= uVar3) {
    ThrowIndexOutOfRangeException();
  }
  return options->m_Items[(int)uVar3];
}


// UI.CharacterCategoryPanel$$CurrentIndex
// il2cpp: int32_t UI_CharacterCategoryPanel__CurrentIndex (Settings_BaseSetting_o* setting, System_String_array* options, const MethodInfo* method);
// 0x5cfd850

int32_t UI_CharacterCategoryPanel__CurrentIndex
                  (Settings_BaseSetting_o *setting,System_String_array *options,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  iVar1 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex(setting,options,(MethodInfo *)0x0);
  if (options == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (int)options->max_length + -1;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}


// UI.CharacterCategoryPanel$$SettingRow
// il2cpp: UnityEngine_Transform_o* UI_CharacterCategoryPanel__SettingRow (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, System_String_o* title, const MethodInfo* method);
// 0x5cfd1f0

UnityEngine_Transform_o *
UI_CharacterCategoryPanel__SettingRow
          (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,System_String_o *title,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_Transform_o *parent_00;
  TMPro_TMP_Text_o *__this_00;
  System_Nullable_float__Fields local_28;
  
  if (Il2CppMethodInitialized_07547cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_07547cee = '\x01';
  }
  pGVar1 = (__this->fields).View;
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_28,16.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                          (pGVar1,parent,"clear",440.0,48.0,true,
                           (System_Nullable_float__o)local_28,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).View;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                            (pGVar1,parent_00,title,184.0,48.0,"inGameInfo",(MethodInfo *)0x0);
      if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_enableAutoSizing(__this_00,true,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMin(__this_00,14.0,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMax(__this_00,22.0,(MethodInfo *)0x0);
        return parent_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___ctor (UI_CharacterCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cfd890

void UI_CharacterCategoryPanel___ctor(UI_CharacterCategoryPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action__o *__this_00;
  System_Collections_Generic_Dictionary_string__Action_string___o *__this_01;
  
  if (Il2CppMethodInitialized_07547cef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_string);
    Il2CppMethodInitialized_07547cef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
  (__this->fields)._settingActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._settingActions);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_ctor)
  ;
  (__this->fields)._choiceActions = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._choiceActions);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


