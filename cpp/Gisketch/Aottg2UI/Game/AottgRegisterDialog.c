// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRegisterDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor (const MethodInfo* method);
// 0x41c2d80

void Gisketch_Aottg2UI_Game_AottgRegisterDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704dd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704dd6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, const MethodInfo* method);
// 0x41c2df0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x41c2e00

void Gisketch_Aottg2UI_Game_AottgRegisterDialog_<>c__<BuildBody>b__18_0
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *build;
  
  if (DAT_05704dd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__18_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Confirm password");
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_init_method_metadata(&"At least 8 characters");
    il2cpp_init_method_metadata(&"Email address");
    il2cpp_init_method_metadata(&"Repeat password");
    il2cpp_init_method_metadata(&"account-register-submit");
    il2cpp_init_method_metadata(&"account-register-login-link");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"MainMenu.Account.Email");
    il2cpp_init_method_metadata(&"account-register-password");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Create Account");
    il2cpp_init_method_metadata(&"account-register-email");
    il2cpp_init_method_metadata(&"account.registerCta");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"account-register-keep-signed-in");
    il2cpp_init_method_metadata(&"MainMenu.Account.RepeatPassword");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"Email");
    il2cpp_init_method_metadata(&"account-register-confirm-password");
    il2cpp_init_method_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_init_method_metadata(&"account-register-display-name");
    il2cpp_init_method_metadata(&"Common.Password");
    il2cpp_init_method_metadata(&"MainMenu.Account.DisplayName");
    il2cpp_init_method_metadata(&"Display name");
    il2cpp_init_method_metadata(&"MainMenu.Account.PasswordHint");
    il2cpp_init_method_metadata(&"account.register.email");
    il2cpp_init_method_metadata(&"MainMenu.Account.ConfirmPassword");
    il2cpp_init_method_metadata(&"MainMenu.Account.DisplayNamePlaceholder");
    il2cpp_init_method_metadata(&"material-icons/login");
    il2cpp_init_method_metadata(&"Sasha Blouse");
    DAT_05704dd7 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-email","MainMenu.Account.EmailAddress","Email address","MainMenu.Account.Email","Email",0,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-display-name","MainMenu.Account.DisplayName","Display name","MainMenu.Account.DisplayNamePlaceholder","Sasha Blouse",0,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-password","Common.Password","Password","MainMenu.Account.PasswordHint","At least 8 characters",2,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-confirm-password","MainMenu.Account.ConfirmPassword","Confirm password","MainMenu.Account.RepeatPassword","Repeat password",2,0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(form,"account-register-keep-signed-in",(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.CreateAccount","Create Account",(MethodInfo *)0x0);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar2,"account.register.email","account-register-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.CreateAccount";
      il2cpp_runtime_glue();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_glue(&(pGVar3->fields).search);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta
                         ("account.registerCta",(MethodInfo *)pGVar4);
      (pGVar3->fields).contentLayout = pGVar4;
      il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar4);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = "default";
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
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","Center","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,4.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (form,pSVar2,build,"account-register-login-link",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41c33f0

void Gisketch_Aottg2UI_Game_AottgRegisterDialog_<>c__<BuildBody>b__18_1
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  if (DAT_05704dd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"account-register-open-login");
    il2cpp_init_method_metadata(&"MainMenu.Account.AlreadyHaveAccount");
    il2cpp_init_method_metadata(&"Already have an account?");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"account.openLogin");
    il2cpp_init_method_metadata(&"accountDialogText");
    DAT_05704dd8 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.AlreadyHaveAccount","Already have an account?",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.AlreadyHaveAccount";
      il2cpp_runtime_glue(&(pGVar2->fields).textKey);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         ("MainMenu.Account.SignIn","Sign In",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,3,pSVar1,"account.openLogin","account-register-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.SignIn";
        il2cpp_runtime_glue(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (DAT_05704dd4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704dd4 = '\x01';
        }
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,
                   (MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_00->fields).alignSelf = pSVar1;
          il2cpp_runtime_glue(&(__this_00->fields).alignSelf,pSVar1);
          (pGVar2->fields).contentLayout = __this_00;
          il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,__this_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2690

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704dcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_init_method_metadata(&"Create Account");
    DAT_05704dcd = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ("MainMenu.Account.CreateAccount","Create Account",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2700

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704dce == '\0') {
    il2cpp_init_method_metadata(&"material-icons/login");
    DAT_05704dce = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2730

int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2740

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704dcf == '\0') {
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704dcf = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2770

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704dd0 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704dd0 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2840

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704dd1 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_05704dd1 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,14.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41c2900

void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (DAT_05704dd2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"accountLoginEmailSection");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccountIntro");
    il2cpp_init_method_metadata(&"Create an AOTTG2 account or continue with OAuth.");
    il2cpp_init_method_metadata(&"account-register-email-section");
    il2cpp_init_method_metadata(&"account.canEmailPassword");
    DAT_05704dd2 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
            (body,"MainMenu.Account.CreateAccountIntro","Create an AOTTG2 account or continue with OAuth.",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "accountLoginEmailSection";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = build;
    il2cpp_runtime_glue(lVar1 + 0x10,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-register-email-section",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.canEmailPassword";
    if (DAT_05704dd3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704dd3 = '\x01';
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
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x41c2c00

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704dd3 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x41c2c70

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704dd4 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x41c2ce0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704dd5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704dd5 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x41c2d70

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


