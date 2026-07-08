// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgAccountDialogUi.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___cctor (const MethodInfo* method);
// 0x4176d90

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704b0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704b0f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___ctor (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, const MethodInfo* method);
// 0x4176e00

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$<Divider>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c___Divider_b__3_0 (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4176e10

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi_<>c__<Divider>b__3_0
               (Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *text;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704b10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"MainMenu.Account.Or");
    il2cpp_init_method_metadata(&"OR");
    il2cpp_init_method_metadata(&"Divider");
    il2cpp_init_method_metadata(&"accountLoginDividerText");
    il2cpp_init_method_metadata(&"accountLoginDividerLine");
    DAT_05704b10 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    il2cpp_runtime_glue(&pGVar1->fields);
    (pGVar1->fields).style = "accountLoginDividerLine";
    il2cpp_runtime_glue(&(pGVar1->fields).style);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.Or","OR",method_00);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,text,"accountLoginDividerText",(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).textKey = "MainMenu.Account.Or";
        il2cpp_runtime_glue(&(pGVar1->fields).textKey);
        pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition)
        ;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).type = "Divider";
          il2cpp_runtime_glue(&pGVar1->fields);
          (pGVar1->fields).style = "accountLoginDividerLine";
          il2cpp_runtime_glue(&(pGVar1->fields).style);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
          (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
          il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
          Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Intro
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x4175e00

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Intro
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *key,
               System_String_o *fallback,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)fallback;
  if (DAT_05704b04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"accountDialogText");
    DAT_05704b04 = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(key,fallback,method_00);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,text,"accountDialogText",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      il2cpp_runtime_glue(&(pGVar1->fields).textKey,key);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Providers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4175fc0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Providers
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_05704b05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"account-provider-discord");
    il2cpp_init_method_metadata(&"account.login.discord");
    il2cpp_init_method_metadata(&"Continue with Discord");
    il2cpp_init_method_metadata(&"MainMenu.Account.LoginWithDiscord");
    il2cpp_init_method_metadata(&"UI/Icons/Navigation/DiscordIcon");
    il2cpp_init_method_metadata(&"buttonDiscord");
    il2cpp_init_method_metadata(&"account.canDiscord");
    il2cpp_init_method_metadata(&"account.login.google");
    il2cpp_init_method_metadata(&"account-provider-google");
    il2cpp_init_method_metadata(&"Continue with Google");
    il2cpp_init_method_metadata(&"UI/Icons/Navigation/GoogleIcon");
    il2cpp_init_method_metadata(&"account.canGoogle");
    il2cpp_init_method_metadata(&"buttonGoogle");
    il2cpp_init_method_metadata(&"MainMenu.Account.LoginWithGoogle");
    DAT_05704b05 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-discord","buttonDiscord","UI/Icons/Navigation/DiscordIcon","MainMenu.Account.LoginWithDiscord","Continue with Discord","account.login.discord",
             "account.canDiscord",in_stack_ffffffffffffffd8);
  Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
            (body,"account-provider-google","buttonGoogle","UI/Icons/Navigation/GoogleIcon","MainMenu.Account.LoginWithGoogle","Continue with Google","account.login.google",
             "account.canGoogle",in_stack_ffffffffffffffd8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Divider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4176380

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Divider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (DAT_05704b06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Divider_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"account.showLoginDivider");
    il2cpp_init_method_metadata(&"account-auth-divider");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    DAT_05704b06 = '\x01';
  }
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
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,16.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,build,"account-auth-divider",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.showLoginDivider";
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar2 = "account.showLoginDivider";
    }
    "account.showLoginDivider" = pSVar2;
    if (DAT_05704b0c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704b0c = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignItems = pSVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).alignItems,pSVar2);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$LabeledInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* labelKey, System_String_o* label, System_String_o* placeholderKey, System_String_o* placeholder, int32_t type, int32_t maxCharacters, System_String_o* value, const MethodInfo* method);
