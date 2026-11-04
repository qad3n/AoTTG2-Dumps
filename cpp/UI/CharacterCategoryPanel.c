// Type: UI.CharacterCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterCategoryPanel.cs
// --------------------------------

// UI.CharacterCategoryPanel.<>c__DisplayClass10_0$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass10_0___ctor (UI_CharacterCategoryPanel___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterCategoryPanel___c__DisplayClass10_0___ctor(UI_CharacterCategoryPanel___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass10_0$$<Choice>b__0
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass10_0___Choice_b__0 (UI_CharacterCategoryPanel___c__DisplayClass10_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182239f90

void UI_CharacterCategoryPanel___c__DisplayClass10_0___Choice_b__0
               (UI_CharacterCategoryPanel___c__DisplayClass10_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  int32_t index;
  
  if (Il2CppMethodInitialized_184347185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    Il2CppMethodInitialized_184347185 = '\x01';
  }
  index = System_Array__IndexOf_object_
                    ((System_Object_array *)(__this->fields).options,(Il2CppObject *)value,
                     (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
  if (-1 < index) {
    Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__SetIndex
              ((__this->fields).setting,(__this->fields).options,index,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).changed;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
  }
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass12_0___ctor (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterCategoryPanel___c__DisplayClass12_0___ctor(UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<IconPicker>b__0
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass12_0___IconPicker_b__0 (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x18223a010

void UI_CharacterCategoryPanel___c__DisplayClass12_0___IconPicker_b__0
               (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this,MethodInfo *method)

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
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  
  if (Il2CppMethodInitialized_184347186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_IconPicker_b__1);
    Il2CppMethodInitialized_184347186 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterCategoryPanel_o *)0x0) {
    if (Il2CppMethodInitialized_18434717c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
      Il2CppMethodInitialized_18434717c = '\x01';
    }
    pUVar3 = (pUVar2->fields).Parent;
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterPopup
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
      __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)(__this->fields).__9__1;
      __this_00 = (*(uint64_t *)((char *)pUVar3 + 0xc0));
      setting = (__this->fields).setting;
      title = (__this->fields).title;
      options = (__this->fields).options;
      icons = (__this->fields).icons;
      tooltips = (__this->fields).tooltips;
      if (__this_01 == (UnityEngine_AudioClip_PCMSetPositionCallback_o *)0x0) {
        __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
        System_Action_int____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_IconPicker_b__1,
                   (MethodInfo *)0x0);
        (__this->fields).__9__1 = (System_Action_int__o *)__this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_01);
      }
      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__Show
                  ((Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup_o *)__this_00,setting,title,options,icons
                   ,tooltips,(System_Action_int__o *)__this_01,(__this->fields).previewSize,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel.<>c__DisplayClass12_0$$<IconPicker>b__1
// il2cpp: void UI_CharacterCategoryPanel___c__DisplayClass12_0___IconPicker_b__1 (UI_CharacterCategoryPanel___c__DisplayClass12_0_o* __this, int32_t selected, const MethodInfo* method);
// 0x18223a1a0

void UI_CharacterCategoryPanel___c__DisplayClass12_0___IconPicker_b__1
               (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *__this,int32_t selected,MethodInfo *method)

{
  System_String_array *pSVar1;
  TMPro_TMP_Text_o *pTVar2;
  System_Action_o *pSVar3;
  
  pSVar1 = (__this->fields).options;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((uint)pSVar1->max_length <= (uint)selected) {
      ThrowIndexOutOfRangeException();
    }
    pTVar2 = (__this->fields).label;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,pSVar1->m_Items[selected],(pTVar2->klass->vtable)._66_set_text.method);
      pSVar3 = (__this->fields).changed;
      if (pSVar3 != (System_Action_o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$get_DoublePanel
// il2cpp: bool UI_CharacterCategoryPanel__get_DoublePanel (UI_CharacterCategoryPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CharacterCategoryPanel__get_DoublePanel(UI_CharacterCategoryPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CharacterCategoryPanel$$get_Popup
// il2cpp: UI_CharacterPopup_o* UI_CharacterCategoryPanel__get_Popup (UI_CharacterCategoryPanel_o* __this, const MethodInfo* method);
// 0x18221e220

UI_CharacterPopup_o *
UI_CharacterCategoryPanel__get_Popup(UI_CharacterCategoryPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterPopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434717c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
    Il2CppMethodInitialized_18434717c = '\x01';
  }
  pUVar2 = (UI_CharacterPopup_o *)(__this->fields).Parent;
  if (pUVar2 != (UI_CharacterPopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterPopup))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterPopup);
    }
  }
  return pUVar2;
}


// UI.CharacterCategoryPanel$$Setup
// il2cpp: void UI_CharacterCategoryPanel__Setup (UI_CharacterCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18221def0

void UI_CharacterCategoryPanel__Setup
               (UI_CharacterCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *value_00;
  float fVar5;
  float fVar6;
  System_Nullable_float__Fields local_res8;
  
  if (Il2CppMethodInitialized_18434717d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_18434717d = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar1,(MethodInfo *)0x0);
  (__this->fields).View = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).View,pGVar1);
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar6 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    value.fields.y = fVar6;
    value.fields.x = fVar5;
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar3 = pUVar2;
    }
    UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).View;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar5 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                      (__this,(__this->klass->vtable)._33_GetWidth.method);
    fVar6 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                      (__this,(__this->klass->vtable)._34_GetHeight.method);
    local_res8.hasValue = false;
    local_res8._1_3_ = 0;
    local_res8.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_res8,32.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      pUVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                         (pGVar1,pUVar4,"clear",fVar5,fVar6,true,
                          (System_Nullable_float__o)local_res8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__Position
                (pUVar4,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0);
      value_00 = UI_CharacterCategoryPanel__CreateColumn(__this,pUVar4,(MethodInfo *)0x0);
      (__this->fields).DoublePanelLeft = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft,value_00);
      pUVar4 = UI_CharacterCategoryPanel__CreateColumn(__this,pUVar4,(MethodInfo *)0x0);
      (__this->fields).DoublePanelRight = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelRight,pUVar4);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$CreateColumn
