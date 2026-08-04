// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditCharacterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor (const MethodInfo* method);
// 0x4515cc0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aedca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aedca = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, const MethodInfo* method);
// 0x4515d30

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<BuildBody>b__37_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__37_2 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x4515d40

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__37_2
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  
  __this_00 = footer;
  if (g_data_057aedcb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"profile.save.character");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"profile.save.idle");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057aedcb = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (footer,3,"Cancel","overlay.close",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,0,"Save","profile.save.character",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    pGVar3 = "profile.save.idle";
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignSelf = (System_String_o *)"profile.save.idle";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignSelf);
      __this_00 = pGVar3;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SelectPresetGuild);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_runtime_helper_023445d0(&"profile-character-preset-guild");
    g_data_057aedcc = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue((MethodInfo *)0x0);
  options = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions((MethodInfo *)0x0);
  action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pSVar4 = action;
  System_Action_GisketchActionContext____ctor();
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                       (__this_00,"profile-character-preset-guild",value,options,action,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aedef == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aedef = '\x01';
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).choiceOptions = "profile-character-guild-preset-preview";
      il2cpp_runtime_helper_022b4080();
      pGVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout((MethodInfo *)0x0);
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
      return;
    }
    pSVar4 = (System_Action_GisketchActionContext__o *)0x0;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout((MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedef == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-preset-preview");
    g_data_057aedef = '\x01';
  }
  if (pSVar4 != (System_Action_GisketchActionContext__o *)0x0) {
    pSVar4[1].fields.delegate_trampoline = (intptr_t)"profile-character-guild-preset-preview";
    il2cpp_runtime_helper_022b4080(&pSVar4[1].fields.delegate_trampoline);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<PresetGuild>b__55_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__55_0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x4515e90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__55_0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  
  if (g_data_057aedcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SelectPresetGuild);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_runtime_helper_023445d0(&"profile-character-preset-guild");
    g_data_057aedcc = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue((MethodInfo *)0x0);
  options = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions((MethodInfo *)0x0);
  action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pSVar3 = action;
  System_Action_GisketchActionContext____ctor();
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                       (group,"profile-character-preset-guild",value,options,action,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aedef == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aedef = '\x01';
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).choiceOptions = "profile-character-guild-preset-preview";
      il2cpp_runtime_helper_022b4080();
      pGVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout((MethodInfo *)0x0);
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
      return;
    }
    pSVar3 = (System_Action_GisketchActionContext__o *)0x0;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout((MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedef == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-preset-preview");
    g_data_057aedef = '\x01';
  }
  if (pSVar3 != (System_Action_GisketchActionContext__o *)0x0) {
    pSVar3[1].fields.delegate_trampoline = (intptr_t)"profile-character-guild-preset-preview";
    il2cpp_runtime_helper_022b4080(&pSVar3[1].fields.delegate_trampoline);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x4516060

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass37_0$$<BuildBody>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___BuildBody_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4516070

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___BuildBody_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *pGVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  long *plVar11;
  System_String_o *value;
  System_Action_GisketchActionContext__o *pSVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *pGVar13;
  undefined8 *puVar14;
  MethodInfo *extraout_RDX;
  int variant;
  MethodInfo *ui;
  undefined8 uVar15;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *pGVar16;
  bool_conflict bVar5;
  
  ui = (MethodInfo *)panel;
  if (g_data_057aedcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogHeader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__37_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"profile-edit-character-form-body");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"dialogFooter");
    il2cpp_runtime_helper_023445d0(&"dialogBody");
    il2cpp_runtime_helper_023445d0(&"profile-edit-character-form-footer");
    g_data_057aedcd = '\x01';
    method = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  pGVar16 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)0x0;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
    ui = (pGVar1->klass->vtable)._4_get_Title.method;
    pMVar6 = (MethodInfo *)(*(pGVar1->klass->vtable)._4_get_Title.methodPtr)(pGVar1,ui,method);
    pGVar1 = (__this->fields).__4__this;
    pGVar16 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)0x0;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
      pSVar7 = (System_String_o *)
               (*(pGVar1->klass->vtable)._5_get_TitleIcon.methodPtr)
                         (pGVar1,(pGVar1->klass->vtable)._5_get_TitleIcon.method);
      __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogHeader);
      pGVar16 = __this_00;
      Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
                (__this_00,(System_String_o *)pMVar6,0,pSVar7,(System_String_o *)0x0,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      ui = pMVar6;
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        pSVar7 = "dialogBody";
        pSVar8 = (__this->fields).__9__1;
        if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
          pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          (__this->fields).__9__1 = pSVar8;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1,pSVar8);
        }
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0
                             ,(System_String_o *)0x0,0.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,1.0,1.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        contentLayout =
             Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (panel,pSVar7,pSVar8,"profile-edit-character-form-body",pGVar10,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = "dialogFooter";
        pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar8;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
        }
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Row","FlexEnd","Center",(System_String_o *)0x0,
                             (System_String_o *)0x0,12.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar7,pSVar8,"profile-edit-character-form-footer",pGVar10,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = ui;
  if (g_data_057aedce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshPreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Character Name");
    il2cpp_runtime_helper_023445d0(&"Guild tag");
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"Character name");
    il2cpp_runtime_helper_023445d0(&"profile-character-name");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    il2cpp_runtime_helper_023445d0(&"name");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedce = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,pMVar6);
  variant = (int)pMVar6;
  pGVar13 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextField_o **)&(pGVar16->fields)._variant;
  if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
    uVar15 = "name";
    plVar11 = (long *)(*pGVar13->klass[1]._1.byval_arg.data)
                                (pGVar13,"name",*(undefined8 *)&pGVar13->klass[1]._1.byval_arg.bits);
    variant = (int)uVar15;
    if (plVar11 != (long *)0x0) {
      value = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
      pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterTextField);
      pSVar7 = "profile-character-name";
      pGVar13 = __this_01;
      Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                (__this_01,"profile-character-name","Character Name","Character name",value,1,"profile-character-name-effect",pSVar12,
                 (MethodInfo *)0x0);
      variant = (int)pSVar7;
      if (ui != (MethodInfo *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01
                   ,(MethodInfo *)0x0);
        variant = (int)__this_01;
        pGVar13 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextField_o **)&(pGVar16->fields)._variant;
        if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
          uVar15 = "guild";
          plVar11 = (long *)(*pGVar13->klass[1]._1.byval_arg.data)
                                      (pGVar13,"guild",
                                       *(undefined8 *)&pGVar13->klass[1]._1.byval_arg.bits);
          variant = (int)uVar15;
          if (plVar11 != (long *)0x0) {
            pSVar7 = (System_String_o *)
                     (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
            pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor();
            pGVar13 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterTextField);
            Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                      (pGVar13,"profile-character-guild","Guild","Guild tag",pSVar7,uVar4 & 0xff,"profile-character-guild-effect",pSVar12
                       ,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,
                       (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar13,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"profile-save-scope");
    il2cpp_runtime_helper_023445d0(&"Changes save only to local Profile.json and stay separate from your account.");
    il2cpp_runtime_helper_023445d0(&"Changes save to your account and sync when you sign in elsewhere.");
    g_data_057aee3a = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0451683d;
label_045167d0:
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar3 = (byte)bVar5;
    if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) goto label_045167dc;
label_0451684e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_045167d0;
label_0451683d:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar3 = (byte)bVar5;
    if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) goto label_0451684e;
