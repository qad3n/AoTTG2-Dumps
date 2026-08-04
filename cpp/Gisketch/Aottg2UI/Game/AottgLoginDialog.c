// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgLoginDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor (const MethodInfo* method);
// 0x44efd60

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec70 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, const MethodInfo* method);
// 0x44efdd0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<BuildBody>b__16_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* email, const MethodInfo* method);
// 0x44efde0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *email,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *text;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar6;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057aec71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"Email address");
    il2cpp_runtime_helper_023445d0(&"account.login.email");
    il2cpp_runtime_helper_023445d0(&"account-login-keep-signed-in");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Email");
    il2cpp_runtime_helper_023445d0(&"account-login-email");
    il2cpp_runtime_helper_023445d0(&"account-login-password");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"Email");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.EmailAddress");
    il2cpp_runtime_helper_023445d0(&"Common.Password");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    il2cpp_runtime_helper_023445d0(&"account.loginCta");
    il2cpp_runtime_helper_023445d0(&"account-login-email-submit");
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x44efec1;
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec71 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    in_stack_ffffffffffffffe0 = (MethodInfo *)0x44efee0;
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,(System_String_o *)0x0
             ,in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-password","Common.Password","Password","Common.Password","Password",2,0,(System_String_o *)0x0
             ,in_stack_ffffffffffffffe0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(email,"account-login-keep-signed-in",method_00);
  pGVar7 = "Sign In";
  pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.SignIn",(System_String_o *)"Sign In",method_01);
  if (email != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (email,0,pSVar2,"account.login.email","account-login-email-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.SignIn";
      il2cpp_runtime_helper_022b4080();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta("account.loginCta",(MethodInfo *)pGVar4);
      (pGVar3->fields).contentLayout = pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout);
      Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks(email,(MethodInfo *)pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FooterLinks_b__17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Forgot password?");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ForgotPassword");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-login-register-link");
    il2cpp_runtime_helper_023445d0(&"account-login-open-forgot");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec72 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar5);
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,4.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar7,pSVar2,pSVar5,"account-login-register-link",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = extraout_RDX_00;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.ForgotPassword","Forgot password?",pMVar6);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar7,3,pSVar2,"account.openForgotPassword","account-login-open-forgot",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.ForgotPassword";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec6e = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = extraout_RDX_01;
  if (g_data_057aec73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"No account?");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoAccount");
    il2cpp_runtime_helper_023445d0(&"account-login-open-register");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Register");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    il2cpp_runtime_helper_023445d0(&"Register");
    g_data_057aec73 = '\x01';
    pMVar6 = extraout_RDX_02;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar6 = extraout_RDX_03;
  }
  pGVar7 = "No account?";
  text = (Gisketch_Aottg2UI_Code_AottgUi_o *)
         Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                   ("MainMenu.Account.NoAccount",(System_String_o *)"No account?",pMVar6);
  if ((__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (__this_00,(System_String_o *)text,"accountDialogText",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), pGVar7 = text,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar3->fields).textKey = "MainMenu.Account.NoAccount";
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.Register","Register",method_02);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,pSVar2,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.Register";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      pSVar2 = "account.auth.idle";
      if (g_data_057aec6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec6e = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar2);
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.onlineMode");
    il2cpp_runtime_helper_023445d0(&"account.loggedOut");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner");
    il2cpp_runtime_helper_023445d0(&"account-banner-logged-out");
    il2cpp_runtime_helper_023445d0(&"accountBanner");
    il2cpp_runtime_helper_023445d0(&"account.offlineMode");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline");
    g_data_057aec74 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountBanner";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  }
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar7,pSVar2,pSVar5,"account-banner-logged-out",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.loggedOut";
    if (g_data_057aec75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec75 = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout);
        *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = "accountBanner";
        pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar5;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
        }
        if (g_data_057aec76 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Stretch");
          il2cpp_runtime_helper_023445d0(&"Row");
          g_data_057aec76 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar7,pSVar2,pSVar5,"account-banner-offline",pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.offlineMode";
        if (g_data_057aec75 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec75 = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignItems = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout);
            *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = "accountBanner";
            pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
            if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar5;
              il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
            }
            if (g_data_057aec76 == '\0') {
              il2cpp_runtime_helper_023445d0(&"Stretch");
              il2cpp_runtime_helper_023445d0(&"Row");
              g_data_057aec76 = '\x01';
            }
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                                (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (pGVar7,pSVar2,pSVar5,"account-profile-banner",pGVar4,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = "account.onlineMode";
            if (g_data_057aec75 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec75 = '\x01';
            }
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar4->fields).alignItems = pSVar2;
              il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar3->fields).contentLayout = pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar4);
                *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,(System_String_o *)0x0,
             0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0
             ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44f00e0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *text;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  
  if (g_data_057aec72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FooterLinks_b__17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Forgot password?");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ForgotPassword");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"account-login-register-link");
    il2cpp_runtime_helper_023445d0(&"account-login-open-forgot");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec72 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = "default";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,4.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar4,pSVar2,"account-login-register-link",pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pMVar6 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = extraout_RDX_00;
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.ForgotPassword","Forgot password?",pMVar6);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,pSVar4,"account.openForgotPassword","account-login-open-forgot",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.ForgotPassword";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pSVar4 = "account.auth.idle";
      if (g_data_057aec6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec6e = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).alignSelf = pSVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf,pSVar4);
        (pGVar5->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = extraout_RDX_01;
  if (g_data_057aec73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"No account?");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoAccount");
    il2cpp_runtime_helper_023445d0(&"account-login-open-register");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Register");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    il2cpp_runtime_helper_023445d0(&"Register");
    g_data_057aec73 = '\x01';
    pMVar6 = extraout_RDX_02;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar6 = extraout_RDX_03;
  }
  __this_01 = "No account?";
  text = (Gisketch_Aottg2UI_Code_AottgUi_o *)
         Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                   ("MainMenu.Account.NoAccount",(System_String_o *)"No account?",pMVar6);
  if ((__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (__this_00,(System_String_o *)text,"accountDialogText",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), __this_01 = text,
     pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = "MainMenu.Account.NoAccount";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.Register","Register",method_00);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,pSVar4,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = "MainMenu.Account.Register";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
      pSVar4 = "account.auth.idle";
      if (g_data_057aec6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec6e = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar3->fields).alignSelf = pSVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf,pSVar4);
        (pGVar5->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.onlineMode");
    il2cpp_runtime_helper_023445d0(&"account.loggedOut");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner");
    il2cpp_runtime_helper_023445d0(&"account-banner-logged-out");
    il2cpp_runtime_helper_023445d0(&"accountBanner");
    il2cpp_runtime_helper_023445d0(&"account.offlineMode");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline");
    g_data_057aec74 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = "accountBanner";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  }
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this_01,pSVar4,pSVar2,"account-banner-logged-out",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = "account.loggedOut";
    if (g_data_057aec75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec75 = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignItems = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout);
        *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = "accountBanner";
        pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar2;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
        }
        if (g_data_057aec76 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Stretch");
          il2cpp_runtime_helper_023445d0(&"Row");
          g_data_057aec76 = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (__this_01,pSVar4,pSVar2,"account-banner-offline",pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar4 = "account.offlineMode";
        if (g_data_057aec75 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec75 = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignItems = pSVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).contentLayout = pGVar3;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout);
            *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar4 = "accountBanner";
            pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
            if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar2;
              il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
            }
            if (g_data_057aec76 == '\0') {
              il2cpp_runtime_helper_023445d0(&"Stretch");
              il2cpp_runtime_helper_023445d0(&"Row");
              g_data_057aec76 = '\x01';
            }
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                                (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (__this_01,pSVar4,pSVar2,"account-profile-banner",pGVar3,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar4 = "account.onlineMode";
            if (g_data_057aec75 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec75 = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar3->fields).alignItems = pSVar4;
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar5->fields).contentLayout = pGVar3;
                il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar3);
                *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,(System_String_o *)0x0,
             0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0
             ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* left, const MethodInfo* method);