// 0x4176690

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__LabeledInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *labelKey,
               System_String_o *label,System_String_o *placeholderKey,System_String_o *placeholder,
               int32_t type,int32_t maxCharacters,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)labelKey;
  if (DAT_05704b07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b07 = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(labelKey,label,method_00);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar1,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = labelKey;
      il2cpp_runtime_glue(&(pGVar2->fields).textKey,labelKey);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                         (placeholderKey,placeholder,method_01);
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
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (ui,id,pSVar1,type,"inputField",pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,maxCharacters,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = placeholderKey;
        il2cpp_runtime_glue(&(pGVar2->fields).textKey,placeholderKey);
        (pGVar2->fields).value = value;
        il2cpp_runtime_glue(&(pGVar2->fields).value);
        pSVar1 = "account.auth.idle";
        if (DAT_05704b0d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
          DAT_05704b0d = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$KeepSignedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x4176990

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__KeepSignedIn
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704b08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"checkBox");
    il2cpp_init_method_metadata(&"Checkbox");
    il2cpp_init_method_metadata(&"MainMenu.Account.StaySignedIn");
    il2cpp_init_method_metadata(&"account.keepSignedIn");
    il2cpp_init_method_metadata(&"true");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"Stay signed in");
    DAT_05704b08 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Checkbox";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.StaySignedIn","Stay signed in",method_00);
    (__this->fields).text = pSVar1;
    il2cpp_runtime_glue(&(__this->fields).text,pSVar1);
    (__this->fields).textKey = "MainMenu.Account.StaySignedIn";
    il2cpp_runtime_glue(&(__this->fields).textKey);
    (__this->fields).value = "true";
    il2cpp_runtime_glue(&(__this->fields).value);
    (__this->fields).action = "account.keepSignedIn";
    il2cpp_runtime_glue(&(__this->fields).action);
    (__this->fields).style = "checkBox";
    il2cpp_runtime_glue(&(__this->fields).style);
    pSVar1 = "account.auth.idle";
    if (DAT_05704b0d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
      DAT_05704b0d = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).alignSelf = pSVar1;
      il2cpp_runtime_glue(&(__this_00->fields).alignSelf,pSVar1);
      (__this->fields).contentLayout = __this_00;
      il2cpp_runtime_glue(&(__this->fields).contentLayout,__this_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$EmptyMethods
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4176bb0

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__EmptyMethods
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704b09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&"account-login-no-methods");
    il2cpp_init_method_metadata(&"Login service is unavailable. Please try again later.");
    il2cpp_init_method_metadata(&"MainMenu.Account.NoMethods");
    il2cpp_init_method_metadata(&"account.noMethods");
    il2cpp_init_method_metadata(&"accountDialogText");
    DAT_05704b09 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text("MainMenu.Account.NoMethods","Login service is unavailable. Please try again later.",in_RDX);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,pSVar1,"accountDialogText","account-login-no-methods",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Account.NoMethods";
      il2cpp_runtime_glue(&(pGVar2->fields).textKey);
      pSVar1 = "account.noMethods";
      if (DAT_05704b0c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
        DAT_05704b0c = '\x01';
      }
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this->fields).alignItems = pSVar1;
        il2cpp_runtime_glue(&(__this->fields).alignItems,pSVar1);
        (pGVar2->fields).contentLayout = __this;
        il2cpp_runtime_glue(&(pGVar2->fields).contentLayout,__this);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x4175eb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  long lVar6;
  
  if (DAT_05704b0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchLocalizer);
    DAT_05704b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = *plVar2;
  if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
    lVar6 = 0;
    do {
      if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) {
        puVar4 = (undefined8 *)
                 (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar6) * 0x10 + 0x138);
        goto LAB_04175fa3;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_IGisketchLocalizer,0);
LAB_04175fa3:
  pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar2,key,fallback,puVar4[1],(code *)*puVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Provider
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* style, System_String_o* icon, System_String_o* textKey, System_String_o* fallback, System_String_o* action, System_String_o* visibleKey, const MethodInfo* method);
// 0x4176160

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Provider
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *style,
               System_String_o *icon,System_String_o *textKey,System_String_o *fallback,
               System_String_o *action,System_String_o *visibleKey,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)style;
  if (DAT_05704b0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"account.auth.idle");
    DAT_05704b0b = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  text = Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text(textKey,fallback,method_00);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (body,0,text,action,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = textKey;
      il2cpp_runtime_glue(&(pGVar1->fields).textKey,textKey);
      (pGVar1->fields).style = style;
      il2cpp_runtime_glue(&(pGVar1->fields).style,style);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search);
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar2->fields).alignItems = visibleKey;
        il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
        (pGVar2->fields).alignSelf = "account.auth.idle";
        il2cpp_runtime_glue(&(pGVar2->fields).alignSelf);
        (pGVar1->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible (System_String_o* key, const MethodInfo* method);
// 0x4176620

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b0c = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled (System_String_o* key, const MethodInfo* method);
// 0x4176920

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (DAT_05704b0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    DAT_05704b0d = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor (const MethodInfo* method);
// 0x4176d20

void Gisketch_Aottg2UI_Game_AottgAccountDialogUi___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this;
  
  if (DAT_05704b0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_AottgAccountDialogUi);
    DAT_05704b0e = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)
           il2cpp_runtime_glue(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgAccountDialogUi + 0xb8),__this);
  return;
}