label_045167dc:
    variant = (uint)(bVar3 ^ 1) * 2;
    if (bVar3 != 0) {
      puVar14 = &"Changes save to your account and sync when you sign in elsewhere.";
      goto label_0451685a;
    }
  }
  puVar14 = &"Changes save only to local Profile.json and stay separate from your account.";
label_0451685a:
  Gisketch_Aottg2UI_Code_AottgUi__Callout
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,variant,(System_String_o *)*puVar14,"profile-save-scope",
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass37_0$$<BuildBody>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___BuildBody_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x45164e0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___BuildBody_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar4;
  System_String_o *value;
  System_Action_GisketchActionContext__o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this_00;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *pGVar7;
  undefined8 *puVar8;
  int variant;
  MethodInfo *method_00;
  undefined8 uVar9;
  bool_conflict bVar3;
  
  method_00 = (MethodInfo *)form;
  if (g_data_057aedce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshPreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Character Name");
    il2cpp_runtime_helper_023445d0(&"Guild tag");
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"Character name");
    il2cpp_runtime_helper_023445d0(&"profile-character-name");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    il2cpp_runtime_helper_023445d0(&"name");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedce = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(form,method_00);
  variant = (int)method_00;
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)(__this->fields).info;
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
    uVar9 = "name";
    plVar4 = (long *)(*pGVar7->klass[1]._1.byval_arg.data)
                               (pGVar7,"name",*(undefined8 *)&pGVar7->klass[1]._1.byval_arg.bits);
    variant = (int)uVar9;
    if (plVar4 != (long *)0x0) {
      value = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterTextField);
      pSVar6 = "profile-character-name";
      pGVar7 = __this_00;
      Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                (__this_00,"profile-character-name","Character Name","Character name",value,1,"profile-character-name-effect",pSVar5,
                 (MethodInfo *)0x0);
      variant = (int)pSVar6;
      if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        variant = (int)__this_00;
        pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)(__this->fields).info;
        if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
          uVar9 = "guild";
          plVar4 = (long *)(*pGVar7->klass[1]._1.byval_arg.data)
                                     (pGVar7,"guild",*(undefined8 *)&pGVar7->klass[1]._1.byval_arg.bits);
          variant = (int)uVar9;
          if (plVar4 != (long *)0x0) {
            pSVar6 = (System_String_o *)
                     (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor();
            pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterTextField);
            Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
                      (pGVar7,"profile-character-guild","Guild","Guild tag",pSVar6,uVar2 & 0xff,"profile-character-guild-effect",pSVar5,
                       (MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar7,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild(form,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges(form,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"profile-save-scope");
    il2cpp_runtime_helper_023445d0(&"Changes save only to local Profile.json and stay separate from your account.");
    il2cpp_runtime_helper_023445d0(&"Changes save to your account and sync when you sign in elsewhere.");
    g_data_057aee3a = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0451683d;
label_045167d0:
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar1 = (byte)bVar3;
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) goto label_045167dc;
label_0451684e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_045167d0;
label_0451683d:
    il2cpp_runtime_helper_02337ed0();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar1 = (byte)bVar3;
    if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) goto label_0451684e;
label_045167dc:
    variant = (uint)(bVar1 ^ 1) * 2;
    if (bVar1 != 0) {
      puVar8 = &"Changes save to your account and sync when you sign in elsewhere.";
      goto label_0451685a;
    }
  }
  puVar8 = &"Changes save only to local Profile.json and stay separate from your account.";
label_0451685a:
  Gisketch_Aottg2UI_Code_AottgUi__Callout
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,variant,(System_String_o *)*puVar8,"profile-save-scope",
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass56_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o* __this, const MethodInfo* method);
// 0x4516880

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass56_0$$<Badges>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___Badges_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x4516890

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___Badges_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  undefined8 item;
  undefined8 uVar3;
  undefined8 icon;
  undefined8 uVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  long *plVar10;
  undefined8 *unaff_RBX;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_05;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  undefined1 auVar13 [12];
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_fffffffffffffe90;
  undefined8 in_stack_fffffffffffffe98;
  Il2CppObject *in_stack_fffffffffffffea0;
  undefined1 local_110 [58];
  undefined6 uStack_d6;
  _union_249611 _Stack_d0;
  System_String_o *local_c8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStack_c0;
  System_Collections_Generic_List_Enumerator_T__c *local_b8;
  Il2CppType *pIStack_b0;
  undefined8 *puStack_a8;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *pGStack_a0;
  
  __this_05 = group;
  pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
  if (g_data_057aedcf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Badges_b__1);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"profile-character-badges");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"None available");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    pGVar12 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"row";
    il2cpp_runtime_helper_023445d0();
    g_data_057aedcf = '\x01';
  }
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    unaff_RBX = &"accountInputLabel";
    __this_05 = "Badges";
    pGVar12 = group;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (group,(System_String_o *)"Badges","accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar11 = "row";
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
          build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          (__this->fields).__9__1 = build;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1,build);
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            "Wrap",14.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (group,pSVar11,build,"profile-character-badges",pGVar8,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_a8 = unaff_RBX;
  pGStack_a0 = __this;
  if (g_data_057aedd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleBadge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"This feature is only available for supporters.");
    il2cpp_runtime_helper_023445d0(&"profile-character-badge-");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.SupporterOnlyFeature");
    g_data_057aedd0 = '\x01';
  }
  local_110._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_110._40_8_ = (Il2CppType *)0x0;
  local_110._16_8_ = (System_String_o *)0x0;
  local_110._24_8_ = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  local_110._0_8_ = (Il2CppMethodPointer)0x0;
  local_110._8_8_ = (Il2CppMethodPointer)0x0;
  pSVar1 = (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)(pGVar12->fields)._children;
  if (pSVar1 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(local_110 + 0x38),pSVar1,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    local_110._0_8_ = CONCAT62(uStack_d6,local_110._56_2_);
    local_110._32_8_ = local_b8;
    local_110._40_8_ = pIStack_b0;
    local_110._16_8_ = local_c8;
    local_110._24_8_ = pGStack_c0;
    local_110._8_8_ = _Stack_d0;
    while( true ) {
      __this_01.fields._index = (int)in_stack_fffffffffffffe98;
      __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
      __this_01.fields._current = in_stack_fffffffffffffea0;
      bVar5 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                        (__this_01,(MethodInfo_31FB5B0 *)local_110);
      uVar4 = local_110._40_8_;
      icon = local_110._32_8_;
      uVar3 = local_110._24_8_;
      item = local_110._16_8_;
      if ((char)bVar5 == '\0') {
        __this_02.fields._index = (int)in_stack_fffffffffffffe98;
        __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
        __this_02.fields._current = in_stack_fffffffffffffea0;
        System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                  (__this_02,(MethodInfo_31FB5A0 *)local_110);
        return;
      }
      local_110._48_8_ =
           System_String__Concat_3ae5ba0("profile-character-badge-",(System_String_o *)local_110._16_8_,(MethodInfo *)0x0);
      pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar6 = 0;
      if ((uVar4 & 1) != 0) break;
label_04516caf:
      action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      if (__this_05 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_04516e78:
        il2cpp_runtime_helper_022b2c90();
        goto label_04516e7d;
      }
      in_stack_fffffffffffffe90 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)uVar3;
      if ((uVar4 & 1) == 0) {
        in_stack_fffffffffffffe90 = "This feature is only available for supporters.";
      }
      in_stack_fffffffffffffe98 = 0;
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                         (__this_05,(System_String_o *)local_110._48_8_,pSVar11,uVar6,action,
                          (System_String_o *)icon,(System_String_o *)in_stack_fffffffffffffe90,
                          (MethodInfo *)0x0);
      local_110._56_2_ = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)((long)local_110 + 0x38),(uint)uVar4 & 1,MethodInfo_Nullable_1_Boolean);
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04516e78;
      *(undefined2 *)((long)&(pGVar9->fields).hasIcon + 3) = local_110._56_2_;
      pSVar11 = "MainMenu.Profile.SupporterOnlyFeature";
      if ((uVar4 & 1) != 0) {
        pSVar11 = (System_String_o *)0x0;
      }
      (pGVar9->fields).tooltip = pSVar11;
      il2cpp_runtime_helper_022b4080();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffe90 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffe98 = 0;
      in_stack_fffffffffffffea0 = (Il2CppObject *)0x0;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar7,in_stack_fffffffffffffe90,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar8);
    }
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      uVar6 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      uVar6 = uVar6 & 0xff;
      goto label_04516caf;
    }
