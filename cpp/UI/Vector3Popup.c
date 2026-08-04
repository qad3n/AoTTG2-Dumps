// Type: UI.Vector3Popup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Vector3Popup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs
// --------------------------------

// UI.Vector3Popup$$get_Title
// il2cpp: System_String_o* UI_Vector3Popup__get_Title (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x43564b0

System_String_o * UI_Vector3Popup__get_Title(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (g_data_057ae166 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Vector3");
    g_data_057ae166 = '\x01';
  }
  return "Vector3";
}


// UI.Vector3Popup$$get_Width
// il2cpp: float UI_Vector3Popup__get_Width (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x43564e0

float UI_Vector3Popup__get_Width(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.Vector3Popup$$get_Height
// il2cpp: float UI_Vector3Popup__get_Height (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x43564f0

float UI_Vector3Popup__get_Height(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.Vector3Popup$$get_VerticalSpacing
// il2cpp: float UI_Vector3Popup__get_VerticalSpacing (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356500

float UI_Vector3Popup__get_VerticalSpacing(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.Vector3Popup$$get_PanelAlignment
// il2cpp: int32_t UI_Vector3Popup__get_PanelAlignment (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356510

int32_t UI_Vector3Popup__get_PanelAlignment(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.Vector3Popup$$Setup
// il2cpp: void UI_Vector3Popup__Setup (UI_Vector3Popup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4356520

void UI_Vector3Popup__Setup(UI_Vector3Popup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae167 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae167 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$Show
// il2cpp: void UI_Vector3Popup__Show (UI_Vector3Popup_o* __this, Settings_Vector3Setting_o* setting, UnityEngine_UI_Text_o* text, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x43566d0

void UI_Vector3Popup__Show
               (UI_Vector3Popup_o *__this,Settings_Vector3Setting_o *setting,UnityEngine_UI_Text_o *text,
               UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 value;
  uint uVar2;
  Settings_FloatSetting_o *pSVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  UnityEngine_Object_o *obj;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_04;
  long *plVar9;
  MethodInfo *method_00;
  UI_Vector3Popup_o *pUVar10;
  undefined1 auVar11 [12];
  undefined8 in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  Il2CppObject *in_stack_ffffffffffffff60;
  System_Collections_Generic_List_T__o *pSStack_80;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_78;
  UnityEngine_Object_o *pUStack_70;
  undefined1 auStack_68 [16];
  UnityEngine_Object_o *pUStack_58;
  UI_Vector3Popup_o *pUStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057ae168 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae168 = '\x01';
  }
  pUVar10 = __this;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    (__this->fields)._setting = setting;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
    pUVar10 = (UI_Vector3Popup_o *)&(__this->fields)._text;
    (__this->fields)._text = text;
    il2cpp_runtime_helper_022b4080(pUVar10,text);
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      pSVar3 = (__this->fields)._x;
      pUVar10 = (UI_Vector3Popup_o *)0x0;
      if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar3,(setting->fields)._value.fields.x,MethodInfo_Void_set_Value);
        pSVar3 = (__this->fields)._y;
        pUVar10 = (UI_Vector3Popup_o *)0x0;
        text = (UnityEngine_UI_Text_o *)&MethodInfo_Void_set_Value;
        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
          value = (setting->fields)._value.fields.y;
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar3,(float)value,MethodInfo_Void_set_Value);
          pSVar3 = (__this->fields)._z;
          pUVar10 = (UI_Vector3Popup_o *)0x0;
          if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar3,(setting->fields)._value.fields.z,MethodInfo_Void_set_Value
                      );
            (__this->fields)._onChangeVector = onChangeVector;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._onChangeVector);
            UI_Vector3Popup__CreateInputs(__this,(MethodInfo *)onChangeVector);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_50 = __this;
  pIStack_48 = (Il2CppRGCTXData *)text;
  if (g_data_057ae169 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae169 = '\x01';
  }
  pSStack_80 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_78 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUStack_70 = (UnityEngine_Object_o *)0x0;
  pSVar4 = (pUVar10->fields)._inputs;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04356bbf;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pUStack_70 = pUStack_58;
  pSStack_80 = (System_Collections_Generic_List_T__o *)auStack_68._0_8_;
  pSStack_78 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_68._8_8_;
  while (__this_00.fields._index = (int)in_stack_ffffffffffffff58,
        __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20),
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50,
        __this_00.fields._current = in_stack_ffffffffffffff60,
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&pSStack_80), obj = pUStack_70, (char)bVar7 != '\0'
        ) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  }
  __this_01.fields._index = (int)in_stack_ffffffffffffff58;
  __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_01.fields._current = in_stack_ffffffffffffff60;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&pSStack_80);
  do {
    themePanel = (System_String_o *)
                 (*(pUVar10->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (pUVar10,(pUVar10->klass->vtable)._4_get_ThemePanel.method);
    __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_04,0x18,30.0,20.0,themePanel,(MethodInfo *)0x0);
    pSVar4 = (pUVar10->fields)._inputs;
    in_stack_ffffffffffffff60 = (Il2CppObject *)0x0;
    in_stack_ffffffffffffff50 = 0;
    in_stack_ffffffffffffff58 = 0;
    pUVar8 = UI_ElementFactory__CreateInputSetting
                       ((pUVar10->fields).SinglePanel,__this_04,(Settings_BaseSetting_o *)(pUVar10->fields)._x
                        ,"X","",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pUVar5->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pUVar5->m_Items[(int)uVar2] = pUVar8;
          il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = (pUVar10->fields)._inputs;
        in_stack_ffffffffffffff60 = (Il2CppObject *)0x0;
        in_stack_ffffffffffffff50 = 0;
        in_stack_ffffffffffffff58 = 0;
        pUVar8 = UI_ElementFactory__CreateInputSetting
                           ((pUVar10->fields).SinglePanel,__this_04,
                            (Settings_BaseSetting_o *)(pUVar10->fields)._y,"Y","",140.0,
                            40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                            (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (pSVar4->fields)._items;
          if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2] = pUVar8;
              il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            pSVar4 = (pUVar10->fields)._inputs;
            in_stack_ffffffffffffff60 = (Il2CppObject *)0x0;
            in_stack_ffffffffffffff50 = 0;
            in_stack_ffffffffffffff58 = 0;
            pUVar8 = UI_ElementFactory__CreateInputSetting
                               ((pUVar10->fields).SinglePanel,__this_04,
                                (Settings_BaseSetting_o *)(pUVar10->fields)._z,"Z","",140.0
                                ,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar4->fields)._items;
              if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                uVar2 = (pSVar4->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar4->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = pUVar8;
                  il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar8);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar8,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                return;
              }
            }
          }
        }
      }
    }