// 0x44f0400

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *left,
               MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  if (g_data_057aec73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"No account?");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoAccount");
    il2cpp_runtime_helper_023445d0(&"account-login-open-register");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Register");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    il2cpp_runtime_helper_023445d0(&"Register");
    g_data_057aec73 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  __this_00 = "No account?";
  text = (Gisketch_Aottg2UI_Code_AottgUi_o *)
         Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                   ("MainMenu.Account.NoAccount",(System_String_o *)"No account?",method);
  if ((left != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (left,(System_String_o *)text,"accountDialogText",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0), __this_00 = text,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar2->fields).textKey = "MainMenu.Account.NoAccount";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.Register","Register",method_00);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (left,3,pSVar3,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.Register";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
      pSVar3 = "account.auth.idle";
      if (g_data_057aec6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        g_data_057aec6e = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar4->fields).alignSelf = pSVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignSelf,pSVar3);
        (pGVar2->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.onlineMode");
    il2cpp_runtime_helper_023445d0(&"account.loggedOut");
    il2cpp_runtime_helper_023445d0(&"account-profile-banner");
    il2cpp_runtime_helper_023445d0(&"account-banner-logged-out");
    il2cpp_runtime_helper_023445d0(&"accountBanner");
    il2cpp_runtime_helper_023445d0(&"account.offlineMode");
    il2cpp_runtime_helper_023445d0(&"account-banner-offline");
    g_data_057aec74 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "accountBanner";
  pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar5;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  }
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this_00,pSVar3,pSVar5,"account-banner-logged-out",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = "account.loggedOut";
    if (g_data_057aec75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec75 = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).alignItems = pSVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout);
        *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 0;
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = "accountBanner";
        pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar5;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
        }
        if (g_data_057aec76 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Stretch");
          il2cpp_runtime_helper_023445d0(&"Row");
          g_data_057aec76 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (__this_00,pSVar3,pSVar5,"account-banner-offline",pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar3 = "account.offlineMode";
        if (g_data_057aec75 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec75 = '\x01';
        }
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar4->fields).alignItems = pSVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar2->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout);
            *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = "accountBanner";
            pSVar5 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
            if (pSVar5 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar5;
              il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
            }
            if (g_data_057aec76 == '\0') {
              il2cpp_runtime_helper_023445d0(&"Stretch");
              il2cpp_runtime_helper_023445d0(&"Row");
              g_data_057aec76 = '\x01';
            }
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                                (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (__this_00,pSVar3,pSVar5,"account-profile-banner",pGVar4,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar3 = "account.onlineMode";
            if (g_data_057aec75 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
              g_data_057aec75 = '\x01';
            }
            pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar4->fields).alignItems = pSVar3;
              il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar2->fields).contentLayout = pGVar4;
                il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar4);
                *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aec76 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,(System_String_o *)0x0,
             0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0
             ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef480

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aec66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    g_data_057aec66 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SignIn","Sign In",in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef4f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec67 == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec67 = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef520