label_04516e7d:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_fffffffffffffe98;
    __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
    __this_03.fields._current = in_stack_fffffffffffffea0;
    System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
              (__this_03,(MethodInfo_31FB5A0 *)local_110);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._index = (int)in_stack_fffffffffffffe98;
  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
  __this_04.fields._current = in_stack_fffffffffffffea0;
  System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
            (__this_04,(MethodInfo_31FB5A0 *)local_110);
  _Unwind_Resume(auVar13._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass56_0$$<Badges>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___Badges_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4516ac0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___Badges_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_T__o __this_05;
  undefined8 item;
  undefined8 uVar2;
  undefined8 icon;
  undefined8 uVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  long *plVar8;
  System_String_o *pSVar9;
  undefined1 auVar10 [12];
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  Il2CppObject *in_stack_ffffffffffffff18;
  undefined1 auStack_98 [58];
  undefined6 uStack_5e;
  _union_249611 _Stack_58;
  System_String_o *pSStack_50;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStack_48;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_40;
  Il2CppType *pIStack_38;
  
  if (g_data_057aedd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleBadge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"This feature is only available for supporters.");
    il2cpp_runtime_helper_023445d0(&"profile-character-badge-");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.SupporterOnlyFeature");
    g_data_057aedd0 = '\x01';
  }
  auStack_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_98._40_8_ = (Il2CppType *)0x0;
  auStack_98._16_8_ = (System_String_o *)0x0;
  auStack_98._24_8_ = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  __this_00 = (__this->fields).badges;
  if (__this_00 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_98 + 0x38),__this_00,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    auStack_98._0_8_ = CONCAT62(uStack_5e,auStack_98._56_2_);
    auStack_98._32_8_ = pSStack_40;
    auStack_98._40_8_ = pIStack_38;
    auStack_98._16_8_ = pSStack_50;
    auStack_98._24_8_ = pGStack_48;
    auStack_98._8_8_ = _Stack_58;
    while( true ) {
      __this_02.fields._index = (int)in_stack_ffffffffffffff10;
      __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_02.fields._current = in_stack_ffffffffffffff18;
      bVar4 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                        (__this_02,(MethodInfo_31FB5B0 *)auStack_98);
      uVar3 = auStack_98._40_8_;
      icon = auStack_98._32_8_;
      uVar2 = auStack_98._24_8_;
      item = auStack_98._16_8_;
      if ((char)bVar4 == '\0') {
        __this_03.fields._index = (int)in_stack_ffffffffffffff10;
        __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_03.fields._current = in_stack_ffffffffffffff18;
        System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                  (__this_03,(MethodInfo_31FB5A0 *)auStack_98);
        return;
      }
      auStack_98._48_8_ =
           System_String__Concat_3ae5ba0("profile-character-badge-",(System_String_o *)auStack_98._16_8_,(MethodInfo *)0x0);
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar5 = 0;
      if ((uVar3 & 1) != 0) break;
label_04516caf:
      action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_04516e78:
        il2cpp_runtime_helper_022b2c90();
        goto label_04516e7d;
      }
      in_stack_ffffffffffffff08 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)uVar2;
      if ((uVar3 & 1) == 0) {
        in_stack_ffffffffffffff08 = "This feature is only available for supporters.";
      }
      in_stack_ffffffffffffff10 = 0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                         (row,(System_String_o *)auStack_98._48_8_,pSVar9,uVar5,action,(System_String_o *)icon
                          ,(System_String_o *)in_stack_ffffffffffffff08,(MethodInfo *)0x0);
      auStack_98._56_2_ = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)((long)auStack_98 + 0x38),(uint)uVar3 & 1,MethodInfo_Nullable_1_Boolean);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04516e78;
      *(undefined2 *)((long)&(pGVar6->fields).hasIcon + 3) = auStack_98._56_2_;
      pSVar9 = "MainMenu.Profile.SupporterOnlyFeature";
      if ((uVar3 & 1) != 0) {
        pSVar9 = (System_String_o *)0x0;
      }
      (pGVar6->fields).tooltip = pSVar9;
      il2cpp_runtime_helper_022b4080();
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff08 = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff10 = 0;
      in_stack_ffffffffffffff18 = (Il2CppObject *)0x0;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,in_stack_ffffffffffffff08,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar7);
    }
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      uVar5 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      uVar5 = uVar5 & 0xff;
      goto label_04516caf;
    }