label_04356bbf:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) goto label_04356c0b;
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar6 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._index = (int)in_stack_ffffffffffffff58;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
    __this_02.fields._current = in_stack_ffffffffffffff60;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&pSStack_80);
  } while (lVar6 == 0);
  il2cpp_runtime_helper_022fefe0(lVar6);
label_04356c0b:
  __this_03.fields._index = (int)in_stack_ffffffffffffff58;
  __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_03.fields._current = in_stack_ffffffffffffff60;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&pSStack_80);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.Vector3Popup$$CreateInputs
// il2cpp: void UI_Vector3Popup__CreateInputs (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356800

void UI_Vector3Popup__CreateInputs(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  UnityEngine_Object_o *obj;
  bool_conflict bVar6;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_04;
  UnityEngine_GameObject_o *pUVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_T__o *local_58;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_50;
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (g_data_057ae169 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae169 = '\x01';
  }
  local_58 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._inputs;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04356bbf;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  local_48 = local_30;
  local_58 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
  while (__this_00.fields._index = (int)in_stack_ffffffffffffff80,
        __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20),
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
        __this_00.fields._current = in_stack_ffffffffffffff88,
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&local_58), obj = local_48, (char)bVar6 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  }
  __this_01.fields._index = (int)in_stack_ffffffffffffff80;
  __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_01.fields._current = in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&local_58);
  do {
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_04,0x18,30.0,20.0,themePanel,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._inputs;
    in_stack_ffffffffffffff88 = (Il2CppObject *)0x0;
    in_stack_ffffffffffffff78 = 0;
    in_stack_ffffffffffffff80 = 0;
    pUVar7 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_04,(Settings_BaseSetting_o *)(__this->fields)._x,
                        "X","",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar7;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,pUVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = (__this->fields)._inputs;
        in_stack_ffffffffffffff88 = (Il2CppObject *)0x0;
        in_stack_ffffffffffffff78 = 0;
        in_stack_ffffffffffffff80 = 0;
        pUVar7 = UI_ElementFactory__CreateInputSetting
                           ((__this->fields).SinglePanel,__this_04,
                            (Settings_BaseSetting_o *)(__this->fields)._y,"Y","",140.0,40.0
                            ,0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                            ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar3->fields)._items;
          if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = pUVar7;
              il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,pUVar7);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pSVar3 = (__this->fields)._inputs;
            in_stack_ffffffffffffff88 = (Il2CppObject *)0x0;
            in_stack_ffffffffffffff78 = 0;
            in_stack_ffffffffffffff80 = 0;
            pUVar7 = UI_ElementFactory__CreateInputSetting
                               ((__this->fields).SinglePanel,__this_04,
                                (Settings_BaseSetting_o *)(__this->fields)._z,"Z","",140.0,
                                40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (pSVar3->fields)._items;
              if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = pUVar7;
                  il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,pUVar7);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                return;
              }
            }
          }
        }
      }
    }