// il2cpp: UnityEngine_Transform_o* UI_CharacterCategoryPanel__CreateColumn (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18221d760

UnityEngine_Transform_o *
UI_CharacterCategoryPanel__CreateColumn
          (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar1;
  float value_00;
  
  if (Il2CppMethodInitialized_18434717e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_18434717e = '\x01';
  }
  __this_00 = (__this->fields).View;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"Panel");
    (__this_01->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,"clear");
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(440.0,(MethodInfo *)0x0);
    value_00 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                         (__this,(__this->klass->vtable)._34_GetHeight.method);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column","FlexStart","Center",
                       (System_String_o *)0x0,(System_String_o *)0x0,18.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,20.0,0.0,0.0,0.0,0.0
                       ,0.0,(MethodInfo *)0x0);
    (__this_01->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,value);
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this_00,parent,__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        pUVar1 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        return pUVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$OpenSetting
// il2cpp: void UI_CharacterCategoryPanel__OpenSetting (UI_CharacterCategoryPanel_o* __this, System_String_o* id, const MethodInfo* method);
// 0x18221dc90

void UI_CharacterCategoryPanel__OpenSetting
               (UI_CharacterCategoryPanel_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_18434717f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
    Il2CppMethodInitialized_18434717f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settingActions;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
    if (bVar1) {
      if (local_res8 == (Il2CppObject *)0x0) goto label_18221dd06;
      (*local_res8[1].monitor)(local_res8[4].klass,local_res8[2].monitor);
    }
    return;
  }
label_18221dd06:
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$Choice
// il2cpp: void UI_CharacterCategoryPanel__Choice (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_Action_o* changed, const MethodInfo* method);
// 0x18221d250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221d513: mov ecx, r13d

