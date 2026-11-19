// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgAccountDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor (const MethodInfo* method);
// 0x58b7040

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
    Il2CppMethodInitialized_07545371 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, const MethodInfo* method);
// 0x58b70b0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$<Divider>b__2_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__2_0 (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58b70c0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__2_0
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *text;
  
  if (Il2CppMethodInitialized_07545372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Or");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginDividerText");
    il2cpp_codegen_initialize_runtime_metadata(&"accountLoginDividerLine");
    Il2CppMethodInitialized_07545372 = '\x01';
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
    (pGVar1->fields).style = "accountLoginDividerLine";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar1->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Account.Or",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,text,"accountLoginDividerText",(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.Or";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
        pGVar1 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).type = "Divider";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
          (pGVar1->fields).style = "accountLoginDividerLine";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,1.0,(MethodInfo *)0x0);
          (pGVar1->fields).layout = pGVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
          Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Intro
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* key, const MethodInfo* method);
// 0x58b6320

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *key,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_07545368 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,text,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Providers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b63d0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (Il2CppMethodInitialized_07545369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account-provider-discord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.discord");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoginWithDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/DiscordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canDiscord");
    il2cpp_codegen_initialize_runtime_metadata(&"account.login.google");
    il2cpp_codegen_initialize_runtime_metadata(&"account-provider-google");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/GoogleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"account.canGoogle");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonGoogle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoginWithGoogle");
    Il2CppMethodInitialized_07545369 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-discord","buttonDiscord","UI/Icons/Navigation/DiscordIcon","MainMenu.Account.LoginWithDiscord",
             "account.login.discord","account.canDiscord",in_stack_fffffffffffffff0);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-google","buttonGoogle","UI/Icons/Navigation/GoogleIcon","MainMenu.Account.LoginWithGoogle",
             "account.login.google","account.canGoogle",in_stack_fffffffffffffff0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Divider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b6730

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754536a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c_Divider_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account.showLoginDivider");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_0754536a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c);
  }
  pSVar1 = "default";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields;
  __this = pGVar2->__9__2_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c)
      ;
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c_Divider_b__2_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c->static_fields;
    pGVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__2_0);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar1,__this,"account-auth-divider",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "account.showLoginDivider";
    if (Il2CppMethodInitialized_0754536f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_0754536f = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$LabeledInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* labelKey, System_String_o* placeholderKey, int32_t type, int32_t maxCharacters, System_String_o* value, const MethodInfo* method);
// 0x58b6a00

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *labelKey,
               System_String_o *placeholderKey,int32_t type,int32_t maxCharacters,System_String_o *value,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754536b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754536b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(labelKey,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar1,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = labelKey;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(placeholderKey,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (ui,id,pSVar1,type,"inputField",layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,maxCharacters,
                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = placeholderKey;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
        (pGVar2->fields).value = value;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
        pSVar1 = "account.auth.idle";
        if (Il2CppMethodInitialized_07545370 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_07545370 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this->fields).enabled = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
          (pGVar2->fields).bind = __this;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$KeepSignedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x58b6ce0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754536c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.StaySignedIn");
    il2cpp_codegen_initialize_runtime_metadata(&"account.keepSignedIn");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754536c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Checkbox";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Account.StaySignedIn",(MethodInfo *)0x0);
    (__this->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text);
    (__this->fields).textKey = "MainMenu.Account.StaySignedIn";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
    (__this->fields).value = "true";
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    (__this->fields).action = "account.keepSignedIn";
    Il2CppCodeGenWriteBarrier(&(__this->fields).action);
    (__this->fields).style = "checkBox";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    pSVar1 = "account.auth.idle";
    if (Il2CppMethodInitialized_07545370 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545370 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
      (__this->fields).bind = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).bind);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$EmptyMethods
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b6ee0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754536d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-no-methods");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.NoMethods");
    il2cpp_codegen_initialize_runtime_metadata(&"account.noMethods");
    il2cpp_codegen_initialize_runtime_metadata(&"accountDialogText");
    Il2CppMethodInitialized_0754536d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Account.NoMethods",(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,pSVar1,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (Il2CppMethodInitialized_0754536f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_0754536f = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).visible = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
        (pGVar2->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Provider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* style, System_String_o* icon, System_String_o* textKey, System_String_o* action, System_String_o* visibleKey, const MethodInfo* method);
// 0x58b6520

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *style,
               System_String_o *icon,System_String_o *textKey,System_String_o *action,
               System_String_o *visibleKey,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754536e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754536e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(textKey,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (body,0,text,action,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = textKey;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      (pGVar1->fields).style = style;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).visible = visibleKey;
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
        (__this->fields).enabled = "account.auth.idle";
        Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible (System_String_o* key, const MethodInfo* method);
// 0x58b6990

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754536f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_0754536f = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled (System_String_o* key, const MethodInfo* method);
// 0x58b6c70

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545370 = '\x01';
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


