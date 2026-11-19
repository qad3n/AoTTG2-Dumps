// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditCharacterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor (const MethodInfo* method);
// 0x58f32d0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075455ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    Il2CppMethodInitialized_075455ab = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, const MethodInfo* method);
// 0x58f3340

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<BuildBody>b__39_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__39_2 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x58f3350

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__39_2
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075455ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.character");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_075455ac = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (footer,3,"Common.Cancel","overlay.close",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,0,"Common.Save","profile.save.character",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<PresetGuild>b__59_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__59_0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x58f3490
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f35a2: cmp byte ptr [rip + 0x1c52027], 0
// asm:   0x58f35a9: je 0x58f3604
// asm:   0x58f35ab: test rbx, rbx
// asm:   0x58f35ae: je 0x58f361c

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__59_0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *method_00;
  MethodInfo *method_01;
  System_String_o **method_02;
  
  if (Il2CppMethodInitialized_075455ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_SelectPresetGuild);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Guild Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-preset-guild");
    Il2CppMethodInitialized_075455ad = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue((MethodInfo *)method_00);
  options = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_SelectPresetGuild,
             (MethodInfo_4A803E0 *)0x0);
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_5269900
                       (group,"profile-character-preset-guild","Guild Preset",value,options,__this_00,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,6,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    method_02 = (System_String_o **)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
    }
    if (g_data_075455d0 == '\0') {
      method_02 = &"profile-character-guild-preset-preview";
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-preset-preview");
      g_data_075455d0 = '\x01';
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      method_01 = (MethodInfo *)&(pGVar1->fields).choiceOptionRenderer;
      (pGVar1->fields).choiceOptionRenderer = "profile-character-guild-preset-preview";
      Il2CppCodeGenWriteBarrier((void **)method_01);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(method_01);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout((MethodInfo *)method_02);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x58efd70

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$<BuildBody>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___BuildBody_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x58f3680

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___BuildBody_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *pGVar1;
  Il2CppObject *object;
  System_String_o *pSVar2;
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_StaticFields *pGVar6;
  
  if (Il2CppMethodInitialized_075455ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_BuildBody_b__39_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form-body");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form-footer");
    Il2CppMethodInitialized_075455ae = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
    pSVar2 = (*(pGVar1->klass->vtable)._4_get_Title.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._4_get_Title.method);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
      icon = (*(pGVar1->klass->vtable)._5_get_TitleIcon.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._5_get_TitleIcon.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
      Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
                (__this_00,pSVar2,0,icon,(System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        pSVar2 = "dialogBody";
        pSVar3 = (__this->fields).__9__1;
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__1
                     ,(MethodInfo_4A81BE0 *)0x0);
          (__this->fields).__9__1 = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        contentLayout =
             Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (panel,pSVar2,pSVar3,"profile-edit-character-form-body",pGVar5,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
        }
        pSVar2 = "dialogFooter";
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
        pSVar3 = pGVar6->__9__39_2;
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
            pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
          }
          object = (Il2CppObject *)pGVar6->__9;
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)pSVar3,object,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_BuildBody_b__39_2,
                     (MethodInfo_4A81BE0 *)0x0);
          pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
          pGVar6->__9__39_2 = pSVar3;
          Il2CppCodeGenWriteBarrier(&pGVar6->__9__39_2);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","FlexEnd","Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar2,pSVar3,"profile-edit-character-form-footer",pGVar5,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$<BuildBody>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___BuildBody_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x58f3ae0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f3b11: cmp byte ptr [rip + 0x1c51a8c], 0