label_04516e7d:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._index = (int)in_stack_ffffffffffffff10;
    __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_04.fields._current = in_stack_ffffffffffffff18;
    System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
              (__this_04,(MethodInfo_31FB5A0 *)auStack_98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._index = (int)in_stack_ffffffffffffff10;
  __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
  __this_05.fields._current = in_stack_ffffffffffffff18;
  System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
            (__this_05,(MethodInfo_31FB5A0 *)auStack_98);
  _Unwind_Resume(auVar10._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x4512920

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aeda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Edit Character");
    g_data_057aeda1 = '\x01';
  }
  return "Edit Character";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x4512950

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aeda2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    g_data_057aeda2 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x4512980

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aeda3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aeda3 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x45129b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aeda4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aeda4 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x45129e0

bool_conflict
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x45129f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aeda5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeda5 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1084.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x4512ac0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aeda6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aeda6 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,24.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x4512b80

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4512b90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *info;
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar3;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *__this_03;
  MethodInfo *pMVar4;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_04;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o **ppSVar8;
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  Il2CppType *local_68;
  Il2CppType **ppIStack_60;
  _union_13 local_58;
  _union_14 _Stack_50;
  Il2CppType *local_40;
  Il2CppType **ppIStack_38;
  _union_13 local_30;
  _union_14 _Stack_28;
  
  if (g_data_057aeda7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreviewPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass37_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"start");
    il2cpp_runtime_helper_023445d0(&"profile-edit-character-form");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"profile-character-dialog-name-preview");
    il2cpp_runtime_helper_023445d0(&"profilePreviewDialog");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditCharacter.BuildBody");
    g_data_057aeda7 = '\x01';
  }
  local_58.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_50.genericMethod = (char *)0x0;
  local_68 = (Il2CppType *)0x0;
  ppIStack_60 = (Il2CppType **)0x0;
  __this_03 = (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass37_0);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass37_0_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (__this_03->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,__this);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)&stack0xffffffffffffffc0;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)pMVar4,"Dialog.EditCharacter.BuildBody","start",
               (MethodInfo *)0x0);
    local_58 = local_30;
    _Stack_50 = _Stack_28;
    local_68 = local_40;
    ppIStack_60 = ppIStack_38;
    pMVar4 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar4);
    ppSVar8 = &(__this_03->fields).info;
    (__this_03->fields).info = (SimpleJSONFixed_JSONNode_o *)pMVar4;
    il2cpp_runtime_helper_022b4080(ppSVar8);
    info = *ppSVar8;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection(info,pMVar4);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(640.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff58 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff60 = 0;
    in_stack_ffffffffffffff48 = 0;
    in_stack_ffffffffffffff50 = 0;
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,in_stack_ffffffffffffff58,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion((MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      in_stack_ffffffffffffff48 = 0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,"profilePreviewDialog",build,"profile-edit-character-form",layout,pGVar5,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion((MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).enter = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).enter);
        __this_04 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterNamePreviewPanel);
        pGVar3 = "profile-character-dialog-name-preview";
        pGVar2 = "Center";
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_04,(MethodInfo *)0x0);
        __this_04[1].klass = pGVar3;
        il2cpp_runtime_helper_022b4080(__this_04 + 1,pGVar3);
        *(undefined4 *)&__this_04[1].monitor = 0x43d20000;
        *(undefined1 *)((long)&__this_04[1].monitor + 4) = 1;
        __this_04[2].klass = pGVar2;
        il2cpp_runtime_helper_022b4080(__this_04 + 2,pGVar2);
        *(undefined1 *)&__this_04[2].monitor = 0;
        Gisketch_Aottg2UI_Code_AottgUi__Component(body,__this_04,(MethodInfo *)0x0);
        __this_00.fields._detail = (System_String_o *)in_stack_ffffffffffffff50;
        __this_00.fields._area = (System_String_o *)in_stack_ffffffffffffff48;
        __this_00.fields._startMs = (int64_t)in_stack_ffffffffffffff58;
        __this_00.fields._enabled = (int)in_stack_ffffffffffffff60;
        __this_00.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_68);
        return;
      }
      goto label_04512ed8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04512ed8:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff50;
    __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff48;
    __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff58;
    __this_01.fields._enabled = (int)in_stack_ffffffffffffff60;
    __this_01.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_68);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail = (System_String_o *)in_stack_ffffffffffffff50;
  __this_02.fields._area = (System_String_o *)in_stack_ffffffffffffff48;
  __this_02.fields._startMs = (int64_t)in_stack_ffffffffffffff58;
  __this_02.fields._enabled = (int)in_stack_ffffffffffffff60;
  __this_02.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_68);
  _Unwind_Resume(auVar9._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4514160

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedGuildPresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId (const MethodInfo* method);
// 0x45039e0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  if (g_data_057aeda8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda8 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    plVar3 = &TypeInfo_AottgEditCharacterDialog;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    plVar3 = &g_data_057b9c00;
  }
  return (System_String_o *)**(undefined8 **)(*plVar3 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NoGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected (const MethodInfo* method);
// 0x4514170

bool_conflict Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeda9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda9 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8));
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedBadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds (const MethodInfo* method);
// 0x4503a80

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (g_data_057aedaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aedaa = '\x01';
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     (*(System_Collections_Generic_IEnumerable_string__o **)
                       (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30),(MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled (const MethodInfo* method);
// 0x4504720

bool_conflict Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (g_data_057aedab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedab = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled (const MethodInfo* method);
// 0x45046a0

bool_conflict Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType (const MethodInfo* method);
// 0x45048b0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (g_data_057aedad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aedad = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aedab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedab = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",in_RSI);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x10);
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType (const MethodInfo* method);
// 0x45047a0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *in_RSI;
  
  if (g_data_057aedae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aedae = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",in_RSI);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x18);
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont (const MethodInfo* method);
// 0x4503c10

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (g_data_057aedaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0();
    g_data_057aedaf = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont (const MethodInfo* method);
// 0x4503cc0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (g_data_057aedb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0();
    g_data_057aedb0 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = PatreonEffects_NameFontCatalog__Normalize(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled (System_String_o* prefix, const MethodInfo* method);
// 0x4505780

bool_conflict
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *value;
  char cVar3;
  MethodInfo *method_00;
  
  if (g_data_057aedb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0();
    g_data_057aedb1 = '\x01';
  }
  bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = "profile-character-name-effect";
    uVar2 = System_String__op_Equality(prefix,(System_String_o *)"profile-character-name-effect",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar3 = *(char *)((*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) - (ulong)(uVar2 & 0xff)) + 10);
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      cVar3 = *(char *)((*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) - (ulong)(uVar2 & 0xff)) + 10);
    }
    value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(prefix,method_00);
    if (g_data_057aecef == '\0') {
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057aecef = '\x01';
    }
    if (cVar3 != '\0') {
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Inequality(value,"None",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType (System_String_o* prefix, const MethodInfo* method);
// 0x4505880

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  int32_t local_2c;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (g_data_057aedb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectType);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb2 = '\x01';
  }
  local_2c = 0;
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                    (*(System_String_o **)
                      (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x10 + (ulong)(byte)((byte)bVar1 ^ 1) * 8),&local_2c,
                     (MethodInfo *)0x0);
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
// 0x4505970

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  undefined1 local_14 [4];
  
  if (g_data_057aedb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aedb3 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aedba == '\0') {
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar2,"#FFFFFFFF",1,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect (System_String_o* prefix, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x4508f90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect
               (System_String_o *prefix,bool_conflict enabled,System_String_o *type,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  cVar1 = (char)enabled;
  if (g_data_057aedb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  bVar3 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar2;
  if ((char)bVar3 == '\0') {
    *(char *)(lVar5 + 10) = cVar1;
    if (cVar1 == '\0') {
      type = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar4 = (undefined8 *)(lVar5 + 0x18);
  }
  else {
    *(char *)(lVar5 + 9) = cVar1;
    if (cVar1 == '\0') {
      type = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar5 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar4 = (undefined8 *)(lVar5 + 0x10);
  }
  *puVar4 = type;
  il2cpp_runtime_helper_022b4080(puVar4,type);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font (System_String_o* prefix, const MethodInfo* method);
// 0x4505710

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(System_String_o *prefix,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (g_data_057aedb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb5 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  method_00 = TypeInfo_AottgEditCharacterDialog;
  if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x4506cd0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
               (System_String_o *prefix,System_String_o *font,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  
  if (g_data_057aedb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb6 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar3 = (undefined8 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x28);
  if ((char)bVar1 != '\0') {
    puVar3 = (undefined8 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x20);
  }
  *puVar3 = pSVar2;
  il2cpp_runtime_helper_022b4080(puVar3,pSVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RefreshPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x45141e0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RSI;
  
  if (g_data_057aedb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    g_data_057aedb7 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) != 0) {
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,in_RSI);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,in_RSI);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4514230

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  _union_14 build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *__this_02;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar4;
  System_String_o *pSVar5;
  System_Action_AottgUi__o *build_00;
  long *plVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  undefined8 unaff_R12;
  undefined1 auVar7 [12];
  undefined8 in_stack_fffffffffffffec0;
  undefined8 uVar8;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 in_stack_fffffffffffffed8;
  int32_t iStack_e4;
  undefined1 auStack_e0 [64];
  _union_14 _Stack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_88;
  System_String_o *pSStack_80;
  
  if (g_data_057aedb8 == '\0') {
    pSStack_80 = (System_String_o *)0x4514255;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pSStack_80 = (System_String_o *)0x4514261;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    pSStack_80 = (System_String_o *)0x451426d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PresetGuild_b__55_0);
    pSStack_80 = (System_String_o *)0x4514279;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pSStack_80 = (System_String_o *)0x4514285;
    il2cpp_runtime_helper_023445d0(&"Column");
    pSStack_80 = (System_String_o *)0x4514291;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pSStack_80 = (System_String_o *)0x451429d;
    il2cpp_runtime_helper_023445d0(&"default");
    pSStack_80 = (System_String_o *)0x45142a9;
    il2cpp_runtime_helper_023445d0(&"profile-character-preset-guild-group");
    g_data_057aedb8 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
    pSStack_80 = (System_String_o *)0x45142c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_80 = (System_String_o *)0x45142cf;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    pSStack_80 = (System_String_o *)0x45142e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = "default";
  build = (_union_14)((_union_14 *)(*(long *)(TypeInfo_c + 0xb8) + 0x10))->genericMethod;
  if (build.genericMethod == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pSStack_80 = (System_String_o *)0x4514314;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = **(undefined8 **)(TypeInfo_c + 0xb8);
    pSStack_80 = (System_String_o *)0x4514331;
    build.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pSStack_80 = (System_String_o *)0x451434b;
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    ((_union_14 *)(lVar1 + 0x10))->genericMethod = (void *)build;
    pSStack_80 = (System_String_o *)0x4514366;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,build.genericMethod);
  }
  pSStack_80 = (System_String_o *)0x4514375;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSStack_80 = (System_String_o *)0x45143fc;
  __this_03 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSStack_80 = (System_String_o *)0x4514427;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar5,build.genericMethod,"profile-character-preset-guild-group",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  pSStack_80 = (System_String_o *)0x451443a;
  il2cpp_runtime_helper_022b2c90();
  pSStack_80 = pSVar5;
  puStack_90 = &TypeInfo_c;
  _Stack_a0 = build;
  uStack_98 = unaff_R12;
  pGStack_88 = body;
  if (g_data_057aedb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Badges_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass56_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"count=");
    il2cpp_runtime_helper_023445d0(&"load");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-character-badges-group");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditCharacter.Badges");
    g_data_057aedb9 = '\x01';
  }
  auStack_e0._16_8_ = (InvokerMethod)0x0;
  auStack_e0._24_8_ = (char *)0x0;
  auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._8_8_ = (Il2CppMethodPointer)0x0;
  iStack_e4 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)(auStack_e0 + 0x20),"Dialog.EditCharacter.Badges",
             "load",(MethodInfo *)0x0);
  __this_02 = (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass56_0);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___ctor(__this_02,(MethodInfo *)0x0);
  pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges((MethodInfo *)0x0);
  if (__this_02 == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (__this_02->fields).badges = pSVar4;
    il2cpp_runtime_helper_022b4080(&__this_02->fields);
    pSVar4 = (__this_02->fields).badges;
    if (pSVar4 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      iStack_e4 = (pSVar4->fields)._size;
      pSVar5 = System_Int32__ToString((int32_t)&iStack_e4,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3ae5ba0("count=",pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.Badges",pSVar5,(MethodInfo *)0x0);
      build_00 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffed0 = 0;
      in_stack_fffffffffffffed8 = 0;
      in_stack_fffffffffffffec0 = 0;
      in_stack_fffffffffffffec8 = 0;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        uVar8 = 0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (__this_03,"default",build_00,"profile-character-badges-group",pGVar3,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        __this.fields._detail = (System_String_o *)in_stack_fffffffffffffec8;
        __this.fields._area = (System_String_o *)uVar8;
        __this.fields._startMs = in_stack_fffffffffffffed0;
        __this.fields._enabled = (int)in_stack_fffffffffffffed8;
        __this.fields._hotLoop = (int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)auStack_e0);
        return;
      }
      goto label_04514712;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04514712:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_00.fields._detail = (System_String_o *)in_stack_fffffffffffffec8;
    __this_00.fields._area = (System_String_o *)in_stack_fffffffffffffec0;
    __this_00.fields._startMs = in_stack_fffffffffffffed0;
    __this_00.fields._enabled = (int)in_stack_fffffffffffffed8;
    __this_00.fields._hotLoop = (int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)auStack_e0);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_01.fields._detail = (System_String_o *)in_stack_fffffffffffffec8;
  __this_01.fields._area = (System_String_o *)in_stack_fffffffffffffec0;
  __this_01.fields._startMs = in_stack_fffffffffffffed0;
  __this_01.fields._enabled = (int)in_stack_fffffffffffffed8;
  __this_01.fields._hotLoop = (int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)auStack_e0);
  _Unwind_Resume(auVar7._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Badges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4514440

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *__this_02;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar2;
  System_String_o *pSVar3;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  long *plVar4;
  undefined1 auVar5 [12];
  undefined8 in_stack_ffffffffffffff38;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  int32_t local_6c;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (g_data_057aedb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Badges_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass56_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"count=");
    il2cpp_runtime_helper_023445d0(&"load");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-character-badges-group");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditCharacter.Badges");
    g_data_057aedb9 = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_6c = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_48,"Dialog.EditCharacter.Badges","load",(MethodInfo *)0x0)
  ;
  __this_02 = (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass56_0);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0___ctor(__this_02,(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges((MethodInfo *)0x0);
  if (__this_02 == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass56_0_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (__this_02->fields).badges = pSVar2;
    il2cpp_runtime_helper_022b4080(&__this_02->fields);
    pSVar2 = (__this_02->fields).badges;
    if (pSVar2 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      local_6c = (pSVar2->fields)._size;
      pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_3ae5ba0("count=",pSVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.Badges",pSVar3,(MethodInfo *)0x0);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff48 = 0;
      in_stack_ffffffffffffff50 = 0;
      in_stack_ffffffffffffff38 = 0;
      in_stack_ffffffffffffff40 = 0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        uVar6 = 0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (body,"default",build,"profile-character-badges-group",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        __this.fields._detail = (System_String_o *)in_stack_ffffffffffffff40;
        __this.fields._area = (System_String_o *)uVar6;
        __this.fields._startMs = in_stack_ffffffffffffff48;
        __this.fields._enabled = (int)in_stack_ffffffffffffff50;
        __this.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_68);
        return;
      }
      goto label_04514712;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04514712:
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_00.fields._detail = (System_String_o *)in_stack_ffffffffffffff40;
    __this_00.fields._area = (System_String_o *)in_stack_ffffffffffffff38;
    __this_00.fields._startMs = in_stack_ffffffffffffff48;
    __this_00.fields._enabled = (int)in_stack_ffffffffffffff50;
    __this_00.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_68);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff40;
  __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff38;
  __this_01.fields._startMs = in_stack_ffffffffffffff48;
  __this_01.fields._enabled = (int)in_stack_ffffffffffffff50;
  __this_01.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_68);
  _Unwind_Resume(auVar5._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorInputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x4504f90

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (g_data_057aedba == '\0') {
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7150(prefix,"-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$InitializeSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x4512fa0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection
               (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
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
  long lVar14;
  System_Collections_Generic_HashSet_object__o *unaff_R14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 in_stack_ffffffffffffff68 [15];
  System_Collections_Generic_HashSet_object__o *in_stack_ffffffffffffff78;
  System_Collections_Generic_HashSet_object__o *pSVar17;
  undefined4 in_stack_ffffffffffffff80;
  bool_conflict bVar18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (g_data_057aedbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"badges=");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&" presetGuild=");
    il2cpp_runtime_helper_023445d0(&"badges");
    il2cpp_runtime_helper_023445d0(&"info=");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    il2cpp_runtime_helper_023445d0(&"type");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditCharacter.InitializeSelection");
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aedbb = '\x01';
  }
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  bVar18 = 0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar3 = (undefined1)bVar6;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff77,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3ae5ba0("info=",pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_50,"Dialog.EditCharacter.InitializeSelection",pSVar7,(MethodInfo *)0x0);
  if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04513f2e:
    il2cpp_runtime_helper_022b2c90();
label_04513f33:
    il2cpp_runtime_helper_022b2c90();
    pSVar17 = in_stack_ffffffffffffff78;
label_04513f38:
    il2cpp_runtime_helper_022b2c90();
label_04513f3d:
    il2cpp_runtime_helper_022b2c90();
label_04513f42:
    il2cpp_runtime_helper_022b2c90();
label_04513f47:
    il2cpp_runtime_helper_022b2c90();
label_04513f4c:
    il2cpp_runtime_helper_022b2c90();
label_04513f51:
    il2cpp_runtime_helper_022b2c90();
label_04513f56:
    il2cpp_runtime_helper_022b2c90();
label_04513f5b:
    il2cpp_runtime_helper_022b2c90();
label_04513f60:
    il2cpp_runtime_helper_022b2c90();
label_04513f65:
    il2cpp_runtime_helper_022b2c90();
label_04513f6a:
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff78 = unaff_R14;
label_04513f6f:
    il2cpp_runtime_helper_022b2c90();
    goto label_04513f74;
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    pSVar17 = in_stack_ffffffffffffff78;
    if (plVar9 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      pSVar17 = in_stack_ffffffffffffff78;
      goto joined_r0x04513278;
    }
    goto label_04513f38;
  }
  uVar10 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  pSVar17 = in_stack_ffffffffffffff78;
joined_r0x04513278:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8) = uVar10;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgEditCharacterDialog + 0xb8));
  bVar6 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guild",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      unaff_R14 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      iVar1 = *(int *)(TypeInfo_AottgCharacterTextField + 0xe4);
joined_r0x045133c3:
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aed93 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057aed93 = '\x01';
      }
      if (unaff_R14 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        unaff_R14 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = MiscExtensions__StripRichText((System_String_o *)unaff_R14,(MethodInfo *)0x0);
      pSVar7 = MiscExtensions__StripHex(pSVar7,(MethodInfo *)0x0);
      bVar6 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      uVar4 = (undefined1)bVar6;
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      goto joined_r0x0451345a;
    }
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guild",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 != (long *)0x0) {
      unaff_R14 = (System_Collections_Generic_HashSet_object__o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
      iVar1 = *(int *)(TypeInfo_AottgCharacterTextField + 0xe4);
      goto joined_r0x045133c3;
    }
    goto label_04513f81;
  }
  uVar4 = 0;
  iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
joined_r0x0451345a:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) = uVar4;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_04513f3d;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"enabled",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      goto joined_r0x04513524;
    }
    goto label_04513f42;
  }
  uVar4 = 0;
  iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
joined_r0x04513524:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 9) = uVar4;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_04513f47;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"enabled",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      goto joined_r0x0451360a;
    }
    goto label_04513f4c;
  }
  uVar4 = 0;
  iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
joined_r0x0451360a:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 10) = uVar4;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_04513f51;
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0451374a;
    plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_04513f86;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      goto joined_r0x04513746;
    }
    goto label_04513f8b;
  }