label_04356bbf:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) goto label_04356c0b;
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._index = (int)in_stack_ffffffffffffff80;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_02.fields._current = in_stack_ffffffffffffff88;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&local_58);
  } while (lVar5 == 0);
  il2cpp_runtime_helper_022fefe0(lVar5);
label_04356c0b:
  __this_03.fields._index = (int)in_stack_ffffffffffffff80;
  __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_03.fields._current = in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_58);
  _Unwind_Resume(auVar9._0_8_);
}


// UI.Vector3Popup$$OnButtonClick
// il2cpp: void UI_Vector3Popup__OnButtonClick (UI_Vector3Popup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4356c50

void UI_Vector3Popup__OnButtonClick(UI_Vector3Popup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_Vector3Setting_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Vector3_Fields vector;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  UI_TooltipPopup_c *method_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ae16a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae16a = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_04356dd6:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pSVar8 = (__this->fields)._x;
  if ((((pSVar8 != (Settings_FloatSetting_o *)0x0) &&
       (pSVar1 = (__this->fields)._y, pSVar1 != (Settings_FloatSetting_o *)0x0)) &&
      (pSVar2 = (__this->fields)._z, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
     (name = (System_String_o *)(__this->fields)._setting,
     (UI_TooltipPopup_o *)name != (UI_TooltipPopup_o *)0x0)) {
    value.fields.y = (pSVar1->fields)._value;
    value.fields.x = (pSVar8->fields)._value;
    value.fields.z = (pSVar2->fields)._value;
    Settings_TypedSetting_Vector3___set_Value((Settings_TypedSetting_Vector3__o *)name,value,MethodInfo_Void_set_Value);
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_Vector3Setting_o *)0x0) {
      pUVar4 = (__this->fields)._text;
      vector = (pSVar3->fields)._value.fields;
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (System_String_o *)0x0;
      pSVar7 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                  (pUVar4,pSVar7,(pUVar4->klass->vtable)._75_set_text.method);
        pUVar5 = (__this->fields)._onChangeVector;
        if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
        }
        goto label_04356dd6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae16b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae16b = '\x01';
  }
  pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._panel);
  pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields).Caller = (UnityEngine_Component_o *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields).Caller);
  pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  *(Settings_FloatSetting_o **)&(((UI_TooltipPopup_o *)name)->fields)._offset = pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._offset,pSVar8);
  method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  ((UI_TooltipPopup_o *)((long)name + 200))->klass = method_00;
  il2cpp_runtime_helper_022b4080((UI_TooltipPopup_o *)((long)name + 200));
  UI_BasePopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)method_00);
  return;
}


// UI.Vector3Popup$$.ctor
// il2cpp: void UI_Vector3Popup___ctor (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356e00

void UI_Vector3Popup___ctor(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (g_data_057ae16b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae16b = '\x01';
  }
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._x = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._x);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._y = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._y);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._z = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._z,pSVar1);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._inputs = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._inputs);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_0
// il2cpp: void UI_Vector3Popup___Setup_b__17_0 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356f50

