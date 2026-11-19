// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRegisterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor (const MethodInfo* method);
// 0x58bc190

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075453ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    Il2CppMethodInitialized_075453ad = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, const MethodInfo* method);
// 0x58bc200

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x58bc210

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_0
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_StaticFields *pGVar5;
  System_Action_AottgUi__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff90;
  
  if (Il2CppMethodInitialized_075453ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-login-link");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Email");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.AccountNameHint");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-password");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-email");
    il2cpp_codegen_initialize_runtime_metadata(&"account.registerCta");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-keep-signed-in");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.RepeatPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-confirm-password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.EmailAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.PasswordHint");
    il2cpp_codegen_initialize_runtime_metadata(&"account.register.email");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.ConfirmPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.DisplayNamePlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_075453ae = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-email","MainMenu.Account.EmailAddress","MainMenu.Account.Email",0,0,(System_String_o *)0x0
             ,in_stack_ffffffffffffff90);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
            (form,"account-register-display-name","MainMenu.Account.DisplayName","MainMenu.Account.DisplayNamePlaceholder",0,0,(System_String_o *)0x0
             ,in_stack_ffffffffffffff90);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.AccountNameHint",(MethodInfo *)0x0);
  if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (form,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.AccountNameHint";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
                (form,"account-register-password","Common.Password","MainMenu.Account.PasswordHint",3,0,
                 (System_String_o *)0x0,in_stack_ffffffffffffff90);
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
                (form,"account-register-confirm-password","MainMenu.Account.ConfirmPassword","MainMenu.Account.RepeatPassword",3,0,
                 (System_String_o *)0x0,in_stack_ffffffffffffff90);
      Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn(form,"account-register-keep-signed-in",method_00);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Account.CreateAccount",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (form,0,pSVar1,"account.register.email","account-register-submit",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/login",
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.CreateAccount";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        (pGVar2->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
        pGVar4 = Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta
                           ("account.registerCta",(MethodInfo *)pGVar3);
        (pGVar2->fields).bind = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
        }
        pSVar1 = "default";
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
        __this_00 = pGVar5->__9__18_1;
        if (__this_00 == (System_Action_AottgUi__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
            pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
          }
          object = (Il2CppObject *)pGVar5->__9;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_00,object,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_1,
                     (MethodInfo_4A81BE0 *)0x0);
          pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
          pGVar5->__9__18_1 = __this_00;
          Il2CppCodeGenWriteBarrier(&pGVar5->__9__18_1);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","Center","Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,4.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (form,pSVar1,__this_00,"account-register-login-link",pGVar3,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1 (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58bc780

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___c___BuildBody_b__18_1
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row
               ,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075453af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-open-login");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.AlreadyHaveAccount");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_075453af = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.AlreadyHaveAccount",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,pSVar1,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.AlreadyHaveAccount";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Account.SignIn",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,3,pSVar1,"account.openLogin","account-register-open-login",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = "MainMenu.Account.SignIn";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_075453ab == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_075453ab = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbb30

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075453a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccount");
    Il2CppMethodInitialized_075453a4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.CreateAccount",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbb90

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_075453a5 = '\x01';
  }
  return "material-icons/login";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbbc0

int32_t Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbbd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_075453a6 = '\x01';
  }
  return "account.auth.idle";
}


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbc00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075453a7 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bbcc0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075453a8 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58bbd70

void Gisketch_Aottg2UI_Game_AottgRegisterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075453a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginEmailSection");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.CreateAccountIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"account-register-email-section");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canEmailPassword");
    Il2CppMethodInitialized_075453a9 = '\x01';
    method = extraout_RDX;
  }
  pMVar4 = (MethodInfo *)"MainMenu.Account.CreateAccountIntro";
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro(body,"MainMenu.Account.CreateAccountIntro",method);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers(body,pMVar4);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider(body,pMVar4);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
  }
  pSVar1 = "accountLoginEmailSection";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
  __this_00 = pGVar2->__9__18_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c->static_fields;
    pGVar2->__9__18_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__18_0);
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
                       (body,pSVar1,__this_00,"account-register-email-section",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.canEmailPassword";
    if (Il2CppMethodInitialized_075453aa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_075453aa = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible (System_String_o* key, const MethodInfo* method);
// 0x58bc010

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_075453aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_075453aa = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled (System_String_o* key, const MethodInfo* method);
// 0x58bc080

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_075453ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_075453ab = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x58bc0f0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgRegisterDialog__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_075453ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_075453ac = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgRegisterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o* __this, const MethodInfo* method);
// 0x58bc180

void Gisketch_Aottg2UI_Game_AottgRegisterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgRegisterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


