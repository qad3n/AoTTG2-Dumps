// Type: Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditProfileDetailsDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x41f0a60

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_<>c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass10_0$$<LabeledTextArea>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0___LabeledTextArea_b__0 (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x41f0a80

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_<>c__DisplayClass10_0__<LabeledTextArea>b__0
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass10_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  System_String_o *placeholder;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704f55 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"textArea");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"No bio yet.");
    DAT_05704f55 = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (field,(__this->fields).label,"accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar3 = (__this->fields).id;
    placeholder = (__this->fields).placeholder;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextArea
                       (field,pSVar3,placeholder,"textArea",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,0x200,
                        (MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,"No bio yet.",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar3 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    }
    else {
      pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).value = pSVar3;
      il2cpp_runtime_glue(&(pGVar2->fields).value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x41f0140

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f4e == '\0') {
    il2cpp_init_method_metadata(&"Edit Profile Details");
    DAT_05704f4e = '\x01';
  }
  return "Edit Profile Details";
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x41f0170

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f4f == '\0') {
    il2cpp_init_method_metadata(&"material-icons/edit");
    DAT_05704f4f = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x41f01a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f50 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704f50 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41f0270

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  undefined1 uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined1 in_stack_ffffffffffffff98 [15];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_30;
  
  if (DAT_05704f51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileSocialLinksEditor);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"loggedIn=");
    il2cpp_init_method_metadata(&"Bio");
    il2cpp_init_method_metadata(&"profile-details-bio");
    il2cpp_init_method_metadata(&"Dialog.EditProfileDetails.BuildBody");
    il2cpp_init_method_metadata(&"Tell players who you are...");
    DAT_05704f51 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  uVar1 = (undefined1)bVar2;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffffa7,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat("loggedIn=",pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = "Dialog.EditProfileDetails.BuildBody";
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_30,(System_String_o *)"Dialog.EditProfileDetails.BuildBody",pSVar3,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,method_00);
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput(body,method_00);
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea
            (body,"Bio","profile-details-bio","Tell players who you are...",in_R8);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *)
              il2cpp_runtime_glue(TypeInfo_AottgProfileSocialLinksEditor);
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor(__this_01,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    __this_00.fields._detail._7_1_ = uVar1;
    __this_00.fields._0_15_ = in_stack_ffffffffffffff98;
    __this_00.fields._startMs = (int64_t)GStack_30.fields._area;
    __this_00.fields._24_8_ = GStack_30.fields._detail;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffffa8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x41f0930

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704f52 == '\0') {
    il2cpp_init_method_metadata(&"profile.save.details");
    DAT_05704f52 = '\x01';
    method = extraout_RDX;
  }
  actionId = "profile.save.details";
  if (DAT_05704f61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition,"profile.save.details",method);
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"profile.save.idle");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704f61 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              (footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                       (footer,"Save",actionId,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_glue(&(__this_00->fields).alignSelf);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this_00;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,__this_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$AccountNameInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41f04a0

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  System_String_o *placeholder;
  char cVar2;
  undefined8 *puVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  bool_conflict bVar3;
  
  if (DAT_05704f53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Account Name");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Must log in to set account name");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"Account name");
    il2cpp_init_method_metadata(&"account.loggedIn");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"profile-details-name");
    DAT_05704f53 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,"Account Name","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = "profile-details-name";
    if (cVar2 == '\0') {
      puVar4 = &"Must log in to set account name";
    }
    else {
      puVar4 = &"Account name";
    }
    placeholder = (System_String_o *)*puVar4;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (ui,pSVar7,placeholder,0,"inputField",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x19,(MethodInfo *)0x0);
    if (cVar2 == '\0') {
      pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      pSVar7 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    }
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).value = pSVar7;
      il2cpp_runtime_glue(&(pGVar6->fields).value);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).alignSelf = "account.loggedIn";
        il2cpp_runtime_glue(&(pGVar5->fields).alignSelf);
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_glue(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$LabeledTextArea
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x41f0750

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *id,
               System_String_o *placeholder,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__LabeledTextArea_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass10_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-field");
    DAT_05704f54 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass10_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)label;
    il2cpp_runtime_glue(__this + 1,label);
    __this[1].monitor = id;
    il2cpp_runtime_glue(&__this[1].monitor,id);
    __this[2].klass = (Il2CppClass *)placeholder;
    il2cpp_runtime_glue(__this + 2,placeholder);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id_00 = System_String__Concat(__this[1].monitor,"-field",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,5.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x41f0a70

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