void UI_CharacterCategoryPanel__Choice
               (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,
               Settings_BaseSetting_o *setting,System_String_o *title,System_String_array *options,
               System_Action_o *changed,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__Action_string___o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  System_String_array *pSVar2;
  UI_BasePanel_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  uint uVar4;
  UI_CharacterCategoryPanel___c__DisplayClass10_0_o *object;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *parent_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_04;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_05;
  uint uVar8;
  int32_t local_48 [2];
  System_Enum_o local_40;
  undefined4 local_30;
  
  if (Il2CppMethodInitialized_184347180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass10_0_Choice_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"button");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.choice");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"character-choice-");
    Il2CppMethodInitialized_184347180 = '\x01';
  }
  uVar8 = 0;
  local_48[0] = 0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_CharacterCategoryPanel___c__DisplayClass10_0_o *)0x0) {
    (object->fields).options = options;
    Il2CppCodeGenWriteBarrier(&(object->fields).options,options);
    (object->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(object->fields).setting,setting);
    (object->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(object->fields).changed,changed);
    __this_00 = (__this->fields)._choiceActions;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Action_string___o *)0x0) {
      local_48[0] = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_13CDEB0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_get_Count
                              );
      pSVar5 = System_Int32__ToString(local_48,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("character-choice-",pSVar5,(MethodInfo *)0x0);
      __this_01 = (__this->fields).View;
      parent_00 = UI_CharacterCategoryPanel__SettingRow(__this,parent,title,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_03->fields).type = "Dropdown";
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).type,"Dropdown");
        (__this_03->fields).id = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).id,pSVar5);
        (__this_03->fields).style = "dropdown";
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).style,"dropdown");
        pSVar2 = (object->fields).options;
        (__this_03->fields).options = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).options,pSVar2);
        local_40.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
        local_40.monitor = &g_data_ffffffffffffffff;
        local_30 = 3;
        pSVar6 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50("button",pSVar6,(MethodInfo *)0x0);
        (__this_03->fields).choiceArrowStyle = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).choiceArrowStyle,pSVar6);
        pSVar2 = (object->fields).options;
        uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                          ((object->fields).setting,pSVar2,(MethodInfo *)0x0);
        if (pSVar2 != (System_String_array *)0x0) {
          if ((-1 < (int)uVar4) && (uVar8 = (int)pSVar2->max_length - 1, (int)uVar4 <= (int)uVar8)) {
            uVar8 = uVar4;
          }
          if ((uint)pSVar2->max_length <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6 = pSVar2->m_Items[(int)uVar8];
          (__this_03->fields).value = pSVar6;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).value,pSVar6);
          (__this_03->fields).action = "ingame.character.choice";
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).action,"ingame.character.choice");
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_03->fields).layout = value;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).layout,value);
          if ((__this_01 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
             (__this_04 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                    (__this_01,parent_00,__this_03,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_GameObject_o *)0x0)) {
            pGVar7 = UnityEngine_GameObject__GetComponent_object_
                               (__this_04,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
            if (Il2CppMethodInitialized_18434717c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
              Il2CppMethodInitialized_18434717c = '\x01';
            }
            pUVar3 = (__this->fields).Parent;
            if (pUVar3 != (UI_BasePanel_o *)0x0) {
              bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
              if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
              }
              if (pGVar7 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                pUVar3 = (*(uint64_t *)((char *)pUVar3 + 0xc8));
                (pGVar7->fields)._OverlayManager_k__BackingField =
                     (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pUVar3;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._OverlayManager_k__BackingField,pUVar3);
                __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields)._choiceActions;
                __this_05 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
                System_Action_object____ctor
                          (__this_05,(Il2CppObject *)object,
                           (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass10_0_Choice_b__0,
                           (MethodInfo *)0x0);
                if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (__this_02,(Il2CppObject *)pSVar5,(Il2CppObject *)__this_05,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_set_Item);
                  return;
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


// UI.CharacterCategoryPanel$$SelectChoice
// il2cpp: void UI_CharacterCategoryPanel__SelectChoice (UI_CharacterCategoryPanel_o* __this, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x18221dd10

void UI_CharacterCategoryPanel__SelectChoice
               (UI_CharacterCategoryPanel_o *__this,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184347181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_TryGetValue);
    Il2CppMethodInitialized_184347181 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._choiceActions;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_TryGetValue);
    if (bVar1) {
      if (local_res8 == (Il2CppObject *)0x0) goto label_18221dd96;
      (*local_res8[1].monitor)(local_res8[4].klass,value,local_res8[2].monitor);
    }
    return;
  }
label_18221dd96:
  ThrowNullReferenceException();
}


// UI.CharacterCategoryPanel$$IconPicker
// il2cpp: void UI_CharacterCategoryPanel__IconPicker (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, System_Action_o* changed, System_String_array* tooltips, float previewSize, const MethodInfo* method);
// 0x18221d9c0

void UI_CharacterCategoryPanel__IconPicker
               (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,
               Settings_BaseSetting_o *setting,System_String_o *title,System_String_array *options,
               System_String_array *icons,System_Action_o *changed,System_String_array *tooltips,
               float previewSize,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action__o *__this_00;
  System_String_array *options_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  uint uVar1;
  UI_CharacterCategoryPanel___c__DisplayClass12_0_o *object;
  System_String_o *pSVar2;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Button_o *__this_03;
  TMPro_TMP_Text_o *value;
  System_Action_o *__this_04;
  uint uVar3;
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184347182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_IconPicker_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.setting");
    il2cpp_codegen_initialize_runtime_metadata(&"character-setting-");
    Il2CppMethodInitialized_184347182 = '\x01';
  }
  local_28[0] = 0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_CharacterCategoryPanel___c__DisplayClass12_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(object->fields).setting,setting);
    (object->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(object->fields).title,title);
    (object->fields).options = options;
    Il2CppCodeGenWriteBarrier(&(object->fields).options,options);
    (object->fields).icons = icons;
    Il2CppCodeGenWriteBarrier(&(object->fields).icons,icons);
    (object->fields).tooltips = tooltips;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltips,tooltips);
    (object->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(object->fields).changed,changed);
    (object->fields).previewSize = previewSize;
    __this_00 = (__this->fields)._settingActions;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Action__o *)0x0) {
      local_28[0] = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_13CDEB0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Action_get_Count);
      pSVar2 = System_Int32__ToString(local_28,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50("character-setting-",pSVar2,(MethodInfo *)0x0);
      parent_00 = UI_CharacterCategoryPanel__SettingRow
                            (__this,parent,(object->fields).title,(MethodInfo *)0x0);
      options_00 = (object->fields).options;
      __this_01 = (__this->fields).View;
      uVar1 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex
                        ((object->fields).setting,options_00,(MethodInfo *)0x0);
      if (options_00 != (System_String_array *)0x0) {
        if ((int)uVar1 < 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (int)options_00->max_length - 1;
          if ((int)uVar1 <= (int)uVar3) {
            uVar3 = uVar1;
          }
        }
        if ((uint)options_00->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if (__this_01 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          __this_03 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                (__this_01,parent_00,options_00->m_Items[(int)uVar3],"ingame.character.setting",
                                 pSVar2,240.0,48.0,3,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
            value = UnityEngine_Component__GetComponentInChildren_object__664b50
                              ((UnityEngine_Component_o *)__this_03,
                               (MethodInfo_664B50 *)
                               MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
            (object->fields).label = value;
            Il2CppCodeGenWriteBarrier(&(object->fields).label,value);
            __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._settingActions;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_04,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_CharacterCategoryPanel_c__DisplayClass12_0_IconPicker_b__0,
                       (MethodInfo *)0x0);
            if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_02,(Il2CppObject *)pSVar2,(Il2CppObject *)__this_04,
                         (MethodInfo_147A7F0 *)
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
// 0x18221d970

System_String_o *
UI_CharacterCategoryPanel__CurrentOption
          (Settings_BaseSetting_o *setting,System_String_array *options,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = Gisketch_Aottg2UI_Game_AottgCharacterPickerPopup__GetIndex(setting,options,(MethodInfo *)0x0);
  if (options == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)uVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)options->max_length - 1;
    if ((int)uVar1 <= (int)uVar2) {
      uVar2 = uVar1;
    }
  }
  if (uVar2 < (uint)options->max_length) {
    return options->m_Items[(int)uVar2];
  }
  ThrowIndexOutOfRangeException();
}


// UI.CharacterCategoryPanel$$SettingRow
// il2cpp: UnityEngine_Transform_o* UI_CharacterCategoryPanel__SettingRow (UI_CharacterCategoryPanel_o* __this, UnityEngine_Transform_o* parent, System_String_o* title, const MethodInfo* method);
// 0x18221dda0

UnityEngine_Transform_o *
UI_CharacterCategoryPanel__SettingRow
          (UI_CharacterCategoryPanel_o *__this,UnityEngine_Transform_o *parent,System_String_o *title,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_Transform_o *parent_00;
  TMPro_TMP_Text_o *__this_00;
  System_Nullable_float__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_184347183 = '\x01';
  }
  pGVar1 = (__this->fields).View;
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)local_res8,16.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                          (pGVar1,parent,"clear",440.0,48.0,true,
                           (System_Nullable_float__o)local_res8[0],(MethodInfo *)0x0);
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
// 0x18221e160

void UI_CharacterCategoryPanel___ctor(UI_CharacterCategoryPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action__o *__this_00;
  System_Collections_Generic_Dictionary_string__Action_string___o *__this_01;
  
  if (Il2CppMethodInitialized_184347184 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_string);
    Il2CppMethodInitialized_184347184 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
  (__this->fields)._settingActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._settingActions,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_string_ctor)
  ;
  (__this->fields)._choiceActions = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._choiceActions,__this_01);
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