label_0451374a:
  iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  uVar10 = "None";
joined_r0x04513746:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = uVar10;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,uVar10);
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (*(info->klass->vtable)._7_get_Item.methodPtr)
                     (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_045138ad:
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    uVar10 = "None";
joined_r0x045138c8:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    *(undefined8 *)(lVar2 + 0x18) = uVar10;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,uVar10);
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"nameFont",(info->klass->vtable)._7_get_Item.method);
      if (plVar9 != (long *)0x0) {
        pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
        iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
        goto joined_r0x0451397b;
      }
      goto label_04513f5b;
    }
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    pSVar7 = "Normal";
joined_r0x0451397b:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = PatreonEffects_NameFontCatalog__Normalize(pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    *(System_String_o **)(lVar2 + 0x20) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar7);
    unaff_R14 = (System_Collections_Generic_HashSet_object__o *)&"guildFont";
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"guildFont",(info->klass->vtable)._7_get_Item.method);
      if (plVar9 != (long *)0x0) {
        pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
        iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
        goto joined_r0x04513a6a;
      }
      goto label_04513f60;
    }
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    pSVar7 = "Normal";
joined_r0x04513a6a:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = PatreonEffects_NameFontCatalog__Normalize(pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    *(System_String_o **)(lVar2 + 0x28) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar7);
    auVar16 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"nameEffect",(info->klass->vtable)._7_get_Item.method);
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
              ("profile-character-name-effect",auVar16._0_8_,auVar16._8_8_);
    auVar16 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
              ("profile-character-guild-effect",auVar16._0_8_,auVar16._8_8_);
    __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    in_stack_ffffffffffffff78 = pSVar17;
    if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04513f33;
    System_Collections_Generic_HashSet_object___Clear(__this,MethodInfo_Void_Clear);
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"badges",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
label_04513f09:
      __this_00.fields._detail._7_1_ = uVar3;
      __this_00.fields._0_15_ = in_stack_ffffffffffffff68;
      __this_00.fields._startMs = (int64_t)pSVar17;
      __this_00.fields._enabled = in_stack_ffffffffffffff80;
      __this_00.fields._hotLoop = bVar18;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_78);
      return;
    }
    pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges(pSVar8,(MethodInfo *)0x0);
    if (pSVar11 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04513f65;
    plVar9 = (long *)(*(pSVar11->klass->vtable)._27_get_Children.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._27_get_Children.method);
    if (plVar9 == (long *)0x0) goto label_04513f6a;
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar14) * 0x10 + lVar2 + 0x138);
          goto label_04513c31;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar14);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerable_JSONNode,0);
