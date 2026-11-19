// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgLoginDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor (const MethodInfo* method);
// 0x58b85d0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    Il2CppMethodInitialized_07545388 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, const MethodInfo* method);
// 0x58b8640

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<BuildBody>b__16_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* email, const MethodInfo* method);
// 0x58b8650

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___BuildBody_b__16_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *email,
               MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (Il2CppMethodInitialized_07545389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-keep-signed-in");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"account.loginCta");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_07545389 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-email","MainMenu.Account.EmailAddress","MainMenu.Account.Email",0,0,
             (System_String_o *)0x0,in_stack_ffffffffffffffa0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (email,"account-login-password","Common.Password","Common.Password",3,0,
             (System_String_o *)0x0,in_stack_ffffffffffffffa0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(email,"account-login-keep-signed-in",method_02);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.SignIn",(MethodInfo *)0x0);
  if (email != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (email,0,text,"account.login.email","account-login-email-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "MainMenu.Account.SignIn";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      method_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = method_00;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      method_01 = (MethodInfo *)
                  Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta
                            ("account.loginCta",(MethodInfo *)method_00);
      (pGVar1->fields).bind = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)method_01;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
      Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks(email,method_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58b8900

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_0
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_0754538a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openForgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-register-link");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open-forgot");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754538a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  pSVar2 = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
  __this_00 = pGVar1->__9__17_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    pGVar1->__9__17_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__17_1);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,4.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar2,__this_00,"account-login-register-link",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Account.ForgotPassword",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,pSVar2,"account.openForgotPassword","account-login-open-forgot",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = "MainMenu.Account.ForgotPassword";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey);
      pSVar2 = "account.auth.idle";
      if (Il2CppMethodInitialized_07545386 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_07545386 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled);
        (pGVar3->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1 (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* left, const MethodInfo* method);
// 0x58b8c00

void Gisketch_Aottg2UI_Game_AottgLoginDialog___c___FooterLinks_b__17_1
               (Gisketch_Aottg2UI_Game_AottgLoginDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *left,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754538b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"account.openRegister");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.NoAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open-register");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Register");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_0754538b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.NoAccount",(MethodInfo *)0x0);
  if (left != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (left,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoAccount";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Account.Register",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (left,3,pSVar1,"account.openRegister","account-login-open-register",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.Register";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_07545386 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_07545386 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_00->fields).enabled = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
          (pGVar2->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7d90

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754537e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    Il2CppMethodInitialized_0754537e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.SignIn",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7df0

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754537f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_0754537f = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7e20

int32_t Gisketch_Aottg2UI_Game_AottgLoginDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7e30

System_String_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_07545380 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7e60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545381 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b7f20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545382 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x58b7fd0

void Gisketch_Aottg2UI_Game_AottgLoginDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_BuildBody_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ChooseMethod");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    Il2CppMethodInitialized_07545383 = '\x01';
    method = extraout_RDX;
  }
  pMVar4 = (MethodInfo *)"MainMenu.Account.ChooseMethod";
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,"MainMenu.Account.ChooseMethod",method);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,pMVar4);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,pMVar4);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
  __this_00 = pGVar2->__9__16_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_BuildBody_b__16_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    pGVar2->__9__16_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__16_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,__this_00,"account-login-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_07545385 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545385 = '\x01';
    }
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pMVar4,(MethodInfo *)0x0);
    if (pMVar4 != (MethodInfo *)0x0) {
      pMVar4->return_type = (Il2CppType *)pSVar1;
      Il2CppCodeGenWriteBarrier(&pMVar4->return_type);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pMVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,pMVar4);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$FooterLinks
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58b82e0

void Gisketch_Aottg2UI_Game_AottgLoginDialog__FooterLinks
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-links");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_07545384 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
  __this = pGVar1->__9__17_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c->static_fields;
    pGVar1->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__17_0);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"account-login-links",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x58b8270

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545385 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).visible = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x58b84c0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545386 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).enabled = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x58b8530

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgLoginDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_07545387 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).text = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  (__this->fields).enabled = "account.auth.idle";
  Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgLoginDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor (Gisketch_Aottg2UI_Game_AottgLoginDialog_o* __this, const MethodInfo* method);
// 0x58b85c0

void Gisketch_Aottg2UI_Game_AottgLoginDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgLoginDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


