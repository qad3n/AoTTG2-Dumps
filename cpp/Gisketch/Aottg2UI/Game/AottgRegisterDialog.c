// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRegisterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor (const MethodInfo* method);
// 0x44f3bf0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec95 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, const MethodInfo* method);
// 0x44f3c60

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x44f3c70

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  System_String_o **ppSVar1;
  long lVar2;
  System_String_o *a;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_Action_AottgUi__o *build;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_03;
  MethodInfo *method_04;
  TMPro_TMP_Text_o *__this_03;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  float local_f0;
  float fStackY_ec;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057aec96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__18_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Confirm password");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
    il2cpp_runtime_helper_023445d0(&"At least 8 characters");
    il2cpp_runtime_helper_023445d0(&"Email address");
    il2cpp_runtime_helper_023445d0(&"Repeat password");
    il2cpp_runtime_helper_023445d0(&"account-register-submit");
    il2cpp_runtime_helper_023445d0(&"account-register-login-link");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Email");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AccountNameHint");
    il2cpp_runtime_helper_023445d0(&"account-register-password");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Create Account");
    il2cpp_runtime_helper_023445d0(&"account-register-email");
    il2cpp_runtime_helper_023445d0(&"account.registerCta");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"account-register-keep-signed-in");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.RepeatPassword");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"Email");
    il2cpp_runtime_helper_023445d0(&"Account name");
    il2cpp_runtime_helper_023445d0(&"account-register-confirm-password");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.EmailAddress");
    il2cpp_runtime_helper_023445d0(&"account-register-display-name");
    il2cpp_runtime_helper_023445d0(&"Common.Password");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.DisplayName");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.PasswordHint");
    il2cpp_runtime_helper_023445d0(&"account.register.email");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ConfirmPassword");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.DisplayNamePlaceholder");
    il2cpp_runtime_helper_023445d0(&"Your account name is your unique account identifier. It is separate from your in-game name.");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    il2cpp_runtime_helper_023445d0(&"Sasha Blouse");
    g_data_057aec96 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,(System_String_o *)0x0,
             in_stack_ffffffffffffffa0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-display-name","MainMenu.Account.DisplayName","Account name","MainMenu.Account.DisplayNamePlaceholder","Sasha Blouse",0,0,(System_String_o *)0x0,
             in_stack_ffffffffffffffa0);
  pGVar8 = "Your account name is your unique account identifier. It is separate from your in-game name.";
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
           Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.AccountNameHint",(System_String_o *)"Your account name is your unique account identifier. It is separate from your in-game name.",method_00);
  if ((form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (form,(System_String_o *)pGVar4,"accountDialogText",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), pGVar8 = pGVar4,
     pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = "MainMenu.Account.AccountNameHint";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
              (form,"account-register-password","Common.Password","Password","MainMenu.Account.PasswordHint","At least 8 characters",2,0,
               (System_String_o *)0x0,in_stack_ffffffffffffffa0);
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
              (form,"account-register-confirm-password","MainMenu.Account.ConfirmPassword","Confirm password","MainMenu.Account.RepeatPassword","Repeat password",2,0,
               (System_String_o *)0x0,in_stack_ffffffffffffffa0);
    Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(form,"account-register-keep-signed-in",method_01);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",method_02);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar6,"account.register.email","account-register-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.CreateAccount";
      il2cpp_runtime_helper_022b4080();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta("account.registerCta",(MethodInfo *)pGVar8);
      (pGVar5->fields).contentLayout = pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar8);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = "default";
      build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      if (build == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar2 + 8) = build;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,build);
      }
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,4.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (form,pSVar6,build,"account-register-login-link",pGVar8,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_03 = extraout_RDX;
  if (g_data_057aec97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"account-register-open-login");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AlreadyHaveAccount");
    il2cpp_runtime_helper_023445d0(&"Already have an account?");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec97 = '\x01';
    method_03 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_03 = extraout_RDX_01;
  }
  pGVar4 = "MainMenu.Account.AlreadyHaveAccount";
  pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)"MainMenu.Account.AlreadyHaveAccount","Already have an account?",method_03);
  if ((pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (pGVar4 = pGVar8,
     pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar6,"accountDialogText",(System_String_o *)0x0
                         ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.AlreadyHaveAccount";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SignIn","Sign In",method_04);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,3,pSVar6,"account.openLogin","account-register-open-login",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = pGVar8;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pSVar6 = "account.auth.idle";
      if (g_data_057aec93 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec93 = '\x01';
      }
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar4 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).alignSelf = pSVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignSelf,pSVar6);
        (pGVar5->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec98 = '\x01';
  }
  pGVar8 = pGVar4;
  pSVar6 = (System_String_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar4,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pSVar6 == (System_String_o *)0x0) {
    pGVar8 = pGVar4;
    pSVar6 = (System_String_o *)
             UnityEngine_Component__GetComponentInChildren_object__24e7d50
                       ((UnityEngine_Component_o *)pGVar4,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    ppSVar1 = &(pGVar4->fields).alignItems;
    (pGVar4->fields).alignItems = pSVar6;
    il2cpp_runtime_helper_022b4080(ppSVar1,pSVar6);
    pSVar6 = (System_String_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar4,MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    if (pSVar6 == (System_String_o *)0x0) {
      pGVar8 = pGVar4;
      __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar4,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_044f4614;
      pSVar6 = (System_String_o *)UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    }
    (pGVar4->fields).alignSelf = pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf);
    pSVar6 = (pGVar4->fields).alignItems;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    if ((TMPro_TMP_Text_o *)*ppSVar1 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppSVar1,0,(MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      if ((TMPro_TMP_Text_o *)*ppSVar1 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*ppSVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044f4614:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec99 = '\x01';
  }
  pSVar6 = (pGVar8->fields).alignItems;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_03 = (TMPro_TMP_Text_o *)(pGVar8->fields).alignItems;
  if ((__this_03 != (TMPro_TMP_Text_o *)0x0) &&
     (__this_02 = TMPro_TMP_Text__get_rectTransform(__this_03,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar11 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    pSVar6 = (pGVar8->fields).alignItems;
    __this_03 = (TMPro_TMP_Text_o *)0x0;
    if (pSVar6 != (System_String_o *)0x0) {
      ppSVar1 = &(pGVar8->fields).wrap;
      a = *ppSVar1;
      pSVar6 = (System_String_o *)
               (*(code *)pSVar6->klass[1].vtable._18_System_IConvertible_ToInt64.method)
                         (UVar11.fields.m_XMin,pSVar6,
                          pSVar6->klass[1].vtable._19_System_IConvertible_ToUInt64.methodPtr);
      bVar3 = System_String__op_Equality(a,pSVar6,(MethodInfo *)0x0);
      local_f0 = UVar11.fields.m_Width;
      fStackY_ec = UVar11.fields.m_Height;
      if (((char)bVar3 != '\0') &&
         (pGVar7 = (pGVar8->fields).width, fVar9 = SUB84(pGVar7,0) - local_f0,
         fVar10 = (float)((ulong)pGVar7 >> 0x20) - fStackY_ec, fVar10 * fVar10 + fVar9 * fVar9 < 9.9999994e-11
         )) {
        return;
      }
      pSVar6 = (pGVar8->fields).alignItems;
      __this_03 = (TMPro_TMP_Text_o *)0x0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6 = (System_String_o *)
                 (*(code *)pSVar6->klass[1].vtable._18_System_IConvertible_ToInt64.method)
                           (pSVar6,pSVar6->klass[1].vtable._19_System_IConvertible_ToUInt64.methodPtr);
        (pGVar8->fields).wrap = pSVar6;
        il2cpp_runtime_helper_022b4080(ppSVar1);
        *(float *)&(pGVar8->fields).width = local_f0;
        *(float *)((long)&(pGVar8->fields).width + 4) = fStackY_ec;
        pSVar6 = (pGVar8->fields).alignItems;
        __this_03 = (TMPro_TMP_Text_o *)0x0;
        if (pSVar6 != (System_String_o *)0x0) {
          (*pSVar6->klass[2].vtable._13_System_IConvertible_ToByte.methodPtr)(pSVar6,0,0);
          __this_03 = (TMPro_TMP_Text_o *)(pGVar8->fields).alignItems;
          if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)(pGVar8->fields).alignSelf;
            bVar3 = TMPro_TMP_Text__get_isTextOverflowing(__this_03,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              __this_03 = (TMPro_TMP_Text_o *)(pGVar8->fields).alignItems;
              if (__this_03 == (TMPro_TMP_Text_o *)0x0) goto label_044f47ca;
              pSVar6 = (System_String_o *)
                       (*(__this_03->klass->vtable)._65_get_text.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._65_get_text.method);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar6,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_044f47ca:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44f42e0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row
               ,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  System_String_o *a;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_03;
  TMPro_TMP_Text_o *__this_04;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  float fStackY_78;
  float fStackY_74;
  
  if (g_data_057aec97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"account-register-open-login");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.AlreadyHaveAccount");
    il2cpp_runtime_helper_023445d0(&"Already have an account?");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec97 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  __this_03 = "MainMenu.Account.AlreadyHaveAccount";
  pSVar4 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)"MainMenu.Account.AlreadyHaveAccount","Already have an account?",method);
  if ((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (__this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)row,
     pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (row,pSVar4,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = (System_String_o *)"MainMenu.Account.AlreadyHaveAccount";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SignIn","Sign In",method_00);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,pSVar4,"account.openLogin","account-register-open-login",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)row;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pSVar4 = "account.auth.idle";
      if (g_data_057aec93 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec93 = '\x01';
      }
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_03 = pGVar6;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar6->fields).alignSelf = pSVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignSelf,pSVar4);
        (pGVar5->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec98 = '\x01';
  }
  pGVar6 = __this_03;
  pSVar4 = (System_String_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pSVar4 == (System_String_o *)0x0) {
    pGVar6 = __this_03;
    pSVar4 = (System_String_o *)
             UnityEngine_Component__GetComponentInChildren_object__24e7d50
                       ((UnityEngine_Component_o *)__this_03,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
  }
  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    ppSVar1 = &(__this_03->fields).alignItems;
    (__this_03->fields).alignItems = pSVar4;
    il2cpp_runtime_helper_022b4080(ppSVar1,pSVar4);
    pSVar4 = (System_String_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    if (pSVar4 == (System_String_o *)0x0) {
      pGVar6 = __this_03;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_044f4614;
      pSVar4 = (System_String_o *)UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    }
    (__this_03->fields).alignSelf = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).alignSelf);
    pSVar4 = (__this_03->fields).alignItems;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    if ((TMPro_TMP_Text_o *)*ppSVar1 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppSVar1,0,(MethodInfo *)0x0);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      if ((TMPro_TMP_Text_o *)*ppSVar1 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*ppSVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044f4614:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec99 = '\x01';
  }
  pSVar4 = (pGVar6->fields).alignItems;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_04 = (TMPro_TMP_Text_o *)(pGVar6->fields).alignItems;
  if ((__this_04 != (TMPro_TMP_Text_o *)0x0) &&
     (__this_02 = TMPro_TMP_Text__get_rectTransform(__this_04,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar9 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    pSVar4 = (pGVar6->fields).alignItems;
    __this_04 = (TMPro_TMP_Text_o *)0x0;
    if (pSVar4 != (System_String_o *)0x0) {
      ppSVar1 = &(pGVar6->fields).wrap;
      a = *ppSVar1;
      pSVar4 = (System_String_o *)
               (*(code *)pSVar4->klass[1].vtable._18_System_IConvertible_ToInt64.method)
                         (UVar9.fields.m_XMin,pSVar4,
                          pSVar4->klass[1].vtable._19_System_IConvertible_ToUInt64.methodPtr);
      bVar3 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
      fStackY_78 = UVar9.fields.m_Width;
      fStackY_74 = UVar9.fields.m_Height;
      if (((char)bVar3 != '\0') &&
         (pGVar2 = (pGVar6->fields).width, fVar7 = SUB84(pGVar2,0) - fStackY_78,
         fVar8 = (float)((ulong)pGVar2 >> 0x20) - fStackY_74, fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11))
      {
        return;
      }
      pSVar4 = (pGVar6->fields).alignItems;
      __this_04 = (TMPro_TMP_Text_o *)0x0;
      if (pSVar4 != (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)
                 (*(code *)pSVar4->klass[1].vtable._18_System_IConvertible_ToInt64.method)
                           (pSVar4,pSVar4->klass[1].vtable._19_System_IConvertible_ToUInt64.methodPtr);
        (pGVar6->fields).wrap = pSVar4;
        il2cpp_runtime_helper_022b4080(ppSVar1);
        *(float *)&(pGVar6->fields).width = fStackY_78;
        *(float *)((long)&(pGVar6->fields).width + 4) = fStackY_74;
        pSVar4 = (pGVar6->fields).alignItems;
        __this_04 = (TMPro_TMP_Text_o *)0x0;
        if (pSVar4 != (System_String_o *)0x0) {
          (*pSVar4->klass[2].vtable._13_System_IConvertible_ToByte.methodPtr)(pSVar4,0,0);
          __this_04 = (TMPro_TMP_Text_o *)(pGVar6->fields).alignItems;
          if (__this_04 != (TMPro_TMP_Text_o *)0x0) {
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)(pGVar6->fields).alignSelf;
            bVar3 = TMPro_TMP_Text__get_isTextOverflowing(__this_04,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              __this_04 = (TMPro_TMP_Text_o *)(pGVar6->fields).alignItems;
              if (__this_04 == (TMPro_TMP_Text_o *)0x0) goto label_044f47ca;
              pSVar4 = (System_String_o *)
                       (*(__this_04->klass->vtable)._65_get_text.methodPtr)
                                 (__this_04,(__this_04->klass->vtable)._65_get_text.method);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar4,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_044f47ca:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f3500

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aec8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccount");
    il2cpp_runtime_helper_023445d0(&"Create Account");
    g_data_057aec8c = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.CreateAccount","Create Account",in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f3570

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec8d == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec8d = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f35a0

int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f35b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec8e == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec8e = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f35e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec8f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec8f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f36b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec90 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aec90 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,14.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44f3770

void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_00;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar7;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar9;
  
  if (g_data_057aec91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"accountLoginEmailSection");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.CreateAccountIntro");
    il2cpp_runtime_helper_023445d0(&"Create an AOTTG2 account or continue with OAuth.");
    il2cpp_runtime_helper_023445d0(&"account-register-email-section");
    il2cpp_runtime_helper_023445d0(&"account.canEmailPassword");
    g_data_057aec91 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = "MainMenu.Account.CreateAccountIntro";
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,(System_String_o *)"MainMenu.Account.CreateAccountIntro","Create an AOTTG2 account or continue with OAuth.",in_RCX)
  ;
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,pMVar8);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,pMVar8);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountLoginEmailSection";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-register-email-section",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (g_data_057aec92 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec92 = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar3 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar4->fields).alignItems;
      (pGVar4->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080();
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        pMVar8 = extraout_RDX_01;
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar8 = extraout_RDX_02;
        }
        if (g_data_057aec53 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
          il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
          il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
          il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
          il2cpp_runtime_helper_023445d0(&"account.noMethods");
          il2cpp_runtime_helper_023445d0(&"accountDialogText");
          g_data_057aec53 = '\x01';
          pMVar8 = extraout_RDX;
        }
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar8 = extraout_RDX_00;
        }
        pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",pMVar8);
        if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (body,pSVar2,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).textKey = "MainMenu.Account.NoMethods";
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
            pSVar2 = "account.noMethods";
            if (g_data_057aec56 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec56 = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar3->fields).alignItems = pSVar2;
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems,pSVar2);
              (pGVar5->fields).contentLayout = pGVar3;
              il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar3);
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aec58 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
          g_data_057aec58 = '\x01';
        }
        __this_00 = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
        Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec92 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar9 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar6->fields).visible = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).visible,pGVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec93 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar6 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).enabled = (System_String_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enabled,pGVar9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec94 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar9 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).text = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields,pGVar6);
    (pGVar7->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enabled);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x44f3a70

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (g_data_057aec92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec92 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar3 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar1->fields).visible = key;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).visible,key);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec93 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar1 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).enabled = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enabled,pGVar3);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec94 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar3 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).text = (System_String_o *)pGVar1;
    il2cpp_runtime_helper_022b4080(&pGVar2->fields,pGVar1);
    (pGVar2->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enabled);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x44f3ae0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  if (g_data_057aec93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec93 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar2 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar1->fields).enabled = key;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).enabled,key);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec94 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar1 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = (System_String_o *)pGVar2;
    il2cpp_runtime_helper_022b4080(&__this->fields,pGVar2);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x44f3b50

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (g_data_057aec94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec94 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  __this_00 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    il2cpp_runtime_helper_022b4080(&__this->fields,textKey);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x44f3be0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