label_04513c31:
    plVar9 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
    in_stack_ffffffffffffff78 = unaff_R14;
    if (plVar9 != (long *)0x0) {
      in_stack_ffffffffffffff78 = (System_Collections_Generic_HashSet_object__o *)0x0;
label_04513c70:
      lVar2 = *plVar9;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar14) * 0x10 + lVar2 + 0x138);
            goto label_04513cd3;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar14);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
label_04513cd3:
      cVar5 = (*(code *)*puVar12)();
      if (cVar5 == '\0') {
        pSVar17 = in_stack_ffffffffffffff78;
        if (plVar9 == (long *)0x0) goto label_04513e56;
        lVar2 = *plVar9;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) == 0) goto label_04513e2f;
        lVar14 = 0;
        goto label_04513e20;
      }
      lVar2 = *plVar9;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar14) * 0x10 + lVar2 + 0x138);
            goto label_04513d43;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar14);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator_JSONNode,0);
label_04513d43:
      plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
      if (plVar13 != (long *)0x0) {
        pSVar7 = (System_String_o *)(**(code **)(*plVar13 + 0x1c8))(plVar13);
        bVar6 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R14 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
          item = (Il2CppObject *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
          if (unaff_R14 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04513f29;
          System_Collections_Generic_HashSet_object___Add(unaff_R14,item,MethodInfo_Boolean_Add);
        }
        goto label_04513c70;
      }
      il2cpp_runtime_helper_022b2c90();
label_04513f29:
      il2cpp_runtime_helper_022b2c90();
      goto label_04513f2e;
    }
    goto label_04513f6f;
  }
  plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                             (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (plVar9 == (long *)0x0) goto label_04513f56;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)
           (**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_045138ad;
  plVar9 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                             (info,"guildEffect",(info->klass->vtable)._7_get_Item.method);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"type",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 == (long *)0x0) goto label_04513f95;
    uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    goto joined_r0x045138c8;
  }
  goto label_04513f90;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar14) {
label_04513e20:
    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)(lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_04513e4d;
    }
  }
