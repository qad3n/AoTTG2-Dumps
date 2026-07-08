// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgForgotPasswordDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor (const MethodInfo* method);
// 0x41777c0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704b1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704b1a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, const MethodInfo* method);
// 0x4177830

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$<BuildBody>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0 (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x4177840

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_<>c__<BuildBody>b__14_0
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (DAT_05704b1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"account-forgot-open-login");
    il2cpp_init_method_metadata(&"Email address");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"MainMenu.Account.Email");
    il2cpp_init_method_metadata(&"account-forgot-email");
    il2cpp_init_method_metadata(&"account-forgot-submit");
    il2cpp_init_method_metadata(&"Email");
    il2cpp_init_method_metadata(&"Send Reset Link");
    il2cpp_init_method_metadata(&"account.forgotCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_init_method_metadata(&"account.forgotPassword");
    il2cpp_init_method_metadata(&"MainMenu.Account.BackToSignIn");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"MainMenu.Account.SendResetLink");
    il2cpp_init_method_metadata(&"material-icons/login");
    il2cpp_init_method_metadata(&"account.openLogin");
    il2cpp_init_method_metadata(&"Back to sign in");
    DAT_05704b1b = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-forgot-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,
             (System_String_o *)0x0,in_stack_ffffffffffffffb0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.SendResetLink","Send Reset Link",method_00);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar1,"account.forgotPassword","account-forgot-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.SendResetLink";
      il2cpp_runtime_glue();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_glue(&(pGVar2->fields).search);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta
                         ("account.forgotCta",(MethodInfo *)pGVar3);
      (pGVar2->fields).contentLayout = pGVar3;
      il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,pGVar3);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.BackToSignIn","Back to sign in",method_01);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (form,3,pSVar1,"account.openLogin","account-forgot-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.BackToSignIn";
        il2cpp_runtime_glue(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (DAT_05704b18 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704b18 = '\x01';
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0)
        ;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignSelf = pSVar1;
          il2cpp_runtime_glue(&(pGVar3->fields).alignSelf,pSVar1);
          (pGVar2->fields).contentLayout = pGVar3;
          il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,pGVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x41770e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704b11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_init_method_metadata(&"Forgot Password");
    DAT_05704b11 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.ForgotPasswordTitle","Forgot Password",in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x4177150

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704b12 == '\0') {
    il2cpp_init_method_metadata(&"material-icons/login");
    DAT_05704b12 = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x4177180

int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x4177190

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704b13 == '\0') {
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b13 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x41771c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704b14 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704b14 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x4177290

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704b15 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_05704b15 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,18.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4177350

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  MethodInfo *in_RCX;
  
  if (DAT_05704b16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"accountLoginEmailSection");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Enter your email and we will send a reset link if an account exists.");
    il2cpp_init_method_metadata(&"account-forgot-email-section");
    il2cpp_init_method_metadata(&"account.canEmailPassword");
    il2cpp_init_method_metadata(&"MainMenu.Account.ForgotPasswordIntro");
    DAT_05704b16 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,"MainMenu.Account.ForgotPasswordIntro","Enter your email and we will send a reset link if an account exists.",in_RCX);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "accountLoginEmailSection";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_glue(lVar1 + 8,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-forgot-email-section",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (DAT_05704b17 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704b17 = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignItems = pSVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).alignItems,pSVar2);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).contentLayout);
        if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,(MethodInfo *)pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x4177640

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b17 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    il2cpp_runtime_glue(&(__this->fields).visible,key);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x41776b0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b18 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).enabled = key;
    il2cpp_runtime_glue(&(__this->fields).enabled,key);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x4177720

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta
          (System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b19 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).text = textKey;
    il2cpp_runtime_glue(&__this->fields,textKey);
    (__this->fields).enabled = "account.auth.idle";
    il2cpp_runtime_glue(&(__this->fields).enabled);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x41777b0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


