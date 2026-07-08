// Type: UI.AccountPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/AccountPanel.cs
// Prior source: NEW in this update
// --------------------------------

// UI.AccountPanel.<>c__DisplayClass75_0$$.ctor
// il2cpp: void UI_AccountPanel___c__DisplayClass75_0___ctor (UI_AccountPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40e4580

void UI_AccountPanel_<>c__DisplayClass75_0___ctor
               (UI_AccountPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel.<>c__DisplayClass75_0$$<AddPasswordToggle>b__0
// il2cpp: void UI_AccountPanel___c__DisplayClass75_0___AddPasswordToggle_b__0 (UI_AccountPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40e6150

void UI_AccountPanel_<>c__DisplayClass75_0__<AddPasswordToggle>b__0
               (UI_AccountPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Sprite_o **ppUVar5;
  bool_conflict bVar6;
  int32_t value;
  
  if (DAT_057047bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047bf = '\x01';
  }
  bVar1 = (byte)(__this->fields).visible;
  *(byte *)&(__this->fields).visible = bVar1 ^ 1;
  pUVar2 = (__this->fields).field;
  if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
    value = 7;
    if (bVar1 == 0) {
      value = 0;
    }
    UnityEngine_UI_InputField__set_contentType(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).field;
    if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_inputType
                (pUVar2,(uint)((char)(__this->fields).visible == '\0') * 2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).img;
      if ((char)(__this->fields).visible == '\0') {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields).spriteHidden;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        ppUVar5 = &(__this->fields).spriteVisible;
        if ((char)bVar6 != '\0') {
          ppUVar5 = &(__this->fields).spriteHidden;
        }
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields).spriteVisible;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        ppUVar5 = &(__this->fields).spriteHidden;
        if ((char)bVar6 != '\0') {
          ppUVar5 = &(__this->fields).spriteVisible;
        }
      }
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(pUVar3,*ppUVar5,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).img;
        if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar3->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
          pUVar2 = (__this->fields).field;
          if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ForceLabelUpdate(pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$Create
// il2cpp: UI_AccountPanel_o* UI_AccountPanel__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40dea00

UI_AccountPanel_o * UI_AccountPanel__Create(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UI_AccountPanel_o *__this_01;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if (DAT_05704793 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AccountPanel_AddComponent_AccountPanel);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AccountPanel");
    DAT_05704793 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,"AccountPanel",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
        method_00 = MethodInfo_AccountPanel_AddComponent_AccountPanel;
        __this_01 = (UI_AccountPanel_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this,(MethodInfo_24F0EB0 *)MethodInfo_AccountPanel_AddComponent_AccountPanel);
        if (__this_01 != (UI_AccountPanel_o *)0x0) {
          UI_AccountPanel__Build(__this_01,method_00);
          return __this_01;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$Build
// il2cpp: void UI_AccountPanel__Build (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40deb80

void UI_AccountPanel__Build(UI_AccountPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BoolSetting_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  UnityEngine_UI_ContentSizeFitter_o *__this_04;
  System_Action_o *pSVar5;
  MethodInfo *pMVar6;
  UnityEngine_Color_o UVar7;
  
  if (DAT_05704794 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_AddComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"BackgroundTexture");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_05704794 = '\x01';
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._rect = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._rect);
  pUVar3 = (__this->fields)._rect;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040df010;
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar3,(UnityEngine_Vector2_o)0x43e10000,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040df010;
  __this_01 = (UnityEngine_UI_RawImage_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_RawImage_AddComponent_RawImage);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (UnityEngine_Texture_o *)
          UI_UIManager__GetThemeTexture
                    ("DefaultPanel","MainBody","BackgroundTexture","DefaultPanel",(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040df010;
  UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
  UVar7 = UI_UIManager__GetThemeColor
                    ("DefaultPanel","MainBody","BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
            (UVar7.fields._0_8_,CONCAT44(UVar7.fields.a * 0.75,UVar7.fields.b),__this_01);
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040df010;
  __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG);
  __this_03 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
  UnityEngine_RectOffset___ctor(__this_03,10,10,10,10,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_040df010;
  UnityEngine_UI_LayoutGroup__set_padding
            ((UnityEngine_UI_LayoutGroup_o *)__this_02,__this_03,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_02,6.0,(MethodInfo *)0x0);
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            (__this_02,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            (__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            (__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            (__this_02,1,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_04 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter),
     __this_04 == (UnityEngine_UI_ContentSizeFitter_o *)0x0)) goto LAB_040df010;
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_04,0,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_04,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._keepSignedIn;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_057047ea == '\0') goto LAB_040defdc;
LAB_040deead:
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_057047ea != '\0') goto LAB_040deead;
LAB_040defdc:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057047ea = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Settings_BoolSetting_o *)0x0) {
    bVar1 = *(byte *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99);
    pMVar6 = (MethodInfo *)(ulong)bVar1;
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,(uint)bVar1,MethodInfo_Void_set_Value);
    UI_AccountPanel__BuildContent(__this,pMVar6);
    UI_AccountPanel__BuildCollapsedUserLabel(__this,pMVar6);
    UI_AccountPanel__BuildCollapseBar(__this,pMVar6);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor
              (pUVar4,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
    pSVar5 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
    System_Action___ctor();
    ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar5,(MethodInfo *)0x0);
    pSVar5 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
    System_Action___ctor();
    ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar5,(MethodInfo *)0x0);
    pSVar5 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
    System_Action___ctor();
    ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar5,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)0x0;
    ApplicationManagers_AccountManager__RefreshAuthMethods
              ((System_Action_bool__string__o *)0x0,(MethodInfo *)0x0);
    UI_AccountPanel__RefreshState(__this,pMVar6);
    return;
  }
LAB_040df010:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnDestroy
// il2cpp: void UI_AccountPanel__OnDestroy (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e0140