label_04513e2f:
  puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_04513e4d:
  (*(code *)*puVar12)(plVar9);
label_04513e56:
  if (in_stack_ffffffffffffff78 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    if (lVar2 != 0) {
      bVar18 = *(bool_conflict *)(lVar2 + 0x20);
      pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_3af7470
                         ("badges=",pSVar7," presetGuild=",
                          (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.InitializeSelection",pSVar7,(MethodInfo *)0x0);
      goto label_04513f09;
    }
  }
  else {
label_04513f74:
    il2cpp_runtime_helper_022fefe0(in_stack_ffffffffffffff78);
  }
  il2cpp_runtime_helper_022b2c90();
label_04513f81:
  il2cpp_runtime_helper_022b2c90();
label_04513f86:
  il2cpp_runtime_helper_022b2c90();
label_04513f8b:
  il2cpp_runtime_helper_022b2c90();
label_04513f90:
  il2cpp_runtime_helper_022b2c90();
label_04513f95:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar2 = *plVar9;
    __cxa_end_catch();
    __this_01.fields._detail._7_1_ = uVar3;
    __this_01.fields._0_15_ = in_stack_ffffffffffffff68;
    __this_01.fields._startMs = (int64_t)pSVar17;
    __this_01.fields._enabled = in_stack_ffffffffffffff80;
    __this_01.fields._hotLoop = bVar18;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_78);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_02.fields._detail._7_1_ = uVar3;
  __this_02.fields._0_15_ = in_stack_ffffffffffffff68;
  __this_02.fields._startMs = (int64_t)pSVar17;
  __this_02.fields._enabled = in_stack_ffffffffffffff80;
  __this_02.fields._hotLoop = bVar18;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_78);
  _Unwind_Resume(auVar15._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectPresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4514b40

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_String_o **ppSVar7;
  MethodInfo *key;
  Il2CppObject *pIVar8;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (g_data_057aedbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"__none");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    g_data_057aedbc = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar7 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
  }
  else {
    ppSVar7 = &((context.fields.Node)->fields).value;
  }
  pSVar3 = *ppSVar7;
  bVar5 = System_String__op_Equality(pSVar3,"__none",(MethodInfo *)0x0);
  lVar4 = TypeInfo_AottgEditCharacterDialog;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar4 = TypeInfo_AottgEditCharacterDialog;
    *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) = (char)bVar5;
  }
  else {
    *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) = (char)bVar5;
  }
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aedc1 == '\0') {
      il2cpp_runtime_helper_023445d0(&"__none");
      il2cpp_runtime_helper_023445d0(&"Custom");
      g_data_057aedc1 = '\x01';
    }
    bVar5 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((((char)bVar5 == '\0') &&
        (bVar5 = System_String__op_Equality(pSVar3,"__none",(MethodInfo *)0x0), (char)bVar5 == '\0')) &&
       (bVar5 = System_String__op_Equality(pSVar3,"Custom",(MethodInfo *)0x0), (char)bVar5 == '\0')) {
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      goto joined_r0x04514e5c;
    }
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
joined_r0x04514e5c:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgEditCharacterDialog + 0xb8));
  if (g_data_057aedc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aedc2 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar6 = System_String__IsNullOrEmpty
                      ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
            (context.fields.GameObject,"profile-character-guild",uVar6 & 0xff,in_RCX);
  pSVar3 = "profile-character-guild";
  if (g_data_057aed98 == '\0') {
    il2cpp_runtime_helper_023445d0(&".enabled");
    g_data_057aed98 = '\x01';
  }
  method_00 = ".enabled";
  key = (MethodInfo *)System_String__Concat_3ae5ba0(pSVar3,(System_String_o *)".enabled",(MethodInfo *)0x0);
  if (g_data_057aedbe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aedbe = '\x01';
  }
  if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
      (method_00 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot,
      pIVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
      pIVar8 != (Il2CppObject *)0x0)) &&
     (pIVar8[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              (pIVar8[6].monitor,(System_String_o *)key,uVar6 & 0xff,(MethodInfo *)0x0);
    method_00 = key;
  }
  if (g_data_057aedb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    g_data_057aedb7 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ToggleBadge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4515000

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (g_data_057aedbd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&"profile-character-badge-");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057aedbd = '\x01';
  }
  if ((context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (bVar4 = System_String__IsNullOrEmpty(((context.fields.Node)->fields).id,(MethodInfo *)0x0),
     (char)bVar4 != '\0')) {
    return;
  }
  pSVar3 = ((context.fields.Node)->fields).id;
  if (pSVar3 != (System_String_o *)0x0) {
    bVar4 = System_String__StartsWith(pSVar3,"profile-character-badge-",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (("profile-character-badge-" == (System_String_o *)0x0) ||
         (pSVar3 = ((context.fields.Node)->fields).id, pSVar3 == (System_String_o *)0x0)) goto label_045151dc;
      method_00 = (MethodInfo *)
                  System_String__Substring(pSVar3,("profile-character-badge-"->fields)._stringLength,(MethodInfo *)0x0);
    }
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    bVar4 = System_String__op_Equality(((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x30);
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((char)bVar4 == '\0') {
        System_Collections_Generic_HashSet_object___Remove(__this,(Il2CppObject *)method_00,MethodInfo_Boolean_Remove);
        iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      }
      else {
        System_Collections_Generic_HashSet_object___Add(__this,(Il2CppObject *)method_00,MethodInfo_Boolean_Add);
        iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aedb7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
        g_data_057aedb7 = '\x01';
        iVar2 = *(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,method_00);
      return;
    }
  }
label_045151dc:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"__none");
    il2cpp_runtime_helper_023445d0(&"Custom");
    g_data_057aedbf = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = System_String__IsNullOrEmpty
                      ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) {
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x4514f90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,
               bool_conflict value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057aedbe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aedbe = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar1[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pIVar1[6].monitor,key,value & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedPresetGuildValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue (const MethodInfo* method);
// 0x45151f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  
  if (g_data_057aedbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"__none");
    il2cpp_runtime_helper_023445d0(&"Custom");
    g_data_057aedbf = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    return "__none";
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    return (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  }
  return "Custom";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions (const MethodInfo* method);
// 0x45152e0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_05;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_06;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  System_String_o *pSVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  undefined1 in_stack_ffffffffffffff38 [12];
  undefined4 uVar10;
  Il2CppObject *pIVar11;
  Il2CppMethodPointer pIVar12;
  _union_13 local_a8;
  _union_14 a_Stack_a0 [2];
  byte bStack_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  uint uStack_38;
  
  if (g_data_057aedc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchChoiceOptionDefinition_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefini);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&"__none");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"This feature is only available for supporters.");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"count=");
    il2cpp_runtime_helper_023445d0(&"load");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditCharacter.PresetGuildOptions");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.SupporterOnlyFeature");
    g_data_057aedc0 = '\x01';
  }
  local_88._16_8_ = (void *)0x0;
  local_88._24_8_ = (char *)0x0;
  local_88._0_8_ = (Il2CppType **)0x0;
  local_88._8_8_ = (Il2CppRGCTXData *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  uVar10 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_60,"Dialog.EditCharacter.PresetGuildOptions","load",
             (MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchChoiceOptionDefinition);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefini);
  __this_05 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
label_0451580a:
    il2cpp_runtime_helper_022b2c90();