// asm:   0x58f3b18: je 0x58f3c1e

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0___BuildBody_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool enabled;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_Action_GisketchActionContext__o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_075455af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.GuildPlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CharacterNamePlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CharacterName");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_075455af = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_075455a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_075455a4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    cVar1 = pGVar3->_noGuildSelected;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->static_fields;
    cVar1 = pGVar3->_noGuildSelected;
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    }
    enabled = System_String__IsNullOrEmpty(pGVar3->_selectedGuildPresetId,(MethodInfo *)0x0);
  }
  else {
    enabled = false;
  }
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(form,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).info;
  if ((pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,"name",(pSVar4->klass->vtable)._7_get_Item.method),
     pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar6,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview,
               (MethodInfo_4A803E0 *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
              (__this_00,"profile-character-name","MainMenu.Profile.CharacterName","MainMenu.Profile.CharacterNamePlaceholder",pSVar5,true,
               "profile-character-name-effect",pSVar6,in_stack_ffffffffffffffb8);
    if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).info;
      if ((pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"guild",(pSVar4->klass->vtable)._7_get_Item.method),
         pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
        pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pSVar6,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview,
                   (MethodInfo_4A803E0 *)0x0);
        method_00 = (MethodInfo *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)method_00,"profile-character-guild",
                   "Common.Guild","MainMenu.Profile.GuildPlaceholder",pSVar5,enabled,"profile-character-guild-effect",pSVar6,
                   in_stack_ffffffffffffffb8);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)method_00,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild(form,method_00);
        Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges(form,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x58f1da0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$<Badges>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___Badges_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x58f3e50

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___Badges_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoneAvailable");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_075455b0 = '\x01';
  }
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (group,"MainMenu.Profile.Badges","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0
               ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    style = "row";
    pSVar1 = (__this->fields).badges;
    if (pSVar1 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        Gisketch_Aottg2UI_Code_AottgUi__TextKey
                  (group,"MainMenu.Profile.NoneAvailable","accountInputLabel",(System_String_o *)0x0,
                   (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
      }
      else {
        __this_00 = (__this->fields).__9__1;
        if (__this_00 == (System_Action_AottgUi__o *)0x0) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__1
                     ,(MethodInfo_4A81BE0 *)0x0);
          (__this->fields).__9__1 = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
        }
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",14.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (group,style,__this_00,"profile-character-badges",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$<Badges>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___Badges_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58f4080
// eh: try 0x58f41ba..0x58f442f -> pad 0x58f4446 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58f4467..0x58f446c -> pad 0x58f448d cleanup
// eh: try 0x58f4490..0x58f449d -> pad 0x58f44a5 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f4434: jmp 0x58f444c
// asm:   0x58f4436: jmp 0x58f444c
// asm:   0x58f4438: jmp 0x58f444c
// asm:   0x58f443a: jmp 0x58f444c
// asm:   0x58f443c: jmp 0x58f444c
// asm:   0x58f443e: jmp 0x58f444c
// asm:   0x58f4440: jmp 0x58f444c
// asm:   0x58f4442: jmp 0x58f444c
// asm:   0x58f4444: jmp 0x58f444c
// asm:   0x58f4446: jmp 0x58f444c
// asm:   0x58f4448: jmp 0x58f444c
// asm:   0x58f444a: jmp 0x58f444c
// asm:   0x58f444c: mov rbx, rax
// asm:   0x58f444f: cmp edx, 1
// asm:   0x58f4452: jne 0x58f4490
// asm:   0x58f4454: mov rdi, rbx
// asm:   0x58f4457: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f445c: mov rbx, qword ptr [rax]
// asm:   0x58f445f: mov qword ptr [rsp + 0xa8], rbx
// asm:   0x58f4467: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f446c: lea rax, [rip + 0x19991cd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
// asm:   0x58f4473: mov rsi, qword ptr [rax]
// asm:   0x58f4476: lea rdi, [rsp + 0x70]
// asm:   0x58f447b: call 0x4d24f80  ; System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose()
// asm:   0x58f4480: test rbx, rbx
// asm:   0x58f4483: je 0x58f440e
// asm:   0x58f4485: mov rdi, rbx
// asm:   0x58f4488: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f448d: mov rbx, rax
// asm:   0x58f4490: lea rdi, [rsp + 0xa8]
// asm:   0x58f4498: call 0x2fd0af0  ; il2cpp_runtime_helper_02fd0af0()
// asm:   0x58f449d: mov rdi, rbx
// asm:   0x58f44a0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58f44a5: mov rdi, rax
// asm:   0x58f44a8: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0___Badges_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_00;
  System_String_o *text;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Il2CppObject *item;
  System_String_o *icon;
  ulong uVar1;
  bool bVar2;
  System_Action_GisketchActionContext__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_Nullable_bool__Fields aSStack_b0 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_a8;
  System_String_o *pSStack_a0;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  ulong uStack_70;
  undefined1 auStack_60 [16];
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  ulong uStack_38;
  
  pGStack_a8 = row;
  if (Il2CppMethodInitialized_075455b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_ToggleBadge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badge-");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    Il2CppMethodInitialized_075455b1 = '\x01';
  }
  __this_00 = (__this->fields).badges;
  if (__this_00 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,__this_00,
             (MethodInfo_51C8C80 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
  pSStack_78 = pSStack_40;
  uStack_70 = uStack_38;
  SStack_98.fields._current = (Il2CppObject *)pSStack_50;
  pSStack_80 = pSStack_48;
  SStack_98.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
  SStack_98.fields._index = auStack_60._8_4_;
  SStack_98.fields._version = auStack_60._12_4_;
  auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_60._8_8_ = &SStack_98;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                      (&SStack_98,
                       (MethodInfo_4C24F90 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                      );
    uVar1 = uStack_70;
    icon = pSStack_78;
    pSVar5 = pSStack_80;
    item = SStack_98.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (&SStack_98,
                 (MethodInfo_4C24F80 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
      return;
    }
    pSStack_a0 = System_String__Concat_52f0320
                           ("profile-character-badge-",(System_String_o *)SStack_98.fields._current,
                            (MethodInfo *)0x0);
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar2 = false;
    if ((uVar1 & 1) != 0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,item,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_02,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_ToggleBadge,
               (MethodInfo_4A803E0 *)0x0);
    if (pGStack_a8 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uVar1 & 1) == 0) {
      pSVar5 = (System_String_o *)0x0;
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                       (pGStack_a8,pSStack_a0,text,bVar2,__this_02,icon,pSVar5,(MethodInfo *)0x0);
    aSStack_b0[0].hasValue = false;
    aSStack_b0[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_b0,(bool)((byte)uVar1 & 1),
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    (pGVar3->fields).enabled.fields = aSStack_b0[0];
    if ((uVar1 & 1) == 0) {
      pSVar5 = "MainMenu.Profile.SupporterOnlyFeature";
    }
    else {
      pSVar5 = (System_String_o *)0x0;
    }
    (pGVar3->fields).tooltipKey = pSVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltipKey);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (pGVar3->fields).layout = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef6a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.EditCharacter");
    Il2CppMethodInitialized_07545581 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.EditCharacter",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef700

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545582 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/edit");
    Il2CppMethodInitialized_07545582 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef730

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545583 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07545583 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef760

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545584 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07545584 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef790

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_GuardUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_GuardUnsavedChanges (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef7a0

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_GuardUnsavedChanges
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef7b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545585 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545585 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1084.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58ef870

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545586 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07545586 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,24.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x58ef920

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58ef930
// eh: try 0x58efacd..0x58efcf8 -> pad 0x58efd0e (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58efd2a..0x58efd2f -> pad 0x58efd48 cleanup
// eh: try 0x58efd4b..0x58efd55 -> pad 0x58efd5d catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58efcf8: jmp 0x58efd12
// asm:   0x58efcfa: jmp 0x58efd12
// asm:   0x58efcfc: jmp 0x58efd12
// asm:   0x58efcfe: jmp 0x58efd12
// asm:   0x58efd00: jmp 0x58efd12
// asm:   0x58efd02: jmp 0x58efd12
// asm:   0x58efd04: jmp 0x58efd12
// asm:   0x58efd06: jmp 0x58efd12
// asm:   0x58efd08: jmp 0x58efd12
// asm:   0x58efd0a: jmp 0x58efd12
// asm:   0x58efd0c: jmp 0x58efd12
// asm:   0x58efd0e: jmp 0x58efd12
// asm:   0x58efd10: jmp 0x58efd12
// asm:   0x58efd12: mov rbx, rax
// asm:   0x58efd15: cmp edx, 1
// asm:   0x58efd18: jne 0x58efd4b
// asm:   0x58efd1a: mov rdi, rbx
// asm:   0x58efd1d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58efd22: mov rbx, qword ptr [rax]
// asm:   0x58efd25: mov qword ptr [rsp + 0x78], rbx
// asm:   0x58efd2a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58efd2f: lea rdi, [rsp + 0x50]
// asm:   0x58efd34: xor esi, esi
// asm:   0x58efd36: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58efd3b: test rbx, rbx
// asm:   0x58efd3e: je 0x58efcda
// asm:   0x58efd40: mov rdi, rbx
// asm:   0x58efd43: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58efd48: mov rbx, rax
// asm:   0x58efd4b: lea rdi, [rsp + 0x78]
// asm:   0x58efd50: call 0x2fd09b0  ; il2cpp_runtime_helper_02fd09b0()
// asm:   0x58efd55: mov rdi, rbx
// asm:   0x58efd58: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58efd5d: mov rdi, rax
// asm:   0x58efd60: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o *__this_00;
  MethodInfo *method_00;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this_02;
  SimpleJSONFixed_JSONNode_o **targetAddress;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_40;
  
  if (Il2CppMethodInitialized_07545587 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"start");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-dialog-name-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.BuildBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
    Il2CppMethodInitialized_07545587 = '\x01';
  }
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass39_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_40,"Dialog.EditCharacter.BuildBody","start",(MethodInfo *)0x0);
  local_68.fields._startMs = local_40.fields._startMs;
  local_68.fields._enabled = local_40.fields._enabled;
  local_68.fields._hotLoop = local_40.fields._hotLoop;
  local_68.fields._26_6_ = local_40.fields._26_6_;
  local_68.fields._area = local_40.fields._area;
  local_68.fields._detail = local_40.fields._detail;
  local_40.fields._area = (System_String_o *)0x0;
  local_40.fields._detail = (System_String_o *)&local_68;
  method_00 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  targetAddress = &(__this_00->fields).info;
  (__this_00->fields).info = (SimpleJSONFixed_JSONNode_o *)method_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pMVar4 = (MethodInfo *)*targetAddress;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection
            ((SimpleJSONFixed_JSONNode_o *)pMVar4,method_00);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue(pMVar4);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar4 = (MethodInfo *)body;
  Gisketch_Aottg2UI_Code_AottgUi__FormDraft
            (body,"profile-character-badges-draft",pSVar1,"Badges",(System_String_o *)0x0,(MethodInfo *)0x0)
  ;
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue(pMVar4);
  Gisketch_Aottg2UI_Code_AottgUi__FormDraft
            (body,"profile-character-effects-draft",pSVar1,"Effects",(System_String_o *)0x0,(MethodInfo *)0x0)
  ;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(640.0,(MethodInfo *)0x0);
  minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion((MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (body,"profilePreviewDialog",__this_01,"profile-edit-character-form",layout,pGVar2,
                      (MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion((MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar3->fields).exit = pGVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
            (__this_02,"profile-character-dialog-name-preview",420.0,true,"Center",false,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58f13f0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedGuildPresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId (const MethodInfo* method);
// 0x58df430

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c **ppGVar3;
  
  if (Il2CppMethodInitialized_07545588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_07545588 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->
                            static_fields + 8);
  }
  if (cVar1 == '\0') {
    ppGVar3 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
  }
  else {
    ppGVar3 = (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c **)&g_data_07556758;
  }
  return (*ppGVar3)->static_fields->_selectedGuildPresetId;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NoGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected (const MethodInfo* method);
// 0x58f1400

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_07545589 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->
                       static_fields + 8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedBadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds (const MethodInfo* method);
// 0x58df4d0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_0754558a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_0754558a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     ((System_Collections_Generic_IEnumerable_string__o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,
                      (MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectsDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue (const MethodInfo* method);
// 0x58f0fe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f1093: cmp byte ptr [rip + 0x1c544f3], 0
// asm:   0x58f109a: je 0x58f13b2

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  MethodInfo *parts;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754558b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_0754558b = '\x01';
  }
  parts = (MethodInfo *)
          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  pMVar7 = MethodInfo_System_Collections_Generic_List_string_ctor;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)parts,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_0754558d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_0754558d = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",pMVar7);
  uStack_28 = CONCAT17(bVar4,(undefined7)uStack_28);
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar5 = System_Boolean__ToString((bool *)((long)&uStack_28 + 7),(MethodInfo *)0x0);
  pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (parts != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&parts->name + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar3 = *(uint *)&parts->name;
      if (uVar3 < (uint)pSVar6->max_length) {
        *(uint *)&parts->name = uVar3 + 1;
        pMVar8 = (MethodInfo *)(pSVar6->m_Items + (int)uVar3);
        pSVar6->m_Items[(int)uVar3] = pSVar5;
        Il2CppCodeGenWriteBarrier((void **)pMVar8);
      }
      else {
        pMVar8 = parts;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(pMVar8);
      pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = (int32_t *)((long)&parts->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar3 = *(uint *)&parts->name;
        if (uVar3 < (uint)pSVar6->max_length) {
          *(uint *)&parts->name = uVar3 + 1;
          pMVar8 = (MethodInfo *)(pSVar6->m_Items + (int)uVar3);
          pSVar6->m_Items[(int)uVar3] = pSVar5;
          Il2CppCodeGenWriteBarrier((void **)pMVar8);
        }
        else {
          pMVar8 = parts;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar8);
        pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = (int32_t *)((long)&parts->name + 4);
        *piVar1 = *piVar1 + 1;
        pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
        if (pSVar6 != (System_String_array *)0x0) {
          uVar3 = *(uint *)&parts->name;
          if (uVar3 < (uint)pSVar6->max_length) {
            *(uint *)&parts->name = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
            pMVar7 = extraout_RDX;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            pMVar7 = extraout_RDX_00;
          }
          pMVar8 = (MethodInfo *)"profile-character-name-effect";
          Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
                    ((System_Collections_Generic_List_string__o *)parts,"profile-character-name-effect",pMVar7);
          if (Il2CppMethodInitialized_0754558e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
            il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
            Il2CppMethodInitialized_0754558e = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
          }
          bVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar8)
          ;
          uStack_28 = CONCAT17(bVar4,(undefined7)uStack_28);
          pSVar5 = System_Boolean__ToString((bool *)((long)&uStack_28 + 7),(MethodInfo *)0x0);
          pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = (int32_t *)((long)&parts->name + 4);
          *piVar1 = *piVar1 + 1;
          pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar3 = *(uint *)&parts->name;
            if (uVar3 < (uint)pSVar6->max_length) {
              *(uint *)&parts->name = uVar3 + 1;
              pMVar8 = (MethodInfo *)(pSVar6->m_Items + (int)uVar3);
              pSVar6->m_Items[(int)uVar3] = pSVar5;
              Il2CppCodeGenWriteBarrier((void **)pMVar8);
            }
            else {
              pMVar8 = parts;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                         (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            }
            pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(pMVar8);
            pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = (int32_t *)((long)&parts->name + 4);
            *piVar1 = *piVar1 + 1;
            pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
            if (pSVar6 != (System_String_array *)0x0) {
              uVar3 = *(uint *)&parts->name;
              if (uVar3 < (uint)pSVar6->max_length) {
                *(uint *)&parts->name = uVar3 + 1;
                pMVar8 = (MethodInfo *)(pSVar6->m_Items + (int)uVar3);
                pSVar6->m_Items[(int)uVar3] = pSVar5;
                Il2CppCodeGenWriteBarrier((void **)pMVar8);
              }
              else {
                pMVar8 = parts;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
              }
              pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar8);
              pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = (int32_t *)((long)&parts->name + 4);
              *piVar1 = *piVar1 + 1;
              pSVar6 = ((System_Collections_Generic_List_string__Fields *)&parts->invoker_method)->_items;
              if (pSVar6 != (System_String_array *)0x0) {
                uVar3 = *(uint *)&parts->name;
                if (uVar3 < (uint)pSVar6->max_length) {
                  *(uint *)&parts->name = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = pSVar5;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                  pMVar7 = extraout_RDX_01;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                  pMVar7 = extraout_RDX_02;
                }
                Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
                          ((System_Collections_Generic_List_string__o *)parts,"profile-character-guild-effect",pMVar7);
                pSVar6 = (System_String_array *)
                         System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_object__o *)parts,
                                    (MethodInfo_395F5A0 *)
                                    MethodInfo_System_Collections_Generic_List_string_ToArray);
                pSVar5 = System_String__Join("|",pSVar6,(MethodInfo *)0x0);
                return pSVar5;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SyncEffectsDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SyncEffectsDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e5890

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SyncEffectsDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *method_00;
  
  if (Il2CppMethodInitialized_0754558c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
    Il2CppMethodInitialized_0754558c = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue((MethodInfo *)method_00);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
            (source,"profile-character-effects-draft",value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled (const MethodInfo* method);
// 0x58e0a70

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754558d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_0754558d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
    return bVar2;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled (const MethodInfo* method);
// 0x58e09f0

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754558e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_0754558e = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
    return bVar2;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType (const MethodInfo* method);
// 0x58e0c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e0c21: cmp byte ptr [rip + 0x1c64965], 0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754558f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_0754558f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_0754558d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_0754558d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType (const MethodInfo* method);
// 0x58e0af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e0b11: cmp byte ptr [rip + 0x1c64a76], 0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545590 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_0754558e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_0754558e = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont (const MethodInfo* method);
// 0x58df660

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545591 = '\x01';
    bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  }
  if (!bVar1) {
    return "Normal";
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont (const MethodInfo* method);
// 0x58df710

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545592 = '\x01';
    bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  }
  if (!bVar1) {
    return "Normal";
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled (System_String_o* prefix, const MethodInfo* method);
// 0x58e1b00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e1b86: jmp 0x58e1bb3

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
               (System_String_o *prefix,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *type;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_07545593 = '\x01';
  }
  bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar2) {
    method_00 = (MethodInfo *)"profile-character-name-effect";
    bVar2 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    if (bVar2) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      bVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      bVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    type = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(prefix,method_00);
    bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect(bVar2,type,(MethodInfo *)0x0);
    return bVar2;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType (System_String_o* prefix, const MethodInfo* method);
// 0x58e1be0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(System_String_o *prefix,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  int32_t local_24;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07545594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_07545594 = '\x01';
  }
  local_24 = 0;
  bVar2 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    ppSVar3 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    ppSVar3 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType;
  }
  bVar2 = PatreonEffects_NameEffectPresets__TryResolve(*ppSVar3,&local_24,(MethodInfo *)0x0);
  if (bVar2) {
    local_20.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_20.monitor = (void *)0xffffffffffffffff;
    local_10 = local_24;
    pSVar4 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar4;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x58e1ce0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e1d0c: mov dword ptr [rsp + 4], ebp
// asm:   0x58e1d10: cmp byte ptr [rip + 0x1c63885], 0
// asm:   0x58e1de2: jmp 0x58e1d2c

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_07545595 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_0754559c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     (pSVar2,"#FFFFFFFF",true,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect (System_String_o* prefix, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x58e5740

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect
               (System_String_o *prefix,bool enabled,System_String_o *type,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar4;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_07545596 = '\x01';
  }
  bVar3 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      pGVar4->_nameEffectEnabled = enabled;
      if (!enabled) {
        type = "None";
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)pGVar2);
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      }
    }
    else {
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      pGVar4->_nameEffectEnabled = enabled;
      if (!enabled) {
        type = "None";
      }
    }
    pGVar4->_nameEffectType = type;
    targetAddress = &pGVar4->_nameEffectType;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      pGVar4->_guildEffectEnabled = enabled;
      if (!enabled) {
        type = "None";
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)pGVar2);
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      }
    }
    else {
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
      pGVar4->_guildEffectEnabled = enabled;
      if (!enabled) {
        type = "None";
      }
    }
    pGVar4->_guildEffectType = type;
    targetAddress = &pGVar4->_guildEffectType;
  }
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font (System_String_o* prefix, const MethodInfo* method);
// 0x58e1a80

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(System_String_o *prefix,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *pGVar4;
  
  if (Il2CppMethodInitialized_07545597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_07545597 = '\x01';
  }
  bVar2 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)pGVar4);
      return pSVar3;
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont
                       ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    return pSVar3;
  }
  if (uVar1 == 0) {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)pGVar4);
    return pSVar3;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont
                     ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont (System_String_o* prefix, System_String_o* font, const MethodInfo* method);
// 0x58e4060

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
               (System_String_o *prefix,System_String_o *font,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_07545598 = '\x01';
  }
  bVar3 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar4 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    pGVar2->_nameFont = pSVar4;
    targetAddress = &pGVar2->_nameFont;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar4 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    pGVar2->_guildFont = pSVar4;
    targetAddress = &pGVar2->_guildFont;
  }
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RefreshPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58f16e0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    Il2CppMethodInitialized_07545599 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,in_RSI);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,in_RSI);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58f1730

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_c *method_00;
  
  if (Il2CppMethodInitialized_0754559a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_PresetGuild_b__59_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-preset-guild-group");
    Il2CppMethodInitialized_0754559a = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register((MethodInfo *)method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
  __this = pGVar1->__9__59_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_PresetGuild_b__59_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields;
    pGVar1->__9__59_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__59_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this,"profile-character-preset-guild-group",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Badges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58f1a50
// eh: try 0x58f1b95..0x58f1d37 -> pad 0x58f1d43 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58f1d62..0x58f1d67 -> pad 0x58f1d80 cleanup
// eh: try 0x58f1d83..0x58f1d90 -> pad 0x58f1d98 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f1d37: jmp 0x58f1d47
// asm:   0x58f1d39: jmp 0x58f1d47
// asm:   0x58f1d3b: jmp 0x58f1d47
// asm:   0x58f1d3d: jmp 0x58f1d47
// asm:   0x58f1d3f: jmp 0x58f1d47
// asm:   0x58f1d41: jmp 0x58f1d47
// asm:   0x58f1d43: jmp 0x58f1d47
// asm:   0x58f1d45: jmp 0x58f1d47
// asm:   0x58f1d47: mov rbx, rax
// asm:   0x58f1d4a: cmp edx, 1
// asm:   0x58f1d4d: jne 0x58f1d83
// asm:   0x58f1d4f: mov rdi, rbx
// asm:   0x58f1d52: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f1d57: mov rbx, qword ptr [rax]
// asm:   0x58f1d5a: mov qword ptr [rsp + 0x80], rbx
// asm:   0x58f1d62: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f1d67: lea rdi, [rsp + 0x60]
// asm:   0x58f1d6c: xor esi, esi
// asm:   0x58f1d6e: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58f1d73: test rbx, rbx
// asm:   0x58f1d76: je 0x58f1d17
// asm:   0x58f1d78: mov rdi, rbx
// asm:   0x58f1d7b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f1d80: mov rbx, rax
// asm:   0x58f1d83: lea rdi, [rsp + 0x80]
// asm:   0x58f1d8b: call 0x2fd09d0  ; il2cpp_runtime_helper_02fd09d0()
// asm:   0x58f1d90: mov rdi, rbx
// asm:   0x58f1d93: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58f1d98: mov rdi, rax
// asm:   0x58f1d9b: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o *__this;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_6c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_0754559b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-group");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.Badges");
    Il2CppMethodInitialized_0754559b = '\x01';
  }
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  local_6c = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"Dialog.EditCharacter.Badges","load",(MethodInfo *)0x0);
  local_68.fields._startMs = local_48.fields._startMs;
  local_68.fields._enabled = local_48.fields._enabled;
  local_68.fields._hotLoop = local_48.fields._hotLoop;
  local_68.fields._26_6_ = local_48.fields._26_6_;
  local_68.fields._area = local_48.fields._area;
  local_68.fields._detail = local_48.fields._detail;
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)&local_68;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges((MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass60_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).badges = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).badges);
  pSVar1 = (__this->fields).badges;
  if (pSVar1 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_6c = (pSVar1->fields)._size;
  pSVar2 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("count=",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.Badges",pSVar2,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,"default",__this_00,"profile-character-badges-group",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorInputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x58e12e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_0754559c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar1 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(prefix,"-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$InitializeSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x58efd80
// eh: try 0x58efff9..0x58f0e13 -> pad 0x58f0dc7 (+100 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58f0e1e..0x58f0e28 -> pad 0x58f0e74 catch (...) [compiler noexcept guard]
// eh: try 0x58f0e3d..0x58f0e42 -> pad 0x58f0e5f cleanup
// eh: try 0x58f0e62..0x58f0e6c -> pad 0x58f0e74 catch (...) [compiler noexcept guard]
// asm: 130 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f0077: jmp 0x58f009e
// asm:   0x58f0173: jmp 0x58f01b1
// asm:   0x58f0188: jmp 0x58f0242
// asm:   0x58f01ea: jmp 0x58f0210
// asm:   0x58f030b: jmp 0x58f031c
// asm:   0x58f03e0: jmp 0x58f03f1
// asm:   0x58f0528: jmp 0x58f0541
// asm:   0x58f0673: jmp 0x58f068c
// asm:   0x58f073e: jmp 0x58f075d
// asm:   0x58f0827: jmp 0x58f083f
// asm:   0x58f0a0e: lea rbp, [rip + 0x19889e3]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58f0a15: lea r13, [rip + 0x19805b4]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58f0a1c: lea r14, [rip + 0x19a0cf5]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x58f0a23: jmp 0x58f0a3e
// asm:   0x58f0a30: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x58f0a35: test rbx, rbx
// asm:   0x58f0a38: je 0x58f0ce0
// asm:   0x58f0a5e: nop 
// asm:   0x58f0d35: mov rdi, r14
// asm:   0x58f0d38: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f0d5b: jmp 0x58f0dd7
// asm:   0x58f0d5d: jmp 0x58f0dd7
// asm:   0x58f0d5f: jmp 0x58f0dd7
// asm:   0x58f0d61: jmp 0x58f0dd7
// asm:   0x58f0d63: jmp 0x58f0dd7
// asm:   0x58f0d65: jmp 0x58f0dd7
// asm:   0x58f0d67: jmp 0x58f0dd7
// asm:   0x58f0d69: jmp 0x58f0dd7
// asm:   0x58f0d6b: jmp 0x58f0dd7
// asm:   0x58f0d6d: jmp 0x58f0dd7
// asm:   0x58f0d6f: jmp 0x58f0dd7
// asm:   0x58f0d71: jmp 0x58f0dd7
// asm:   0x58f0d73: jmp 0x58f0dd7
// asm:   0x58f0d75: jmp 0x58f0dd7
// asm:   0x58f0d77: jmp 0x58f0dd7
// asm:   0x58f0d79: jmp 0x58f0dd7
// asm:   0x58f0d7b: jmp 0x58f0dd7
// asm:   0x58f0d7d: jmp 0x58f0dd7
// asm:   0x58f0d7f: jmp 0x58f0dd7
// asm:   0x58f0d81: jmp 0x58f0dd7
// asm:   0x58f0d83: jmp 0x58f0dd7
// asm:   0x58f0d85: jmp 0x58f0dd7
// asm:   0x58f0d87: jmp 0x58f0dd7
// asm:   0x58f0d89: jmp 0x58f0dd7
// asm:   0x58f0d8b: jmp 0x58f0dd7
// asm:   0x58f0d8d: jmp 0x58f0dd7
// asm:   0x58f0d8f: jmp 0x58f0dd7
// asm:   0x58f0d91: jmp 0x58f0dd7
// asm:   0x58f0d93: jmp 0x58f0dd7
// asm:   0x58f0d95: jmp 0x58f0dd7
// asm:   0x58f0d97: jmp 0x58f0dd7
// asm:   0x58f0d99: jmp 0x58f0dd7
// asm:   0x58f0d9b: jmp 0x58f0dd7
// asm:   0x58f0d9d: jmp 0x58f0dd7
// asm:   0x58f0d9f: jmp 0x58f0dd7
// asm:   0x58f0da1: jmp 0x58f0dd7
// asm:   0x58f0da3: jmp 0x58f0dd7
// asm:   0x58f0da5: jmp 0x58f0dd7
// asm:   0x58f0da7: jmp 0x58f0dd7
// asm:   0x58f0da9: jmp 0x58f0dd7
// asm:   0x58f0dab: jmp 0x58f0dd7
// asm:   0x58f0dad: jmp 0x58f0dd7
// asm:   0x58f0daf: jmp 0x58f0dd7
// asm:   0x58f0db1: jmp 0x58f0dd7
// asm:   0x58f0db3: jmp 0x58f0dd7
// asm:   0x58f0db5: jmp 0x58f0dd7
// asm:   0x58f0db7: jmp 0x58f0dd7
// asm:   0x58f0db9: jmp 0x58f0dd7
// asm:   0x58f0dbb: jmp 0x58f0dd7
// asm:   0x58f0dbd: jmp 0x58f0dd7
// asm:   0x58f0dbf: jmp 0x58f0dd7
// asm:   0x58f0dc1: jmp 0x58f0dd7
// asm:   0x58f0dc3: jmp 0x58f0dd7
// asm:   0x58f0dc5: jmp 0x58f0dd7
// asm:   0x58f0dc7: jmp 0x58f0dd7
// asm:   0x58f0dc9: jmp 0x58f0dd7
// asm:   0x58f0dcb: jmp 0x58f0dd7
// asm:   0x58f0dcd: jmp 0x58f0dd7
// asm:   0x58f0dcf: jmp 0x58f0dd7
// asm:   0x58f0dd1: jmp 0x58f0dd7
// asm:   0x58f0dd3: jmp 0x58f0dd7
// asm:   0x58f0dd5: jmp 0x58f0df1
// asm:   0x58f0dd7: mov rbx, rdx
// asm:   0x58f0dda: mov r14, rax
// asm:   0x58f0ddd: jmp 0x58f0e28
// asm:   0x58f0ddf: jmp 0x58f0df1
// asm:   0x58f0de1: jmp 0x58f0df1
// asm:   0x58f0de3: jmp 0x58f0df1
// asm:   0x58f0de5: jmp 0x58f0df1
// asm:   0x58f0de7: jmp 0x58f0df1
// asm:   0x58f0de9: jmp 0x58f0df1
// asm:   0x58f0deb: jmp 0x58f0df1
// asm:   0x58f0ded: jmp 0x58f0df1
// asm:   0x58f0def: jmp 0x58f0df1
// asm:   0x58f0df1: mov rbx, rdx
// asm:   0x58f0df4: mov r14, rax
// asm:   0x58f0df7: cmp ebx, 1
// asm:   0x58f0dfa: jne 0x58f0e1e
// asm:   0x58f0dfc: mov rdi, r14
// asm:   0x58f0dff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f0e04: mov r14, qword ptr [rax]
// asm:   0x58f0e07: mov qword ptr [rsp + 0x20], r14
// asm:   0x58f0e0c: xor ebp, ebp
// asm:   0x58f0e0e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f0e13: jmp 0x58f0ba5
// asm:   0x58f0e18: mov rbx, rdx
// asm:   0x58f0e1b: mov r14, rax
// asm:   0x58f0e1e: lea rdi, [rsp + 0x20]
// asm:   0x58f0e23: call 0x2fd09f0  ; il2cpp_runtime_helper_02fd09f0()
// asm:   0x58f0e28: cmp ebx, 1
// asm:   0x58f0e2b: jne 0x58f0e62
// asm:   0x58f0e2d: mov rdi, r14
// asm:   0x58f0e30: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f0e35: mov rbx, qword ptr [rax]
// asm:   0x58f0e38: mov qword ptr [rsp + 0x58], rbx
// asm:   0x58f0e3d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f0e42: lea rdi, [rsp + 0x30]
// asm:   0x58f0e47: xor esi, esi
// asm:   0x58f0e49: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58f0e4e: test rbx, rbx
// asm:   0x58f0e51: je 0x58f0cd1
// asm:   0x58f0e57: mov rdi, rbx
// asm:   0x58f0e5a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f0e5f: mov r14, rax
// asm:   0x58f0e62: lea rdi, [rsp + 0x58]
// asm:   0x58f0e67: call 0x2fd0a80  ; il2cpp_runtime_helper_02fd0a80()
// asm:   0x58f0e6c: mov rdi, r14
// asm:   0x58f0e6f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58f0e74: mov rdi, rax
// asm:   0x58f0e77: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection
               (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_HashSet_string__o *pSVar6;
  bool bVar7;
  char cVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONArray_o *pSVar11;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  ulong uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar15;
  bool local_99;
  Il2CppObject *local_98;
  int32_t local_8c;
  undefined8 local_88;
  Il2CppObject **local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_0754559d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"badges=");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&" presetGuild=");
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    il2cpp_codegen_initialize_runtime_metadata(&"info=");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.InitializeSelection");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_0754559d = '\x01';
  }
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  local_98 = (Il2CppObject *)0x0;
  local_8c = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  local_99 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar9 = System_Boolean__ToString(&local_99,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_52f0320("info=",pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"Dialog.EditCharacter.InitializeSelection",pSVar9,(MethodInfo *)0x0);
  local_78.fields._startMs = local_50.fields._startMs;
  local_78.fields._enabled = local_50.fields._enabled;
  local_78.fields._hotLoop = local_50.fields._hotLoop;
  local_78.fields._26_6_ = local_50.fields._26_6_;
  local_78.fields._area = local_50.fields._area;
  local_78.fields._detail = local_50.fields._detail;
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)&local_78;
  if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId = pSVar9;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId)
  ;
  bVar7 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                     _selectedGuildPresetId,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guild",(info->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                          (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar9 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    if (Il2CppMethodInitialized_07545573 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
      Il2CppMethodInitialized_07545573 = '\x01';
    }
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar9 = MiscExtensions__StripRichText(pSVar9,(MethodInfo *)0x0);
    pSVar9 = MiscExtensions__StripHex(pSVar9,(MethodInfo *)0x0);
    bVar7 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar7 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected = bVar7;
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"enabled",(pSVar10->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = (*(pSVar10->klass->vtable)._39_get_AsBool.methodPtr)
                      (pSVar10,(pSVar10->klass->vtable)._39_get_AsBool.method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar7 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled = bVar7;
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"enabled",(pSVar10->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = (*(pSVar10->klass->vtable)._39_get_AsBool.methodPtr)
                      (pSVar10,(pSVar10->klass->vtable)._39_get_AsBool.method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar7 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled = bVar7;
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"type",(pSVar10->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar7) goto label_058f052a;
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"type",(pSVar10->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
label_058f052a:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    pSVar9 = "None";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar2->_nameEffectType = pSVar9;
  Il2CppCodeGenWriteBarrier(&pGVar2->_nameEffectType);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"type",(pSVar10->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar7) goto label_058f0675;
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,"type",(pSVar10->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
label_058f0675:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    pSVar9 = "None";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar2->_guildEffectType = pSVar9;
  Il2CppCodeGenWriteBarrier(&pGVar2->_guildEffectType);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
    pSVar9 = "Normal";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar9 = PatreonEffects_NameFontCatalog__Normalize(pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar2->_nameFont = pSVar9;
  Il2CppCodeGenWriteBarrier(&pGVar2->_nameFont);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
    pSVar9 = "Normal";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar9 = PatreonEffects_NameFontCatalog__Normalize(pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar2->_guildFont = pSVar9;
  Il2CppCodeGenWriteBarrier(&pGVar2->_guildFont);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-name-effect",pSVar10,method_00);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-guild-effect",pSVar10,method_01);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Clear
            (pSVar3,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  pSVar10 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                      (info,"badges",(info->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges(pSVar10,(MethodInfo *)0x0);
    if (pSVar11 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar12 = (Il2CppObject *)
              (*(pSVar11->klass->vtable)._27_get_Children.methodPtr)
                        (pSVar11,(pSVar11->klass->vtable)._27_get_Children.method);
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar12->klass;
    uVar14 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar5->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar13 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
          goto label_058f09e1;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058f09e1:
    local_98 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
    local_88 = 0;
    local_80 = &local_98;
    do {
      if (local_98 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_98->klass;
      uVar14 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar15) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr
            ;
            goto label_058f0a93;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar14 * 0x10 != lVar15);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_98,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058f0a93:
      cVar8 = (*pVVar13->methodPtr)();
      pIVar12 = local_98;
      if (cVar8 == '\0') {
        if (local_98 == (Il2CppObject *)0x0) goto label_058f0c16;
        pIVar4 = local_98->klass;
        uVar14 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar14 == 0) goto label_058f0bef;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar15 = 0;
        goto label_058f0be0;
      }
      if (local_98 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_98->klass;
      uVar14 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar5->interfaceType + lVar15)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar13 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr
            ;
            goto label_058f0b13;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar14 * 0x10 != lVar15);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_98,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0)
      ;
label_058f0b13:
      pIVar12 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = (System_String_o *)(*pIVar12->klass->vtable[9].methodPtr)(pIVar12);
      bVar7 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
      if (!bVar7) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        pIVar12 = (Il2CppObject *)
                  (*pIVar12->klass->vtable[9].methodPtr)(pIVar12,pIVar12->klass->vtable[9].method);
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  (pSVar3,pIVar12,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    } while( true );
  }
label_058f0cc5:
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_78,(MethodInfo *)0x0);
  return;
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_058f0be0:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar13 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
      goto label_058f0c0d;
    }
  }
label_058f0bef:
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(local_98,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058f0c0d:
  (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
label_058f0c16:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
  if (pSVar6 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_8c = (pSVar6->fields)._count;
  pSVar9 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_5302810
                     ("badges=",pSVar9," presetGuild=",
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                      _selectedGuildPresetId,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.InitializeSelection",pSVar9,(MethodInfo *)0x0);
  goto label_058f0cc5;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectPresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58f2120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f21d0: jmp 0x58f225a

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Il2CppClass *klass;
  bool bVar3;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar5;
  MethodInfo *key;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_0754559e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    Il2CppMethodInitialized_0754559e = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar4 = &((context.fields.Node)->fields).value;
  }
  pSVar7 = *ppSVar4;
  bVar3 = System_String__op_Equality(pSVar7,"__none",(MethodInfo *)0x0);
  klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected = bVar3;
  }
  else {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected = bVar3;
  }
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    if (Il2CppMethodInitialized_075455a3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"__none");
      il2cpp_codegen_initialize_runtime_metadata(&"Custom");
      Il2CppMethodInitialized_075455a3 = '\x01';
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if (((!bVar3) &&
        (bVar3 = System_String__op_Equality(pSVar7,"__none",(MethodInfo *)0x0), !bVar3)) &&
       (bVar3 = System_String__op_Equality(pSVar7,"Custom",(MethodInfo *)0x0), !bVar3))
    goto label_058f2272;
  }
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_058f2272:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId = pSVar7;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId)
  ;
  if (Il2CppMethodInitialized_075455a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_075455a4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    cVar1 = pGVar5->_noGuildSelected;
  }
  else {
    pGVar5 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->static_fields;
    cVar1 = pGVar5->_noGuildSelected;
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    }
    bVar3 = System_String__IsNullOrEmpty(pGVar5->_selectedGuildPresetId,(MethodInfo *)0x0);
  }
  else {
    bVar3 = false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
            (context.fields.GameObject,"profile-character-guild",bVar3,in_RCX);
  pSVar7 = "profile-character-guild";
  if (Il2CppMethodInitialized_07545578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".enabled");
    Il2CppMethodInitialized_07545578 = '\x01';
  }
  method_00 = (MethodInfo *)".enabled";
  key = (MethodInfo *)System_String__Concat_52f0320(pSVar7,".enabled",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075455a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_075455a0 = '\x01';
  }
  if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
      (method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot,
      pGVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
      pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
     (__this = (pGVar6->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,(System_String_o *)key,bVar3,(MethodInfo *)0x0);
    method_00 = key;
  }
  if (Il2CppMethodInitialized_07545599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    Il2CppMethodInitialized_07545599 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ToggleBadge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58f25d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f2737: jmp 0x58f277d

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754559f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badge-");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_0754559f = '\x01';
  }
  if ((context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (bVar3 = System_String__IsNullOrEmpty(((context.fields.Node)->fields).id,(MethodInfo *)0x0), !bVar3)) {
    pSVar4 = ((context.fields.Node)->fields).id;
    if (pSVar4 == (System_String_o *)0x0) goto label_058f27e5;
    bVar3 = System_String__StartsWith(pSVar4,"profile-character-badge-",(MethodInfo *)0x0);
    if (bVar3) {
      if (("profile-character-badge-" == (System_String_o *)0x0) ||
         (pSVar4 = ((context.fields.Node)->fields).id, pSVar4 == (System_String_o *)0x0)) goto label_058f27e5;
      pSVar4 = System_String__Substring
                         (pSVar4,("profile-character-badge-"->fields)._stringLength,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (!bVar3) {
      bVar3 = System_String__op_Equality
                        (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      if (bVar3) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_058f27e5:
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  (pSVar2,(Il2CppObject *)pSVar4,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      }
      else {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_058f27e5;
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar2,(Il2CppObject *)pSVar4,
                   (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog =
           (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *)klass;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue((MethodInfo *)klass);
      method_00 = (MethodInfo *)"profile-character-badges-draft";
      Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
                (context.fields.GameObject,"profile-character-badges-draft",pSVar4,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545599 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview)
        ;
        Il2CppMethodInitialized_07545599 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x58f2560

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,bool value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_075455a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_075455a0 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar1->fields)._State_k__BackingField,
       __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,key,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedPresetGuildValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue (const MethodInfo* method);
// 0x58f27f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_075455a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_075455a1 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    cVar1 = pGVar4->_noGuildSelected;
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->static_fields;
    cVar1 = pGVar4->_noGuildSelected;
  }
  if (cVar1 != '\0') {
    return "__none";
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  }
  bVar3 = System_String__IsNullOrEmpty(pGVar4->_selectedGuildPresetId,(MethodInfo *)0x0);
  if (bVar3) {
    return "Custom";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId;
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions (const MethodInfo* method);
// 0x58f28e0
// eh: try 0x58f2a85..0x58f2f1c -> pad 0x58f2ee1 (+31 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58f2f27..0x58f2f31 -> pad 0x58f2f83 catch (...) [compiler noexcept guard]
// eh: try 0x58f2f47..0x58f2f4c -> pad 0x58f2f6e cleanup
// eh: try 0x58f2f71..0x58f2f7b -> pad 0x58f2f83 catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f2eb8: mov rdi, rbp
// asm:   0x58f2ebb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f2ec5: jmp 0x58f2ee5
// asm:   0x58f2ec7: jmp 0x58f2ee5
// asm:   0x58f2ec9: jmp 0x58f2ee5
// asm:   0x58f2ecb: jmp 0x58f2ee5
// asm:   0x58f2ecd: jmp 0x58f2ee5
// asm:   0x58f2ecf: jmp 0x58f2ee5
// asm:   0x58f2ed1: jmp 0x58f2ee5
// asm:   0x58f2ed3: jmp 0x58f2ee5
// asm:   0x58f2ed5: jmp 0x58f2ee5
// asm:   0x58f2ed7: jmp 0x58f2ee5
// asm:   0x58f2ed9: jmp 0x58f2ee5
// asm:   0x58f2edb: jmp 0x58f2ee5
// asm:   0x58f2edd: jmp 0x58f2ee5
// asm:   0x58f2edf: jmp 0x58f2ee5
// asm:   0x58f2ee1: jmp 0x58f2ee5
// asm:   0x58f2ee3: jmp 0x58f2ee5
// asm:   0x58f2ee5: mov r14, rdx
// asm:   0x58f2ee8: mov r15, rax
// asm:   0x58f2eeb: jmp 0x58f2f31
// asm:   0x58f2eed: jmp 0x58f2ef9
// asm:   0x58f2eef: jmp 0x58f2ef9
// asm:   0x58f2ef1: jmp 0x58f2ef9
// asm:   0x58f2ef3: jmp 0x58f2ef9
// asm:   0x58f2ef5: jmp 0x58f2ef9
// asm:   0x58f2ef7: jmp 0x58f2ef9
// asm:   0x58f2ef9: mov r14, rdx
// asm:   0x58f2efc: mov r15, rax
// asm:   0x58f2eff: cmp r14d, 1
// asm:   0x58f2f03: jne 0x58f2f27
// asm:   0x58f2f05: mov rdi, r15
// asm:   0x58f2f08: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f2f0d: mov rbp, qword ptr [rax]
// asm:   0x58f2f10: mov qword ptr [rsp + 0x50], rbp
// asm:   0x58f2f15: xor ebx, ebx
// asm:   0x58f2f17: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f2f1c: jmp 0x58f2dd3
// asm:   0x58f2f21: mov r14, rdx
// asm:   0x58f2f24: mov r15, rax
// asm:   0x58f2f27: lea rdi, [rsp + 0x50]
// asm:   0x58f2f2c: call 0x2fd0aa0  ; il2cpp_runtime_helper_02fd0aa0()
// asm:   0x58f2f31: cmp r14d, 1
// asm:   0x58f2f35: jne 0x58f2f71
// asm:   0x58f2f37: mov rdi, r15
// asm:   0x58f2f3a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f2f3f: mov rbp, qword ptr [rax]
// asm:   0x58f2f42: mov qword ptr [rsp + 0x10], rbp
// asm:   0x58f2f47: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f2f4c: xor ebx, ebx
// asm:   0x58f2f4e: lea rdi, [rsp + 0x80]
// asm:   0x58f2f56: xor esi, esi
// asm:   0x58f2f58: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58f2f5d: test rbp, rbp
// asm:   0x58f2f60: je 0x58f2e80
// asm:   0x58f2f66: mov rdi, rbp
// asm:   0x58f2f69: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f2f6e: mov r15, rax
// asm:   0x58f2f71: lea rdi, [rsp + 0x10]
// asm:   0x58f2f76: call 0x2fd0ad0  ; il2cpp_runtime_helper_02fd0ad0()
// asm:   0x58f2f7b: mov rdi, r15
// asm:   0x58f2f7e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58f2f83: mov rdi, rax
// asm:   0x58f2f86: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_String_Fields SVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  System_Collections_Generic_List_GisketchChoiceOptionDefinition__o *__this;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar10;
  int32_t local_cc [3];
  undefined1 *local_c0;
  System_String_o local_b8;
  System_String_o *pSStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [24];
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_075455a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CustomGuild");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.PresetGuildOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_075455a2 = '\x01';
  }
  local_58._16_8_ = 0;
  uStack_40._0_1_ = false;
  uStack_40._1_1_ = false;
  uStack_40._2_6_ = 0;
  local_58._0_8_ = (System_String_o *)0x0;
  local_58._8_8_ = (System_String_o *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8.fields._stringLength = 0;
  local_b8.fields._firstChar = 0;
  local_b8.fields._6_2_ = 0;
  pSStack_a0 = (System_String_o *)0x0;
  local_b8.klass = (System_String_c *)0x0;
  local_b8.monitor = (void *)0x0;
  local_cc[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_88,"Dialog.EditCharacter.PresetGuildOptions",
             "load",(MethodInfo *)0x0);
  local_58._16_8_ = local_88._16_8_;
  uStack_40 = (System_String_o *)local_88._24_8_;
  local_58._0_8_ = local_88._0_8_;
  local_58._8_8_ = local_88._8_8_;
  local_cc[1] = 0;
  local_cc[2] = 0;
  local_c0 = local_58;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ctor);
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar8->fields).value = "__none";
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).value);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.None",(MethodInfo *)0x0);
  (pGVar8->fields).text = pSVar9;
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).text);
  (pGVar8->fields).textKey = "Common.None";
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).textKey);
  pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add;
  if (__this != (System_Collections_Generic_List_GisketchChoiceOptionDefinition__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar10 = (__this->fields)._items;
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pGVar10->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pGVar10->m_Items[(int)uVar2] = pGVar8;
        Il2CppCodeGenWriteBarrier(pGVar10->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar8,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar8,(MethodInfo *)0x0);
      if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar8->fields).value = "Custom";
      Il2CppCodeGenWriteBarrier(&(pGVar8->fields).value);
      pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Profile.CustomGuild",(MethodInfo *)0x0);
      (pGVar8->fields).text = pSVar9;
      Il2CppCodeGenWriteBarrier(&(pGVar8->fields).text);
      (pGVar8->fields).textKey = "MainMenu.Profile.CustomGuild";
      Il2CppCodeGenWriteBarrier(&(pGVar8->fields).textKey);
      pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar10 = (__this->fields)._items;
      if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pGVar10->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pGVar10->m_Items[(int)uVar2] = pGVar8;
        Il2CppCodeGenWriteBarrier(pGVar10->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar8,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds
                            ((MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_88,__this_00,
                 (MethodInfo_51C8C80 *)
                 MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
      local_98 = local_68;
      uStack_90 = uStack_60;
      local_b8.fields._stringLength = local_88._16_4_;
      local_b8.fields._firstChar = local_88._20_2_;
      local_b8.fields._6_2_ = local_88._22_2_;
      pSStack_a0 = (System_String_o *)local_88._24_8_;
      local_b8.klass = (System_String_c *)local_88._0_8_;
      local_b8.monitor = (void *)local_88._8_8_;
      local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_88._8_8_ = &local_b8;
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                           (MethodInfo_4C24F90 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                          );
        uVar6 = uStack_90;
        pSVar9 = pSStack_a0;
        SVar4 = local_b8.fields;
        if (!bVar7) {
          System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                     (MethodInfo_4C24F80 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
                    );
          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this,
                               (MethodInfo_395F5A0 *)
                               MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ToArray
                              );
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
            ThrowNullReferenceException();
          }
          local_cc[0] = (int32_t)pGVar10->max_length;
          pSVar9 = System_Int32__ToString(local_cc,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat_52f0320("count=",pSVar9,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                    ("Dialog.EditCharacter.PresetGuildOptions",pSVar9,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                    ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_58,(MethodInfo *)0x0);
          return pGVar10;
        }
        bVar5 = (byte)uStack_90;
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar8,(MethodInfo *)0x0);
        if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
        (pGVar8->fields).value = (System_String_o *)SVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).value);
        (pGVar8->fields).text = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).text);
        (pGVar8->fields).enabled = (bool)(bVar5 & 1);
        if ((uVar6 & 1) == 0) {
          pSVar9 = "MainMenu.Profile.SupporterOnlyFeature";
        }
        else {
          pSVar9 = (System_String_o *)0x0;
        }
        (pGVar8->fields).tooltipKey = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).tooltipKey);
        pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar10 = (__this->fields)._items;
        if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar10->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pGVar10->m_Items[(int)uVar2] = pGVar8;
          Il2CppCodeGenWriteBarrier(pGVar10->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar8,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId (System_String_o* value, const MethodInfo* method);
// 0x58f2430

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075455a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_075455a3 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((bVar1) || (bVar1 = System_String__op_Equality(value,"__none",(MethodInfo *)0x0), bVar1))
     || (bVar1 = System_String__op_Equality(value,"Custom",(MethodInfo *)0x0), bVar1)) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$CustomGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected (const MethodInfo* method);
