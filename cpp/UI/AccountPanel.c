// Type: UI.AccountPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AccountPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.AccountPanel.<>c__DisplayClass75_0$$.ctor
// il2cpp: void UI_AccountPanel___c__DisplayClass75_0___ctor (UI_AccountPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AccountPanel___c__DisplayClass75_0___ctor(UI_AccountPanel___c__DisplayClass75_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel.<>c__DisplayClass75_0$$<AddPasswordToggle>b__0
// il2cpp: void UI_AccountPanel___c__DisplayClass75_0___AddPasswordToggle_b__0 (UI_AccountPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x182283850

void UI_AccountPanel___c__DisplayClass75_0___AddPasswordToggle_b__0
               (UI_AccountPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  UnityEngine_Sprite_o *value;
  float fVar5;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_1843473df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473df = '\x01';
  }
  bVar4 = (__this->fields).visible;
  pUVar1 = (__this->fields).field;
  (__this->fields).visible = bVar4 == false;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_1822839ae;
  UnityEngine_UI_InputField__set_contentType(pUVar1,-(uint)(bVar4 != false) & 7,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_1822839ae;
  UnityEngine_UI_InputField__set_inputType
            (pUVar1,(uint)((__this->fields).visible == false) * 2,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).img;
  if ((__this->fields).visible == false) {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).spriteHidden;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) goto label_182283929;
    value = (__this->fields).spriteHidden;
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).spriteVisible;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
label_182283929:
      value = (__this->fields).spriteVisible;
    }
    else {
      value = (__this->fields).spriteHidden;
    }
  }
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_sprite(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).img;
    fVar5 = 1.0;
    if ((__this->fields).visible == false) {
      fVar5 = 0.65;
    }
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      local_18.fields.r = 1.0;
      local_18.fields.g = 1.0;
      local_18.fields.b = 1.0;
      local_18.fields.a = fVar5;
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (pUVar2,&local_18,(pUVar2->klass->vtable)._23_set_color.method);
      pUVar1 = (__this->fields).field;
      if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__ForceLabelUpdate(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822839ae:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$Create
// il2cpp: UI_AccountPanel_o* UI_AccountPanel__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182274120

UI_AccountPanel_o * UI_AccountPanel__Create(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UI_AccountPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_1843473b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AccountPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AccountPanel");
    Il2CppMethodInitialized_1843473b3 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AccountPanel",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AccountPanel);
        if (__this_01 != (UI_AccountPanel_o *)0x0) {
          UI_AccountPanel__Build(__this_01,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$Build
// il2cpp: void UI_AccountPanel__Build (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822735c0

void UI_AccountPanel__Build(UI_AccountPanel_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  System_String_o *title;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  UnityEngine_UI_ContentSizeFitter_o *__this_04;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_05;
  System_Action_o *pSVar7;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38 [2];
  
  if (Il2CppMethodInitialized_1843473b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleAuthMethodsChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleLoggedIn);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleLoggedOut);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_1843473b4 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rect = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar1);
  pUVar1 = (__this->fields)._rect;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_sizeDelta(pUVar1,(UnityEngine_Vector2_o)0x43e10000,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar2,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      value = (UnityEngine_Texture_o *)
              UI_UIManager__GetThemeTexture
                        ("DefaultPanel","MainBody","BackgroundTexture",
                         "DefaultPanel",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
        pUVar3 = UI_UIManager__GetThemeColor
                           (local_38,"DefaultPanel","MainBody","BackgroundColor",
                            "DefaultPanel",(MethodInfo *)0x0);
        local_48.r = (pUVar3->fields).r;
        local_48.g = (pUVar3->fields).g;
        local_48.b = (pUVar3->fields).b;
        local_48.a = (pUVar3->fields).a * 0.75;
        (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                  (__this_01,(UnityEngine_Color_o *)&local_48,(__this_01->klass->vtable)._23_set_color.method)
        ;
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar2,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
          UnityEngine_RectOffset___ctor_2ed1030(__this_03,10,10,10,10,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_LayoutGroup__set_padding
                      ((UnityEngine_UI_LayoutGroup_o *)__this_02,__this_03,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,6.0,(MethodInfo *)0x0);
            UnityEngine_UI_LayoutGroup__set_childAlignment
                      ((UnityEngine_UI_LayoutGroup_o *)__this_02,1,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar2,(MethodInfo_6F4D60 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
              if (__this_04 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_04,0,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_04,2,(MethodInfo *)0x0);
                __this_00 = (__this->fields)._keepSignedIn;
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                if (Il2CppMethodInitialized_1843473fa == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
                  Il2CppMethodInitialized_1843473fa = '\x01';
                }
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                if (__this_00 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)__this_00,
                             TypeInfo_ApplicationManagers_AccountManager->static_fields->
                             _KeepSignedIn_k__BackingField,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  UI_AccountPanel__BuildContent(__this,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_1843473bc == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
                    Il2CppMethodInitialized_1843473bc = '\x01';
                  }
                  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                  UI_ElementStyle___ctor(pUVar4,0x1b,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                  pUVar5 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar2 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar5,pUVar4,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                                      ,0,4,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar2,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    (__this->fields)._collapsedUserLabel = pUVar6;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._collapsedUserLabel,pUVar6);
                    if (Il2CppMethodInitialized_1843473bd == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_ToggleCollapsed);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_Component_GetComponent_Text);
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
                      il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
                      il2cpp_codegen_initialize_runtime_metadata(&"Text");
                      Il2CppMethodInitialized_1843473bd = '\x01';
                    }
                    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                    UI_ElementStyle___ctor(pUVar4,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    title = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                    __this_05 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,
                               (Il2CppObject *)__this,(intptr_t)MethodInfo_UI_AccountPanel_ToggleCollapsed,
                               (MethodInfo *)0x0);
                    pUVar2 = UI_ElementFactory__CreateDefaultButton
                                       (pUVar5,pUVar4,title,430.0,22.0,__this_05,(MethodInfo *)0x0);
                    UI_AccountPanel__ApplySubtleButtonStyle(pUVar2,(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                          pUVar6 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar5,
                                              (MethodInfo_6651A0 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_Text);
                          (__this->fields)._collapseButtonLabel = pUVar6;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._collapseButtonLabel,pUVar6);
                          pUVar2 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          UI_ElementFactory__SetAnchor
                                    (pUVar2,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar7,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_AccountPanel_HandleLoggedIn,(MethodInfo *)0x0);
                          ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar7,(MethodInfo *)0x0);
                          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar7,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_AccountPanel_HandleLoggedOut,(MethodInfo *)0x0);
                          ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar7,(MethodInfo *)0x0);
                          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar7,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_AccountPanel_HandleAuthMethodsChanged,
                                     (MethodInfo *)0x0);
                          ApplicationManagers_AccountManager__add_OnAuthMethodsChanged
                                    (pSVar7,(MethodInfo *)0x0);
                          ApplicationManagers_AccountManager__RefreshAuthMethods
                                    ((System_Action_bool__string__o *)0x0,(MethodInfo *)0x0);
                          UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
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
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$OnDestroy
// il2cpp: void UI_AccountPanel__OnDestroy (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274960

void UI_AccountPanel__OnDestroy(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843473b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleAuthMethodsChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleLoggedIn);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_HandleLoggedOut);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843473b5 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AccountPanel_HandleLoggedIn,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AccountPanel_HandleLoggedOut,(MethodInfo *)0x0);
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AccountPanel_HandleAuthMethodsChanged,(MethodInfo *)0x0);
  ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged(pSVar1,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$BuildContent
// il2cpp: void UI_AccountPanel__BuildContent (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822707f0

void UI_AccountPanel__BuildContent(UI_AccountPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *x;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_1843473b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnOAuthCancelClick);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel Sign In");
    Il2CppMethodInitialized_1843473b6 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateVerticalGroup(pUVar2,6.0,1,(MethodInfo *)0x0);
  (__this->fields)._content = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content,pUVar3);
  pUVar3 = (__this->fields)._content;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = (__this->fields)._content;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_182270c19;
      x = UnityEngine_GameObject__AddComponent_object_
                    (pUVar3,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
      ;
    }
    if (x != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
                (x,430.0,(x->klass->vtable)._36_set_preferredWidth.method);
      (*(x->klass->vtable)._40_set_flexibleWidth.methodPtr)
                (x,0.0,(x->klass->vtable)._40_set_flexibleWidth.method);
      pUVar3 = (__this->fields)._content;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        UI_AccountPanel__BuildTabs(__this,pUVar2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._content;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          pUVar3 = UI_AccountPanel__BuildSignUpForm(__this,pUVar2,(MethodInfo *)0x0);
          (__this->fields)._signupContent = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._signupContent,pUVar3);
          pUVar3 = (__this->fields)._content;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            pUVar3 = UI_AccountPanel__BuildLoginForm(__this,pUVar2,(MethodInfo *)0x0);
            (__this->fields)._loginContent = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._loginContent,pUVar3);
            pUVar3 = (__this->fields)._content;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              pUVar3 = UI_AccountPanel__BuildForgotPasswordForm(__this,pUVar2,(MethodInfo *)0x0);
              (__this->fields)._forgotPasswordContent = pUVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._forgotPasswordContent,pUVar3);
              pUVar3 = (__this->fields)._content;
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                pUVar3 = UI_AccountPanel__BuildLoggedInView(__this,pUVar2,(MethodInfo *)0x0);
                (__this->fields)._loggedInContent = pUVar3;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._loggedInContent,pUVar3);
                pUVar3 = (__this->fields)._content;
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                  UI_ElementStyle___ctor(pUVar4,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                  pUVar3 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar2,pUVar4,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                                      ,0,4,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar3,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    (__this->fields)._statusLabel = pUVar5;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel,pUVar5);
                    pUVar5 = (__this->fields)._statusLabel;
                    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                      pUVar3 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                        pUVar3 = (__this->fields)._content;
                        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                          UI_ElementStyle___ctor
                                    (pUVar4,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                          __this_00 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_AccountPanel_OnOAuthCancelClick,(MethodInfo *)0x0
                                    );
                          pUVar3 = UI_ElementFactory__CreateDefaultButton
                                             (pUVar2,pUVar4,"Cancel Sign In",430.0,22.0,__this_00,
                                              (MethodInfo *)0x0);
                          (__this->fields)._oauthCancelButton = pUVar3;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._oauthCancelButton,pUVar3);
                          UI_AccountPanel__ApplySubtleButtonStyle
                                    ((__this->fields)._oauthCancelButton,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields)._oauthCancelButton;
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
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
      }
    }
  }
label_182270c19:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildTabs
// il2cpp: void UI_AccountPanel__BuildTabs (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182273390

void UI_AccountPanel__BuildTabs(UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843473b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildTabs_b__62_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildTabs_b__62_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Login");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign Up");
    Il2CppMethodInitialized_1843473b7 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateHorizontalGroup(parent,12.0,4,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x21,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AccountPanel_BuildTabs_b__62_0,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateTextButton
                       (pUVar2,__this_00,"Sign Up",135.0,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._signupTabButton = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._signupTabButton,pUVar4);
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar2,__this_00,"|",0,4,(MethodInfo *)0x0);
    (__this->fields)._tabSeparator = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tabSeparator,pUVar4);
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AccountPanel_BuildTabs_b__62_1,(MethodInfo *)0x0);
    pUVar1 = UI_ElementFactory__CreateTextButton
                       (pUVar2,__this_00,"Login",105.0,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._loginTabButton = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._loginTabButton,pUVar1);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildSignUpForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildSignUpForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182272c00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182273219: jmp 0x18227321d
// asm:   0x1822732ca: jmp 0x1822732ce

