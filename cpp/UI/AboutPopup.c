// Type: UI.AboutPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AboutPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutPopup.cs
// --------------------------------

// UI.AboutPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___ctor (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43f0ea0

void UI_AboutPopup___c__DisplayClass15_0___ctor
               (UI_AboutPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43f0fe0

void UI_AboutPopup___c__DisplayClass15_0___SetupTopButtons_b__0
               (UI_AboutPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int iVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_o *pSVar3;
  System_Threading_CancellationTokenSource_c *pSVar4;
  undefined8 uVar5;
  Settings_BoolSetting_o *__this_00;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Transform_c *pUVar7;
  void *pvVar8;
  long *plVar9;
  code *vtableDispatch;
  System_RuntimeTypeHandle_o handle;
  byte bVar10;
  byte bVar11;
  bool_conflict bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool_conflict bVar17;
  System_Type_array *components;
  System_Type_o *pSVar18;
  long lVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UI_AccountPanel_o *pUVar22;
  UnityEngine_RectTransform_o *pUVar23;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UI_AccountPanel_o *pUVar24;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  System_Action_o *pSVar25;
  UnityEngine_UI_Text_o *x;
  UnityEngine_UI_Text_o *pUVar26;
  UI_ElementStyle_o *pUVar27;
  UnityEngine_Events_UnityAction_o *pUVar28;
  MethodInfo *pMVar29;
  UnityEngine_Material_o *pUVar30;
  UnityEngine_Transform_o *pUVar31;
  UnityEngine_Transform_o *pUVar32;
  UnityEngine_Transform_o *__this_04;
  Il2CppObject *pIVar33;
  undefined8 *puVar34;
  System_String_o *pSVar35;
  System_Delegate_o *value_00;
  System_Delegate_o *pSVar36;
  UnityEngine_GameObject_c *pUVar37;
  System_String_o *pSVar38;
  Events_OnPreLoadScene_o *value_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_05;
  byte bVar39;
  uint value_02;
  UI_AboutPopup_o *parent;
  UI_AccountPanel_o *__this_05;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  System_Delegate_o *source;
  bool bVar43;
  UnityEngine_Color_o UVar44;
  byte bStack_10e;
  
  parent = (__this->fields).__4__this;
  if (parent != (UI_AboutPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (parent->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (parent,(__this->fields).buttonName,(parent->klass->vtable)._28_SetCategoryPanel.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (parent->fields).m_CancellationTokenSource;
  if (pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) {
    pSVar38 = (System_String_o *)(parent->fields).m_CachedPtr;
    if (g_data_057ae521 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Back");
      g_data_057ae521 = '\x01';
    }
    bVar12 = System_String__op_Equality(pSVar38,"Back",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pSVar4 = pSVar3->klass;
      uVar5._0_4_ = pSVar4[1]._2.static_fields_size;
      uVar5._4_4_ = pSVar4[1]._2.thread_static_fields_size;
      (**(code **)&pSVar4[1]._2.element_size)(pSVar3,uVar5);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae522 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountPanel_AddComponent_AccountPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AccountPanel");
    g_data_057ae522 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_043f11d9:
    il2cpp_runtime_helper_022b2c90();
label_043f11de:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar18 == (System_Type_o *)0x0) ||
          (lVar19 = il2cpp_runtime_helper_023051f0(pSVar18,(((components->obj).klass)->_1).element_class), lVar19 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar18;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar18);
      pUVar20 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar20,"AccountPanel",components,(MethodInfo *)0x0);
      if ((pUVar20 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0),
         pUVar21 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30
                  (pUVar21,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
        pMVar29 = MethodInfo_AccountPanel_AddComponent_AccountPanel;
        pUVar22 = (UI_AccountPanel_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar20,(MethodInfo_255A020 *)MethodInfo_AccountPanel_AddComponent_AccountPanel);
        if (pUVar22 != (UI_AccountPanel_o *)0x0) {
          UI_AccountPanel__Build(pUVar22,pMVar29);
          return;
        }
      }
      goto label_043f11d9;
    }
    goto label_043f11de;
  }
  pUVar22 = (UI_AccountPanel_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(pUVar22,0);
  if (g_data_057ae523 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae523 = '\x01';
  }
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar22,MethodInfo_RectTransform_GetComponent_RectTransform);
  (pUVar22->fields)._rect = pUVar23;
  il2cpp_runtime_helper_022b4080(&(pUVar22->fields)._rect);
  pUVar23 = (pUVar22->fields)._rect;
  __this_05 = (UI_AccountPanel_o *)0x0;
  if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_sizeDelta(pUVar23,(UnityEngine_Vector2_o)0x43e10000,(MethodInfo *)0x0);
    __this_05 = pUVar22;
    pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
    if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_RawImage_AddComponent_RawImage);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = "DefaultPanel";
      value = (UnityEngine_Texture_o *)
              UI_UIManager__GetThemeTexture
                        ((System_String_o *)"DefaultPanel","MainBody","BackgroundTexture",
                         (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
        UVar44 = UI_UIManager__GetThemeColor
                           ((System_String_o *)"DefaultPanel","MainBody","BackgroundColor",
                            (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                  (UVar44.fields._0_8_,CONCAT44(UVar44.fields.a * 0.75,UVar44.fields.b),__this_01);
        __this_05 = pUVar22;
        pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
          pUVar24 = (UI_AccountPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
          __this_05 = pUVar24;
          UnityEngine_RectOffset___ctor_4dbeaf0
                    ((UnityEngine_RectOffset_o *)pUVar24,10,10,10,10,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_LayoutGroup__set_padding
                      ((UnityEngine_UI_LayoutGroup_o *)__this_02,(UnityEngine_RectOffset_o *)pUVar24,
                       (MethodInfo *)0x0);
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
            __this_05 = pUVar22;
            pUVar24 = (UI_AccountPanel_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
            if ((pUVar24 != (UI_AccountPanel_o *)0x0) &&
               (__this_03 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar24,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter), __this_05 = pUVar24,
               __this_03 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
              UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_03,0,(MethodInfo *)0x0);
              UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_03,2,(MethodInfo *)0x0);
              __this_00 = (pUVar22->fields)._keepSignedIn;
              if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae57f == '\0') goto label_043f1659;
label_043f152d:
                iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
              }
              else {
                if (g_data_057ae57f != '\0') goto label_043f152d;
label_043f1659:
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                g_data_057ae57f = '\x01';
                iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
              }
              __this_05 = TypeInfo_AccountManager;
              if (iVar2 == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = TypeInfo_AccountManager;
              }
              TypeInfo_AccountManager = __this_05;
              if (__this_00 != (Settings_BoolSetting_o *)0x0) {
                bVar40 = *(byte *)((long)&(__this_05->fields)._signupTabButton[3].klass + 1);
                pMVar29 = (MethodInfo *)(ulong)bVar40;
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)__this_00,(uint)bVar40,MethodInfo_Void_set_Value);
                UI_AccountPanel__BuildContent(pUVar22,pMVar29);
                UI_AccountPanel__BuildCollapsedUserLabel(pUVar22,pMVar29);
                UI_AccountPanel__BuildCollapseBar(pUVar22,pMVar29);
                pUVar20 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar20,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pSVar25 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar25,(MethodInfo *)0x0);
                pSVar25 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar25,(MethodInfo *)0x0);
                pSVar25 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar25,(MethodInfo *)0x0);
                pMVar29 = (MethodInfo *)0x0;
                ApplicationManagers_AccountManager__RefreshAuthMethods
                          ((System_Action_bool__string__o *)0x0,(MethodInfo *)0x0);
                UI_AccountPanel__RefreshState(pUVar22,pMVar29);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae525 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnOAuthCancelClick);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Cancel Sign In");
    g_data_057ae525 = '\x01';
  }
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateVerticalGroup(pUVar21,6.0,1,(MethodInfo *)0x0);
  ppUVar1 = &(__this_05->fields)._content;
  (__this_05->fields)._content = pUVar20;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar20);
  pUVar20 = (__this_05->fields)._content;
  pUVar26 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar20,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar26 = x;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pUVar26 = (UnityEngine_UI_Text_o *)*ppUVar1;
      if (pUVar26 == (UnityEngine_UI_Text_o *)0x0) goto label_043f1a94;
      x = (UnityEngine_UI_Text_o *)
          UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar26,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    }
    if (x != (UnityEngine_UI_Text_o *)0x0) {
      (*(x->klass->vtable)._36_OnCullingChanged.methodPtr)
                (0x43d70000,x,(x->klass->vtable)._36_OnCullingChanged.method);
      (*(x->klass->vtable)._40_UpdateMaterial.methodPtr)(0,x);
      pUVar26 = (UnityEngine_UI_Text_o *)0x0;
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar21 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        UI_AccountPanel__BuildTabs(__this_05,pUVar21,method_00);
        pUVar20 = (__this_05->fields)._content;
        pUVar26 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
          pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          pUVar20 = UI_AccountPanel__BuildSignUpForm(__this_05,pUVar21,method_01);
          (__this_05->fields)._signupContent = pUVar20;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields)._signupContent);
          pUVar20 = (__this_05->fields)._content;
          pUVar26 = (UnityEngine_UI_Text_o *)0x0;
          if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
            pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
            pUVar20 = UI_AccountPanel__BuildLoginForm(__this_05,pUVar21,method_02);
            (__this_05->fields)._loginContent = pUVar20;
            il2cpp_runtime_helper_022b4080(&(__this_05->fields)._loginContent);
            pUVar20 = (__this_05->fields)._content;
            pUVar26 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
              pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
              pUVar20 = UI_AccountPanel__BuildForgotPasswordForm(__this_05,pUVar21,method_03);
              (__this_05->fields)._forgotPasswordContent = pUVar20;
              il2cpp_runtime_helper_022b4080(&(__this_05->fields)._forgotPasswordContent);
              pUVar20 = (__this_05->fields)._content;
              pUVar26 = (UnityEngine_UI_Text_o *)0x0;
              if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
                pUVar20 = UI_AccountPanel__BuildLoggedInView(__this_05,pUVar21,method_04);
                (__this_05->fields)._loggedInContent = pUVar20;
                il2cpp_runtime_helper_022b4080(&(__this_05->fields)._loggedInContent);
                pUVar20 = (__this_05->fields)._content;
                pUVar26 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar26 = (UnityEngine_UI_Text_o *)
                            UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
                  pUVar27 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor
                            (pUVar27,0x15,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                  pUVar20 = UI_ElementFactory__CreateDefaultLabel
                                      ((UnityEngine_Transform_o *)pUVar26,pUVar27,
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,
                                       (MethodInfo *)0x0);
                  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar26 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar20,MethodInfo_Text_GetComponent_Text);
                    (__this_05->fields)._statusLabel = pUVar26;
                    il2cpp_runtime_helper_022b4080(&(__this_05->fields)._statusLabel);
                    pUVar26 = (__this_05->fields)._statusLabel;
                    if ((pUVar26 != (UnityEngine_UI_Text_o *)0x0) &&
                       (pUVar20 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
                       pUVar20 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
                      pUVar26 = (UnityEngine_UI_Text_o *)0x0;
                      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar21 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
                        pUVar27 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                        UI_ElementStyle___ctor
                                  (pUVar27,0x10,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                        pUVar28 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pMVar29 = (MethodInfo *)
                                  UI_ElementFactory__CreateDefaultButton
                                            (pUVar21,pUVar27,"Cancel Sign In",430.0,22.0,pUVar28,(MethodInfo *)0x0
                                            );
                        (__this_05->fields)._oauthCancelButton = (UnityEngine_GameObject_o *)pMVar29;
                        il2cpp_runtime_helper_022b4080(&(__this_05->fields)._oauthCancelButton);
                        UI_AccountPanel__ApplySubtleButtonStyle
                                  ((__this_05->fields)._oauthCancelButton,pMVar29);
                        pUVar20 = (__this_05->fields)._oauthCancelButton;
                        pUVar26 = (UnityEngine_UI_Text_o *)0x0;
                        if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
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
label_043f1a94:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    g_data_057ae52b = '\x01';
  }
  pUVar27 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar27,0x1b,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateDefaultLabel
                      (pUVar21,pUVar27,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,
                       (MethodInfo *)0x0);
  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
    pUVar30 = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponent_object_(pUVar20,MethodInfo_Text_GetComponent_Text);
    pUVar26[1].fields.m_Material = pUVar30;
    il2cpp_runtime_helper_022b4080(&pUVar26[1].fields.m_Material,pUVar30);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae52c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleCollapsed);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae52c = '\x01';
  }
  pMVar29 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)pMVar29,0x10,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
  pUVar31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0);
  pSVar38 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar28 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar32 = (UnityEngine_Transform_o *)
            UI_ElementFactory__CreateDefaultButton
                      (pUVar31,(UI_ElementStyle_o *)pMVar29,pSVar38,430.0,22.0,pUVar28,(MethodInfo *)0x0);
  pUVar31 = pUVar32;
  UI_AccountPanel__ApplySubtleButtonStyle((UnityEngine_GameObject_o *)pUVar32,pMVar29);
  if (((pUVar32 != (UnityEngine_Transform_o *)0x0) &&
      (__this_04 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar32,(MethodInfo *)0x0), pUVar31 = pUVar32,
      __this_04 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar32 = UnityEngine_Transform__Find(__this_04,"Text",(MethodInfo *)0x0), pUVar31 = __this_04,
     pUVar32 != (UnityEngine_Transform_o *)0x0)) {
    pIVar33 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar32,MethodInfo_Text_GetComponent_Text);
    pUVar21[0xc].fields.m_CachedPtr = (intptr_t)pIVar33;
    il2cpp_runtime_helper_022b4080(&pUVar21[0xc].fields,pIVar33);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae535 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xbc");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xb2");
    il2cpp_runtime_helper_023445d0(&"Offline. Go online to restore your session.");
    il2cpp_runtime_helper_023445d0(&"Complete sign-in in your browser.");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Choose a sign-in provider to continue.");
    il2cpp_runtime_helper_023445d0(&"Go Offline");
    il2cpp_runtime_helper_023445d0(&"email_password");
    il2cpp_runtime_helper_023445d0(&"Signed in as ");
    il2cpp_runtime_helper_023445d0(&"No sign-in methods are currently available.");
    il2cpp_runtime_helper_023445d0(&"discord");
    il2cpp_runtime_helper_023445d0(&"(unknown)");
    g_data_057ae535 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  bVar12 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
  bVar41 = (byte)uVar13;
  bVar42 = (byte)bVar12 & (byte)(uVar13 ^ 1);
  uVar14 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("email_password",(MethodInfo *)0x0);
  uVar15 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("discord",(MethodInfo *)0x0);
  uVar16 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("google",(MethodInfo *)0x0);
  bVar40 = (byte)uVar14;
  if ((bVar40 == 0) && (((uint)((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr | 2) == 2)
     ) {
    *(undefined4 *)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr = 1;
  }
  bVar10 = bVar41 ^ bVar42 ^ 1;
  if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 5) == '\0') {
    *(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) = bVar41;
  }
  bVar11 = bVar10 & bVar40;
  value_02 = 0;
  if (bVar11 == 1) {
    value_02 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr != 2);
  }
  pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[7].fields)->m_CachedPtr;
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar20,value_02,(MethodInfo *)0x0);
  if (pUVar31[8].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar31[8].klass,value_02,(MethodInfo *)0x0);
  if (pUVar31[8].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar31[8].monitor,value_02,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[5].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bStack_10e = bVar40 ^ 1;
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[5].fields)->m_CachedPtr;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,(uint)(bVar10 & bStack_10e),(MethodInfo *)0x0);
  }
  pUVar7 = pUVar31[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar39 = (byte)uVar15 | (byte)uVar16;
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[6].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar31[6].klass,(uint)bVar39,(MethodInfo *)0x0);
  }
  pUVar6 = pUVar31[6].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[6].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[6].monitor,uVar15 & 0xff,(MethodInfo *)0x0);
  }
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[6].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[6].fields)->m_CachedPtr;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,uVar16 & 0xff,(MethodInfo *)0x0);
  }
  pUVar7 = pUVar31[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar7 = pUVar31[7].klass;
    if (bVar39 == 0) {
      puVar34 = &"No sign-in methods are currently available.";
    }
    else if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 7) ==
             '\0') {
      puVar34 = &"Choose a sign-in provider to continue.";
    }
    else {
      puVar34 = &"Complete sign-in in your browser.";
    }
    if (pUVar7 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    pvVar8 = (pUVar7->_1).image;
    (**(code **)((long)pvVar8 + 0x5e8))(pUVar7,*puVar34,*(undefined8 *)((long)pvVar8 + 0x5f0));
  }
  pUVar6 = pUVar31[0xb].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if ((*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 7) == '\0')
       || (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) != '\0')
       ) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uVar13 ^ 1) & 0xff;
    }
    if (pUVar31[0xb].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[0xb].monitor,uVar13,(MethodInfo *)0x0);
  }
  pUVar6 = pUVar31[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[5].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[5].monitor,uVar14 & 0xff,(MethodInfo *)0x0);
  }
  pUVar6 = pUVar31[7].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[7].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[7].monitor,uVar14 & 0xff,(MethodInfo *)0x0);
  }
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[8].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[8].fields)->m_CachedPtr;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,(uint)(bVar40 & bVar39),(MethodInfo *)0x0);
  }
  pUVar7 = pUVar31[10].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[10].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar31[10].klass,(uint)(bVar40 & bVar39),(MethodInfo *)0x0);
  }
  pUVar7 = pUVar31[9].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[9].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar31[9].klass,(uint)bVar39,(MethodInfo *)0x0);
  }
  pUVar6 = pUVar31[10].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[10].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[10].monitor,(uint)(bVar40 & bVar39),(MethodInfo *)0x0);
  }
  pUVar6 = pUVar31[9].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[9].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar31[9].monitor,uVar15 & 0xff,(MethodInfo *)0x0);
  }
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[10].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[10].fields)->m_CachedPtr;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,uVar15 & 0xff,(MethodInfo *)0x0);
  }
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[9].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[9].fields)->m_CachedPtr;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,uVar16 & 0xff,(MethodInfo *)0x0);
  }
  pUVar7 = pUVar31[0xb].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (pUVar31[0xb].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar31[0xb].klass,uVar16 & 0xff,(MethodInfo *)0x0);
  }
  if ((bVar11 & (*(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) ^
                1)) != 0) {
    uVar13 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr == 0);
  }
  if (pUVar31[4].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  uVar14 = 0;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar31[4].klass,uVar13,(MethodInfo *)0x0);
  if ((~*(uint *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) &
      (uint)bVar10) != 0) {
    uVar14 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr == 1 |
                   bStack_10e);
  }
  if (pUVar31[4].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  uVar13 = 0;
  UnityEngine_GameObject__SetActive(pUVar31[4].monitor,uVar14,(MethodInfo *)0x0);
  pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[4].fields)->m_CachedPtr;
  if ((bVar11 & (*(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) ^
                1)) != 0) {
    uVar13 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr == 2);
  }
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar20,uVar13,(MethodInfo *)0x0);
  if (pUVar31[5].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive
            ((UnityEngine_GameObject_o *)pUVar31[5].klass,
             (uint)(((byte)bVar12 | bVar41) &
                   *(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4)
                   == '\0'),(MethodInfo *)0x0);
  pUVar20 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar31[3].fields)->m_CachedPtr;
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive
            (pUVar20,(uint)(*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->
                                             m_CachedPtr + 4) == '\0'),(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar38 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar12 = System_String__IsNullOrEmpty(pSVar38,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar38 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    pUVar7 = pUVar31[0xc].klass;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar7 = pUVar31[0xc].klass;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    pSVar38 = "(unknown)";
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_043f262f:
    pUVar6 = pUVar31[0xc].monitor;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (bVar41 == 0) {
      if (bVar42 != 0) {
        pUVar7 = pUVar31[0xc].klass;
        if (pUVar7 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
        pvVar8 = (pUVar7->_1).image;
        (**(code **)((long)pvVar8 + 0x5e8))(pUVar7,"Offline. Go online to restore your session.",*(undefined8 *)((long)pvVar8 + 0x5f0));
      }
      goto label_043f262f;
    }
    pUVar7 = pUVar31[0xc].klass;
    pSVar35 = System_String__Concat_3ae5ba0("Signed in as ",pSVar38,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    pvVar8 = (pUVar7->_1).image;
    (**(code **)((long)pvVar8 + 0x5e8))(pUVar7,pSVar35,*(undefined8 *)((long)pvVar8 + 0x5f0));
    pUVar6 = pUVar31[0xc].monitor;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    plVar9 = pUVar31[0xc].monitor;
    if (plVar9 == (long *)0x0) goto label_043f27b5;
    if (bVar41 == 0) {
      puVar34 = &"Go Online";
    }
    else {
      puVar34 = &"Go Offline";
    }
    (**(code **)(*plVar9 + 0x5e8))(plVar9,*puVar34,*(undefined8 *)(*plVar9 + 0x5f0));
  }
  pUVar7 = pUVar31[0xd].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (pUVar31[0xd].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    bVar40 = *(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4);
    pUVar20 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar31[0xd].klass,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar20,(uint)(bVar40 & bVar41),(MethodInfo *)0x0);
    if ((bVar40 & bVar41) != 0) {
      pUVar7 = pUVar31[0xd].klass;
      pSVar38 = System_String__Concat_3ae5ba0("Signed in as ",pSVar38,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
      pvVar8 = (pUVar7->_1).image;
      (**(code **)((long)pvVar8 + 0x5e8))(pUVar7,pSVar38,*(undefined8 *)((long)pvVar8 + 0x5f0));
    }
  }
  pUVar6 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar31[0xc].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  plVar9 = (long *)((UnityEngine_GameObject_Fields *)&pUVar31[0xc].fields)->m_CachedPtr;
  if (plVar9 != (long *)0x0) {
    if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar31[0xd].fields)->m_CachedPtr + 4) == '\0') {
      puVar34 = &"\xe2\x96\xb2";
    }
    else {
      puVar34 = &"\xe2\x96\xbc";
    }
    vtableDispatch = *(code **)(*plVar9 + 0x5e8);
    (*vtableDispatch)(plVar9,*puVar34,*(undefined8 *)(*plVar9 + 0x5f0),vtableDispatch);
    return;
  }
