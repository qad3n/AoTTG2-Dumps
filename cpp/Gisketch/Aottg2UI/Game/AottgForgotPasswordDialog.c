// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgForgotPasswordDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor (const MethodInfo* method);
// 0x58b79d0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754537c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
    Il2CppMethodInitialized_0754537c = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, const MethodInfo* method);
// 0x58b7a40

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$<BuildBody>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0 (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x58b7a50

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c___BuildBody_b__14_0
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *method_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (Il2CppMethodInitialized_0754537d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-open-login");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"account.forgotCta");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"account.forgotPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.BackToSignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SendResetLink");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    Il2CppMethodInitialized_0754537d = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-forgot-email","MainMenu.Account.EmailAddress","MainMenu.Account.Email",0,0,(System_String_o *)0x0
             ,in_stack_ffffffffffffffa0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.SendResetLink",(MethodInfo *)0x0);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (form,0,pSVar1,"account.forgotPassword","account-forgot-submit",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.SendResetLink";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
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
      (pGVar2->fields).layout = method_00;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      pGVar3 = Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta
                         ("account.forgotCta",(MethodInfo *)method_00);
      (pGVar2->fields).bind = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Account.BackToSignIn",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (form,3,pSVar1,"account.openLogin","account-forgot-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.BackToSignIn";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_0754537a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_0754537a = '\x01';
        }
        pGVar3 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar3->fields).enabled = pSVar1;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).enabled);
          (pGVar2->fields).bind = pGVar3;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b7380

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPasswordTitle");
    Il2CppMethodInitialized_07545373 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.ForgotPasswordTitle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b73e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_07545374 = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b7410

int32_t Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b7420

System_String_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_07545375 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b7450

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545376 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b7510

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545377 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,18.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x58b75c0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c_BuildBody_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"account-forgot-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ForgotPasswordIntro");
    Il2CppMethodInitialized_07545378 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,"MainMenu.Account.ForgotPasswordIntro",method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields;
  __this_00 = pGVar2->__9__14_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c_BuildBody_b__14_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c->static_fields;
    pGVar2->__9__14_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__14_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,__this_00,"account-forgot-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_07545379 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545379 = '\x01';
    }
    method_00 = (MethodInfo *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)method_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      method_00->return_type = (Il2CppType *)pSVar1;
      Il2CppCodeGenWriteBarrier(&method_00->return_type);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)method_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods(body,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x58b7850

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545379 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x58b78c0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754537a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_0754537a = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x58b7930

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754537b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754537b = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o* __this, const MethodInfo* method);
// 0x58b79c0

void Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