UnityEngine_GameObject_o *
UI_AccountPanel__BuildSignUpForm(UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Settings_BoolSetting_o *setting;
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *pUVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *inputSettingGO;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_UI_InputField_array *fields;
  UI_InputSettingElement_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_UI_Button_o *submit;
  UnityEngine_UI_InputField_o *pUVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_1843473b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnRegisterClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildSignUpForm_b__63_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Password:");
    il2cpp_codegen_initialize_runtime_metadata(&"Email:");
    il2cpp_codegen_initialize_runtime_metadata(&"Account name:");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay signed in");
    il2cpp_codegen_initialize_runtime_metadata(&"Register");
    Il2CppMethodInitialized_1843473b8 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x16,180.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((pUVar2 != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar9 = (pUVar2->fields).Spacing;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,0,(MethodInfo *)0x0);
    (__this->fields)._signupEmailSection = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._signupEmailSection,pUVar4);
    pUVar4 = (__this->fields)._signupEmailSection;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      fVar9 = 300.0 - fVar9;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      __this_02 = UI_ElementFactory__CreateInputSetting
                            (pUVar3,pUVar2,(Settings_BaseSetting_o *)(__this->fields)._signupDisplayName,
                             "Account name:","",fVar9,42.0,false,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
      pUVar4 = (__this->fields)._signupEmailSection;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        __this_03 = UI_ElementFactory__CreateInputSetting
                              (pUVar3,pUVar2,(Settings_BaseSetting_o *)(__this->fields)._signupEmail,
                               "Email:","",fVar9,42.0,false,
                               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                               ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                               (MethodInfo *)0x0);
        pUVar4 = (__this->fields)._signupEmailSection;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          inputSettingGO =
               UI_ElementFactory__CreateInputSetting
                         (pUVar3,pUVar2,(Settings_BaseSetting_o *)(__this->fields)._signupPassword,
                          "Password:","",fVar9,42.0,false,
                          (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                          (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                          (MethodInfo *)0x0);
          UI_AccountPanel__ConfigurePasswordInput(inputSettingGO,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._signupEmailSection;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
            setting = (__this->fields)._keepSignedIn;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_AccountPanel_BuildSignUpForm_b__63_0,(MethodInfo *)0x0);
            UI_ElementFactory__CreateToggleSetting
                      (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,"Stay signed in",
                       "",30.0,30.0,pUVar5,(MethodInfo *)0x0);
            pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor(pUVar2,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._signupEmailSection;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_AccountPanel_OnRegisterClick,(MethodInfo *)0x0);
              pUVar4 = UI_ElementFactory__CreateDefaultButton
                                 (pUVar3,pUVar2,"Register",430.0,40.0,pUVar5,(MethodInfo *)0x0);
              UI_AccountPanel__ApplySubtleButtonStyle(pUVar4,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              UI_AccountPanel__BuildOAuthRow
                        (__this,pUVar3,&(__this->fields)._signupOAuthDivider,&(__this->fields)._signupOAuthRow
                         ,&(__this->fields)._signupDiscordButton,&(__this->fields)._signupGoogleButton,
                         (MethodInfo *)0x0);
              fields = (UnityEngine_UI_InputField_array *)
                       SZArrayNew(TypeInfo_UnityEngine_UI_InputField_array,3);
              if (Il2CppMethodInitialized_1843473bf == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_1843473bf = '\x01';
              }
              if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_02,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar1 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar1) {
                  if (pUVar6 == (UI_InputSettingElement_o *)0x0) goto label_182273350;
                  pUVar8 = (pUVar6->fields)._inputField;
                }
                else {
                  pUVar8 = (UnityEngine_UI_InputField_o *)0x0;
                }
                if (fields != (UnityEngine_UI_InputField_array *)0x0) {
                  if ((pUVar8 != (UnityEngine_UI_InputField_o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pUVar8,(((fields->obj).klass)->_1).element_class),
                     pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                  }
                  if ((int)fields->max_length == 0) {
label_182273386:
                    ThrowIndexOutOfRangeException();
                  }
                  fields->m_Items[0] = pUVar8;
                  Il2CppCodeGenWriteBarrier(fields->m_Items,pUVar8);
                  if (Il2CppMethodInitialized_1843473bf == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                    Il2CppMethodInitialized_1843473bf = '\x01';
                  }
                  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_03,
                                        (MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar1 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar1) {
                      if (pUVar6 == (UI_InputSettingElement_o *)0x0) goto label_182273350;
                      pUVar8 = (pUVar6->fields)._inputField;
                      if ((pUVar8 != (UnityEngine_UI_InputField_o *)0x0) &&
                         (pIVar7 = il2cpp_vm_Object_IsInst
                                             ((Il2CppObject *)pUVar8,(((fields->obj).klass)->_1).element_class
                                             ), pIVar7 == (Il2CppObject *)0x0)) {
                        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                      }
                    }
                    else {
                      pUVar8 = (UnityEngine_UI_InputField_o *)0x0;
                    }
                    if ((uint)fields->max_length < 2) goto label_182273386;
                    fields->m_Items[1] = pUVar8;
                    Il2CppCodeGenWriteBarrier(fields->m_Items + 1,pUVar8);
                    if (Il2CppMethodInitialized_1843473bf == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                      Il2CppMethodInitialized_1843473bf = '\x01';
                    }
                    if (inputSettingGO != (UnityEngine_GameObject_o *)0x0) {
                      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (inputSettingGO,
                                          (MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar1 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar1) {
                        if (pUVar6 == (UI_InputSettingElement_o *)0x0) goto label_182273350;
                        pUVar8 = (pUVar6->fields)._inputField;
                        if ((pUVar8 != (UnityEngine_UI_InputField_o *)0x0) &&
                           (pIVar7 = il2cpp_vm_Object_IsInst
                                               ((Il2CppObject *)pUVar8,
                                                (((fields->obj).klass)->_1).element_class),
                           pIVar7 == (Il2CppObject *)0x0)) {
                          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                        }
                      }
                      else {
                        pUVar8 = (UnityEngine_UI_InputField_o *)0x0;
                      }
                      if ((uint)fields->max_length < 3) goto label_182273386;
                      fields->m_Items[2] = pUVar8;
                      Il2CppCodeGenWriteBarrier(fields->m_Items + 2,pUVar8);
                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                        submit = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar4,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        UI_AccountPanel__SetupTabNavigation
                                  (fields,(UnityEngine_UI_Selectable_o *)submit,(MethodInfo *)0x0);
                        return __this_00;
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
  }
label_182273350:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildLoginForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildLoginForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182271440
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182271c87: mov rdi, r13
// asm:   0x182271d5d: jmp 0x182271d62

UnityEngine_GameObject_o *
UI_AccountPanel__BuildLoginForm(UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Settings_BoolSetting_o *setting;
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *pUVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_ElementStyle_o *pUVar5;
  UnityEngine_UI_Text_o *value;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_GameObject_o *inputSettingGO;
  UnityEngine_UI_InputField_array *fields;
  UI_InputSettingElement_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_UI_Button_o *submit;
  UnityEngine_UI_InputField_o *pUVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_1843473b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnLoginClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Login");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/DiscordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Discord");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a sign-in provider to continue.");
    il2cpp_codegen_initialize_runtime_metadata(&"Forgot password?");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GoogleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Password:");
    il2cpp_codegen_initialize_runtime_metadata(&"Email:");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign In");
    il2cpp_codegen_initialize_runtime_metadata(&"Google");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay signed in");
    Il2CppMethodInitialized_1843473b9 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x16,180.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((pUVar2 != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar10 = (pUVar2->fields).Spacing;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,8.0,1,(MethodInfo *)0x0);
    (__this->fields)._loginOAuthOnlySection = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._loginOAuthOnlySection,pUVar4);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar5,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._loginOAuthOnlySection;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar3,pUVar5,"Sign In",1,4,(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(pUVar5,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._loginOAuthOnlySection;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        pUVar4 = UI_ElementFactory__CreateDefaultLabel
                           (pUVar3,pUVar5,"Choose a sign-in provider to continue.",0,4,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__GetComponent_object_
                            (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
          (__this->fields)._loginOAuthOnlyMessage = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._loginOAuthOnlyMessage,value);
          pUVar4 = (__this->fields)._loginOAuthOnlySection;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
            pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,1,(MethodInfo *)0x0);
            (__this->fields)._loginOAuthOnlyButtons = pUVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._loginOAuthOnlyButtons,pUVar4);
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor(pUVar5,0x12,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._loginOAuthOnlyButtons;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_0,(MethodInfo *)0x0);
              pUVar4 = UI_ElementFactory__CreateDefaultButton
                                 (pUVar3,pUVar5,"Discord",430.0,40.0,pUVar6,(MethodInfo *)0x0);
              (__this->fields)._loginOAuthOnlyDiscordButton = pUVar4;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._loginOAuthOnlyDiscordButton,pUVar4);
              UI_AccountPanel__ApplySubtleButtonStyle
                        ((__this->fields)._loginOAuthOnlyDiscordButton,(MethodInfo *)0x0);
              UI_AccountPanel__AddOAuthButtonIcon
                        ((__this->fields)._loginOAuthOnlyDiscordButton,"Icons/Navigation/DiscordIcon",(MethodInfo *)0x0
                        );
              UI_AccountPanel__ConfigureOAuthOnlyButtonText
                        ((__this->fields)._loginOAuthOnlyDiscordButton,(MethodInfo *)0x0);
              pUVar4 = (__this->fields)._loginOAuthOnlyButtons;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_1,(MethodInfo *)0x0);
                pUVar4 = UI_ElementFactory__CreateDefaultButton
                                   (pUVar3,pUVar5,"Google",430.0,40.0,pUVar6,(MethodInfo *)0x0);
                (__this->fields)._loginOAuthOnlyGoogleButton = pUVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._loginOAuthOnlyGoogleButton,pUVar4);
                UI_AccountPanel__ApplySubtleButtonStyle
                          ((__this->fields)._loginOAuthOnlyGoogleButton,(MethodInfo *)0x0);
                UI_AccountPanel__AddOAuthButtonIcon
                          ((__this->fields)._loginOAuthOnlyGoogleButton,"Icons/Navigation/GoogleIcon",
                           (MethodInfo *)0x0);
                UI_AccountPanel__ConfigureOAuthOnlyButtonText
                          ((__this->fields)._loginOAuthOnlyGoogleButton,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,0,(MethodInfo *)0x0);
                (__this->fields)._loginEmailSection = pUVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._loginEmailSection,pUVar4);
                pUVar4 = (__this->fields)._loginEmailSection;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  fVar10 = 300.0 - fVar10;
                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                  __this_02 = UI_ElementFactory__CreateInputSetting
                                        (pUVar3,pUVar2,(Settings_BaseSetting_o *)(__this->fields)._loginEmail,
                                         "Email:","",fVar10,42.0,false,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._loginEmailSection;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    inputSettingGO =
                         UI_ElementFactory__CreateInputSetting
                                   (pUVar3,pUVar2,(Settings_BaseSetting_o *)(__this->fields)._loginPassword,
                                    "Password:","",fVar10,42.0,false,
                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                    (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0
                                    ,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    UI_AccountPanel__ConfigurePasswordInput(inputSettingGO,(MethodInfo *)0x0);
                    pUVar4 = (__this->fields)._loginEmailSection;
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                      setting = (__this->fields)._keepSignedIn;
                      pUVar6 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,
                                 (Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_2,(MethodInfo *)0x0
                                );
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,"Stay signed in",
                                 "",30.0,30.0,pUVar6,(MethodInfo *)0x0);
                      pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                      pUVar9 = (UnityEngine_UI_InputField_o *)0x0;
                      UI_ElementStyle___ctor(pUVar2,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                      pUVar4 = (__this->fields)._loginEmailSection;
                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                        pUVar6 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,
                                   (Il2CppObject *)__this,(intptr_t)MethodInfo_UI_AccountPanel_OnLoginClick,
                                   (MethodInfo *)0x0);
                        pUVar4 = UI_ElementFactory__CreateDefaultButton
                                           (pUVar3,pUVar2,"Login",430.0,40.0,pUVar6,
                                            (MethodInfo *)0x0);
                        UI_AccountPanel__ApplySubtleButtonStyle(pUVar4,(MethodInfo *)0x0);
                        fields = (UnityEngine_UI_InputField_array *)
                                 SZArrayNew(TypeInfo_UnityEngine_UI_InputField_array,2);
                        if (Il2CppMethodInitialized_1843473bf == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                          Il2CppMethodInitialized_1843473bf = '\x01';
                        }
                        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                             (__this_02,
                                              (MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                             );
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar1 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar1) {
                            if (pUVar7 == (UI_InputSettingElement_o *)0x0) goto label_182271ede;
                            pUVar9 = (pUVar7->fields)._inputField;
                          }
                          if (fields != (UnityEngine_UI_InputField_array *)0x0) {
                            if ((pUVar9 != (UnityEngine_UI_InputField_o *)0x0) &&
                               (pIVar8 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)pUVar9,
                                                    (((fields->obj).klass)->_1).element_class),
                               pIVar8 == (Il2CppObject *)0x0)) {
                              pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                            }
                            if ((int)fields->max_length == 0) {
label_182271f04:
                              ThrowIndexOutOfRangeException();
                            }
                            fields->m_Items[0] = pUVar9;
                            Il2CppCodeGenWriteBarrier(fields->m_Items,pUVar9);
                            if (Il2CppMethodInitialized_1843473bf == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                              Il2CppMethodInitialized_1843473bf = '\x01';
                            }
                            if (inputSettingGO != (UnityEngine_GameObject_o *)0x0) {
                              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                                 (inputSettingGO,
                                                  (MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                 );
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar1 = UnityEngine_Object__op_Inequality
                                                ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                                                 (MethodInfo *)0x0);
                              if (bVar1) {
                                if (pUVar7 == (UI_InputSettingElement_o *)0x0) goto label_182271ede;
                                pUVar9 = (pUVar7->fields)._inputField;
                                if ((pUVar9 != (UnityEngine_UI_InputField_o *)0x0) &&
                                   (pIVar8 = il2cpp_vm_Object_IsInst
                                                       ((Il2CppObject *)pUVar9,
                                                        (((fields->obj).klass)->_1).element_class),
                                   pIVar8 == (Il2CppObject *)0x0)) {
                                  pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                                }
                              }
                              else {
                                pUVar9 = (UnityEngine_UI_InputField_o *)0x0;
                              }
                              if ((uint)fields->max_length < 2) goto label_182271f04;
                              fields->m_Items[1] = pUVar9;
                              Il2CppCodeGenWriteBarrier(fields->m_Items + 1,pUVar9);
                              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                submit = UnityEngine_GameObject__GetComponent_object_
                                                   (pUVar4,(MethodInfo_6F5650 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                UI_AccountPanel__SetupTabNavigation
                                          (fields,(UnityEngine_UI_Selectable_o *)submit,(MethodInfo *)0x0);
                                pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                                UI_AccountPanel__BuildOAuthRow
                                          (__this,pUVar3,&(__this->fields)._loginOAuthDivider,
                                           &(__this->fields)._loginOAuthRow,
                                           &(__this->fields)._loginDiscordButton,
                                           &(__this->fields)._loginGoogleButton,(MethodInfo *)0x0);
                                pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                                UI_ElementStyle___ctor
                                          (pUVar2,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                                pUVar4 = (__this->fields)._loginEmailSection;
                                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                                  pUVar6 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,
                                             (Il2CppObject *)__this,
                                             (intptr_t)MethodInfo_UI_AccountPanel_BuildLoginForm_b__64_3,
                                             (MethodInfo *)0x0);
                                  pUVar4 = UI_ElementFactory__CreateTextButton
                                                     (pUVar3,pUVar2,"Forgot password?",430.0,pUVar6,
                                                      (MethodInfo *)0x0);
                                  UI_AccountPanel__ApplySubtleButtonStyle(pUVar4,(MethodInfo *)0x0);
                                  return __this_00;
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
            }
          }
        }
      }
    }
  }
label_182271ede:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildForgotPasswordForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildForgotPasswordForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182270c20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182270f83: mov rbx, r12

UnityEngine_GameObject_o *
UI_AccountPanel__BuildForgotPasswordForm
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *buttonGO;
  UnityEngine_GameObject_o *buttonGO_00;
  UnityEngine_UI_InputField_array *fields;
  UI_InputSettingElement_o *x;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Button_o *submit;
  UnityEngine_UI_InputField_o *obj;
  
  if (Il2CppMethodInitialized_1843473ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnForgotPasswordClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildForgotPasswordForm_b__65_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Send Reset Email");
    il2cpp_codegen_initialize_runtime_metadata(&"Email:");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Back to Login");
    Il2CppMethodInitialized_1843473ba = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  obj = (UnityEngine_UI_InputField_o *)0x0;
  UI_ElementStyle___ctor(pUVar3,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((pUVar3 != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (pUVar3->fields).Spacing;
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = UI_ElementFactory__CreateInputSetting
                          (pUVar4,pUVar3,(Settings_BaseSetting_o *)(__this->fields)._forgotPasswordEmail,
                           "Email:","",300.0 - fVar1,42.0,false,
                           (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar3,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AccountPanel_OnForgotPasswordClick,(MethodInfo *)0x0);
    buttonGO = UI_ElementFactory__CreateDefaultButton
                         (pUVar4,pUVar3,"Send Reset Email",430.0,40.0,pUVar5,(MethodInfo *)0x0);
    UI_AccountPanel__ApplySubtleButtonStyle(buttonGO,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AccountPanel_BuildForgotPasswordForm_b__65_0,(MethodInfo *)0x0);
    buttonGO_00 = UI_ElementFactory__CreateDefaultButton
                            (pUVar4,pUVar3,"Back to Login",430.0,40.0,pUVar5,(MethodInfo *)0x0);
    UI_AccountPanel__ApplySubtleButtonStyle(buttonGO_00,(MethodInfo *)0x0);
    fields = (UnityEngine_UI_InputField_array *)SZArrayNew(TypeInfo_UnityEngine_UI_InputField_array,1);
    if (Il2CppMethodInitialized_1843473bf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843473bf = '\x01';
    }
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      x = UnityEngine_GameObject__GetComponent_object_
                    (__this_01,
                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (UI_InputSettingElement_o *)0x0) goto label_182271005;
        obj = (x->fields)._inputField;
      }
      if (fields != (UnityEngine_UI_InputField_array *)0x0) {
        if ((obj != (UnityEngine_UI_InputField_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((fields->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)fields->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        fields->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(fields->m_Items,obj);
        if (buttonGO != (UnityEngine_GameObject_o *)0x0) {
          submit = UnityEngine_GameObject__GetComponent_object_
                             (buttonGO,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          UI_AccountPanel__SetupTabNavigation(fields,(UnityEngine_UI_Selectable_o *)submit,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
  }
label_182271005:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildLoggedInView
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildLoggedInView (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182271030

UnityEngine_GameObject_o *
UI_AccountPanel__BuildLoggedInView
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843473bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnLogoutClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnOnlineToggleClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnRefreshLoginClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnWebLoginClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Account Details (Web)");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh Login");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Logout");
    il2cpp_codegen_initialize_runtime_metadata(&"Go Offline");
    Il2CppMethodInitialized_1843473bb = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,9.0,1,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar1,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar2,pUVar1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,
                        (MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields)._loggedInUserLabel = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._loggedInUserLabel,pUVar4);
      pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(pUVar1,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_AccountPanel_OnRefreshLoginClick,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateDefaultButton
                         (pUVar2,pUVar1,"Refresh Login",430.0,40.0,pUVar5,(MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_AccountPanel_OnWebLoginClick,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateDefaultButton
                         (pUVar2,pUVar1,"Account Details (Web)",430.0,40.0,pUVar5,(MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_AccountPanel_OnOnlineToggleClick,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateDefaultButton
                         (pUVar2,pUVar1,"Go Offline",430.0,40.0,pUVar5,(MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._onlineToggleButtonLabel = pUVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._onlineToggleButtonLabel,pUVar4);
            pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_AccountPanel_OnLogoutClick,(MethodInfo *)0x0);
            pUVar3 = UI_ElementFactory__CreateDefaultButton
                               (pUVar2,pUVar1,"Logout",430.0,40.0,pUVar5,(MethodInfo *)0x0);
            UI_AccountPanel__ApplySubtleButtonStyle(pUVar3,(MethodInfo *)0x0);
            return __this_00;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildCollapsedUserLabel
// il2cpp: void UI_AccountPanel__BuildCollapsedUserLabel (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822706f0

void UI_AccountPanel__BuildCollapsedUserLabel(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *value;
  
  if (Il2CppMethodInitialized_1843473bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_1843473bc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1b,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        (parent,__this_00,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,
                         (MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._collapsedUserLabel = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._collapsedUserLabel,value);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildCollapseBar
// il2cpp: void UI_AccountPanel__BuildCollapseBar (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182270560

void UI_AccountPanel__BuildCollapseBar(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *title;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *buttonGO;
  UnityEngine_UI_Text_o *value;
  
  if (Il2CppMethodInitialized_1843473bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_ToggleCollapsed);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_1843473bd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  title = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AccountPanel_ToggleCollapsed,(MethodInfo *)0x0);
  buttonGO = UI_ElementFactory__CreateDefaultButton
                       (pUVar1,__this_00,title,430.0,22.0,__this_01,(MethodInfo *)0x0);
  UI_AccountPanel__ApplySubtleButtonStyle(buttonGO,(MethodInfo *)0x0);
  if (buttonGO != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        value = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        (__this->fields)._collapseButtonLabel = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._collapseButtonLabel,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$BuildOAuthRow
// il2cpp: void UI_AccountPanel__BuildOAuthRow (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, UnityEngine_GameObject_o** divider, UnityEngine_GameObject_o** row, UnityEngine_GameObject_o** discordBtn, UnityEngine_GameObject_o** googleBtn, const MethodInfo* method);
// 0x182271f10

void UI_AccountPanel__BuildOAuthRow
               (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,UnityEngine_GameObject_o **divider,
               UnityEngine_GameObject_o **row,UnityEngine_GameObject_o **discordBtn,
               UnityEngine_GameObject_o **googleBtn,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  undefined8 uVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Il2CppType *pIVar9;
  bool bVar10;
  int32_t iVar11;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar12;
  System_Type_array *pSVar13;
  System_Type_o *pSVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_UI_LayoutElement_o *pUVar18;
  UnityEngine_Texture2D_o *pUVar19;
  UnityEngine_UI_Image_o *pUVar20;
  UnityEngine_Sprite_o *pUVar21;
  UnityEngine_UI_Button_o *pUVar22;
  UnityEngine_Events_UnityAction_o *pUVar23;
  UnityEngine_Texture2D_o *pUVar24;
  UnityEngine_Rect_Fields local_f8;
  UnityEngine_UI_ColorBlock_o local_e8 [2];
  
  if (Il2CppMethodInitialized_1843473be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildOAuthRow_b__69_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_BuildOAuthRow_b__69_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"GoogleOAuthButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/DiscordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/GoogleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"DiscordOAuthButton");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x94 or sign in with \xe2\x80\x94");
    Il2CppMethodInitialized_1843473be = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__CreateDefaultLabel
                      (parent,__this_00,"\xe2\x80\x94 or sign in with \xe2\x80\x94",0,4,(MethodInfo *)0x0);
  *divider = pUVar12;
  Il2CppCodeGenWriteBarrier(divider,pUVar12);
  pUVar12 = UI_ElementFactory__CreateHorizontalGroup(parent,20.0,4,(MethodInfo *)0x0);
  *row = pUVar12;
  Il2CppCodeGenWriteBarrier(row,pUVar12);
  pSVar13 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
  pIVar9 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar14 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar9,(MethodInfo *)0x0);
  if (pSVar13 == (System_Type_array *)0x0) goto label_182272b39;
  if (pSVar14 != (System_Type_o *)0x0) {
    pIVar15 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class);
    if (pIVar15 == (Il2CppObject *)0x0) {
      pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar13->max_length != 0) {
    pSVar13->m_Items[0] = pSVar14;
    Il2CppCodeGenWriteBarrier(pSVar13->m_Items,pSVar14);
    pSVar14 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar14 != (System_Type_o *)0x0) {
      pIVar15 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class);
      if (pIVar15 == (Il2CppObject *)0x0) {
        pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar13->max_length) {
      pSVar13->m_Items[1] = pSVar14;
      Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1,pSVar14);
      pSVar14 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar14 != (System_Type_o *)0x0) {
        pIVar15 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class);
        if (pIVar15 == (Il2CppObject *)0x0) {
          pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pSVar13->max_length) {
        pSVar13->m_Items[2] = pSVar14;
        Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 2,pSVar14);
        pSVar14 = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
        if (pSVar14 != (System_Type_o *)0x0) {
          pIVar15 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class);
          if (pIVar15 == (Il2CppObject *)0x0) {
            pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)pSVar13->max_length) {
          pSVar13->m_Items[3] = pSVar14;
          Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 3,pSVar14);
          pSVar14 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                               (MethodInfo *)0x0);
          if (pSVar14 != (System_Type_o *)0x0) {
            pIVar15 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class);
            if (pIVar15 == (Il2CppObject *)0x0) {
              pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
            }
          }
          if (4 < (uint)pSVar13->max_length) {
            pSVar13->m_Items[4] = pSVar14;
            Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 4,pSVar14);
            pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(pUVar12,"DiscordOAuthButton",pSVar13,(MethodInfo *)0x0);
            *discordBtn = pUVar12;
            Il2CppCodeGenWriteBarrier(discordBtn,pUVar12);
            if (*discordBtn != (UnityEngine_GameObject_o *)0x0) {
              pUVar16 = UnityEngine_GameObject__get_transform(*discordBtn,(MethodInfo *)0x0);
              if (*row != (UnityEngine_GameObject_o *)0x0) {
                pUVar17 = UnityEngine_GameObject__get_transform(*row,(MethodInfo *)0x0);
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_2f5a7e0(pUVar16,pUVar17,false,(MethodInfo *)0x0);
                  if (*discordBtn != (UnityEngine_GameObject_o *)0x0) {
                    pUVar18 = UnityEngine_GameObject__GetComponent_object_
                                        (*discordBtn,
                                         (MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                    if (pUVar18 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar18->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar18,38.0,(pUVar18->klass->vtable)._36_set_preferredWidth.method);
                      (*(pUVar18->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (pUVar18,38.0,(pUVar18->klass->vtable)._38_set_preferredHeight.method);
                      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                      }
                      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
                      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                      }
                      pUVar19 = (UnityEngine_Texture2D_o *)
                                ApplicationManagers_ResourceManager__LoadAsset
                                          (pSVar3,"Icons/Navigation/DiscordIcon",true,(MethodInfo *)0x0);
                      pUVar24 = (UnityEngine_Texture2D_o *)0x0;
                      if (pUVar19 != (UnityEngine_Texture2D_o *)0x0) {
                        if (pUVar19->klass == TypeInfo_UnityEngine_Texture2D) {
                          pUVar24 = pUVar19;
                        }
                        if (pUVar24 == (UnityEngine_Texture2D_o *)0x0) {
                          il2cpp_codegen_raise_invalid_cast_exception(pUVar19);
                        }
                      }
                      if (*discordBtn != (UnityEngine_GameObject_o *)0x0) {
                        pUVar20 = UnityEngine_GameObject__GetComponent_object_
                                            (*discordBtn,
                                             (MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar10 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if (bVar10) {
                          if (pUVar24 == (UnityEngine_Texture2D_o *)0x0) goto label_182272b39;
                          iVar11 = (*(pUVar24->klass->vtable)._5_get_width.methodPtr)
                                             (pUVar24,(pUVar24->klass->vtable)._5_get_width.method);
                          local_f8.m_XMin = 0.0;
                          local_f8.m_YMin = 0.0;
                          local_f8.m_Width = (float)iVar11;
                          iVar11 = (*(pUVar24->klass->vtable)._7_get_height.methodPtr)
                                             (pUVar24,(pUVar24->klass->vtable)._7_get_height.method);
                          local_f8.m_Height = (float)iVar11;
                          pUVar21 = UnityEngine_Sprite__Create_2ed4530
                                              (pUVar24,(UnityEngine_Rect_o *)&local_f8,
                                               (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                          if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_182272b39;
                          UnityEngine_UI_Image__set_sprite(pUVar20,pUVar21,(MethodInfo *)0x0);
                        }
                        else if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_182272b39;
                        UnityEngine_UI_Image__set_preserveAspect(pUVar20,true,(MethodInfo *)0x0);
                        local_f8.m_XMin = 1.0;
                        local_f8.m_YMin = 1.0;
                        local_f8.m_Width = 1.0;
                        local_f8.m_Height = 1.0;
                        (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar20,(UnityEngine_Color_o *)&local_f8,
                                   (pUVar20->klass->vtable)._23_set_color.method);
                        if (*discordBtn != (UnityEngine_GameObject_o *)0x0) {
                          pUVar22 = UnityEngine_GameObject__GetComponent_object_
                                              (*discordBtn,
                                               (MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                          if (pUVar22 != (UnityEngine_UI_Button_o *)0x0) {
                            UnityEngine_UI_Selectable__set_targetGraphic
                                      ((UnityEngine_UI_Selectable_o *)pUVar22,
                                       (UnityEngine_UI_Graphic_o *)pUVar20,(MethodInfo *)0x0);
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_NormalColor.fields.r =
                                 (pUVar1->fields).m_NormalColor.fields.r;
                            local_e8[0].fields.m_NormalColor.fields.g =
                                 (pUVar1->fields).m_NormalColor.fields.g;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_NormalColor.fields.b =
                                 (pUVar1->fields).m_NormalColor.fields.b;
                            local_e8[0].fields.m_NormalColor.fields.a =
                                 (pUVar1->fields).m_NormalColor.fields.a;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_HighlightedColor.fields.r =
                                 (pUVar1->fields).m_HighlightedColor.fields.r;
                            local_e8[0].fields.m_HighlightedColor.fields.g =
                                 (pUVar1->fields).m_HighlightedColor.fields.g;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_HighlightedColor.fields.b =
                                 (pUVar1->fields).m_HighlightedColor.fields.b;
                            local_e8[0].fields.m_HighlightedColor.fields.a =
                                 (pUVar1->fields).m_HighlightedColor.fields.a;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_SelectedColor.fields.r =
                                 (pUVar1->fields).m_SelectedColor.fields.r;
                            local_e8[0].fields.m_SelectedColor.fields.g =
                                 (pUVar1->fields).m_SelectedColor.fields.g;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_SelectedColor.fields.b =
                                 (pUVar1->fields).m_SelectedColor.fields.b;
                            local_e8[0].fields.m_SelectedColor.fields.a =
                                 (pUVar1->fields).m_SelectedColor.fields.a;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_DisabledColor.fields.r =
                                 (pUVar1->fields).m_DisabledColor.fields.r;
                            local_e8[0].fields.m_DisabledColor.fields.g =
                                 (pUVar1->fields).m_DisabledColor.fields.g;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_DisabledColor.fields.b =
                                 (pUVar1->fields).m_DisabledColor.fields.b;
                            local_e8[0].fields.m_DisabledColor.fields.a =
                                 (pUVar1->fields).m_DisabledColor.fields.a;
                            local_e8[0].fields.m_ColorMultiplier =
                                 (pUVar22->fields).m_Colors.fields.m_ColorMultiplier;
                            local_e8[0].fields.m_FadeDuration =
                                 (pUVar22->fields).m_Colors.fields.m_FadeDuration;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_PressedColor.fields.r =
                                 (pUVar1->fields).m_PressedColor.fields.r;
                            local_e8[0].fields.m_PressedColor.fields.g =
                                 (pUVar1->fields).m_PressedColor.fields.g;
                            pUVar1 = &(pUVar22->fields).m_Colors;
                            local_e8[0].fields.m_PressedColor.fields.b =
                                 (pUVar1->fields).m_PressedColor.fields.b;
                            local_e8[0].fields.m_PressedColor.fields.a =
                                 (pUVar1->fields).m_PressedColor.fields.a;
                            if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
                            }
                            local_e8[0].fields.m_NormalColor.fields.r = 1.0;
                            local_e8[0].fields.m_NormalColor.fields.g = 1.0;
                            local_e8[0].fields.m_NormalColor.fields.b = 1.0;
                            local_e8[0].fields.m_NormalColor.fields.a = 1.0;
                            local_e8[0].fields.m_HighlightedColor.fields.r = 0.85;
                            local_e8[0].fields.m_HighlightedColor.fields.g = 0.85;
                            local_e8[0].fields.m_HighlightedColor.fields.b = 1.0;
                            local_e8[0].fields.m_HighlightedColor.fields.a = 1.0;
                            local_e8[0].fields.m_PressedColor.fields._0_8_ = 0x3f3333333f333333;
                            local_e8[0].fields.m_PressedColor.fields.b = 0.9;
                            local_e8[0].fields.m_PressedColor.fields.a = 1.0;
                            UnityEngine_UI_Selectable__set_colors
                                      ((UnityEngine_UI_Selectable_o *)pUVar22,local_e8,(MethodInfo *)0x0);
                            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar22->fields).m_OnClick;
                            pUVar23 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar23,
                                       (Il2CppObject *)__this,
                                       (intptr_t)MethodInfo_UI_AccountPanel_BuildOAuthRow_b__69_0,
                                       (MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar23,(MethodInfo *)0x0);
                              pSVar13 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
                              pIVar9 = TypeRef_UnityEngine_RectTransform;
                              if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                              }
                              pSVar14 = System_Type__GetTypeFromHandle
                                                  ((System_RuntimeTypeHandle_o)pIVar9,(MethodInfo *)0x0);
                              if (pSVar13 != (System_Type_array *)0x0) {
                                if (pSVar14 != (System_Type_o *)0x0) {
                                  pIVar15 = il2cpp_vm_Object_IsInst
                                                      ((Il2CppObject *)pSVar14,
                                                       (((pSVar13->obj).klass)->_1).element_class);
                                  if (pIVar15 == (Il2CppObject *)0x0) {
                                    pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
                                  }
                                }
                                if ((int)pSVar13->max_length != 0) {
                                  pSVar13->m_Items[0] = pSVar14;
                                  Il2CppCodeGenWriteBarrier(pSVar13->m_Items,pSVar14);
                                  pSVar14 = System_Type__GetTypeFromHandle
                                                      ((System_RuntimeTypeHandle_o)
                                                       TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
                                  if (pSVar14 != (System_Type_o *)0x0) {
                                    pIVar15 = il2cpp_vm_Object_IsInst
                                                        ((Il2CppObject *)pSVar14,
                                                         (((pSVar13->obj).klass)->_1).element_class);
                                    if (pIVar15 == (Il2CppObject *)0x0) {
                                      pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
                                    }
                                  }
                                  if (1 < (uint)pSVar13->max_length) {
                                    pSVar13->m_Items[1] = pSVar14;
                                    Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1,pSVar14);
                                    pSVar14 = System_Type__GetTypeFromHandle
                                                        ((System_RuntimeTypeHandle_o)
                                                         TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
                                    if (pSVar14 != (System_Type_o *)0x0) {
                                      pIVar15 = il2cpp_vm_Object_IsInst
                                                          ((Il2CppObject *)pSVar14,
                                                           (((pSVar13->obj).klass)->_1).element_class);
                                      if (pIVar15 == (Il2CppObject *)0x0) {
                                        pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
                                      }
                                    }
                                    if (2 < (uint)pSVar13->max_length) {
                                      pSVar13->m_Items[2] = pSVar14;
                                      Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 2,pSVar14);
                                      pSVar14 = System_Type__GetTypeFromHandle
                                                          ((System_RuntimeTypeHandle_o)
                                                           TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
                                      if (pSVar14 != (System_Type_o *)0x0) {
                                        pIVar15 = il2cpp_vm_Object_IsInst
                                                            ((Il2CppObject *)pSVar14,
                                                             (((pSVar13->obj).klass)->_1).element_class);
                                        if (pIVar15 == (Il2CppObject *)0x0) {
                                          pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
                                        }
                                      }
                                      if (3 < (uint)pSVar13->max_length) {
                                        pSVar13->m_Items[3] = pSVar14;
                                        Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 3,pSVar14);
                                        pSVar14 = System_Type__GetTypeFromHandle
                                                            ((System_RuntimeTypeHandle_o)
                                                             TypeRef_UnityEngine_UI_LayoutElement,
                                                             (MethodInfo *)0x0);
                                        if (pSVar14 != (System_Type_o *)0x0) {
                                          pIVar15 = il2cpp_vm_Object_IsInst
                                                              ((Il2CppObject *)pSVar14,
                                                               (((pSVar13->obj).klass)->_1).element_class);
                                          if (pIVar15 == (Il2CppObject *)0x0) {
                                            pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                                            il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
                                          }
                                        }
                                        if (4 < (uint)pSVar13->max_length) {
                                          pSVar13->m_Items[4] = pSVar14;
                                          Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 4,pSVar14);
                                          pUVar12 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)TypeInfo_UnityEngine_GameObject)
                                          ;
                                          UnityEngine_GameObject___ctor_2f1abe0
                                                    (pUVar12,"GoogleOAuthButton",pSVar13,(MethodInfo *)0x0);
                                          *googleBtn = pUVar12;
                                          Il2CppCodeGenWriteBarrier(googleBtn,pUVar12);
                                          if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar16 = UnityEngine_GameObject__get_transform
                                                                (*googleBtn,(MethodInfo *)0x0);
                                            if (*row != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar17 = UnityEngine_GameObject__get_transform
                                                                  (*row,(MethodInfo *)0x0);
                                              if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                                                UnityEngine_Transform__SetParent_2f5a7e0
                                                          (pUVar16,pUVar17,false,(MethodInfo *)0x0);
                                                if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
                                                  pUVar18 = UnityEngine_GameObject__GetComponent_object_
                                                                      (*googleBtn,
                                                                       (MethodInfo_6F5650 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                       );
                                                  if (pUVar18 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                                    (*(pUVar18->klass->vtable)._36_set_preferredWidth.
                                                      methodPtr)(pUVar18,38.0,
                                                                 (pUVar18->klass->vtable).
                                                                 _36_set_preferredWidth.method);
                                                    (*(pUVar18->klass->vtable)._38_set_preferredHeight.
                                                      methodPtr)(pUVar18,38.0,
                                                                 (pUVar18->klass->vtable).
                                                                 _38_set_preferredHeight.method);
                                                    if ((TypeInfo_Utility_ResourcePaths->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_Utility_ResourcePaths
                                                                );
                                                    }
                                                    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI
                                                    ;
                                                    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)
                                                                 TypeInfo_ApplicationManagers_ResourceManager)
                                                      ;
                                                    }
                                                    pUVar19 = (UnityEngine_Texture2D_o *)
                                                              ApplicationManagers_ResourceManager__LoadAsset
                                                                        (pSVar3,"Icons/Navigation/GoogleIcon",true,
                                                                         (MethodInfo *)0x0);
                                                    pUVar24 = (UnityEngine_Texture2D_o *)0x0;
                                                    if (pUVar19 != (UnityEngine_Texture2D_o *)0x0) {
                                                      if (pUVar19->klass == TypeInfo_UnityEngine_Texture2D) {
                                                        pUVar24 = pUVar19;
                                                      }
                                                      if (pUVar24 == (UnityEngine_Texture2D_o *)0x0) {
                                                        il2cpp_codegen_raise_invalid_cast_exception(pUVar19);
                                                      }
                                                    }
                                                    if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar20 = UnityEngine_GameObject__GetComponent_object_
                                                                          (*googleBtn,
                                                                           (MethodInfo_6F5650 *)
                                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                                      if ((TypeInfo_UnityEngine_Object->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object)
                                                        ;
                                                      }
                                                      bVar10 = UnityEngine_Object__op_Inequality
                                                                         ((UnityEngine_Object_o *)pUVar24,
                                                                          (UnityEngine_Object_o *)0x0,
                                                                          (MethodInfo *)0x0);
                                                      if (bVar10) {
                                                        if (pUVar24 == (UnityEngine_Texture2D_o *)0x0)
                                                        goto label_182272b39;
                                                        iVar11 = (*(pUVar24->klass->vtable)._5_get_width.
                                                                   methodPtr)(pUVar24,(pUVar24->klass->vtable)
                                                                                      ._5_get_width.method);
                                                        local_f8.m_XMin = 0.0;
                                                        local_f8.m_YMin = 0.0;
                                                        local_f8.m_Width = (float)iVar11;
                                                        iVar11 = (*(pUVar24->klass->vtable)._7_get_height.
                                                                   methodPtr)(pUVar24,(pUVar24->klass->vtable)
                                                                                      ._7_get_height.method);
                                                        local_f8.m_Height = (float)iVar11;
                                                        pUVar21 = UnityEngine_Sprite__Create_2ed4530
                                                                            (pUVar24,(UnityEngine_Rect_o *)
                                                                                     &local_f8,
                                                                             (UnityEngine_Vector2_o)
                                                                             0x3f0000003f000000,
                                                                             (MethodInfo *)0x0);
                                                        if (pUVar20 == (UnityEngine_UI_Image_o *)0x0)
                                                        goto label_182272b39;
                                                        UnityEngine_UI_Image__set_sprite
                                                                  (pUVar20,pUVar21,(MethodInfo *)0x0);
                                                      }
                                                      else if (pUVar20 == (UnityEngine_UI_Image_o *)0x0)
                                                      goto label_182272b39;
                                                      UnityEngine_UI_Image__set_preserveAspect
                                                                (pUVar20,true,(MethodInfo *)0x0);
                                                      local_f8.m_XMin = 1.0;
                                                      local_f8.m_YMin = 1.0;
                                                      local_f8.m_Width = 1.0;
                                                      local_f8.m_Height = 1.0;
                                                      (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                                                (pUVar20,(UnityEngine_Color_o *)&local_f8,
                                                                 (pUVar20->klass->vtable)._23_set_color.method
                                                                );
                                                      if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar22 = UnityEngine_GameObject__GetComponent_object_
                                                                            (*googleBtn,
                                                                             (MethodInfo_6F5650 *)
                                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       if (pUVar22 != (UnityEngine_UI_Button_o *)0x0) {
                                                         UnityEngine_UI_Selectable__set_targetGraphic
                                                                   ((UnityEngine_UI_Selectable_o *)pUVar22,
                                                                    (UnityEngine_UI_Graphic_o *)pUVar20,
                                                                    (MethodInfo *)0x0);
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_NormalColor.fields.r =
                                                              (pUVar1->fields).m_NormalColor.fields.r;
                                                         local_e8[0].fields.m_NormalColor.fields.g =
                                                              (pUVar1->fields).m_NormalColor.fields.g;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_NormalColor.fields.b =
                                                              (pUVar1->fields).m_NormalColor.fields.b;
                                                         local_e8[0].fields.m_NormalColor.fields.a =
                                                              (pUVar1->fields).m_NormalColor.fields.a;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_HighlightedColor.fields.r =
                                                              (pUVar1->fields).m_HighlightedColor.fields.r;
                                                         local_e8[0].fields.m_HighlightedColor.fields.g =
                                                              (pUVar1->fields).m_HighlightedColor.fields.g;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_HighlightedColor.fields.b =
                                                              (pUVar1->fields).m_HighlightedColor.fields.b;
                                                         local_e8[0].fields.m_HighlightedColor.fields.a =
                                                              (pUVar1->fields).m_HighlightedColor.fields.a;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         uVar5._0_4_ = (pUVar1->fields).m_SelectedColor.fields
                                                                       .r;
                                                         uVar5._4_4_ = (pUVar1->fields).m_SelectedColor.fields
                                                                       .g;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         uVar6._0_4_ = (pUVar1->fields).m_SelectedColor.fields
                                                                       .b;
                                                         uVar6._4_4_ = (pUVar1->fields).m_SelectedColor.fields
                                                                       .a;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         uVar7._0_4_ = (pUVar1->fields).m_DisabledColor.fields
                                                                       .r;
                                                         uVar7._4_4_ = (pUVar1->fields).m_DisabledColor.fields
                                                                       .g;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         uVar8._0_4_ = (pUVar1->fields).m_DisabledColor.fields
                                                                       .b;
                                                         uVar8._4_4_ = (pUVar1->fields).m_DisabledColor.fields
                                                                       .a;
                                                         uVar2._0_4_ = (pUVar22->fields).m_Colors.fields.
                                                                       m_ColorMultiplier;
                                                         uVar2._4_4_ = (pUVar22->fields).m_Colors.fields.
                                                                       m_FadeDuration;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_PressedColor.fields.r =
                                                              (pUVar1->fields).m_PressedColor.fields.r;
                                                         local_e8[0].fields.m_PressedColor.fields.g =
                                                              (pUVar1->fields).m_PressedColor.fields.g;
                                                         pUVar1 = &(pUVar22->fields).m_Colors;
                                                         local_e8[0].fields.m_PressedColor.fields.b =
                                                              (pUVar1->fields).m_PressedColor.fields.b;
                                                         local_e8[0].fields.m_PressedColor.fields.a =
                                                              (pUVar1->fields).m_PressedColor.fields.a;
                                                         if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_UI_ColorBlock);
                                                         }
                                                         local_e8[0].fields.m_NormalColor.fields.r = 1.0;
                                                         local_e8[0].fields.m_NormalColor.fields.g = 1.0;
                                                         local_e8[0].fields.m_NormalColor.fields.b = 1.0;
                                                         local_e8[0].fields.m_NormalColor.fields.a = 1.0;
                                                         local_e8[0].fields.m_HighlightedColor.fields.r = 0.85
                                                         ;
                                                         local_e8[0].fields.m_HighlightedColor.fields.g = 1.0;
                                                         local_e8[0].fields.m_HighlightedColor.fields.b = 0.85
                                                         ;
                                                         local_e8[0].fields.m_HighlightedColor.fields.a = 1.0;
                                                         local_e8[0].fields.m_PressedColor.fields._0_8_ =
                                                              0x3f6666663f333333;
                                                         local_e8[0].fields.m_PressedColor.fields.b = 0.7;
                                                         local_e8[0].fields.m_PressedColor.fields.a = 1.0;
                                                         local_e8[0].fields.m_SelectedColor.fields._0_8_ =
                                                              uVar5;
                                                         local_e8[0].fields.m_SelectedColor.fields._8_8_ =
                                                              uVar6;
                                                         local_e8[0].fields.m_DisabledColor.fields._0_8_ =
                                                              uVar7;
                                                         local_e8[0].fields.m_DisabledColor.fields._8_8_ =
                                                              uVar8;
                                                         local_e8[0].fields._80_8_ = uVar2;
                                                         UnityEngine_UI_Selectable__set_colors
                                                                   ((UnityEngine_UI_Selectable_o *)pUVar22,
                                                                    local_e8,(MethodInfo *)0x0);
                                                         pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (pUVar22->fields).m_OnClick;
                                                         pUVar23 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar23
                                                       ,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_AccountPanel_BuildOAuthRow_b__69_1,
                                                       (MethodInfo *)0x0);
                                                       if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (pUVar4,pUVar23,(MethodInfo *)0x0);
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
                                          goto label_182272b39;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto label_182272bf1;
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
label_182272b39:
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
label_182272bf1:
  ThrowIndexOutOfRangeException();
}


// UI.AccountPanel$$GetInput
// il2cpp: UnityEngine_UI_InputField_o* UI_AccountPanel__GetInput (UnityEngine_GameObject_o* inputSettingGO, const MethodInfo* method);
// 0x182274760

UnityEngine_UI_InputField_o *
UI_AccountPanel__GetInput(UnityEngine_GameObject_o *inputSettingGO,MethodInfo *method)

{
  bool bVar1;
  UI_InputSettingElement_o *x;
  
  if (Il2CppMethodInitialized_1843473bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473bf = '\x01';
  }
  if (inputSettingGO != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (inputSettingGO,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (UnityEngine_UI_InputField_o *)0x0;
    }
    if (x != (UI_InputSettingElement_o *)0x0) {
      return (x->fields)._inputField;
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$ApplySubtleButtonStyle
// il2cpp: void UI_AccountPanel__ApplySubtleButtonStyle (UnityEngine_GameObject_o* buttonGO, const MethodInfo* method);
// 0x182270250
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182270529: movaps xmm6, xmmword ptr [rsp + 0x140]
// asm:   0x182270531: mov rdi, qword ptr [rsp + 0x160]
// asm:   0x182270539: movaps xmm7, xmmword ptr [rsp + 0x130]

void UI_AccountPanel__ApplySubtleButtonStyle(UnityEngine_GameObject_o *buttonGO,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  UnityEngine_UI_Image_o *x;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar12;
  UnityEngine_UI_Button_o *__this;
  UnityEngine_Color_o local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  UnityEngine_UI_ColorBlock_o local_c8 [2];
  
  if (Il2CppMethodInitialized_1843473c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473c0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar11) {
    if (buttonGO == (UnityEngine_GameObject_o *)0x0) {
label_182270552:
      ThrowNullReferenceException();
    }
    x = UnityEngine_GameObject__GetComponent_object_
                  (buttonGO,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      if (x == (UnityEngine_UI_Image_o *)0x0) goto label_182270552;
      pUVar12 = (*(x->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_138,x,
                           (x->klass->vtable)._22_get_color.method);
      fVar2 = *(float *)&(pUVar12->fields).m_Ptr;
      pUVar12 = (*(x->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_138,x,
                           (x->klass->vtable)._22_get_color.method);
      fVar3 = *(float *)((longlong)&(pUVar12->fields).m_Ptr + 4);
      pUVar12 = (*(x->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_138,x,
                           (x->klass->vtable)._22_get_color.method);
      local_138.fields.b = (float)(pUVar12->fields).m_Count;
      local_138.fields.a = 0.35;
      local_138.fields.r = fVar2;
      local_138.fields.g = fVar3;
      (*(x->klass->vtable)._23_set_color.methodPtr)(x,&local_138,(x->klass->vtable)._23_set_color.method);
    }
    __this = UnityEngine_GameObject__GetComponent_object_
                       (buttonGO,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      if (__this == (UnityEngine_UI_Button_o *)0x0) goto label_182270552;
      pUVar1 = &(__this->fields).m_Colors;
      local_128._0_4_ = (pUVar1->fields).m_NormalColor.fields.r;
      local_128._4_4_ = (pUVar1->fields).m_NormalColor.fields.g;
      pUVar1 = &(__this->fields).m_Colors;
      uStack_120._0_4_ = (pUVar1->fields).m_NormalColor.fields.b;
      uStack_120._4_4_ = (pUVar1->fields).m_NormalColor.fields.a;
      pUVar1 = &(__this->fields).m_Colors;
      local_118._0_4_ = (pUVar1->fields).m_HighlightedColor.fields.r;
      local_118._4_4_ = (pUVar1->fields).m_HighlightedColor.fields.g;
      pUVar1 = &(__this->fields).m_Colors;
      uStack_110._0_4_ = (pUVar1->fields).m_HighlightedColor.fields.b;
      uStack_110._4_4_ = (pUVar1->fields).m_HighlightedColor.fields.a;
      pUVar1 = &(__this->fields).m_Colors;
      uVar5._0_4_ = (pUVar1->fields).m_PressedColor.fields.r;
      uVar5._4_4_ = (pUVar1->fields).m_PressedColor.fields.g;
      pUVar1 = &(__this->fields).m_Colors;
      uVar6._0_4_ = (pUVar1->fields).m_PressedColor.fields.b;
      uVar6._4_4_ = (pUVar1->fields).m_PressedColor.fields.a;
      pUVar1 = &(__this->fields).m_Colors;
      uVar7._0_4_ = (pUVar1->fields).m_SelectedColor.fields.r;
      uVar7._4_4_ = (pUVar1->fields).m_SelectedColor.fields.g;
      pUVar1 = &(__this->fields).m_Colors;
      uVar8._0_4_ = (pUVar1->fields).m_SelectedColor.fields.b;
      uVar8._4_4_ = (pUVar1->fields).m_SelectedColor.fields.a;
      pUVar1 = &(__this->fields).m_Colors;
      uVar9._0_4_ = (pUVar1->fields).m_DisabledColor.fields.r;
      uVar9._4_4_ = (pUVar1->fields).m_DisabledColor.fields.g;
      pUVar1 = &(__this->fields).m_Colors;
      uVar10._0_4_ = (pUVar1->fields).m_DisabledColor.fields.b;
      uVar10._4_4_ = (pUVar1->fields).m_DisabledColor.fields.a;
      uVar4._0_4_ = (__this->fields).m_Colors.fields.m_ColorMultiplier;
      uVar4._4_4_ = (__this->fields).m_Colors.fields.m_FadeDuration;
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      uStack_120 = CONCAT44(0x3eb33333,(float)uStack_120);
      uStack_110 = CONCAT44(0x3f333333,(float)uStack_110);
      local_c8[0].fields.m_NormalColor.fields.r = (float)local_128;
      local_c8[0].fields.m_NormalColor.fields.g = local_128._4_4_;
      local_c8[0].fields.m_NormalColor.fields.b = (float)uStack_120;
      local_c8[0].fields.m_NormalColor.fields.a = 0.35;
      local_c8[0].fields.m_HighlightedColor.fields.r = (float)local_118;
      local_c8[0].fields.m_HighlightedColor.fields.g = local_118._4_4_;
      local_c8[0].fields.m_HighlightedColor.fields.b = (float)uStack_110;
      local_c8[0].fields.m_HighlightedColor.fields.a = 0.7;
      local_c8[0].fields.m_PressedColor.fields._0_8_ = uVar5;
      local_c8[0].fields.m_PressedColor.fields._8_8_ = uVar6;
      local_c8[0].fields.m_SelectedColor.fields._0_8_ = uVar7;
      local_c8[0].fields.m_SelectedColor.fields._8_8_ = uVar8;
      local_c8[0].fields.m_DisabledColor.fields._0_8_ = uVar9;
      local_c8[0].fields.m_DisabledColor.fields._8_8_ = uVar10;
      local_c8[0].fields._80_8_ = uVar4;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,local_c8,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.AccountPanel$$AddOAuthButtonIcon
// il2cpp: void UI_AccountPanel__AddOAuthButtonIcon (UnityEngine_GameObject_o* buttonGO, System_String_o* resourcePath, const MethodInfo* method);
// 0x18226ee80

void UI_AccountPanel__AddOAuthButtonIcon
               (UnityEngine_GameObject_o *buttonGO,System_String_o *resourcePath,MethodInfo *method)

{
  System_String_o *path;
  Il2CppType *pIVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Type_array *pSVar7;
  System_Type_o *pSVar8;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this;
  UnityEngine_UI_ContentSizeFitter_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar13;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_Sprite_o *value;
  UnityEngine_Texture2D_o *texture;
  MethodInfo *pMVar14;
  float in_XMM1_Da;
  UnityEngine_Rect_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_1843473c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OAuthContent");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"OAuthIcon");
    Il2CppMethodInitialized_1843473c1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) || (bVar2 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0), bVar2)) {
    return;
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar4 = (UnityEngine_Texture2D_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,resourcePath,true,(MethodInfo *)0x0);
  texture = (UnityEngine_Texture2D_o *)0x0;
  if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
    if (pUVar4->klass == TypeInfo_UnityEngine_Texture2D) {
      texture = pUVar4;
    }
    if (texture == (UnityEngine_Texture2D_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((buttonGO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar5 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar6 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18226f7e1;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"OAuthContent",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar7 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
      pIVar1 = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      if (pSVar7 == (System_Type_array *)0x0) goto label_18226f7e1;
      if ((pSVar8 != (System_Type_o *)0x0) &&
         (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class),
         pIVar9 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if ((int)pSVar7->max_length == 0) goto label_18226f7db;
      pSVar7->m_Items[0] = pSVar8;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pSVar8);
      pSVar8 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                          (MethodInfo *)0x0);
      if ((pSVar8 != (System_Type_o *)0x0) &&
         (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class),
         pIVar9 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if ((uint)pSVar7->max_length < 2) goto label_18226f7db;
      pSVar7->m_Items[1] = pSVar8;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 1,pSVar8);
      pSVar8 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                          (MethodInfo *)0x0);
      if ((pSVar8 != (System_Type_o *)0x0) &&
         (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class),
         pIVar9 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if ((uint)pSVar7->max_length < 3) goto label_18226f7db;
      pSVar7->m_Items[2] = pSVar8;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 2,pSVar8);
      pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar10,"OAuthContent",pSVar7,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_18226f7e1;
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
      parent = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18226f7e1;
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,parent,false,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar10,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) goto label_18226f7e1;
      UnityEngine_RectTransform__set_anchorMin
                (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax
                (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      pMVar14 = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_pivot
                (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      UVar12 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                         ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar14);
      pMVar14 = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar11,UVar12,(MethodInfo *)0x0);
      UVar12 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                         ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar14);
      UnityEngine_RectTransform__set_sizeDelta(pUVar11,UVar12,(MethodInfo *)0x0);
      __this = UnityEngine_GameObject__GetComponent_object_
                         (pUVar10,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
      if (__this == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_18226f7e1;
      in_XMM1_Da = 8.0;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this,8.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this,4,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this,false,(MethodInfo *)0x0);
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar10,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
      if (__this_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18226f7e1;
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_00,2,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_18226f7e1;
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar5,pUVar6,false,(MethodInfo *)0x0);
    }
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar6,"OAuthIcon",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
      pSVar7 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
      pIVar1 = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      if (pSVar7 != (System_Type_array *)0x0) {
        if ((pSVar8 != (System_Type_o *)0x0) &&
           (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class)
           , pIVar9 == (Il2CppObject *)0x0)) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
        if ((int)pSVar7->max_length != 0) {
          pSVar7->m_Items[0] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pSVar8);
          pSVar8 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0
                             );
          if ((pSVar8 != (System_Type_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if (1 < (uint)pSVar7->max_length) {
            pSVar7->m_Items[1] = pSVar8;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 1,pSVar8);
            pSVar8 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
            if ((pSVar8 != (System_Type_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar8,(((pSVar7->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if (2 < (uint)pSVar7->max_length) {
              pSVar7->m_Items[2] = pSVar8;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 2,pSVar8);
              pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(pUVar10,"OAuthIcon",pSVar7,(MethodInfo *)0x0);
              if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar5 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar5,pUVar6,false,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar5,0,(MethodInfo *)0x0);
                  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar10,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    pMVar14 = (MethodInfo *)0x0;
                    UnityEngine_RectTransform__set_pivot
                              (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    UVar12 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                                       ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar14);
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,UVar12,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_sizeDelta
                              (pUVar11,(UnityEngine_Vector2_o)0x41f0000041f00000,(MethodInfo *)0x0);
                    pUVar13 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar10,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
                    ;
                    if (pUVar13 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar13->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar13,30.0,(pUVar13->klass->vtable)._36_set_preferredWidth.method);
                      (*(pUVar13->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (pUVar13,30.0,(pUVar13->klass->vtable)._38_set_preferredHeight.method);
                      __this_01 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar10,(MethodInfo_6F5650 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (texture != (UnityEngine_Texture2D_o *)0x0) {
                        iVar3 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                          (texture,(texture->klass->vtable)._5_get_width.method);
                        local_48[0].m_XMin = 0.0;
                        local_48[0].m_YMin = 0.0;
                        local_48[0].m_Width = (float)iVar3;
                        iVar3 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                                          (texture,(texture->klass->vtable)._7_get_height.method);
                        local_48[0].m_Height = (float)iVar3;
                        value = UnityEngine_Sprite__Create_2ed4530
                                          (texture,(UnityEngine_Rect_o *)local_48,
                                           (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                          UnityEngine_UI_Image__set_sprite(__this_01,value,(MethodInfo *)0x0);
                          UnityEngine_UI_Image__set_preserveAspect(__this_01,true,(MethodInfo *)0x0);
                          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              goto label_18226f7e1;
            }
          }
        }
label_18226f7db:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_18226f7e1:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$ConfigureOAuthOnlyButtonText
// il2cpp: void UI_AccountPanel__ConfigureOAuthOnlyButtonText (UnityEngine_GameObject_o* buttonGO, const MethodInfo* method);
// 0x182273cf0

void UI_AccountPanel__ConfigureOAuthOnlyButtonText(UnityEngine_GameObject_o *buttonGO,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  float ScreenHeight;
  
  if (Il2CppMethodInitialized_1843473c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_1843473c2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((buttonGO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      if (__this != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(__this,3,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_horizontalOverflow(__this,1,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_verticalOverflow(__this,0,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_resizeTextForBestFit(__this,false,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_fontSize(__this,0x12,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_supportRichText(__this,false,(MethodInfo *)0x0);
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar2,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_182273ffc;
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          ScreenHeight = 40.0;
          method_00 = (MethodInfo *)0x0;
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_00,(UnityEngine_Vector2_o)0x4220000000000000,(MethodInfo *)0x0);
          value = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,ScreenHeight,method_00);
          UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
        }
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar2,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_182273ffc;
          x = UnityEngine_GameObject__AddComponent_object_
                        (__this_01,
                         (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
        }
        if (x != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(x->klass->vtable)._32_set_minWidth.methodPtr)(x,-1.0,(x->klass->vtable)._32_set_minWidth.method);
          (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (x,-1.0,(x->klass->vtable)._36_set_preferredWidth.method);
          (*(x->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (x,0.0,(x->klass->vtable)._40_set_flexibleWidth.method);
          return;
        }
      }
    }
  }
label_182273ffc:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$ConfigurePasswordInput
// il2cpp: void UI_AccountPanel__ConfigurePasswordInput (UnityEngine_GameObject_o* inputSettingGO, const MethodInfo* method);
// 0x182274010

void UI_AccountPanel__ConfigurePasswordInput(UnityEngine_GameObject_o *inputSettingGO,MethodInfo *method)

{
  bool bVar1;
  UI_InputSettingElement_o *x;
  UnityEngine_UI_InputField_o *__this;
  
  if (Il2CppMethodInitialized_1843473c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473c3 = '\x01';
  }
  if (Il2CppMethodInitialized_1843473bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473bf = '\x01';
  }
  if (inputSettingGO != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (inputSettingGO,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UI_InputSettingElement_o *)0x0) goto label_182274115;
      __this = (x->fields)._inputField;
    }
    else {
      __this = (UnityEngine_UI_InputField_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (__this != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_contentType(__this,7,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__set_inputType(__this,2,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__ForceLabelUpdate(__this,(MethodInfo *)0x0);
      UI_AccountPanel__AddPasswordToggle(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_182274115:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$AddPasswordToggle
// il2cpp: void UI_AccountPanel__AddPasswordToggle (UnityEngine_UI_InputField_o* field, const MethodInfo* method);
// 0x18226f7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18226fdbc: movaps xmm6, xmm7

void UI_AccountPanel__AddPasswordToggle(UnityEngine_UI_InputField_o *field,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_UI_InputField_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *__this;
  Il2CppType *handle;
  bool bVar3;
  int32_t iVar4;
  UI_AccountPanel___c__DisplayClass75_0_o *object;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Texture2D_o *texture_00;
  UnityEngine_Sprite_o *pUVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Rect_o *pUVar10;
  UnityEngine_UI_Image_o *pUVar11;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_Vector2_o value;
  float fVar13;
  float fStackX_c;
  UnityEngine_Rect_Fields local_f8;
  UnityEngine_UI_Navigation_o local_e8;
  UnityEngine_UI_ColorBlock_o local_b8;
  
  if (Il2CppMethodInitialized_1843473c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AccountPanel_c__DisplayClass75_0_AddPasswordToggle_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AccountPanel_c__DisplayClass75_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"PasswordToggle");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Game/NoSpectateIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Game/SpectateIcon");
    Il2CppMethodInitialized_1843473c4 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_AccountPanel_c__DisplayClass75_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_AccountPanel___c__DisplayClass75_0_o *)0x0) {
    (object->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,field);
    texture = UnityEngine_Resources__Load_object_
                        ("UI/Icons/Game/NoSpectateIcon",
                         (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Texture2D);
    texture_00 = UnityEngine_Resources__Load_object_
                           ("UI/Icons/Game/SpectateIcon",
                            (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Texture2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__op_Inequality
              ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (texture == (UnityEngine_Texture2D_o *)0x0) goto label_1822701f8;
      iVar4 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                        (texture,(texture->klass->vtable)._5_get_width.method);
      local_f8.m_XMin = 0.0;
      local_f8.m_YMin = 0.0;
      local_f8.m_Width = (float)iVar4;
      iVar4 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                        (texture,(texture->klass->vtable)._7_get_height.method);
      local_f8.m_Height = (float)iVar4;
      pUVar5 = UnityEngine_Sprite__Create_2ed4530
                         (texture,(UnityEngine_Rect_o *)&local_f8,(UnityEngine_Vector2_o)0x3f0000003f000000,
                          (MethodInfo *)0x0);
    }
    else {
      pUVar5 = (UnityEngine_Sprite_o *)0x0;
    }
    (object->fields).spriteHidden = pUVar5;
    Il2CppCodeGenWriteBarrier(&(object->fields).spriteHidden,pUVar5);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)texture_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (texture_00 == (UnityEngine_Texture2D_o *)0x0) goto label_1822701f8;
      iVar4 = (*(texture_00->klass->vtable)._5_get_width.methodPtr)
                        (texture_00,(texture_00->klass->vtable)._5_get_width.method);
      local_f8.m_XMin = 0.0;
      local_f8.m_YMin = 0.0;
      local_f8.m_Width = (float)iVar4;
      iVar4 = (*(texture_00->klass->vtable)._7_get_height.methodPtr)
                        (texture_00,(texture_00->klass->vtable)._7_get_height.method);
      local_f8.m_Height = (float)iVar4;
      pUVar5 = UnityEngine_Sprite__Create_2ed4530
                         (texture_00,(UnityEngine_Rect_o *)&local_f8,(UnityEngine_Vector2_o)0x3f0000003f000000
                          ,(MethodInfo *)0x0);
    }
    else {
      pUVar5 = (UnityEngine_Sprite_o *)0x0;
    }
    (object->fields).spriteVisible = pUVar5;
    Il2CppCodeGenWriteBarrier(&(object->fields).spriteVisible,pUVar5);
    x = (UnityEngine_Object_o *)(object->fields).spriteHidden;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar5 = (&(object->fields).spriteVisible)[bVar3];
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar6 != (System_Type_o *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar6;
        Il2CppCodeGenWriteBarrier(components->m_Items,pSVar6);
        pSVar6 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar6 != (System_Type_o *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar6;
          Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar6);
          pSVar6 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
          if ((pSVar6 != (System_Type_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar6;
            Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar6);
            pSVar6 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
            if ((pSVar6 != (System_Type_o *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar6;
              Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar6);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0
                        (__this_00,"PasswordToggle",components,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pUVar2 = (object->fields).field;
                if ((pUVar2 != (UnityEngine_UI_InputField_o *)0x0) &&
                   (parent = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                   pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,parent,false,(MethodInfo *)0x0);
                  pUVar2 = (object->fields).field;
                  if ((pUVar2 != (UnityEngine_UI_InputField_o *)0x0) &&
                     (pUVar9 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar2,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
                     pUVar9 != (UnityEngine_RectTransform_o *)0x0)) {
                    pUVar10 = UnityEngine_RectTransform__get_rect
                                        ((UnityEngine_Rect_o *)&local_f8,pUVar9,(MethodInfo *)0x0);
                    fVar13 = (pUVar10->fields).m_Height;
                    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                    }
                    if (40.0 <= fVar13) {
                      fVar13 = 40.0;
                    }
                    else if (fVar13 <= 0.0) {
                      fVar13 = 40.0;
                    }
                    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_00,
                                        (MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar9,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchorMax
                                (pUVar9,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_pivot
                                (pUVar9,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar9,(UnityEngine_Vector2_o)0xc0800000,(MethodInfo *)0x0);
                      UVar12.fields.y = fVar13;
                      UVar12.fields.x = fVar13;
                      UnityEngine_RectTransform__set_sizeDelta(pUVar9,UVar12,(MethodInfo *)0x0);
                      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                          (__this_00,
                                           (MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      (object->fields).img = pUVar11;
                      Il2CppCodeGenWriteBarrier(&(object->fields).img,pUVar11);
                      pUVar11 = (object->fields).img;
                      if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                        UnityEngine_UI_Image__set_sprite(pUVar11,pUVar5,(MethodInfo *)0x0);
                        pUVar11 = (object->fields).img;
                        if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                          UnityEngine_UI_Image__set_preserveAspect(pUVar11,true,(MethodInfo *)0x0);
                          pUVar11 = (object->fields).img;
                          if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                            local_f8.m_XMin = 1.0;
                            local_f8.m_YMin = 1.0;
                            local_f8.m_Width = 1.0;
                            local_f8.m_Height = 0.65;
                            (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar11,(UnityEngine_Color_o *)&local_f8,
                                       (pUVar11->klass->vtable)._23_set_color.method);
                            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                                  (__this_00,
                                                   (MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                            if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                              UnityEngine_UI_Selectable__set_targetGraphic
                                        ((UnityEngine_UI_Selectable_o *)__this_01,
                                         (UnityEngine_UI_Graphic_o *)(object->fields).img,(MethodInfo *)0x0);
                              UnityEngine_UI_Selectable__set_transition
                                        ((UnityEngine_UI_Selectable_o *)__this_01,1,(MethodInfo *)0x0);
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_NormalColor.fields.r = (pUVar1->fields).m_NormalColor.fields.r
                              ;
                              local_b8.fields.m_NormalColor.fields.g = (pUVar1->fields).m_NormalColor.fields.g
                              ;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_NormalColor.fields.b = (pUVar1->fields).m_NormalColor.fields.b
                              ;
                              local_b8.fields.m_NormalColor.fields.a = (pUVar1->fields).m_NormalColor.fields.a
                              ;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_HighlightedColor.fields.r =
                                   (pUVar1->fields).m_HighlightedColor.fields.r;
                              local_b8.fields.m_HighlightedColor.fields.g =
                                   (pUVar1->fields).m_HighlightedColor.fields.g;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_HighlightedColor.fields.b =
                                   (pUVar1->fields).m_HighlightedColor.fields.b;
                              local_b8.fields.m_HighlightedColor.fields.a =
                                   (pUVar1->fields).m_HighlightedColor.fields.a;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_DisabledColor.fields.r =
                                   (pUVar1->fields).m_DisabledColor.fields.r;
                              local_b8.fields.m_DisabledColor.fields.g =
                                   (pUVar1->fields).m_DisabledColor.fields.g;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_DisabledColor.fields.b =
                                   (pUVar1->fields).m_DisabledColor.fields.b;
                              local_b8.fields.m_DisabledColor.fields.a =
                                   (pUVar1->fields).m_DisabledColor.fields.a;
                              local_b8.fields.m_ColorMultiplier =
                                   (__this_01->fields).m_Colors.fields.m_ColorMultiplier;
                              local_b8.fields.m_FadeDuration =
                                   (__this_01->fields).m_Colors.fields.m_FadeDuration;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_PressedColor.fields.r =
                                   (pUVar1->fields).m_PressedColor.fields.r;
                              local_b8.fields.m_PressedColor.fields.g =
                                   (pUVar1->fields).m_PressedColor.fields.g;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_PressedColor.fields.b =
                                   (pUVar1->fields).m_PressedColor.fields.b;
                              local_b8.fields.m_PressedColor.fields.a =
                                   (pUVar1->fields).m_PressedColor.fields.a;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_SelectedColor.fields.r =
                                   (pUVar1->fields).m_SelectedColor.fields.r;
                              local_b8.fields.m_SelectedColor.fields.g =
                                   (pUVar1->fields).m_SelectedColor.fields.g;
                              pUVar1 = &(__this_01->fields).m_Colors;
                              local_b8.fields.m_SelectedColor.fields.b =
                                   (pUVar1->fields).m_SelectedColor.fields.b;
                              local_b8.fields.m_SelectedColor.fields.a =
                                   (pUVar1->fields).m_SelectedColor.fields.a;
                              if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
                              }
                              local_b8.fields.m_NormalColor.fields.r = 1.0;
                              local_b8.fields.m_NormalColor.fields.g = 1.0;
                              local_b8.fields.m_NormalColor.fields.b = 1.0;
                              local_b8.fields.m_NormalColor.fields.a = 0.65;
                              local_b8.fields.m_HighlightedColor.fields.r = 1.0;
                              local_b8.fields.m_HighlightedColor.fields.g = 1.0;
                              local_b8.fields.m_HighlightedColor.fields.b = 1.0;
                              local_b8.fields.m_HighlightedColor.fields.a = 1.0;
                              local_b8.fields.m_PressedColor.fields.r = 0.8;
                              local_b8.fields.m_PressedColor.fields.g = 0.8;
                              local_b8.fields.m_PressedColor.fields.b = 0.8;
                              local_b8.fields.m_PressedColor.fields.a = 1.0;
                              local_b8.fields.m_SelectedColor.fields.r = 1.0;
                              local_b8.fields.m_SelectedColor.fields.g = 1.0;
                              local_b8.fields.m_SelectedColor.fields.b = 1.0;
                              local_b8.fields.m_SelectedColor.fields.a = 1.0;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)__this_01,&local_b8,(MethodInfo *)0x0)
                              ;
                              local_e8.fields._4_8_ =
                                   *(undefined8 *)&(__this_01->fields).m_Navigation.fields.m_WrapAround;
                              local_e8.fields._12_8_ =
                                   *(undefined8 *)
                                    ((longlong)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 4);
                              local_e8.fields.m_SelectOnRight._4_4_ =
                                   *(undefined4 *)
                                    ((longlong)&(__this_01->fields).m_Navigation.fields.m_SelectOnRight + 4);
                              local_e8.fields._20_8_ =
                                   *(undefined8 *)
                                    ((longlong)&(__this_01->fields).m_Navigation.fields.m_SelectOnDown + 4);
                              local_e8.fields._28_8_ =
                                   *(undefined8 *)
                                    ((longlong)&(__this_01->fields).m_Navigation.fields.m_SelectOnLeft + 4);
                              local_e8.fields.m_Mode = 0;
                              UnityEngine_UI_Selectable__set_navigation
                                        ((UnityEngine_UI_Selectable_o *)__this_01,&local_e8,(MethodInfo *)0x0)
                              ;
                              pUVar2 = (object->fields).field;
                              if ((pUVar2 != (UnityEngine_UI_InputField_o *)0x0) &&
                                 (pUVar8 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                                 pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                                pUVar8 = UnityEngine_Transform__Find
                                                   (pUVar8,"Text",(MethodInfo *)0x0);
                                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                }
                                bVar3 = UnityEngine_Object__op_Inequality
                                                  ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                                   (MethodInfo *)0x0);
                                if (bVar3) {
                                  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1822701f8;
                                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar8,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                     );
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar3 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)pUVar9,
                                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  if (bVar3) {
                                    if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1822701f8;
                                    UVar12 = UnityEngine_RectTransform__get_offsetMax
                                                       (pUVar9,(MethodInfo *)0x0);
                                    fStackX_c = UVar12.fields.y;
                                    value.fields.x = -(fVar13 + 8.0);
                                    value.fields.y = fStackX_c;
                                    UnityEngine_RectTransform__set_offsetMax(pUVar9,value,(MethodInfo *)0x0);
                                  }
                                }
                                pUVar2 = (object->fields).field;
                                if ((pUVar2 != (UnityEngine_UI_InputField_o *)0x0) &&
                                   (pUVar8 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                                   pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                                  pUVar8 = UnityEngine_Transform__Find
                                                     (pUVar8,"Placeholder",(MethodInfo *)0x0);
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar3 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)pUVar8,
                                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  if (bVar3) {
                                    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1822701f8;
                                    pUVar9 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar8,
                                                        (MethodInfo_6651A0 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                    }
                                    bVar3 = UnityEngine_Object__op_Inequality
                                                      ((UnityEngine_Object_o *)pUVar9,
                                                       (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                    if (bVar3) {
                                      if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1822701f8;
                                      UVar12 = UnityEngine_RectTransform__get_offsetMax
                                                         (pUVar9,(MethodInfo *)0x0);
                                      fStackX_c = UVar12.fields.y;
                                      UnityEngine_RectTransform__set_offsetMax
                                                (pUVar9,(UnityEngine_Vector2_o)
                                                        (CONCAT44(fStackX_c,fVar13 + 8.0) ^ 0x80000000),
                                                 (MethodInfo *)0x0);
                                    }
                                  }
                                  (object->fields).visible = false;
                                  __this = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).m_OnClick;
                                  __this_02 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,
                                             (Il2CppObject *)object,
                                             (intptr_t)
                                             MethodInfo_UI_AccountPanel_c__DisplayClass75_0_AddPasswordToggle_b__0
                                             ,(MethodInfo *)0x0);
                                  if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (__this,__this_02,(MethodInfo *)0x0);
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
              }
              goto label_1822701f8;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1822701f8:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$SetupTabNavigation
// il2cpp: void UI_AccountPanel__SetupTabNavigation (UnityEngine_UI_InputField_array* fields, UnityEngine_UI_Selectable_o* submit, const MethodInfo* method);
// 0x182276320
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182276448: mov rdx, r12
// asm:   0x182276477: mov rdx, r15
// asm:   0x18227653f: mov r8, r15
// asm:   0x18227655c: mov r9, r12
// asm:   0x1822765ed: mov rdx, r12

void UI_AccountPanel__SetupTabNavigation
               (UnityEngine_UI_InputField_array *fields,UnityEngine_UI_Selectable_o *submit,MethodInfo *method
               )

{
  int iVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  bool bVar6;
  uint uVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_InputFieldKeyboardNav_o *__this;
  UnityEngine_UI_InputField_o *pUVar9;
  UnityEngine_UI_InputField_o *value;
  UnityEngine_UI_InputField_o *pUVar10;
  UnityEngine_UI_InputField_o *previous;
  UnityEngine_UI_Navigation_Fields local_98;
  UnityEngine_UI_Navigation_Fields local_70;
  UnityEngine_UI_Navigation_Fields local_48;
  
  if (Il2CppMethodInitialized_1843473c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_InputFieldKeyboardNav);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputFieldKeyboardNav);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473c5 = '\x01';
  }
  local_98.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
  local_70.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
  local_98.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
  local_98.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
  local_98.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
  local_70.m_Mode = 0;
  local_70.m_WrapAround = false;
  local_70._5_3_ = 0;
  local_70.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
  local_70.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
  local_70.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
  if (fields == (UnityEngine_UI_InputField_array *)0x0) {
label_182276652:
    ThrowNullReferenceException();
  }
  value = (UnityEngine_UI_InputField_o *)0x0;
  pUVar10 = value;
  while (uVar7 = (uint)pUVar10, (int)uVar7 < (int)fields->max_length) {
    if ((uint)fields->max_length <= uVar7) goto label_182276658;
    pUVar10 = fields->m_Items[(int)uVar7];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if (pUVar10 == (UnityEngine_UI_InputField_o *)0x0) goto label_182276652;
      uVar2 = (pUVar10->fields).m_Navigation.fields.m_WrapAround;
      uVar3 = *(undefined3 *)&(pUVar10->fields).m_Navigation.fields.field_0x5;
      local_98.m_SelectOnDown = (pUVar10->fields).m_Navigation.fields.m_SelectOnDown;
      local_98.m_SelectOnLeft = (pUVar10->fields).m_Navigation.fields.m_SelectOnLeft;
      local_98.m_SelectOnRight = (pUVar10->fields).m_Navigation.fields.m_SelectOnRight;
      local_98.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)value;
      if (0 < (int)uVar7) {
        local_98.m_SelectOnUp =
             (UnityEngine_UI_Selectable_o *)(pUVar10->fields).m_Navigation.fields.m_SelectOnUp;
        if ((uint)fields->max_length <= uVar7 - 1) goto label_182276658;
        local_98.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)fields->m_Items[(longlong)(int)uVar7 + -1];
      }
      Il2CppCodeGenWriteBarrier(&local_98.m_SelectOnUp,local_98.m_SelectOnUp);
      pUVar9 = (UnityEngine_UI_InputField_o *)submit;
      if ((int)uVar7 < (int)fields->max_length + -1) {
        if ((uint)fields->max_length <= uVar7 + 1) goto label_182276658;
        pUVar9 = fields->m_Items[(longlong)(int)uVar7 + 1];
      }
      local_98.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)pUVar9;
      Il2CppCodeGenWriteBarrier(&local_98.m_SelectOnDown,pUVar9);
      local_48.m_Mode = 4;
      local_48.m_WrapAround = (bool)uVar2;
      local_48._5_3_ = uVar3;
      local_48.m_SelectOnUp = local_98.m_SelectOnUp;
      local_48.m_SelectOnRight = local_98.m_SelectOnRight;
      local_48.m_SelectOnDown = local_98.m_SelectOnDown;
      local_48.m_SelectOnLeft = local_98.m_SelectOnLeft;
      UnityEngine_UI_Selectable__set_navigation
                ((UnityEngine_UI_Selectable_o *)pUVar10,(UnityEngine_UI_Navigation_o *)&local_48,
                 (MethodInfo *)0x0);
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182276652;
      __this = UnityEngine_GameObject__GetComponent_object_
                         (pUVar8,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_InputFieldKeyboardNav);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182276652;
        __this = UnityEngine_GameObject__AddComponent_object_
                           (pUVar8,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_InputFieldKeyboardNav);
      }
      pUVar9 = (UnityEngine_UI_InputField_o *)submit;
      if ((int)uVar7 < (int)fields->max_length + -1) {
        if ((uint)fields->max_length <= uVar7 + 1) goto label_182276658;
        pUVar9 = fields->m_Items[(longlong)(int)uVar7 + 1];
      }
      previous = value;
      if (0 < (int)uVar7) {
        if ((uint)fields->max_length <= uVar7 - 1) goto label_182276658;
        previous = fields->m_Items[(longlong)(int)uVar7 + -1];
      }
      if (__this == (UI_InputFieldKeyboardNav_o *)0x0) goto label_182276652;
      UI_InputFieldKeyboardNav__Setup
                (__this,pUVar10,(UnityEngine_UI_Selectable_o *)pUVar9,(UnityEngine_UI_Selectable_o *)previous,
                 (MethodInfo *)0x0);
    }
    pUVar10 = (UnityEngine_UI_InputField_o *)(ulonglong)(uVar7 + 1);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)submit,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (submit == (UnityEngine_UI_Selectable_o *)0x0) goto label_182276652;
    uVar4 = (submit->fields).m_Navigation.fields.m_WrapAround;
    uVar5 = *(undefined3 *)&(submit->fields).m_Navigation.fields.field_0x5;
    local_70._5_3_ = uVar5;
    local_70.m_WrapAround = (bool)uVar4;
    local_70.m_SelectOnUp = (submit->fields).m_Navigation.fields.m_SelectOnUp;
    local_70.m_SelectOnDown = (submit->fields).m_Navigation.fields.m_SelectOnDown;
    local_70.m_SelectOnLeft = (submit->fields).m_Navigation.fields.m_SelectOnLeft;
    local_70.m_Mode = 4;
    local_70.m_SelectOnRight = (submit->fields).m_Navigation.fields.m_SelectOnRight;
    if (fields->max_length != 0) {
      iVar1 = (int)fields->max_length;
      if ((uint)fields->max_length <= iVar1 - 1U) {
label_182276658:
        ThrowIndexOutOfRangeException();
      }
      value = fields->m_Items[(longlong)iVar1 + -1];
    }
    local_70.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)value;
    Il2CppCodeGenWriteBarrier(&local_70.m_SelectOnUp,value);
    local_48.m_Mode = local_70.m_Mode;
    local_48.m_WrapAround = local_70.m_WrapAround;
    local_48._5_3_ = local_70._5_3_;
    local_48.m_SelectOnUp = local_70.m_SelectOnUp;
    local_48.m_SelectOnRight = local_70.m_SelectOnRight;
    local_48.m_SelectOnDown = local_70.m_SelectOnDown;
    local_48.m_SelectOnLeft = local_70.m_SelectOnLeft;
    UnityEngine_UI_Selectable__set_navigation
              (submit,(UnityEngine_UI_Navigation_o *)&local_48,(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$RefreshState
// il2cpp: void UI_AccountPanel__RefreshState (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182275880
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182275bfd: jmp 0x182275c06
// asm:   0x182275bff: mov rdx, qword ptr [rip + 0x1e25662]  ; "No sign-in methods are currently available."
// asm:   0x1822760b6: mov rsi, qword ptr [rip + 0x1e4e5c3]  ; "(unknown)"

void UI_AccountPanel__RefreshState(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  bool bVar4;
  bool value;
  bool bVar5;
  bool value_00;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  bool bVar12;
  
  if (Il2CppMethodInitialized_1843473c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xbc");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xb2");
    il2cpp_codegen_initialize_runtime_metadata(&"Offline. Go online to restore your session.");
    il2cpp_codegen_initialize_runtime_metadata(&"Complete sign-in in your browser.");
    il2cpp_codegen_initialize_runtime_metadata(&"Go Online");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a sign-in provider to continue.");
    il2cpp_codegen_initialize_runtime_metadata(&"Go Offline");
    il2cpp_codegen_initialize_runtime_metadata(&"email_password");
    il2cpp_codegen_initialize_runtime_metadata(&"Signed in as ");
    il2cpp_codegen_initialize_runtime_metadata(&"No sign-in methods are currently available.");
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    il2cpp_codegen_initialize_runtime_metadata(&"(unknown)");
    Il2CppMethodInitialized_1843473c6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  bVar4 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
  value = ApplicationManagers_AccountManager__IsAuthMethodEnabled("email_password",(MethodInfo *)0x0);
  bVar5 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("discord",(MethodInfo *)0x0);
  value_00 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("google",(MethodInfo *)0x0);
  bVar8 = bVar3;
  bVar12 = !bVar3 && (!bVar4 || bVar8);
  if ((!value) && (((__this->fields)._currentTab == 0 || ((__this->fields)._currentTab == 2)))) {
    (__this->fields)._currentTab = 1;
  }
  if ((__this->fields)._userToggledCollapse == false) {
    (__this->fields)._collapsed = bVar3;
  }
  if (value && bVar12) {
    bVar6 = (__this->fields)._currentTab != 2;
  }
  else {
    bVar6 = false;
  }
  pUVar11 = (__this->fields)._signupTabButton;
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._loginTabButton;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
      pUVar11 = (__this->fields)._tabSeparator;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlySection;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar11 = (__this->fields)._loginOAuthOnlySection;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar12 && !value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyButtons;
        bVar6 = value_00 || bVar5;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginOAuthOnlyButtons;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyDiscordButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginOAuthOnlyDiscordButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar5,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyGoogleButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginOAuthOnlyGoogleButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,value_00,(MethodInfo *)0x0);
        }
        pUVar2 = (__this->fields)._loginOAuthOnlyMessage;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pSVar9 = "No sign-in methods are currently available.";
          if ((value_00 || bVar5) &&
             (pSVar9 = "Choose a sign-in provider to continue.", (__this->fields)._oauthInProgress != false)) {
            pSVar9 = "Complete sign-in in your browser.";
          }
          pUVar2 = (__this->fields)._loginOAuthOnlyMessage;
          if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,pSVar9,(pUVar2->klass->vtable)._75_set_text.method);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._oauthCancelButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          if (((__this->fields)._oauthInProgress == false) || ((__this->fields)._collapsed != false)) {
            bVar7 = false;
          }
          else {
            bVar7 = !bVar3;
          }
          pUVar11 = (__this->fields)._oauthCancelButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar7,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._signupEmailSection;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._signupEmailSection;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginEmailSection;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginEmailSection;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._signupOAuthDivider;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._signupOAuthDivider;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar6 && value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthDivider;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginOAuthDivider;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar6 && value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._signupOAuthRow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._signupOAuthRow;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthRow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = (__this->fields)._loginOAuthRow;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar6 && value,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._signupDiscordButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar11 = (__this->fields)._signupDiscordButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar5,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginDiscordButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar11 = (__this->fields)._loginDiscordButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,bVar5,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._signupGoogleButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar11 = (__this->fields)._signupGoogleButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,value_00,(MethodInfo *)0x0);
        }
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._loginGoogleButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar11 = (__this->fields)._loginGoogleButton;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
          UnityEngine_GameObject__SetActive(pUVar11,value_00,(MethodInfo *)0x0);
        }
        bVar5 = false;
        if ((__this->fields)._collapsed == false && ((!bVar3 && (!bVar4 || bVar8)) && value)) {
          bVar5 = (__this->fields)._currentTab == 0;
        }
        pUVar11 = (__this->fields)._signupContent;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar11,bVar5,(MethodInfo *)0x0);
          if ((__this->fields)._collapsed == false && bVar12) {
            if ((__this->fields)._currentTab == 1) {
              bVar8 = true;
            }
            else {
              bVar8 = !value;
            }
          }
          else {
            bVar8 = false;
          }
          pUVar11 = (__this->fields)._loginContent;
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar11,bVar8,(MethodInfo *)0x0);
            if ((__this->fields)._collapsed == false && (bVar12 && value)) {
              bVar8 = (__this->fields)._currentTab == 2;
            }
            else {
              bVar8 = false;
            }
            pUVar11 = (__this->fields)._forgotPasswordContent;
            if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar11,bVar8,(MethodInfo *)0x0);
              pUVar11 = (__this->fields)._loggedInContent;
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive
                          (pUVar11,(__this->fields)._collapsed == false && (bVar4 && !bVar3 || bVar3),
                           (MethodInfo *)0x0);
                pUVar11 = (__this->fields)._content;
                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive
                            (pUVar11,(__this->fields)._collapsed == false,(MethodInfo *)0x0);
                  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                  }
                  pSVar9 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
                  bVar8 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
                  pSVar9 = "(unknown)";
                  if (!bVar8) {
                    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                    }
                    pSVar9 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
                  }
                  pUVar2 = (__this->fields)._loggedInUserLabel;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    if (bVar3) {
                      pUVar2 = (__this->fields)._loggedInUserLabel;
                      pSVar10 = System_String__Concat_1969e50("Signed in as ",pSVar9,(MethodInfo *)0x0);
                      if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
                    }
                    else if (bVar4) {
                      pUVar2 = (__this->fields)._loggedInUserLabel;
                      if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                (pUVar2,"Offline. Go online to restore your session.",(pUVar2->klass->vtable)._75_set_text.method);
                    }
                  }
                  pUVar2 = (__this->fields)._onlineToggleButtonLabel;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar10 = "Go Online";
                    if (bVar3) {
                      pSVar10 = "Go Offline";
                    }
                    pUVar2 = (__this->fields)._onlineToggleButtonLabel;
                    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                              (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
                  }
                  pUVar2 = (__this->fields)._collapsedUserLabel;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    pUVar2 = (__this->fields)._collapsedUserLabel;
                    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                    bVar8 = (__this->fields)._collapsed;
                    pUVar11 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_1822762d5;
                    bVar8 = (bool)(bVar8 & bVar3);
                    UnityEngine_GameObject__SetActive(pUVar11,bVar8,(MethodInfo *)0x0);
                    if (bVar8 != false) {
                      pUVar2 = (__this->fields)._collapsedUserLabel;
                      pSVar9 = System_String__Concat_1969e50("Signed in as ",pSVar9,(MethodInfo *)0x0);
                      if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                (pUVar2,pSVar9,(pUVar2->klass->vtable)._75_set_text.method);
                    }
                  }
                  pUVar2 = (__this->fields)._collapseButtonLabel;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar9 = "\xe2\x96\xb2";
                    if ((__this->fields)._collapsed != false) {
                      pSVar9 = "\xe2\x96\xbc";
                    }
                    pUVar2 = (__this->fields)._collapseButtonLabel;
                    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822762d5;
                    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                              (pUVar2,pSVar9,(pUVar2->klass->vtable)._75_set_text.method);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1822762d5:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$SetTab
// il2cpp: void UI_AccountPanel__SetTab (UI_AccountPanel_o* __this, int32_t tab, const MethodInfo* method);
// 0x1822762e0

void UI_AccountPanel__SetTab(UI_AccountPanel_o *__this,int32_t tab,MethodInfo *method)

{
  (__this->fields)._currentTab = tab;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$ToggleCollapsed
// il2cpp: void UI_AccountPanel__ToggleCollapsed (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276790

void UI_AccountPanel__ToggleCollapsed(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._userToggledCollapse = true;
  (__this->fields)._collapsed = (__this->fields)._collapsed == false;
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$HandleLoggedIn
// il2cpp: void UI_AccountPanel__HandleLoggedIn (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274800

void UI_AccountPanel__HandleLoggedIn(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._busy = false;
  (__this->fields)._oauthInProgress = false;
  (__this->fields)._userToggledCollapse = false;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$HandleLoggedOut
// il2cpp: void UI_AccountPanel__HandleLoggedOut (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274850

void UI_AccountPanel__HandleLoggedOut(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._busy = false;
  (__this->fields)._oauthInProgress = false;
  (__this->fields)._userToggledCollapse = false;
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$HandleAuthMethodsChanged
// il2cpp: void UI_AccountPanel__HandleAuthMethodsChanged (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822747f0

void UI_AccountPanel__HandleAuthMethodsChanged(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnRegisterClick
// il2cpp: void UI_AccountPanel__OnRegisterClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822753b0

void UI_AccountPanel__OnRegisterClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *displayName;
  System_String_o *email;
  System_String_o *password;
  bool bVar5;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnRegisterComplete);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Registering...");
    il2cpp_codegen_initialize_runtime_metadata(&"Please fill in all fields.");
    Il2CppMethodInitialized_1843473c7 = '\x01';
  }
  if ((__this->fields)._busy == false) {
    pSVar1 = (__this->fields)._signupDisplayName;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_18227558a;
    bVar5 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
    if (!bVar5) {
      pSVar1 = (__this->fields)._signupEmail;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_18227558a;
      bVar5 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
      if (!bVar5) {
        pSVar1 = (__this->fields)._signupPassword;
        if (pSVar1 == (Settings_StringSetting_o *)0x0) {
label_18227558a:
          ThrowNullReferenceException();
        }
        bVar5 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
        if (!bVar5) {
          (__this->fields)._busy = true;
          UI_AccountPanel__ShowStatus(__this,"Registering...",(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._keepSignedIn;
          if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
            bVar5 = (pSVar2->fields)._value;
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__SetKeepSignedIn(bVar5,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._signupDisplayName;
            if (((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                (pSVar3 = (__this->fields)._signupEmail, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
               (pSVar4 = (__this->fields)._signupPassword, pSVar4 != (Settings_StringSetting_o *)0x0)) {
              displayName = (pSVar1->fields)._value;
              email = (pSVar3->fields)._value;
              password = (pSVar4->fields)._value;
              __this_00 = (System_Action_T1__T2__o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
              System_Action_bool__object____ctor
                        (__this_00,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_AccountPanel_OnRegisterComplete,(MethodInfo_1468160 *)0x0);
              ApplicationManagers_AccountManager__Register
                        (displayName,email,password,(System_Action_bool__string__o *)__this_00,true,
                         (MethodInfo *)0x0);
              return;
            }
          }
          goto label_18227558a;
        }
      }
    }
    UI_AccountPanel__ShowStatus(__this,"Please fill in all fields.",(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$OnLoginClick
// il2cpp: void UI_AccountPanel__OnLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274c10

void UI_AccountPanel__OnLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *email;
  System_String_o *password;
  bool bVar4;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnAuthComplete);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Please fill in all fields.");
    il2cpp_codegen_initialize_runtime_metadata(&"Signing in...");
    Il2CppMethodInitialized_1843473c8 = '\x01';
  }
  if ((__this->fields)._busy == false) {
    pSVar1 = (__this->fields)._loginEmail;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_182274da3;
    bVar4 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar1 = (__this->fields)._loginPassword;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) {
label_182274da3:
        ThrowNullReferenceException();
      }
      bVar4 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
      if (!bVar4) {
        (__this->fields)._busy = true;
        UI_AccountPanel__ShowStatus(__this,"Signing in...",(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._keepSignedIn;
        if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
          bVar4 = (pSVar2->fields)._value;
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          ApplicationManagers_AccountManager__SetKeepSignedIn(bVar4,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._loginEmail;
          if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
             (pSVar3 = (__this->fields)._loginPassword, pSVar3 != (Settings_StringSetting_o *)0x0)) {
            email = (pSVar1->fields)._value;
            password = (pSVar3->fields)._value;
            __this_00 = (System_Action_T1__T2__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
            System_Action_bool__object____ctor
                      (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_AccountPanel_OnAuthComplete,
                       (MethodInfo_1468160 *)0x0);
            ApplicationManagers_AccountManager__Login
                      (email,password,(System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_182274da3;
      }
    }
    UI_AccountPanel__ShowStatus(__this,"Please fill in all fields.",(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$OnForgotPasswordClick
// il2cpp: void UI_AccountPanel__OnForgotPasswordClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274a70

void UI_AccountPanel__OnForgotPasswordClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *email;
  bool bVar2;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnForgotPasswordComplete);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Please enter your email.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sending reset email...");
    Il2CppMethodInitialized_1843473c9 = '\x01';
  }
  if ((__this->fields)._busy != false) {
    return;
  }
  pSVar1 = (__this->fields)._forgotPasswordEmail;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
    if (bVar2) {
      UI_AccountPanel__ShowStatus(__this,"Please enter your email.",(MethodInfo *)0x0);
      return;
    }
    (__this->fields)._busy = true;
    UI_AccountPanel__ShowStatus(__this,"Sending reset email...",(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._forgotPasswordEmail;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      email = (pSVar1->fields)._value;
      __this_00 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_AccountPanel_OnForgotPasswordComplete,(MethodInfo_1468160 *)0x0);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__ForgotPassword
                (email,(System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$OnWebLoginClick
// il2cpp: void UI_AccountPanel__OnWebLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822757f0

void UI_AccountPanel__OnWebLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *url;
  
  if (Il2CppMethodInitialized_1843473ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_1843473ca = '\x01';
  }
  if ((__this->fields)._busy == false) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    url = ApplicationManagers_AccountManager__GetWebLoginUrlWithSession((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.AccountPanel$$OnRefreshLoginClick
// il2cpp: void UI_AccountPanel__OnRefreshLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822752e0

void UI_AccountPanel__OnRefreshLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnRefreshLoginClick_b__87_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Refreshing login...");
    Il2CppMethodInitialized_1843473cb = '\x01';
  }
  if ((__this->fields)._busy == false) {
    (__this->fields)._busy = true;
    UI_AccountPanel__ShowStatus(__this,"Refreshing login...",(MethodInfo *)0x0);
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
    System_Action_bool__object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AccountPanel_OnRefreshLoginClick_b__87_0,(MethodInfo_1468160 *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Refresh
              ((System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$OnOAuthClick
// il2cpp: void UI_AccountPanel__OnOAuthClick (UI_AccountPanel_o* __this, System_String_o* provider, const MethodInfo* method);
// 0x182274ee0

void UI_AccountPanel__OnOAuthClick(UI_AccountPanel_o *__this,System_String_o *provider,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnOAuthComplete);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Finish ");
    il2cpp_codegen_initialize_runtime_metadata(&"Discord");
    il2cpp_codegen_initialize_runtime_metadata(&" sign-in in your browser. If you closed it, cancel and try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    il2cpp_codegen_initialize_runtime_metadata(&"Google");
    Il2CppMethodInitialized_1843473cc = '\x01';
  }
  if ((__this->fields)._busy == false) {
    (__this->fields)._busy = true;
    (__this->fields)._oauthInProgress = true;
    bVar2 = System_String__op_Equality(provider,"discord",(MethodInfo *)0x0);
    pSVar3 = "Google";
    if (bVar2) {
      pSVar3 = "Discord";
    }
    pSVar3 = System_String__Concat_1969b70
                       ("Finish ",pSVar3," sign-in in your browser. If you closed it, cancel and try again.",(MethodInfo *)0x0);
    UI_AccountPanel__ShowStatus(__this,pSVar3,(MethodInfo *)0x0);
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._keepSignedIn;
    if (pSVar1 == (Settings_BoolSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (pSVar1->fields)._value;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__SetKeepSignedIn(bVar2,(MethodInfo *)0x0);
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
    System_Action_bool__object____ctor
              (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_AccountPanel_OnOAuthComplete,
               (MethodInfo_1468160 *)0x0);
    ApplicationManagers_AccountManager__LoginWithOAuth
              (provider,(System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$OnOAuthCancelClick
// il2cpp: void UI_AccountPanel__OnOAuthCancelClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274e80

void UI_AccountPanel__OnOAuthCancelClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843473cd = '\x01';
  }
  if ((__this->fields)._oauthInProgress != false) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__CancelOAuthLogin((MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.AccountPanel$$OnOAuthComplete
// il2cpp: void UI_AccountPanel__OnOAuthComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182275050

void UI_AccountPanel__OnOAuthComplete
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843473ce = '\x01';
  }
  (__this->fields)._busy = false;
  (__this->fields)._oauthInProgress = false;
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
    UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
label_182275114:
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    return;
  }
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._signupPassword;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar1 = (__this->fields)._loginPassword;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      goto label_182275114;
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$OnForgotPasswordComplete
// il2cpp: void UI_AccountPanel__OnForgotPasswordComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182274ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182274bef: mov rdx, qword ptr [rip + 0x1e52232]  ; "Password reset email sent. Check your inbox."

void UI_AccountPanel__OnForgotPasswordComplete
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Password reset email sent. Check your inbox.");
    Il2CppMethodInitialized_1843473cf = '\x01';
  }
  (__this->fields)._busy = false;
  message = "Password reset email sent. Check your inbox.";
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
  }
  UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnLogoutClick
// il2cpp: void UI_AccountPanel__OnLogoutClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182274db0

void UI_AccountPanel__OnLogoutClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843473d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnAuthComplete);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Logging out...");
    Il2CppMethodInitialized_1843473d0 = '\x01';
  }
  if ((__this->fields)._busy == false) {
    (__this->fields)._busy = true;
    UI_AccountPanel__ShowStatus(__this,"Logging out...",(MethodInfo *)0x0);
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
    System_Action_bool__object____ctor
              (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_AccountPanel_OnAuthComplete,
               (MethodInfo_1468160 *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Logout
              ((System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.AccountPanel$$OnOnlineToggleClick
// il2cpp: void UI_AccountPanel__OnOnlineToggleClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182275140
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227526c: mov rdx, qword ptr [rip + 0x1e258fd]  ; "No saved session. Please sign in."
// asm:   0x182275273: jmp 0x1822752be

void UI_AccountPanel__OnOnlineToggleClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_T1__T2__o *__this_00;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AccountPanel_OnOnlineToggleClick_b__93_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&"No saved session. Please sign in.");
    il2cpp_codegen_initialize_runtime_metadata(&"Going offline...");
    il2cpp_codegen_initialize_runtime_metadata(&"Offline mode enabled.");
    il2cpp_codegen_initialize_runtime_metadata(&"Going online...");
    Il2CppMethodInitialized_1843473d1 = '\x01';
  }
  if ((__this->fields)._busy != false) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields)._busy = true;
    UI_AccountPanel__ShowStatus(__this,"Going offline...",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__GoOffline((MethodInfo *)0x0);
    (__this->fields)._busy = false;
    message = "Offline mode enabled.";
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar1 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
    message = "No saved session. Please sign in.";
    if (bVar1) {
      (__this->fields)._busy = true;
      UI_AccountPanel__ShowStatus(__this,"Going online...",(MethodInfo *)0x0);
      __this_00 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_AccountPanel_OnOnlineToggleClick_b__93_0,(MethodInfo_1468160 *)0x0);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__GoOnline
                ((System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnRegisterComplete
// il2cpp: void UI_AccountPanel__OnRegisterComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182275590

void UI_AccountPanel__OnRegisterComplete
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_BaseMenu_o *pUVar2;
  UI_MessagePopup_o *__this_00;
  bool bVar3;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Check your email, then log in.");
    il2cpp_codegen_initialize_runtime_metadata(&"Account created!\nCheck your email to verify,\nthen log in.");
    Il2CppMethodInitialized_1843473d2 = '\x01';
  }
  (__this->fields)._busy = false;
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
    UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = (__this->fields)._signupPassword;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    (__this->fields)._currentTab = 1;
    UI_AccountPanel__ShowStatus
              (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843473fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843473fb = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar3 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                       _PendingEmail_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar1 = (__this->fields)._loginEmail;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843473fb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843473fb = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1822757e1;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,
                 (Il2CppObject *)
                 TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((pUVar2 != (UI_BaseMenu_o *)0x0) &&
       (__this_00 = (pUVar2->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Account created!\nCheck your email to verify,\nthen log in.",true,(MethodInfo *)0x0);
      UI_AccountPanel__ShowStatus(__this,"Check your email, then log in.",(MethodInfo *)0x0);
      return;
    }
  }
label_1822757e1:
  ThrowNullReferenceException();
}


// UI.AccountPanel$$OnAuthComplete
// il2cpp: void UI_AccountPanel__OnAuthComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182274870

void UI_AccountPanel__OnAuthComplete
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843473d3 = '\x01';
  }
  (__this->fields)._busy = false;
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
    UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
label_182274932:
    UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
    return;
  }
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._signupPassword;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar1 = (__this->fields)._loginPassword;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      goto label_182274932;
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$ShowStatus
// il2cpp: void UI_AccountPanel__ShowStatus (UI_AccountPanel_o* __this, System_String_o* message, const MethodInfo* method);
// 0x182276660

void UI_AccountPanel__ShowStatus(UI_AccountPanel_o *__this,System_String_o *message,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843473d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473d4 = '\x01';
  }
  pUVar1 = (__this->fields)._statusLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = System_String__IsNullOrEmpty(message,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._statusLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._statusLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (pUVar1->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
    else {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._statusLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$ClearStatus
// il2cpp: void UI_AccountPanel__ClearStatus (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182273cd0

void UI_AccountPanel__ClearStatus(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$FormatError
// il2cpp: System_String_o* UI_AccountPanel__FormatError (System_String_o* error, const MethodInfo* method);
// 0x1822742a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182274471: mov rdx, qword ptr [rip + 0x1e57e98]  ; "email_already_taken"
// asm:   0x182274478: jmp 0x18227453b
// asm:   0x18227451d: mov rdx, qword ptr [rip + 0x1e4cbb4]  ; "Email is not verified."
// asm:   0x182274524: jmp 0x1822746d0
// asm:   0x182274534: mov rdx, qword ptr [rip + 0x1e0a845]  ; "username_or_email_taken"
// asm:   0x1822746c9: mov rdx, qword ptr [rip + 0x1e57d20]  ; "email_not_verified"

System_String_o * UI_AccountPanel__FormatError(System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843473d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_failed");
    il2cpp_codegen_initialize_runtime_metadata(&"OAuth sign-in timed out. Please try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Email not verified. Check your inbox.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign-in was cancelled.");
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_denied");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"username_or_email_taken");
    il2cpp_codegen_initialize_runtime_metadata(&"OAuth sign-in did not return a code.");
    il2cpp_codegen_initialize_runtime_metadata(&"email_already_taken");
    il2cpp_codegen_initialize_runtime_metadata(&"Email already registered.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign-in already completed. Please try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Session expired, please sign in again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown error.");
    il2cpp_codegen_initialize_runtime_metadata(&"Not signed in.");
    il2cpp_codegen_initialize_runtime_metadata(&"Account name already taken.");
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_missing_code");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign-in expired. Please try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"code_already_delivered");
    il2cpp_codegen_initialize_runtime_metadata(&"expired");
    il2cpp_codegen_initialize_runtime_metadata(&"Email is not verified.");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&"invalid_refresh_token");
    il2cpp_codegen_initialize_runtime_metadata(&"OAuth sign-in failed. Please try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Unexpected server response.");
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_timeout");
    il2cpp_codegen_initialize_runtime_metadata(&"no_refresh_token");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid email or password.");
    il2cpp_codegen_initialize_runtime_metadata(&"Network error. Check your connection.");
    il2cpp_codegen_initialize_runtime_metadata(&"email_not_verified");
    il2cpp_codegen_initialize_runtime_metadata(&"invalid_credentials");
    il2cpp_codegen_initialize_runtime_metadata(&"display_name_taken");
    Il2CppMethodInitialized_1843473d5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    return "Unknown error.";
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(error,(MethodInfo *)0x0);
  if (uVar2 < 0x6e2964a2) {
    if (0x4e5f9fea < uVar2) {
      if (uVar2 < 0x67f94e1b) {
        if (uVar2 == 0x5ef038c9) {
          bVar1 = System_String__op_Equality(error,"invalid_credentials",(MethodInfo *)0x0);
          if (!bVar1) {
            return error;
          }
          return "Invalid email or password.";
        }
        if (uVar2 != 0x67f94e1a) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"oauth_denied",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "Sign-in was cancelled.";
      }
      if (uVar2 == 0x6863bfec) {
        bVar1 = System_String__op_Equality(error,"oauth_timeout",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "OAuth sign-in timed out. Please try again.";
      }
      if (uVar2 != 0x6e2964a1) {
        return error;
      }
      bVar1 = System_String__op_Equality(error,"oauth_missing_code",(MethodInfo *)0x0);
      if (!bVar1) {
        return error;
      }
      return "OAuth sign-in did not return a code.";
    }
    if (uVar2 < 0x37bfaa3a) {
      if (uVar2 == 0x338eb632) {
        bVar1 = System_String__op_Equality(error,"expired",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "Sign-in expired. Please try again.";
      }
      if (uVar2 != 0x37bfaa39) {
        return error;
      }
      bVar1 = System_String__op_Equality(error,"display_name_taken",(MethodInfo *)0x0);
      if (!bVar1) {
        return error;
      }
      return "Account name already taken.";
    }
    if (uVar2 == 0x4b8649dc) {
      bVar1 = System_String__op_Equality(error,"no_refresh_token",(MethodInfo *)0x0);
      if (!bVar1) {
        return error;
      }
      return "Not signed in.";
    }
    pSVar3 = "email_not_verified";
    if (uVar2 != 0x4e5f9fea) {
      return error;
    }
label_1822746d0:
    bVar1 = System_String__op_Equality(error,pSVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return "Email not verified. Check your inbox.";
    }
  }
  else {
    if (uVar2 < 0xbcccdb09) {
      if (uVar2 < 0xa09de9ff) {
        if (uVar2 == 0x960f468c) {
          bVar1 = System_String__op_Equality(error,"code_already_delivered",(MethodInfo *)0x0);
          if (!bVar1) {
            return error;
          }
          return "Sign-in already completed. Please try again.";
        }
        if (uVar2 != 0xa09de9fe) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"invalid_refresh_token",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "Session expired, please sign in again.";
      }
      pSVar3 = "Email is not verified.";
      if (uVar2 == 0xb89467ae) goto label_1822746d0;
      pSVar3 = "username_or_email_taken";
      if (uVar2 != 0xbcccdb08) {
        return error;
      }
    }
    else {
      if (uVar2 < 0xe8d0e891) {
        if (uVar2 == 0xc13c007e) {
          bVar1 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
          if (!bVar1) {
            return error;
          }
          return "Unexpected server response.";
        }
        if (uVar2 != 0xe8d0e890) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"oauth_failed",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "OAuth sign-in failed. Please try again.";
      }
      pSVar3 = "email_already_taken";
      if (uVar2 != 0xef1c5af4) {
        if (uVar2 != 0xf34f4058) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
        if (!bVar1) {
          return error;
        }
        return "Network error. Check your connection.";
      }
    }
    bVar1 = System_String__op_Equality(error,pSVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return "Email already registered.";
    }
  }
  return error;
}


// UI.AccountPanel$$.ctor
// il2cpp: void UI_AccountPanel___ctor (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276b50

void UI_AccountPanel___ctor(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_1843473d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843473d6 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x20,(MethodInfo *)0x0);
  (__this->fields)._signupDisplayName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._signupDisplayName,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._signupEmail = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._signupEmail,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._signupPassword = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._signupPassword,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._loginEmail = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loginEmail,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._loginPassword = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loginPassword,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(__this_00,true,(MethodInfo *)0x0);
  (__this->fields)._keepSignedIn = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._keepSignedIn,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._forgotPasswordEmail = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._forgotPasswordEmail,pSVar2);
  (__this->fields)._currentTab = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildTabs>b__62_0
// il2cpp: void UI_AccountPanel___BuildTabs_b__62_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276a10

void UI_AccountPanel___BuildTabs_b__62_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTab = 0;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildTabs>b__62_1
// il2cpp: void UI_AccountPanel___BuildTabs_b__62_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822767b0

void
UI_AccountPanel___BuildTabs_b__62_1(UI_AccountPanel_o* __this, MethodInfo* method)

{
  (__this->fields)._currentTab = 1;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildSignUpForm>b__63_0
// il2cpp: void UI_AccountPanel___BuildSignUpForm_b__63_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822769a0

void UI_AccountPanel___BuildSignUpForm_b__63_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  bool value;
  Settings_BoolSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843473d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843473d7 = '\x01';
  }
  pSVar1 = (__this->fields)._keepSignedIn;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    value = (pSVar1->fields)._value;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__SetKeepSignedIn(value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$<BuildLoginForm>b__64_0
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822767f0

void UI_AccountPanel___BuildLoginForm_b__64_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    Il2CppMethodInitialized_1843473d8 = '\x01';
  }
  UI_AccountPanel__OnOAuthClick(__this,"discord",(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildLoginForm>b__64_1
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276830

void UI_AccountPanel___BuildLoginForm_b__64_1(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    Il2CppMethodInitialized_1843473d9 = '\x01';
  }
  UI_AccountPanel__OnOAuthClick(__this,"google",(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildLoginForm>b__64_2
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_2 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276870

void UI_AccountPanel___BuildLoginForm_b__64_2(UI_AccountPanel_o *__this,MethodInfo *method)

{
  bool value;
  Settings_BoolSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843473da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843473da = '\x01';
  }
  pSVar1 = (__this->fields)._keepSignedIn;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    value = (pSVar1->fields)._value;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__SetKeepSignedIn(value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AccountPanel$$<BuildLoginForm>b__64_3
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_3 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822768e0

void UI_AccountPanel___BuildLoginForm_b__64_3(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTab = 2;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildForgotPasswordForm>b__65_0
// il2cpp: void UI_AccountPanel___BuildForgotPasswordForm_b__65_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x1822767b0

void UI_AccountPanel___BuildForgotPasswordForm_b__65_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTab = 1;
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildOAuthRow>b__69_0
// il2cpp: void UI_AccountPanel___BuildOAuthRow_b__69_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276920

void UI_AccountPanel___BuildOAuthRow_b__69_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    Il2CppMethodInitialized_1843473db = '\x01';
  }
  UI_AccountPanel__OnOAuthClick(__this,"discord",(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildOAuthRow>b__69_1
// il2cpp: void UI_AccountPanel___BuildOAuthRow_b__69_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x182276960

void UI_AccountPanel___BuildOAuthRow_b__69_1(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    Il2CppMethodInitialized_1843473dc = '\x01';
  }
  UI_AccountPanel__OnOAuthClick(__this,"google",(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<OnRefreshLoginClick>b__87_0
// il2cpp: void UI_AccountPanel___OnRefreshLoginClick_b__87_0 (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182276ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182276b1f: mov rdx, qword ptr [rip + 0x1e77d62]  ; "Login refreshed."

void UI_AccountPanel___OnRefreshLoginClick_b__87_0
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Login refreshed.");
    Il2CppMethodInitialized_1843473dd = '\x01';
  }
  (__this->fields)._busy = false;
  message = "Login refreshed.";
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
  }
  UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<OnOnlineToggleClick>b__93_0
// il2cpp: void UI_AccountPanel___OnOnlineToggleClick_b__93_0 (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x182276a50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182276a90: mov rax, qword ptr [rip + 0x1e3c899]  ; "Online."
// asm:   0x182276a97: jmp 0x182276aa3

void UI_AccountPanel___OnOnlineToggleClick_b__93_0
               (UI_AccountPanel_o *__this,bool success,System_String_o *error,MethodInfo *method)

{
  System_String_o *message;
  
  if (Il2CppMethodInitialized_1843473de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Online.");
    Il2CppMethodInitialized_1843473de = '\x01';
  }
  (__this->fields)._busy = false;
  message = "Online.";
  if (!success) {
    message = UI_AccountPanel__FormatError(error,(MethodInfo *)0x0);
  }
  UI_AccountPanel__ShowStatus(__this,message,(MethodInfo *)0x0);
  UI_AccountPanel__RefreshState(__this,(MethodInfo *)0x0);
  return;
}