// 0x58f24c0

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075455a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_075455a4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
    cVar1 = pGVar3->_noGuildSelected;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->static_fields;
    cVar1 = pGVar3->_noGuildSelected;
  }
  if (cVar1 != '\0') {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    bVar4 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                       _selectedGuildPresetId,(MethodInfo *)0x0);
    return bVar4;
  }
  bVar4 = System_String__IsNullOrEmpty(pGVar3->_selectedGuildPresetId,(MethodInfo *)0x0);
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ChoiceRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout (const MethodInfo* method);
// 0x58f2f90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075455a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075455a5 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BadgesDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue (const MethodInfo* method);
// 0x58f0e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f0ea8: cmp byte ptr [rip + 0x1c546db], 0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075455a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_075455a6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_0754558a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_0754558a = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     ((System_Collections_Generic_IEnumerable_string__o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,
                      (MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar2,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  pSVar3 = System_String__Join("|",pSVar2,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$AddEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors (System_Collections_Generic_List_string__o* parts, System_String_o* prefix, const MethodInfo* method);
// 0x58f1470
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f151d: jmp 0x58f1545
// asm:   0x58f159b: jmp 0x58f15c3
// asm:   0x58f1619: jmp 0x58f1641

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
               (System_Collections_Generic_List_string__o *parts,System_String_o *prefix,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX_10;
  
  if (Il2CppMethodInitialized_075455a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_075455a7 = '\x01';
    method = extraout_RDX;
  }
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  if (parts == (System_Collections_Generic_List_string__o *)0x0) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      method = extraout_RDX_10;
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,0,method);
    ThrowNullReferenceException();
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    method = extraout_RDX_00;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,0,method);
  pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
  piVar1 = &(parts->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar4 = (parts->fields)._items;
  if (pSVar4 != (System_String_array *)0x0) {
    uVar3 = (parts->fields)._size;
    if (uVar3 < (uint)pSVar4->max_length) {
      (parts->fields)._size = uVar3 + 1;
      pSVar4->m_Items[(int)uVar3] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      pMVar6 = extraout_RDX_01;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      pMVar6 = extraout_RDX_02;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pMVar6 = extraout_RDX_03;
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,1,pMVar6);
    pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (parts->fields)._items;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar3 = (parts->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (parts->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
        pMVar6 = extraout_RDX_04;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
        pMVar6 = extraout_RDX_05;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        pMVar6 = extraout_RDX_06;
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,2,pMVar6);
      pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(parts->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (parts->fields)._items;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar3 = (parts->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (parts->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
          pMVar6 = extraout_RDX_07;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
          pMVar6 = extraout_RDX_08;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
          pMVar6 = extraout_RDX_09;
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,3,pMVar6);
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(parts->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (parts->fields)._items;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar3 = (parts->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (parts->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RegisterEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors (System_String_o* prefix, SimpleJSONFixed_JSONNode_o* effect, const MethodInfo* method);
// 0x58f1db0
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f1de8: mov dword ptr [rsp + 0x14], 0
// asm:   0x58f1df0: cmp byte ptr [rip + 0x1c537a5], 0
// asm:   0x58f1e90: mov dword ptr [rsp + 0x14], 1
// asm:   0x58f1e98: cmp byte ptr [rip + 0x1c536fd], 0
// asm:   0x58f1e9f: jne 0x58f1eb4
// asm:   0x58f1f2d: mov dword ptr [rsp + 0x14], 2
// asm:   0x58f1f35: cmp byte ptr [rip + 0x1c53660], 0
// asm:   0x58f1f3c: jne 0x58f1f51
// asm:   0x58f1fca: mov dword ptr [rsp + 0x14], 3
// asm:   0x58f1fd2: cmp byte ptr [rip + 0x1c535c3], 0
// asm:   0x58f1fd9: jne 0x58f1fee
// asm:   0x58f20af: jmp 0x58f1e0c
// asm:   0x58f20ce: jmp 0x58f1eb4
// asm:   0x58f20ed: jmp 0x58f1f51
// asm:   0x58f210c: jmp 0x58f1fee

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
               (System_String_o *prefix,SimpleJSONFixed_JSONNode_o *effect,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_075455a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_075455a8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_34 = 0;
  if (Il2CppMethodInitialized_0754559c == '\0') {
    local_34 = 0;
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,0,method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,true,false,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_34 = 1;
  if (Il2CppMethodInitialized_0754559c == '\0') {
    local_34 = 1;
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,1,method_01);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,true,false,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_34 = 2;
  if (Il2CppMethodInitialized_0754559c == '\0') {
    local_34 = 2;
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,2,method_02);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,true,false,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_34 = 3;
  if (Il2CppMethodInitialized_0754559c == '\0') {
    local_34 = 3;
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_0754559c = '\x01';
  }
  pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,3,method_03);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,true,false,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue (SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x58f3050

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue
          (SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075455a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    Il2CppMethodInitialized_075455a9 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058f3199;
    pSVar2 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                       (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return "#FFFFFFFF";
  }
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(pSVar2->klass->vtable)._5_get_Item.methodPtr)
                  (pSVar2,index,(pSVar2->klass->vtable)._5_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return "#FFFFFFFF";
    }
    pSVar2 = (*(pSVar2->klass->vtable)._5_get_Item.methodPtr)
                       (pSVar2,index,(pSVar2->klass->vtable)._5_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      return pSVar3;
    }
  }
label_058f3199:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x58f31a0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor (const MethodInfo* method);
// 0x58f31b0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields *pGVar1;
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075455aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_075455aa = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar1->_nameEffectType = "None";
  Il2CppCodeGenWriteBarrier(&pGVar1->_nameEffectType);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar1->_guildEffectType = "None";
  Il2CppCodeGenWriteBarrier(&pGVar1->_guildEffectType);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar1->_nameFont = "Normal";
  Il2CppCodeGenWriteBarrier(&pGVar1->_nameFont);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar1->_guildFont = "Normal";
  Il2CppCodeGenWriteBarrier(&pGVar1->_guildFont);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields;
  pGVar1->SelectedBadges = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->SelectedBadges);
  return;
}


