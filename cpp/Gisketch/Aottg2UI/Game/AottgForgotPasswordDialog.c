// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgForgotPasswordDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor (const MethodInfo* method);
// 0x44ef060

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec64 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, const MethodInfo* method);
// 0x44ef0d0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$<BuildBody>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0 (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x44ef0e0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (g_data_057aec65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"account-forgot-open-login");
    il2cpp_runtime_helper_023445d0(&"Email address");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.Email");
    il2cpp_runtime_helper_023445d0(&"account-forgot-email");
    il2cpp_runtime_helper_023445d0(&"account-forgot-submit");
    il2cpp_runtime_helper_023445d0(&"Email");
    il2cpp_runtime_helper_023445d0(&"Send Reset Link");
    il2cpp_runtime_helper_023445d0(&"account.forgotCta");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.EmailAddress");
    il2cpp_runtime_helper_023445d0(&"account.forgotPassword");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.BackToSignIn");
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SendResetLink");
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    il2cpp_runtime_helper_023445d0(&"Back to sign in");
    g_data_057aec65 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-forgot-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,(System_String_o *)0x0,
             in_stack_ffffffffffffffb0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SendResetLink","Send Reset Link",method_00);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar1,"account.forgotPassword","account-forgot-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.SendResetLink";
      il2cpp_runtime_helper_022b4080();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta("account.forgotCta",(MethodInfo *)pGVar3);
      (pGVar2->fields).contentLayout = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.BackToSignIn","Back to sign in",method_01);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (form,3,pSVar1,"account.openLogin","account-forgot-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.BackToSignIn";
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (g_data_057aec62 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
          g_data_057aec62 = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignSelf = pSVar1;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf,pSVar1);
          (pGVar2->fields).contentLayout = pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar3);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_02 = extraout_RDX;
  if (g_data_057aec66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.SignIn");
    il2cpp_runtime_helper_023445d0(&"Sign In");
    g_data_057aec66 = '\x01';
    method_02 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_02 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SignIn","Sign In",method_02);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44ee980

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aec5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_runtime_helper_023445d0(&"Forgot Password");
    g_data_057aec5b = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.ForgotPasswordTitle","Forgot Password",in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44ee9f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec5c == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/login");
    g_data_057aec5c = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44eea20

int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44eea30

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec5d == '\0') {
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec5d = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44eea60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec5e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec5e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44eeb30

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec5f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aec5f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,18.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44eebf0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

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
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  
  if (g_data_057aec60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"accountLoginEmailSection");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Enter your email and we will send a reset link if an account exists.");
    il2cpp_runtime_helper_023445d0(&"account-forgot-email-section");
    il2cpp_runtime_helper_023445d0(&"account.canEmailPassword");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Account.ForgotPasswordIntro");
    g_data_057aec60 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,"MainMenu.Account.ForgotPasswordIntro","Enter your email and we will send a reset link if an account exists.",in_RCX);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "accountLoginEmailSection";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = "Column";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-forgot-email-section",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (g_data_057aec61 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      g_data_057aec61 = '\x01';
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
        method_00 = extraout_RDX_01;
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_02;
        }
        if (g_data_057aec53 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
          il2cpp_runtime_helper_023445d0(&"account-login-no-methods");
          il2cpp_runtime_helper_023445d0(&"Login service is unavailable. Please try again later.");
          il2cpp_runtime_helper_023445d0(&"MainMenu.Account.NoMethods");
          il2cpp_runtime_helper_023445d0(&"account.noMethods");
          il2cpp_runtime_helper_023445d0(&"accountDialogText");
          g_data_057aec53 = '\x01';
          method_00 = extraout_RDX;
        }
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_00;
        }
        pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",method_00);
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
  if (g_data_057aec61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec61 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar8 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar6->fields).visible = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).visible,pGVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec62 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar6 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).enabled = (System_String_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enabled,pGVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec63 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar8 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (pGVar7->fields).text = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields,pGVar6);
    (pGVar7->fields).enabled = "account.auth.idle";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).enabled);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x44eeee0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (g_data_057aec61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec61 = '\x01';
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
  if (g_data_057aec62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec62 = '\x01';
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
  if (g_data_057aec63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec63 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x44eef50

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  if (g_data_057aec62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    g_data_057aec62 = '\x01';
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
  if (g_data_057aec63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec63 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x44eefc0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (g_data_057aec63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"account.auth.idle");
    g_data_057aec63 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x44ef050

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


