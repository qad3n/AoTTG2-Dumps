// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditCharacterDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor (const MethodInfo* method);
// 0x41e4c40

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704ef2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704ef2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, const MethodInfo* method);
// 0x41e4cb0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<BuildBody>b__34_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__34_2 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x41e4cc0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__<BuildBody>b__34_2
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  if (DAT_05704ef3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"profile.save.character");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"profile.save.idle");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704ef3 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (footer,3,"Cancel","overlay.close",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,0,"Save","profile.save.character",(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<PresetGuild>b__51_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__51_0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x41e4e10

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__<PresetGuild>b__51_0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  int iVar1;
  System_String_o *value;
  bool_conflict bVar2;
  Il2CppMethodPointer pIVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704ef4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_SelectPresetGuild);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_init_method_metadata(&"profile-character-preset-guild");
    DAT_05704ef4 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704eeb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"Custom");
    DAT_05704eeb = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar6 = *(MethodInfo **)TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)pMVar6,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer;
    pMVar6 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    pIVar3 = (Il2CppMethodPointer)&"Custom";
  }
  value = *(System_String_o **)pIVar3;
  options = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions(pMVar6);
  action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Select
                       (group,"profile-character-preset-guild",value,options,action,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,6,(MethodInfo *)0x0
                       );
    pMVar6 = TypeInfo_AottgGuildPresetChoicePreview;
    if (*(int *)((long)&TypeInfo_AottgGuildPresetChoicePreview[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704f17 == '\0') {
      pMVar6 = (MethodInfo *)&"profile-character-guild-preset-preview";
      il2cpp_init_method_metadata();
      DAT_05704f17 = '\x01';
    }
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pMVar6 = (MethodInfo *)&(pGVar4->fields).choiceOptions;
      (pGVar4->fields).choiceOptions = "profile-character-guild-preset-preview";
      il2cpp_runtime_glue();
      pGVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(pMVar6);
      (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar5);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(pMVar6);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass34_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o* __this, const MethodInfo* method);
// 0x41e0a70

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass34_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass34_0$$<BuildBody>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0___BuildBody_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x41e5090

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass34_0__<BuildBody>b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *pGVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704ef5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgDialogHeader);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__34_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"profile-edit-character-form-body");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"dialogFooter");
    il2cpp_init_method_metadata(&"dialogBody");
    il2cpp_init_method_metadata(&"profile-edit-character-form-footer");
    DAT_05704ef5 = '\x01';
    method = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(pGVar1->klass->vtable)._4_get_Title.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._4_get_Title.method,method);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
      icon = (System_String_o *)
             (*(pGVar1->klass->vtable)._5_get_TitleIcon.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._5_get_TitleIcon.method);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)il2cpp_runtime_glue(TypeInfo_AottgDialogHeader);
      Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
                (__this_00,pSVar3,0,icon,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        pSVar3 = "dialogBody";
        pSVar4 = (__this->fields).__9__1;
        if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
          pSVar4 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          (__this->fields).__9__1 = pSVar4;
          il2cpp_runtime_glue(&(__this->fields).__9__1,pSVar4);
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        contentLayout =
             Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (panel,pSVar3,pSVar4,"profile-edit-character-form-body",pGVar6,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = "dialogFooter";
        pSVar4 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar4;
          il2cpp_runtime_glue(lVar2 + 8,pSVar4);
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","FlexEnd","Center",(System_String_o *)0x0,
                            (System_String_o *)0x0,12.0,pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar3,pSVar4,"profile-edit-character-form-footer",pGVar6,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass34_0$$<BuildBody>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0___BuildBody_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x41e54f0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass34_0__<BuildBody>b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass34_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  uint uVar2;
  long *plVar3;
  System_String_o *pSVar4;
  System_Action_GisketchActionContext__o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this_00;
  MethodInfo *pMVar6;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05704ef6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshPreview);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"Character Name");
    il2cpp_init_method_metadata(&"Guild tag");
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"Character name");
    il2cpp_init_method_metadata(&"profile-character-name");
    il2cpp_init_method_metadata(&"profile-character-guild");
    il2cpp_init_method_metadata(&"name");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    DAT_05704ef6 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar6 = (MethodInfo *)0x0;
  uVar2 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(form,pMVar6);
  pSVar1 = (__this->fields).info;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar1,"name",(pSVar1->klass->vtable)._7_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_String_o *)
               (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)
                  il2cpp_runtime_glue(TypeInfo_AottgCharacterTextField);
      Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                (__this_00,"profile-character-name","Character Name","Character name",pSVar4,1,"profile-character-name-effect",pSVar5,
                 in_stack_ffffffffffffffb8);
      if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).info;
        if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          plVar3 = (long *)(*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar1,"guild",(pSVar1->klass->vtable)._7_get_Item.method
                                     );
          if (plVar3 != (long *)0x0) {
            pSVar4 = (System_String_o *)
                     (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
            System_Action<GisketchActionContext>___ctor();
            pMVar6 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AottgCharacterTextField);
            Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                      ((Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)pMVar6,"profile-character-guild",
                       "Guild","Guild tag",pSVar4,uVar2 & 0xff,"profile-character-guild-effect",pSVar5,
                       in_stack_ffffffffffffffb8);
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pMVar6,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild(form,pMVar6);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges(form,pMVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass52_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x41e3360

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass52_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass52_0$$<Badges>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0___Badges_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x41e5890

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass52_0__<Badges>b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704ef7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void__Badges_b__1);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"profile-character-badges");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"None available");
    il2cpp_init_method_metadata(&"Wrap");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"row");
    DAT_05704ef7 = '\x01';
  }
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (group,"Badges","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    style = "row";
    pSVar1 = (__this->fields).badges;
    if (pSVar1 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (group,"None available","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        build = (__this->fields).__9__1;
        if (build == (System_Action_AottgUi__o *)0x0) {
          build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          (__this->fields).__9__1 = build;
          il2cpp_runtime_glue(&(__this->fields).__9__1,build);
        }
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",14.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (group,style,build,"profile-character-badges",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass52_0$$<Badges>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0___Badges_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41e5ac0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_<>c__DisplayClass52_0__<Badges>b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass52_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_00;
  System_String_o *text;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  undefined8 item;
  undefined8 icon;
  undefined8 uVar1;
  bool_conflict bVar2;
  uint uVar3;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  Il2CppObject *in_stack_ffffffffffffff18;
  undefined1 auStack_98 [64];
  _union_247250 _Stack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_40;
  Il2CppType *pIStack_38;
  
  if (DAT_05704ef8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_ToggleBadge);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"This feature is only available for supporters.");
    il2cpp_init_method_metadata(&"profile-character-badge-");
    il2cpp_init_method_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    DAT_05704ef8 = '\x01';
  }
  auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_98._40_8_ = (Il2CppType *)0x0;
  auStack_98._16_8_ = (InvokerMethod)0x0;
  auStack_98._24_8_ = (char *)0x0;
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  __this_00 = (__this->fields).badges;
  if (__this_00 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<AottgProfileEntitlementOption>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_98 + 0x38),__this_00,
             MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
  auStack_98._32_8_ = pSStack_40;
  auStack_98._40_8_ = pIStack_38;
  auStack_98._16_8_ = pSStack_50;
  auStack_98._24_8_ = pSStack_48;
  auStack_98._8_8_ = _Stack_58;
  while( true ) {
    __this_02.fields._index = (int)in_stack_ffffffffffffff10;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_02.fields._current = in_stack_ffffffffffffff18;
    bVar2 = System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__MoveNext
                      (__this_02,(MethodInfo_317AAD0 *)auStack_98);
    uVar1 = auStack_98._40_8_;
    icon = auStack_98._32_8_;
    pSVar6 = (System_String_o *)auStack_98._24_8_;
    item = auStack_98._16_8_;
    if ((char)bVar2 == '\0') {
      __this_03.fields._index = (int)in_stack_ffffffffffffff10;
      __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_03.fields._current = in_stack_ffffffffffffff18;
      System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
                (__this_03,(MethodInfo_317AAC0 *)auStack_98);
      return;
    }
    auStack_98._48_8_ =
         System_String__Concat("profile-character-badge-",(System_String_o *)auStack_98._16_8_,(MethodInfo *)0x0);
    text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    uVar3 = 0;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = *(System_Collections_Generic_HashSet_object__o **)
                   (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar3 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_01,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      uVar3 = uVar3 & 0xff;
    }
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uVar1 & 1) == 0) {
      pSVar6 = "This feature is only available for supporters.";
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                       (row,(System_String_o *)auStack_98._48_8_,text,uVar3,action,
                        (System_String_o *)icon,pSVar6,(MethodInfo *)0x0);
    auStack_98._56_2_ = 0;
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)((long)auStack_98 + 0x38),(uint)uVar1 & 1,MethodInfo_Nullable_1_Boolean);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    *(undefined2 *)((long)&(pGVar4->fields).hasIcon + 3) = auStack_98._56_2_;
    pSVar6 = "MainMenu.Profile.SupporterOnlyFeature";
    if ((uVar1 & 1) != 0) {
      pSVar6 = (System_String_o *)0x0;
    }
    (pGVar4->fields).tooltip = pSVar6;
    il2cpp_runtime_glue();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff08 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff10 = 0;
    in_stack_ffffffffffffff18 = (Il2CppObject *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        in_stack_ffffffffffffff08,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e0390

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ece == '\0') {
    il2cpp_init_method_metadata(&"Edit Character");
    DAT_05704ece = '\x01';
  }
  return "Edit Character";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e03c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ecf == '\0') {
    il2cpp_init_method_metadata(&"material-icons/edit");
    DAT_05704ecf = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e03f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ed0 == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704ed0 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e0420

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ed1 == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704ed1 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e0450

bool_conflict
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e0460

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704ed2 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704ed2 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1084.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e0530

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704ed3 == '\0') {
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Row");
    DAT_05704ed3 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,24.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x41e05f0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41e0600

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *info;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_02;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  System_String_o *local_68;
  System_String_o *pSStack_60;
  _union_13 local_58;
  _union_14 _Stack_50;
  undefined1 local_40 [32];
  
  if (DAT_05704ed4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreviewPanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass34_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"start");
    il2cpp_init_method_metadata(&"profile-edit-character-form");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"profile-character-dialog-name-preview");
    il2cpp_init_method_metadata(&"profilePreviewDialog");
    il2cpp_init_method_metadata(&"Dialog.EditCharacter.BuildBody");
    DAT_05704ed4 = '\x01';
  }
  local_58 = (_union_13)0x0;
  _Stack_50 = (_union_14)0x0;
  local_68 = (System_String_o *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass34_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_01[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_01 + 1,__this);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_40,"Dialog.EditCharacter.BuildBody",
             "start",(MethodInfo *)0x0);
  local_58 = (_union_13)local_40._16_8_;
  _Stack_50 = (_union_14)local_40._24_8_;
  local_68 = (System_String_o *)local_40._0_8_;
  pSStack_60 = (System_String_o *)local_40._8_8_;
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  __this_01[1].monitor = method_00;
  il2cpp_runtime_glue(&__this_01[1].monitor);
  info = __this_01[1].monitor;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection(info,method_00);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(640.0,(MethodInfo *)0x0);
  minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  uVar5 = 0;
  uVar4 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (DAT_05704f5c == '\0') {
    il2cpp_init_method_metadata(&"slideRight");
    DAT_05704f5c = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uVar3 = 0;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,"profilePreviewDialog",build,"profile-edit-character-form",layout,pGVar1,(MethodInfo *)0x0);
    if (DAT_05704f5d == '\0') {
      il2cpp_init_method_metadata(&"slideRight");
      DAT_05704f5d = '\x01';
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).enter = pGVar1;
      il2cpp_runtime_glue(&(pGVar2->fields).enter,pGVar1);
      __this_02 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *)
                  il2cpp_runtime_glue(TypeInfo_AottgCharacterNamePreviewPanel);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
                (__this_02,"profile-character-dialog-name-preview",420.0,1,"Center",0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
      __this_00.fields._detail = (System_String_o *)uVar4;
      __this_00.fields._area = (System_String_o *)uVar3;
      __this_00.fields._startMs = (int64_t)minHeight;
      __this_00.fields._enabled = (int)uVar5;
      __this_00.fields._hotLoop = (int)((ulong)uVar5 >> 0x20);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&local_68);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x41e1b00

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedGuildPresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId (const MethodInfo* method);
// 0x41e1b10

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704ed5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    DAT_05704ed5 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedBadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds (const MethodInfo* method);
// 0x41e1b80

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds(MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704ed6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    DAT_05704ed6 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                       (*(System_Collections_Generic_IEnumerable_string__o **)
                         (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30),in_RSI);
    return (System_Collections_Generic_IEnumerable_string__o *)pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     (*(System_Collections_Generic_IEnumerable_string__o **)
                       (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30),in_RSI);
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled (const MethodInfo* method);
// 0x41e2250

bool_conflict Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704ed7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ed7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled (const MethodInfo* method);
// 0x41e2380

bool_conflict
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704ed8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    DAT_05704ed8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType (const MethodInfo* method);
// 0x41e2400

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704ed9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"None");
    DAT_05704ed9 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704ed7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ed7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x10);
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType (const MethodInfo* method);
// 0x41e2510

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704eda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"None");
    DAT_05704eda = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704ed8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    DAT_05704ed8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x18);
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont (const MethodInfo* method);
// 0x41e2620

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704edb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata();
    DAT_05704edb = '\x01';
    bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return "Normal";
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont (const MethodInfo* method);
// 0x41e26d0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704edc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata();
    DAT_05704edc = '\x01';
    bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return "Normal";
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled (System_String_o* prefix, const MethodInfo* method);
// 0x41e22c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
          (System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *type;
  byte bVar3;
  MethodInfo *method_00;
  
  if (DAT_05704edd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata();
    DAT_05704edd = '\x01';
  }
  bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = "profile-character-name-effect";
    uVar2 = System_String__op_Equality(prefix,(System_String_o *)"profile-character-name-effect",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = *(byte *)((*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) - (ulong)(uVar2 & 0xff)) + 9);
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
    }
    else {
      bVar3 = *(byte *)((*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) - (ulong)(uVar2 & 0xff)) + 9);
    }
    type = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(prefix,method_00);
    bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect
                      ((uint)bVar3,type,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType (System_String_o* prefix, const MethodInfo* method);
// 0x41e2780

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType
          (System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  int32_t local_2c;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (DAT_05704ede == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_NameEffectType);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ede = '\x01';
  }
  local_2c = 0;
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                    (*(System_String_o **)
                      (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x10 + (ulong)(byte)((byte)bVar1 ^ 1) * 8),
                     &local_2c,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    local_28.klass = TypeInfo_NameEffectType;
    local_28.monitor = (void *)0xffffffffffffffff;
    local_18 = local_2c;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x41e2870

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  undefined1 local_14 [4];
  
  if (DAT_05704edf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    DAT_05704edf = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     (pSVar2,"#FFFFFFFF",1,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect (System_String_o* prefix, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x41e29e0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect
               (System_String_o *prefix,bool_conflict enabled,System_String_o *type,
               MethodInfo *method)

{
  char cVar1;
  long lVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  cVar1 = (char)enabled;
  if (DAT_05704ee0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ee0 = '\x01';
  }
  bVar3 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_AottgEditCharacterDialog);
    lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar2;
  if ((char)bVar3 == '\0') {
    *(char *)(lVar5 + 9) = cVar1;
    if (cVar1 == '\0') {
      type = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_init_class(lVar2);
      lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar4 = (undefined8 *)(lVar5 + 0x18);
  }
  else {
    *(char *)(lVar5 + 8) = cVar1;
    if (cVar1 == '\0') {
      type = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_init_class(lVar2);
      lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar4 = (undefined8 *)(lVar5 + 0x10);
  }
  *puVar4 = type;
  il2cpp_runtime_glue(puVar4,type);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font (System_String_o* prefix, const MethodInfo* method);
// 0x41e2af0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_05704ee1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ee1 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  method_00 = TypeInfo_AottgEditCharacterDialog;
  if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 == '\0') {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(method_00);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(method_00);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont (System_String_o* prefix, System_String_o* font, const MethodInfo* method);
// 0x41e2b60

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
               (System_String_o *prefix,System_String_o *font,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05704ee2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    DAT_05704ee2 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  puVar3 = (undefined8 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x28);
  if ((char)bVar1 != '\0') {
    puVar3 = (undefined8 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x20);
  }
  *puVar3 = pSVar2;
  il2cpp_runtime_glue(puVar3,pSVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RefreshPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41e2c30

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  if (DAT_05704ee3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
    DAT_05704ee3 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) != 0) {
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
              (context.fields.GameObject,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
            (context.fields.GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41e2c90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (DAT_05704ee4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_init_method_metadata(&MethodInfo_Void__PresetGuild_b__51_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-character-preset-guild-group");
    DAT_05704ee4 = '\x01';
  }
  method_00 = TypeInfo_AottgGuildPresetChoicePreview;
  if (*(int *)((long)&TypeInfo_AottgGuildPresetChoicePreview[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register(method_00);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
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
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,build,"profile-character-preset-guild-group",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Badges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41e2fb0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_6c;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (DAT_05704ee5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void__Badges_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass52_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"count=");
    il2cpp_init_method_metadata(&"load");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-character-badges-group");
    il2cpp_init_method_metadata(&"Dialog.EditCharacter.Badges");
    DAT_05704ee5 = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_6c = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"Dialog.EditCharacter.Badges","load",(MethodInfo *)0x0);
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass52_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (DAT_05704f6e == '\0') {
    il2cpp_init_method_metadata(&"Badges");
    DAT_05704f6e = '\x01';
  }
  pIVar1 = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                     ("Badges",method_00);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00[1].klass = pIVar1;
  il2cpp_runtime_glue(__this_00 + 1);
  pIVar1 = __this_00[1].klass;
  if (pIVar1 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_6c = *(undefined4 *)&(pIVar1->_1).namespaze;
  pSVar2 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat("count=",pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.Badges",pSVar2,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uVar3 = 0;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"default",build,"profile-character-badges-group",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this.fields._detail = (System_String_o *)uVar4;
    __this.fields._area = (System_String_o *)uVar3;
    __this.fields._startMs = uVar5;
    __this.fields._enabled = (int)uVar6;
    __this.fields._hotLoop = (int)((ulong)uVar6 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorInputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x41e2980

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(prefix,"-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$InitializeSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x41e0a80

/* WARNING: Removing unreachable block (ram,0x041e1774) */

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection
               (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  undefined8 uVar10;
  SimpleJSONFixed_JSONArray_o *pSVar11;
  undefined8 *puVar12;
  long *plVar13;
  Il2CppObject *item;
  MethodInfo *method_00;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 in_stack_ffffffffffffff68 [15];
  long in_stack_ffffffffffffff78;
  long lVar17;
  undefined4 in_stack_ffffffffffffff80;
  bool_conflict bVar18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (DAT_05704ee7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"nameEffect");
    il2cpp_init_method_metadata(&"guildEffect");
    il2cpp_init_method_metadata(&"badges=");
    il2cpp_init_method_metadata(&"nameFont");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"guildFont");
    il2cpp_init_method_metadata(&" presetGuild=");
    il2cpp_init_method_metadata(&"badges");
    il2cpp_init_method_metadata(&"info=");
    il2cpp_init_method_metadata(&"guildPresetId");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"Dialog.EditCharacter.InitializeSelection");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704ee7 = '\x01';
  }
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  bVar18 = 0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar3 = (undefined1)bVar6;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff77,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat("info=",pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"Dialog.EditCharacter.InitializeSelection",pSVar7,(MethodInfo *)0x0);
  if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    uVar10 = **(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8) = uVar10;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgEditCharacterDialog + 0xb8),uVar10);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    uVar4 = 0;
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                               (plVar9,"enabled",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) = uVar4;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    uVar4 = 0;
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                               (plVar9,"enabled",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 9) = uVar4;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
LAB_041e105e:
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    uVar10 = "None";
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto LAB_041e105e;
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                               (plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar17 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar17 + 0x10) = uVar10;
  il2cpp_runtime_glue(lVar17 + 0x10,uVar10);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
LAB_041e11c1:
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    uVar10 = "None";
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto LAB_041e11c1;
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                               (plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar17 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar17 + 0x18) = uVar10;
  il2cpp_runtime_glue(lVar17 + 0x18,uVar10);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    pSVar7 = "Normal";
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar7 = PatreonEffects_NameFontCatalog__Normalize(pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar17 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(System_String_o **)(lVar17 + 0x20) = pSVar7;
  il2cpp_runtime_glue(lVar17 + 0x20,pSVar7);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    pSVar7 = "Normal";
  }
  else {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar7 = PatreonEffects_NameFontCatalog__Normalize(pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar17 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(System_String_o **)(lVar17 + 0x28) = pSVar7;
  il2cpp_runtime_glue(lVar17 + 0x28,pSVar7);
  auVar16 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-name-effect",auVar16._0_8_,auVar16._8_8_);
  auVar16 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-guild-effect",auVar16._0_8_,auVar16._8_8_);
  pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30)
  ;
  if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__Clear(pSVar2,MethodInfo_Void_Clear);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"badges",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges(pSVar8,method_00)
    ;
    if (pSVar11 == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(*(pSVar11->klass->vtable)._27_get_Children.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._27_get_Children.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar17 = *plVar9;
    if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar14) * 0x10 + lVar17 + 0x138);
          goto LAB_041e1541;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar14);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerable_JSONNode,0);
LAB_041e1541:
    plVar9 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar17 = 0;
    do {
      lVar14 = *plVar9;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138
                      );
            goto LAB_041e15e3;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041e15e3:
      cVar5 = (*(code *)*puVar12)();
      if (cVar5 == '\0') {
        in_stack_ffffffffffffff78 = lVar17;
        if (plVar9 == (long *)0x0) goto LAB_041e1766;
        lVar14 = *plVar9;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto LAB_041e173f;
        lVar15 = 0;
        goto LAB_041e1730;
      }
      lVar14 = *plVar9;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator_JSONNode) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138
                      );
            goto LAB_041e1653;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_JSONNode,0);
LAB_041e1653:
      plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = (System_String_o *)(**(code **)(*plVar13 + 0x1c8))(plVar13);
      bVar18 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar18 == '\0') {
        if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = *(System_Collections_Generic_HashSet_object__o **)
                  (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
        item = (Il2CppObject *)
               (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add(pSVar2,item,MethodInfo_Boolean_Add);
      }
    } while( true );
  }
LAB_041e1819:
  __this.fields._detail._7_1_ = uVar3;
  __this.fields._0_15_ = in_stack_ffffffffffffff68;
  __this.fields._startMs = in_stack_ffffffffffffff78;
  __this.fields._enabled = in_stack_ffffffffffffff80;
  __this.fields._hotLoop = bVar18;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_78);
  return;
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
LAB_041e1730:
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_041e175d;
    }
  }
LAB_041e173f:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041e175d:
  (*(code *)*puVar12)(plVar9);
LAB_041e1766:
  if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_022c0ed0(lVar17);
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar17 = *(long *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar18 = *(bool_conflict *)(lVar17 + 0x20);
  pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat
                     ("badges=",pSVar7," presetGuild=",
                      (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.InitializeSelection",pSVar7,(MethodInfo *)0x0);
  goto LAB_041e1819;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectPresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41e3d40

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_RCX;
  
  if (DAT_05704ee8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"profile-character-guild");
    DAT_05704ee8 = '\x01';
  }
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar3 = ((context.fields.Node)->fields).value;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704eed == '\0') {
      il2cpp_init_method_metadata(&"Custom");
      DAT_05704eed = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (((char)bVar1 == '\0') &&
       (bVar1 = System_String__op_Equality(pSVar3,"Custom",(MethodInfo *)0x0),
       (char)bVar1 == '\0')) goto LAB_041e3dff;
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_041e3dff:
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8) = pSVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgEditCharacterDialog + 0xb8));
  uVar2 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
            (context.fields.GameObject,"profile-character-guild",uVar2 & 0xff,in_RCX);
  pSVar3 = "profile-character-guild";
  if (DAT_05704ec5 == '\0') {
    il2cpp_init_method_metadata(&".enabled");
    DAT_05704ec5 = '\x01';
  }
  pSVar3 = System_String__Concat(pSVar3,".enabled",(MethodInfo *)0x0);
  if (DAT_05704eea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704eea = '\x01';
  }
  if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
      (pIVar4 = UnityEngine_GameObject__GetComponentInParent<object>
                          (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo), pIVar4 != (Il2CppObject *)0x0))
     && (pIVar4[9].klass != (Il2CppClass *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pIVar4[9].klass,pSVar3,uVar2 & 0xff,
               (MethodInfo *)0x0);
  }
  if (DAT_05704ee3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
    DAT_05704ee3 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
            (context.fields.GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ToggleBadge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41e4050

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704ee9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&"profile-character-badge-");
    il2cpp_init_method_metadata(&"true");
    DAT_05704ee9 = '\x01';
  }
  if ((context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (bVar2 = System_String__IsNullOrEmpty(((context.fields.Node)->fields).id,(MethodInfo *)0x0),
     (char)bVar2 != '\0')) {
    return;
  }
  pSVar3 = ((context.fields.Node)->fields).id;
  if (pSVar3 != (System_String_o *)0x0) {
    bVar2 = System_String__StartsWith(pSVar3,"profile-character-badge-",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      if (("profile-character-badge-" == (System_String_o *)0x0) ||
         (pSVar3 = ((context.fields.Node)->fields).id, pSVar3 == (System_String_o *)0x0))
      goto LAB_041e422e;
      pSVar3 = System_String__Substring
                         (pSVar3,("profile-character-badge-"->fields)._stringLength,(MethodInfo *)0x0);
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((char)bVar2 == '\0') {
        System_Collections_Generic_HashSet<object>__Remove
                  (__this,(Il2CppObject *)pSVar3,MethodInfo_Boolean_Remove);
        iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      }
      else {
        System_Collections_Generic_HashSet<object>__Add(__this,(Il2CppObject *)pSVar3,MethodInfo_Boolean_Add);
        iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704ee3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
        DAT_05704ee3 = '\x01';
        iVar1 = *(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
                (context.fields.GameObject,(MethodInfo *)0x0);
      return;
    }
  }
LAB_041e422e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x41e3fe0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,
               bool_conflict value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05704eea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704eea = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponentInParent<object>
                       (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[9].klass != (Il2CppClass *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pIVar1[9].klass,key,value & 0xff,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedPresetGuildValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue (const MethodInfo* method);
// 0x41e4240

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704eeb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"Custom");
    DAT_05704eeb = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Custom";
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions (const MethodInfo* method);
// 0x41e42e0

/* WARNING: Removing unreachable block (ram,0x041e477d) */

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  System_String_o *pSVar7;
  undefined1 in_stack_ffffffffffffff38 [12];
  undefined4 uVar8;
  Il2CppObject *pIVar9;
  Il2CppMethodPointer pIVar10;
  byte bStack_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  ulong uStack_38;
  
  if (DAT_05704eec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    il2cpp_init_method_metadata(&MethodInfo_GisketchChoiceOptionDefinition___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchChoiceOpti);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"This feature is only available for supporters.");
    il2cpp_init_method_metadata(&"count=");
    il2cpp_init_method_metadata(&"load");
    il2cpp_init_method_metadata(&"Dialog.EditCharacter.PresetGuildOptions");
    il2cpp_init_method_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    DAT_05704eec = '\x01';
  }
  local_88._16_8_ = (void *)0x0;
  local_88._24_8_ = (char *)0x0;
  local_88._0_8_ = (Il2CppType **)0x0;
  local_88._8_8_ = (Il2CppRGCTXData *)0x0;
  uVar8 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_60,"Dialog.EditCharacter.PresetGuildOptions",
             "load",(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_GisketchChoiceOptionDefinition);
  System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchChoiceOpti);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)method_00,(MethodInfo *)0x0)
  ;
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *)&method_00->invoker_method)->
  value = "Custom";
  il2cpp_runtime_glue((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *)
                     &method_00->invoker_method);
  method_00->name = (char *)"Custom";
  il2cpp_runtime_glue(&method_00->name);
  lVar4 = MethodInfo_Void_Add;
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = &(__this_02->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar3 = (__this_02->fields)._items;
  if (pSVar3 != (System_Object_array *)0x0) {
    uVar2 = (__this_02->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_02->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)method_00;
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_02,(Il2CppObject *)method_00,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_05704f6c == '\0') {
      il2cpp_init_method_metadata(&"PresetGuilds");
      DAT_05704f6c = '\x01';
    }
    __this_03 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                          ("PresetGuilds",method_00);
    if (__this_03 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<AottgProfileEntitlementOption>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_03,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    pIVar9 = (Il2CppObject *)CONCAT44(local_60._4_4_,local_60._0_4_);
    pIVar10 = (Il2CppMethodPointer)CONCAT44(local_60._12_4_,local_60._8_4_);
    while( true ) {
      __this.fields._version = uVar8;
      __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
      __this.fields._index = in_stack_ffffffffffffff38._8_4_;
      __this.fields._current = pIVar9;
      bVar5 = System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__MoveNext
                        (__this,(MethodInfo_317AAD0 *)&stack0xffffffffffffff48);
      if ((char)bVar5 == '\0') {
        __this_00.fields._version = uVar8;
        __this_00.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
        __this_00.fields._index = in_stack_ffffffffffffff38._8_4_;
        __this_00.fields._current = pIVar9;
        System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
                  (__this_00,(MethodInfo_317AAC0 *)&stack0xffffffffffffff48);
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_02,MethodInfo_GisketchChoiceOptionDefinition___ToArray);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          uVar8 = (undefined4)pGVar6->max_length;
          pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat("count=",pSVar7,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                    ("Dialog.EditCharacter.PresetGuildOptions",pSVar7,(MethodInfo *)0x0);
          __this_01.fields._detail._4_4_ = uVar8;
          __this_01.fields._0_12_ = in_stack_ffffffffffffff38;
          __this_01.fields._startMs = (int64_t)pIVar9;
          __this_01.fields._24_8_ = pIVar10;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                    (__this_01,(MethodInfo *)local_88);
          return pGVar6;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bStack_90 = (byte)uStack_38;
      __this_04 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_04,(MethodInfo *)0x0);
      if (__this_04 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      (__this_04->fields).value = (System_String_o *)CONCAT44(local_60._20_4_,local_60._16_4_);
      il2cpp_runtime_glue(&__this_04->fields,
                         (System_String_o *)CONCAT44(local_60._20_4_,local_60._16_4_));
      (__this_04->fields).text = (System_String_o *)CONCAT44(local_60._28_4_,local_60._24_4_);
      il2cpp_runtime_glue(&(__this_04->fields).text);
      *(byte *)&(__this_04->fields).enabled = bStack_90 & 1;
      pSVar7 = "This feature is only available for supporters.";
      if ((uStack_38 & 1) != 0) {
        pSVar7 = (System_String_o *)0x0;
      }
      (__this_04->fields).tooltip = pSVar7;
      il2cpp_runtime_glue(&(__this_04->fields).tooltip);
      pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
      if ((uStack_38 & 1) != 0) {
        pSVar7 = (System_String_o *)0x0;
      }
      (__this_04->fields).tooltipKey = pSVar7;
      il2cpp_runtime_glue(&(__this_04->fields).tooltipKey);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_02->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_04);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_02,(Il2CppObject *)__this_04,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId (System_String_o* value, const MethodInfo* method);
// 0x41e3f70

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId
          (System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704eed == '\0') {
    il2cpp_init_method_metadata(&"Custom");
    DAT_05704eed = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') &&
     (bVar1 = System_String__op_Equality(value,"Custom",(MethodInfo *)0x0), (char)bVar1 == '\0')
     ) {
    return value;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ChoiceRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout (const MethodInfo* method);
// 0x41e48f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704eee == '\0') {
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata();
    DAT_05704eee = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RegisterEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors (System_String_o* prefix, SimpleJSONFixed_JSONNode_o* effect, const MethodInfo* method);
// 0x41e33a0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
               (System_String_o *prefix,SimpleJSONFixed_JSONNode_o *effect,MethodInfo *method)

{
  int iVar1;
  uint in_EAX;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ulong uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_05704eef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_05704eef = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,0,method_00);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  else {
  }
  uStack_38 = CONCAT44(1,(uint)uStack_38);
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,1,method_01);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  else {
  }
  uStack_38 = CONCAT44(2,(uint)uStack_38);
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,2,method_02);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  else {
  }
  uStack_38 = CONCAT44(3,(uint)uStack_38);
  if (DAT_05704ee6 == '\0') {
    il2cpp_init_method_metadata(&"-color-");
    DAT_05704ee6 = '\x01';
  }
  pSVar2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,3,method_03);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue (SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x41e49c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue
          (SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704ef0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"colors");
    DAT_05704ef0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041e4b09;
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(effect->klass->vtable)._7_get_Item.methodPtr)
                  (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return "#FFFFFFFF";
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (*(a->klass->vtable)._5_get_Item.methodPtr)
                     (a,(ulong)(uint)index,(a->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return "#FFFFFFFF";
    }
    plVar2 = (long *)(*(a->klass->vtable)._5_get_Item.methodPtr)
                               (a,(ulong)(uint)index,(a->klass->vtable)._5_get_Item.method);
    if (plVar2 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar2 + 0x1c8);
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtable_dispatch);
      return pSVar3;
    }
  }
LAB_041e4b09:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x41e4b10

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor (const MethodInfo* method);
// 0x41e4b20

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05704ef1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"None");
    DAT_05704ef1 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "None";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Normal";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Normal";
  il2cpp_runtime_glue(lVar1 + 0x28);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x30) = __this;
  il2cpp_runtime_glue(lVar1 + 0x30,__this);
  return;
}