label_0451580f:
    il2cpp_runtime_helper_022b2c90();
label_04515814:
    il2cpp_runtime_helper_022b2c90();
label_04515819:
    il2cpp_runtime_helper_022b2c90();
label_0451581e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (__this_05->fields).value = "__none";
    il2cpp_runtime_helper_022b4080(&__this_05->fields);
    (__this_05->fields).text = "None";
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).text);
    lVar4 = MethodInfo_Void_Add;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_0451580f;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_04->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_04515814;
    uVar2 = (__this_04->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_04->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_05;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_04,(Il2CppObject *)__this_05,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    __this_05 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
    Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_04515819;
    (__this_05->fields).value = "Custom";
    il2cpp_runtime_helper_022b4080(&__this_05->fields);
    (__this_05->fields).text = "Custom";
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).text);
    lVar4 = MethodInfo_Void_Add;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_04->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_0451581e;
    uVar2 = (__this_04->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_04->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_05;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_05);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_04,(Il2CppObject *)__this_05,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    __this_06 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds((MethodInfo *)0x0);
    if (__this_06 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_06,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
      pIVar11 = (Il2CppObject *)CONCAT44(local_60._4_4_,local_60._0_4_);
      pIVar12 = (Il2CppMethodPointer)CONCAT44(local_60._12_4_,local_60._8_4_);
      local_a8._4_4_ = local_60._20_4_;
      local_a8._0_4_ = local_60._16_4_;
      a_Stack_a0[0]._4_4_ = local_60._28_4_;
      a_Stack_a0[0]._0_4_ = local_60._24_4_;
      while (__this.fields._version = uVar10,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_,
            __this.fields._index = in_stack_ffffffffffffff38._8_4_, __this.fields._current = pIVar11,
            bVar5 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                              (__this,(MethodInfo_31FB5B0 *)&stack0xffffffffffffff48), (char)bVar5 != '\0') {
        bStack_90 = (byte)uStack_38;
        __this_05 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_05,(MethodInfo *)0x0);
        if (__this_05 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
label_04515805:
          il2cpp_runtime_helper_022b2c90();
          goto label_0451580a;
        }
        (__this_05->fields).value = (System_String_o *)local_a8;
        il2cpp_runtime_helper_022b4080(&__this_05->fields,local_a8);
        (__this_05->fields).text = (System_String_o *)a_Stack_a0[0];
        il2cpp_runtime_helper_022b4080(&(__this_05->fields).text);
        *(byte *)&(__this_05->fields).enabled = bStack_90 & 1;
        pSVar7 = "This feature is only available for supporters.";
        if ((uStack_38 & 1) != 0) {
          pSVar7 = (System_String_o *)0x0;
        }
        (__this_05->fields).tooltip = pSVar7;
        il2cpp_runtime_helper_022b4080(&(__this_05->fields).tooltip);
        pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
        if ((uStack_38 & 1) != 0) {
          pSVar7 = (System_String_o *)0x0;
        }
        (__this_05->fields).tooltipKey = pSVar7;
        il2cpp_runtime_helper_022b4080(&(__this_05->fields).tooltipKey);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_04->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_04515805;
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_05;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_05);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,(Il2CppObject *)__this_05,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_00.fields._version = uVar10;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff38._8_4_;
      __this_00.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (__this_00,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff48);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
               System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_GisketchChoiceOptionDefinition_ToArray);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        uVar10 = (undefined4)pGVar6->max_length;
        pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3ae5ba0("count=",pSVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.PresetGuildOptions",pSVar7,(MethodInfo *)0x0);
        __this_01.fields._detail._4_4_ = uVar10;
        __this_01.fields._0_12_ = in_stack_ffffffffffffff38;
        __this_01.fields._startMs = (int64_t)pIVar11;
        __this_01.fields._24_8_ = pIVar12;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)local_88);
        return pGVar6;
      }
      goto label_04515830;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(__this_05);
label_04515830:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._detail._4_4_ = uVar10;
    __this_02.fields._0_12_ = in_stack_ffffffffffffff38;
    __this_02.fields._startMs = (int64_t)pIVar11;
    __this_02.fields._24_8_ = pIVar12;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)local_88);
    if (lVar4 == 0) {
      return (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_03.fields._detail._4_4_ = uVar10;
  __this_03.fields._0_12_ = in_stack_ffffffffffffff38;
  __this_03.fields._startMs = (int64_t)pIVar11;
  __this_03.fields._24_8_ = pIVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)local_88);
  _Unwind_Resume(auVar9._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId (System_String_o* value, const MethodInfo* method);
// 0x4514e70

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aedc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"__none");
    il2cpp_runtime_helper_023445d0(&"Custom");
    g_data_057aedc1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((((char)bVar1 == '\0') &&
      (bVar1 = System_String__op_Equality(value,"__none",(MethodInfo *)0x0), (char)bVar1 == '\0')) &&
     (bVar1 = System_String__op_Equality(value,"Custom",(MethodInfo *)0x0), (char)bVar1 == '\0')) {
    return value;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$CustomGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected (const MethodInfo* method);
// 0x4514f00

bool_conflict Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  
  if (g_data_057aedc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aedc2 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8),(MethodInfo *)0x0);
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ChoiceRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout (const MethodInfo* method);
// 0x4515970

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aedc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0();
    g_data_057aedc3 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RegisterEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors (System_String_o* prefix, SimpleJSONFixed_JSONNode_o* effect, const MethodInfo* method);
// 0x45147d0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
               (System_String_o *prefix,SimpleJSONFixed_JSONNode_o *effect,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined4 local_34;
  
  if (g_data_057aedc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aedc4 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_34 = 0;
  if (g_data_057aedba == '\0') {
    local_34 = 0;
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,0,method_00);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_34 = 1;
  if (g_data_057aedba == '\0') {
    local_34 = 1;
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,1,method_01);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_34 = 2;
  if (g_data_057aedba == '\0') {
    local_34 = 2;
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,2,method_02);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_34 = 3;
  if (g_data_057aedba == '\0') {
    local_34 = 3;
    il2cpp_runtime_helper_023445d0(&"-color-");
    g_data_057aedba = '\x01';
  }
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150(prefix,"-color-",pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue(effect,3,method_03);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            (pSVar2,pSVar3,(System_Action_GisketchActionContext__o *)0x0,1,0,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue (SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x4515a40

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue
          (SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  System_String_o *extraout_RAX;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *pSVar3;
  Il2CppObject *__this;
  
  if (g_data_057aedc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"colors");
    g_data_057aedc5 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject *)0x0;
  __this = (Il2CppObject *)effect;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto Gisketch_Aottg2UI_Code_AottgDialog___ctor;
    a = (Il2CppObject *)
        (*(effect->klass->vtable)._7_get_Item.methodPtr)
                  (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = a;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return "#FFFFFFFF";
  }
  if (a != (Il2CppObject *)0x0) {
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_5_get_Item).methodPtr)
                     (a,(ulong)(uint)index,
                      (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_5_get_Item).method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return "#FFFFFFFF";
    }
    plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_5_get_Item).methodPtr)
                               (a,(ulong)(uint)index,
                                (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_5_get_Item).method);
    __this = a;
    if (plVar2 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar2 + 0x1c8);
      pSVar3 = (System_String_o *)
               (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtableDispatch);
      return pSVar3;
    }
  }
Gisketch_Aottg2UI_Code_AottgDialog___ctor:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x4515b90

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor (const MethodInfo* method);
// 0x4515ba0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057aedc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aedc6 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "None";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Normal";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Normal";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x30) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30,__this);
  return;
}