void UI_Vector3Popup___Setup_b__17_0(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_Vector3Setting_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Vector3_Fields vector;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  UI_TooltipPopup_c *method_00;
  UI_TooltipPopup_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ae16c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae16c = '\x01';
  }
  __this_00 = "Save";
  if (g_data_057ae16a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae16a = '\x01';
  }
  bVar6 = System_String__op_Equality((System_String_o *)__this_00,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality
                      ((System_String_o *)__this_00,(System_String_o *)"Save",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pSVar8 = (__this->fields)._x;
    if ((((pSVar8 != (Settings_FloatSetting_o *)0x0) &&
         (pSVar1 = (__this->fields)._y, pSVar1 != (Settings_FloatSetting_o *)0x0)) &&
        (pSVar2 = (__this->fields)._z, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
       (__this_00 = (UI_TooltipPopup_o *)(__this->fields)._setting, __this_00 != (UI_TooltipPopup_o *)0x0)) {
      value.fields.y = (pSVar1->fields)._value;
      value.fields.x = (pSVar8->fields)._value;
      value.fields.z = (pSVar2->fields)._value;
      Settings_TypedSetting_Vector3___set_Value
                ((Settings_TypedSetting_Vector3__o *)__this_00,value,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 != (Settings_Vector3Setting_o *)0x0) {
        pUVar4 = (__this->fields)._text;
        vector = (pSVar3->fields)._value.fields;
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = (UI_TooltipPopup_o *)0x0;
        pSVar7 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                    (pUVar4,pSVar7,(pUVar4->klass->vtable)._75_set_text.method);
          pUVar5 = (__this->fields)._onChangeVector;
          if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
          }
          goto label_04356dd6;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae16b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ae16b = '\x01';
    }
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    (__this_00->fields)._panel = (UnityEngine_RectTransform_o *)pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._panel);
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    (__this_00->fields).Caller = (UnityEngine_Component_o *)pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).Caller);
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    *(Settings_FloatSetting_o **)&(__this_00->fields)._offset = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._offset,pSVar8);
    method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
    __this_00[1].klass = method_00;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    UI_BasePopup___ctor(__this_00,(MethodInfo *)method_00);
    return;
  }
label_04356dd6:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_1
// il2cpp: void UI_Vector3Popup___Setup_b__17_1 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x4356f90

void UI_Vector3Popup___Setup_b__17_1(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_Vector3Setting_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Vector3_Fields vector;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  UI_TooltipPopup_c *method_00;
  UI_TooltipPopup_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ae16d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae16d = '\x01';
  }
  __this_00 = "Cancel";
  if (g_data_057ae16a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae16a = '\x01';
  }
  bVar6 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality((System_String_o *)__this_00,"Save",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pSVar8 = (__this->fields)._x;
    if ((((pSVar8 != (Settings_FloatSetting_o *)0x0) &&
         (pSVar1 = (__this->fields)._y, pSVar1 != (Settings_FloatSetting_o *)0x0)) &&
        (pSVar2 = (__this->fields)._z, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
       (__this_00 = (UI_TooltipPopup_o *)(__this->fields)._setting, __this_00 != (UI_TooltipPopup_o *)0x0)) {
      value.fields.y = (pSVar1->fields)._value;
      value.fields.x = (pSVar8->fields)._value;
      value.fields.z = (pSVar2->fields)._value;
      Settings_TypedSetting_Vector3___set_Value
                ((Settings_TypedSetting_Vector3__o *)__this_00,value,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 != (Settings_Vector3Setting_o *)0x0) {
        pUVar4 = (__this->fields)._text;
        vector = (pSVar3->fields)._value.fields;
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = (UI_TooltipPopup_o *)0x0;
        pSVar7 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                    (pUVar4,pSVar7,(pUVar4->klass->vtable)._75_set_text.method);
          pUVar5 = (__this->fields)._onChangeVector;
          if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
          }
          goto label_04356dd6;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae16b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ae16b = '\x01';
    }
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    (__this_00->fields)._panel = (UnityEngine_RectTransform_o *)pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._panel);
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    (__this_00->fields).Caller = (UnityEngine_Component_o *)pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).Caller);
    pSVar8 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor_40f3a30(pSVar8,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
    *(Settings_FloatSetting_o **)&(__this_00->fields)._offset = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._offset,pSVar8);
    method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
    __this_00[1].klass = method_00;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    UI_BasePopup___ctor(__this_00,(MethodInfo *)method_00);
    return;
  }
label_04356dd6:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