label_043f27b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae524 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae524 = '\x01';
  }
  pSVar25 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar25,(MethodInfo *)0x0);
  pSVar25 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar25,(MethodInfo *)0x0);
  value_00 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (g_data_057ae983 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae983 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (TypeInfo_AccountManager->fields)._signupTabButton[5].monitor;
  do {
    pSVar36 = System_Delegate__Remove(source,value_00,(MethodInfo *)0x0);
    if ((pSVar36 != (System_Delegate_o *)0x0) && (pSVar36->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0(pSVar36);
      if (g_data_057ae984 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
        g_data_057ae984 = '\x01';
      }
      if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar37 = (UnityEngine_GameObject_c *)
                Utility_SingletonFactory__CreateSingleton_object_
                          ((Il2CppObject *)((TypeInfo_AccountManager->fields)._signupTabButton)->klass,MethodInfo_AccountManager_CreateSingleton_AccountManager);
      ((TypeInfo_AccountManager->fields)._signupTabButton)->klass = pUVar37;
      il2cpp_runtime_helper_022b4080((TypeInfo_AccountManager->fields)._signupTabButton);
      if (*(char *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor == '\0') {
        value_01 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
        Events_OnPreLoadScene___ctor();
        Events_EventManager__add_OnPreLoadScene(value_01,(MethodInfo *)0x0);
        pUVar22 = TypeInfo_AccountManager;
        if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar22 = TypeInfo_AccountManager;
          *(undefined1 *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor = 1;
          iVar2 = *(int *)((long)&(pUVar22->fields)._signupDiscordButton + 4);
        }
        else {
          *(undefined1 *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor = 1;
          iVar2 = *(int *)((long)&(pUVar22->fields)._signupDiscordButton + 4);
        }
      }
      else {
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ae9a1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
        il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
        g_data_057ae9a1 = '\x01';
        iVar2 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar38 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                           (MethodInfo *)0x0);
      bVar12 = System_IO_File__Exists(pSVar38,(MethodInfo *)0x0);
      if (g_data_057aea1a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea1a = '\x01';
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      else {
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar22 = TypeInfo_AccountManager;
      *(char *)((long)&(TypeInfo_AccountManager->fields)._signupTabButton[3].klass + 1) = (char)bVar12;
      ApplicationManagers_AccountManager__LoadRefreshToken((MethodInfo *)pUVar22);
      pMVar29 = (MethodInfo *)0x0;
      bVar12 = System_String__IsNullOrEmpty
                         ((System_String_o *)(TypeInfo_AccountManager->fields)._signupTabButton[4].klass,
                          (MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        method_05 = extraout_RDX;
        if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_05 = extraout_RDX_00;
        }
        pMVar29 = (MethodInfo *)0x1;
        ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_05);
      }
      if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,pMVar29);
      return;
    }
    if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar36 = (System_Delegate_o *)
              il2cpp_runtime_helper_02300640(&(TypeInfo_AccountManager->fields)._signupTabButton[5].monitor,pSVar36,source);
    bVar43 = source != pSVar36;
    source = pSVar36;
  } while (bVar43);
  return;
}


// UI.AboutPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___ctor (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x43f0f50

void UI_AboutPopup___c__DisplayClass17_0___ctor
               (UI_AboutPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x43f1010

void UI_AboutPopup___c__DisplayClass17_0___SetupBottomButtons_b__0
               (UI_AboutPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int iVar2;
  UI_AboutPopup_o *pUVar3;
  Settings_BoolSetting_o *__this_00;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_c *pUVar5;
  void *pvVar6;
  long *plVar7;
  code *vtableDispatch;
  System_RuntimeTypeHandle_o handle;
  byte bVar8;
  byte bVar9;
  bool_conflict bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool_conflict bVar15;
  System_Type_array *components;
  System_Type_o *pSVar16;
  long lVar17;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UI_AccountPanel_o *pUVar20;
  UnityEngine_RectTransform_o *pUVar21;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UI_AccountPanel_o *pUVar22;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  System_Action_o *pSVar23;
  UnityEngine_UI_Text_o *x;
  UnityEngine_UI_Text_o *pUVar24;
  UI_ElementStyle_o *pUVar25;
  UnityEngine_Events_UnityAction_o *pUVar26;
  MethodInfo *pMVar27;
  UnityEngine_Material_o *pUVar28;
  UnityEngine_Transform_o *pUVar29;
  UnityEngine_Transform_o *pUVar30;
  UnityEngine_Transform_o *__this_04;
  Il2CppObject *pIVar31;
  undefined8 *puVar32;
  System_String_o *pSVar33;
  System_Delegate_o *value_00;
  System_Delegate_o *pSVar34;
  UnityEngine_GameObject_c *pUVar35;
  System_String_o *pSVar36;
  Events_OnPreLoadScene_o *value_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_05;
  byte bVar37;
  uint value_02;
  UI_AccountPanel_o *__this_05;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  System_Delegate_o *source;
  bool bVar41;
  UnityEngine_Color_o UVar42;
  byte bStack_106;
  
  pUVar3 = (__this->fields).__4__this;
  if (pUVar3 != (UI_AboutPopup_o *)0x0) {
    pSVar36 = (__this->fields).buttonName;
    if (g_data_057ae521 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Back");
      g_data_057ae521 = '\x01';
    }
    bVar10 = System_String__op_Equality(pSVar36,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae522 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountPanel_AddComponent_AccountPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AccountPanel");
    g_data_057ae522 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_043f11d9:
    il2cpp_runtime_helper_022b2c90();
label_043f11de:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar16 == (System_Type_o *)0x0) ||
          (lVar17 = il2cpp_runtime_helper_023051f0(pSVar16,(((components->obj).klass)->_1).element_class), lVar17 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar16;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar16);
      pUVar18 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar18,"AccountPanel",components,(MethodInfo *)0x0);
      if ((pUVar18 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0),
         pUVar19 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30
                  (pUVar19,(UnityEngine_Transform_o *)__this,0,(MethodInfo *)0x0);
        pMVar27 = MethodInfo_AccountPanel_AddComponent_AccountPanel;
        pUVar20 = (UI_AccountPanel_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar18,(MethodInfo_255A020 *)MethodInfo_AccountPanel_AddComponent_AccountPanel);
        if (pUVar20 != (UI_AccountPanel_o *)0x0) {
          UI_AccountPanel__Build(pUVar20,pMVar27);
          return;
        }
      }
      goto label_043f11d9;
    }
    goto label_043f11de;
  }
  pUVar20 = (UI_AccountPanel_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(pUVar20,0);
  if (g_data_057ae523 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae523 = '\x01';
  }
  pUVar21 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar20,MethodInfo_RectTransform_GetComponent_RectTransform);
  (pUVar20->fields)._rect = pUVar21;
  il2cpp_runtime_helper_022b4080(&(pUVar20->fields)._rect);
  pUVar21 = (pUVar20->fields)._rect;
  __this_05 = (UI_AccountPanel_o *)0x0;
  if (pUVar21 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_sizeDelta(pUVar21,(UnityEngine_Vector2_o)0x43e10000,(MethodInfo *)0x0);
    __this_05 = pUVar20;
    pUVar18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
    if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_RawImage_AddComponent_RawImage);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = "DefaultPanel";
      value = (UnityEngine_Texture_o *)
              UI_UIManager__GetThemeTexture
                        ((System_String_o *)"DefaultPanel","MainBody","BackgroundTexture",
                         (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
        UVar42 = UI_UIManager__GetThemeColor
                           ((System_String_o *)"DefaultPanel","MainBody","BackgroundColor",
                            (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                  (UVar42.fields._0_8_,CONCAT44(UVar42.fields.a * 0.75,UVar42.fields.b),__this_01);
        __this_05 = pUVar20;
        pUVar18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
          pUVar22 = (UI_AccountPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
          __this_05 = pUVar22;
          UnityEngine_RectOffset___ctor_4dbeaf0
                    ((UnityEngine_RectOffset_o *)pUVar22,10,10,10,10,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_LayoutGroup__set_padding
                      ((UnityEngine_UI_LayoutGroup_o *)__this_02,(UnityEngine_RectOffset_o *)pUVar22,
                       (MethodInfo *)0x0);
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
            __this_05 = pUVar20;
            pUVar22 = (UI_AccountPanel_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
            if ((pUVar22 != (UI_AccountPanel_o *)0x0) &&
               (__this_03 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar22,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter), __this_05 = pUVar22,
               __this_03 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
              UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_03,0,(MethodInfo *)0x0);
              UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_03,2,(MethodInfo *)0x0);
              __this_00 = (pUVar20->fields)._keepSignedIn;
              if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae57f == '\0') goto label_043f1659;
label_043f152d:
                iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
              }
              else {
                if (g_data_057ae57f != '\0') goto label_043f152d;
label_043f1659:
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                g_data_057ae57f = '\x01';
                iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
              }
              __this_05 = TypeInfo_AccountManager;
              if (iVar2 == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = TypeInfo_AccountManager;
              }
              TypeInfo_AccountManager = __this_05;
              if (__this_00 != (Settings_BoolSetting_o *)0x0) {
                bVar38 = *(byte *)((long)&(__this_05->fields)._signupTabButton[3].klass + 1);
                pMVar27 = (MethodInfo *)(ulong)bVar38;
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)__this_00,(uint)bVar38,MethodInfo_Void_set_Value);
                UI_AccountPanel__BuildContent(pUVar20,pMVar27);
                UI_AccountPanel__BuildCollapsedUserLabel(pUVar20,pMVar27);
                UI_AccountPanel__BuildCollapseBar(pUVar20,pMVar27);
                pUVar18 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar18,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pSVar23 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar23,(MethodInfo *)0x0);
                pSVar23 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar23,(MethodInfo *)0x0);
                pSVar23 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar23,(MethodInfo *)0x0);
                pMVar27 = (MethodInfo *)0x0;
                ApplicationManagers_AccountManager__RefreshAuthMethods
                          ((System_Action_bool__string__o *)0x0,(MethodInfo *)0x0);
                UI_AccountPanel__RefreshState(pUVar20,pMVar27);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae525 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnOAuthCancelClick);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Cancel Sign In");
    g_data_057ae525 = '\x01';
  }
  pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  pUVar18 = UI_ElementFactory__CreateVerticalGroup(pUVar19,6.0,1,(MethodInfo *)0x0);
  ppUVar1 = &(__this_05->fields)._content;
  (__this_05->fields)._content = pUVar18;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar18);
  pUVar18 = (__this_05->fields)._content;
  pUVar24 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar24 = x;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      pUVar24 = (UnityEngine_UI_Text_o *)*ppUVar1;
      if (pUVar24 == (UnityEngine_UI_Text_o *)0x0) goto label_043f1a94;
      x = (UnityEngine_UI_Text_o *)
          UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar24,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    }
    if (x != (UnityEngine_UI_Text_o *)0x0) {
      (*(x->klass->vtable)._36_OnCullingChanged.methodPtr)
                (0x43d70000,x,(x->klass->vtable)._36_OnCullingChanged.method);
      (*(x->klass->vtable)._40_UpdateMaterial.methodPtr)(0,x);
      pUVar24 = (UnityEngine_UI_Text_o *)0x0;
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar19 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        UI_AccountPanel__BuildTabs(__this_05,pUVar19,method_00);
        pUVar18 = (__this_05->fields)._content;
        pUVar24 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
          pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
          pUVar18 = UI_AccountPanel__BuildSignUpForm(__this_05,pUVar19,method_01);
          (__this_05->fields)._signupContent = pUVar18;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields)._signupContent);
          pUVar18 = (__this_05->fields)._content;
          pUVar24 = (UnityEngine_UI_Text_o *)0x0;
          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
            pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
            pUVar18 = UI_AccountPanel__BuildLoginForm(__this_05,pUVar19,method_02);
            (__this_05->fields)._loginContent = pUVar18;
            il2cpp_runtime_helper_022b4080(&(__this_05->fields)._loginContent);
            pUVar18 = (__this_05->fields)._content;
            pUVar24 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
              pUVar18 = UI_AccountPanel__BuildForgotPasswordForm(__this_05,pUVar19,method_03);
              (__this_05->fields)._forgotPasswordContent = pUVar18;
              il2cpp_runtime_helper_022b4080(&(__this_05->fields)._forgotPasswordContent);
              pUVar18 = (__this_05->fields)._content;
              pUVar24 = (UnityEngine_UI_Text_o *)0x0;
              if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                pUVar18 = UI_AccountPanel__BuildLoggedInView(__this_05,pUVar19,method_04);
                (__this_05->fields)._loggedInContent = pUVar18;
                il2cpp_runtime_helper_022b4080(&(__this_05->fields)._loggedInContent);
                pUVar18 = (__this_05->fields)._content;
                pUVar24 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar24 = (UnityEngine_UI_Text_o *)
                            UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                  pUVar25 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor
                            (pUVar25,0x15,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                  pUVar18 = UI_ElementFactory__CreateDefaultLabel
                                      ((UnityEngine_Transform_o *)pUVar24,pUVar25,
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,
                                       (MethodInfo *)0x0);
                  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar24 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Text_GetComponent_Text);
                    (__this_05->fields)._statusLabel = pUVar24;
                    il2cpp_runtime_helper_022b4080(&(__this_05->fields)._statusLabel);
                    pUVar24 = (__this_05->fields)._statusLabel;
                    if ((pUVar24 != (UnityEngine_UI_Text_o *)0x0) &&
                       (pUVar18 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0),
                       pUVar18 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
                      pUVar24 = (UnityEngine_UI_Text_o *)0x0;
                      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar19 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
                        pUVar25 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                        UI_ElementStyle___ctor
                                  (pUVar25,0x10,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                        pUVar26 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pMVar27 = (MethodInfo *)
                                  UI_ElementFactory__CreateDefaultButton
                                            (pUVar19,pUVar25,"Cancel Sign In",430.0,22.0,pUVar26,(MethodInfo *)0x0
                                            );
                        (__this_05->fields)._oauthCancelButton = (UnityEngine_GameObject_o *)pMVar27;
                        il2cpp_runtime_helper_022b4080(&(__this_05->fields)._oauthCancelButton);
                        UI_AccountPanel__ApplySubtleButtonStyle
                                  ((__this_05->fields)._oauthCancelButton,pMVar27);
                        pUVar18 = (__this_05->fields)._oauthCancelButton;
                        pUVar24 = (UnityEngine_UI_Text_o *)0x0;
                        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
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
label_043f1a94:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    g_data_057ae52b = '\x01';
  }
  pUVar25 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar25,0x1b,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
  pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
  pUVar18 = UI_ElementFactory__CreateDefaultLabel
                      (pUVar19,pUVar25,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,
                       (MethodInfo *)0x0);
  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
    pUVar28 = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Text_GetComponent_Text);
    pUVar24[1].fields.m_Material = pUVar28;
    il2cpp_runtime_helper_022b4080(&pUVar24[1].fields.m_Material,pUVar28);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae52c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleCollapsed);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae52c = '\x01';
  }
  pMVar27 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)pMVar27,0x10,120.0,20.0,(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
  pUVar29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
  pSVar36 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar26 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar30 = (UnityEngine_Transform_o *)
            UI_ElementFactory__CreateDefaultButton
                      (pUVar29,(UI_ElementStyle_o *)pMVar27,pSVar36,430.0,22.0,pUVar26,(MethodInfo *)0x0);
  pUVar29 = pUVar30;
  UI_AccountPanel__ApplySubtleButtonStyle((UnityEngine_GameObject_o *)pUVar30,pMVar27);
  if (((pUVar30 != (UnityEngine_Transform_o *)0x0) &&
      (__this_04 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar30,(MethodInfo *)0x0), pUVar29 = pUVar30,
      __this_04 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar30 = UnityEngine_Transform__Find(__this_04,"Text",(MethodInfo *)0x0), pUVar29 = __this_04,
     pUVar30 != (UnityEngine_Transform_o *)0x0)) {
    pIVar31 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar30,MethodInfo_Text_GetComponent_Text);
    pUVar19[0xc].fields.m_CachedPtr = (intptr_t)pIVar31;
    il2cpp_runtime_helper_022b4080(&pUVar19[0xc].fields,pIVar31);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae535 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xbc");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xb2");
    il2cpp_runtime_helper_023445d0(&"Offline. Go online to restore your session.");
    il2cpp_runtime_helper_023445d0(&"Complete sign-in in your browser.");
    il2cpp_runtime_helper_023445d0(&"Go Online");
    il2cpp_runtime_helper_023445d0(&"Choose a sign-in provider to continue.");
    il2cpp_runtime_helper_023445d0(&"Go Offline");
    il2cpp_runtime_helper_023445d0(&"email_password");
    il2cpp_runtime_helper_023445d0(&"Signed in as ");
    il2cpp_runtime_helper_023445d0(&"No sign-in methods are currently available.");
    il2cpp_runtime_helper_023445d0(&"discord");
    il2cpp_runtime_helper_023445d0(&"(unknown)");
    g_data_057ae535 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  bVar10 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
  bVar39 = (byte)uVar11;
  bVar40 = (byte)bVar10 & (byte)(uVar11 ^ 1);
  uVar12 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("email_password",(MethodInfo *)0x0);
  uVar13 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("discord",(MethodInfo *)0x0);
  uVar14 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("google",(MethodInfo *)0x0);
  bVar38 = (byte)uVar12;
  if ((bVar38 == 0) && (((uint)((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr | 2) == 2)
     ) {
    *(undefined4 *)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr = 1;
  }
  bVar8 = bVar39 ^ bVar40 ^ 1;
  if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 5) == '\0') {
    *(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) = bVar39;
  }
  bVar9 = bVar8 & bVar38;
  value_02 = 0;
  if (bVar9 == 1) {
    value_02 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr != 2);
  }
  pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[7].fields)->m_CachedPtr;
  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar18,value_02,(MethodInfo *)0x0);
  if (pUVar29[8].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar29[8].klass,value_02,(MethodInfo *)0x0);
  if (pUVar29[8].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar29[8].monitor,value_02,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[5].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bStack_106 = bVar38 ^ 1;
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[5].fields)->m_CachedPtr;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,(uint)(bVar8 & bStack_106),(MethodInfo *)0x0);
  }
  pUVar5 = pUVar29[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar37 = (byte)uVar13 | (byte)uVar14;
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[6].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar29[6].klass,(uint)bVar37,(MethodInfo *)0x0);
  }
  pUVar4 = pUVar29[6].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[6].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[6].monitor,uVar13 & 0xff,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[6].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[6].fields)->m_CachedPtr;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,uVar14 & 0xff,(MethodInfo *)0x0);
  }
  pUVar5 = pUVar29[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar5 = pUVar29[7].klass;
    if (bVar37 == 0) {
      puVar32 = &"No sign-in methods are currently available.";
    }
    else if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 7) ==
             '\0') {
      puVar32 = &"Choose a sign-in provider to continue.";
    }
    else {
      puVar32 = &"Complete sign-in in your browser.";
    }
    if (pUVar5 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    pvVar6 = (pUVar5->_1).image;
    (**(code **)((long)pvVar6 + 0x5e8))(pUVar5,*puVar32,*(undefined8 *)((long)pvVar6 + 0x5f0));
  }
  pUVar4 = pUVar29[0xb].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if ((*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 7) == '\0')
       || (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) != '\0')
       ) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uVar11 ^ 1) & 0xff;
    }
    if (pUVar29[0xb].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[0xb].monitor,uVar11,(MethodInfo *)0x0);
  }
  pUVar4 = pUVar29[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[5].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[5].monitor,uVar12 & 0xff,(MethodInfo *)0x0);
  }
  pUVar4 = pUVar29[7].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[7].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[7].monitor,uVar12 & 0xff,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[8].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[8].fields)->m_CachedPtr;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,(uint)(bVar38 & bVar37),(MethodInfo *)0x0);
  }
  pUVar5 = pUVar29[10].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[10].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar29[10].klass,(uint)(bVar38 & bVar37),(MethodInfo *)0x0);
  }
  pUVar5 = pUVar29[9].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[9].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar29[9].klass,(uint)bVar37,(MethodInfo *)0x0);
  }
  pUVar4 = pUVar29[10].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[10].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[10].monitor,(uint)(bVar38 & bVar37),(MethodInfo *)0x0);
  }
  pUVar4 = pUVar29[9].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[9].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar29[9].monitor,uVar13 & 0xff,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[10].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[10].fields)->m_CachedPtr;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,uVar13 & 0xff,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[9].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[9].fields)->m_CachedPtr;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,uVar14 & 0xff,(MethodInfo *)0x0);
  }
  pUVar5 = pUVar29[0xb].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = 0;
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (pUVar29[0xb].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pUVar29[0xb].klass,uVar14 & 0xff,(MethodInfo *)0x0);
  }
  if ((bVar9 & (*(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) ^ 1
               )) != 0) {
    uVar11 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr == 0);
  }
  if (pUVar29[4].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  uVar12 = 0;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar29[4].klass,uVar11,(MethodInfo *)0x0);
  if ((~*(uint *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) &
      (uint)bVar8) != 0) {
    uVar12 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr == 1 |
                   bStack_106);
  }
  if (pUVar29[4].monitor == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  uVar11 = 0;
  UnityEngine_GameObject__SetActive(pUVar29[4].monitor,uVar12,(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[4].fields)->m_CachedPtr;
  if ((bVar9 & (*(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) ^ 1
               )) != 0) {
    uVar11 = (uint)((int)((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr == 2);
  }
  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive(pUVar18,uVar11,(MethodInfo *)0x0);
  if (pUVar29[5].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive
            ((UnityEngine_GameObject_o *)pUVar29[5].klass,
             (uint)(((byte)bVar10 | bVar39) &
                   *(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4)
                   == '\0'),(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar29[3].fields)->m_CachedPtr;
  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
  UnityEngine_GameObject__SetActive
            (pUVar18,(uint)(*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->
                                             m_CachedPtr + 4) == '\0'),(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar36 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar10 = System_String__IsNullOrEmpty(pSVar36,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar36 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    pUVar5 = pUVar29[0xc].klass;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar5 = pUVar29[0xc].klass;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    pSVar36 = "(unknown)";
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
label_043f262f:
    pUVar4 = pUVar29[0xc].monitor;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (bVar39 == 0) {
      if (bVar40 != 0) {
        pUVar5 = pUVar29[0xc].klass;
        if (pUVar5 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
        pvVar6 = (pUVar5->_1).image;
        (**(code **)((long)pvVar6 + 0x5e8))(pUVar5,"Offline. Go online to restore your session.",*(undefined8 *)((long)pvVar6 + 0x5f0));
      }
      goto label_043f262f;
    }
    pUVar5 = pUVar29[0xc].klass;
    pSVar33 = System_String__Concat_3ae5ba0("Signed in as ",pSVar36,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    pvVar6 = (pUVar5->_1).image;
    (**(code **)((long)pvVar6 + 0x5e8))(pUVar5,pSVar33,*(undefined8 *)((long)pvVar6 + 0x5f0));
    pUVar4 = pUVar29[0xc].monitor;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    plVar7 = pUVar29[0xc].monitor;
    if (plVar7 == (long *)0x0) goto label_043f27b5;
    if (bVar39 == 0) {
      puVar32 = &"Go Online";
    }
    else {
      puVar32 = &"Go Offline";
    }
    (**(code **)(*plVar7 + 0x5e8))(plVar7,*puVar32,*(undefined8 *)(*plVar7 + 0x5f0));
  }
  pUVar5 = pUVar29[0xd].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (pUVar29[0xd].klass == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
    bVar38 = *(byte *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4);
    pUVar18 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar29[0xd].klass,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_043f27b5;
    UnityEngine_GameObject__SetActive(pUVar18,(uint)(bVar38 & bVar39),(MethodInfo *)0x0);
    if ((bVar38 & bVar39) != 0) {
      pUVar5 = pUVar29[0xd].klass;
      pSVar36 = System_String__Concat_3ae5ba0("Signed in as ",pSVar36,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_c *)0x0) goto label_043f27b5;
      pvVar6 = (pUVar5->_1).image;
      (**(code **)((long)pvVar6 + 0x5e8))(pUVar5,pSVar36,*(undefined8 *)((long)pvVar6 + 0x5f0));
    }
  }
  pUVar4 = (UnityEngine_Object_o *)((UnityEngine_GameObject_Fields *)&pUVar29[0xc].fields)->m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  plVar7 = (long *)((UnityEngine_GameObject_Fields *)&pUVar29[0xc].fields)->m_CachedPtr;
  if (plVar7 != (long *)0x0) {
    if (*(char *)((long)&((UnityEngine_GameObject_Fields *)&pUVar29[0xd].fields)->m_CachedPtr + 4) == '\0') {
      puVar32 = &"\xe2\x96\xb2";
    }
    else {
      puVar32 = &"\xe2\x96\xbc";
    }
    vtableDispatch = *(code **)(*plVar7 + 0x5e8);
    (*vtableDispatch)(plVar7,*puVar32,*(undefined8 *)(*plVar7 + 0x5f0),vtableDispatch);
    return;
  }
label_043f27b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae524 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleAuthMethodsChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HandleLoggedOut);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae524 = '\x01';
  }
  pSVar23 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar23,(MethodInfo *)0x0);
  pSVar23 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar23,(MethodInfo *)0x0);
  value_00 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (g_data_057ae983 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae983 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (TypeInfo_AccountManager->fields)._signupTabButton[5].monitor;
  do {
    pSVar34 = System_Delegate__Remove(source,value_00,(MethodInfo *)0x0);
    if ((pSVar34 != (System_Delegate_o *)0x0) && (pSVar34->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0(pSVar34);
      if (g_data_057ae984 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
        g_data_057ae984 = '\x01';
      }
      if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar35 = (UnityEngine_GameObject_c *)
                Utility_SingletonFactory__CreateSingleton_object_
                          ((Il2CppObject *)((TypeInfo_AccountManager->fields)._signupTabButton)->klass,MethodInfo_AccountManager_CreateSingleton_AccountManager);
      ((TypeInfo_AccountManager->fields)._signupTabButton)->klass = pUVar35;
      il2cpp_runtime_helper_022b4080((TypeInfo_AccountManager->fields)._signupTabButton);
      if (*(char *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor == '\0') {
        value_01 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
        Events_OnPreLoadScene___ctor();
        Events_EventManager__add_OnPreLoadScene(value_01,(MethodInfo *)0x0);
        pUVar20 = TypeInfo_AccountManager;
        if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar20 = TypeInfo_AccountManager;
          *(undefined1 *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor = 1;
          iVar2 = *(int *)((long)&(pUVar20->fields)._signupDiscordButton + 4);
        }
        else {
          *(undefined1 *)&((TypeInfo_AccountManager->fields)._signupTabButton)->monitor = 1;
          iVar2 = *(int *)((long)&(pUVar20->fields)._signupDiscordButton + 4);
        }
      }
      else {
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ae9a1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
        il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
        g_data_057ae9a1 = '\x01';
        iVar2 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar36 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                           (MethodInfo *)0x0);
      bVar10 = System_IO_File__Exists(pSVar36,(MethodInfo *)0x0);
      if (g_data_057aea1a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea1a = '\x01';
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      else {
        iVar2 = *(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar20 = TypeInfo_AccountManager;
      *(char *)((long)&(TypeInfo_AccountManager->fields)._signupTabButton[3].klass + 1) = (char)bVar10;
      ApplicationManagers_AccountManager__LoadRefreshToken((MethodInfo *)pUVar20);
      pMVar27 = (MethodInfo *)0x0;
      bVar10 = System_String__IsNullOrEmpty
                         ((System_String_o *)(TypeInfo_AccountManager->fields)._signupTabButton[4].klass,
                          (MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        method_05 = extraout_RDX;
        if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_05 = extraout_RDX_00;
        }
        pMVar27 = (MethodInfo *)0x1;
        ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_05);
      }
      if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,pMVar27);
      return;
    }
    if (*(int *)((long)&(TypeInfo_AccountManager->fields)._signupDiscordButton + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar34 = (System_Delegate_o *)
              il2cpp_runtime_helper_02300640(&(TypeInfo_AccountManager->fields)._signupTabButton[5].monitor,pSVar34,source);
    bVar41 = source != pSVar34;
    source = pSVar34;
  } while (bVar41);
  return;
}


// UI.AboutPopup$$get_Title
// il2cpp: System_String_o* UI_AboutPopup__get_Title (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f08e0

System_String_o * UI_AboutPopup__get_Title(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.AboutPopup$$get_Width
// il2cpp: float UI_AboutPopup__get_Width (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0900

float UI_AboutPopup__get_Width(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.AboutPopup$$get_Height
// il2cpp: float UI_AboutPopup__get_Height (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0910

float UI_AboutPopup__get_Height(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.AboutPopup$$get_CategoryPanel
// il2cpp: bool UI_AboutPopup__get_CategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0920

bool_conflict UI_AboutPopup__get_CategoryPanel(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$get_CategoryButtons
// il2cpp: bool UI_AboutPopup__get_CategoryButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0930

bool_conflict UI_AboutPopup__get_CategoryButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_AboutPopup__get_DefaultCategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0940

System_String_o * UI_AboutPopup__get_DefaultCategoryPanel(UI_AboutPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae51d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help");
    g_data_057ae51d = '\x01';
  }
  return "Help";
}


// UI.AboutPopup$$get_UseSound
// il2cpp: bool UI_AboutPopup__get_UseSound (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0970

bool_conflict UI_AboutPopup__get_UseSound(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$Setup
// il2cpp: void UI_AboutPopup__Setup (UI_AboutPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43f0980

void UI_AboutPopup__Setup(UI_AboutPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  long lVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_HeadedPanel_o *pUVar5;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  ulong uVar6;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae520 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae520 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar3 == 0) {
label_043f0bca:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Back";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        pUVar5 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        __this_03 = pUVar5;
        System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
        if (pUVar5 == (UI_HeadedPanel_o *)0x0) goto label_043f0bca;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar5->fields).m_CancellationTokenSource;
        (pUVar5->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043f0bcf;
        (pUVar5->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar5->fields);
        parent_00 = (__this->fields).BottomBar;
        pSVar1 = (System_String_o *)(pUVar5->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    return;
  }
label_043f0bcf:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae51e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"AboutPopup");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae51e = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_043f0e8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Help";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
        pUVar5 = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_043f0e8e;
        pUVar5 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
        (__this_01->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_03;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043f0e93;
        (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        pSVar1 = (System_String_o *)(__this_01->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocale
                           ("MainMenu","AboutPopup",pSVar1,"","",(MethodInfo *)0x0);
        pUVar5 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)pUVar5,pUVar2,pSVar1,pUVar4,(MethodInfo *)0x0);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_043f0e8e;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
        pUVar5 = __this_02;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043f0e8e;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
    return;
  }
label_043f0e93:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup$$SetupTopButtons
// il2cpp: void UI_AboutPopup__SetupTopButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0be0

void UI_AboutPopup__SetupTopButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_o *parent;
  ulong uVar3;
  
  if (g_data_057ae51e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"AboutPopup");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae51e = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_043f0e8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = "Help";
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
        parent = __this_02;
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_043f0e8e;
        parent = __this_02 + 1;
        __this_02[1].klass = (UnityEngine_Transform_c *)__this;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_043f0e93;
        (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        pSVar1 = (System_String_o *)(__this_02->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocale
                           ("MainMenu","AboutPopup",pSVar1,"","",(MethodInfo *)0x0);
        parent = (__this->fields).TopBar;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_03 = (UnityEngine_Transform_o *)
                    UI_ElementFactory__CreateCategoryButton(parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0)
        ;
        if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_043f0e8e;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
        key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
        parent = __this_03;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043f0e8e;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_043f0e93:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup$$RegisterCategoryPanels
// il2cpp: void UI_AboutPopup__RegisterCategoryPanels (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0eb0

void UI_AboutPopup__RegisterCategoryPanels(UI_AboutPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Type_o *value;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae51f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AboutHelpPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Help");
    g_data_057ae51f = '\x01';
  }
  handle.fields.value = TypeRef_AboutHelpPanel.fields.value;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_00,"Help",(Il2CppObject *)value,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup$$SetupBottomButtons
// il2cpp: void UI_AboutPopup__SetupBottomButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f09a0

void UI_AboutPopup__SetupBottomButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  long lVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_HeadedPanel_o *pUVar5;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  ulong uVar6;
  
  if (g_data_057ae520 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae520 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar3 == 0) {
label_043f0bca:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Back";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        pUVar5 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        __this_03 = pUVar5;
        System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
        if (pUVar5 == (UI_HeadedPanel_o *)0x0) goto label_043f0bca;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar5->fields).m_CancellationTokenSource;
        (pUVar5->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043f0bcf;
        (pUVar5->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar5->fields);
        parent = (__this->fields).BottomBar;
        pSVar1 = (System_String_o *)(pUVar5->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,pUVar2,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    return;
  }
label_043f0bcf:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae51e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"AboutPopup");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae51e = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_043f0e8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Help";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
        pUVar5 = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_043f0e8e;
        pUVar5 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
        (__this_01->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_03;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043f0e93;
        (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        pSVar1 = (System_String_o *)(__this_01->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocale
                           ("MainMenu","AboutPopup",pSVar1,"","",(MethodInfo *)0x0);
        pUVar5 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)pUVar5,pUVar2,pSVar1,pUVar4,(MethodInfo *)0x0);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_043f0e8e;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
        pUVar5 = __this_02;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043f0e8e;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
    return;
  }
label_043f0e93:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup$$OnBottomBarButtonClick
// il2cpp: void UI_AboutPopup__OnBottomBarButtonClick (UI_AboutPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43f0f60

void UI_AboutPopup__OnBottomBarButtonClick(UI_AboutPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae521 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae521 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.AboutPopup$$.ctor
// il2cpp: void UI_AboutPopup___ctor (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x43f0fd0

void UI_AboutPopup___ctor(UI_AboutPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