void UI_AccountPanel__OnDestroy(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (DAT_05704795 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_init_method_metadata(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704795 = '\x01';
  }
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged(pSVar1,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$BuildContent
// il2cpp: void UI_AccountPanel__BuildContent (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40df020

void UI_AccountPanel__BuildContent(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Object_o *x;
  UI_ElementStyle_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  
  if (DAT_05704796 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnOAuthCancelClick);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Cancel Sign In");
    DAT_05704796 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,1,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._content;
  (__this->fields)._content = pUVar4;
  il2cpp_runtime_glue(ppUVar1,pUVar4);
  pUVar4 = (__this->fields)._content;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040df414;
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      (*x->klass[2]._1.events)(0x43d70000,x,x->klass[2]._1.properties);
      (*(code *)x->klass[2]._2.typeHierarchy)(0,x);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        UI_AccountPanel__BuildTabs(__this,pUVar3,method_01);
        pUVar4 = (__this->fields)._content;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pUVar4 = UI_AccountPanel__BuildSignUpForm(__this,pUVar3,method_02);
          (__this->fields)._signupContent = pUVar4;
          il2cpp_runtime_glue(&(__this->fields)._signupContent);
          pUVar4 = (__this->fields)._content;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
            pUVar4 = UI_AccountPanel__BuildLoginForm(__this,pUVar3,method_03);
            (__this->fields)._loginContent = pUVar4;
            il2cpp_runtime_glue(&(__this->fields)._loginContent);
            pUVar4 = (__this->fields)._content;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              pUVar4 = UI_AccountPanel__BuildForgotPasswordForm(__this,pUVar3,method_04);
              (__this->fields)._forgotPasswordContent = pUVar4;
              il2cpp_runtime_glue(&(__this->fields)._forgotPasswordContent);
              pUVar4 = (__this->fields)._content;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                pUVar4 = UI_AccountPanel__BuildLoggedInView(__this,pUVar3,method_05);
                (__this->fields)._loggedInContent = pUVar4;
                il2cpp_runtime_glue(&(__this->fields)._loggedInContent);
                pUVar4 = (__this->fields)._content;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor(pUVar5,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar3,pUVar5,
                                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                                      (MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar6 = (UnityEngine_UI_Text_o *)
                             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
                    (__this->fields)._statusLabel = pUVar6;
                    il2cpp_runtime_glue(&(__this->fields)._statusLabel);
                    pUVar6 = (__this->fields)._statusLabel;
                    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                      pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0)
                          ;
                          pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                          UI_ElementStyle___ctor
                                    (pUVar5,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                          onClick = (UnityEngine_Events_UnityAction_o *)
                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          method_00 = (MethodInfo *)
                                      UI_ElementFactory__CreateDefaultButton
                                                (pUVar3,pUVar5,"Cancel Sign In",430.0,22.0,onClick,
                                                 (MethodInfo *)0x0);
                          (__this->fields)._oauthCancelButton =
                               (UnityEngine_GameObject_o *)method_00;
                          il2cpp_runtime_glue(&(__this->fields)._oauthCancelButton);
                          UI_AccountPanel__ApplySubtleButtonStyle
                                    ((__this->fields)._oauthCancelButton,method_00);
                          pUVar4 = (__this->fields)._oauthCancelButton;
                          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
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
LAB_040df414:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildTabs
// il2cpp: void UI_AccountPanel__BuildTabs (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40e0240

void UI_AccountPanel__BuildTabs
               (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (DAT_05704797 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildTabs_b__62_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildTabs_b__62_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Login");
    il2cpp_init_method_metadata(&"|");
    il2cpp_init_method_metadata(&"Sign Up");
    DAT_05704797 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateHorizontalGroup(parent,12.0,4,(MethodInfo *)0x0);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x21,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar4 = UI_ElementFactory__CreateTextButton
                       (pUVar2,__this_00,"Sign Up",135.0,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._signupTabButton = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._signupTabButton);
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar2,__this_00,"|",0,4,(MethodInfo *)0x0);
    (__this->fields)._tabSeparator = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._tabSeparator);
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar1 = UI_ElementFactory__CreateTextButton
                       (pUVar2,__this_00,"Login",105.0,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._loginTabButton = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._loginTabButton,pUVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildSignUpForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildSignUpForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40e0450

UnityEngine_GameObject_o *
UI_AccountPanel__BuildSignUpForm
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Settings_BoolSetting_o *setting;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar1;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_GameObject_o *inputSettingGO;
  UnityEngine_GameObject_o *inputSettingGO_00;
  UnityEngine_GameObject_o *inputSettingGO_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_UI_InputField_array *fields;
  UnityEngine_UI_InputField_o *pUVar5;
  long lVar6;
  UnityEngine_UI_Selectable_o *submit;
  undefined8 uVar7;
  MethodInfo *method_00;
  float elementWidth;
  MethodInfo *method_01;
  
  if (DAT_05704798 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnRegisterClick);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSignUpForm_b__63_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_InputField);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Name:");
    il2cpp_init_method_metadata(&"Password:");
    il2cpp_init_method_metadata(&"Email:");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Stay signed in");
    il2cpp_init_method_metadata(&"Register");
    DAT_05704798 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar1,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x16,180.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((pMVar1 == (MethodInfo *)0x0) || (__this_00 == (UnityEngine_GameObject_o *)0x0)) {
LAB_040e09a0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  elementWidth = 300.0 - *(float *)&pMVar1->klass;
  pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateVerticalGroup(pUVar2,6.0,0,(MethodInfo *)0x0);
  (__this->fields)._signupEmailSection = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._signupEmailSection);
  pUVar3 = (__this->fields)._signupEmailSection;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e09a0;
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  inputSettingGO =
       UI_ElementFactory__CreateInputSetting
                 (pUVar2,(UI_ElementStyle_o *)pMVar1,
                  (Settings_BaseSetting_o *)(__this->fields)._signupDisplayName,"Name:",
                  "",elementWidth,42.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                  (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._signupEmailSection;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e09a0;
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  inputSettingGO_00 =
       UI_ElementFactory__CreateInputSetting
                 (pUVar2,(UI_ElementStyle_o *)pMVar1,
                  (Settings_BaseSetting_o *)(__this->fields)._signupEmail,"Email:","",
                  elementWidth,42.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                  (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._signupEmailSection;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e09a0;
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  inputSettingGO_01 =
       UI_ElementFactory__CreateInputSetting
                 (pUVar2,(UI_ElementStyle_o *)pMVar1,
                  (Settings_BaseSetting_o *)(__this->fields)._signupPassword,"Password:",
                  "",elementWidth,42.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                  (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_AccountPanel__ConfigurePasswordInput(inputSettingGO_01,pMVar1);
  pUVar3 = (__this->fields)._signupEmailSection;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e09a0;
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  setting = (__this->fields)._keepSignedIn;
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_01 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateToggleSetting
            (pUVar2,__this_01,(Settings_BaseSetting_o *)setting,"Stay signed in","",30.0,30.0,
             pUVar4,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar1,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0)
  ;
  pUVar3 = (__this->fields)._signupEmailSection;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e09a0;
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar3 = UI_ElementFactory__CreateDefaultButton
                     (pUVar2,(UI_ElementStyle_o *)pMVar1,"Register",430.0,40.0,pUVar4,
                      (MethodInfo *)0x0);
  UI_AccountPanel__ApplySubtleButtonStyle(pUVar3,pMVar1);
  pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  UI_AccountPanel__BuildOAuthRow
            (__this,pUVar2,&(__this->fields)._signupOAuthDivider,&(__this->fields)._signupOAuthRow,
             &(__this->fields)._signupDiscordButton,&(__this->fields)._signupGoogleButton,method_01)
  ;
  pMVar1 = (MethodInfo *)0x3;
  fields = (UnityEngine_UI_InputField_array *)il2cpp_glue_02274930(TypeInfo_InputField);
  pUVar5 = UI_AccountPanel__GetInput(inputSettingGO,pMVar1);
  if (fields == (UnityEngine_UI_InputField_array *)0x0) goto LAB_040e09a0;
  if (pUVar5 != (UnityEngine_UI_InputField_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pUVar5,(((fields->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_040e09aa;
  }
  if ((int)fields->max_length != 0) {
    fields->m_Items[0] = pUVar5;
    il2cpp_runtime_glue(fields->m_Items);
    pUVar5 = UI_AccountPanel__GetInput(inputSettingGO_00,(MethodInfo *)pUVar5);
    if (pUVar5 != (UnityEngine_UI_InputField_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pUVar5,(((fields->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_040e09aa;
    }
    if (1 < (uint)fields->max_length) {
      fields->m_Items[1] = pUVar5;
      il2cpp_runtime_glue(fields->m_Items + 1);
      pUVar5 = UI_AccountPanel__GetInput(inputSettingGO_01,(MethodInfo *)pUVar5);
      if (pUVar5 != (UnityEngine_UI_InputField_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pUVar5,(((fields->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_040e09aa:
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
      }
      if (2 < (uint)fields->max_length) {
        fields->m_Items[2] = pUVar5;
        il2cpp_runtime_glue(fields->m_Items + 2,pUVar5);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          submit = (UnityEngine_UI_Selectable_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Button_GetComponent_Button);
          UI_AccountPanel__SetupTabNavigation(fields,submit,method_00);
          return __this_00;
        }
        goto LAB_040e09a0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildLoginForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildLoginForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40e09c0

UnityEngine_GameObject_o *
UI_AccountPanel__BuildLoginForm
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  Settings_BoolSetting_o *setting;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_ElementStyle_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_GameObject_o *inputSettingGO;
  UnityEngine_GameObject_o *inputSettingGO_00;
  UnityEngine_UI_InputField_array *fields;
  UnityEngine_UI_InputField_o *pUVar9;
  long lVar10;
  UnityEngine_UI_Selectable_o *submit;
  undefined8 uVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float elementWidth;
  
  if (DAT_05704799 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoginClick);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLoginForm_b__64_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLoginForm_b__64_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLoginForm_b__64_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLoginForm_b__64_3);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_InputField);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Login");
    il2cpp_init_method_metadata(&"Icons/Navigation/DiscordIcon");
    il2cpp_init_method_metadata(&"Discord");
    il2cpp_init_method_metadata(&"Choose a sign-in provider to continue.");
    il2cpp_init_method_metadata(&"Forgot password?");
    il2cpp_init_method_metadata(&"Icons/Navigation/GoogleIcon");
    il2cpp_init_method_metadata(&"Password:");
    il2cpp_init_method_metadata(&"Email:");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"Google");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Stay signed in");
    DAT_05704799 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar2,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x16,180.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((pMVar2 == (MethodInfo *)0x0) || (__this_00 == (UnityEngine_GameObject_o *)0x0)) {
LAB_040e12ab:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  elementWidth = 300.0 - *(float *)&pMVar2->klass;
  pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,8.0,1,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._loginOAuthOnlySection;
  (__this->fields)._loginOAuthOnlySection = pUVar4;
  il2cpp_runtime_glue(ppUVar1,pUVar4);
  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar5,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._loginOAuthOnlySection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar3,pUVar5,"Sign In",1,4,(MethodInfo *)0x0);
  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar5,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar4 = *ppUVar1;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar3,pUVar5,"Choose a sign-in provider to continue.",0,4,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar6 = (UnityEngine_UI_Text_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
  (__this->fields)._loginOAuthOnlyMessage = pUVar6;
  il2cpp_runtime_glue(&(__this->fields)._loginOAuthOnlyMessage);
  pUVar4 = (__this->fields)._loginOAuthOnlySection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,1,(MethodInfo *)0x0);
  (__this->fields)._loginOAuthOnlyButtons = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._loginOAuthOnlyButtons,pUVar4);
  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar5,0x12,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._loginOAuthOnlyButtons;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar8 = (MethodInfo *)
           UI_ElementFactory__CreateDefaultButton
                     (pUVar3,pUVar5,"Discord",430.0,40.0,pUVar7,(MethodInfo *)0x0);
  (__this->fields)._loginOAuthOnlyDiscordButton = (UnityEngine_GameObject_o *)pMVar8;
  il2cpp_runtime_glue(&(__this->fields)._loginOAuthOnlyDiscordButton);
  UI_AccountPanel__ApplySubtleButtonStyle((__this->fields)._loginOAuthOnlyDiscordButton,pMVar8);
  pMVar8 = "Icons/Navigation/DiscordIcon";
  UI_AccountPanel__AddOAuthButtonIcon
            ((__this->fields)._loginOAuthOnlyDiscordButton,(System_String_o *)"Icons/Navigation/DiscordIcon",method_00
            );
  UI_AccountPanel__ConfigureOAuthOnlyButtonText
            ((__this->fields)._loginOAuthOnlyDiscordButton,pMVar8);
  pUVar4 = (__this->fields)._loginOAuthOnlyButtons;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar8 = (MethodInfo *)
           UI_ElementFactory__CreateDefaultButton
                     (pUVar3,pUVar5,"Google",430.0,40.0,pUVar7,(MethodInfo *)0x0);
  (__this->fields)._loginOAuthOnlyGoogleButton = (UnityEngine_GameObject_o *)pMVar8;
  il2cpp_runtime_glue(&(__this->fields)._loginOAuthOnlyGoogleButton);
  UI_AccountPanel__ApplySubtleButtonStyle((__this->fields)._loginOAuthOnlyGoogleButton,pMVar8);
  pMVar8 = "Icons/Navigation/GoogleIcon";
  UI_AccountPanel__AddOAuthButtonIcon
            ((__this->fields)._loginOAuthOnlyGoogleButton,(System_String_o *)"Icons/Navigation/GoogleIcon",method_01)
  ;
  UI_AccountPanel__ConfigureOAuthOnlyButtonText((__this->fields)._loginOAuthOnlyGoogleButton,pMVar8)
  ;
  pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateVerticalGroup(pUVar3,6.0,0,(MethodInfo *)0x0);
  (__this->fields)._loginEmailSection = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._loginEmailSection);
  pUVar4 = (__this->fields)._loginEmailSection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  inputSettingGO =
       UI_ElementFactory__CreateInputSetting
                 (pUVar3,(UI_ElementStyle_o *)pMVar2,
                  (Settings_BaseSetting_o *)(__this->fields)._loginEmail,"Email:","",
                  elementWidth,42.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                  (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._loginEmailSection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  inputSettingGO_00 =
       UI_ElementFactory__CreateInputSetting
                 (pUVar3,(UI_ElementStyle_o *)pMVar2,
                  (Settings_BaseSetting_o *)(__this->fields)._loginPassword,"Password:",
                  "",elementWidth,42.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                  (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_AccountPanel__ConfigurePasswordInput(inputSettingGO_00,pMVar2);
  pUVar4 = (__this->fields)._loginEmailSection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  setting = (__this->fields)._keepSignedIn;
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar8 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateToggleSetting
            (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,"Stay signed in","",30.0,30.0,
             pUVar7,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar2,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0)
  ;
  pUVar4 = (__this->fields)._loginEmailSection;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e12ab;
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar4 = UI_ElementFactory__CreateDefaultButton
                     (pUVar3,(UI_ElementStyle_o *)pMVar2,"Login",430.0,40.0,pUVar7,
                      (MethodInfo *)0x0);
  UI_AccountPanel__ApplySubtleButtonStyle(pUVar4,pMVar2);
  pMVar2 = (MethodInfo *)0x2;
  fields = (UnityEngine_UI_InputField_array *)il2cpp_glue_02274930(TypeInfo_InputField);
  pUVar9 = UI_AccountPanel__GetInput(inputSettingGO,pMVar2);
  if (fields == (UnityEngine_UI_InputField_array *)0x0) goto LAB_040e12ab;
  if (pUVar9 != (UnityEngine_UI_InputField_o *)0x0) {
    lVar10 = il2cpp_runtime_glue(pUVar9,(((fields->obj).klass)->_1).element_class);
    if (lVar10 == 0) goto LAB_040e12b5;
  }
  if ((int)fields->max_length != 0) {
    fields->m_Items[0] = pUVar9;
    il2cpp_runtime_glue(fields->m_Items);
    pUVar9 = UI_AccountPanel__GetInput(inputSettingGO_00,(MethodInfo *)pUVar9);
    if (pUVar9 != (UnityEngine_UI_InputField_o *)0x0) {
      lVar10 = il2cpp_runtime_glue(pUVar9,(((fields->obj).klass)->_1).element_class);
      if (lVar10 == 0) {
LAB_040e12b5:
        uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar11,0);
      }
    }
    if (1 < (uint)fields->max_length) {
      fields->m_Items[1] = pUVar9;
      il2cpp_runtime_glue(fields->m_Items + 1,pUVar9);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        submit = (UnityEngine_UI_Selectable_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Button_GetComponent_Button);
        UI_AccountPanel__SetupTabNavigation(fields,submit,method_02);
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        UI_AccountPanel__BuildOAuthRow
                  (__this,pUVar3,&(__this->fields)._loginOAuthDivider,
                   &(__this->fields)._loginOAuthRow,&(__this->fields)._loginDiscordButton,
                   &(__this->fields)._loginGoogleButton,pMVar8);
        pMVar2 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor
                  ((UI_ElementStyle_o *)pMVar2,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._loginEmailSection;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pUVar4 = UI_ElementFactory__CreateTextButton
                             (pUVar3,(UI_ElementStyle_o *)pMVar2,"Forgot password?",430.0,pUVar7,
                              (MethodInfo *)0x0);
          UI_AccountPanel__ApplySubtleButtonStyle(pUVar4,pMVar2);
          return __this_00;
        }
      }
      goto LAB_040e12ab;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildForgotPasswordForm
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildForgotPasswordForm (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40e12d0

UnityEngine_GameObject_o *
UI_AccountPanel__BuildForgotPasswordForm
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  float fVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *inputSettingGO;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *buttonGO;
  UnityEngine_GameObject_o *buttonGO_00;
  UnityEngine_UI_InputField_array *fields;
  UnityEngine_UI_InputField_o *pUVar4;
  long lVar5;
  UnityEngine_UI_Selectable_o *submit;
  undefined8 uVar6;
  MethodInfo *method_01;
  MethodInfo *pMVar7;
  
  if (DAT_0570479a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnForgotPasswordClick);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildForgotPasswordForm_b__65_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_InputField);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Send Reset Email");
    il2cpp_init_method_metadata(&"Email:");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Back to Login");
    DAT_0570479a = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1b,130.0,9.0,"DefaultPanel",(MethodInfo *)0x0);
  if ((__this_01 != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (__this_01->fields).Spacing;
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    inputSettingGO =
         UI_ElementFactory__CreateInputSetting
                   (pUVar2,__this_01,(Settings_BaseSetting_o *)(__this->fields)._forgotPasswordEmail
                    ,"Email:","",300.0 - fVar1,42.0,0,
                    (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                    (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                    (MethodInfo *)0x0);
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor
              ((UI_ElementStyle_o *)method_00,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pMVar7 = method_00;
    buttonGO = UI_ElementFactory__CreateDefaultButton
                         (pUVar2,(UI_ElementStyle_o *)method_00,"Send Reset Email",430.0,40.0,pUVar3,
                          (MethodInfo *)0x0);
    UI_AccountPanel__ApplySubtleButtonStyle(buttonGO,pMVar7);
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    buttonGO_00 = UI_ElementFactory__CreateDefaultButton
                            (pUVar2,(UI_ElementStyle_o *)method_00,"Back to Login",430.0,40.0,pUVar3,
                             (MethodInfo *)0x0);
    UI_AccountPanel__ApplySubtleButtonStyle(buttonGO_00,method_00);
    pMVar7 = (MethodInfo *)0x1;
    fields = (UnityEngine_UI_InputField_array *)il2cpp_glue_02274930(TypeInfo_InputField);
    pUVar4 = UI_AccountPanel__GetInput(inputSettingGO,pMVar7);
    if (fields != (UnityEngine_UI_InputField_array *)0x0) {
      if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
        lVar5 = il2cpp_runtime_glue(pUVar4,(((fields->obj).klass)->_1).element_class);
        if (lVar5 == 0) {
          uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar6,0);
        }
      }
      if ((int)fields->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      fields->m_Items[0] = pUVar4;
      il2cpp_runtime_glue(fields->m_Items,pUVar4);
      if (buttonGO != (UnityEngine_GameObject_o *)0x0) {
        submit = (UnityEngine_UI_Selectable_o *)
                 UnityEngine_GameObject__GetComponent<object>(buttonGO,MethodInfo_Button_GetComponent_Button);
        UI_AccountPanel__SetupTabNavigation(fields,submit,method_01);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildLoggedInView
// il2cpp: UnityEngine_GameObject_o* UI_AccountPanel__BuildLoggedInView (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x40e1600

UnityEngine_GameObject_o *
UI_AccountPanel__BuildLoggedInView
          (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *pMVar5;
  
  if (DAT_0570479b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLogoutClick);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnOnlineToggleClick);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnRefreshLoginClick);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnWebLoginClick);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Account Details (Web)");
    il2cpp_init_method_metadata(&"Refresh Login");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Logout");
    il2cpp_init_method_metadata(&"Go Offline");
    DAT_0570479b = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateVerticalGroup(parent,9.0,1,(MethodInfo *)0x0);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x15,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar1,__this_01,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0
                        ,4,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._loggedInUserLabel = pUVar3;
      il2cpp_runtime_glue(&(__this->fields)._loggedInUserLabel,pUVar3);
      method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor
                ((UI_ElementStyle_o *)method_00,0x1e,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pMVar5 = method_00;
      pUVar2 = UI_ElementFactory__CreateDefaultButton
                         (pUVar1,(UI_ElementStyle_o *)method_00,"Refresh Login",430.0,40.0,pUVar4,
                          (MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar2,pMVar5);
      pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pMVar5 = method_00;
      pUVar2 = UI_ElementFactory__CreateDefaultButton
                         (pUVar1,(UI_ElementStyle_o *)method_00,"Account Details (Web)",430.0,40.0,pUVar4,
                          (MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar2,pMVar5);
      pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pMVar5 = method_00;
      pUVar2 = UI_ElementFactory__CreateDefaultButton
                         (pUVar1,(UI_ElementStyle_o *)method_00,"Go Offline",430.0,40.0,pUVar4,
                          (MethodInfo *)0x0);
      UI_AccountPanel__ApplySubtleButtonStyle(pUVar2,pMVar5);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._onlineToggleButtonLabel = pUVar3;
            il2cpp_runtime_glue(&(__this->fields)._onlineToggleButtonLabel);
            pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            pUVar2 = UI_ElementFactory__CreateDefaultButton
                               (pUVar1,(UI_ElementStyle_o *)method_00,"Logout",430.0,40.0,pUVar4
                                ,(MethodInfo *)0x0);
            UI_AccountPanel__ApplySubtleButtonStyle(pUVar2,method_00);
            return __this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildCollapsedUserLabel
// il2cpp: void UI_AccountPanel__BuildCollapsedUserLabel (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40df420

void UI_AccountPanel__BuildCollapsedUserLabel(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar1;
  
  if (DAT_0570479c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"DefaultPanel");
    DAT_0570479c = '\x01';
  }
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1b,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        (parent,__this_00,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         0,4,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._collapsedUserLabel = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._collapsedUserLabel,pUVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildCollapseBar
// il2cpp: void UI_AccountPanel__BuildCollapseBar (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40df510

void UI_AccountPanel__BuildCollapseBar(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *title;
  MethodInfo *method_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *buttonGO;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (DAT_0570479d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_ToggleCollapsed);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    DAT_0570479d = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)method_00,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  title = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  buttonGO = UI_ElementFactory__CreateDefaultButton
                       (pUVar1,(UI_ElementStyle_o *)method_00,title,430.0,22.0,onClick,
                        (MethodInfo *)0x0);
  UI_AccountPanel__ApplySubtleButtonStyle(buttonGO,method_00);
  if (buttonGO != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._collapseButtonLabel = pUVar2;
        il2cpp_runtime_glue(&(__this->fields)._collapseButtonLabel,pUVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$BuildOAuthRow
// il2cpp: void UI_AccountPanel__BuildOAuthRow (UI_AccountPanel_o* __this, UnityEngine_Transform_o* parent, UnityEngine_GameObject_o** divider, UnityEngine_GameObject_o** row, UnityEngine_GameObject_o** discordBtn, UnityEngine_GameObject_o** googleBtn, const MethodInfo* method);
// 0x40e1d80

void UI_AccountPanel__BuildOAuthRow
               (UI_AccountPanel_o *__this,UnityEngine_Transform_o *parent,
               UnityEngine_GameObject_o **divider,UnityEngine_GameObject_o **row,
               UnityEngine_GameObject_o **discordBtn,UnityEngine_GameObject_o **googleBtn,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *pSVar3;
  undefined4 uVar5;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  UnityEngine_UI_ColorBlock_o *pUVar25;
  System_RuntimeTypeHandle_o SVar26;
  bool_conflict bVar27;
  int iVar28;
  int iVar29;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar30;
  System_Type_array *pSVar31;
  System_Type_o *pSVar32;
  long lVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_Transform_o *pUVar35;
  Il2CppObject *pIVar36;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_UI_Image_o *pUVar37;
  UnityEngine_Sprite_o *pUVar38;
  UnityEngine_UI_Selectable_o *pUVar39;
  UnityEngine_Events_UnityAction_o *pUVar40;
  undefined8 uVar41;
  
  if (DAT_0570479e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildOAuthRow_b__69_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildOAuthRow_b__69_1);
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"GoogleOAuthButton");
    il2cpp_init_method_metadata(&"Icons/Navigation/DiscordIcon");
    il2cpp_init_method_metadata(&"Icons/Navigation/GoogleIcon");
    il2cpp_init_method_metadata(&"DiscordOAuthButton");
    il2cpp_init_method_metadata(&"\x2014 or sign in with \x2014");
    DAT_0570479e = '\x01';
  }
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x10,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar30 = UI_ElementFactory__CreateDefaultLabel
                      (parent,__this_00,"\x2014 or sign in with \x2014",0,4,(MethodInfo *)0x0);
  *divider = pUVar30;
  il2cpp_runtime_glue(divider,pUVar30);
  pUVar30 = UI_ElementFactory__CreateHorizontalGroup(parent,20.0,4,(MethodInfo *)0x0);
  *row = pUVar30;
  il2cpp_runtime_glue(row,pUVar30);
  pSVar31 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  SVar26 = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar32 = System_Type__GetTypeFromHandle(SVar26,(MethodInfo *)0x0);
  if (pSVar31 == (System_Type_array *)0x0) goto LAB_040e2a7c;
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((int)pSVar31->max_length == 0) goto LAB_040e2a81;
  pSVar31->m_Items[0] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 2) goto LAB_040e2a81;
  pSVar31->m_Items[1] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 1);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 3) goto LAB_040e2a81;
  pSVar31->m_Items[2] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 2);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 4) goto LAB_040e2a81;
  pSVar31->m_Items[3] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 3);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 5) goto LAB_040e2a81;
  pSVar31->m_Items[4] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 4,pSVar32);
  pUVar30 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar30,"DiscordOAuthButton",pSVar31,(MethodInfo *)0x0);
  *discordBtn = pUVar30;
  il2cpp_runtime_glue(discordBtn);
  if (*discordBtn == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
  pUVar34 = UnityEngine_GameObject__get_transform(*discordBtn,(MethodInfo *)0x0);
  if (*row == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
  pUVar35 = UnityEngine_GameObject__get_transform(*row,(MethodInfo *)0x0);
  if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto LAB_040e2a7c;
  UnityEngine_Transform__SetParent(pUVar34,pUVar35,0,(MethodInfo *)0x0);
  if (*discordBtn == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
  pIVar36 = UnityEngine_GameObject__GetComponent<object>(*discordBtn,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar36 == (Il2CppObject *)0x0) goto LAB_040e2a7c;
  (*pIVar36->klass->vtable[0x24].methodPtr)(0x42180000,pIVar36,pIVar36->klass->vtable[0x24].method);
  (*pIVar36->klass->vtable[0x26].methodPtr)(0x42180000,pIVar36,pIVar36->klass->vtable[0x26].method);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  texture = (UnityEngine_Texture2D_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar3,"Icons/Navigation/DiscordIcon",1,(MethodInfo *)0x0);
  if ((texture != (UnityEngine_Texture2D_o *)0x0) && (texture->klass != TypeInfo_Texture2D)) {
LAB_040e2a95:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(texture);
  }
  if (*discordBtn == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
  pUVar37 = (UnityEngine_UI_Image_o *)
            UnityEngine_GameObject__GetComponent<object>(*discordBtn,MethodInfo_Image_GetComponent_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar27 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar27 == '\0') {
    if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040e2a7c;
  }
  else {
    if (texture == (UnityEngine_Texture2D_o *)0x0) goto LAB_040e2a7c;
    iVar28 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                       (texture,(texture->klass->vtable)._5_get_width.method);
    iVar29 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
    auVar7._4_4_ = (float)iVar29;
    auVar7._0_4_ = (float)iVar28;
    auVar7._8_8_ = 0;
    pUVar38 = UnityEngine_Sprite__Create
                        (texture,(UnityEngine_Rect_o)(auVar7 << 0x40),
                         (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040e2a7c;
    UnityEngine_UI_Image__set_sprite(pUVar37,pUVar38,(MethodInfo *)0x0);
  }
  UnityEngine_UI_Image__set_preserveAspect(pUVar37,1,(MethodInfo *)0x0);
  (*(pUVar37->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,pUVar37,(pUVar37->klass->vtable)._23_set_color.method);
  if (*discordBtn == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
  pUVar39 = (UnityEngine_UI_Selectable_o *)
            UnityEngine_GameObject__GetComponent<object>(*discordBtn,MethodInfo_Button_GetComponent_Button);
  if (pUVar39 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_040e2a7c;
  UnityEngine_UI_Selectable__set_targetGraphic
            (pUVar39,(UnityEngine_UI_Graphic_o *)pUVar37,(MethodInfo *)0x0);
  uVar1 = (pUVar39->fields).m_Colors.fields.m_ColorMultiplier;
  uVar5 = (pUVar39->fields).m_Colors.fields.m_FadeDuration;
  value.fields.m_FadeDuration = (float)uVar5;
  value.fields.m_ColorMultiplier = (float)uVar1;
  pUVar25 = &(pUVar39->fields).m_Colors;
  uVar13 = (pUVar25->fields).m_SelectedColor.fields.r;
  uVar14 = (pUVar25->fields).m_SelectedColor.fields.g;
  value.fields.m_SelectedColor.fields.g = (float)uVar14;
  value.fields.m_SelectedColor.fields.r = (float)uVar13;
  pUVar25 = &(pUVar39->fields).m_Colors;
  uVar15 = (pUVar25->fields).m_SelectedColor.fields.b;
  uVar16 = (pUVar25->fields).m_SelectedColor.fields.a;
  value.fields.m_SelectedColor.fields.a = (float)uVar16;
  value.fields.m_SelectedColor.fields.b = (float)uVar15;
  pUVar25 = &(pUVar39->fields).m_Colors;
  uVar9 = (pUVar25->fields).m_DisabledColor.fields.r;
  uVar10 = (pUVar25->fields).m_DisabledColor.fields.g;
  value.fields.m_DisabledColor.fields.g = (float)uVar10;
  value.fields.m_DisabledColor.fields.r = (float)uVar9;
  pUVar25 = &(pUVar39->fields).m_Colors;
  uVar11 = (pUVar25->fields).m_DisabledColor.fields.b;
  uVar12 = (pUVar25->fields).m_DisabledColor.fields.a;
  value.fields.m_DisabledColor.fields.a = (float)uVar12;
  value.fields.m_DisabledColor.fields.b = (float)uVar11;
  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value.fields.m_NormalColor.fields.b = 1.0;
  value.fields.m_NormalColor.fields.a = 1.0;
  value.fields.m_NormalColor.fields.r = 1.0;
  value.fields.m_NormalColor.fields.g = 1.0;
  value.fields.m_HighlightedColor.fields.r = 0.85;
  value.fields.m_HighlightedColor.fields.g = 0.85;
  value.fields.m_HighlightedColor.fields.b = 1.0;
  value.fields.m_HighlightedColor.fields.a = 1.0;
  value.fields.m_PressedColor.fields._0_8_ = 0x3f3333333f333333;
  value.fields.m_PressedColor.fields.b = 0.9;
  value.fields.m_PressedColor.fields.a = 1.0;
  UnityEngine_UI_Selectable__set_colors(pUVar39,value,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar39->fields).m_CanvasGroupCache;
  pUVar40 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_040e2a7c;
  UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar40,(MethodInfo *)0x0);
  pSVar31 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  SVar26 = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar32 = System_Type__GetTypeFromHandle(SVar26,(MethodInfo *)0x0);
  if (pSVar31 == (System_Type_array *)0x0) goto LAB_040e2a7c;
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((int)pSVar31->max_length == 0) goto LAB_040e2a81;
  pSVar31->m_Items[0] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 2) goto LAB_040e2a81;
  pSVar31->m_Items[1] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 1);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if ((uint)pSVar31->max_length < 3) goto LAB_040e2a81;
  pSVar31->m_Items[2] = pSVar32;
  il2cpp_runtime_glue(pSVar31->m_Items + 2);
  pSVar32 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar32 != (System_Type_o *)0x0) {
    lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
    if (lVar33 == 0) goto LAB_040e2a86;
  }
  if (3 < (uint)pSVar31->max_length) {
    pSVar31->m_Items[3] = pSVar32;
    il2cpp_runtime_glue(pSVar31->m_Items + 3);
    pSVar32 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar32 != (System_Type_o *)0x0) {
      lVar33 = il2cpp_runtime_glue(pSVar32,(((pSVar31->obj).klass)->_1).element_class);
      if (lVar33 == 0) {
LAB_040e2a86:
        uVar41 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar41,0);
      }
    }
    if (4 < (uint)pSVar31->max_length) {
      pSVar31->m_Items[4] = pSVar32;
      il2cpp_runtime_glue(pSVar31->m_Items + 4,pSVar32);
      pUVar30 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(pUVar30,"GoogleOAuthButton",pSVar31,(MethodInfo *)0x0);
      *googleBtn = pUVar30;
      il2cpp_runtime_glue(googleBtn);
      if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
        pUVar34 = UnityEngine_GameObject__get_transform(*googleBtn,(MethodInfo *)0x0);
        if (*row != (UnityEngine_GameObject_o *)0x0) {
          pUVar35 = UnityEngine_GameObject__get_transform(*row,(MethodInfo *)0x0);
          if (pUVar34 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar34,pUVar35,0,(MethodInfo *)0x0);
            if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
              pIVar36 = UnityEngine_GameObject__GetComponent<object>(*googleBtn,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar36 != (Il2CppObject *)0x0) {
                (*pIVar36->klass->vtable[0x24].methodPtr)
                          (0x42180000,pIVar36,pIVar36->klass->vtable[0x24].method);
                (*pIVar36->klass->vtable[0x26].methodPtr)
                          (0x42180000,pIVar36,pIVar36->klass->vtable[0x26].method);
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                texture = (UnityEngine_Texture2D_o *)
                          ApplicationManagers_ResourceManager__LoadAsset
                                    (pSVar3,"Icons/Navigation/GoogleIcon",1,(MethodInfo *)0x0);
                if ((texture != (UnityEngine_Texture2D_o *)0x0) && (texture->klass != TypeInfo_Texture2D))
                goto LAB_040e2a95;
                if (*googleBtn == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2a7c;
                pUVar37 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent<object>(*googleBtn,MethodInfo_Image_GetComponent_Image);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar27 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar27 == '\0') {
                  if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040e2a7c;
                }
                else {
                  if (texture == (UnityEngine_Texture2D_o *)0x0) goto LAB_040e2a7c;
                  iVar28 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                     (texture,(texture->klass->vtable)._5_get_width.method);
                  iVar29 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                  auVar8._4_4_ = (float)iVar29;
                  auVar8._0_4_ = (float)iVar28;
                  auVar8._8_8_ = 0;
                  pUVar38 = UnityEngine_Sprite__Create
                                      (texture,(UnityEngine_Rect_o)(auVar8 << 0x40),
                                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040e2a7c;
                  UnityEngine_UI_Image__set_sprite(pUVar37,pUVar38,(MethodInfo *)0x0);
                }
                UnityEngine_UI_Image__set_preserveAspect(pUVar37,1,(MethodInfo *)0x0);
                (*(pUVar37->klass->vtable)._23_set_color.methodPtr)
                          (0x3f800000,0x3f800000,pUVar37,
                           (pUVar37->klass->vtable)._23_set_color.method);
                if (*googleBtn != (UnityEngine_GameObject_o *)0x0) {
                  pUVar39 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent<object>(*googleBtn,MethodInfo_Button_GetComponent_Button);
                  if (pUVar39 != (UnityEngine_UI_Selectable_o *)0x0) {
                    UnityEngine_UI_Selectable__set_targetGraphic
                              (pUVar39,(UnityEngine_UI_Graphic_o *)pUVar37,(MethodInfo *)0x0);
                    uVar2 = (pUVar39->fields).m_Colors.fields.m_ColorMultiplier;
                    uVar6 = (pUVar39->fields).m_Colors.fields.m_FadeDuration;
                    value_00.fields.m_FadeDuration = (float)uVar6;
                    value_00.fields.m_ColorMultiplier = (float)uVar2;
                    pUVar25 = &(pUVar39->fields).m_Colors;
                    uVar21 = (pUVar25->fields).m_SelectedColor.fields.r;
                    uVar22 = (pUVar25->fields).m_SelectedColor.fields.g;
                    value_00.fields.m_SelectedColor.fields.g = (float)uVar22;
                    value_00.fields.m_SelectedColor.fields.r = (float)uVar21;
                    pUVar25 = &(pUVar39->fields).m_Colors;
                    uVar23 = (pUVar25->fields).m_SelectedColor.fields.b;
                    uVar24 = (pUVar25->fields).m_SelectedColor.fields.a;
                    value_00.fields.m_SelectedColor.fields.a = (float)uVar24;
                    value_00.fields.m_SelectedColor.fields.b = (float)uVar23;
                    pUVar25 = &(pUVar39->fields).m_Colors;
                    uVar17 = (pUVar25->fields).m_DisabledColor.fields.r;
                    uVar18 = (pUVar25->fields).m_DisabledColor.fields.g;
                    value_00.fields.m_DisabledColor.fields.g = (float)uVar18;
                    value_00.fields.m_DisabledColor.fields.r = (float)uVar17;
                    pUVar25 = &(pUVar39->fields).m_Colors;
                    uVar19 = (pUVar25->fields).m_DisabledColor.fields.b;
                    uVar20 = (pUVar25->fields).m_DisabledColor.fields.a;
                    value_00.fields.m_DisabledColor.fields.a = (float)uVar20;
                    value_00.fields.m_DisabledColor.fields.b = (float)uVar19;
                    if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    value_00.fields.m_NormalColor.fields.b = 1.0;
                    value_00.fields.m_NormalColor.fields.a = 1.0;
                    value_00.fields.m_NormalColor.fields.r = 1.0;
                    value_00.fields.m_NormalColor.fields.g = 1.0;
                    value_00.fields.m_HighlightedColor.fields.r = 0.85;
                    value_00.fields.m_HighlightedColor.fields.g = 1.0;
                    value_00.fields.m_HighlightedColor.fields.b = 0.85;
                    value_00.fields.m_HighlightedColor.fields.a = 1.0;
                    value_00.fields.m_PressedColor.fields._0_8_ = 0x3f6666663f333333;
                    value_00.fields.m_PressedColor.fields.b = 0.7;
                    value_00.fields.m_PressedColor.fields.a = 1.0;
                    UnityEngine_UI_Selectable__set_colors(pUVar39,value_00,(MethodInfo *)0x0);
                    pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar39->fields).m_CanvasGroupCache
                    ;
                    pUVar40 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar40,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_040e2a7c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_040e2a81:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$GetInput
// il2cpp: UnityEngine_UI_InputField_o* UI_AccountPanel__GetInput (UnityEngine_GameObject_o* inputSettingGO, const MethodInfo* method);
// 0x40e2aa0

UnityEngine_UI_InputField_o *
UI_AccountPanel__GetInput(UnityEngine_GameObject_o *inputSettingGO,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_UI_InputField_o *pUVar2;
  
  if (DAT_0570479f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570479f = '\x01';
  }
  if (inputSettingGO != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>(inputSettingGO,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar2 = (UnityEngine_UI_InputField_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_040e2b27;
      pUVar2 = x[2].monitor;
    }
    return pUVar2;
  }
LAB_040e2b27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$ApplySubtleButtonStyle
// il2cpp: void UI_AccountPanel__ApplySubtleButtonStyle (UnityEngine_GameObject_o* buttonGO, const MethodInfo* method);
// 0x40e19e0

/* WARNING: Type propagation algorithm not settling */

void UI_AccountPanel__ApplySubtleButtonStyle(UnityEngine_GameObject_o *buttonGO,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Object_c *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  UnityEngine_UI_ColorBlock_o value;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool_conflict bVar26;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Selectable_o *__this;
  undefined4 uVar27;
  undefined4 in_XMM1_Da;
  
  if (DAT_057047a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047a0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar26 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                     );
  if ((char)bVar26 == '\0') {
    if (buttonGO == (UnityEngine_GameObject_o *)0x0) {
LAB_040e1ce5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(buttonGO,MethodInfo_Image_GetComponent_Image);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar26 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar26 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_040e1ce5;
      pUVar7 = x->klass;
      uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
      uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
      uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
      uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
      uVar8._6_1_ = pUVar7[1]._2.rank;
      uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
      uVar27 = (**(code **)&pUVar7[1]._2.field_count)(x,uVar8);
      pUVar7 = x->klass;
      uVar9._0_2_ = pUVar7[1]._2.interfaces_count;
      uVar9._2_2_ = pUVar7[1]._2.interface_offsets_count;
      uVar9._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
      uVar9._5_1_ = pUVar7[1]._2.genericRecursionDepth;
      uVar9._6_1_ = pUVar7[1]._2.rank;
      uVar9._7_1_ = pUVar7[1]._2.minimumAlignment;
      (**(code **)&pUVar7[1]._2.field_count)(x,uVar9);
      pUVar7 = x->klass;
      uVar10._0_2_ = pUVar7[1]._2.interfaces_count;
      uVar10._2_2_ = pUVar7[1]._2.interface_offsets_count;
      uVar10._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
      uVar10._5_1_ = pUVar7[1]._2.genericRecursionDepth;
      uVar10._6_1_ = pUVar7[1]._2.rank;
      uVar10._7_1_ = pUVar7[1]._2.minimumAlignment;
      (**(code **)&pUVar7[1]._2.field_count)(x,uVar10);
      (**(code **)&x->klass[1]._2.naturalAligment)
                (uVar27,in_XMM1_Da,x,x->klass[1].vtable._0_Equals.methodPtr);
    }
    __this = (UnityEngine_UI_Selectable_o *)
             UnityEngine_GameObject__GetComponent<object>(buttonGO,MethodInfo_Button_GetComponent_Button);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar26 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                       );
    if ((char)bVar26 != '\0') {
      if (__this == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_040e1ce5;
      pUVar1 = &(__this->fields).m_Colors;
      uVar4 = (pUVar1->fields).m_NormalColor.fields.r;
      uVar11 = (pUVar1->fields).m_NormalColor.fields.g;
      value.fields.m_NormalColor.fields.g = (float)uVar11;
      value.fields.m_NormalColor.fields.r = (float)uVar4;
      uVar2 = (__this->fields).m_Colors.fields.m_NormalColor.fields.b;
      pUVar1 = &(__this->fields).m_Colors;
      uVar5 = (pUVar1->fields).m_HighlightedColor.fields.r;
      uVar12 = (pUVar1->fields).m_HighlightedColor.fields.g;
      value.fields.m_HighlightedColor.fields.g = (float)uVar12;
      value.fields.m_HighlightedColor.fields.r = (float)uVar5;
      uVar3 = (__this->fields).m_Colors.fields.m_HighlightedColor.fields.b;
      uVar6 = (__this->fields).m_Colors.fields.m_ColorMultiplier;
      uVar13 = (__this->fields).m_Colors.fields.m_FadeDuration;
      value.fields.m_FadeDuration = (float)uVar13;
      value.fields.m_ColorMultiplier = (float)uVar6;
      pUVar1 = &(__this->fields).m_Colors;
      uVar14 = (pUVar1->fields).m_DisabledColor.fields.r;
      uVar15 = (pUVar1->fields).m_DisabledColor.fields.g;
      value.fields.m_DisabledColor.fields.g = (float)uVar15;
      value.fields.m_DisabledColor.fields.r = (float)uVar14;
      pUVar1 = &(__this->fields).m_Colors;
      uVar16 = (pUVar1->fields).m_DisabledColor.fields.b;
      uVar17 = (pUVar1->fields).m_DisabledColor.fields.a;
      value.fields.m_DisabledColor.fields.a = (float)uVar17;
      value.fields.m_DisabledColor.fields.b = (float)uVar16;
      pUVar1 = &(__this->fields).m_Colors;
      uVar18 = (pUVar1->fields).m_SelectedColor.fields.r;
      uVar19 = (pUVar1->fields).m_SelectedColor.fields.g;
      value.fields.m_SelectedColor.fields.g = (float)uVar19;
      value.fields.m_SelectedColor.fields.r = (float)uVar18;
      pUVar1 = &(__this->fields).m_Colors;
      uVar20 = (pUVar1->fields).m_SelectedColor.fields.b;
      uVar21 = (pUVar1->fields).m_SelectedColor.fields.a;
      value.fields.m_SelectedColor.fields.a = (float)uVar21;
      value.fields.m_SelectedColor.fields.b = (float)uVar20;
      pUVar1 = &(__this->fields).m_Colors;
      uVar22 = (pUVar1->fields).m_PressedColor.fields.r;
      uVar23 = (pUVar1->fields).m_PressedColor.fields.g;
      value.fields.m_PressedColor.fields.g = (float)uVar23;
      value.fields.m_PressedColor.fields.r = (float)uVar22;
      pUVar1 = &(__this->fields).m_Colors;
      uVar24 = (pUVar1->fields).m_PressedColor.fields.b;
      uVar25 = (pUVar1->fields).m_PressedColor.fields.a;
      value.fields.m_PressedColor.fields.a = (float)uVar25;
      value.fields.m_PressedColor.fields.b = (float)uVar24;
      if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value.fields.m_NormalColor.fields.a = 0.35;
      value.fields.m_NormalColor.fields.b = (float)uVar2;
      value.fields.m_HighlightedColor.fields.a = 0.7;
      value.fields.m_HighlightedColor.fields.b = (float)uVar3;
      UnityEngine_UI_Selectable__set_colors(__this,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.AccountPanel$$AddOAuthButtonIcon
// il2cpp: void UI_AccountPanel__AddOAuthButtonIcon (UnityEngine_GameObject_o* buttonGO, System_String_o* resourcePath, const MethodInfo* method);
// 0x40e2f10

void UI_AccountPanel__AddOAuthButtonIcon
               (UnityEngine_GameObject_o *buttonGO,System_String_o *resourcePath,MethodInfo *method)

{
  System_String_o *path;
  Il2CppMethodPointer vtable_dispatch;
  undefined1 auVar1 [16];
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this;
  UnityEngine_UI_ContentSizeFitter_o *__this_00;
  Il2CppObject *pIVar13;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_Sprite_o *value;
  undefined8 uVar14;
  
  if (DAT_057047a1 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&TypeRef_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_HorizontalLayoutGroup);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"OAuthContent");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"OAuthIcon");
    DAT_057047a1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  texture = (UnityEngine_Texture2D_o *)
            ApplicationManagers_ResourceManager__LoadAsset(path,resourcePath,1,(MethodInfo *)0x0);
  if ((texture != (UnityEngine_Texture2D_o *)0x0) && (texture->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(texture);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if ((buttonGO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pUVar7 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_040e383e;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"OAuthContent",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      SVar2 = TypeRef_RectTransform;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      if (pSVar8 == (System_Type_array *)0x0) goto LAB_040e383e;
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0
         )) goto LAB_040e3850;
      if ((int)pSVar8->max_length == 0) goto LAB_040e3843;
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_glue(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0
         )) goto LAB_040e3850;
      if ((uint)pSVar8->max_length < 2) goto LAB_040e3843;
      pSVar8->m_Items[1] = pSVar9;
      il2cpp_runtime_glue(pSVar8->m_Items + 1);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0
         )) goto LAB_040e3850;
      if ((uint)pSVar8->max_length < 3) goto LAB_040e3843;
      pSVar8->m_Items[2] = pSVar9;
      il2cpp_runtime_glue(pSVar8->m_Items + 2,pSVar9);
      pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(pUVar11,"OAuthContent",pSVar8,(MethodInfo *)0x0);
      if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e383e;
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
      parent = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_040e383e;
      UnityEngine_Transform__SetParent(pUVar7,parent,0,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
      pUVar12 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040e383e;
      UnityEngine_RectTransform__set_anchorMin
                (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax
                (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar12,(UnityEngine_Vector2_o)
                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar12,(UnityEngine_Vector2_o)
                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
      __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      if (__this == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_040e383e;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this,8.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this,4,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                (__this,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                (__this,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                (__this,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                (__this,0,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (__this_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto LAB_040e383e;
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_00,2,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040e383e;
      UnityEngine_Transform__SetParent(pUVar6,pUVar7,0,(MethodInfo *)0x0);
    }
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__Find(pUVar7,"OAuthIcon",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
      pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      SVar2 = TypeRef_RectTransform;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      if (pSVar8 != (System_Type_array *)0x0) {
        if ((pSVar9 != (System_Type_o *)0x0) &&
           (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
           lVar10 == 0)) {
LAB_040e3850:
          uVar14 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar14,0);
        }
        if ((int)pSVar8->max_length != 0) {
          pSVar8->m_Items[0] = pSVar9;
          il2cpp_runtime_glue(pSVar8->m_Items);
          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if ((pSVar9 != (System_Type_o *)0x0) &&
             (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
             lVar10 == 0)) goto LAB_040e3850;
          if (1 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[1] = pSVar9;
            il2cpp_runtime_glue(pSVar8->m_Items + 1);
            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if ((pSVar9 != (System_Type_o *)0x0) &&
               (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
               lVar10 == 0)) goto LAB_040e3850;
            if (2 < (uint)pSVar8->max_length) {
              pSVar8->m_Items[2] = pSVar9;
              il2cpp_runtime_glue(pSVar8->m_Items + 2,pSVar9);
              pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor(pUVar11,"OAuthIcon",pSVar8,(MethodInfo *)0x0);
              if ((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar6 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar6,pUVar7,0,(MethodInfo *)0x0);
                pUVar6 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar6,0,(MethodInfo *)0x0);
                  pUVar12 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                  if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_pivot
                              (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    if (DAT_056fe093 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector2);
                      DAT_056fe093 = '\x01';
                    }
                    UnityEngine_RectTransform__set_anchoredPosition
                              (pUVar12,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_sizeDelta
                              (pUVar12,(UnityEngine_Vector2_o)0x41f0000041f00000,(MethodInfo *)0x0);
                    pIVar13 = UnityEngine_GameObject__AddComponent<object>(pUVar11,MethodInfo_LayoutElement_AddComponent_LayoutElement);
                    if (pIVar13 != (Il2CppObject *)0x0) {
                      (*pIVar13->klass->vtable[0x24].methodPtr)
                                (0x41f00000,pIVar13,pIVar13->klass->vtable[0x24].method);
                      (*pIVar13->klass->vtable[0x26].methodPtr)
                                (0x41f00000,pIVar13,pIVar13->klass->vtable[0x26].method);
                      __this_01 = (UnityEngine_UI_Image_o *)
                                  UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_Image_GetComponent_Image)
                      ;
                      if (texture != (UnityEngine_Texture2D_o *)0x0) {
                        iVar4 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                          (texture,(texture->klass->vtable)._5_get_width.method);
                        iVar5 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                        auVar1._4_4_ = (float)iVar5;
                        auVar1._0_4_ = (float)iVar4;
                        auVar1._8_8_ = 0;
                        value = UnityEngine_Sprite__Create
                                          (texture,(UnityEngine_Rect_o)(auVar1 << 0x40),
                                           (UnityEngine_Vector2_o)0x3f0000003f000000,
                                           (MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                          UnityEngine_UI_Image__set_sprite(__this_01,value,(MethodInfo *)0x0);
                          UnityEngine_UI_Image__set_preserveAspect(__this_01,1,(MethodInfo *)0x0);
                          vtable_dispatch =
                               (__this_01->klass->vtable)._25_set_raycastTarget.methodPtr;
                          (*vtable_dispatch)
                                    (__this_01,0,
                                     (__this_01->klass->vtable)._25_set_raycastTarget.method,
                                     vtable_dispatch);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_040e383e;
            }
          }
        }
LAB_040e3843:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_040e383e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$ConfigureOAuthOnlyButtonText
// il2cpp: void UI_AccountPanel__ConfigureOAuthOnlyButtonText (UnityEngine_GameObject_o* buttonGO, const MethodInfo* method);
// 0x40e3860

void UI_AccountPanel__ConfigureOAuthOnlyButtonText
               (UnityEngine_GameObject_o *buttonGO,MethodInfo *method)

{
  Il2CppClass **vtable_dispatch;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  undefined8 extraout_RDX;
  
  if (DAT_057047a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Text");
    DAT_057047a2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)buttonGO,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return;
  }
  if ((buttonGO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(buttonGO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
      if (__this != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(__this,3,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_horizontalOverflow(__this,1,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_verticalOverflow(__this,0,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_resizeTextForBestFit(__this,0,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_fontSize(__this,0x12,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_supportRichText(__this,0,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040e3b68;
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_00,(UnityEngine_Vector2_o)0x4220000000000000,(MethodInfo *)0x0);
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (__this_00,
                     (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e3b68;
          x = (UnityEngine_Object_o *)
              UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_LayoutElement_AddComponent_LayoutElement);
        }
        if (x != (UnityEngine_Object_o *)0x0) {
          (*(code *)x->klass[2]._1.castClass)(0xbf800000,x,x->klass[2]._1.declaringType);
          (*x->klass[2]._1.events)(0xbf800000,x,x->klass[2]._1.properties);
          vtable_dispatch = x->klass[2]._2.typeHierarchy;
          (*(code *)vtable_dispatch)
                    (0,x,x->klass[2]._2.unity_user_data,extraout_RDX,vtable_dispatch);
          return;
        }
      }
    }
  }
LAB_040e3b68:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$ConfigurePasswordInput
// il2cpp: void UI_AccountPanel__ConfigurePasswordInput (UnityEngine_GameObject_o* inputSettingGO, const MethodInfo* method);
// 0x40e1cf0

void UI_AccountPanel__ConfigurePasswordInput
               (UnityEngine_GameObject_o *inputSettingGO,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_InputField_o *__this;
  MethodInfo *method_00;
  
  if (DAT_057047a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047a3 = '\x01';
  }
  __this = UI_AccountPanel__GetInput(inputSettingGO,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (__this != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_contentType(__this,7,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_inputType(__this,2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    UnityEngine_UI_InputField__ForceLabelUpdate(__this,(MethodInfo *)0x0);
    UI_AccountPanel__AddPasswordToggle(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$AddPasswordToggle
// il2cpp: void UI_AccountPanel__AddPasswordToggle (UnityEngine_UI_InputField_o* field, const MethodInfo* method);
// 0x40e3b70

void UI_AccountPanel__AddPasswordToggle(UnityEngine_UI_InputField_o *field,MethodInfo *method)

{
  void **ppvVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  UnityEngine_Events_UnityEvent_o *__this;
  UnityEngine_Vector2_o UVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  UnityEngine_UI_ColorBlock_o *pUVar14;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar15;
  int iVar16;
  int iVar17;
  Il2CppObject *__this_00;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Texture2D_o *texture_00;
  Il2CppClass *pIVar18;
  UnityEngine_Sprite_o *pUVar19;
  System_Type_array *components;
  System_Type_o *pSVar20;
  long lVar21;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar22;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar23;
  Il2CppClass *pIVar24;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar25;
  Il2CppObject *pIVar26;
  float fVar27;
  UnityEngine_Rect_o UVar28;
  float fStack_d4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  
  if (DAT_057047a4 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_Load_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddPasswordToggle_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass75_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Placeholder");
    il2cpp_init_method_metadata(&"PasswordToggle");
    il2cpp_init_method_metadata(&"UI/Icons/Game/NoSpectateIcon");
    il2cpp_init_method_metadata(&"UI/Icons/Game/SpectateIcon");
    DAT_057047a4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass75_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    ppvVar1 = &__this_00[1].monitor;
    __this_00[1].monitor = field;
    il2cpp_runtime_glue(ppvVar1,field);
    texture = (UnityEngine_Texture2D_o *)
              UnityEngine_Resources__Load<object>("UI/Icons/Game/NoSpectateIcon",MethodInfo_Texture2D_Load_Texture2D);
    texture_00 = (UnityEngine_Texture2D_o *)
                 UnityEngine_Resources__Load<object>("UI/Icons/Game/SpectateIcon",MethodInfo_Texture2D_Load_Texture2D);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)texture_00,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar18 = (Il2CppClass *)0x0;
    UnityEngine_Object__op_Inequality
              ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (texture == (UnityEngine_Texture2D_o *)0x0) goto LAB_040e4564;
      iVar16 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                         (texture,(texture->klass->vtable)._5_get_width.method);
      iVar17 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
      auVar6._4_4_ = (float)iVar17;
      auVar6._0_4_ = (float)iVar16;
      auVar6._8_8_ = 0;
      pIVar18 = (Il2CppClass *)
                UnityEngine_Sprite__Create
                          (texture,(UnityEngine_Rect_o)(auVar6 << 0x40),
                           (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    }
    __this_00[3].klass = pIVar18;
    il2cpp_runtime_glue(__this_00 + 3);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar19 = (UnityEngine_Sprite_o *)0x0;
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)texture_00,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (texture_00 == (UnityEngine_Texture2D_o *)0x0) goto LAB_040e4564;
      iVar16 = (*(texture_00->klass->vtable)._5_get_width.methodPtr)
                         (texture_00,(texture_00->klass->vtable)._5_get_width.method);
      iVar17 = (*(texture_00->klass->vtable)._7_get_height.methodPtr)(texture_00);
      auVar7._4_4_ = (float)iVar17;
      auVar7._0_4_ = (float)iVar16;
      auVar7._8_8_ = 0;
      pUVar19 = UnityEngine_Sprite__Create
                          (texture_00,(UnityEngine_Rect_o)(auVar7 << 0x40),
                           (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    }
    __this_00[2].monitor = pUVar19;
    il2cpp_runtime_glue(&__this_00[2].monitor);
    pIVar18 = __this_00[3].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    pIVar26 = (Il2CppObject *)&__this_00[2].monitor;
    if ((char)bVar15 != '\0') {
      pIVar26 = __this_00 + 3;
    }
    pIVar18 = pIVar26->klass;
    components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar20 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar20 != (System_Type_o *)0x0) &&
         (lVar21 = il2cpp_runtime_glue(pSVar20,(((components->obj).klass)->_1).element_class),
         lVar21 == 0)) {
LAB_040e456e:
        uVar25 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar25,0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar20;
        il2cpp_runtime_glue(components->m_Items);
        pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Type_o *)0x0) &&
           (lVar21 = il2cpp_runtime_glue(pSVar20,(((components->obj).klass)->_1).element_class),
           lVar21 == 0)) goto LAB_040e456e;
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar20;
          il2cpp_runtime_glue(components->m_Items + 1);
          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar20 != (System_Type_o *)0x0) &&
             (lVar21 = il2cpp_runtime_glue(pSVar20,(((components->obj).klass)->_1).element_class),
             lVar21 == 0)) goto LAB_040e456e;
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar20;
            il2cpp_runtime_glue(components->m_Items + 2);
            pSVar20 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if ((pSVar20 != (System_Type_o *)0x0) &&
               (lVar21 = il2cpp_runtime_glue(pSVar20,(((components->obj).klass)->_1).element_class),
               lVar21 == 0)) goto LAB_040e456e;
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar20;
              il2cpp_runtime_glue(components->m_Items + 3,pSVar20);
              __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor(__this_01,"PasswordToggle",components,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                pUVar22 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                if ((*ppvVar1 != (UnityEngine_Component_o *)0x0) &&
                   (parent = UnityEngine_Component__get_transform(*ppvVar1,(MethodInfo *)0x0),
                   pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent(pUVar22,parent,0,(MethodInfo *)0x0);
                  if ((*ppvVar1 != (UnityEngine_Component_o *)0x0) &&
                     (pUVar23 = (UnityEngine_RectTransform_o *)
                                UnityEngine_Component__GetComponent<object>(*ppvVar1,MethodInfo_RectTransform_GetComponent_RectTransform),
                     pUVar23 != (UnityEngine_RectTransform_o *)0x0)) {
                    UVar28 = UnityEngine_RectTransform__get_rect(pUVar23,(MethodInfo *)0x0);
                    pUVar23 = (UnityEngine_RectTransform_o *)
                              UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
                    if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                      fStack_d4 = UVar28.fields.m_Height;
                      if (40.0 <= fStack_d4) {
                        fStack_d4 = 40.0;
                      }
                      fVar27 = (float)(~-(uint)(0.0 < fStack_d4) & 0x42200000 |
                                      (uint)fStack_d4 & -(uint)(0.0 < fStack_d4));
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0
                                );
                      UnityEngine_RectTransform__set_anchorMax
                                (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0
                                );
                      UnityEngine_RectTransform__set_pivot
                                (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0
                                );
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar23,(UnityEngine_Vector2_o)0xc0800000,(MethodInfo *)0x0);
                      UVar5.fields.y = fVar27;
                      UVar5.fields.x = fVar27;
                      UnityEngine_RectTransform__set_sizeDelta(pUVar23,UVar5,(MethodInfo *)0x0);
                      pIVar24 = (Il2CppClass *)
                                UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Image_GetComponent_Image)
                      ;
                      pIVar26 = __this_00 + 2;
                      __this_00[2].klass = pIVar24;
                      il2cpp_runtime_glue(pIVar26,pIVar24);
                      if (__this_00[2].klass != (Il2CppClass *)0x0) {
                        UnityEngine_UI_Image__set_sprite
                                  ((UnityEngine_UI_Image_o *)__this_00[2].klass,
                                   (UnityEngine_Sprite_o *)pIVar18,(MethodInfo *)0x0);
                        if (pIVar26->klass != (Il2CppClass *)0x0) {
                          UnityEngine_UI_Image__set_preserveAspect
                                    ((UnityEngine_UI_Image_o *)pIVar26->klass,1,(MethodInfo *)0x0);
                          pIVar18 = pIVar26->klass;
                          if (pIVar18 != (Il2CppClass *)0x0) {
                            pvVar3 = (pIVar18->_1).image;
                            (**(code **)((long)pvVar3 + 0x2a8))
                                      (0x3f800000,0x3f800000,pIVar18,
                                       *(undefined8 *)((long)pvVar3 + 0x2b0));
                            __this_02 = (UnityEngine_UI_Selectable_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (__this_01,MethodInfo_Button_GetComponent_Button);
                            if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                              UnityEngine_UI_Selectable__set_targetGraphic
                                        (__this_02,(UnityEngine_UI_Graphic_o *)pIVar26->klass,
                                         (MethodInfo *)0x0);
                              UnityEngine_UI_Selectable__set_transition
                                        (__this_02,1,(MethodInfo *)0x0);
                              uVar2 = (__this_02->fields).m_Colors.fields.m_ColorMultiplier;
                              uVar4 = (__this_02->fields).m_Colors.fields.m_FadeDuration;
                              value_00.fields.m_FadeDuration = (float)uVar4;
                              value_00.fields.m_ColorMultiplier = (float)uVar2;
                              pUVar14 = &(__this_02->fields).m_Colors;
                              uVar10 = (pUVar14->fields).m_DisabledColor.fields.r;
                              uVar11 = (pUVar14->fields).m_DisabledColor.fields.g;
                              value_00.fields.m_DisabledColor.fields.g = (float)uVar11;
                              value_00.fields.m_DisabledColor.fields.r = (float)uVar10;
                              pUVar14 = &(__this_02->fields).m_Colors;
                              uVar12 = (pUVar14->fields).m_DisabledColor.fields.b;
                              uVar13 = (pUVar14->fields).m_DisabledColor.fields.a;
                              value_00.fields.m_DisabledColor.fields.a = (float)uVar13;
                              value_00.fields.m_DisabledColor.fields.b = (float)uVar12;
                              if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              value_00.fields.m_NormalColor.fields.b = 1.0;
                              value_00.fields.m_NormalColor.fields.a = 0.65;
                              value_00.fields.m_NormalColor.fields.r = 1.0;
                              value_00.fields.m_NormalColor.fields.g = 1.0;
                              value_00.fields.m_HighlightedColor.fields.r = 1.0;
                              value_00.fields.m_HighlightedColor.fields.g = 1.0;
                              value_00.fields.m_HighlightedColor.fields.b = 1.0;
                              value_00.fields.m_HighlightedColor.fields.a = 1.0;
                              value_00.fields.m_PressedColor.fields.r = 0.8;
                              value_00.fields.m_PressedColor.fields.g = 0.8;
                              value_00.fields.m_PressedColor.fields.b = 0.8;
                              value_00.fields.m_PressedColor.fields.a = 1.0;
                              value_00.fields.m_SelectedColor.fields.r = 1.0;
                              value_00.fields.m_SelectedColor.fields.g = 1.0;
                              value_00.fields.m_SelectedColor.fields.b = 1.0;
                              value_00.fields.m_SelectedColor.fields.a = 1.0;
                              UnityEngine_UI_Selectable__set_colors
                                        (__this_02,value_00,(MethodInfo *)0x0);
                              lVar21 = *(long *)&(__this_02->fields).m_Navigation.fields.
                                                 m_WrapAround;
                              uVar25 = *(undefined8 *)
                                        ((long)&(__this_02->fields).m_Navigation.fields.m_SelectOnUp
                                        + 4);
                              uVar8 = *(undefined8 *)
                                       ((long)&(__this_02->fields).m_Navigation.fields.
                                               m_SelectOnDown + 4);
                              uVar9 = *(undefined8 *)
                                       ((long)&(__this_02->fields).m_Navigation.fields.
                                               m_SelectOnLeft + 4);
                              uStack_a8 = (undefined4)((ulong)lVar21 >> 0x20);
                              uStack_a4 = (undefined4)uVar25;
                              uStack_a0 = (undefined4)((ulong)uVar25 >> 0x20);
                              uStack_9c = (undefined4)uVar8;
                              uStack_98 = (undefined4)((ulong)uVar8 >> 0x20);
                              uStack_94 = (undefined4)uVar9;
                              uStack_90 = (undefined4)((ulong)uVar9 >> 0x20);
                              value.fields.m_SelectOnRight._4_4_ =
                                   *(undefined4 *)
                                    ((long)&(__this_02->fields).m_Navigation.fields.m_SelectOnRight
                                    + 4);
                              value.fields.m_SelectOnRight._0_4_ = uStack_90;
                              lVar21 = lVar21 << 0x20;
                              value.fields.m_SelectOnUp._4_4_ = uStack_a4;
                              value.fields.m_SelectOnUp._0_4_ = uStack_a8;
                              value.fields.m_SelectOnDown._4_4_ = uStack_9c;
                              value.fields.m_SelectOnDown._0_4_ = uStack_a0;
                              value.fields.m_SelectOnLeft._4_4_ = uStack_94;
                              value.fields.m_SelectOnLeft._0_4_ = uStack_98;
                              value.fields.m_Mode = (int)lVar21;
                              value.fields.m_WrapAround = (int)((ulong)lVar21 >> 0x20);
                              UnityEngine_UI_Selectable__set_navigation
                                        (__this_02,value,(MethodInfo *)0x0);
                              if ((*ppvVar1 != (UnityEngine_Component_o *)0x0) &&
                                 (pUVar22 = UnityEngine_Component__get_transform
                                                      (*ppvVar1,(MethodInfo *)0x0),
                                 pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                                pUVar22 = UnityEngine_Transform__Find
                                                    (pUVar22,"Text",(MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                bVar15 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)pUVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if ((char)bVar15 != '\0') {
                                  if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_040e4564;
                                  pUVar23 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_Component__GetComponent<object>
                                                      ((UnityEngine_Component_o *)pUVar22,
                                                       MethodInfo_RectTransform_GetComponent_RectTransform);
                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                    il2cpp_init_class();
                                  }
                                  bVar15 = UnityEngine_Object__op_Inequality
                                                     ((UnityEngine_Object_o *)pUVar23,
                                                      (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                                  ;
                                  if ((char)bVar15 != '\0') {
                                    if (pUVar23 == (UnityEngine_RectTransform_o *)0x0)
                                    goto LAB_040e4564;
                                    UVar5 = UnityEngine_RectTransform__get_offsetMax
                                                      (pUVar23,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_offsetMax
                                              (pUVar23,(UnityEngine_Vector2_o)
                                                       (CONCAT44(UVar5.fields.y,fVar27 + 8.0) ^
                                                       0x80000000),(MethodInfo *)0x0);
                                  }
                                }
                                if ((*ppvVar1 != (UnityEngine_Component_o *)0x0) &&
                                   (pUVar22 = UnityEngine_Component__get_transform
                                                        (*ppvVar1,(MethodInfo *)0x0),
                                   pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                                  pUVar22 = UnityEngine_Transform__Find
                                                      (pUVar22,"Placeholder",(MethodInfo *)0x0);
                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                    il2cpp_init_class();
                                  }
                                  bVar15 = UnityEngine_Object__op_Inequality
                                                     ((UnityEngine_Object_o *)pUVar22,
                                                      (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                                  ;
                                  if ((char)bVar15 != '\0') {
                                    if (pUVar22 == (UnityEngine_Transform_o *)0x0)
                                    goto LAB_040e4564;
                                    pUVar23 = (UnityEngine_RectTransform_o *)
                                              UnityEngine_Component__GetComponent<object>
                                                        ((UnityEngine_Component_o *)pUVar22,
                                                         MethodInfo_RectTransform_GetComponent_RectTransform);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    bVar15 = UnityEngine_Object__op_Inequality
                                                       ((UnityEngine_Object_o *)pUVar23,
                                                        (UnityEngine_Object_o *)0x0,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar15 != '\0') {
                                      if (pUVar23 == (UnityEngine_RectTransform_o *)0x0)
                                      goto LAB_040e4564;
                                      UVar5 = UnityEngine_RectTransform__get_offsetMax
                                                        (pUVar23,(MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_offsetMax
                                                (pUVar23,(UnityEngine_Vector2_o)
                                                         (CONCAT44(UVar5.fields.y,fVar27 + 8.0) ^
                                                         0x80000000),(MethodInfo *)0x0);
                                    }
                                  }
                                  *(undefined1 *)&__this_00[1].klass = 0;
                                  __this = (UnityEngine_Events_UnityEvent_o *)
                                           (__this_02->fields).m_CanvasGroupCache;
                                  call = (UnityEngine_Events_UnityAction_o *)
                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (__this,call,(MethodInfo *)0x0);
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
              goto LAB_040e4564;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_040e4564:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$SetupTabNavigation
// il2cpp: void UI_AccountPanel__SetupTabNavigation (UnityEngine_UI_InputField_array* fields, UnityEngine_UI_Selectable_o* submit, const MethodInfo* method);
// 0x40e2b30

void UI_AccountPanel__SetupTabNavigation
               (UnityEngine_UI_InputField_array *fields,UnityEngine_UI_Selectable_o *submit,
               MethodInfo *method)

{
  UnityEngine_UI_InputField_o *__this;
  il2cpp_array_size_t iVar1;
  int iVar2;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_Navigation_o value_00;
  bool_conflict bVar3;
  uint uVar4;
  ulong uVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Object_o *x;
  UnityEngine_UI_InputField_o *pUVar7;
  ulong uVar8;
  undefined8 local_98;
  UnityEngine_UI_InputField_o *pUStack_90;
  UnityEngine_UI_InputField_o *local_88;
  UnityEngine_UI_Selectable_o *pUStack_80;
  UnityEngine_UI_Selectable_o *local_78;
  undefined8 local_68;
  UnityEngine_UI_Selectable_o *pUStack_60;
  UnityEngine_UI_Selectable_o *local_58;
  UnityEngine_UI_Selectable_o *pUStack_50;
  UnityEngine_UI_Selectable_o *local_48;
  UnityEngine_UI_InputField_array *local_40;
  UnityEngine_UI_InputField_o *local_38;
  
  if (DAT_057047a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputFieldKeyboardNav_AddComponent_InputFieldKey);
    il2cpp_init_method_metadata(&MethodInfo_InputFieldKeyboardNav_GetComponent_InputFieldKey);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047a5 = '\x01';
  }
  local_88 = (UnityEngine_UI_InputField_o *)0x0;
  pUStack_80 = (UnityEngine_UI_Selectable_o *)0x0;
  pUStack_90 = (UnityEngine_UI_InputField_o *)0x0;
  local_78 = (UnityEngine_UI_Selectable_o *)0x0;
  local_58 = (UnityEngine_UI_Selectable_o *)0x0;
  pUStack_50 = (UnityEngine_UI_Selectable_o *)0x0;
  local_68 = 0;
  pUStack_60 = (UnityEngine_UI_Selectable_o *)0x0;
  local_48 = (UnityEngine_UI_Selectable_o *)0x0;
  if (fields != (UnityEngine_UI_InputField_array *)0x0) {
    if (0 < (int)fields->max_length) {
      uVar5 = fields->max_length & 0xffffffff;
      uVar8 = 0;
      local_40 = fields;
      local_38 = (UnityEngine_UI_InputField_o *)submit;
      do {
        if (uVar5 <= uVar8) goto LAB_040e2ef8;
        __this = fields->m_Items[uVar8];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (__this == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e2efd;
          bVar3 = (__this->fields).m_Navigation.fields.m_WrapAround;
          pUStack_90 = (UnityEngine_UI_InputField_o *)
                       (__this->fields).m_Navigation.fields.m_SelectOnUp;
          local_88 = (UnityEngine_UI_InputField_o *)
                     (__this->fields).m_Navigation.fields.m_SelectOnDown;
          pUStack_80 = (__this->fields).m_Navigation.fields.m_SelectOnLeft;
          local_78 = (__this->fields).m_Navigation.fields.m_SelectOnRight;
          iVar2 = (int)uVar8;
          if (uVar8 == 0) {
            pUStack_90 = (UnityEngine_UI_InputField_o *)0x0;
          }
          else {
            if ((uint)fields->max_length <= iVar2 - 1U) goto LAB_040e2ef8;
            pUStack_90 = fields->m_Items[uVar8 - 1];
          }
          il2cpp_runtime_glue(&pUStack_90,pUStack_90);
          pUVar7 = (UnityEngine_UI_InputField_o *)submit;
          if ((long)uVar8 < (long)((fields->max_length << 0x20) + -0x100000000) >> 0x20) {
            if ((uint)fields->max_length <= iVar2 + 1U) goto LAB_040e2ef8;
            pUVar7 = fields->m_Items[uVar8 + 1];
          }
          local_88 = pUVar7;
          il2cpp_runtime_glue(&local_88);
          value.fields.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)pUStack_90;
          value.fields.m_Mode = 4;
          value.fields.m_WrapAround = bVar3;
          value.fields.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)local_88;
          value.fields.m_SelectOnLeft = pUStack_80;
          value.fields.m_SelectOnRight = local_78;
          UnityEngine_UI_Selectable__set_navigation
                    ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2efd;
          x = (UnityEngine_Object_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_InputFieldKeyboardNav_GetComponent_InputFieldKey);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e2efd;
            x = (UnityEngine_Object_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_InputFieldKeyboardNav_AddComponent_InputFieldKey);
          }
          uVar4 = (uint)fields->max_length;
          if ((long)uVar8 < (long)((fields->max_length << 0x20) + -0x100000000) >> 0x20) {
            if (uVar4 <= iVar2 + 1U) goto LAB_040e2ef8;
            submit = (UnityEngine_UI_Selectable_o *)fields->m_Items[uVar8 + 1];
          }
          if (uVar8 == 0) {
            pUVar7 = (UnityEngine_UI_InputField_o *)0x0;
          }
          else {
            if (uVar4 <= iVar2 - 1U) goto LAB_040e2ef8;
            pUVar7 = fields->m_Items[uVar8 - 1];
          }
          if (x == (UnityEngine_Object_o *)0x0) goto LAB_040e2efd;
          x[1].monitor = __this;
          il2cpp_runtime_glue(&x[1].monitor,__this);
          x[1].fields.m_CachedPtr = (intptr_t)submit;
          il2cpp_runtime_glue(&x[1].fields,submit);
          x[2].klass = (UnityEngine_Object_c *)pUVar7;
          il2cpp_runtime_glue(x + 2);
          fields = local_40;
          submit = (UnityEngine_UI_Selectable_o *)local_38;
        }
        uVar8 = uVar8 + 1;
        uVar4 = (uint)fields->max_length;
        uVar5 = (ulong)uVar4;
      } while ((long)uVar8 < (long)(int)uVar4);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)submit,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      if ((UnityEngine_UI_InputField_o *)submit == (UnityEngine_UI_InputField_o *)0x0)
      goto LAB_040e2efd;
      pUStack_60 = (((UnityEngine_UI_InputField_o *)submit)->fields).m_Navigation.fields.
                   m_SelectOnUp;
      local_58 = (((UnityEngine_UI_InputField_o *)submit)->fields).m_Navigation.fields.
                 m_SelectOnDown;
      pUStack_50 = (((UnityEngine_UI_InputField_o *)submit)->fields).m_Navigation.fields.
                   m_SelectOnLeft;
      local_48 = (((UnityEngine_UI_InputField_o *)submit)->fields).m_Navigation.fields.
                 m_SelectOnRight;
      local_68 = CONCAT44((((UnityEngine_UI_InputField_o *)submit)->fields).m_Navigation.fields.
                          m_WrapAround,4);
      iVar1 = fields->max_length;
      if (iVar1 == 0) {
        pUStack_60 = (UnityEngine_UI_Selectable_o *)0x0;
      }
      else {
        if ((int)iVar1 == 0) {
LAB_040e2ef8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUStack_60 = *(UnityEngine_UI_Selectable_o **)
                      ((long)fields->m_Items + ((long)((iVar1 << 0x20) + -0x100000000) >> 0x1d));
      }
      il2cpp_runtime_glue(&pUStack_60);
      value_00.fields.m_SelectOnUp = pUStack_60;
      value_00.fields.m_Mode = (undefined4)local_68;
      value_00.fields.m_WrapAround = local_68._4_4_;
      value_00.fields.m_SelectOnDown = local_58;
      value_00.fields.m_SelectOnLeft = pUStack_50;
      value_00.fields.m_SelectOnRight = local_48;
      UnityEngine_UI_Selectable__set_navigation(submit,value_00,(MethodInfo *)0x0);
    }
    return;
  }
LAB_040e2efd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$RefreshState
// il2cpp: void UI_AccountPanel__RefreshState (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40df6a0

void UI_AccountPanel__RefreshState(UI_AccountPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  byte bVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  byte bVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte local_36;
  byte local_32;
  
  if (DAT_057047a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"\x25bc");
    il2cpp_init_method_metadata(&"\x25b2");
    il2cpp_init_method_metadata(&"Offline. Go online to restore your session.");
    il2cpp_init_method_metadata(&"Complete sign-in in your browser.");
    il2cpp_init_method_metadata(&"Go Online");
    il2cpp_init_method_metadata(&"Choose a sign-in provider to continue.");
    il2cpp_init_method_metadata(&"Go Offline");
    il2cpp_init_method_metadata(&"email_password");
    il2cpp_init_method_metadata(&"Signed in as ");
    il2cpp_init_method_metadata(&"No sign-in methods are currently available.");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"(unknown)");
    DAT_057047a6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  bVar6 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
  bVar17 = (byte)bVar5;
  bVar18 = (byte)bVar6 & (bVar17 ^ 1);
  uVar7 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("email_password",(MethodInfo *)0x0);
  uVar8 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("discord",(MethodInfo *)0x0);
  uVar9 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("google",(MethodInfo *)0x0);
  local_32 = bVar17 ^ bVar18;
  bVar16 = (byte)uVar7;
  if ((bVar16 == 0) && (((__this->fields)._currentTab | 2U) == 2)) {
    (__this->fields)._currentTab = 1;
  }
  bVar14 = local_32 ^ 1;
  if (*(char *)((long)&(__this->fields)._collapsed + 1) == '\0') {
    *(byte *)&(__this->fields)._collapsed = bVar17;
  }
  bVar4 = bVar14 & bVar16;
  uVar15 = 0;
  if (bVar4 == 1) {
    uVar15 = (uint)((__this->fields)._currentTab != 2);
  }
  pUVar13 = (__this->fields)._signupTabButton;
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive(pUVar13,uVar15,(MethodInfo *)0x0);
  pUVar13 = (__this->fields)._loginTabButton;
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive(pUVar13,uVar15,(MethodInfo *)0x0);
  pUVar13 = (__this->fields)._tabSeparator;
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive(pUVar13,uVar15,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlySection;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_36 = bVar16 ^ 1;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthOnlySection;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar14 & local_36),(MethodInfo *)0x0);
  }
  local_32 = local_32 ^ 1;
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyButtons;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = (byte)uVar8 | (byte)uVar9;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthOnlyButtons;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)bVar14,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyDiscordButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthOnlyDiscordButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar8 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthOnlyGoogleButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthOnlyGoogleButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar9 & 0xff,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._loginOAuthOnlyMessage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = (__this->fields)._loginOAuthOnlyMessage;
    if (bVar14 == 0) {
      puVar10 = &"No sign-in methods are currently available.";
    }
    else if (*(char *)((long)&(__this->fields)._collapsed + 3) == '\0') {
      puVar10 = &"Choose a sign-in provider to continue.";
    }
    else {
      puVar10 = &"Complete sign-in in your browser.";
    }
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,*puVar10,(pUVar3->klass->vtable)._75_set_text.method);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._oauthCancelButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._oauthCancelButton;
    if ((*(char *)((long)&(__this->fields)._collapsed + 3) == '\0') ||
       ((char)(__this->fields)._collapsed != '\0')) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)(bVar17 ^ 1);
    }
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar15,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._signupEmailSection;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._signupEmailSection;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar7 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginEmailSection;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginEmailSection;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar7 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._signupOAuthDivider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._signupOAuthDivider;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar16 & bVar14),(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthDivider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthDivider;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar16 & bVar14),(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._signupOAuthRow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._signupOAuthRow;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)bVar14,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginOAuthRow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginOAuthRow;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar16 & bVar14),(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._signupDiscordButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._signupDiscordButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar8 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginDiscordButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginDiscordButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar8 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._signupGoogleButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._signupGoogleButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar9 & 0xff,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._loginGoogleButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar7 = 0;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar13 = (__this->fields)._loginGoogleButton;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,uVar9 & 0xff,(MethodInfo *)0x0);
  }
  pUVar13 = (__this->fields)._signupContent;
  if ((bVar4 & ((byte)(__this->fields)._collapsed ^ 1)) != 0) {
    uVar7 = (uint)((__this->fields)._currentTab == 0);
  }
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  uVar8 = 0;
  UnityEngine_GameObject__SetActive(pUVar13,uVar7,(MethodInfo *)0x0);
  pUVar13 = (__this->fields)._loginContent;
  if ((~(__this->fields)._collapsed & (uint)local_32) != 0) {
    uVar8 = (uint)((__this->fields)._currentTab == 1 | local_36);
  }
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  uVar7 = 0;
  UnityEngine_GameObject__SetActive(pUVar13,uVar8,(MethodInfo *)0x0);
  pUVar13 = (__this->fields)._forgotPasswordContent;
  if ((bVar4 & ((byte)(__this->fields)._collapsed ^ 1)) != 0) {
    uVar7 = (uint)((__this->fields)._currentTab == 2);
  }
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive(pUVar13,uVar7,(MethodInfo *)0x0);
  pUVar13 = (__this->fields)._loggedInContent;
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive
            (pUVar13,(uint)(((byte)bVar6 | bVar17) & (char)(__this->fields)._collapsed == '\0'),
             (MethodInfo *)0x0);
  pUVar13 = (__this->fields)._content;
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
  UnityEngine_GameObject__SetActive
            (pUVar13,(uint)((char)(__this->fields)._collapsed == '\0'),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._loggedInUserLabel;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar3 = (__this->fields)._loggedInUserLabel;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    pSVar11 = "(unknown)";
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
LAB_040dffaf:
    pUVar3 = (__this->fields)._onlineToggleButtonLabel;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (bVar17 == 0) {
      if (bVar18 != 0) {
        pUVar3 = (__this->fields)._loggedInUserLabel;
        if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,"Offline. Go online to restore your session.",(pUVar3->klass->vtable)._75_set_text.method);
      }
      goto LAB_040dffaf;
    }
    pUVar3 = (__this->fields)._loggedInUserLabel;
    pSVar12 = System_String__Concat("Signed in as ",pSVar11,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,pSVar12,(pUVar3->klass->vtable)._75_set_text.method);
    pUVar3 = (__this->fields)._onlineToggleButtonLabel;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = (__this->fields)._onlineToggleButtonLabel;
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
    if (bVar17 == 0) {
      puVar10 = &"Go Online";
    }
    else {
      puVar10 = &"Go Offline";
    }
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,*puVar10,(pUVar3->klass->vtable)._75_set_text.method);
  }
  pUVar3 = (__this->fields)._collapsedUserLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = (__this->fields)._collapsedUserLabel;
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
    bVar16 = (byte)(__this->fields)._collapsed;
    pUVar13 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e0135;
    UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar16 & bVar17),(MethodInfo *)0x0);
    if ((bVar16 & bVar17) != 0) {
      pUVar3 = (__this->fields)._collapsedUserLabel;
      pSVar11 = System_String__Concat("Signed in as ",pSVar11,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040e0135;
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar11,(pUVar3->klass->vtable)._75_set_text.method);
    }
  }
  pUVar3 = (__this->fields)._collapseButtonLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar3 = (__this->fields)._collapseButtonLabel;
  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
    if ((char)(__this->fields)._collapsed == '\0') {
      puVar10 = &"\x25b2";
    }
    else {
      puVar10 = &"\x25bc";
    }
    vtable_dispatch = (pUVar3->klass->vtable)._75_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar3,*puVar10,(pUVar3->klass->vtable)._75_set_text.method,vtable_dispatch);
    return;
  }
LAB_040e0135:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$SetTab
// il2cpp: void UI_AccountPanel__SetTab (UI_AccountPanel_o* __this, int32_t tab, const MethodInfo* method);
// 0x40e45e0

void UI_AccountPanel__SetTab(UI_AccountPanel_o *__this,int32_t tab,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._currentTab = tab;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,method);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$ToggleCollapsed
// il2cpp: void UI_AccountPanel__ToggleCollapsed (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4630

void UI_AccountPanel__ToggleCollapsed(UI_AccountPanel_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  
  pbVar1 = &(__this->fields)._collapsed;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  *(undefined1 *)((long)&(__this->fields)._collapsed + 1) = 1;
  UI_AccountPanel__RefreshState(__this,method);
  return;
}


// UI.AccountPanel$$HandleLoggedIn
// il2cpp: void UI_AccountPanel__HandleLoggedIn (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4650

void UI_AccountPanel__HandleLoggedIn(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  *(undefined1 *)((long)&(__this->fields)._collapsed + 3) = 0;
  *(undefined2 *)((long)&(__this->fields)._collapsed + 1) = 0;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,in_RDX);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$HandleLoggedOut
// il2cpp: void UI_AccountPanel__HandleLoggedOut (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e47a0

void UI_AccountPanel__HandleLoggedOut(UI_AccountPanel_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._collapsed + 3) = 0;
  *(undefined2 *)((long)&(__this->fields)._collapsed + 1) = 0;
  UI_AccountPanel__RefreshState(__this,method);
  return;
}


// UI.AccountPanel$$HandleAuthMethodsChanged
// il2cpp: void UI_AccountPanel__HandleAuthMethodsChanged (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e47c0

void UI_AccountPanel__HandleAuthMethodsChanged(UI_AccountPanel_o *__this,MethodInfo *method)

{
  UI_AccountPanel__RefreshState(__this,method);
  return;
}


// UI.AccountPanel$$OnRegisterClick
// il2cpp: void UI_AccountPanel__OnRegisterClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e47d0

void UI_AccountPanel__OnRegisterClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *displayName;
  System_String_o *email;
  System_String_o *password;
  bool_conflict bVar6;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057047a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnRegisterComplete);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Registering...");
    il2cpp_init_method_metadata(&"Please fill in all fields.");
    DAT_057047a7 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  pSVar2 = (__this->fields)._signupDisplayName;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar6 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
    method_01 = extraout_RDX;
    if ((char)bVar6 != '\0') {
LAB_040e48ae:
      UI_AccountPanel__ShowStatus(__this,"Please fill in all fields.",method_01);
      return;
    }
    pSVar2 = (__this->fields)._signupEmail;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
      method_01 = extraout_RDX_00;
      if ((char)bVar6 != '\0') goto LAB_040e48ae;
      pSVar2 = (__this->fields)._signupPassword;
      if (pSVar2 != (Settings_StringSetting_o *)0x0) {
        bVar6 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
        method_01 = method_00;
        if ((char)bVar6 != '\0') goto LAB_040e48ae;
        *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
        UI_AccountPanel__ShowStatus(__this,"Registering...",method_00);
        pSVar3 = (__this->fields)._keepSignedIn;
        if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
          bVar1 = *(byte *)((long)&(pSVar3->fields).DefaultValue + 1);
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._signupDisplayName;
          if (((pSVar2 != (Settings_StringSetting_o *)0x0) &&
              (pSVar4 = (__this->fields)._signupEmail, pSVar4 != (Settings_StringSetting_o *)0x0))
             && (pSVar5 = (__this->fields)._signupPassword,
                pSVar5 != (Settings_StringSetting_o *)0x0)) {
            displayName = (pSVar2->fields)._value;
            email = (pSVar4->fields)._value;
            password = (pSVar5->fields)._value;
            onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
            System_Action<bool__object>___ctor();
            ApplicationManagers_AccountManager__Register
                      (displayName,email,password,onComplete,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnLoginClick
// il2cpp: void UI_AccountPanel__OnLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e49a0

void UI_AccountPanel__OnLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *email;
  System_String_o *password;
  bool_conflict bVar5;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057047a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAuthComplete);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Please fill in all fields.");
    il2cpp_init_method_metadata(&"Signing in...");
    DAT_057047a8 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  pSVar2 = (__this->fields)._loginEmail;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar5 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
    method_01 = extraout_RDX;
    if ((char)bVar5 != '\0') {
LAB_040e4a59:
      UI_AccountPanel__ShowStatus(__this,"Please fill in all fields.",method_01);
      return;
    }
    pSVar2 = (__this->fields)._loginPassword;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      bVar5 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
      method_01 = method_00;
      if ((char)bVar5 != '\0') goto LAB_040e4a59;
      *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
      UI_AccountPanel__ShowStatus(__this,"Signing in...",method_00);
      pSVar3 = (__this->fields)._keepSignedIn;
      if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
        bVar1 = *(byte *)((long)&(pSVar3->fields).DefaultValue + 1);
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._loginEmail;
        if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
           (pSVar4 = (__this->fields)._loginPassword, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          email = (pSVar2->fields)._value;
          password = (pSVar4->fields)._value;
          onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
          System_Action<bool__object>___ctor();
          ApplicationManagers_AccountManager__Login(email,password,onComplete,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnForgotPasswordClick
// il2cpp: void UI_AccountPanel__OnForgotPasswordClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4b30

void UI_AccountPanel__OnForgotPasswordClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *email;
  bool_conflict bVar2;
  System_Action_bool__string__o *onComplete;
  MethodInfo *method_00;
  
  if (DAT_057047a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnForgotPasswordComplete);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Please enter your email.");
    il2cpp_init_method_metadata(&"Sending reset email...");
    DAT_057047a9 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  pSVar1 = (__this->fields)._forgotPasswordEmail;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      UI_AccountPanel__ShowStatus(__this,"Please enter your email.",method_00);
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
    UI_AccountPanel__ShowStatus(__this,"Sending reset email...",method_00);
    pSVar1 = (__this->fields)._forgotPasswordEmail;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      email = (pSVar1->fields)._value;
      onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
      System_Action<bool__object>___ctor();
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AccountManager__ForgotPassword(email,onComplete,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnWebLoginClick
// il2cpp: void UI_AccountPanel__OnWebLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4c60

void UI_AccountPanel__OnWebLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *url;
  
  if (DAT_057047aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_057047aa = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  url = ApplicationManagers_AccountManager__GetWebLoginUrlWithSession((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Application + 0xe4) != 0) {
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnRefreshLoginClick
// il2cpp: void UI_AccountPanel__OnRefreshLoginClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4cf0

void UI_AccountPanel__OnRefreshLoginClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_bool__string__o *onComplete;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnRefreshLoginClick_b__87_0);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&"Refreshing login...");
    DAT_057047ab = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
  UI_AccountPanel__ShowStatus(__this,"Refreshing login...",in_RDX);
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__Refresh(onComplete,1,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnOAuthClick
// il2cpp: void UI_AccountPanel__OnOAuthClick (UI_AccountPanel_o* __this, System_String_o* provider, const MethodInfo* method);
// 0x40e4dc0

void UI_AccountPanel__OnOAuthClick
               (UI_AccountPanel_o *__this,System_String_o *provider,MethodInfo *method)

{
  byte bVar1;
  Settings_BoolSetting_o *pSVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  MethodInfo *method_00;
  System_Action_bool__string__o *onComplete;
  MethodInfo *method_01;
  
  if (DAT_057047ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnOAuthComplete);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Finish ");
    il2cpp_init_method_metadata(&"Discord");
    il2cpp_init_method_metadata(&" sign-in in your browser. If you closed it, cancel and try again.");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"Google");
    DAT_057047ac = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  *(undefined2 *)((long)&(__this->fields)._collapsed + 2) = 0x101;
  bVar3 = System_String__op_Equality(provider,"discord",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    puVar4 = &"Google";
  }
  else {
    puVar4 = &"Discord";
  }
  method_00 = (MethodInfo *)
              System_String__Concat
                        ("Finish ",(System_String_o *)*puVar4," sign-in in your browser. If you closed it, cancel and try again.",(MethodInfo *)0x0);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,method_01);
  UI_AccountPanel__RefreshState(__this,method_00);
  pSVar2 = (__this->fields)._keepSignedIn;
  if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
    bVar1 = *(byte *)((long)&(pSVar2->fields).DefaultValue + 1);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    ApplicationManagers_AccountManager__LoginWithOAuth(provider,onComplete,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnOAuthCancelClick
// il2cpp: void UI_AccountPanel__OnOAuthCancelClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4f30

void UI_AccountPanel__OnOAuthCancelClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  if (DAT_057047ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057047ad = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 3) != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) {
      ApplicationManagers_AccountManager__CancelOAuthLogin((MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    ApplicationManagers_AccountManager__CancelOAuthLogin((MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.AccountPanel$$OnOAuthComplete
// il2cpp: void UI_AccountPanel__OnOAuthComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e4f90

void UI_AccountPanel__OnOAuthComplete
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  MethodInfo *pMVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  pMVar2 = (MethodInfo *)error;
  if (DAT_057047ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057047ae = '\x01';
    pMVar2 = extraout_RDX;
  }
  *(undefined2 *)((long)&(__this->fields)._collapsed + 2) = 0;
  if ((char)success != '\0') {
    UI_AccountPanel__ShowStatus
              (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),pMVar2);
    pSVar1 = (__this->fields)._signupPassword;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields)._loginPassword;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        pMVar2 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pMVar2,MethodInfo_Void_set_Value);
        goto LAB_040e5048;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar2 = (MethodInfo *)UI_AccountPanel__FormatError(error,method_01);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)pMVar2,method_00);
LAB_040e5048:
  UI_AccountPanel__RefreshState(__this,pMVar2);
  return;
}


// UI.AccountPanel$$OnForgotPasswordComplete
// il2cpp: void UI_AccountPanel__OnForgotPasswordComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e5550

void UI_AccountPanel__OnForgotPasswordComplete
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  method_00 = (MethodInfo *)error;
  if (DAT_057047af == '\0') {
    il2cpp_init_method_metadata(&"Password reset email sent. Check your inbox.");
    DAT_057047af = '\x01';
    method_00 = extraout_RDX;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
  message = "Password reset email sent. Check your inbox.";
  if ((char)success == '\0') {
    message = UI_AccountPanel__FormatError(error,method_01);
    method_00 = extraout_RDX_00;
  }
  UI_AccountPanel__ShowStatus(__this,message,method_00);
  return;
}


// UI.AccountPanel$$OnLogoutClick
// il2cpp: void UI_AccountPanel__OnLogoutClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e55b0

void UI_AccountPanel__OnLogoutClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_Action_bool__string__o *onComplete;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAuthComplete);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&"Logging out...");
    DAT_057047b0 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
  UI_AccountPanel__ShowStatus(__this,"Logging out...",in_RDX);
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__Logout(onComplete,1,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$OnOnlineToggleClick
// il2cpp: void UI_AccountPanel__OnOnlineToggleClick (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5680

void UI_AccountPanel__OnOnlineToggleClick(UI_AccountPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  
  if (DAT_057047b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnOnlineToggleClick_b__93_0);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&"No saved session. Please sign in.");
    il2cpp_init_method_metadata(&"Going offline...");
    il2cpp_init_method_metadata(&"Offline mode enabled.");
    il2cpp_init_method_metadata(&"Going online...");
    DAT_057047b1 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._collapsed + 2) != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    pMVar4 = extraout_RDX_01;
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    pMVar4 = extraout_RDX;
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
      pMVar4 = extraout_RDX_03;
    }
    else {
      bVar2 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
      pMVar4 = extraout_RDX_02;
    }
    if (cVar1 != '\0') {
      *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
      UI_AccountPanel__ShowStatus(__this,"Going online...",pMVar4);
      onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
      System_Action<bool__object>___ctor();
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AccountManager__GoOnline(onComplete,1,(MethodInfo *)0x0);
      return;
    }
    puVar3 = &"No saved session. Please sign in.";
  }
  else {
    *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 1;
    UI_AccountPanel__ShowStatus(__this,"Going offline...",pMVar4);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__GoOffline((MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
    puVar3 = &"Offline mode enabled.";
    pMVar4 = extraout_RDX_00;
  }
  method_00 = (MethodInfo *)*puVar3;
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,pMVar4);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$OnRegisterComplete
// il2cpp: void UI_AccountPanel__OnRegisterComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e5820

void UI_AccountPanel__OnRegisterComplete
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  long lVar3;
  UI_MessagePopup_o *__this_00;
  bool_conflict bVar4;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined4 in_register_00000034;
  
  pMVar5 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_057047b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Check your email, then log in.");
    il2cpp_init_method_metadata(&"Account created!\nCheck your email to verify,\nthen log in.");
    DAT_057047b2 = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
  if ((char)success == '\0') {
    pMVar5 = (MethodInfo *)UI_AccountPanel__FormatError(error,pMVar5);
    UI_AccountPanel__ShowStatus(__this,(System_String_o *)pMVar5,method_01);
    UI_AccountPanel__RefreshState(__this,pMVar5);
    return;
  }
  pSVar2 = (__this->fields)._signupPassword;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) goto LAB_040e5ab8;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,
             (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
  (__this->fields)._currentTab = 1;
  pMVar5 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)pMVar5,method_00);
  UI_AccountPanel__RefreshState(__this,pMVar5);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_057047eb != '\0') goto LAB_040e590f;
LAB_040e59b5:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057047eb = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_057047eb == '\0') goto LAB_040e59b5;
LAB_040e590f:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8),(MethodInfo *)0x0)
  ;
  if ((char)bVar4 == '\0') {
    pSVar2 = (__this->fields)._loginEmail;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_057047eb != '\0') goto LAB_040e595f;
LAB_040e59f9:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_057047eb = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (DAT_057047eb == '\0') goto LAB_040e59f9;
LAB_040e595f:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto LAB_040e5ab8;
    pMVar5 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pMVar5,MethodInfo_Void_set_Value);
  }
  UI_AccountPanel__RefreshState(__this,pMVar5);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if ((lVar3 != 0) &&
     (__this_00 = *(UI_MessagePopup_o **)(lVar3 + 0x30), __this_00 != (UI_MessagePopup_o *)0x0)) {
    UI_MessagePopup__Show(__this_00,"Account created!\nCheck your email to verify,\nthen log in.",1,(MethodInfo *)0x0);
    UI_AccountPanel__ShowStatus(__this,"Check your email, then log in.",method_02);
    return;
  }
LAB_040e5ab8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$OnAuthComplete
// il2cpp: void UI_AccountPanel__OnAuthComplete (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e5ac0

void UI_AccountPanel__OnAuthComplete
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  MethodInfo *pMVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  pMVar2 = (MethodInfo *)error;
  if (DAT_057047b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057047b3 = '\x01';
    pMVar2 = extraout_RDX;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
  if ((char)success != '\0') {
    UI_AccountPanel__ShowStatus
              (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),pMVar2);
    pSVar1 = (__this->fields)._signupPassword;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields)._loginPassword;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        pMVar2 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pMVar2,MethodInfo_Void_set_Value);
        goto LAB_040e5b76;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar2 = (MethodInfo *)UI_AccountPanel__FormatError(error,method_01);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)pMVar2,method_00);
LAB_040e5b76:
  UI_AccountPanel__RefreshState(__this,pMVar2);
  return;
}


// UI.AccountPanel$$ShowStatus
// il2cpp: void UI_AccountPanel__ShowStatus (UI_AccountPanel_o* __this, System_String_o* message, const MethodInfo* method);
// 0x40e4690

void UI_AccountPanel__ShowStatus
               (UI_AccountPanel_o *__this,System_String_o *message,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_057047b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047b4 = '\x01';
  }
  pUVar1 = (__this->fields)._statusLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  bVar2 = System_String__IsNullOrEmpty(message,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._statusLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      if ((char)bVar2 == '\0') {
        UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._statusLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          vtable_dispatch_00 = (pUVar1->klass->vtable)._75_set_text.methodPtr;
          (*vtable_dispatch_00)
                    (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method,
                     vtable_dispatch_00);
          return;
        }
      }
      else {
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._statusLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          vtable_dispatch_00 = (pUVar1->klass->vtable)._75_set_text.methodPtr;
          (*vtable_dispatch_00)
                    (pUVar1,**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (pUVar1->klass->vtable)._75_set_text.method,vtable_dispatch_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$ClearStatus
// il2cpp: void UI_AccountPanel__ClearStatus (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e4610

void UI_AccountPanel__ClearStatus(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_AccountPanel__ShowStatus
            (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),in_RDX);
  return;
}


// UI.AccountPanel$$FormatError
// il2cpp: System_String_o* UI_AccountPanel__FormatError (System_String_o* error, const MethodInfo* method);
// 0x40e5060

System_String_o * UI_AccountPanel__FormatError(System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  uint32_t uVar2;
  undefined8 *puVar3;
  
  if (DAT_057047b5 == '\0') {
    il2cpp_init_method_metadata(&"oauth_failed");
    il2cpp_init_method_metadata(&"OAuth sign-in timed out. Please try again.");
    il2cpp_init_method_metadata(&"Email not verified. Check your inbox.");
    il2cpp_init_method_metadata(&"Sign-in was cancelled.");
    il2cpp_init_method_metadata(&"oauth_denied");
    il2cpp_init_method_metadata(&"bad_response");
    il2cpp_init_method_metadata(&"username_or_email_taken");
    il2cpp_init_method_metadata(&"OAuth sign-in did not return a code.");
    il2cpp_init_method_metadata(&"email_already_taken");
    il2cpp_init_method_metadata(&"Email already registered.");
    il2cpp_init_method_metadata(&"Sign-in already completed. Please try again.");
    il2cpp_init_method_metadata(&"Session expired, please sign in again.");
    il2cpp_init_method_metadata(&"Unknown error.");
    il2cpp_init_method_metadata(&"Not signed in.");
    il2cpp_init_method_metadata(&"oauth_missing_code");
    il2cpp_init_method_metadata(&"Sign-in expired. Please try again.");
    il2cpp_init_method_metadata(&"code_already_delivered");
    il2cpp_init_method_metadata(&"expired");
    il2cpp_init_method_metadata(&"Email is not verified.");
    il2cpp_init_method_metadata(&"network_error");
    il2cpp_init_method_metadata(&"invalid_refresh_token");
    il2cpp_init_method_metadata(&"OAuth sign-in failed. Please try again.");
    il2cpp_init_method_metadata(&"Unexpected server response.");
    il2cpp_init_method_metadata(&"oauth_timeout");
    il2cpp_init_method_metadata(&"no_refresh_token");
    il2cpp_init_method_metadata(&"Invalid email or password.");
    il2cpp_init_method_metadata(&"Network error. Check your connection.");
    il2cpp_init_method_metadata(&"email_not_verified");
    il2cpp_init_method_metadata(&"invalid_credentials");
    il2cpp_init_method_metadata(&"display_name_taken");
    il2cpp_init_method_metadata(&"Display name already taken.");
    DAT_057047b5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    puVar3 = &"Unknown error.";
    goto LAB_040e5201;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(error,(MethodInfo *)0x0);
  if (uVar2 < 0x6e2964a2) {
    if (0x4e5f9fea < uVar2) {
      if (uVar2 < 0x67f94e1b) {
        if (uVar2 == 0x5ef038c9) {
          bVar1 = System_String__op_Equality(error,"invalid_credentials",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"Invalid email or password.";
        }
        else {
          if (uVar2 != 0x67f94e1a) {
            return error;
          }
          bVar1 = System_String__op_Equality(error,"oauth_denied",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"Sign-in was cancelled.";
        }
      }
      else if (uVar2 == 0x6863bfec) {
        bVar1 = System_String__op_Equality(error,"oauth_timeout",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return error;
        }
        puVar3 = &"OAuth sign-in timed out. Please try again.";
      }
      else {
        if (uVar2 != 0x6e2964a1) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"oauth_missing_code",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return error;
        }
        puVar3 = &"OAuth sign-in did not return a code.";
      }
      goto LAB_040e5201;
    }
    if (uVar2 < 0x37bfaa3a) {
      if (uVar2 == 0x338eb632) {
        bVar1 = System_String__op_Equality(error,"expired",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return error;
        }
        puVar3 = &"Sign-in expired. Please try again.";
      }
      else {
        if (uVar2 != 0x37bfaa39) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"display_name_taken",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return error;
        }
        puVar3 = &"Display name already taken.";
      }
      goto LAB_040e5201;
    }
    if (uVar2 == 0x4b8649dc) {
      bVar1 = System_String__op_Equality(error,"no_refresh_token",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return error;
      }
      puVar3 = &"Not signed in.";
      goto LAB_040e5201;
    }
    if (uVar2 != 0x4e5f9fea) {
      return error;
    }
    puVar3 = &"email_not_verified";
LAB_040e54d8:
    bVar1 = System_String__op_Equality(error,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return error;
    }
    puVar3 = &"Email not verified. Check your inbox.";
  }
  else {
    if (uVar2 < 0xbcccdb09) {
      if (uVar2 < 0xa09de9ff) {
        if (uVar2 == 0x960f468c) {
          bVar1 = System_String__op_Equality(error,"code_already_delivered",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"Sign-in already completed. Please try again.";
        }
        else {
          if (uVar2 != 0xa09de9fe) {
            return error;
          }
          bVar1 = System_String__op_Equality(error,"invalid_refresh_token",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"Session expired, please sign in again.";
        }
        goto LAB_040e5201;
      }
      if (uVar2 == 0xb89467ae) {
        puVar3 = &"Email is not verified.";
        goto LAB_040e54d8;
      }
      if (uVar2 != 0xbcccdb08) {
        return error;
      }
      puVar3 = &"username_or_email_taken";
    }
    else {
      if (uVar2 < 0xe8d0e891) {
        if (uVar2 == 0xc13c007e) {
          bVar1 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"Unexpected server response.";
        }
        else {
          if (uVar2 != 0xe8d0e890) {
            return error;
          }
          bVar1 = System_String__op_Equality(error,"oauth_failed",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return error;
          }
          puVar3 = &"OAuth sign-in failed. Please try again.";
        }
        goto LAB_040e5201;
      }
      if (uVar2 != 0xef1c5af4) {
        if (uVar2 != 0xf34f4058) {
          return error;
        }
        bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return error;
        }
        puVar3 = &"Network error. Check your connection.";
        goto LAB_040e5201;
      }
      puVar3 = &"email_already_taken";
    }
    bVar1 = System_String__op_Equality(error,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return error;
    }
    puVar3 = &"Email already registered.";
  }
LAB_040e5201:
  return (System_String_o *)*puVar3;
}


// UI.AccountPanel$$.ctor
// il2cpp: void UI_AccountPanel___ctor (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5b90

void UI_AccountPanel___ctor(UI_AccountPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  
  if (DAT_057047b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057047b6 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x20,(MethodInfo *)0x0);
  (__this->fields)._signupDisplayName = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._signupDisplayName,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._signupEmail = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._signupEmail,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._signupPassword = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._signupPassword,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._loginEmail = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._loginEmail,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._loginPassword = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._loginPassword,pSVar2);
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(__this_00,1,(MethodInfo *)0x0);
  (__this->fields)._keepSignedIn = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._keepSignedIn,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x80,(MethodInfo *)0x0);
  (__this->fields)._forgotPasswordEmail = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._forgotPasswordEmail);
  (__this->fields)._currentTab = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AccountPanel$$<BuildTabs>b__62_0
// il2cpp: void UI_AccountPanel___BuildTabs_b__62_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5db0

void UI_AccountPanel__<BuildTabs>b__62_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  (__this->fields)._currentTab = 0;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,in_RDX);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$<BuildTabs>b__62_1
// il2cpp: void UI_AccountPanel___BuildTabs_b__62_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5df0

void UI_AccountPanel__<BuildTabs>b__62_1(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  (__this->fields)._currentTab = 1;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,in_RDX);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$<BuildSignUpForm>b__63_0
// il2cpp: void UI_AccountPanel___BuildSignUpForm_b__63_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5e30

void UI_AccountPanel__<BuildSignUpForm>b__63_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (DAT_057047b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057047b7 = '\x01';
  }
  pSVar2 = (__this->fields)._keepSignedIn;
  if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
    bVar1 = *(byte *)((long)&(pSVar2->fields).DefaultValue + 1);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) {
      ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$<BuildLoginForm>b__64_0
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5ea0

void UI_AccountPanel__<BuildLoginForm>b__64_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047b8 == '\0') {
    il2cpp_init_method_metadata(&"discord");
    DAT_057047b8 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_AccountPanel__OnOAuthClick(__this,"discord",in_RDX);
  return;
}


// UI.AccountPanel$$<BuildLoginForm>b__64_1
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5ee0

void UI_AccountPanel__<BuildLoginForm>b__64_1(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047b9 == '\0') {
    il2cpp_init_method_metadata(&"google");
    DAT_057047b9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_AccountPanel__OnOAuthClick(__this,"google",in_RDX);
  return;
}


// UI.AccountPanel$$<BuildLoginForm>b__64_2
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_2 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5f20

void UI_AccountPanel__<BuildLoginForm>b__64_2(UI_AccountPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (DAT_057047ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057047ba = '\x01';
  }
  pSVar2 = (__this->fields)._keepSignedIn;
  if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
    bVar1 = *(byte *)((long)&(pSVar2->fields).DefaultValue + 1);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) {
      ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    ApplicationManagers_AccountManager__SetKeepSignedIn((uint)bVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AccountPanel$$<BuildLoginForm>b__64_3
// il2cpp: void UI_AccountPanel___BuildLoginForm_b__64_3 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5f90

void UI_AccountPanel__<BuildLoginForm>b__64_3(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  (__this->fields)._currentTab = 2;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,in_RDX);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$<BuildForgotPasswordForm>b__65_0
// il2cpp: void UI_AccountPanel___BuildForgotPasswordForm_b__65_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e5fd0

void UI_AccountPanel__<BuildForgotPasswordForm>b__65_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  (__this->fields)._currentTab = 1;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,in_RDX);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$<BuildOAuthRow>b__69_0
// il2cpp: void UI_AccountPanel___BuildOAuthRow_b__69_0 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e6010

void UI_AccountPanel__<BuildOAuthRow>b__69_0(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047bb == '\0') {
    il2cpp_init_method_metadata(&"discord");
    DAT_057047bb = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_AccountPanel__OnOAuthClick(__this,"discord",in_RDX);
  return;
}


// UI.AccountPanel$$<BuildOAuthRow>b__69_1
// il2cpp: void UI_AccountPanel___BuildOAuthRow_b__69_1 (UI_AccountPanel_o* __this, const MethodInfo* method);
// 0x40e6050

void UI_AccountPanel__<BuildOAuthRow>b__69_1(UI_AccountPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047bc == '\0') {
    il2cpp_init_method_metadata(&"google");
    DAT_057047bc = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_AccountPanel__OnOAuthClick(__this,"google",in_RDX);
  return;
}


// UI.AccountPanel$$<OnRefreshLoginClick>b__87_0
// il2cpp: void UI_AccountPanel___OnRefreshLoginClick_b__87_0 (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e6090

void UI_AccountPanel__<OnRefreshLoginClick>b__87_0
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined4 in_register_00000034;
  MethodInfo *method_02;
  
  method_02 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  method_01 = (MethodInfo *)error;
  if (DAT_057047bd == '\0') {
    il2cpp_init_method_metadata(&"Login refreshed.");
    DAT_057047bd = '\x01';
    method_01 = extraout_RDX;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
  method_00 = "Login refreshed.";
  if ((char)success == '\0') {
    method_00 = (MethodInfo *)UI_AccountPanel__FormatError(error,method_02);
    method_01 = extraout_RDX_00;
  }
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,method_01);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


// UI.AccountPanel$$<OnOnlineToggleClick>b__93_0
// il2cpp: void UI_AccountPanel___OnOnlineToggleClick_b__93_0 (UI_AccountPanel_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x40e60f0

void UI_AccountPanel__<OnOnlineToggleClick>b__93_0
               (UI_AccountPanel_o *__this,bool_conflict success,System_String_o *error,
               MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined4 in_register_00000034;
  MethodInfo *method_02;
  
  method_02 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  method_01 = (MethodInfo *)error;
  if (DAT_057047be == '\0') {
    il2cpp_init_method_metadata(&"Online.");
    DAT_057047be = '\x01';
    method_01 = extraout_RDX;
  }
  *(undefined1 *)((long)&(__this->fields)._collapsed + 2) = 0;
  method_00 = "Online.";
  if ((char)success == '\0') {
    method_00 = (MethodInfo *)UI_AccountPanel__FormatError(error,method_02);
    method_01 = extraout_RDX_00;
  }
  UI_AccountPanel__ShowStatus(__this,(System_String_o *)method_00,method_01);
  UI_AccountPanel__RefreshState(__this,method_00);
  return;
}