int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef530

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec68 == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec68 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef560

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec69 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec69 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44ef630

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aec6a = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44ef6f0

void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this_00;
  System_Action_AottgUi__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar9;
  System_String_o *pSVar10;
  
  if (g_data_057aec6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ChooseMethod");
    il2cpp_runtime_helper_023445d0(&"accountLoginEmailSection");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"account-login-email-section");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Sign in to your AOTTG2 account.");
    il2cpp_runtime_helper_023445d0(&"account.canEmailPassword");
    g_data_057aec6b = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = "MainMenu.Account.ChooseMethod";
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,(System_String_o *)"MainMenu.Account.ChooseMethod","Sign in to your AOTTG2 account.",in_RCX)
  ;
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,pMVar8);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,pMVar8);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountLoginEmailSection";
  pSVar4 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar4;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar4);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,pSVar4,"account-login-email-section",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (g_data_057aec6d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec6d = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar3 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = pSVar2;
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
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
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (body,pSVar2,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).textKey = "MainMenu.Account.NoMethods";
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).textKey);
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
              (pGVar6->fields).contentLayout = pGVar3;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar3);
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
  if (g_data_057aec6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6d = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar9 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).visible = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).visible,pGVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FooterLinks_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"account-login-links");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec6c = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar4 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar4);
  }
  pSVar10 = "Row";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,pSVar2,pSVar4,"account-login-links",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6e = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar9 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).enabled = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enabled,pSVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec6f = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar7 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_01->fields).text = (System_String_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,pGVar9);
    (__this_01->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).enabled);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$FooterLinks
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44efa60

void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  
  if (g_data_057aec6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FooterLinks_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"account-login-links");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec6c = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,build);
  }
  pSVar3 = "Row";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,build,"account-login-links",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6e = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar4 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).enabled = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enabled,pSVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec6f = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar2 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = (System_String_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&__this->fields,pGVar4);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x44ef9f0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  System_String_o *pSVar5;
  
  if (g_data_057aec6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6d = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar4 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).visible = key;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).visible,key);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FooterLinks_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"account-login-links");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec6c = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,build);
  }
  pSVar5 = "Row";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,style,build,"account-login-links",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6e = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar4 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar2->fields).enabled = pSVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enabled,pSVar5);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec6f = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar2 = __this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = (System_String_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&__this->fields,pGVar4);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(__this->fields).enabled);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x44efc50

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  if (g_data_057aec6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec6e = '\x01';
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
  if (g_data_057aec6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec6f = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x44efcc0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (g_data_057aec6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec6f = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x44efd50

void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


