// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterSetEffectsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor (const MethodInfo* method);
// 0x4509a90

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aed47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aed47 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, const MethodInfo* method);
// 0x4509b00

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_0 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4509b10

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_0
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  long lVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_Action_GisketchActionContext__o *pSVar10;
  MethodInfo *method_00;
  undefined1 auStack_4c [12];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  method_00 = (MethodInfo *)row;
  if (g_data_057aed48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SelectEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SelectFont);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-type");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-font");
    g_data_057aed48 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  cVar1 = *(char *)(lVar3 + 0x51);
  cVar2 = *(char *)(lVar3 + 0x50);
  pSVar4 = *(System_String_o **)(lVar3 + 0x40);
  if (g_data_057aecee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectType);
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecee = '\x01';
  }
  auStack_4c._0_4_ = 0;
  value = "Color";
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    method_00 = (MethodInfo *)auStack_4c;
    bVar5 = PatreonEffects_NameEffectPresets__TryResolve(pSVar4,(int32_t *)method_00,(MethodInfo *)0x0);
    value = "Color";
    if ((char)bVar5 != '\0') {
      auStack_4c._4_8_ = TypeInfo_NameEffectType;
      uStack_40 = 0xffffffffffffffff;
      uStack_38 = auStack_4c._0_4_;
      method_00 = (MethodInfo *)0x0;
      value = System_Enum__ToString((System_Enum_o *)(auStack_4c + 4),(MethodInfo *)0x0);
    }
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options
                     ((uint)*(byte *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51),method_00);
  action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pSVar10 = action;
  System_Action_GisketchActionContext____ctor();
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                       (row,"profile-character-set-effects-type",value,pGVar6,action,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aed4d == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aed4d = '\x01';
    }
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).choiceOptions = "profile-character-effect-preview";
      il2cpp_runtime_helper_022b4080();
    }
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
    pSVar10 = "Row";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38);
      pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options
                         ((uint)*(byte *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51),(MethodInfo *)pGVar9);
      pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                         (row,"profile-character-set-effects-font",pSVar4,pGVar6,pSVar10,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
      if (g_data_057aed4e == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057aed4e = '\x01';
      }
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).choiceOptions = "profile-character-font-preview";
        il2cpp_runtime_helper_022b4080();
      }
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
      pSVar10 = "Row";
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed4d == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-effect-preview");
    g_data_057aed4d = '\x01';
  }
  if (pSVar10 == (System_Action_GisketchActionContext__o *)0x0) {
    return;
  }
  pSVar10[1].fields.delegate_trampoline = (intptr_t)"profile-character-effect-preview";
  il2cpp_runtime_helper_022b4080(&pSVar10[1].fields.delegate_trampoline);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_1 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x450a010

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_1
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  uint index;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  MethodInfo *method_00;
  int iVar7;
  int32_t local_50;
  int32_t local_4c;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_48;
  
  __this_01 = callout;
  if (g_data_057aed49 == '\0') {
    il2cpp_runtime_helper_023445d0(&"calloutText");
    il2cpp_runtime_helper_023445d0(&"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.TextColorHelp");
    g_data_057aed49 = '\x01';
  }
  if ((callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (__this_01 = "Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.",
     pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (callout,(System_String_o *)"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.","calloutText",(System_String_o *)0x0,
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0), pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
     ) {
    (pGVar4->fields).textKey = "MainMenu.Profile.TextColorHelp";
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = callout;
  if (g_data_057aed4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&"-slot");
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aed4a = '\x01';
  }
  iVar7 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields == 0) break;
    if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x18) <= iVar7) {
      return;
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
    pSVar6 = pSVar5;
    System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) break;
    (pSVar5->fields)._stringLength = iVar7;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    iVar2 = (pSVar5->fields)._stringLength;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_50 = iVar2;
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pSVar6 = System_Int32__ToString((int32_t)&local_50,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar6,(MethodInfo *)0x0);
    id = System_String__Concat_3ae5ba0(pSVar6,"-slot",(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    method_00 = "clear";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this_01,(System_String_o *)"clear",build,id,
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    index = (pSVar5->fields)._stringLength;
    pSVar6 = (System_String_o *)(ulong)index;
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(index,method_00);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    *(char *)((long)&(pGVar4->fields).hasIcon + 2) = (char)bVar3;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    local_4c = (pSVar5->fields)._stringLength;
    if (g_data_057aed44 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.draft-color-");
      il2cpp_runtime_helper_023445d0(&".visible");
      g_data_057aed44 = '\x01';
    }
    pSVar5 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
    pSVar6 = "profile-character-set-effects.draft-color-";
    pSVar5 = System_String__Concat_3af7150("profile-character-set-effects.draft-color-",pSVar5,".visible",(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
    (__this_00->fields).alignItems = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).alignItems,pSVar5);
    (pGVar4->fields).contentLayout = __this_00;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout);
    iVar7 = iVar7 + 1;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_2 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x450a0b0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_2
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  uint index;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *method_00;
  int iVar7;
  int32_t iStack_38;
  int32_t iStack_34;
  
  if (g_data_057aed4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&"-slot");
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aed4a = '\x01';
  }
  iVar7 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields == 0) break;
    if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x18) <= iVar7) {
      return;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
    pSVar5 = pSVar4;
    System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_o *)0x0) break;
    (pSVar4->fields)._stringLength = iVar7;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    iVar2 = (pSVar4->fields)._stringLength;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iStack_38 = iVar2;
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pSVar5 = System_Int32__ToString((int32_t)&iStack_38,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
    id = System_String__Concat_3ae5ba0(pSVar5,"-slot",(MethodInfo *)0x0);
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    method_00 = "clear";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (row,(System_String_o *)"clear",build,id,
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    index = (pSVar4->fields)._stringLength;
    pSVar5 = (System_String_o *)(ulong)index;
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(index,method_00);
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    *(char *)((long)&(pGVar6->fields).hasIcon + 2) = (char)bVar3;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    iStack_34 = (pSVar4->fields)._stringLength;
    if (g_data_057aed44 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.draft-color-");
      il2cpp_runtime_helper_023445d0(&".visible");
      g_data_057aed44 = '\x01';
    }
    pSVar4 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
    pSVar5 = "profile-character-set-effects.draft-color-";
    pSVar4 = System_String__Concat_3af7150("profile-character-set-effects.draft-color-",pSVar4,".visible",(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
    (__this_00->fields).alignItems = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).alignItems,pSVar4);
    (pGVar6->fields).contentLayout = __this_00;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout);
    iVar7 = iVar7 + 1;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x450a370

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass31_0$$<BuildBody>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___BuildBody_b__3 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* swatch, const MethodInfo* method);
// 0x450a380

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___BuildBody_b__3
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *swatch,MethodInfo *method)

{
  float *pfVar1;
  System_String_c *pSVar2;
  byte bVar3;
  int32_t iVar4;
  long lVar5;
  UnityEngine_Transform_c *__this_00;
  Il2CppMethodPointer vtableDispatch;
  System_String_array *font;
  bool_conflict bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 in_RAX;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  System_String_array *pSVar13;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this_01;
  UnityEngine_Color_array *pUVar14;
  System_String_array *context;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Object_o *x_00;
  _union_14 _Var16;
  System_String_o *pSVar17;
  _union_14 _Var18;
  TMPro_TMP_Text_o *pTVar19;
  TMPro_TMP_Text_o *pTVar20;
  undefined8 *puVar21;
  UnityEngine_Color32_Fields UVar22;
  TMPro_TMP_Text_o *pTVar23;
  TMPro_TMP_Text_o *pTVar24;
  _union_14 __this_02;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o **method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  _union_14 extraout_RDX_02;
  _union_14 extraout_RDX_03;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar25;
  _union_14 *p_Var26;
  System_String_array **ppSVar27;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar28;
  MethodInfo *method_03;
  UnityEngine_Color32_Fields value_00;
  System_String_o **ppSVar29;
  long lVar30;
  _union_14 _Var31;
  System_Action_GisketchActionContext__o *in_R8;
  long *plVar32;
  long *plVar33;
  MethodInfo_24E7B40 **ppMVar34;
  System_String_o **__this_03;
  float fVar35;
  float fVar36;
  float in_XMM1_Da;
  float fVar37;
  float in_XMM1_Db;
  float fVar38;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar39 [16];
  _union_14 _StackY_1e8;
  _union_14 _StackY_1e0;
  _union_14 _StackY_1d8;
  _union_14 _StackY_1d0;
  TMPro_TMP_Text_o *pTStackY_1c8;
  MethodInfo *pMStackY_1c0;
  TMPro_TMP_Text_o *pTStackY_1b8;
  _union_14 _StackY_1b0;
  undefined8 uStackY_1a8;
  _union_14 _StackY_1a0;
  long *plStackY_198;
  UnityEngine_Color32_Fields UStackY_190;
  _union_14 _StackY_188;
  undefined1 auStackY_180 [88];
  undefined8 uStackY_128;
  _union_14 _StackY_110;
  TMPro_TMP_Text_o *pTStackY_108;
  UnityEngine_Object_o *pUStackY_100;
  ulong uStackY_f8;
  _union_14 _StackY_f0;
  UnityEngine_Object_o *pUStackY_e8;
  long *plStackY_e0;
  _union_14 _StackY_d8;
  _union_14 _StackY_d0;
  System_String_array **ppSStackY_c8;
  undefined8 uStackY_c0;
  UnityEngine_Object_o *pUStackY_b8;
  long *plStackY_b0;
  TMPro_TMP_Text_c *pTStackY_a8;
  System_String_array *pSStackY_a0;
  _union_14 _StackY_98;
  System_String_array **ppSStackY_90;
  undefined8 uStackY_88;
  System_String_array *pSStackY_80;
  System_String_o *pSStackY_78;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStackY_70;
  MethodInfo *pMStackY_68;
  undefined8 uStackY_60;
  undefined1 auStack_38 [8];
  
  auStack_38 = (undefined1  [8])in_RAX;
  if (cRam00000000057aed4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyDraftColor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    cRam00000000057aed4b = '\x01';
  }
  auStack_38._2_2_ = 0;
  iVar4 = (__this->fields).index;
  plVar33 = &TypeInfo_AottgCharacterSetEffectsDialog;
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_38 = (undefined1  [8])CONCAT44(iVar4,auStack_38._0_4_);
  if (g_data_057aed43 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
    g_data_057aed43 = '\x01';
  }
  pSVar11 = System_Int32__ToString((int)auStack_38 + 4,(MethodInfo *)0x0);
  method_00 = &"profile-character-set-effects-draft-color-";
  pMVar12 = (MethodInfo *)System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar11,(MethodInfo *)0x0);
  auStack_38._2_2_ = (short)(__this->fields).index + 0x41;
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  context = (System_String_array *)(auStack_38 + 2);
  pMVar25 = (MethodInfo *)0x0;
  pSVar11 = System_Char__ToString((uint16_t)context,(MethodInfo *)0x0);
  lVar5 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  if (lVar5 == 0) {
code_r0x0450a531:
    il2cpp_runtime_helper_022b2c90();
    ppMVar34 = (MethodInfo_24E7B40 **)plVar33;
  }
  else {
    uVar7 = (__this->fields).index;
    method_00 = (System_String_o **)(long)(int)uVar7;
    ppMVar34 = (MethodInfo_24E7B40 **)plVar33;
    if (uVar7 < *(uint *)(lVar5 + 0x18)) {
      plVar33 = *(long **)(lVar5 + 0x20 + (long)method_00 * 8);
      in_R8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIColorPicker);
      uStackY_60 = &g_data_0450a4f1;
      method_00 = (System_String_o **)plVar33;
      pMVar25 = pMVar12;
      context = pSVar13;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)pSVar13,(System_String_o *)pMVar12,pSVar11,
                 (System_String_o *)plVar33,in_R8,1,1,1,0,(MethodInfo *)0x0);
      if (swatch != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (swatch,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar13,(MethodInfo *)0x0);
        return;
      }
      goto code_r0x0450a531;
    }
  }
  uStackY_60 = (undefined *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed4f == '\0') {
    pMStackY_68 = (MethodInfo *)0x450a55f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    pMStackY_68 = (MethodInfo *)0x450a56b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pMStackY_68 = (MethodInfo *)0x450a577;
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    pMStackY_68 = (MethodInfo *)0x450a583;
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    pMStackY_68 = (MethodInfo *)0x450a58f;
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    pMStackY_68 = (MethodInfo *)0x450a59b;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aed4f = '\x01';
  }
  uStackY_60 = (undefined *)((ulong)uStackY_60 & 0xffffffff);
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
    pMStackY_68 = (MethodInfo *)0x450a5c3;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStackY_68 = (MethodInfo *)0x450a5cb;
  __this_01 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                        ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)context,pMVar25);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStackY_68 = (MethodInfo *)0x450a5e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar25 = (MethodInfo *)0x0;
  pMStackY_68 = (MethodInfo *)0x450a5f2;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
    pMStackY_68 = (MethodInfo *)0x450a60c;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStackY_68 = (MethodInfo *)0x450a614;
  pSVar13 = context;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)context,pMVar25);
  if (context == (System_String_array *)0x0) {
label_0450a7f2:
    pMStackY_68 = (MethodInfo *)0x450a7f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar3 = *(byte *)((long)context->m_Items + 0x1c);
    pMVar25 = (MethodInfo *)(ulong)bVar3;
    pMStackY_68 = (MethodInfo *)0x450a629;
    pSVar13 = context;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)context,(uint)bVar3,method_01)
    ;
    if (*(char *)((long)context->m_Items + 0x1c) == '\0') {
label_0450a7da:
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        pMStackY_68 = (MethodInfo *)0x450a7e7;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this_01,pMVar25);
        return;
      }
      goto label_0450a7f2;
    }
    pSVar13 = (System_String_array *)context->m_Items[2];
    pMStackY_68 = (MethodInfo *)0x450a648;
    bVar6 = System_String__op_Equality((System_String_o *)pSVar13,"Color",(MethodInfo *)0x0);
    font = "Aottg2";
    if ((char)bVar6 == '\0') {
      pMStackY_68 = (MethodInfo *)0x450a6ea;
      pMVar25 = "TwoColorGradient";
      bVar6 = System_String__op_Equality
                        (context->m_Items[2],(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pMStackY_68 = (MethodInfo *)0x450a732;
        pMVar25 = "FourColorGradient";
        bVar6 = System_String__op_Equality
                          (context->m_Items[2],(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar13 = (System_String_array *)context->m_Items[2];
          pMVar25 = (MethodInfo *)((long)&uStackY_60 + 4);
          pMStackY_68 = (MethodInfo *)0x450a78c;
          bVar6 = PatreonEffects_NameEffectPresets__TryResolve
                            ((System_String_o *)pSVar13,(int32_t *)pMVar25,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') goto label_0450a7da;
          uVar7 = uStackY_60._4_4_;
          pMVar12 = (MethodInfo *)(ulong)uStackY_60._4_4_;
          pMStackY_68 = (MethodInfo *)0x450a79e;
          context = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(context->m_Items[2],pMVar25);
          if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
            pMStackY_68 = (MethodInfo *)0x450a7b3;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStackY_68 = (MethodInfo *)0x450a7bb;
          pSVar13 = context;
          pUVar14 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                              ((System_Collections_Generic_IList_string__o *)context,pMVar25);
          if (__this_01 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
            pMStackY_68 = (MethodInfo *)0x450a7d8;
            Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
                      (__this_01,uVar7,pUVar14,(System_String_o *)"Aottg2",(MethodInfo *)in_R8);
            return;
          }
          goto label_0450a7f2;
        }
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
          pMStackY_68 = (MethodInfo *)0x450a748;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13]->monitor;
        pMStackY_68 = (MethodInfo *)0x450a75c;
        pUVar14 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                            ((System_Collections_Generic_IList_string__o *)pSVar13,pMVar25);
      }
      else {
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
          pMStackY_68 = (MethodInfo *)0x450a700;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = (System_String_array *)TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13]->klass;
        pMStackY_68 = (MethodInfo *)0x450a713;
        pUVar14 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                            ((System_Collections_Generic_IList_string__o *)pSVar13,pMVar25);
      }
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        pMStackY_68 = (MethodInfo *)0x450a77a;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this_01,pUVar14,(System_String_o *)"Aottg2",(MethodInfo *)&"Aottg2");
        return;
      }
      goto label_0450a7f2;
    }
    if (__this_01 == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) goto label_0450a7f2;
    if (g_data_057aed58 == '\0') {
      pMStackY_68 = (MethodInfo *)0x450a678;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
      g_data_057aed58 = '\x01';
    }
    pMStackY_68 = (MethodInfo *)0x450a693;
    pSVar13 = TypeInfo_Color;
    pUVar14 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
    context = font;
    if (pUVar14 == (UnityEngine_Color_array *)0x0) goto label_0450a7f2;
    uVar7 = (uint)pUVar14->max_length;
    method_00 = (System_String_o **)(ulong)uVar7;
    if (uVar7 != 0) {
      pUVar14->m_Items[0].fields.r = 1.0;
      pUVar14->m_Items[0].fields.g = 1.0;
      pUVar14->m_Items[0].fields.b = 1.0;
      pUVar14->m_Items[0].fields.a = 1.0;
      if (uVar7 != 1) {
        pUVar14->m_Items[1].fields.r = 1.0;
        pUVar14->m_Items[1].fields.g = 1.0;
        pUVar14->m_Items[1].fields.b = 1.0;
        pUVar14->m_Items[1].fields.a = 1.0;
        pMStackY_68 = (MethodInfo *)0x450a6d0;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this_01,pUVar14,(System_String_o *)font,(MethodInfo *)method_00);
        return;
      }
    }
  }
  pMStackY_68 = (MethodInfo *)0x450a7fc;
  uStackY_88 = il2cpp_runtime_helper_022b2ca0();
  pSStackY_80 = context;
  pSStackY_78 = pSVar11;
  pGStackY_70 = __this_01;
  pMStackY_68 = pMVar12;
  if (g_data_057aed51 == '\0') {
    ppSStackY_90 = (System_String_array **)0x450a820;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
    ppSStackY_90 = (System_String_array **)0x450a82c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
    ppSStackY_90 = (System_String_array **)0x450a838;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed51 = '\x01';
  }
  if (pSVar13 == (System_String_array *)0x0) {
    return;
  }
  _Var18 = (_union_14)pSVar13->max_length;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppSStackY_90 = (System_String_array **)0x450a865;
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)0x0;
  pSVar11 = (System_String_o *)0x0;
  ppSStackY_90 = (System_String_array **)0x450a873;
  bVar6 = UnityEngine_Object__op_Equality(_Var18.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  plVar33 = (long *)pSVar13->max_length;
  __this_03 = (System_String_o **)0x0;
  if (plVar33 != (long *)0x0) {
    pSVar11 = pSVar13->m_Items[1];
    ppSStackY_90 = (System_String_array **)0x450a89c;
    (**(code **)(*plVar33 + 0x558))(plVar33,pSVar11,*(undefined8 *)(*plVar33 + 0x560));
    __this_03 = (System_String_o **)0x0;
    if ((UnityEngine_Component_o *)pSVar13->max_length != (UnityEngine_Component_o *)0x0) {
      ppSStackY_90 = (System_String_array **)0x450a8b4;
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pSVar13->max_length,MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        ppSStackY_90 = (System_String_array **)0x450a8c9;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (System_String_o *)0x0;
      ppSStackY_90 = (System_String_array **)0x450a8d5;
      bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_03 = (System_String_o **)pSVar13->max_length;
      if ((System_String_array *)__this_03 != (System_String_array *)0x0) {
        pSVar11 = (System_String_o *)0x0;
        ppSStackY_90 = (System_String_array **)0x450a8e9;
        pUVar15 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
          return;
        }
      }
    }
  }
  ppSStackY_90 = (System_String_array **)0x450a921;
  uStackY_c0 = il2cpp_runtime_helper_022b2c90();
  ppSStackY_90 = &TypeInfo_AottgCharacterStyleChoicePreview;
  plStackY_b0 = &TypeInfo_Object;
  ppSVar29 = __this_03;
  pUStackY_b8 = x;
  pTStackY_a8 = (TMPro_TMP_Text_c *)ppMVar34;
  pSStackY_a0 = pSVar13;
  _StackY_98 = _Var18;
  if (g_data_057aed53 == '\0') {
    ppSStackY_c8 = (System_String_array **)0x450a953;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    ppSStackY_c8 = (System_String_array **)0x450a95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    ppSStackY_c8 = (System_String_array **)0x450a96b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    ppSStackY_c8 = (System_String_array **)0x450a977;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppSStackY_c8 = (System_String_array **)0x450a983;
    il2cpp_runtime_helper_023445d0(&"-popover");
    ppSVar29 = &"-options-scroll";
    ppSStackY_c8 = (System_String_array **)0x450a98f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed53 = '\x01';
  }
  if ((System_String_array *)__this_03 != (System_String_array *)0x0) {
    if (*(char *)((long)__this_03 + 0x3e) == '\0') {
      x = (UnityEngine_Object_o *)((UnityEngine_Component_Fields *)((long)__this_03 + 0x10))->m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        ppSStackY_c8 = (System_String_array **)0x450aa6d;
        il2cpp_runtime_helper_02337ed0();
      }
      _Var16.genericMethod = (System_String_array *)0x0;
      _Var18.genericMethod = (System_String_array *)0x0;
      pSVar11 = (System_String_o *)0x0;
      ppSStackY_c8 = (System_String_array **)0x450aa7c;
      bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar15 = (UnityEngine_GameObject_o *)
                  ((UnityEngine_Component_Fields *)((long)__this_03 + 0x10))->m_CachedPtr;
        ppSVar29 = (System_String_o **)(System_String_array *)0x0;
        if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_0450abd7;
        ppSStackY_c8 = (System_String_array **)0x450aa94;
        _Var16.genericMethod = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
      }
      __this_03 = &"-popover";
      ppMVar34 = &MethodInfo_Image_GetComponent_Image;
      iVar9 = *(int *)(TypeInfo_Object + 0xe4);
      _Var18 = _Var16;
      while( true ) {
        if (iVar9 == 0) {
          ppSStackY_c8 = (System_String_array **)0x450aadf;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_String_o *)0x0;
        ppSStackY_c8 = (System_String_array **)0x450aaeb;
        ppSVar29 = (System_String_o **)_Var18;
        bVar6 = UnityEngine_Object__op_Inequality
                          (_Var18.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (_Var18.genericMethod == (System_String_array *)0x0) break;
        pSVar11 = (System_String_o *)0x0;
        ppSStackY_c8 = (System_String_array **)0x450ab06;
        ppSVar29 = (System_String_o **)_Var18;
        pSVar17 = UnityEngine_Object__get_name(_Var18.genericMethod,(MethodInfo *)0x0);
        if (pSVar17 == (System_String_o *)0x0) break;
        ppSStackY_c8 = (System_String_array **)0x450ab1c;
        bVar6 = System_String__EndsWith(pSVar17,"-popover",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar11 = (System_String_o *)0x0;
          ppSStackY_c8 = (System_String_array **)0x450ab2a;
          ppSVar29 = (System_String_o **)_Var18;
          pSVar17 = UnityEngine_Object__get_name(_Var18.genericMethod,(MethodInfo *)0x0);
          if (pSVar17 == (System_String_o *)0x0) break;
          method_00 = &"-options-scroll";
          ppSStackY_c8 = (System_String_array **)0x450ab47;
          bVar6 = System_String__EndsWith(pSVar17,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_0450ab4f;
        }
        else {
label_0450ab4f:
          ppSStackY_c8 = (System_String_array **)0x450ab5b;
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__GetComponent_object_(_Var18.genericMethod,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            ppSStackY_c8 = (System_String_array **)0x450ab70;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = (System_String_o *)0x0;
          ppSStackY_c8 = (System_String_array **)0x450ab7c;
          bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
              ppSStackY_c8 = (System_String_array **)0x450ab96;
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar29 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
            if (x == (UnityEngine_Object_o *)0x0) break;
            pSVar2 = TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13][1].klass;
            in_XMM1_Da = SUB84(pSVar2,0);
            in_XMM1_Db = (float)((ulong)pSVar2 >> 0x20);
            in_XMM1_Dc._0_2_ = 0;
            in_XMM1_Dc._2_1_ = '\0';
            in_XMM1_Dc._3_1_ = '\0';
            in_XMM1_Dd = 0;
            ppSStackY_c8 = (System_String_array **)0x450abc3;
            (**(code **)&x->klass[1]._2.naturalAligment)
                      ((TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13]->fields)._stringLength,x);
          }
        }
        ppSStackY_c8 = (System_String_array **)0x450aaca;
        _Var18.genericMethod = UnityEngine_Transform__get_parent(_Var18.genericMethod,(MethodInfo *)0x0);
        iVar9 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this_00 = ((UnityEngine_Transform_o *)((long)__this_03 + 0x18))->klass;
      ppSVar29 = (System_String_o **)(System_String_array *)0x0;
      if (__this_00 != (UnityEngine_Transform_c *)0x0) {
        ppSStackY_c8 = (System_String_array **)0x450a9c6;
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)__this_00,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          ppSStackY_c8 = (System_String_array **)0x450a9e1;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_String_o *)0x0;
        ppSStackY_c8 = (System_String_array **)0x450a9ed;
        bVar6 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
          ppSStackY_c8 = (System_String_array **)0x450aa0e;
          il2cpp_runtime_helper_02337ed0();
        }
        x = (UnityEngine_Object_o *)0x0;
        ppSVar29 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          (**(code **)&x_00->klass[1]._2.naturalAligment)
                    ((TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13]->fields)._stringLength,
                     (int)TypeInfo_AottgCharacterStyleChoicePreview->m_Items[0x13][1].klass,x_00,x_00->klass[1].vtable._0_Equals.methodPtr)
          ;
          return;
        }
      }
    }
  }
label_0450abd7:
  ppSStackY_c8 = (System_String_array **)0x450abdc;
  il2cpp_runtime_helper_022b2c90();
  ppSStackY_c8 = &TypeInfo_AottgCharacterStyleChoicePreview;
  plStackY_e0 = &TypeInfo_Object;
  plVar33 = (long *)ppSVar29;
  pUStackY_e8 = x;
  _StackY_d8 = (_union_14)__this_03;
  _StackY_d0 = _Var18;
  if (g_data_057aed52 == '\0') {
    _StackY_f0 = (_union_14)0x450ac03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    plVar33 = &TypeInfo_Object;
    _StackY_f0 = (_union_14)0x450ac0f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed52 = '\x01';
  }
  ppSVar27 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if ((System_String_array *)ppSVar29 != (System_String_array *)0x0) {
    x = (UnityEngine_Object_o *)((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x10))->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _StackY_f0 = (_union_14)0x450ac3c;
      il2cpp_runtime_helper_02337ed0();
    }
    _Var18.genericMethod = (System_String_array *)0x0;
    _StackY_f0 = (_union_14)0x450ac4a;
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar15 = (UnityEngine_GameObject_o *)
                ((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x10))->m_CachedPtr;
      plVar33 = (long *)0x0;
      ppSVar27 = _Var18.genericMethod;
      if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_0450acbe;
      _StackY_f0 = (_union_14)0x450ac66;
      _Var18.genericMethod = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _StackY_f0 = (_union_14)0x450ac7b;
      il2cpp_runtime_helper_02337ed0();
    }
    _StackY_f0 = (_union_14)0x450ac87;
    plVar33 = (long *)_Var18;
    bVar6 = UnityEngine_Object__op_Inequality
                      (_Var18.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    ppSVar27 = (System_String_array **)0x0;
    if (_Var18.genericMethod != (System_String_array *)0x0) {
      pSVar17 = (System_String_o *)((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x28))->m_CachedPtr;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (_Var18.genericMethod,pSVar17,pSVar17,
                 (uint)pSVar11 & 0xff & (uint)*(byte *)((long)ppSVar29 + 0x3c),(MethodInfo *)0x0);
      return;
    }
  }
label_0450acbe:
  plVar32 = &TypeInfo_Object;
  _StackY_f0 = (_union_14)0x450acc3;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = extraout_RDX;
  pUStackY_100 = x;
  uStackY_f8 = (ulong)pSVar11 & 0xffffffff;
  _StackY_f0 = (_union_14)ppSVar29;
  if (g_data_057aed56 == '\0') {
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450aced;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450acf9;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    pMVar12 = extraout_RDX_00;
  }
  pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad12;
  UVar22 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(System_String_o *)"Normal",
             pMVar12);
  pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad1a;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)UVar22);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad35;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad42;
  UVar22 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad4a;
  _Var18 = (_union_14)plVar33;
  pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)UVar22);
  if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
    method_00 = (System_String_o **)pTVar20->klass;
    UVar22 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)method_00)->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    in_XMM1_Dc._0_2_ = 0;
    in_XMM1_Dc._2_1_ = '\0';
    in_XMM1_Dc._3_1_ = '\0';
    in_XMM1_Dd = 0;
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad74;
    (*(((TMPro_TMP_Text_c *)method_00)->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar20);
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad7c;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)UVar22)
    ;
    pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad87;
    _Var18 = (_union_14)plVar33;
    pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)UVar22)
    ;
    if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
      method_00 = (System_String_o **)pTVar20->klass;
      UVar22 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)method_00)->vtable)._22_get_color.method;
      pTStackY_108 = (TMPro_TMP_Text_o *)0x450ad9f;
      (*(((TMPro_TMP_Text_c *)method_00)->vtable)._22_get_color.methodPtr)();
      _Var18.genericMethod = (System_String_array *)0x0;
      pTStackY_108 = (TMPro_TMP_Text_o *)0x450ada6;
      uVar7 = il2cpp_runtime_helper_03b428b0();
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        UVar22.r = '\0';
        UVar22.g = '\0';
        UVar22.b = '\0';
        UVar22.a = '\0';
        UVar22.rgba = uVar7;
        pTStackY_108 = (TMPro_TMP_Text_o *)0x450adb7;
        TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0);
        pTStackY_108 = (TMPro_TMP_Text_o *)0x450adbf;
        _Var18 = (_union_14)plVar33;
        pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,
                             (MethodInfo *)UVar22);
        if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar20->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtableDispatch)
                    (pTVar20,0,0,(pTVar20->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
          return;
        }
      }
    }
  }
  pTStackY_108 = (TMPro_TMP_Text_o *)0x450ade9;
  uStackY_128 = il2cpp_runtime_helper_022b2c90();
  auStackY_180._72_4_ = in_XMM1_Da;
  auStackY_180._76_4_ = in_XMM1_Db;
  auStackY_180._80_4_ = in_XMM1_Dc;
  auStackY_180._84_4_ = in_XMM1_Dd;
  _StackY_110 = (_union_14)plVar33;
  pTStackY_108 = pTVar19;
  if (g_data_057aed58 == '\0') {
    auStackY_180._64_8_ = (void *)0x450ae1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar12 = (MethodInfo *)0x2;
  auStackY_180._64_8_ = (void *)0x450ae36;
  _Var16 = (_union_14)TypeInfo_Color;
  pUVar14 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar14 != (UnityEngine_Color_array *)0x0) {
    uVar7 = (uint)pUVar14->max_length;
    method_00 = (System_String_o **)(ulong)uVar7;
    if (uVar7 != 0) {
      pUVar14->m_Items[0].fields.r = (float)(undefined4)uStackY_128;
      pUVar14->m_Items[0].fields.g = (float)uStackY_128._4_4_;
      pUVar14->m_Items[0].fields.b = (float)auStackY_180._72_4_;
      pUVar14->m_Items[0].fields.a = (float)auStackY_180._76_4_;
      if (uVar7 != 1) {
        pUVar14->m_Items[1].fields.r = (float)(undefined4)uStackY_128;
        pUVar14->m_Items[1].fields.g = (float)uStackY_128._4_4_;
        pUVar14->m_Items[1].fields.b = (float)auStackY_180._72_4_;
        pUVar14->m_Items[1].fields.a = (float)auStackY_180._76_4_;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (_Var18.genericMethod,pUVar14,(System_String_o *)UVar22,(MethodInfo *)method_00);
        return;
      }
    }
    auStackY_180._64_8_ = (void *)0x450ae73;
    il2cpp_runtime_helper_022b2ca0();
  }
  auStackY_180._64_8_ = (void *)0x450ae78;
  il2cpp_runtime_helper_022b2c90();
  auStackY_180._56_8_ = &"Normal";
  auStackY_180._32_8_ = &TypeInfo_Object;
  pMVar25 = (MethodInfo *)auStackY_180;
  plVar33 = (long *)_Var16;
  auStackY_180._24_8_ = _Var18;
  auStackY_180._40_8_ = ppMVar34;
  auStackY_180._48_8_ = UVar22;
  auStackY_180._64_8_ = ppSVar27;
  if (g_data_057aed54 == '\0') {
    _StackY_188 = (_union_14)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _StackY_188 = (_union_14)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    _StackY_188 = (_union_14)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar33 = &TypeInfo_IList_string;
    _StackY_188 = (_union_14)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (_Var16.genericMethod != (System_String_array *)0x0) {
    lVar5 = *(long *)_Var16.genericMethod;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
          puVar21 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar30) * 0x10 + lVar5 + 0x138);
          goto label_0450af31;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar30);
    }
    _StackY_188 = (_union_14)0x450af19;
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var16.genericMethod,TypeInfo_ICollection_string,0);
label_0450af31:
    _StackY_188 = (_union_14)0x450af3a;
    uVar8 = (*(code *)*puVar21)(_Var16.genericMethod,puVar21[1]);
    _StackY_188 = (_union_14)0x450af4b;
    UVar22 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,uVar8);
    if (UVar22 != (UnityEngine_Color32_Fields)0x0) {
      pTVar28 = (TMPro_TMP_Text_c *)0x0;
      ppSVar27 = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        lVar5 = *(long *)_Var16.genericMethod;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
              puVar21 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar30) * 0x10 + lVar5 + 0x138);
              goto label_0450aff3;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar30);
        }
        _StackY_188 = (_union_14)0x450afd9;
        puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var16.genericMethod,TypeInfo_ICollection_string,0);
label_0450aff3:
        _StackY_188 = (_union_14)0x450affc;
        iVar9 = (*(code *)*puVar21)(_Var16.genericMethod,puVar21[1]);
        if ((long)iVar9 <= (long)pTVar28) {
          return;
        }
        lVar5 = *(long *)_Var16.genericMethod;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar30) == TypeInfo_IList_string) {
              puVar21 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar30) * 0x10 + lVar5 + 0x138);
              goto label_0450b063;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar30);
        }
        _StackY_188 = (_union_14)0x450b049;
        puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var16.genericMethod,TypeInfo_IList_string,0);
label_0450b063:
        _StackY_188 = (_union_14)0x450b06f;
        _Var18.genericMethod =
             (void *)(*(code *)*puVar21)(_Var16.genericMethod,(ulong)pTVar28 & 0xffffffff,puVar21[1]);
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
          _StackY_188 = (_union_14)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStackY_180._0_8_ = (Il2CppMethodPointer)0x0;
        auStackY_180._8_8_ = (Il2CppMethodPointer)0x0;
        _StackY_188 = (_union_14)0x450b098;
        pMVar25 = (MethodInfo *)auStackY_180;
        plVar33 = _Var18.genericMethod;
        bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                          (_Var18.genericMethod,(UnityEngine_Color_o *)auStackY_180,(MethodInfo *)0x0);
        method_00 = (System_String_o **)(ulong)*(uint *)((long)UVar22 + 0x18);
        plVar32 = (long *)auStackY_180;
        if (method_00 <= pTVar28) goto label_0450b1e2;
        if ((char)bVar6 == '\0') {
          fVar35 = 1.0;
          fVar36 = 1.0;
          fVar37 = fVar35;
          fVar38 = fVar36;
        }
        else {
          fVar35 = (float)auStackY_180._0_8_;
          fVar36 = SUB84(auStackY_180._0_8_,4);
          fVar37 = (float)auStackY_180._8_8_;
          fVar38 = SUB84(auStackY_180._8_8_,4);
        }
        pfVar1 = (float *)((long)UVar22 + 0x20 + (long)pTVar28 * 0x10);
        *pfVar1 = fVar35;
        pfVar1[1] = fVar36;
        pfVar1[2] = fVar37;
        pfVar1[3] = fVar38;
        pTVar28 = (TMPro_TMP_Text_c *)((long)&(pTVar28->_1).image + 1);
      } while( true );
    }
    lVar5 = *(long *)_Var16.genericMethod;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
          puVar21 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar30) * 0x10 + lVar5 + 0x138);
          goto label_0450b121;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar30);
    }
    _StackY_188 = (_union_14)0x450b109;
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var16.genericMethod,TypeInfo_ICollection_string,0);
label_0450b121:
    _StackY_188 = (_union_14)0x450b12a;
    iVar9 = (*(code *)*puVar21)(_Var16.genericMethod,puVar21[1]);
    if (iVar9 < 1) {
      return;
    }
    lVar5 = *(long *)_Var16.genericMethod;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar30) == TypeInfo_IList_string) {
          method_00 = (System_String_o **)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar30) * 0x10 + lVar5 + 0x138);
          goto label_0450b1a3;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar30);
    }
    _StackY_188 = (_union_14)0x450b179;
    method_00 = (System_String_o **)il2cpp_runtime_helper_02300d20(_Var16.genericMethod,TypeInfo_IList_string,0);
label_0450b1a3:
    _StackY_188 = (_union_14)0x450b1ae;
    _Var18.genericMethod =
         (void *)(*(code *)(((TMPro_TMP_Text_c *)method_00)->_1).image)
                           (_Var16.genericMethod,0,(((TMPro_TMP_Text_c *)method_00)->_1).gc_desc);
    if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
      _StackY_188 = (_union_14)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStackY_180._0_8_ = (Il2CppMethodPointer)0x0;
    auStackY_180._8_8_ = (Il2CppMethodPointer)0x0;
    _StackY_188 = (_union_14)0x450b1dd;
    plVar33 = _Var18.genericMethod;
    UnityEngine_ColorUtility__TryParseHtmlString
              (_Var18.genericMethod,(UnityEngine_Color_o *)auStackY_180,(MethodInfo *)0x0);
    _StackY_188 = (_union_14)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    _StackY_188 = (_union_14)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar12 = pMVar25;
  }
  _StackY_188 = (_union_14)0x450b1ec;
  auVar39 = il2cpp_runtime_helper_022b2c90();
  pTVar19 = auVar39._8_8_;
  uStackY_1a8 = auVar39._0_8_;
  _StackY_1a0 = _Var18;
  plStackY_198 = plVar32;
  UStackY_190 = UVar22;
  _StackY_188 = _Var16;
  if (g_data_057aed59 == '\0') {
    _StackY_1b0 = (_union_14)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar39._8_8_ = extraout_RDX_01;
    auVar39._0_8_ = uStackY_1a8;
    g_data_057aed59 = '\x01';
  }
  uStackY_1a8 = auVar39._0_8_;
  _StackY_1b0 = (_union_14)0x450b228;
  pTVar20 = pTVar19;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(System_String_o *)pTVar19,
             auVar39._8_8_);
  _StackY_1b0 = (_union_14)0x450b230;
  pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)pTVar20);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _StackY_1b0 = (_union_14)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  _StackY_1b0 = (_union_14)0x450b258;
  pTVar24 = pTVar19;
  PatreonEffects_NameFontCatalog__Apply(pTVar20,(System_String_o *)pTVar19,(MethodInfo *)0x0);
  _StackY_1b0 = (_union_14)0x450b260;
  _Var18 = (_union_14)plVar33;
  pTVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,(MethodInfo *)pTVar24);
  uVar7 = (uint)pTVar24;
  if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
    method_00 = (System_String_o **)pTVar23->klass;
    pMVar25 = (((TMPro_TMP_Text_c *)method_00)->vtable)._23_set_color.method;
    _StackY_1b0 = (_union_14)0x450b286;
    (*(((TMPro_TMP_Text_c *)method_00)->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar23);
    _StackY_1b0 = (_union_14)0x450b28e;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,pMVar25);
    uVar7 = (uint)pMVar25;
    _Var18.genericMethod = (System_String_array *)0x0;
    _StackY_1b0 = (_union_14)0x450b2a2;
    uVar10 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar10;
      _StackY_1b0 = (_union_14)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar19,value,(MethodInfo *)0x0);
      *(MethodInfo **)((long)plVar33 + 0x30) = pMVar12;
      _StackY_1b0 = (_union_14)0x450b2c3;
      pMVar25 = pMVar12;
      il2cpp_runtime_helper_022b4080((System_String_o **)((long)plVar33 + 0x30));
      _StackY_1b0 = (_union_14)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,pMVar25);
      _StackY_1b0 = (_union_14)0x450b2d3;
      _Var18 = (_union_14)plVar33;
      pTVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar33,pMVar25);
      uVar7 = (uint)pMVar25;
      if (pTVar24 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar24->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar24,0,0,(pTVar24->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  _StackY_1b0 = (_union_14)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  _Var31._4_4_ = 0;
  _Var31._0_4_ = uVar7;
  _Var16 = extraout_RDX_02;
  _StackY_1d0 = (_union_14)plVar33;
  pTStackY_1c8 = pTVar20;
  pMStackY_1c0 = pMVar12;
  pTStackY_1b8 = pTVar19;
  _StackY_1b0 = (_union_14)ppSVar27;
  if (g_data_057aed5a == '\0') {
    _StackY_1d8 = (_union_14)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    _StackY_1d8 = (_union_14)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    _Var16 = extraout_RDX_03;
  }
  _StackY_1d8 = (_union_14)0x450b357;
  pTVar28 = (TMPro_TMP_Text_c *)method_00;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var18.genericMethod,(System_String_o *)method_00,_Var16.genericMethod);
  _StackY_1d8 = (_union_14)0x450b35f;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      (_Var18.genericMethod,(MethodInfo *)pTVar28);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _StackY_1d8 = (_union_14)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  _StackY_1d8 = (_union_14)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)method_00,(MethodInfo *)0x0);
  _StackY_1d8 = (_union_14)0x450b38f;
  _Var16 = _Var18;
  __this_02.genericMethod =
       Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                 (_Var18.genericMethod,(MethodInfo *)method_00);
  if (__this_02.genericMethod == (System_String_array *)0x0) {
label_0450b444:
    _StackY_1d8 = (_union_14)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (System_String_o **)0x0;
    _StackY_1d8 = (_union_14)0x450b3a2;
    pUVar15 = UnityEngine_Component__get_gameObject(__this_02.genericMethod,(MethodInfo *)0x0);
    _Var16 = __this_02;
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    _StackY_1d8 = (_union_14)0x450b3bd;
    pSVar11 = (System_String_o *)UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(System_String_o **)((long)_Var18.genericMethod + 0x28) = pSVar11;
    _Var18.genericMethod = _Var18.genericMethod + 0x28;
    _StackY_1d8 = (_union_14)0x450b3d0;
    il2cpp_runtime_helper_022b4080(_Var18.genericMethod);
    method_00 = (System_String_o **)0x0;
    _StackY_1d8 = (_union_14)0x450b3da;
    _Var16 = _Var31;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar7,(MethodInfo *)0x0);
    if (extraout_RDX_02.genericMethod == (System_String_array *)0x0) goto label_0450b444;
    if (*(il2cpp_array_size_t *)((long)extraout_RDX_02.genericMethod + 0x18) == 0) {
label_0450b42a:
      _Var16.genericMethod = (System_String_array *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)_Var18.genericMethod !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)_Var18.genericMethod,settings,(MethodInfo *)0x0)
        ;
        return;
      }
      goto label_0450b444;
    }
    if ((int)*(il2cpp_array_size_t *)((long)extraout_RDX_02.genericMethod + 0x18) != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      pSVar11 = *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x28);
      *(System_String_o **)&(settings->fields).gradientA.fields =
           *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x20);
      *(System_String_o **)&(settings->fields).gradientA.fields.b = pSVar11;
      if (1 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
        pSVar11 = *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x38);
        *(System_String_o **)&(settings->fields).gradientB.fields =
             *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x30);
        *(System_String_o **)&(settings->fields).gradientB.fields.b = pSVar11;
        if (2 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
          pSVar11 = *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x48);
          *(System_String_o **)&(settings->fields).gradientC.fields =
               *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x40);
          *(System_String_o **)&(settings->fields).gradientC.fields.b = pSVar11;
          if (3 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
            pSVar11 = *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x58);
            *(System_String_o **)&(settings->fields).gradientD.fields =
                 *(System_String_o **)((long)extraout_RDX_02.genericMethod + 0x50);
            *(System_String_o **)&(settings->fields).gradientD.fields.b = pSVar11;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  _StackY_1d8 = (_union_14)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  p_Var26 = &_StackY_1e8;
  _StackY_1e8 = _Var18;
  _StackY_1e0 = extraout_RDX_02;
  _StackY_1d8 = _Var31;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  ppSVar27 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var18.genericMethod =
       Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                 (_Var16.genericMethod,(MethodInfo *)method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(_Var18.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview->m_Items + 0xc4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var31 = _Var16;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(_Var16.genericMethod,pMVar12);
  if (_Var16.genericMethod != (System_String_array *)0x0) {
    pMVar12 = (MethodInfo *)(ulong)*(byte *)((long)_Var16.genericMethod + 0x3c);
    _Var31 = _Var16;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              (_Var16.genericMethod,(uint)*(byte *)((long)_Var16.genericMethod + 0x3c),method_02);
    if (*(char *)((long)_Var16.genericMethod + 0x3c) == '\0') {
      if (_Var18.genericMethod != (System_String_array *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(_Var18.genericMethod,pMVar12);
        return;
      }
    }
    else if (_Var18.genericMethod != (System_String_array *)0x0) {
      pMVar12 = *(MethodInfo **)((long)_Var16.genericMethod + 0x30);
      pMVar25 = extraout_RDX_04;
      _Var16 = _StackY_1e8;
      p_Var26 = &_StackY_1d0;
      _Var31.genericMethod = _Var18.genericMethod;
      _Var18 = _StackY_1e0;
      ppSVar27 = (System_String_array **)_StackY_1d8;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = extraout_RDX_05;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(System_String_array ***)((long)p_Var26 + -8) = ppSVar27;
  *(_union_14 *)((long)p_Var26 + -0x10) = _Var18;
  *(_union_14 *)((long)p_Var26 + -0x18) = _Var16;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar25 = extraout_RDX_06;
  }
  *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b562;
  method_03 = pMVar12;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var31.genericMethod,(System_String_o *)pMVar12,pMVar25);
  *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b56a;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,method_03);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)pMVar12,(MethodInfo *)0x0);
  *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b59a;
  _Var18 = _Var31;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,pMVar12);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pMVar12 = (pTVar19->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar19->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar19);
    *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b5c4;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,pMVar12);
    _Var18.genericMethod = (System_String_array *)0x0;
    *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b5d8;
    uVar7 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar7;
      *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b5f1;
      pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          (_Var31.genericMethod,(MethodInfo *)value_00);
      _Var18 = _Var31;
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)p_Var26 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)p_Var26 + -0x30) = 0;
  *(undefined8 *)((long)p_Var26 + -0x28) = 0;
  *(undefined8 *)((long)p_Var26 + -0x38) = 0x450b635;
  bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                    (_Var18.genericMethod,(UnityEngine_Color_o *)((long)p_Var26 + -0x30),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x4505000

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aed27 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Set Effects");
    g_data_057aed27 = '\x01';
  }
  return "Set Effects";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x4505030

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aed28 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/SparkleIcon");
    g_data_057aed28 = '\x01';
  }
  return "UI/Icons/Profile/SparkleIcon";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x4505060

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aed29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aed29 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(760.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x4505130

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aed2a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aed2a = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* targetId, System_String_o* label, System_String_o* effectPrefix, bool textEditable, const MethodInfo* method);
// 0x45051f0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *targetId,
               System_String_o *label,System_String_o *effectPrefix,bool_conflict textEditable,
               MethodInfo *method)

{
  int iVar1;
  System_String_Fields SVar2;
  long lVar3;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  ulong uVar9;
  MethodInfo *pMVar10;
  long lVar11;
  
  if (g_data_057aed2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects");
    g_data_057aed2b = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x10) = targetId;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x10,targetId);
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x18) = label;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x18,label);
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x20) = effectPrefix;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x20,effectPrefix);
  *(char *)((long)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x52) = (char)textEditable;
  bVar5 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  *(char *)((long)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x51) = (char)bVar5;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pMVar8 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_00;
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value(targetId,pSVar7,pMVar8);
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x28) = pSVar7;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x28,pSVar7);
  if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aedb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb5 = '\x01';
  }
  bVar5 = System_String__op_Equality(effectPrefix,"profile-character-name-effect",(MethodInfo *)0x0);
  pMVar8 = TypeInfo_AottgEditCharacterDialog;
  if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar5 == '\0') {
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar8);
  }
  else {
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar8);
  }
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x30) = pSVar7;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x30,pSVar7);
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  pMVar8 = *(MethodInfo **)((long)SVar2 + 0x30);
  *(MethodInfo **)((long)SVar2 + 0x38) = pMVar8;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x38);
  if (*(char *)((long)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x51) == '\0') {
    cVar4 = '\0';
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(effectPrefix,pMVar8);
    cVar4 = (char)bVar5;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_AottgCharacterSetEffectsDialog = pMVar10;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
    *(char *)((long)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x50) = cVar4;
  }
  else {
    *(char *)((long)*(System_String_Fields *)&pMVar10[2].virtualMethodPointer + 0x50) = cVar4;
  }
  if (cVar4 == '\0') {
    iVar1 = *(int *)((long)&pMVar10[2].parameters + 4);
    pSVar7 = "None";
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(effectPrefix,pMVar8);
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  SVar2 = *(System_String_Fields *)&pMVar10[2].virtualMethodPointer;
  *(System_String_o **)((long)SVar2 + 0x40) = pSVar7;
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x40,pSVar7);
  SVar2 = *(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(undefined8 *)((long)SVar2 + 0x48) = "Color";
  il2cpp_runtime_helper_022b4080((long)SVar2 + 0x48);
  lVar11 = 0x20;
  uVar9 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  pMVar8 = extraout_RDX_01;
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_02;
    }
    lVar3 = *(long *)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    pMVar10 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar9) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      pMVar8 = (MethodInfo *)0x0;
      pMVar10 = (MethodInfo *)context.fields.GameObject;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
label_04505607:
        if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar8);
          pMVar8 = TypeInfo_AottgCharacterSetEffectsDialog;
        }
        else {
          Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar8);
          pMVar8 = TypeInfo_AottgCharacterSetEffectsDialog;
        }
        TypeInfo_AottgCharacterSetEffectsDialog = pMVar8;
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          __this = (root->fields)._codeActions;
          if (__this != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            if (*(int *)((long)&pMVar8[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar8);
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"profile-character-set-effects.text-colors.enabled",uVar6 & 0xff,
                       (MethodInfo *)0x0);
          }
          __this_00 = (root->fields)._Theme_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"profile-character-set-effects",1,
                       (MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
      if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
        pMVar8 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot;
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        goto label_04505607;
      }
      break;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)*(System_String_Fields *)&TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
      iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
      pMVar8 = extraout_RDX_04;
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_05;
    }
    pMVar10 = (MethodInfo *)effectPrefix;
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(effectPrefix,(int32_t)uVar9,pMVar8);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar9) goto label_04505704;
    *(System_String_o **)(lVar3 + lVar11) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar3 + lVar11);
    uVar9 = uVar9 + 1;
    lVar11 = lVar11 + 8;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    pMVar8 = extraout_RDX_03;
  }
  il2cpp_runtime_helper_022b2c90();
label_04505704:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aedb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb5 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)pMVar10,"profile-character-name-effect",(MethodInfo *)0x0);
  pMVar8 = TypeInfo_AottgEditCharacterDialog;
  if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar5 != '\0') {
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar8);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4505dd0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_String_o *previewFont;
  long lVar4;
  System_String_o *pickerId;
  System_String_o *colorsEnabledKey;
  undefined1 uVar5;
  uint uVar6;
  System_Action_GisketchActionContext__o *save;
  System_Action_GameObject__o *imported;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this_00;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  Il2CppMethodPointer pIVar12;
  System_Action_GisketchChoiceOptionRenderContext__o *pSVar13;
  MethodInfo *pMVar14;
  System_String_o *previewEffectType;
  System_Collections_Generic_IList_string__o *previewEffectColors;
  MethodInfo *in_stack_ffffffffffffff78;
  bool_conflict bVar7;
  
  if (g_data_057aed2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplySelectedTextColor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ImportedColoredText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__31_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__31_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__31_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-text-color-help");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"SpaceEvenly");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"callout");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-select-row");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-text-picker");
    il2cpp_runtime_helper_023445d0(&"row");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.effect-colors.visible");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-effect-colors");
    g_data_057aed2c = '\x01';
  }
  pMVar14 = TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)&TypeInfo_AottgCharacterStyleChoicePreview[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(pMVar14);
  save = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            ("profile-character-set-effects-text-picker","#FFFFFF",save,0,1,0,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x28);
  uVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(TypeInfo_AottgCharacterSetEffectsDialog);
  cVar1 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x52];
  imported = (System_Action_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GameObject);
  previewEffectType = (System_String_o *)0x0;
  System_Action_object____ctor();
  colorsEnabledKey = "profile-character-set-effects.text-colors.enabled";
  pickerId = "profile-character-set-effects-text-picker";
  pIVar12 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  if (pIVar12[0x50] != (Il2CppMethodPointer)0x0) {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar12 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    }
    previewEffectType = *(System_String_o **)(pIVar12 + 0x40);
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] != (Il2CppMethodPointer)0x0) goto label_045060b0;
label_0450645c:
    previewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  else {
    if (TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] == (Il2CppMethodPointer)0x0) goto label_0450645c;
label_045060b0:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    previewEffectColors = *(System_Collections_Generic_IList_string__o **)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer
    ;
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  previewFont = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x38);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCharacterTextColorEditor);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
            (__this_00,pSVar3,pickerId,colorsEnabledKey,uVar6 & 0xff,(uint)(byte)cVar1,imported,
             previewEffectType,previewEffectColors,previewFont,in_stack_ffffffffffffff78);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_045066e0;
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "row";
  pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar4 + 8) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar4 + 8,pSVar8);
  }
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,10.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,pSVar3,pSVar8,"profile-character-set-effects-select-row",pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "callout";
  pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar4 + 0x10) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x10,pSVar8);
  }
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(84.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                       (System_String_o *)0x0,0.0,pGVar9,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                       ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (body,pSVar3,pSVar8,"profile-character-set-effects-text-color-help",pGVar10,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aed39 != '\0') goto label_04506421;
label_04506482:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed39 = '\x01';
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) != 0) goto label_0450642e;
label_045064a2:
    pMVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
    il2cpp_runtime_helper_02337ed0();
    bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar14);
    uVar5 = (undefined1)bVar7;
  }
  else {
    if (g_data_057aed39 == '\0') goto label_04506482;
label_04506421:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) goto label_045064a2;
label_0450642e:
    bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(TypeInfo_AottgCharacterSetEffectsDialog);
    uVar5 = (undefined1)bVar7;
  }
  if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    *(undefined1 *)((long)&(pGVar11->fields).hasIcon + 2) = uVar5;
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar10->fields).alignItems = "profile-character-set-effects.text-color-help.visible";
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).alignItems);
      (pGVar11->fields).contentLayout = pGVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).contentLayout,pGVar10);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = "row";
      pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar4 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar4 + 0x18) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x18,pSVar8);
      }
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Row","SpaceEvenly","Center",(System_String_o *)0x0,
                           (System_String_o *)0x0,10.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (body,pSVar3,pSVar8,"profile-character-set-effects-effect-colors",pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pMVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(pMVar14);
      if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(char *)((long)&(pGVar11->fields).hasIcon + 2) = (char)bVar7;
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar10->fields).alignItems = "profile-character-set-effects.effect-colors.visible";
          il2cpp_runtime_helper_022b4080(&(pGVar10->fields).alignItems);
          (pGVar11->fields).contentLayout = pGVar10;
          il2cpp_runtime_helper_022b4080(&(pGVar11->fields).contentLayout,pGVar10);
          return;
        }
      }
    }
  }
label_045066e0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RenderEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RenderFont);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_runtime_helper_023445d0(&"profile-character-font-preview");
    il2cpp_runtime_helper_023445d0(&"profile-character-effect-preview");
    g_data_057aed4c = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterStyleChoicePreview[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterStyleChoicePreview[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar12 = TypeInfo_AottgCharacterStyleChoicePreview[2].virtualMethodPointer;
    cVar1 = pIVar12[0x20];
  }
  else {
    pIVar12 = TypeInfo_AottgCharacterStyleChoicePreview[2].virtualMethodPointer;
    cVar1 = pIVar12[0x20];
  }
  if (cVar1 != (code)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterStyleChoicePreview[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar12 = TypeInfo_AottgCharacterStyleChoicePreview[2].virtualMethodPointer;
  }
  pIVar12[0x20] = (code)0x1;
  pSVar13 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-effect-preview",pSVar13,(MethodInfo *)0x0);
  pSVar13 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-font-preview",pSVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4506af0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_GisketchActionContext__o *action;
  System_String_o *text;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *unaff_RBX;
  System_String_o *pSVar5;
  System_String_o *in_R8;
  System_String_o *in_R9;
  UnityEngine_GameObject_o *unaff_R15;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057aed2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057aed2d = '\x01';
  }
  pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60(footer,"Cancel",pSVar3,(MethodInfo *)0x0);
    pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x4506ba9;
    System_Action_GisketchActionContext____ctor();
    pSVar5 = "Save";
    action = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (footer->fields)._ui;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = (__this_00->fields)._actions;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar1,(__this_00->fields)._ownerId,pSVar3,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar5,pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,unaff_RBX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar1 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._ownerId,action,
                          (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)footer,(int32_t)pSVar5,text,pSVar2,in_R8,in_R9,enter,
               (System_String_o *)unaff_RBX,in_stack_ffffffffffffff90);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057aed2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed2e = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_02;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar5,pSVar2,method_00);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (unaff_R15,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30),method_01);
  if (unaff_R15 != (UnityEngine_GameObject_o *)0x0) {
    pIVar4 = UnityEngine_GameObject__GetComponentInParent_object_(unaff_R15,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar4[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pIVar4[8].monitor,1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Cancel (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4506bd0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Cancel
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *prefix;
  System_String_o *font;
  Il2CppObject *pIVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (g_data_057aed2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed2e = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  prefix = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
  font = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(prefix,font,in_RDX);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (context.fields.GameObject,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30),method_00)
  ;
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pIVar1[8].monitor,1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4506eb0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  Il2CppObject *pIVar6;
  System_String_array *pSVar7;
  long lVar8;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_01;
  System_String_Fields SVar9;
  System_String_o *pSVar10;
  System_String_o *id;
  int iVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  byte bVar13;
  ulong uVar14;
  UnityEngine_GameObject_o *source;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  System_String_array *unaff_R13;
  undefined8 *puVar18;
  undefined8 uStack_98;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_90;
  UnityEngine_GameObject_o *pUStack_88;
  System_String_array *pSStack_80;
  UnityEngine_GameObject_o *pUStack_78;
  undefined8 *puStack_70;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_58;
  UnityEngine_GameObject_o *pUStack_50;
  
  if (g_data_057aed2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed2f = '\x01';
  }
  pSVar15 = "Color";
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar15 = ((context.fields.Node)->fields).value;
  }
  if (g_data_057aecec == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecec = '\x01';
  }
  bVar3 = System_String__op_Equality(pSVar15,"Color",(MethodInfo *)0x0);
  if ((((char)bVar3 == '\0') &&
      (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0),
      (char)bVar3 == '\0')) &&
     (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
     (char)bVar3 == '\0')) {
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    pSVar16 = "Color";
  }
  else {
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    pSVar16 = pSVar15;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar18 = &TypeInfo_AottgCharacterSetEffectsDialog;
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  *(System_String_o **)((long)SVar9 + 0x48) = pSVar16;
  il2cpp_runtime_helper_022b4080((long)SVar9 + 0x48,pSVar16);
  if (*(char *)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x51) == '\0') {
    bVar13 = 0;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  else {
    if (g_data_057aecec == '\0') {
      il2cpp_runtime_helper_023445d0(&"FourColorGradient");
      il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
      il2cpp_runtime_helper_023445d0(&"Color");
      g_data_057aecec = '\x01';
    }
    bVar3 = System_String__op_Equality(pSVar15,"Color",(MethodInfo *)0x0);
    bVar13 = 1;
    if (((char)bVar3 == '\0') &&
       (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
      bVar13 = (byte)bVar3;
    }
    bVar13 = bVar13 ^ 1;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  *(byte *)((long)SVar9 + 0x50) = bVar13;
  pSVar10 = "None";
  if (bVar13 != 0) {
    pSVar10 = pSVar15;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  }
  *(System_String_o **)((long)SVar9 + 0x40) = pSVar10;
  il2cpp_runtime_helper_022b4080((long)SVar9 + 0x40,pSVar10);
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  if (*(char *)((long)SVar9 + 0x50) == '\0') {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar16 = *(System_String_o **)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x48);
    }
    else {
      pSVar16 = *(System_String_o **)((long)SVar9 + 0x48);
    }
    if (g_data_057aeced == '\0') {
      il2cpp_runtime_helper_023445d0(&"FourColorGradient");
      il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
      g_data_057aeced = '\x01';
    }
    pMVar12 = "TwoColorGradient";
    bVar3 = System_String__op_Equality(pSVar16,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
    if (((char)bVar3 == '\0') &&
       (pMVar12 = "FourColorGradient",
       bVar3 = System_String__op_Equality(pSVar16,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      iVar11 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
                (context.fields.GameObject,pMVar12);
      iVar11 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else {
    pMVar12 = extraout_RDX;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      pMVar12 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
              (context.fields.GameObject,*(System_String_o **)((long)SVar9 + 0x40),pMVar12);
    iVar11 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  source = context.fields.GameObject;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_0450714f:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(pGVar5,(MethodInfo *)method_01);
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)pGVar5);
    pGVar5 = "profile-character-set-effects.text-colors.enabled";
    if (g_data_057aed40 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      g_data_057aed40 = '\x01';
    }
    if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
        (method_01 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot,
        pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                           (context.fields.GameObject,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
        pIVar6 != (Il2CppObject *)0x0)) &&
       (pIVar6[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pIVar6[6].monitor,(System_String_o *)pGVar5,uVar4 & 0xff,(MethodInfo *)0x0);
      method_01 = pGVar5;
    }
    cVar1 = *(char *)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x50);
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (cVar1 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
                (context.fields.GameObject,(MethodInfo *)method_01);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
              (context.fields.GameObject,(MethodInfo *)method_01);
    return;
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    method_01 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot;
    pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    goto label_0450714f;
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  method_00 = method_01;
  pSStack_58 = pSVar16;
  pUStack_50 = context.fields.GameObject;
  if (g_data_057aed31 == '\0') {
    pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507396;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed31 = '\x01';
  }
  pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073b1;
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
                     ((System_String_o *)method_01,(MethodInfo *)method_00);
  if (pSVar7 == (System_String_array *)0x0) {
    method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507526;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = (UnityEngine_GameObject_o *)0x0;
    pSVar15 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields == 0) goto label_04507560;
    if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x18) < 1) {
      return;
    }
  }
  else {
    puVar18 = (undefined8 *)0x0;
    pUVar17 = (UnityEngine_GameObject_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    while( true ) {
      if (iVar11 == 0) {
        pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450740c;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      pSVar15 = TypeInfo_AottgCharacterSetEffectsDialog;
      unaff_R13 = pSVar7;
      if (lVar8 == 0) goto label_04507560;
      if ((long)*(int *)(lVar8 + 0x18) <= (long)puVar18) {
        return;
      }
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450743e;
        il2cpp_runtime_helper_02337ed0();
        lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      }
      if ((undefined8 *)(ulong)(uint)pSVar7->max_length <= puVar18) break;
      if (lVar8 == 0) goto label_04507560;
      if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar18) break;
      *(System_String_o **)(lVar8 + 0x20 + (long)puVar18 * 8) = pSVar7->m_Items[(long)puVar18];
      pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507485;
      il2cpp_runtime_helper_022b4080(lVar8 + (long)puVar18 * 8 + 0x20);
      uStack_60 = CONCAT44((int)puVar18,(undefined4)uStack_60);
      if (g_data_057aed43 == '\0') {
        pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450749f;
        il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
        g_data_057aed43 = '\x01';
      }
      pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45074b2;
      method_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  System_Int32__ToString((int)&uStack_60 + 4,(MethodInfo *)0x0);
      pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45074c6;
      pSVar15 = "profile-character-set-effects-draft-color-";
      method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",(System_String_o *)method_00,(MethodInfo *)0x0);
      lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      if (lVar8 == 0) goto label_04507560;
      if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar18) break;
      pGVar5 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(lVar8 + 0x20 + (long)puVar18 * 8);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507509;
        il2cpp_runtime_helper_02337ed0();
      }
      pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073f6;
      method_00 = pGVar5;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                ((System_String_o *)method_01,(System_String_o *)pGVar5,1,source,(MethodInfo *)0x0);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    }
    pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507552;
    il2cpp_runtime_helper_022b2ca0();
  }
  if (*(int *)((long)&pSVar15[9].monitor + 4) == 0) {
    pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507560;
    il2cpp_runtime_helper_02337ed0();
  }
label_04507560:
  pGStack_68 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507565;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pGStack_90 = method_01;
  pUStack_88 = pUVar17;
  pSStack_80 = unaff_R13;
  pUStack_78 = source;
  puStack_70 = puVar18;
  pGStack_68 = pGVar5;
  if (g_data_057aed32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed32 = '\x01';
  }
  uVar14 = 0;
  iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    uVar4 = (uint)method_00;
    if (iVar11 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    pSVar16 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)SVar9 == 0) break;
    if ((long)*(int *)(*(long *)SVar9 + 0x18) <= (long)uVar14) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    }
    lVar8 = *(long *)((long)SVar9 + 8);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto label_0450770a;
    lVar2 = *(long *)SVar9;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar14) goto label_0450770a;
    *(undefined8 *)(lVar2 + 0x20 + uVar14 * 8) = *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8);
    il2cpp_runtime_helper_022b4080(lVar2 + uVar14 * 8 + 0x20);
    uStack_98 = CONCAT44((int)uVar14,(undefined4)uStack_98);
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pSVar10 = System_Int32__ToString((int)&uStack_98 + 4,(MethodInfo *)0x0);
    pSVar16 = "profile-character-set-effects-draft-color-";
    id = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar10,(MethodInfo *)0x0);
    uVar4 = (uint)pSVar10;
    lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto label_0450770a;
    method_00 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(lVar8 + 0x20 + uVar14 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (id,(System_String_o *)method_00,1,(UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
    uVar14 = uVar14 + 1;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_0450770a:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed40 = '\x01';
  }
  if (((pUStack_88 != (UnityEngine_GameObject_o *)0x0) &&
      (pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                          (pUStack_88,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar6 != (Il2CppObject *)0x0)) &&
     (pIVar6[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pIVar6[6].monitor,pSVar16,uVar4 & 0xff,(MethodInfo *)0x0)
    ;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4507a10

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_String_o *font;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057aed30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed30 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar4 = &"Normal";
  }
  else {
    ppSVar4 = &((context.fields.Node)->fields).value;
  }
  pSVar5 = *ppSVar4;
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51);
  }
  if (cVar1 == '\0') {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    pSVar5 = "Normal";
  }
  else {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  *(System_String_o **)(lVar3 + 0x38) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar5);
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
  font = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar5,font,method_00);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (context.fields.GameObject,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38),method_01)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadPresetColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors (UnityEngine_GameObject_o* source, System_String_o* type, const MethodInfo* method);
// 0x4507370

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
               (UnityEngine_GameObject_o *source,System_String_o *type,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined8 in_RAX;
  System_String_array *pSVar3;
  long lVar4;
  MethodInfo *method_00;
  System_String_Fields SVar5;
  System_String_o *str1;
  System_String_o *id;
  Il2CppObject *pIVar6;
  MethodInfo *unaff_RBP;
  ulong uVar7;
  uint uVar8;
  System_String_o *source_00;
  System_String_o *key;
  UnityEngine_GameObject_o *unaff_R12;
  System_String_array *unaff_R13;
  ulong unaff_R15;
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  UnityEngine_GameObject_o *pUStack_60;
  System_String_array *pSStack_58;
  UnityEngine_GameObject_o *pUStack_50;
  ulong uStack_48;
  MethodInfo *pMStack_40;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)type;
  uStack_38 = in_RAX;
  if (g_data_057aed31 == '\0') {
    pMStack_40 = (MethodInfo *)0x4507396;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pMStack_40 = (MethodInfo *)0x45073a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed31 = '\x01';
  }
  pMStack_40 = (MethodInfo *)0x45073b1;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(type,method_00);
  if (pSVar3 == (System_String_array *)0x0) {
    type = (System_String_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      pMStack_40 = (MethodInfo *)0x4507526;
      il2cpp_runtime_helper_02337ed0();
    }
    source_00 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields == 0) goto label_04507560;
    if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x18) < 1) {
      return;
    }
  }
  else {
    unaff_R15 = 0;
    unaff_R12 = (UnityEngine_GameObject_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    while( true ) {
      if (iVar1 == 0) {
        pMStack_40 = (MethodInfo *)0x450740c;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar4 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      source_00 = TypeInfo_AottgCharacterSetEffectsDialog;
      unaff_R13 = pSVar3;
      if (lVar4 == 0) goto label_04507560;
      if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_R15) {
        return;
      }
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        pMStack_40 = (MethodInfo *)0x450743e;
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      }
      if ((uint)pSVar3->max_length <= unaff_R15) break;
      if (lVar4 == 0) goto label_04507560;
      if (*(uint *)(lVar4 + 0x18) <= unaff_R15) break;
      *(System_String_o **)(lVar4 + 0x20 + unaff_R15 * 8) = pSVar3->m_Items[unaff_R15];
      pMStack_40 = (MethodInfo *)0x4507485;
      il2cpp_runtime_helper_022b4080(lVar4 + unaff_R15 * 8 + 0x20);
      uStack_38 = CONCAT44((int)unaff_R15,(undefined4)uStack_38);
      if (g_data_057aed43 == '\0') {
        pMStack_40 = (MethodInfo *)0x450749f;
        il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
        g_data_057aed43 = '\x01';
      }
      pMStack_40 = (MethodInfo *)0x45074b2;
      method_00 = (MethodInfo *)System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
      pMStack_40 = (MethodInfo *)0x45074c6;
      source_00 = "profile-character-set-effects-draft-color-";
      type = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",(System_String_o *)method_00,(MethodInfo *)0x0);
      lVar4 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      if (lVar4 == 0) goto label_04507560;
      if (*(uint *)(lVar4 + 0x18) <= unaff_R15) break;
      unaff_RBP = *(MethodInfo **)(lVar4 + 0x20 + unaff_R15 * 8);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        pMStack_40 = (MethodInfo *)0x4507509;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_40 = (MethodInfo *)0x45073f6;
      method_00 = unaff_RBP;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                (type,(System_String_o *)unaff_RBP,1,source,(MethodInfo *)0x0);
      unaff_R15 = unaff_R15 + 1;
      iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    }
    pMStack_40 = (MethodInfo *)0x4507552;
    il2cpp_runtime_helper_022b2ca0();
  }
  if (*(int *)((long)&source_00[9].monitor + 4) == 0) {
    pMStack_40 = (MethodInfo *)0x4507560;
    il2cpp_runtime_helper_02337ed0();
  }
label_04507560:
  pMStack_40 = (MethodInfo *)0x4507565;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = type;
  pUStack_60 = unaff_R12;
  pSStack_58 = unaff_R13;
  pUStack_50 = source;
  uStack_48 = unaff_R15;
  pMStack_40 = unaff_RBP;
  if (g_data_057aed32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed32 = '\x01';
  }
  uVar7 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    uVar8 = (uint)method_00;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar5 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    key = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)SVar5 == 0) break;
    if ((long)*(int *)(*(long *)SVar5 + 0x18) <= (long)uVar7) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar5 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    }
    lVar4 = *(long *)((long)SVar5 + 8);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) goto label_0450770a;
    lVar2 = *(long *)SVar5;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) goto label_0450770a;
    *(undefined8 *)(lVar2 + 0x20 + uVar7 * 8) = *(undefined8 *)(lVar4 + 0x20 + uVar7 * 8);
    il2cpp_runtime_helper_022b4080(lVar2 + uVar7 * 8 + 0x20);
    uStack_70 = CONCAT44((int)uVar7,(undefined4)uStack_70);
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    str1 = System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
    key = "profile-character-set-effects-draft-color-";
    id = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",str1,(MethodInfo *)0x0);
    uVar8 = (uint)str1;
    lVar4 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) goto label_0450770a;
    method_00 = *(MethodInfo **)(lVar4 + 0x20 + uVar7 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (id,(System_String_o *)method_00,1,(UnityEngine_GameObject_o *)source_00,(MethodInfo *)0x0);
    uVar7 = uVar7 + 1;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_0450770a:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed40 = '\x01';
  }
  if (((pUStack_60 != (UnityEngine_GameObject_o *)0x0) &&
      (pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_(pUStack_60,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
      pIVar6 != (Il2CppObject *)0x0)) &&
     (pIVar6[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pIVar6[6].monitor,key,uVar8 & 0xff,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadGradientColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4507570

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 in_RAX;
  System_String_Fields SVar4;
  System_String_o *str1;
  System_String_o *id;
  Il2CppObject *pIVar5;
  ulong uVar6;
  uint uVar7;
  System_String_o *key;
  UnityEngine_GameObject_o *unaff_R12;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aed32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed32 = '\x01';
  }
  uVar6 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    uVar7 = (uint)method;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar4 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    key = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)SVar4 == 0) break;
    if ((long)*(int *)(*(long *)SVar4 + 0x18) <= (long)uVar6) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar4 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    }
    lVar2 = *(long *)((long)SVar4 + 8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto label_0450770a;
    lVar3 = *(long *)SVar4;
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_0450770a;
    *(undefined8 *)(lVar3 + 0x20 + uVar6 * 8) = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
    il2cpp_runtime_helper_022b4080(lVar3 + uVar6 * 8 + 0x20);
    uStack_38 = CONCAT44((int)uVar6,(undefined4)uStack_38);
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    str1 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    key = "profile-character-set-effects-draft-color-";
    id = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",str1,(MethodInfo *)0x0);
    uVar7 = (uint)str1;
    lVar2 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto label_0450770a;
    method = *(MethodInfo **)(lVar2 + 0x20 + uVar6 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (id,(System_String_o *)method,1,source,(MethodInfo *)0x0);
    uVar6 = uVar6 + 1;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_0450770a:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed40 = '\x01';
  }
  if (((unaff_R12 != (UnityEngine_GameObject_o *)0x0) &&
      (pIVar5 = UnityEngine_GameObject__GetComponentInParent_object_(unaff_R12,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
      pIVar5 != (Il2CppObject *)0x0)) &&
     (pIVar5[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pIVar5[6].monitor,key,uVar7 & 0xff,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyDraftColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4507be0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  UnityEngine_Sprite_c *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  System_String_Fields SVar6;
  char cVar7;
  uint uVar8;
  bool_conflict bVar9;
  uint uVar10;
  float fVar11;
  undefined8 in_RAX;
  System_String_o *pSVar12;
  MethodInfo *pMVar13;
  TMPro_TMP_InputField_o *pTVar14;
  undefined8 extraout_RAX;
  TMPro_TMP_InputField_o *pTVar15;
  TMPro_TMP_InputField_o *__this_00;
  undefined8 extraout_RAX_00;
  long lVar16;
  undefined8 uVar17;
  Il2CppObject *pIVar18;
  System_Object_array *call;
  System_Object_array *pSVar19;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar20;
  MethodInfo_24E85B0 **in_RCX;
  float fVar21;
  int iVar22;
  ulong uVar23;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x;
  undefined8 *puVar24;
  int index;
  long *plVar25;
  TMPro_TMP_InputField_o *pTVar26;
  UnityEngine_Sprite_c *pUVar27;
  TMPro_TMP_InputField_o *in_RSI;
  System_Object_array *method_00;
  TMPro_TMP_InputField_o *pTVar28;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  System_String_Fields unaff_R12;
  System_String_o **ppSVar29;
  MethodInfo_2A669C0 **ppMVar30;
  TMPro_TMP_InputField_o **ppTVar31;
  float fVar32;
  TMPro_TMP_InputField_o *unaff_R14;
  uint uVar33;
  undefined1 auVar34 [16];
  undefined8 uStack_a0;
  System_String_Fields SStack_98;
  System_String_o *pSStack_90;
  ulong uStack_88;
  TMPro_TMP_InputField_o *pTStack_80;
  TMPro_TMP_InputField_o *pTStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  TMPro_TMP_InputField_o *pTStack_60;
  System_String_Fields SStack_58;
  TMPro_TMP_InputField_o **ppTStack_50;
  TMPro_TMP_InputField_o *pTStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aed33 == '\0') {
    pcStack_40 = (code *)0x4507c05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pcStack_40 = (code *)0x4507c11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pcStack_40 = (code *)0x4507c1d;
    il2cpp_runtime_helper_023445d0(&"cancel");
    g_data_057aed33 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    pcStack_40 = (code *)0x4507d4c;
    il2cpp_runtime_helper_02337ed0();
    pcStack_40 = (code *)0x4507d54;
    uVar8 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,(MethodInfo *)in_RSI);
  }
  else {
    pcStack_40 = (code *)0x4507c47;
    uVar8 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,(MethodInfo *)in_RSI);
  }
  if ((int)uVar8 < 0) {
    return;
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    pcStack_40 = (code *)0x4507c64;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar27 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
  pTVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
  if (pUVar27 != (UnityEngine_Sprite_c *)0x0) {
    if (uVar8 < *(uint *)&(pUVar27->_1).namespaze) {
      unaff_R12 = (System_String_Fields)(long)(int)uVar8;
      unaff_R14 = (&(pUVar27->_1).byval_arg.data)[(long)unaff_R12];
      if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_04507d65:
        in_RSI = (TMPro_TMP_InputField_o *)0x1;
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        pcStack_40 = (code *)0x4507d76;
        pTVar14 = unaff_R14;
        pMVar13 = (MethodInfo *)
                  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                            ((System_String_o *)unaff_R14,1,(System_String_o *)0x0,(MethodInfo *)0x0);
        uVar10 = *(uint *)&(pUVar27->_1).namespaze;
        context.fields.ElementId = (System_String_o *)context.fields.Node;
      }
      else {
        pcStack_40 = (code *)0x4507cb4;
        bVar9 = System_String__op_Equality
                          (((context.fields.Node)->fields).id,(System_String_o *)"cancel",
                           (MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          unaff_R14 = (TMPro_TMP_InputField_o *)((context.fields.Node)->fields).value;
          goto label_04507d65;
        }
        if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
          pcStack_40 = (code *)0x4507cce;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_38 = CONCAT44(uVar8,(undefined4)uStack_38);
        if (g_data_057aed43 == '\0') {
          pcStack_40 = (code *)0x4507ce8;
          il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
          g_data_057aed43 = '\x01';
        }
        pcStack_40 = (code *)0x4507cfb;
        pSVar12 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
        pcStack_40 = (code *)0x4507d0f;
        context.fields.ElementId = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          pcStack_40 = (code *)0x4507d2a;
          il2cpp_runtime_helper_02337ed0();
        }
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        pcStack_40 = (code *)0x4507d3c;
        in_RSI = unaff_R14;
        pTVar14 = (TMPro_TMP_InputField_o *)context.fields.ElementId;
        pMVar13 = (MethodInfo *)
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                            (context.fields.ElementId,(System_String_o *)unaff_R14,1,(MethodInfo *)0x0);
        uVar10 = *(uint *)&(pUVar27->_1).namespaze;
      }
      if (uVar8 < uVar10) {
        (&(pUVar27->_1).byval_arg.data)[(long)unaff_R12] = pMVar13;
        pcStack_40 = (code *)0x4507d94;
        il2cpp_runtime_helper_022b4080(&(pUVar27->_1).byval_arg.data + (long)unaff_R12);
        iVar22 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
        if (iVar22 == 0) {
          pcStack_40 = (code *)0x4507da7;
          il2cpp_runtime_helper_02337ed0();
          iVar22 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
        }
        cVar7 = *(char *)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite[3].monitor;
        if (iVar22 == 0) {
          pcStack_40 = (code *)0x4507ddb;
          il2cpp_runtime_helper_02337ed0();
        }
        if (cVar7 == '\0') {
          pcStack_40 = (code *)0x4507de7;
          Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
                    (context.fields.GameObject,pMVar13);
        }
        else {
          pcStack_40 = (code *)0x4507dd4;
          Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
                    (context.fields.GameObject,pMVar13);
        }
        return;
      }
    }
    pcStack_40 = (code *)0x4507dfb;
    il2cpp_runtime_helper_022b2ca0();
  }
  pcStack_40 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex;
  il2cpp_runtime_helper_022b2c90();
  ppTStack_50 = &TypeInfo_AottgCharacterSetEffectsDialog;
  puVar24 = (undefined8 *)auStack_70;
  pTStack_60 = (TMPro_TMP_InputField_o *)context.fields.ElementId;
  SStack_58 = unaff_R12;
  pTStack_48 = unaff_R14;
  pcStack_40 = (code *)(ulong)uVar8;
  if (g_data_057aed45 == '\0') {
    pTStack_78 = (TMPro_TMP_InputField_o *)0x4507e25;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed45 = '\x01';
  }
  uVar23 = 0;
  ppTVar31 = &TypeInfo_AottgCharacterSetEffectsDialog;
  pTVar26 = (TMPro_TMP_InputField_o *)(auStack_68 + 4);
  ppSVar29 = &"profile-character-set-effects-draft-color-";
  iVar22 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  while( true ) {
    if (iVar22 == 0) {
      pTStack_78 = (TMPro_TMP_InputField_o *)0x4507e55;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar2 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
    if (pUVar2 == (UnityEngine_Sprite_c *)0x0) break;
    iVar22 = (int)uVar23;
    if (*(int *)&(pUVar2->_1).namespaze <= iVar22) {
      return;
    }
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      pTStack_78 = (TMPro_TMP_InputField_o *)0x4507ee5;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_68._4_4_ = iVar22;
    if (g_data_057aed43 == '\0') {
      pTStack_78 = (TMPro_TMP_InputField_o *)0x4507e93;
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pTStack_78 = (TMPro_TMP_InputField_o *)0x4507ea4;
    pSVar12 = System_Int32__ToString((int32_t)pTVar26,(MethodInfo *)0x0);
    pTStack_78 = (TMPro_TMP_InputField_o *)0x4507eb2;
    in_RSI = (TMPro_TMP_InputField_o *)System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar12,(MethodInfo *)0x0);
    pTStack_78 = (TMPro_TMP_InputField_o *)0x4507ebf;
    bVar9 = System_String__op_Equality((System_String_o *)pTVar14,(System_String_o *)in_RSI,(MethodInfo *)0x0)
    ;
    if ((char)bVar9 != '\0') {
      return;
    }
    uVar23 = (ulong)(iVar22 + 1);
    iVar22 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  pTStack_78 = (TMPro_TMP_InputField_o *)0x4507f0e;
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (System_String_o *)auStack_68;
  uStack_88 = uVar23;
  pTStack_80 = pTVar14;
  pTStack_78 = pTVar26;
  if (g_data_057aed34 == '\0') {
    pSStack_90 = (System_String_o *)0x4507f2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pSStack_90 = (System_String_o *)0x4507f3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_90 = (System_String_o *)0x4507f47;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_90 = (System_String_o *)0x4507f53;
    il2cpp_runtime_helper_023445d0(&"save");
    pSStack_90 = (System_String_o *)0x4507f5f;
    il2cpp_runtime_helper_023445d0(&"cancel");
    pSStack_90 = (System_String_o *)0x4507f6b;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    pSStack_90 = (System_String_o *)0x4507f77;
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-text-picker");
    g_data_057aed34 = '\x01';
  }
  pTVar14 = pTStack_60;
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    pSStack_90 = (System_String_o *)0x4507f9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_90 = (System_String_o *)0x4507fa2;
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
                      ((UnityEngine_GameObject_o *)pTVar14,(MethodInfo *)in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_90 = (System_String_o *)0x4507fbd;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_90 = (System_String_o *)0x4507fc9;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  SVar6 = SStack_58;
  if ((char)bVar9 != '\0') {
    return;
  }
  if (SStack_58 == (System_String_Fields)0x0) {
label_04508022:
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      pSStack_90 = (System_String_o *)0x450803a;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (MethodInfo_24E85B0 **)0x0;
    pSStack_90 = (System_String_o *)0x4508057;
    pTVar26 = "profile-character-set-effects-text-picker";
    pSVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                        ((System_String_o *)"profile-character-set-effects-text-picker","#FFFFFF",0,(MethodInfo *)0x0);
    if (SVar6 == (System_String_Fields)0x0) {
      uVar8 = 1;
    }
    else {
label_0450806c:
      pTVar26 = *(TMPro_TMP_InputField_o **)((long)SVar6 + 0x18);
      pSStack_90 = (System_String_o *)0x4508081;
      uVar8 = System_String__op_Equality((System_String_o *)pTVar26,"save",(MethodInfo *)0x0);
    }
    if (pTVar14 != (TMPro_TMP_InputField_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar14,pSVar12,uVar8 & 0xff
                 ,(MethodInfo *)in_RCX);
      return;
    }
  }
  else {
    pTVar26 = *(TMPro_TMP_InputField_o **)((long)SStack_58 + 0x18);
    pSStack_90 = (System_String_o *)0x4507ff1;
    pMVar13 = "cancel";
    bVar9 = System_String__op_Equality
                      ((System_String_o *)pTVar26,(System_String_o *)"cancel",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pSStack_90 = (System_String_o *)0x450801e;
      bVar9 = System_String__IsNullOrEmpty(*(System_String_o **)((long)SVar6 + 0x50),(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_04508022;
      pSVar12 = *(System_String_o **)((long)SVar6 + 0x50);
      goto label_0450806c;
    }
    if (pTVar14 != (TMPro_TMP_InputField_o *)0x0) {
      pSStack_90 = (System_String_o *)0x4508006;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar14,pMVar13);
      uVar17 = extraout_RAX;
      uVar23 = uStack_88;
      pTVar28 = pTVar14;
      pTVar26 = pTStack_80;
      pTVar14 = pTStack_78;
      goto Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection;
    }
  }
  pSStack_90 = (System_String_o *)0x450809e;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  SStack_98 = SVar6;
  puVar24 = &uStack_a0;
  pSStack_90 = pSVar12;
  if (g_data_057aed41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed41 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  pTVar28 = pTVar26;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (pTVar26 != (TMPro_TMP_InputField_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    pTVar28 = pTVar26;
    pTVar15 = (TMPro_TMP_InputField_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pTVar26,(MethodInfo *)0x0);
    if (pTVar15 != (TMPro_TMP_InputField_o *)0x0) {
      pMVar13 = (MethodInfo *)0x0;
      __this_00 = (TMPro_TMP_InputField_o *)
                  UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pTVar15,(MethodInfo *)0x0);
      pTVar28 = pTVar15;
      if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
        in_RCX = &MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil;
        pMVar13 = (MethodInfo *)0x1;
        pSVar19 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)__this_00,1,MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
        pTVar28 = __this_00;
        if (pSVar19 != (System_Object_array *)0x0) {
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar28,pMVar13);
  uVar23 = 0;
  uVar17 = extraout_RAX_00;
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection:
  do {
    *(UnityEngine_Sprite_c **)((long)puVar24 + -8) = pUVar27;
    *(ulong *)((long)puVar24 + -0x10) = uVar23;
    *(undefined8 *)((long)puVar24 + -0x18) = uVar17;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)puVar24 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)puVar24 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(pTVar28->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar24 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar24 + -0x20) = 0x450fb46;
    bVar9 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    fVar11 = (pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.r;
    uVar23 = (ulong)(uint)fVar11;
    pTVar15 = *(TMPro_TMP_InputField_o **)&(pTVar28->fields).m_Colors.fields.m_NormalColor.fields.a;
    if ((int)fVar11 < 0) {
      if (pTVar15 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)puVar24 + -0x20) = 0x450fb86;
        uVar8 = TMPro_TMP_InputField__get_caretPosition(pTVar15,(MethodInfo *)0x0);
        pTVar15 = *(TMPro_TMP_InputField_o **)&(pTVar28->fields).m_Colors.fields.m_NormalColor.fields.a;
        if (pTVar15 != (TMPro_TMP_InputField_o *)0x0) {
          uVar23 = (ulong)uVar8;
          lVar16 = *(long *)&(pTVar15->fields).m_SelectionColor.fields.a;
          if (lVar16 != 0) {
            if (-1 < (int)uVar8) goto label_0450fba1;
            uVar23 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar15 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar16 = *(long *)&(pTVar15->fields).m_SelectionColor.fields.a, lVar16 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar16 + 0x10) < (int)uVar23) {
        uVar23 = (ulong)*(uint *)(lVar16 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)puVar24 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar15,(int32_t)uVar23,(MethodInfo *)0x0);
      pTVar15 = *(TMPro_TMP_InputField_o **)&(pTVar28->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar15 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)puVar24 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar15,(int32_t)uVar23,(MethodInfo *)0x0);
        (pTVar28->fields).m_Colors.fields.m_PressedColor.fields.a = -NAN;
        (pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.r = -NAN;
        (pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.g = -NAN;
        (pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.b = -NAN;
        lVar16 = *(long *)&(pTVar28->fields).m_Navigation.fields;
        if (lVar16 != 0) {
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          length = *(int32_t *)(lVar16 + 0x18);
          *(undefined4 *)(lVar16 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar16 + 0x10);
            *(undefined8 *)((long)puVar24 + -0x20) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.a + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0x20) = 0x450fc0f;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x20) = pTVar26;
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x28) = pTVar28;
    *(undefined8 *)((long)puVar24 + -0x30) = uVar17;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)puVar24 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x = *(System_Collections_Generic_List_object__o **)
         &(pTVar15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar24 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar24 + -0x38) = 0x450fc5b;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pTVar26 = *(TMPro_TMP_InputField_o **)&(pTVar15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar26 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (pTVar15->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)puVar24 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar26,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar26 = *(TMPro_TMP_InputField_o **)&(pTVar15->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar26 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar26,(int32_t)(pTVar15->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    pSVar19 = (System_Object_array *)0x0;
    *(undefined8 *)((long)puVar24 + -0x38) = 0x450fca1;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)puVar24 + -0x38) = uVar23;
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x40) = pTVar14;
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x48) = pTVar15;
    *(TMPro_TMP_InputField_o ***)((long)puVar24 + -0x50) = ppTVar31;
    *(System_String_o ***)((long)puVar24 + -0x58) = ppSVar29;
    *(System_Collections_Generic_List_object__o **)((long)puVar24 + -0x60) = x;
    *(undefined8 *)((long)puVar24 + -0x68) = uVar17;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)puVar24 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)puVar24 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)puVar24 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)pSVar19->m_Items + 0x71) == '\0') {
      return;
    }
    __this_02 = (System_Object_array *)pSVar19->m_Items[1];
    ppMVar30 = (MethodInfo_2A669C0 **)ppSVar29;
    if (__this_02 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)pSVar19->m_Items[0];
      x = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar8 = *(uint *)(pSVar19->m_Items + 0xc);
        uVar23 = (ulong)uVar8;
        uVar10 = (__this_01->fields)._size;
        uVar33 = (int)__this_02->max_length + uVar8;
        if ((int)uVar10 < (int)uVar33) {
          uVar33 = uVar10;
        }
        pTVar14 = (TMPro_TMP_InputField_o *)(ulong)uVar33;
        if ((int)uVar8 < (int)uVar33) {
          do {
            index = (int)uVar23;
            iVar22 = *(int *)(pSVar19->m_Items + 0xc);
            *(undefined8 *)((long)puVar24 + -0x70) = 0x450fd62;
            pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index - iVar22,
                                 MethodInfo_String_get_Item);
            x = (System_Collections_Generic_List_object__o *)0x0;
            ppMVar30 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            ppTVar31 = (TMPro_TMP_InputField_o **)&MethodInfo_Void_set_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)puVar24 + -0x70) = 0x450fd7c;
            in_RCX = (MethodInfo_24E85B0 **)MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar18,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar23 = (ulong)(index + 1U);
            if ((int)uVar33 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)pSVar19->m_Items[0];
            __this_02 = (System_Object_array *)pSVar19->m_Items[1];
            x = __this_01;
          } while (__this_02 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)puVar24 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x = (System_Collections_Generic_List_object__o *)pSVar19->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)puVar24 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)puVar24 + -0x70) = 0x450fdda;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pIVar18 = pSVar19->m_Items[9];
          __this_02 = (System_Object_array *)0x0;
          if (pIVar18 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar18->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar18,0,0,pIVar18->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0x70) = 0x450fe21;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)puVar24 + -0x70) = uVar23;
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x78) = pTVar14;
    *(System_Object_array **)((long)puVar24 + -0x80) = pSVar19;
    *(TMPro_TMP_InputField_o ***)((long)puVar24 + -0x88) = ppTVar31;
    *(MethodInfo_2A669C0 ***)((long)puVar24 + -0x90) = ppMVar30;
    *(System_Collections_Generic_List_object__o **)((long)puVar24 + -0x98) = x;
    *(undefined8 *)((long)puVar24 + -0xa0) = uVar17;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_02->m_Items[8];
    plVar25 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)puVar24 + -0xa8) = 0x450feff;
    __this_03 = call;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_04510010:
      plVar25 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)__this_02->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = (System_Object_array *)0x0;
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510032;
      bVar9 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
label_0451007e:
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                   (MethodInfo *)pSVar19);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x451009e;
        value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x45100b8;
        System_Action_object____ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
        return;
      }
      pIVar18 = __this_02->m_Items[9];
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510049;
      pSVar19 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510063;
      method_00 = __this_02;
      __this_03 = pSVar19;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar18 != (Il2CppObject *)0x0) {
        pMVar13 = pIVar18->klass->vtable[0x4f].method;
        vtableDispatch = pIVar18->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar18,pSVar19,pMVar13);
        goto label_0451007e;
      }
    }
    else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
      pSVar19 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ff44;
      method_00 = __this_02;
      __this_03 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (pSVar19 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ff62;
        method_00 = call;
        __this_03 = pSVar19;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)pSVar19,(UnityEngine_Events_UnityAction_T0__o *)call
                   ,MethodInfo_Void_RemoveListener);
        if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
          pSVar19 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
          ppTVar31 = (TMPro_TMP_InputField_o **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar25 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo_24E85B0 **)0x0;
          *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ffa1;
          method_00 = __this_02;
          __this_03 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (pSVar19 != (System_Object_array *)0x0) {
            ppMVar30 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ffc0;
            method_00 = call;
            __this_03 = pSVar19;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pSVar19,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
              __this = __this_02->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)puVar24 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo_24E85B0 **)0x0;
              *(undefined8 *)((long)puVar24 + -0xa8) = 0x450fff1;
              method_00 = __this_02;
              __this_03 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              pSVar19 = (System_Object_array *)0x0;
              if (__this != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)puVar24 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)puVar24 + -0xa8) = plVar25;
    *(System_Object_array **)((long)puVar24 + -0xb0) = pSVar19;
    *(System_Object_array **)((long)puVar24 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)puVar24 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)puVar24 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)puVar24 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)method_00);
    }
    pTVar26 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar24 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar13 = (MethodInfo *)0x0;
    *(undefined8 *)((long)puVar24 + -0x100) = 0x451015c;
    pTVar14 = pTVar26;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar12 = (System_String_o *)__this_03->m_Items[4];
      pMVar13 = (MethodInfo *)0x0;
      *(undefined8 *)((long)puVar24 + -0x100) = 0x4510189;
      bVar9 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
        pMVar13 = (MethodInfo *)__this_03->m_Items[4];
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)((long)puVar24 + -0x100) = 0x4510265;
        bVar9 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pMVar13,(uint)bVar1,(MethodInfo *)0x0);
        cVar7 = (char)bVar9;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar28 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      pTVar14 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar28 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar13 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar24 + -0x100) = 0x45101b2;
        uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar28,(MethodInfo *)0x0);
        pTVar28 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        pTVar14 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar28 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar26 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
          pMVar13 = (MethodInfo *)0x0;
          *(undefined8 *)((long)puVar24 + -0x100) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar28,(MethodInfo *)0x0);
          if ((int)uVar8 <= (int)uVar10) {
            uVar10 = uVar8;
          }
          pSVar19 = (System_Object_array *)(ulong)uVar10;
          pTVar28 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          pTVar14 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar28 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar13 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar24 + -0x100) = 0x45101e5;
            uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar28,(MethodInfo *)0x0);
            pTVar28 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            pTVar14 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar28 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)puVar24 + -0x100) = 0x45101fb;
              uVar33 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar28,(MethodInfo *)0x0);
              if ((int)uVar8 < (int)uVar33) {
                uVar8 = uVar33;
              }
              pTVar26 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
              *(undefined8 *)((long)puVar24 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar10,
                         uVar8,(MethodInfo *)in_RCX);
              if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
                __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar13 = (MethodInfo *)0x0;
              *(undefined8 *)((long)puVar24 + -0x100) = 0x4510228;
              bVar9 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') {
                return;
              }
              if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
                uVar8 = *(int32_t *)((long)__this_03->m_Items + 100);
                if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar8) {
                  return;
                }
              }
              else {
                uVar8 = *(int32_t *)((long)__this_03->m_Items + 100);
              }
              in_RCX = (MethodInfo_24E85B0 **)(ulong)uVar8;
              *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
              *(uint *)((long)__this_03->m_Items + 0x6c) = uVar8;
              *(undefined8 *)((long)puVar24 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar13);
              pTVar28 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
              pTVar14 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar28 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar12 = (System_String_o *)__this_03->m_Items[3];
                *(undefined8 *)((long)puVar24 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar28,(MethodInfo *)0x0);
                *(undefined8 *)((long)puVar24 + -200) = 0;
                *(undefined8 *)((long)puVar24 + -0xc0) = 0;
                *(undefined8 *)((long)puVar24 + -0xd8) = 0;
                *(undefined8 *)((long)puVar24 + -0xd0) = 0;
                *(undefined8 *)((long)puVar24 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)puVar24 + -0xf8),
                           (System_String_o *)((long)puVar24 + -0xd8),(UnityEngine_GameObject_o *)pSVar12,node
                           ,(MethodInfo *)0x0);
                pSVar12 = (System_String_o *)__this_03->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)puVar24 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)puVar24 + -0xe8) = *(undefined8 *)((long)puVar24 + -200);
                *(undefined8 *)((long)puVar24 + -0xe0) = *(undefined8 *)((long)puVar24 + -0xc0);
                *(undefined8 *)((long)puVar24 + -0xf8) = *(undefined8 *)((long)puVar24 + -0xd8);
                *(undefined8 *)((long)puVar24 + -0xf0) = *(undefined8 *)((long)puVar24 + -0xd0);
                *(undefined8 *)((long)puVar24 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)puVar24 + -0xf8),
                           pSVar12,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0x100) = 0x4510318;
    auVar34 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x100) = pTVar26;
    *(System_Object_array **)((long)puVar24 + -0x108) = __this_02;
    *(System_Object_array **)((long)puVar24 + -0x110) = pSVar19;
    *(System_Object_array **)((long)puVar24 + -0x118) = __this_03;
    *(long *)((long)puVar24 + -0x120) = auVar34._0_8_;
    pTVar26 = (TMPro_TMP_InputField_o *)(auVar34._8_8_ & 0xffffffff);
    fVar32 = auVar34._8_4_;
    pUVar27 = (UnityEngine_Sprite_c *)((ulong)pMVar13 & 0xffffffff);
    fVar11 = SUB84(pMVar13,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)puVar24 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pTVar15 = *(TMPro_TMP_InputField_o **)&(pTVar14->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar24 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = (System_String_o *)0x0;
    *(undefined8 *)((long)puVar24 + -0x128) = 0x4510373;
    pTVar28 = pTVar15;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    lVar16 = *(long *)&(pTVar14->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar16 != 0) {
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      if (*(long *)(lVar16 + 0x220) != 0) {
        fVar20 = *(float *)(*(long *)(lVar16 + 0x220) + 0x10);
        fVar21 = fVar11;
        if ((int)fVar20 <= (int)fVar11) {
          fVar21 = fVar20;
        }
        if ((int)fVar11 < 0) {
          fVar21 = 0.0;
        }
        if ((int)fVar32 < (int)fVar20) {
          fVar20 = fVar32;
        }
        if ((int)fVar32 < 0) {
          fVar20 = 0.0;
        }
        if (fVar21 == fVar20) {
          if (*(char *)(lVar16 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(pTVar14->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar20;
        if ((int)fVar21 <= (int)fVar20) {
          fVar11 = fVar21;
        }
        (pTVar14->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar20 <= (int)fVar21) {
          fVar20 = fVar21;
        }
        (pTVar14->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar20;
        return;
      }
    }
    *(undefined8 *)((long)puVar24 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)puVar24 + -0x128) = pTVar15;
    pUVar5 = (pTVar28->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)puVar24 + -0x130) = 0x4510405;
    bVar9 = System_String__op_Equality(pSVar12,(System_String_o *)pUVar5,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pUVar5 = (pTVar28->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)puVar24 + -0x130) = 0x4510414;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)pUVar5,(MethodInfo *)0x0);
    uVar17 = CONCAT44(extraout_var,bVar9);
    if ((char)bVar9 == '\0') {
      pGVar4 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)
                &(pTVar28->fields).m_Colors.fields.m_NormalColor.fields.g;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(byte *)((long)&(pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
        pUVar5 = (pTVar28->fields).m_Navigation.fields.m_SelectOnLeft;
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)((long)puVar24 + -0x130) = 0x451043e;
        bVar9 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pUVar5,(uint)bVar1,(MethodInfo *)0x0);
        uVar17 = CONCAT44(extraout_var_00,bVar9);
        cVar7 = (char)bVar9;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(char *)((long)&(pTVar28->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    uVar23 = *(ulong *)((long)puVar24 + -0x128);
    puVar24 = (undefined8 *)((long)puVar24 + -0x120);
    ppSVar29 = (System_String_o **)ppMVar30;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplySelectedTextColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4507f10

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  UnityEngine_GameObject_o *source;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  TMPro_TMP_InputField_o *__this_00;
  undefined8 extraout_RAX;
  System_String_o *pSVar11;
  TMPro_TMP_InputField_o *pTVar12;
  TMPro_TMP_InputField_o *__this_01;
  undefined8 extraout_RAX_00;
  long lVar13;
  undefined8 uVar14;
  Il2CppObject *pIVar15;
  System_Object_array *call;
  System_Object_array *pSVar16;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar18;
  MethodInfo_24E85B0 **in_RCX;
  float fVar19;
  undefined8 unaff_RBX;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *x;
  int index;
  ulong unaff_RBP;
  ulong uVar20;
  long *plVar21;
  TMPro_TMP_InputField_o *pTVar22;
  MethodInfo *in_RSI;
  MethodInfo *pMVar23;
  System_Object_array *method_00;
  TMPro_TMP_InputField_o *pTVar24;
  System_Object_array *__this_03;
  System_Object_array *__this_04;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar25;
  TMPro_TMP_InputField_o *unaff_R14;
  uint uVar26;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar27 [16];
  undefined8 uStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_28;
  System_String_o *pSStack_20;
  
  pSVar11 = (System_String_o *)&context;
  if (g_data_057aed34 == '\0') {
    pSStack_20 = (System_String_o *)0x4507f2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pSStack_20 = (System_String_o *)0x4507f3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_20 = (System_String_o *)0x4507f47;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_20 = (System_String_o *)0x4507f53;
    il2cpp_runtime_helper_023445d0(&"save");
    pSStack_20 = (System_String_o *)0x4507f5f;
    il2cpp_runtime_helper_023445d0(&"cancel");
    pSStack_20 = (System_String_o *)0x4507f6b;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    pSStack_20 = (System_String_o *)0x4507f77;
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-text-picker");
    g_data_057aed34 = '\x01';
  }
  source = context.fields.GameObject;
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    pSStack_20 = (System_String_o *)0x4507f9a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_String_o *)0x4507fa2;
  __this_00 = (TMPro_TMP_InputField_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_20 = (System_String_o *)0x4507fbd;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_String_o *)0x4507fc9;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar17 = context.fields.Node;
  if ((char)bVar7 != '\0') {
    return;
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_04508022:
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x450803a;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (MethodInfo_24E85B0 **)0x0;
    pSStack_20 = (System_String_o *)0x4508057;
    pTVar22 = "profile-character-set-effects-text-picker";
    pSVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                        ((System_String_o *)"profile-character-set-effects-text-picker","#FFFFFF",0,(MethodInfo *)0x0);
    if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      uVar8 = 1;
    }
    else {
label_0450806c:
      pTVar22 = (TMPro_TMP_InputField_o *)(pGVar17->fields).id;
      pSStack_20 = (System_String_o *)0x4508081;
      uVar8 = System_String__op_Equality((System_String_o *)pTVar22,"save",(MethodInfo *)0x0);
    }
    if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_00,pSVar11,
                 uVar8 & 0xff,(MethodInfo *)in_RCX);
      return;
    }
  }
  else {
    pTVar22 = (TMPro_TMP_InputField_o *)((context.fields.Node)->fields).id;
    pSStack_20 = (System_String_o *)0x4507ff1;
    pMVar23 = "cancel";
    bVar7 = System_String__op_Equality
                      ((System_String_o *)pTVar22,(System_String_o *)"cancel",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSStack_20 = (System_String_o *)0x450801e;
      bVar7 = System_String__IsNullOrEmpty((pGVar17->fields).value,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto label_04508022;
      pSVar11 = (pGVar17->fields).value;
      goto label_0450806c;
    }
    if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
      pSStack_20 = (System_String_o *)0x4508006;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_00,pMVar23);
      uVar14 = extraout_RAX;
      pTVar24 = __this_00;
      pTVar22 = unaff_R14;
      __this_00 = unaff_R15;
      goto Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection;
    }
  }
  pSStack_20 = (System_String_o *)0x450809e;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pGStack_28 = pGVar17;
  register0x00000020 = (BADSPACEBASE *)&uStack_30;
  pSStack_20 = pSVar11;
  if (g_data_057aed41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed41 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar23 = (MethodInfo *)0x0;
  pTVar24 = pTVar22;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
    pMVar23 = (MethodInfo *)0x0;
    pTVar24 = pTVar22;
    pTVar12 = (TMPro_TMP_InputField_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pTVar22,(MethodInfo *)0x0);
    if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
      pMVar23 = (MethodInfo *)0x0;
      __this_01 = (TMPro_TMP_InputField_o *)
                  UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pTVar12,(MethodInfo *)0x0);
      pTVar24 = pTVar12;
      if (__this_01 != (TMPro_TMP_InputField_o *)0x0) {
        in_RCX = &MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil;
        pMVar23 = (MethodInfo *)0x1;
        pSVar16 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)__this_01,1,MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
        pTVar24 = __this_01;
        if (pSVar16 != (System_Object_array *)0x0) {
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar24,pMVar23);
  unaff_RBX = 0;
  uVar14 = extraout_RAX_00;
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection:
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb46;
    bVar7 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    fVar10 = (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r;
    uVar20 = (ulong)(uint)fVar10;
    pTVar12 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if ((int)fVar10 < 0) {
      if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb86;
        uVar8 = TMPro_TMP_InputField__get_caretPosition(pTVar12,(MethodInfo *)0x0);
        pTVar12 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
        if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
          uVar20 = (ulong)uVar8;
          lVar13 = *(long *)&(pTVar12->fields).m_SelectionColor.fields.a;
          if (lVar13 != 0) {
            if (-1 < (int)uVar8) goto label_0450fba1;
            uVar20 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar12 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar13 = *(long *)&(pTVar12->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar13 + 0x10) < (int)uVar20) {
        uVar20 = (ulong)*(uint *)(lVar13 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar12,(int32_t)uVar20,(MethodInfo *)0x0);
      pTVar12 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar12,(int32_t)uVar20,(MethodInfo *)0x0);
        (pTVar24->fields).m_Colors.fields.m_PressedColor.fields.a = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.g = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.b = -NAN;
        lVar13 = *(long *)&(pTVar24->fields).m_Navigation.fields;
        if (lVar13 != 0) {
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          length = *(int32_t *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar13 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x20) = pTVar22;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x28) = pTVar24;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x = *(System_Collections_Generic_List_object__o **)
         &(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc5b;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pTVar22 = *(TMPro_TMP_InputField_o **)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
      fVar10 = (pTVar12->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar22,(int32_t)fVar10,(MethodInfo *)0x0);
      pTVar22 = *(TMPro_TMP_InputField_o **)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar22,(int32_t)(pTVar12->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    pSVar16 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fca1;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x38) = uVar20;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x40) = __this_00;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x48) = pTVar12;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x60) = x;
    *(undefined8 *)((long)register0x00000020 + -0x68) = uVar14;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)pSVar16->m_Items + 0x71) == '\0') {
      return;
    }
    __this_03 = (System_Object_array *)pSVar16->m_Items[1];
    if (__this_03 != (System_Object_array *)0x0) {
      __this_02 = (System_Collections_Generic_List_object__o *)pSVar16->m_Items[0];
      x = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar8 = *(uint *)(pSVar16->m_Items + 0xc);
        uVar20 = (ulong)uVar8;
        uVar9 = (__this_02->fields)._size;
        uVar26 = (int)__this_03->max_length + uVar8;
        if ((int)uVar9 < (int)uVar26) {
          uVar26 = uVar9;
        }
        __this_00 = (TMPro_TMP_InputField_o *)(ulong)uVar26;
        if ((int)uVar8 < (int)uVar26) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar20;
            iVar2 = *(int *)(pSVar16->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd62;
            pIVar15 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,index - iVar2,
                                 MethodInfo_String_get_Item);
            x = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd7c;
            in_RCX = (MethodInfo_24E85B0 **)MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_02,index,pIVar15,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar20 = (ulong)(index + 1U);
            if ((int)uVar26 <= (int)(index + 1U)) goto label_0450fd96;
            __this_02 = (System_Collections_Generic_List_object__o *)pSVar16->m_Items[0];
            __this_03 = (System_Object_array *)pSVar16->m_Items[1];
            x = __this_02;
          } while (__this_03 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x = (System_Collections_Generic_List_object__o *)pSVar16->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdda;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            return;
          }
          pIVar15 = pSVar16->m_Items[9];
          __this_03 = (System_Object_array *)0x0;
          if (pIVar15 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar15->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar15,0,0,pIVar15->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fe21;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x70) = uVar20;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x78) = __this_00;
    *(System_Object_array **)((long)register0x00000020 + -0x80) = pSVar16;
    *(MethodInfo ***)((long)register0x00000020 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x98) = x;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar14;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_03->m_Items[8];
    plVar21 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feff;
    __this_04 = call;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_04510010:
      plVar21 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)__this_03->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510032;
      bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                   (MethodInfo *)pSVar16);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451009e;
        value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100b8;
        System_Action_object____ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
        return;
      }
      pIVar15 = __this_03->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510049;
      pSVar16 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510063;
      method_00 = __this_03;
      __this_04 = pSVar16;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pMVar23 = pIVar15->klass->vtable[0x4f].method;
        vtableDispatch = pIVar15->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar15,pSVar16,pMVar23);
        goto label_0451007e;
      }
    }
    else if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
      pSVar16 = (System_Object_array *)__this_03->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff44;
      method_00 = __this_03;
      __this_04 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (pSVar16 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff62;
        method_00 = call;
        __this_04 = pSVar16;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)pSVar16,(UnityEngine_Events_UnityAction_T0__o *)call
                   ,MethodInfo_Void_RemoveListener);
        if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
          pSVar16 = (System_Object_array *)__this_03->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar21 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo_24E85B0 **)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffa1;
          method_00 = __this_03;
          __this_04 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (pSVar16 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffc0;
            method_00 = call;
            __this_04 = pSVar16;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pSVar16,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
              __this = __this_03->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo_24E85B0 **)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fff1;
              method_00 = __this_03;
              __this_04 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              pSVar16 = (System_Object_array *)0x0;
              if (__this != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0xa8) = plVar21;
    *(System_Object_array **)((long)register0x00000020 + -0xb0) = pSVar16;
    *(System_Object_array **)((long)register0x00000020 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_04->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,
                 (MethodInfo *)method_00);
    }
    pTVar22 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar23 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451015c;
    __this_00 = pTVar22;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_04->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_04->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar11 = (System_String_o *)__this_04->m_Items[4];
      pMVar23 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510189;
      bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_04->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
        pMVar23 = (MethodInfo *)__this_04->m_Items[4];
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510265;
        bVar7 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pMVar23,(uint)bVar1,(MethodInfo *)0x0);
        cVar6 = (char)bVar7;
      }
      else {
        cVar6 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
      }
      if (cVar6 == '\0') {
        return;
      }
      pTVar24 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
      __this_00 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar23 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101b2;
        uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
        pTVar24 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
        __this_00 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar22 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
          pMVar23 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101c8;
          uVar9 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
          if ((int)uVar8 <= (int)uVar9) {
            uVar9 = uVar8;
          }
          pSVar16 = (System_Object_array *)(ulong)uVar9;
          pTVar24 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
          __this_00 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar23 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101e5;
            uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
            pTVar24 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
            __this_00 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101fb;
              uVar26 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
              if ((int)uVar8 < (int)uVar26) {
                uVar8 = uVar26;
              }
              pTVar22 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,uVar9,
                         uVar8,(MethodInfo *)in_RCX);
              if ((*(int *)(__this_04->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_04->m_Items + 100) <= *(int *)(__this_04->m_Items + 0xc))) {
                __this_04->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar23 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510228;
              bVar7 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                return;
              }
              if (*(int *)(__this_04->m_Items + 0xd) == *(int *)(__this_04->m_Items + 0xc)) {
                uVar8 = *(int32_t *)((long)__this_04->m_Items + 100);
                if (*(int32_t *)((long)__this_04->m_Items + 0x6c) == uVar8) {
                  return;
                }
              }
              else {
                uVar8 = *(int32_t *)((long)__this_04->m_Items + 100);
              }
              in_RCX = (MethodInfo_24E85B0 **)(ulong)uVar8;
              *(int *)(__this_04->m_Items + 0xd) = *(int *)(__this_04->m_Items + 0xc);
              *(uint *)((long)__this_04->m_Items + 0x6c) = uVar8;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,pMVar23);
              pTVar24 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
              __this_00 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar11 = (System_String_o *)__this_04->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102b1;
                pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pTVar24,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -200) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),
                           (System_String_o *)((long)register0x00000020 + -0xd8),
                           (UnityEngine_GameObject_o *)pSVar11,pGVar17,(MethodInfo *)0x0);
                pSVar11 = (System_String_o *)__this_04->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xe8) =
                     *(undefined8 *)((long)register0x00000020 + -200);
                *(undefined8 *)((long)register0x00000020 + -0xe0) =
                     *(undefined8 *)((long)register0x00000020 + -0xc0);
                *(undefined8 *)((long)register0x00000020 + -0xf8) =
                     *(undefined8 *)((long)register0x00000020 + -0xd8);
                *(undefined8 *)((long)register0x00000020 + -0xf0) =
                     *(undefined8 *)((long)register0x00000020 + -0xd0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),pSVar11,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510318;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar22;
    *(System_Object_array **)((long)register0x00000020 + -0x108) = __this_03;
    *(System_Object_array **)((long)register0x00000020 + -0x110) = pSVar16;
    *(System_Object_array **)((long)register0x00000020 + -0x118) = __this_04;
    *(long *)((long)register0x00000020 + -0x120) = auVar27._0_8_;
    pTVar22 = (TMPro_TMP_InputField_o *)(auVar27._8_8_ & 0xffffffff);
    fVar25 = auVar27._8_4_;
    unaff_RBP = (ulong)pMVar23 & 0xffffffff;
    fVar10 = SUB84(pMVar23,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pTVar12 = *(TMPro_TMP_InputField_o **)&(__this_00->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510373;
    pTVar24 = pTVar12;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    lVar13 = *(long *)&(__this_00->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar13 != 0) {
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      if (*(long *)(lVar13 + 0x220) != 0) {
        fVar18 = *(float *)(*(long *)(lVar13 + 0x220) + 0x10);
        fVar19 = fVar10;
        if ((int)fVar18 <= (int)fVar10) {
          fVar19 = fVar18;
        }
        if ((int)fVar10 < 0) {
          fVar19 = 0.0;
        }
        if ((int)fVar25 < (int)fVar18) {
          fVar18 = fVar25;
        }
        if ((int)fVar25 < 0) {
          fVar18 = 0.0;
        }
        if (fVar19 == fVar18) {
          if (*(char *)(lVar13 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(__this_00->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar10 = fVar18;
        if ((int)fVar19 <= (int)fVar18) {
          fVar10 = fVar19;
        }
        (__this_00->fields).m_Colors.fields.m_PressedColor.fields.a = fVar10;
        if ((int)fVar18 <= (int)fVar19) {
          fVar18 = fVar19;
        }
        (__this_00->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar18;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x128) = pTVar12;
    pUVar5 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510405;
    bVar7 = System_String__op_Equality(pSVar11,(System_String_o *)pUVar5,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar5 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510414;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pUVar5,(MethodInfo *)0x0);
    uVar14 = CONCAT44(extraout_var,bVar7);
    if ((char)bVar7 == '\0') {
      pGVar4 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)
                &(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.g;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(byte *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
        pUVar5 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x130) = 0x451043e;
        bVar7 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pUVar5,(uint)bVar1,(MethodInfo *)0x0);
        uVar14 = CONCAT44(extraout_var_00,bVar7);
        cVar6 = (char)bVar7;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar6 = *(char *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
joined_r0x04510440:
      if (cVar6 != '\0') {
        return;
      }
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x128);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ImportedColoredText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4508340

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  long lVar5;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  TMPro_TMP_InputField_o *pTVar6;
  uint uVar7;
  bool_conflict bVar8;
  uint uVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar10;
  UnityEngine_Transform_o *pUVar11;
  System_Object_array *pSVar12;
  UnityEngine_Object_o *pUVar13;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_01;
  System_String_array *method_00;
  TMPro_TMP_InputField_o *pTVar14;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar15;
  UnityEngine_Sprite_Fields *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Sprite_o *pUVar18;
  Il2CppObject *pIVar19;
  System_String_o **ppSVar20;
  int32_t *piVar21;
  long lVar22;
  MethodInfo *in_RCX;
  MethodInfo *pMVar23;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_String_o *extraout_RDX_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *unaff_RBX;
  MethodInfo *pMVar24;
  undefined8 *unaff_RBP;
  TMPro_TMP_InputField_o *pTVar25;
  char cVar26;
  UnityEngine_Sprite_c *pUVar27;
  MethodInfo *pMVar28;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_02;
  TMPro_TMP_InputField_o *str0;
  UnityEngine_Object_o *pUVar29;
  System_String_o *pSVar30;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  System_String_o *a;
  intptr_t *piVar31;
  undefined8 *unaff_R12;
  undefined8 *puVar32;
  System_String_o *value;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *unaff_R13;
  UnityEngine_GameObject_o *source_00;
  undefined8 unaff_R14;
  intptr_t iVar33;
  System_Object_array *unaff_R15;
  undefined1 auVar34 [16];
  undefined1 local_28 [8];
  
  if (g_data_057aed35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed35 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
  pUVar18[3].klass = "Color";
  il2cpp_runtime_helper_022b4080(pUVar18 + 3);
  pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
  *(undefined1 *)&pUVar18[3].monitor = 0;
  pUVar18[2].fields.m_CachedPtr = "None";
  il2cpp_runtime_helper_022b4080(&pUVar18[2].fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pUVar27 = (UnityEngine_Sprite_c *)0x0;
  pUVar13 = (UnityEngine_Object_o *)source;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0450844a:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,(MethodInfo *)pUVar27);
    uVar10 = extraout_RAX;
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (root->fields)._codeActions, __this != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
    {
      pTVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar9 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)pTVar14);
      in_RCX = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"profile-character-set-effects.text-colors.enabled",uVar9 & 0xff,
                 (MethodInfo *)0x0);
      uVar10 = extraout_RAX_00;
    }
    pUVar27 = "Color";
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      uVar10 = il2cpp_runtime_helper_02337ed0();
      pUVar27 = "Color";
    }
  }
  else {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      pUVar27 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot;
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_GameObject__GetComponentInParent_object_(source,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      goto label_0450844a;
    }
    uVar10 = il2cpp_runtime_helper_022b2c90();
    unaff_R14 = 0;
    unaff_RBX = root;
    register0x00000020 = (BADSPACEBASE *)local_28;
    source = (UnityEngine_GameObject_o *)pUVar13;
    unaff_R12 = &"Color";
    unaff_R15 = (System_Object_array *)&TypeInfo_AottgCharacterSetEffectsDialog;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
  *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar10;
  if (g_data_057aed42 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x45084f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508502;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450850e;
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-type");
    g_data_057aed42 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450852e;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar28 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450853a;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((UnityEngine_Object_o *)source == (UnityEngine_Object_o *)0x0) {
label_0450865c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508661;
    il2cpp_runtime_helper_022b2c90();
    pSVar12 = unaff_R15;
  }
  else {
    pMVar28 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508555;
    pUVar11 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0450865c;
    pMVar28 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508568;
    pUVar11 = UnityEngine_Transform__get_root(pUVar11,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0450865c;
    in_RCX = (MethodInfo *)&MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo;
    pMVar28 = (MethodInfo *)0x1;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508588;
    pSVar12 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)pUVar11,1,MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo);
    if (pSVar12 == (System_Object_array *)0x0) goto label_0450865c;
    if ((int)pSVar12->max_length < 1) {
      return;
    }
    source = (UnityEngine_GameObject_o *)0x0;
    unaff_RBP = &"profile-character-set-effects-type";
    if ((pSVar12->max_length & 0xffffffff) != 0) {
      do {
        unaff_R13 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar12->m_Items[(long)source];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x45085f2;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar28 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x45085fe;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          unaff_R15 = pSVar12;
          if (unaff_R13 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_0450865c;
          pMVar28 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508611;
          pUVar13 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)unaff_R13,(MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_0450865c;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508620;
          pSVar17 = UnityEngine_Object__get_name(pUVar13,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450862e;
          pMVar28 = "profile-character-set-effects-type";
          bVar8 = System_String__op_Equality(pSVar17,(System_String_o *)"profile-character-set-effects-type",(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -0x30)
            ;
            if ((unaff_R13->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
              return;
            }
            *(undefined8 *)((long)register0x00000020 + -0x10) = 0x3b8a960;
            __this_02 = unaff_R13;
            uVar7 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                              (unaff_R13,(System_String_o *)pUVar27,(MethodInfo *)0x0);
            uVar9 = (uint)pUVar27;
            pGVar3 = (unaff_R13->fields)._options;
            if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
              *(undefined8 *)((long)register0x00000020 + -0x10) = 0x3b8a9af;
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              if ((int)uVar7 < 0) {
                return;
              }
              pGVar4 = (pGVar3->fields)._items;
              if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
              goto label_03b8a9aa;
              uVar1 = (uint)pGVar4->max_length;
              if ((int)uVar1 <= (int)uVar7) {
                return;
              }
              uVar9 = uVar1 - 1;
              if ((int)uVar7 < (int)(uVar1 - 1)) {
                uVar9 = uVar7;
              }
              if (uVar9 < uVar1) {
                if (pGVar4->m_Items[(int)uVar9] !=
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                  if ((char)(pGVar4->m_Items[(int)uVar9]->fields).enabled == '\0') {
                    return;
                  }
                  (unaff_R13->fields)._index = uVar7;
                  Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                            (unaff_R13,(MethodInfo *)(ulong)uVar9);
                  return;
                }
                goto label_03b8a9aa;
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x10) = 0x3b8a9b4;
            uVar10 = il2cpp_runtime_helper_022b2ca0();
            *(undefined8 *)((long)register0x00000020 + -0x10) = uVar10;
            if ((int)uVar9 < 0) {
              return;
            }
            lVar22 = (__this_02->fields).m_CachedPtr;
            if (lVar22 == 0) {
label_03b8a9fb:
              *(undefined8 *)((long)register0x00000020 + -0x18) = 0x3b8aa00;
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              uVar7 = *(uint *)(lVar22 + 0x18);
              if ((int)uVar7 <= (int)uVar9) {
                return;
              }
              if ((int)(uVar7 - 1) <= (int)uVar9) {
                uVar9 = uVar7 - 1;
              }
              if (uVar9 < uVar7) {
                if (*(long *)(lVar22 + 0x20 + (long)(int)uVar9 * 8) != 0) {
                  return;
                }
                goto label_03b8a9fb;
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x18) = 0x3b8aa05;
            uVar10 = il2cpp_runtime_helper_022b2ca0();
            *(undefined8 *)((long)register0x00000020 + -0x18) = uVar10;
            lVar22 = (__this_02->fields).m_CachedPtr;
            if (lVar22 == 0) goto label_03b8aa59;
            uVar9 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar9 < 1) {
              return;
            }
            uVar7 = 0;
            goto label_03b8aa30;
          }
        }
        source = (UnityEngine_GameObject_o *)((long)&((UnityEngine_Object_o *)source)->klass + 1);
        uVar9 = (uint)pSVar12->max_length;
        in_RCX = (MethodInfo *)(long)(int)uVar9;
        if ((long)in_RCX <= (long)source) {
          return;
        }
      } while (source < (UnityEngine_Object_o *)(ulong)uVar9);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4508666;
  uVar10 = il2cpp_runtime_helper_022b2ca0();
  *(undefined8 **)((long)register0x00000020 + -0x40) = unaff_RBP;
  *(System_Object_array **)((long)register0x00000020 + -0x48) = pSVar12;
  *(UnityEngine_Sprite_c **)((long)register0x00000020 + -0x50) = pUVar27;
  *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)((long)register0x00000020 + -0x58) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x60) = &TypeInfo_Object;
  *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x68) = source;
  *(undefined8 *)((long)register0x00000020 + -0x70) = uVar10;
  if (g_data_057aed36 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508695;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45086e9;
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed36 = '\x01';
  }
  source_00 = *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x28);
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450870c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508714;
  __this_01 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source_00,pMVar28);
  pMVar28 = (MethodInfo *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450872f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450873b;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45088e0;
    il2cpp_runtime_helper_02337ed0();
    pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar18[3].monitor + 1) == '\0') goto label_045088f4;
label_04508764:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508772;
      il2cpp_runtime_helper_02337ed0();
      pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    }
    puVar32 = (undefined8 *)(ulong)*(byte *)&pUVar18[3].monitor;
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  else {
    pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar18[3].monitor + 1) != '\0') goto label_04508764;
label_045088f4:
    puVar32 = (undefined8 *)0x0;
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  if (iVar2 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450878f;
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar14 = (TMPro_TMP_InputField_o *)(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite[3].klass;
  if (g_data_057aeced == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45087b2;
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45087be;
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45087d9;
  pMVar23 = "TwoColorGradient";
  bVar8 = System_String__op_Equality
                    ((System_String_o *)pTVar14,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  pTVar25 = (TMPro_TMP_InputField_o *)0x2;
  if ((char)bVar8 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45087f6;
    pMVar23 = "FourColorGradient";
    str0 = pTVar14;
    bVar8 = System_String__op_Equality
                      ((System_String_o *)pTVar14,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    pTVar25 = (TMPro_TMP_InputField_o *)&g_data_00000004;
    if ((char)bVar8 != '\0') goto label_04508803;
    if (__this_01 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      pTVar25 = (TMPro_TMP_InputField_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
      if (g_data_057aed77 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b82;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed77 = '\x01';
      }
      pTVar14 = (__this_01->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b9e;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508baa;
      str0 = pTVar14;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        ppSVar20 = &(__this_01->fields)._lastText;
      }
      else {
        pTVar6 = (__this_01->fields)._input;
        if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) goto label_04508be3;
        ppSVar20 = (System_String_o **)&(pTVar6->fields).m_SelectionColor.fields.a;
      }
      pSVar17 = *ppSVar20;
      method_00 = (System_String_array *)(__this_01->fields)._colors;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508bd2;
      pTVar14 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          (pSVar17,(System_Collections_Generic_IList_string__o *)method_00,method_02);
      goto joined_r0x04508843;
    }
label_04508be3:
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508be8;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
label_04508803:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450881b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508822;
    str0 = pTVar25;
    method_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors
                          ((int32_t)pTVar25,pMVar23);
    if (__this_01 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_04508be3;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508836;
    pTVar14 = (TMPro_TMP_InputField_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                        (__this_01,(System_Collections_Generic_IList_string__o *)method_00,method_01);
joined_r0x04508843:
    if ((int)puVar32 != 0) {
      pTVar25 = (TMPro_TMP_InputField_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450884d;
      str0 = pTVar14;
      pGVar15 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                          ((System_String_o *)pTVar14,(MethodInfo *)method_00);
      if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) goto label_04508be3;
      pTVar14 = (TMPro_TMP_InputField_o *)(pGVar15->fields).Text;
    }
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450886c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = (System_String_o *)
              (((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508893;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45088a1;
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
              (source_00,pSVar17,(System_String_o *)pTVar14,in_RCX);
    pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    pSVar17 = pUVar18[1].monitor;
    if ((int)puVar32 == 0) {
      pTVar14 = (TMPro_TMP_InputField_o *)0x0;
      pUVar16 = (UnityEngine_Sprite_Fields *)&"None";
    }
    else {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45088c9;
        il2cpp_runtime_helper_02337ed0();
        pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      pUVar16 = &pUVar18[2].fields;
      pTVar14 = (TMPro_TMP_InputField_o *)((long)&TypeInfo_AottgChangelogMarkdown + 1);
    }
    pSVar30 = (System_String_o *)pUVar16->m_CachedPtr;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450892d;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450893b;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect(pSVar17,(uint)pTVar14 & 0xff,pSVar30,in_RCX);
    pMVar28 = extraout_RDX;
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508954;
      il2cpp_runtime_helper_02337ed0();
      pMVar28 = extraout_RDX_00;
    }
    pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    pSVar17 = pUVar18[1].monitor;
    pSVar30 = pUVar18[2].monitor;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450896c;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar17,pSVar30,pMVar28);
    pMVar28 = (MethodInfo *)0x0;
    puVar32 = &"-color-";
    __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)&TypeInfo_GisketchUIColorPicker;
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45089c3;
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar25 = (TMPro_TMP_InputField_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
      pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      in_RCX = (MethodInfo *)0x0;
      str0 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar18->klass == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      uVar9 = *(uint *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
      pMVar23 = (MethodInfo *)(ulong)uVar9;
      if ((long)*(int *)&(pUVar18->klass->_1).namespaze <= (long)pMVar28) {
        if (uVar9 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508ac5;
          il2cpp_runtime_helper_02337ed0();
          pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
        }
        pMVar28 = (MethodInfo *)(pUVar18->fields).m_CachedPtr;
        pSVar17 = pUVar18[2].monitor;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508af0;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508afe;
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (source_00,(System_String_o *)pMVar28,pSVar17,pMVar23);
        if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b16;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b1e;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(source_00,pMVar28);
        if (source_00 == (UnityEngine_GameObject_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b35;
        pIVar19 = UnityEngine_GameObject__GetComponentInParent_object_
                            (source_00,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if (pIVar19 == (Il2CppObject *)0x0) {
          return;
        }
        __this_00 = pIVar19[8].monitor;
        if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508b52;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,1,(MethodInfo *)0x0);
        return;
      }
      if (uVar9 == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45089f6;
        il2cpp_runtime_helper_02337ed0();
        pUVar18 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      str0 = pUVar18[1].monitor;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508aa5;
        il2cpp_runtime_helper_02337ed0();
        *(int *)((long)register0x00000020 + -0x6c) = (int)pMVar28;
      }
      else {
        *(int *)((long)register0x00000020 + -0x6c) = (int)pMVar28;
      }
      if (g_data_057aedba == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508a32;
        il2cpp_runtime_helper_023445d0(&"-color-");
        g_data_057aedba = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508a45;
      pSVar17 = System_Int32__ToString
                          ((int32_t)(undefined1 *)((long)register0x00000020 + -0x6c),(MethodInfo *)0x0);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508a56;
      pTVar14 = (TMPro_TMP_InputField_o *)
                System_String__Concat_3af7150((System_String_o *)str0,"-color-",pSVar17,(MethodInfo *)0x0);
      pUVar27 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      if (pUVar27 == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar27->_1).namespaze;
      if (in_RCX <= pMVar28) break;
      pSVar17 = (&(pUVar27->_1).byval_arg.data)[(long)pMVar28];
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508a96;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45089a6;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                ((System_String_o *)pTVar14,pSVar17,1,source_00,(MethodInfo *)0x0);
      pMVar28 = (MethodInfo *)((long)&pMVar28->methodPointer + 1);
      iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4508bed;
  uVar10 = il2cpp_runtime_helper_022b2ca0();
  *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x78) =
       __this_01;
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x80) = pTVar14;
  *(undefined8 *)((long)register0x00000020 + -0x88) = uVar10;
  if (g_data_057aed77 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4508c0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed77 = '\x01';
  }
  pUVar13 = *(UnityEngine_Object_o **)&(str0->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4508c2f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4508c3b;
  pUVar29 = pUVar13;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    piVar21 = &(str0->fields).m_Transition;
label_04508c54:
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
              (*(System_String_o **)piVar21,
               *(System_Collections_Generic_IList_string__o **)&(str0->fields).m_EnableCalled,method_03);
    return;
  }
  lVar22 = *(long *)&(str0->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar22 != 0) {
    piVar21 = (int32_t *)(lVar22 + 0x220);
    goto label_04508c54;
  }
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4508c6c;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)((long)register0x00000020 + -0x90) = pMVar28;
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0x98) = pUVar13;
  *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0xa0) = source_00;
  *(undefined8 **)((long)register0x00000020 + -0xa8) = puVar32;
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xb0) = str0;
  if (g_data_057aed3f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508c90;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508c9c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed3f = '\x01';
  }
  pMVar23 = (MethodInfo *)((ulong)pUVar29 & 0xffffffff);
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508cb4;
  lVar22 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if ((int)pUVar29 < 1) {
    return;
  }
  if (lVar22 == 0) {
    pMVar24 = (MethodInfo *)&TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508d59;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar27 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
    pTVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
    if ((pUVar27 != (UnityEngine_Sprite_c *)0x0) && (*(int *)&(pUVar27->_1).namespaze == 0)) {
label_04508d71:
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508d76;
      pTVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    pMVar28 = (MethodInfo *)((ulong)pUVar29 & 0xffffffff);
    puVar32 = (undefined8 *)(lVar22 + 0x20);
    pMVar24 = (MethodInfo *)0x0;
    source_00 = (UnityEngine_GameObject_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    while( true ) {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508cf2;
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar27 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      pTVar14 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar27 == (UnityEngine_Sprite_c *)0x0) break;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar27->_1).namespaze;
      if ((in_RCX <= pMVar24) || (in_RCX = (MethodInfo *)(ulong)*(uint *)(lVar22 + 0x18), in_RCX <= pMVar24))
      goto label_04508d71;
      pMVar23 = (&(pUVar27->_1).byval_arg.data)[(long)pMVar24];
      *puVar32 = pMVar23;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508d27;
      il2cpp_runtime_helper_022b4080(puVar32);
      pMVar24 = (MethodInfo *)((long)&pMVar24->methodPointer + 1);
      puVar32 = puVar32 + 1;
      if (pMVar28 == pMVar24) {
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4508d7b;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)((long)register0x00000020 + -0xb8) = pMVar28;
  *(long *)((long)register0x00000020 + -0xc0) = lVar22;
  *(MethodInfo **)((long)register0x00000020 + -200) = pMVar24;
  if (g_data_057aed78 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508da0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  pSVar17 = *(System_String_o **)&(pTVar14->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508dc3;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar28 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508dcf;
  pSVar30 = pSVar17;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    piVar21 = &(pTVar14->fields).m_Transition;
label_04508de8:
    pSVar17 = *(System_String_o **)piVar21;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508df3;
    pSVar17 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                        (pSVar17,(System_Collections_Generic_IList_string__o *)pMVar23,method_04);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508dfe;
    pGVar15 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar17,pMVar23);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508e0b;
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar14,pGVar15,0,in_RCX);
    return;
  }
  lVar22 = *(long *)&(pTVar14->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar22 != 0) {
    piVar21 = (int32_t *)(lVar22 + 0x220);
    goto label_04508de8;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4508e19;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0xd0) = uVar10;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x4508e26;
  pGVar15 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar30,pMVar28);
  if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x4508e36;
  il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xd8) = pTVar14;
  *(MethodInfo **)((long)register0x00000020 + -0xe0) = pMVar23;
  *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0xe8) = source_00;
  *(undefined8 **)((long)register0x00000020 + -0xf0) = puVar32;
  *(System_String_o **)((long)register0x00000020 + -0xf8) = pSVar17;
  pMVar23 = pMVar28;
  if (g_data_057aed91 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508e94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508ea0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508eac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX_01 == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar26 = (char)pMVar23;
    value = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508ee9;
    il2cpp_runtime_helper_02337ed0();
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    a = (System_String_o *)0x0;
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX_01 != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar26 = (char)pMVar23;
    value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      a = (System_String_o *)0x0;
      goto label_04508f89;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f15;
  pMVar23 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_03,(Il2CppObject *)pMVar28,(Il2CppObject *)value,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f2d;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = (System_String_o *)0x0;
  cVar26 = '\0';
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f3b;
  a = pSVar30;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04508f60:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f72;
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
              ((UnityEngine_Transform_o *)pSVar17,(System_String_o *)pMVar28,value,pMVar23);
    return;
  }
  if (pSVar30 != (System_String_o *)0x0) {
    cVar26 = '\0';
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f4e;
    a = pSVar30;
    pUVar11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar30,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f5d;
      pSVar17 = (System_String_o *)UnityEngine_Transform__get_root(pUVar11,(MethodInfo *)0x0);
      goto label_04508f60;
    }
  }
label_04508f89:
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4508f8e;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar25;
  *(System_String_o **)((long)register0x00000020 + -0x108) = pSVar30;
  *(MethodInfo **)((long)register0x00000020 + -0x110) = pMVar28;
  *(System_String_o **)((long)register0x00000020 + -0x118) = pSVar17;
  *(long *)((long)register0x00000020 + -0x120) = auVar34._0_8_;
  if (g_data_057aedb4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4508fb4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4508fc0;
    il2cpp_runtime_helper_023445d0(&"None");
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4508fcc;
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4508fe7;
  bVar8 = System_String__op_Equality(a,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4509043;
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar22 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar5 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar22 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar5 = TypeInfo_AottgEditCharacterDialog;
  }
  iVar33 = auVar34._8_8_;
  TypeInfo_AottgEditCharacterDialog = lVar5;
  if ((char)bVar8 == '\0') {
    *(char *)(lVar22 + 10) = cVar26;
    if (cVar26 == '\0') {
      iVar33 = "None";
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4509075;
      il2cpp_runtime_helper_02337ed0(lVar5);
      lVar22 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    piVar31 = (intptr_t *)(lVar22 + 0x18);
  }
  else {
    *(char *)(lVar22 + 9) = cVar26;
    if (cVar26 == '\0') {
      iVar33 = "None";
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450902b;
      il2cpp_runtime_helper_02337ed0(lVar5);
      lVar22 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    piVar31 = (intptr_t *)(lVar22 + 0x10);
  }
  *piVar31 = iVar33;
  il2cpp_runtime_helper_022b4080(piVar31,iVar33);
  return;
label_03b8aa30:
  if (uVar9 <= uVar7) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
label_03b8aa59:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8aa5e;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    return;
  }
  lVar5 = *(long *)(lVar22 + 0x20 + (long)(int)uVar7 * 8);
  __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
  if (lVar5 == 0) goto label_03b8aa59;
  __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)*(byte *)(lVar5 + 0x28);
  uVar7 = uVar7 + 1;
  if ((int)uVar9 <= (int)uVar7) {
    return;
  }
  goto label_03b8aa30;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4508670

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Sprite_c *pUVar2;
  long lVar3;
  bool_conflict bVar4;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *method_00;
  TMPro_TMP_InputField_o *pTVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  UnityEngine_Sprite_Fields *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_Sprite_o *pUVar9;
  Il2CppObject *pIVar10;
  System_String_o **ppSVar11;
  int32_t *piVar12;
  long lVar13;
  UnityEngine_Transform_o *pUVar14;
  MethodInfo *in_RCX;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_String_o *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar17;
  TMPro_TMP_InputField_o *pTVar18;
  char cVar19;
  MethodInfo *in_RSI;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *a;
  undefined8 *puVar20;
  System_String_o *pSVar21;
  undefined8 uVar22;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aed36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed36 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(context.fields.GameObject,in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar9[3].monitor + 1) == '\0') goto label_045088f4;
label_04508764:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    }
    cVar19 = *(char *)&pUVar9[3].monitor;
    iVar1 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  else {
    pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar9[3].monitor + 1) != '\0') goto label_04508764;
label_045088f4:
    cVar19 = '\0';
    iVar1 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar5 = (TMPro_TMP_InputField_o *)(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite[3].klass;
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  pMVar16 = "TwoColorGradient";
  bVar4 = System_String__op_Equality
                    ((System_String_o *)pTVar5,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  pTVar18 = (TMPro_TMP_InputField_o *)0x2;
  if ((char)bVar4 == '\0') {
    pMVar16 = "FourColorGradient";
    bVar4 = System_String__op_Equality
                      ((System_String_o *)pTVar5,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    pTVar18 = (TMPro_TMP_InputField_o *)&g_data_00000004;
    if ((char)bVar4 != '\0') goto label_04508803;
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      if (g_data_057aed77 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed77 = '\x01';
      }
      pTVar5 = (__this->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        ppSVar11 = &(__this->fields)._lastText;
      }
      else {
        pTVar18 = (__this->fields)._input;
        if (pTVar18 == (TMPro_TMP_InputField_o *)0x0) goto label_04508be3;
        ppSVar11 = (System_String_o **)&(pTVar18->fields).m_SelectionColor.fields.a;
      }
      method_00 = (System_String_array *)(__this->fields)._colors;
      pTVar5 = (TMPro_TMP_InputField_o *)
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (*ppSVar11,(System_Collections_Generic_IList_string__o *)method_00,method_02);
      goto joined_r0x04508843;
    }
label_04508be3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
label_04508803:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors
                          ((int32_t)pTVar18,pMVar16);
    pTVar5 = pTVar18;
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_04508be3;
    pTVar5 = (TMPro_TMP_InputField_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                       (__this,(System_Collections_Generic_IList_string__o *)method_00,method_01);
joined_r0x04508843:
    if (cVar19 != '\0') {
      pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((System_String_o *)pTVar5,(MethodInfo *)method_00);
      if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) goto label_04508be3;
      pTVar5 = (TMPro_TMP_InputField_o *)(pGVar6->fields).Text;
    }
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)
             (((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
              (context.fields.GameObject,pSVar8,(System_String_o *)pTVar5,in_RCX);
    pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    pSVar8 = pUVar9[1].monitor;
    if (cVar19 == '\0') {
      uVar17 = 0;
      pUVar7 = (UnityEngine_Sprite_Fields *)&"None";
    }
    else {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      pUVar7 = &pUVar9[2].fields;
      uVar17 = 0x5576901;
    }
    pSVar21 = (System_String_o *)pUVar7->m_CachedPtr;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect(pSVar8,uVar17 & 0xff,pSVar21,in_RCX);
    pMVar16 = extraout_RDX;
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar16 = extraout_RDX_00;
    }
    pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pUVar9[1].monitor,pUVar9[2].monitor,pMVar16);
    pMVar16 = (MethodInfo *)0x0;
    iVar1 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      in_RCX = (MethodInfo *)0x0;
      pTVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar9->klass == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      uVar17 = *(uint *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
      pMVar15 = (MethodInfo *)(ulong)uVar17;
      if ((long)*(int *)&(pUVar9->klass->_1).namespaze <= (long)pMVar16) {
        if (uVar17 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
        }
        pMVar16 = (MethodInfo *)(pUVar9->fields).m_CachedPtr;
        pSVar8 = pUVar9[2].monitor;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (context.fields.GameObject,(System_String_o *)pMVar16,pSVar8,pMVar15);
        if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,pMVar16);
        if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
          return;
        }
        pIVar10 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
        ;
        if (pIVar10 == (Il2CppObject *)0x0) {
          return;
        }
        if (pIVar10[8].monitor == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pIVar10[8].monitor,1,(MethodInfo *)0x0);
        return;
      }
      if (uVar17 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar9 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      pTVar5 = pUVar9[1].monitor;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      else {
      }
      uStack_38 = CONCAT44((int)pMVar16,(undefined4)uStack_38);
      if (g_data_057aedba == '\0') {
        il2cpp_runtime_helper_023445d0(&"-color-");
        g_data_057aedba = '\x01';
      }
      pSVar8 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
      in_RCX = (MethodInfo *)0x0;
      pSVar8 = System_String__Concat_3af7150((System_String_o *)pTVar5,"-color-",pSVar8,(MethodInfo *)0x0);
      pUVar2 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      if (pUVar2 == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar2->_1).namespaze;
      if (in_RCX <= pMVar16) break;
      pSVar21 = (&(pUVar2->_1).byval_arg.data)[(long)pMVar16];
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                (pSVar8,pSVar21,1,context.fields.GameObject,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)((long)&pMVar16->methodPointer + 1);
      iVar1 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed77 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pTVar5->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    piVar12 = &(pTVar5->fields).m_Transition;
label_04508c54:
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
              (*(System_String_o **)piVar12,
               *(System_Collections_Generic_IList_string__o **)&(pTVar5->fields).m_EnableCalled,method_03);
    return;
  }
  lVar13 = *(long *)&(pTVar5->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar13 != 0) {
    piVar12 = (int32_t *)(lVar13 + 0x220);
    goto label_04508c54;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed3f = '\x01';
  }
  pMVar16 = (MethodInfo *)((ulong)x & 0xffffffff);
  lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if ((int)x < 1) {
    return;
  }
  if (lVar13 == 0) {
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar2 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
    pTVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
    if ((pUVar2 != (UnityEngine_Sprite_c *)0x0) && (*(int *)&(pUVar2->_1).namespaze == 0)) {
label_04508d71:
      pTVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    puVar20 = (undefined8 *)(lVar13 + 0x20);
    pMVar15 = (MethodInfo *)0x0;
    while( true ) {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar2 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      pTVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar2 == (UnityEngine_Sprite_c *)0x0) break;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar2->_1).namespaze;
      if ((in_RCX <= pMVar15) || (in_RCX = (MethodInfo *)(ulong)*(uint *)(lVar13 + 0x18), in_RCX <= pMVar15))
      goto label_04508d71;
      pMVar16 = (&(pUVar2->_1).byval_arg.data)[(long)pMVar15];
      *puVar20 = pMVar16;
      il2cpp_runtime_helper_022b4080(puVar20);
      pMVar15 = (MethodInfo *)((long)&pMVar15->methodPointer + 1);
      puVar20 = puVar20 + 1;
      if ((MethodInfo *)((ulong)x & 0xffffffff) == pMVar15) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  pSVar8 = *(System_String_o **)&(pTVar5->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    piVar12 = &(pTVar5->fields).m_Transition;
label_04508de8:
    pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                       (*(System_String_o **)piVar12,(System_Collections_Generic_IList_string__o *)pMVar16,
                        method_04);
    pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar8,pMVar16);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar5,pGVar6,0,in_RCX);
    return;
  }
  lVar13 = *(long *)&(pTVar5->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar13 != 0) {
    piVar12 = (int32_t *)(lVar13 + 0x220);
    goto label_04508de8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar8,pMVar15);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX_01 == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar19 = (char)pMVar16;
    pSVar21 = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    a = (System_String_o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX_01 != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar19 = (char)pMVar16;
    pSVar21 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      a = (System_String_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar16 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)pMVar15,(Il2CppObject *)pSVar21,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = (UnityEngine_Transform_o *)0x0;
  cVar19 = '\0';
  a = pSVar8;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04508f60:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
              (pUVar14,(System_String_o *)pMVar15,pSVar21,pMVar16);
    return;
  }
  if (pSVar8 != (System_String_o *)0x0) {
    cVar19 = '\0';
    pUVar14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
    a = pSVar8;
    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
      pUVar14 = UnityEngine_Transform__get_root(pUVar14,(MethodInfo *)0x0);
      goto label_04508f60;
    }
  }
label_04508f89:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  bVar4 = System_String__op_Equality(a,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar3 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar3 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar3;
  if ((char)bVar4 == '\0') {
    *(char *)(lVar13 + 10) = cVar19;
    uVar22 = extraout_RDX_02;
    if (cVar19 == '\0') {
      uVar22 = "None";
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar3);
      lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar20 = (undefined8 *)(lVar13 + 0x18);
  }
  else {
    *(char *)(lVar13 + 9) = cVar19;
    uVar22 = extraout_RDX_02;
    if (cVar19 == '\0') {
      uVar22 = "None";
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar3);
      lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar20 = (undefined8 *)(lVar13 + 0x10);
  }
  *puVar20 = uVar22;
  il2cpp_runtime_helper_022b4080(puVar20,uVar22);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled (const MethodInfo* method);
// 0x4505ce0

bool_conflict Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  long lVar4;
  
  if (g_data_057aed37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aed37 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x52);
  }
  else {
    lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x52);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      cVar1 = *(char *)(lVar4 + 0x50);
    }
    else {
      cVar1 = *(char *)(lVar4 + 0x50);
    }
    if (cVar1 == '\0') {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      }
      bVar3 = System_String__op_Equality(*(System_String_o **)(lVar4 + 0x48),"Color",(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorPanelVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible (const MethodInfo* method);
// 0x45069e0

bool_conflict Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *a;
  uint uVar3;
  bool_conflict bVar4;
  ulong uVar5;
  
  if (g_data_057aed38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed38 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar5 = *(ulong *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(uVar5 + 0x50);
  }
  else {
    uVar5 = *(ulong *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(uVar5 + 0x50);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
    }
    else {
      a = *(System_String_o **)(uVar5 + 0x48);
    }
    if (g_data_057aeced == '\0') {
      il2cpp_runtime_helper_023445d0(&"FourColorGradient");
      il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
      g_data_057aeced = '\x01';
    }
    uVar3 = System_String__op_Equality(a,"TwoColorGradient",(MethodInfo *)0x0);
    uVar5 = (ulong)uVar3;
    if ((char)uVar3 == '\0') {
      bVar4 = System_String__op_Equality(a,"FourColorGradient",(MethodInfo *)0x0);
      return bVar4;
    }
  }
  return (bool_conflict)CONCAT71((int7)(uVar5 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorHelpVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible (const MethodInfo* method);
// 0x4506980

bool_conflict Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (g_data_057aed39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed39 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    method_00 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    method_00 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_AottgCharacterSetEffectsDialog = method_00;
  if (iVar1 != 0) {
    bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(method_00);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(method_00);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible (int32_t index, const MethodInfo* method);
// 0x45090a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(int32_t index,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  uint uVar2;
  undefined7 uVar3;
  int iVar4;
  
  if (g_data_057aed3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed3a = '\x01';
    iVar4 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  else {
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"TwoColorGradient",(MethodInfo *)0x0);
  iVar4 = 2;
  if ((char)bVar1 == '\0') {
    uVar2 = System_String__op_Equality(a,"FourColorGradient",(MethodInfo *)0x0);
    iVar4 = (uVar2 & 0xff) << 2;
  }
  uVar3 = (undefined7)((ulong)*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) >> 8);
  if (*(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x50) == '\0') {
    return (bool_conflict)CONCAT71(uVar3,index < iVar4 && iVar4 != 0);
  }
  return (bool_conflict)CONCAT71(uVar3,1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetColorVisibility
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x4505a80

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar3;
  bool_conflict bVar4;
  uint uVar5;
  undefined8 in_RAX;
  MethodInfo *pMVar6;
  System_String_o *key;
  Il2CppMethodPointer pIVar7;
  int index;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aed3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.effect-colors.visible");
    g_data_057aed3b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar3 = (root->fields)._codeActions;
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return;
    }
    pMVar6 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(pMVar6);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"profile-character-set-effects.effect-colors.visible",uVar5 & 0xff,(MethodInfo *)0x0
              );
    pGVar3 = (root->fields)._codeActions;
    if (g_data_057aed39 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
      g_data_057aed39 = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      pMVar6 = TypeInfo_AottgCharacterSetEffectsDialog;
    }
    else {
      iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      pMVar6 = TypeInfo_AottgCharacterSetEffectsDialog;
    }
    TypeInfo_AottgCharacterSetEffectsDialog = pMVar6;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar6);
    }
    else {
      uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar6);
    }
    if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      index = 0;
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,"profile-character-set-effects.text-color-help.visible",uVar5 & 0xff,
                 (MethodInfo *)0x0);
      iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      while( true ) {
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer == 0) break;
        if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x18) <= index) {
          return;
        }
        pGVar3 = (root->fields)._codeActions;
        if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        else {
        }
        uStack_38 = CONCAT44(index,(undefined4)uStack_38);
        if (g_data_057aed44 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.draft-color-");
          il2cpp_runtime_helper_023445d0(&".visible");
          g_data_057aed44 = '\x01';
        }
        pMVar6 = (MethodInfo *)System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
        key = System_String__Concat_3af7150
                        ("profile-character-set-effects.draft-color-",(System_String_o *)pMVar6,".visible",(MethodInfo *)0x0);
        uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(index,pMVar6);
        if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) break;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3,key,uVar5 & 0xff,(MethodInfo *)0x0);
        index = index + 1;
        iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aed37 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    cVar1 = pIVar7[0x52];
  }
  else {
    pIVar7 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    cVar1 = pIVar7[0x52];
  }
  if (cVar1 != (code)0x0) {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar7 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
      cVar1 = pIVar7[0x50];
    }
    else {
      cVar1 = pIVar7[0x50];
    }
    if (cVar1 == (code)0x0) {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar7 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
      }
      System_String__op_Equality(*(System_String_o **)(pIVar7 + 0x48),"Color",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyGradientPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4507870

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_String_o *font;
  bool_conflict bVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *stops;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  int32_t count;
  UnityEngine_GameObject_o *unaff_R14;
  long unaff_R15;
  
  if (g_data_057aed3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed3c = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  else {
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  pMVar8 = "TwoColorGradient";
  bVar4 = System_String__op_Equality(pSVar7,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  count = 2;
  if ((char)bVar4 == '\0') {
    pMVar8 = "FourColorGradient";
    uVar5 = System_String__op_Equality(pSVar7,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    count = (uVar5 & 0xff) << 2;
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (count == 0) {
      if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar8);
        (__this->fields)._pendingImportColor = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingImportColor,0);
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      stops = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar8);
      if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
                  (__this,(System_Collections_Generic_IList_string__o *)stops,method_00);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aed30 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
      il2cpp_runtime_helper_023445d0(&"Normal");
      g_data_057aed30 = '\x01';
    }
    if (unaff_R15 == 0) {
      puVar6 = &"Normal";
    }
    else {
      puVar6 = (undefined8 *)(unaff_R15 + 0x50);
    }
    pSVar7 = (System_String_o *)*puVar6;
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51);
    }
    else {
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51);
    }
    if (cVar1 == '\0') {
      iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
      pSVar7 = "Normal";
    }
    else {
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = PatreonEffects_NameFontCatalog__Normalize(pSVar7,(MethodInfo *)0x0);
      iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    *(System_String_o **)(lVar3 + 0x38) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar7);
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
    font = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38);
    pMVar8 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar7,font,pMVar8);
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
              (unaff_R14,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38),method_01);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4507780

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Collections_Generic_IList_string__o *colors;
  long lVar3;
  System_String_o *font;
  bool_conflict bVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGVar6;
  System_String_array *stops;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  int32_t count;
  UnityEngine_GameObject_o *source_00;
  long unaff_R15;
  
  if (g_data_057aed3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed3d = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    puVar7 = (undefined8 *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr;
    colors = (System_Collections_Generic_IList_string__o *)*puVar7;
    pMVar9 = (MethodInfo *)puVar7[8];
    (pGVar6->fields)._pendingImportColor = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields)._pendingImportColor,0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
              (pGVar6,(System_String_o *)pMVar9,colors,in_RCX);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview(pGVar6,pMVar9);
    return;
  }
  source_00 = TypeInfo_AottgCharacterSetEffectsDialog;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed3c = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr + 0x48);
  }
  else {
    pSVar8 = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr + 0x48);
  }
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  pMVar9 = "TwoColorGradient";
  bVar4 = System_String__op_Equality(pSVar8,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  count = 2;
  if ((char)bVar4 == '\0') {
    pMVar9 = "FourColorGradient";
    uVar5 = System_String__op_Equality(pSVar8,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    count = (uVar5 & 0xff) << 2;
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source_00,pMVar9);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (count == 0) {
      if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(pGVar6,pMVar9);
        (pGVar6->fields)._pendingImportColor = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields)._pendingImportColor,0);
        return;
      }
    }
    else {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      stops = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar9);
      if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
                  (pGVar6,(System_Collections_Generic_IList_string__o *)stops,method_00);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aed30 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
      il2cpp_runtime_helper_023445d0(&"Normal");
      g_data_057aed30 = '\x01';
    }
    if (unaff_R15 == 0) {
      puVar7 = &"Normal";
    }
    else {
      puVar7 = (undefined8 *)(unaff_R15 + 0x50);
    }
    pSVar8 = (System_String_o *)*puVar7;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr + 0x51);
    }
    else {
      cVar1 = *(char *)(TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr + 0x51);
    }
    if (cVar1 == '\0') {
      iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
      pSVar8 = "Normal";
    }
    else {
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = PatreonEffects_NameFontCatalog__Normalize(pSVar8,(MethodInfo *)0x0);
      iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr;
    *(System_String_o **)(lVar3 + 0x38) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar8);
    lVar3 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr;
    pSVar8 = *(System_String_o **)(lVar3 + 0x20);
    font = *(System_String_o **)(lVar3 + 0x38);
    pMVar9 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar8,font,pMVar9);
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
              ((UnityEngine_GameObject_o *)&TypeInfo_AottgCharacterSetEffectsDialog,
               *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[7].fields.m_CachedPtr + 0x38),method_01);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyFontPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview (UnityEngine_GameObject_o* source, System_String_o* font, const MethodInfo* method);
// 0x4506da0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
               (UnityEngine_GameObject_o *source,System_String_o *font,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  Il2CppObject *pIVar6;
  System_String_array *pSVar7;
  long lVar8;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_01;
  System_String_Fields SVar9;
  System_String_o *pSVar10;
  System_String_o *id;
  int iVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  byte bVar13;
  ulong uVar14;
  UnityEngine_Object_o *source_00;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  System_String_array *unaff_R13;
  UnityEngine_Object_o *unaff_R15;
  undefined8 *puVar18;
  long unaff_retaddr;
  undefined8 uStack_b0;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_a8;
  UnityEngine_GameObject_o *pUStack_a0;
  System_String_array *pSStack_98;
  undefined8 *puStack_88;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_80;
  undefined8 uStack_78;
  System_String_o *pSStack_70;
  
  if (g_data_057aed3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed3e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = *(MethodInfo **)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x10);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont(source,(System_String_o *)pMVar12,font,in_RCX);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar12);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04506e7a:
    if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(source,pMVar12);
    return;
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont(__this,font,method_02);
    pMVar12 = (MethodInfo *)font;
    goto label_04506e7a;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed2f = '\x01';
  }
  pSVar15 = "Color";
  if (unaff_retaddr != 0) {
    pSVar15 = *(System_String_o **)(unaff_retaddr + 0x50);
  }
  if (g_data_057aecec == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecec = '\x01';
  }
  bVar3 = System_String__op_Equality(pSVar15,"Color",(MethodInfo *)0x0);
  if ((((char)bVar3 == '\0') &&
      (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0),
      (char)bVar3 == '\0')) &&
     (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
     (char)bVar3 == '\0')) {
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    pSVar16 = "Color";
  }
  else {
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    pSVar16 = pSVar15;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar18 = &TypeInfo_AottgCharacterSetEffectsDialog;
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  *(System_String_o **)((long)SVar9 + 0x48) = pSVar16;
  il2cpp_runtime_helper_022b4080((long)SVar9 + 0x48,pSVar16);
  if (*(char *)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x51) == '\0') {
    bVar13 = 0;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  else {
    if (g_data_057aecec == '\0') {
      il2cpp_runtime_helper_023445d0(&"FourColorGradient");
      il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
      il2cpp_runtime_helper_023445d0(&"Color");
      g_data_057aecec = '\x01';
    }
    bVar3 = System_String__op_Equality(pSVar15,"Color",(MethodInfo *)0x0);
    bVar13 = 1;
    if (((char)bVar3 == '\0') &&
       (bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      bVar3 = System_String__op_Equality(pSVar15,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
      bVar13 = (byte)bVar3;
    }
    bVar13 = bVar13 ^ 1;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  *(byte *)((long)SVar9 + 0x50) = bVar13;
  pSVar10 = "None";
  if (bVar13 != 0) {
    pSVar10 = pSVar15;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  }
  *(System_String_o **)((long)SVar9 + 0x40) = pSVar10;
  il2cpp_runtime_helper_022b4080((long)SVar9 + 0x40,pSVar10);
  SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
  if (*(char *)((long)SVar9 + 0x50) == '\0') {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar16 = *(System_String_o **)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x48);
    }
    else {
      pSVar16 = *(System_String_o **)((long)SVar9 + 0x48);
    }
    if (g_data_057aeced == '\0') {
      il2cpp_runtime_helper_023445d0(&"FourColorGradient");
      il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
      g_data_057aeced = '\x01';
    }
    pMVar12 = "TwoColorGradient";
    bVar3 = System_String__op_Equality(pSVar16,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
    if (((char)bVar3 == '\0') &&
       (pMVar12 = "FourColorGradient",
       bVar3 = System_String__op_Equality(pSVar16,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      iVar11 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
                ((UnityEngine_GameObject_o *)unaff_R15,pMVar12);
      iVar11 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else {
    pMVar12 = extraout_RDX;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      pMVar12 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
              ((UnityEngine_GameObject_o *)unaff_R15,*(System_String_o **)((long)SVar9 + 0x40),pMVar12);
    iVar11 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  source_00 = unaff_R15;
  bVar3 = UnityEngine_Object__op_Inequality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_0450714f:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(pGVar5,(MethodInfo *)method_01);
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)pGVar5);
    pGVar5 = "profile-character-set-effects.text-colors.enabled";
    if (g_data_057aed40 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      g_data_057aed40 = '\x01';
    }
    if (((unaff_R15 != (UnityEngine_Object_o *)0x0) &&
        (method_01 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot,
        pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                           ((UnityEngine_GameObject_o *)unaff_R15,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
        pIVar6 != (Il2CppObject *)0x0)) &&
       (pIVar6[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pIVar6[6].monitor,(System_String_o *)pGVar5,uVar4 & 0xff,(MethodInfo *)0x0);
      method_01 = pGVar5;
    }
    cVar1 = *(char *)((long)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x50);
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (cVar1 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
                ((UnityEngine_GameObject_o *)unaff_R15,(MethodInfo *)method_01);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
              ((UnityEngine_GameObject_o *)unaff_R15,(MethodInfo *)method_01);
    return;
  }
  if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
    method_01 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot;
    pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)unaff_R15,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    goto label_0450714f;
  }
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  method_00 = method_01;
  pSStack_70 = pSVar16;
  if (g_data_057aed31 == '\0') {
    pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507396;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed31 = '\x01';
  }
  pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073b1;
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
                     ((System_String_o *)method_01,(MethodInfo *)method_00);
  if (pSVar7 == (System_String_array *)0x0) {
    method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507526;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = (UnityEngine_GameObject_o *)0x0;
    pSVar15 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields == 0) goto label_04507560;
    if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields + 0x18) < 1) {
      return;
    }
  }
  else {
    puVar18 = (undefined8 *)0x0;
    pUVar17 = (UnityEngine_GameObject_o *)&TypeInfo_AottgCharacterSetEffectsDialog;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    while( true ) {
      if (iVar11 == 0) {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450740c;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      pSVar15 = TypeInfo_AottgCharacterSetEffectsDialog;
      unaff_R13 = pSVar7;
      if (lVar8 == 0) goto label_04507560;
      if ((long)*(int *)(lVar8 + 0x18) <= (long)puVar18) {
        return;
      }
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450743e;
        il2cpp_runtime_helper_02337ed0();
        lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      }
      if ((undefined8 *)(ulong)(uint)pSVar7->max_length <= puVar18) break;
      if (lVar8 == 0) goto label_04507560;
      if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar18) break;
      *(System_String_o **)(lVar8 + 0x20 + (long)puVar18 * 8) = pSVar7->m_Items[(long)puVar18];
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507485;
      il2cpp_runtime_helper_022b4080(lVar8 + (long)puVar18 * 8 + 0x20);
      uStack_78 = CONCAT44((int)puVar18,(undefined4)uStack_78);
      if (g_data_057aed43 == '\0') {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x450749f;
        il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
        g_data_057aed43 = '\x01';
      }
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45074b2;
      method_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  System_Int32__ToString((int)&uStack_78 + 4,(MethodInfo *)0x0);
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45074c6;
      pSVar15 = "profile-character-set-effects-draft-color-";
      method_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",(System_String_o *)method_00,(MethodInfo *)0x0);
      lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
      if (lVar8 == 0) goto label_04507560;
      if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar18) break;
      pGVar5 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(lVar8 + 0x20 + (long)puVar18 * 8);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507509;
        il2cpp_runtime_helper_02337ed0();
      }
      pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x45073f6;
      method_00 = pGVar5;
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                ((System_String_o *)method_01,(System_String_o *)pGVar5,1,
                 (UnityEngine_GameObject_o *)source_00,(MethodInfo *)0x0);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
    }
    pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507552;
    il2cpp_runtime_helper_022b2ca0();
  }
  if (*(int *)((long)&pSVar15[9].monitor + 4) == 0) {
    pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507560;
    il2cpp_runtime_helper_02337ed0();
  }
label_04507560:
  pGStack_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x4507565;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pGStack_a8 = method_01;
  pUStack_a0 = pUVar17;
  pSStack_98 = unaff_R13;
  puStack_88 = puVar18;
  pGStack_80 = pGVar5;
  if (g_data_057aed32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057aed32 = '\x01';
  }
  uVar14 = 0;
  iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  while( true ) {
    uVar4 = (uint)method_00;
    if (iVar11 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    pSVar16 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(long *)SVar9 == 0) break;
    if ((long)*(int *)(*(long *)SVar9 + 0x18) <= (long)uVar14) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      SVar9 = TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    }
    lVar8 = *(long *)((long)SVar9 + 8);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto label_0450770a;
    lVar2 = *(long *)SVar9;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar14) goto label_0450770a;
    *(undefined8 *)(lVar2 + 0x20 + uVar14 * 8) = *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8);
    il2cpp_runtime_helper_022b4080(lVar2 + uVar14 * 8 + 0x20);
    uStack_b0 = CONCAT44((int)uVar14,(undefined4)uStack_b0);
    if (g_data_057aed43 == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pSVar10 = System_Int32__ToString((int)&uStack_b0 + 4,(MethodInfo *)0x0);
    pSVar16 = "profile-character-set-effects-draft-color-";
    id = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar10,(MethodInfo *)0x0);
    uVar4 = (uint)pSVar10;
    lVar8 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[7].fields;
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto label_0450770a;
    method_00 = *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(lVar8 + 0x20 + uVar14 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (id,(System_String_o *)method_00,1,(UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
    uVar14 = uVar14 + 1;
    iVar11 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_0450770a:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed40 = '\x01';
  }
  if (((pUStack_a0 != (UnityEngine_GameObject_o *)0x0) &&
      (pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                          (pUStack_a0,(MethodInfo_255A5C0 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar6 != (Il2CppObject *)0x0)) &&
     (pIVar6[6].monitor != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pIVar6[6].monitor,pSVar16,uVar4 & 0xff,(MethodInfo *)0x0)
    ;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$GradientColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors (int32_t count, const MethodInfo* method);
// 0x4508c70

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(int32_t count,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o **ppSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_array *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *pMVar9;
  char cVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  TMPro_TMP_InputField_o *serialized;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  TMPro_TMP_InputField_o *pTVar11;
  undefined8 *puVar12;
  long lVar13;
  System_String_o *value;
  undefined8 uVar14;
  
  if (g_data_057aed3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed3f = '\x01';
  }
  pMVar8 = (MethodInfo *)(ulong)(uint)count;
  pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (count < 1) {
    return pSVar4;
  }
  if (pSVar4 == (System_String_array *)0x0) {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar1 = (((TypeInfo_AottgCharacterSetEffectsDialog->fields)._previewEffectColors)->obj).klass;
    __this = TypeInfo_AottgCharacterSetEffectsDialog;
    if ((pIVar1 != (Il2CppClass *)0x0) && (*(int *)&(pIVar1->_1).namespaze == 0)) {
label_04508d71:
      __this = TypeInfo_AottgCharacterSetEffectsDialog;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    ppSVar5 = pSVar4->m_Items;
    pMVar9 = (MethodInfo *)0x0;
    while( true ) {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[1].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar1 = (((TypeInfo_AottgCharacterSetEffectsDialog->fields)._previewEffectColors)->obj).klass;
      __this = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pIVar1 == (Il2CppClass *)0x0) break;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pIVar1->_1).namespaze;
      if ((in_RCX <= pMVar9) || (in_RCX = (MethodInfo *)(ulong)(uint)pSVar4->max_length, in_RCX <= pMVar9))
      goto label_04508d71;
      pMVar8 = (&(pIVar1->_1).byval_arg.data)[(long)pMVar9];
      *ppSVar5 = (System_String_o *)pMVar8;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      pMVar9 = (MethodInfo *)((long)&pMVar9->methodPointer + 1);
      ppSVar5 = ppSVar5 + 1;
      if ((MethodInfo *)(ulong)(uint)count == pMVar9) {
        return pSVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  serialized = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)serialized,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    ppSVar5 = &(__this->fields)._lastText;
label_04508de8:
    pSVar4 = (System_String_array *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                       (*ppSVar5,(System_Collections_Generic_IList_string__o *)pMVar8,method_00);
    pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((System_String_o *)pSVar4,pMVar8);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,pGVar6,0,in_RCX);
    return pSVar4;
  }
  pTVar11 = (__this->fields)._input;
  if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
    ppSVar5 = (System_String_o **)&(pTVar11->fields).m_SelectionColor.fields.a;
    goto label_04508de8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((System_String_o *)serialized,pMVar9);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (System_String_array *)(pGVar6->fields).Text;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar9;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar10 = (char)pMVar8;
    value = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    pTVar11 = (TMPro_TMP_InputField_o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar10 = (char)pMVar8;
    value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pTVar11 = (TMPro_TMP_InputField_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar8 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)pMVar9,(Il2CppObject *)value,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  cVar10 = '\0';
  pTVar11 = serialized;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)serialized,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04508f60:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
              (pUVar7,(System_String_o *)pMVar9,value,pMVar8);
    return extraout_RAX;
  }
  if (serialized != (TMPro_TMP_InputField_o *)0x0) {
    cVar10 = '\0';
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)serialized,(MethodInfo *)0x0);
    pTVar11 = serialized;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
      goto label_04508f60;
    }
  }
label_04508f89:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pTVar11,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar2;
  if ((char)bVar3 == '\0') {
    *(char *)(lVar13 + 10) = cVar10;
    uVar14 = extraout_RDX_00;
    if (cVar10 == '\0') {
      uVar14 = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar12 = (undefined8 *)(lVar13 + 0x18);
  }
  else {
    *(char *)(lVar13 + 9) = cVar10;
    uVar14 = extraout_RDX_00;
    if (cVar10 == '\0') {
      uVar14 = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar13 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar12 = (undefined8 *)(lVar13 + 0x10);
  }
  *puVar12 = uVar14;
  pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b4080(puVar12,uVar14);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x4507710

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,
               bool_conflict value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057aed40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    g_data_057aed40 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x45080a0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  int32_t length;
  int iVar3;
  System_Array_o *array;
  TMPro_TMP_InputField_o *pTVar4;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar5;
  System_String_o *b;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  uint uVar9;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGVar11;
  System_Object_array *pSVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX;
  undefined4 extraout_var;
  long lVar13;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX_00;
  undefined8 uVar14;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGVar15;
  Il2CppObject *pIVar16;
  undefined4 extraout_var_01;
  System_Object_array *call;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX_02;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX_03;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *extraout_RAX_04;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  float fVar17;
  MethodInfo_24E85B0 **in_RCX;
  float fVar18;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *x_00;
  undefined1 *puVar19;
  int index;
  float fVar20;
  ulong unaff_RBP;
  ulong uVar21;
  long *plVar22;
  TMPro_TMP_InputField_o *pTVar23;
  MethodInfo *pMVar24;
  System_Object_array *method_00;
  System_String_o *pSVar25;
  System_Object_array *__this_01;
  System_Object_array *__this_02;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar26;
  uint uVar27;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar28 [16];
  undefined1 auStack_18 [8];
  
  puVar19 = auStack_18;
  if (g_data_057aed41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed41 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar24 = (MethodInfo *)0x0;
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)source;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  if (source != (UnityEngine_GameObject_o *)0x0) {
    pMVar24 = (MethodInfo *)0x0;
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)source;
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
              UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pGVar10,(MethodInfo *)0x0);
      pGVar15 = pGVar10;
      if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        in_RCX = &MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil;
        pMVar24 = (MethodInfo *)0x1;
        pSVar12 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)pGVar11,1,MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
        pGVar15 = pGVar11;
        if (pSVar12 != (System_Object_array *)0x0) {
          if (0 < (int)pSVar12->max_length) {
            return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pSVar12->m_Items[0];
          }
          return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors(pGVar15,pMVar24);
  uVar14 = 0;
  pGVar10 = extraout_RAX;
  do {
    *(ulong *)(puVar19 + -8) = unaff_RBP;
    *(undefined8 *)(puVar19 + -0x10) = uVar14;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0x18) = pGVar10;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)(puVar19 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)(puVar19 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pTVar23 = (pGVar15->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar19 + -0x20) = 0x450fb46;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var,bVar7);
    }
    uVar8 = (pGVar15->fields)._selectionEnd;
    uVar21 = (ulong)uVar8;
    pTVar23 = (pGVar15->fields)._input;
    if ((int)uVar8 < 0) {
      if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar19 + -0x20) = 0x450fb86;
        uVar8 = TMPro_TMP_InputField__get_caretPosition(pTVar23,(MethodInfo *)0x0);
        pTVar23 = (pGVar15->fields)._input;
        if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
          uVar21 = (ulong)uVar8;
          lVar13 = *(long *)&(pTVar23->fields).m_SelectionColor.fields.a;
          if (lVar13 != 0) {
            if (-1 < (int)uVar8) goto label_0450fba1;
            uVar21 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar23 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar13 = *(long *)&(pTVar23->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar13 + 0x10) < (int)uVar21) {
        uVar21 = (ulong)*(uint *)(lVar13 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)(puVar19 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar23,(int32_t)uVar21,(MethodInfo *)0x0);
      pTVar23 = (pGVar15->fields)._input;
      if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar19 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar23,(int32_t)uVar21,(MethodInfo *)0x0);
        (pGVar15->fields)._selectionStart = -1;
        (pGVar15->fields)._selectionEnd = -1;
        (pGVar15->fields)._openedStart = -1;
        (pGVar15->fields)._openedEnd = -1;
        pGVar10 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                  (pGVar15->fields)._previewColors;
        if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
          piVar1 = (int *)((long)&(pGVar10->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          length = *(int32_t *)&(pGVar10->fields).m_CancellationTokenSource;
          *(undefined4 *)&(pGVar10->fields).m_CancellationTokenSource = 0;
          if (0 < length) {
            array = (System_Array_o *)(pGVar10->fields).m_CachedPtr;
            *(undefined8 *)(puVar19 + -0x20) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
            pGVar10 = extraout_RAX_00;
          }
          *(undefined1 *)((long)&(pGVar15->fields)._attached + 1) = 0;
          return pGVar10;
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x20) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_GameObject_o **)(puVar19 + -0x20) = source;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0x28) = pGVar15;
    *(undefined8 *)(puVar19 + -0x30) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)(puVar19 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_00 = *(System_Collections_Generic_List_object__o **)
            &(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar19 + -0x38) = 0x450fc5b;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var_00,bVar7);
    }
    pTVar4 = *(TMPro_TMP_InputField_o **)&(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
      fVar20 = (pTVar23->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)(puVar19 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar4,(int32_t)fVar20,(MethodInfo *)0x0);
      pTVar4 = *(TMPro_TMP_InputField_o **)&(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar4,(int32_t)(pTVar23->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
    pSVar12 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar19 + -0x38) = 0x450fca1;
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar19 + -0x38) = uVar21;
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x40) = unaff_R15;
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x48) = pTVar23;
    *(MethodInfo ***)(puVar19 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar19 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar19 + -0x60) = x_00;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0x68) = pGVar15;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)(puVar19 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar19 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)(puVar19 + -0x70) = 0x450fceb;
      pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)pSVar12->m_Items + 0x71) == '\0') {
      return pGVar15;
    }
    __this_01 = (System_Object_array *)pSVar12->m_Items[1];
    if (__this_01 != (System_Object_array *)0x0) {
      __this_00 = (System_Collections_Generic_List_object__o *)pSVar12->m_Items[0];
      x_00 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar8 = *(uint *)(pSVar12->m_Items + 0xc);
        uVar21 = (ulong)uVar8;
        uVar9 = (__this_00->fields)._size;
        uVar27 = (int)__this_01->max_length + uVar8;
        if ((int)uVar9 < (int)uVar27) {
          uVar27 = uVar9;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar27;
        if ((int)uVar8 < (int)uVar27) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar21;
            iVar3 = *(int *)(pSVar12->m_Items + 0xc);
            *(undefined8 *)(puVar19 + -0x70) = 0x450fd62;
            pIVar16 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index - iVar3,
                                 MethodInfo_String_get_Item);
            x_00 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)(puVar19 + -0x70) = 0x450fd7c;
            in_RCX = (MethodInfo_24E85B0 **)MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_00,index,pIVar16,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar21 = (ulong)(index + 1U);
            if ((int)uVar27 <= (int)(index + 1U)) goto label_0450fd96;
            __this_00 = (System_Collections_Generic_List_object__o *)pSVar12->m_Items[0];
            __this_01 = (System_Object_array *)pSVar12->m_Items[1];
            x_00 = __this_00;
          } while (__this_01 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)(puVar19 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_00 = (System_Collections_Generic_List_object__o *)pSVar12->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar19 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar19 + -0x70) = 0x450fdda;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                   CONCAT44(extraout_var_01,bVar7);
          }
          pIVar16 = pSVar12->m_Items[9];
          __this_01 = (System_Object_array *)0x0;
          if (pIVar16 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar16->klass->vtable[0x6a].methodPtr;
            pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                      (*vtableDispatch)
                                (pIVar16,0,0,pIVar16->klass->vtable[0x6a].method,vtableDispatch);
            return pGVar15;
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x70) = 0x450fe21;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar19 + -0x70) = uVar21;
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x78) = unaff_R15;
    *(System_Object_array **)(puVar19 + -0x80) = pSVar12;
    *(MethodInfo ***)(puVar19 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar19 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar19 + -0x98) = x_00;
    *(undefined8 *)(puVar19 + -0xa0) = uVar14;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_01->m_Items[8];
    plVar22 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar19 + -0xa8) = 0x450feff;
    __this_02 = call;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_04510010:
      plVar22 = &TypeInfo_Object;
      x = (UnityEngine_Object_o *)__this_01->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar19 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_Object_array *)0x0;
      *(undefined8 *)(puVar19 + -0xa8) = 0x4510032;
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
label_0451007e:
        *(undefined8 *)(puVar19 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_01,
                   (MethodInfo *)pSVar12);
        pGVar5 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_01->m_Items[7];
        if (pGVar5 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)(puVar19 + -0xa8) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)(puVar19 + -0xa8) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar5,value,(MethodInfo *)0x0);
          return extraout_RAX_03;
        }
        return extraout_RAX_02;
      }
      pIVar16 = __this_01->m_Items[9];
      *(undefined8 *)(puVar19 + -0xa8) = 0x4510049;
      pSVar12 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)(puVar19 + -0xa8) = 0x4510063;
      method_00 = __this_01;
      __this_02 = pSVar12;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar16 != (Il2CppObject *)0x0) {
        pMVar24 = pIVar16->klass->vtable[0x4f].method;
        vtableDispatch = pIVar16->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)(puVar19 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar16,pSVar12,pMVar24);
        goto label_0451007e;
      }
    }
    else if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
      pSVar12 = (System_Object_array *)__this_01->m_Items[8][0x1e].klass;
      *(undefined8 *)(puVar19 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)(puVar19 + -0xa8) = 0x450ff44;
      method_00 = __this_01;
      __this_02 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (pSVar12 != (System_Object_array *)0x0) {
        *(undefined8 *)(puVar19 + -0xa8) = 0x450ff62;
        method_00 = call;
        __this_02 = pSVar12;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)pSVar12,(UnityEngine_Events_UnityAction_T0__o *)call
                   ,MethodInfo_Void_RemoveListener);
        if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
          pSVar12 = (System_Object_array *)__this_01->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)(puVar19 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar22 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo_24E85B0 **)0x0;
          *(undefined8 *)(puVar19 + -0xa8) = 0x450ffa1;
          method_00 = __this_01;
          __this_02 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (pSVar12 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)(puVar19 + -0xa8) = 0x450ffc0;
            method_00 = call;
            __this_02 = pSVar12;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pSVar12,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
              __this = __this_01->m_Items[8][0x1d].monitor;
              *(undefined8 *)(puVar19 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo_24E85B0 **)0x0;
              *(undefined8 *)(puVar19 + -0xa8) = 0x450fff1;
              method_00 = __this_01;
              __this_02 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              pSVar12 = (System_Object_array *)0x0;
              if (__this != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)(puVar19 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)(puVar19 + -0xa8) = plVar22;
    *(System_Object_array **)(puVar19 + -0xb0) = pSVar12;
    *(System_Object_array **)(puVar19 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)(puVar19 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)(puVar19 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_02->m_Items + 0xe) == '\0') {
      *(undefined8 *)(puVar19 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                 (MethodInfo *)method_00);
    }
    pTVar23 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar24 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar19 + -0x100) = 0x451015c;
    unaff_R15 = pTVar23;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var_02,bVar7);
    }
    pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
    if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(pTVar4->fields).m_Mesh == '\0') {
        return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar4;
      }
      pSVar25 = (System_String_o *)__this_02->m_Items[4];
      pMVar24 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar19 + -0x100) = 0x4510189;
      bVar7 = System_String__IsNullOrEmpty(pSVar25,(MethodInfo *)0x0);
      pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                CONCAT44(extraout_var_03,bVar7);
      if ((char)bVar7 == '\0') {
        pGVar5 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar5 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return pGVar15;
        }
        bVar2 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
        pMVar24 = (MethodInfo *)__this_02->m_Items[4];
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)(puVar19 + -0x100) = 0x4510265;
        bVar7 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar5,(System_String_o *)pMVar24,(uint)bVar2,(MethodInfo *)0x0);
        pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                  CONCAT44(extraout_var_05,bVar7);
        cVar6 = (char)bVar7;
      }
      else {
        cVar6 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
      }
      if (cVar6 == '\0') {
        return pGVar15;
      }
      pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar24 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar19 + -0x100) = 0x45101b2;
        uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar4,(MethodInfo *)0x0);
        pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar23 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
          pMVar24 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar19 + -0x100) = 0x45101c8;
          uVar9 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar4,(MethodInfo *)0x0);
          if ((int)uVar8 <= (int)uVar9) {
            uVar9 = uVar8;
          }
          pSVar12 = (System_Object_array *)(ulong)uVar9;
          pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar24 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar19 + -0x100) = 0x45101e5;
            uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar4,(MethodInfo *)0x0);
            pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)(puVar19 + -0x100) = 0x45101fb;
              uVar27 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar4,(MethodInfo *)0x0);
              if ((int)uVar8 < (int)uVar27) {
                uVar8 = uVar27;
              }
              pTVar23 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
              *(undefined8 *)(puVar19 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,uVar9,
                         uVar8,(MethodInfo *)in_RCX);
              uVar8 = *(uint *)(__this_02->m_Items + 0xc);
              if (((int)uVar8 < 0) || (*(int32_t *)((long)__this_02->m_Items + 100) <= (int)uVar8)) {
                __this_02->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)uVar8;
              }
              pMVar24 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar19 + -0x100) = 0x4510228;
              bVar7 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                       CONCAT44(extraout_var_04,bVar7);
              }
              uVar8 = *(uint *)(__this_02->m_Items + 0xc);
              if (*(uint *)(__this_02->m_Items + 0xd) == uVar8) {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
                if (*(int32_t *)((long)__this_02->m_Items + 0x6c) == uVar9) {
                  return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)uVar8;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
              }
              in_RCX = (MethodInfo_24E85B0 **)(ulong)uVar9;
              *(uint *)(__this_02->m_Items + 0xd) = uVar8;
              *(uint *)((long)__this_02->m_Items + 0x6c) = uVar9;
              *(undefined8 *)(puVar19 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,pMVar24);
              pTVar4 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar25 = (System_String_o *)__this_02->m_Items[3];
                *(undefined8 *)(puVar19 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar4,(MethodInfo *)0x0);
                *(undefined8 *)(puVar19 + -200) = 0;
                *(undefined8 *)(puVar19 + -0xc0) = 0;
                *(undefined8 *)(puVar19 + -0xd8) = 0;
                *(undefined8 *)(puVar19 + -0xd0) = 0;
                *(undefined8 *)(puVar19 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar19 + -0xf8),
                           (System_String_o *)(puVar19 + -0xd8),(UnityEngine_GameObject_o *)pSVar25,node,
                           (MethodInfo *)0x0);
                pSVar25 = (System_String_o *)__this_02->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)(puVar19 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar19 + -0xe8) = *(undefined8 *)(puVar19 + -200);
                *(undefined8 *)(puVar19 + -0xe0) = *(undefined8 *)(puVar19 + -0xc0);
                *(undefined8 *)(puVar19 + -0xf8) = *(undefined8 *)(puVar19 + -0xd8);
                *(undefined8 *)(puVar19 + -0xf0) = *(undefined8 *)(puVar19 + -0xd0);
                *(undefined8 *)(puVar19 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar19 + -0xf8),
                           pSVar25,0,(MethodInfo *)0x0);
                return extraout_RAX_04;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x100) = 0x4510318;
    auVar28 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x100) = pTVar23;
    *(System_Object_array **)(puVar19 + -0x108) = __this_01;
    *(System_Object_array **)(puVar19 + -0x110) = pSVar12;
    *(System_Object_array **)(puVar19 + -0x118) = __this_02;
    *(long *)(puVar19 + -0x120) = auVar28._0_8_;
    source = (UnityEngine_GameObject_o *)(auVar28._8_8_ & 0xffffffff);
    fVar26 = auVar28._8_4_;
    unaff_RBP = (ulong)pMVar24 & 0xffffffff;
    fVar20 = SUB84(pMVar24,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)(puVar19 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pGVar10 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
               &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar25 = (System_String_o *)0x0;
    *(undefined8 *)(puVar19 + -0x128) = 0x4510373;
    pGVar15 = pGVar10;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var_06,bVar7);
    }
    pGVar11 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
               &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      lVar13 = *(long *)&pGVar11[2].fields._attached;
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      if (lVar13 != 0) {
        fVar17 = *(float *)(lVar13 + 0x10);
        fVar18 = fVar20;
        if ((int)fVar17 <= (int)fVar20) {
          fVar18 = fVar17;
        }
        if ((int)fVar20 < 0) {
          fVar18 = 0.0;
        }
        if ((int)fVar26 < (int)fVar17) {
          fVar17 = fVar26;
        }
        if ((int)fVar26 < 0) {
          fVar17 = 0.0;
        }
        if (fVar18 == fVar17) {
          if (*(char *)&pGVar11[3].fields.m_CancellationTokenSource == '\0') {
            return pGVar11;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return pGVar11;
        }
        fVar20 = fVar17;
        if ((int)fVar18 <= (int)fVar17) {
          fVar20 = fVar18;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar20;
        if ((int)fVar17 <= (int)fVar18) {
          fVar17 = fVar18;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar17;
        return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)(uint)fVar20;
      }
    }
    *(undefined8 *)(puVar19 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0x128) = pGVar10;
    b = (pGVar15->fields)._colorsEnabledKey;
    *(undefined8 *)(puVar19 + -0x130) = 0x4510405;
    bVar7 = System_String__op_Equality(pSVar25,b,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var_07,bVar7);
    }
    pSVar25 = (pGVar15->fields)._colorsEnabledKey;
    *(undefined8 *)(puVar19 + -0x130) = 0x4510414;
    bVar7 = System_String__IsNullOrEmpty(pSVar25,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)CONCAT44(extraout_var_08,bVar7)
    ;
    if ((char)bVar7 == '\0') {
      pGVar5 = (pGVar15->fields)._state;
      if (pGVar5 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar2 = *(undefined1 *)((long)&(pGVar15->fields)._attached + 2);
        pSVar25 = (pGVar15->fields)._colorsEnabledKey;
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)(puVar19 + -0x130) = 0x451043e;
        bVar7 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar5,pSVar25,(uint)bVar2,(MethodInfo *)0x0)
        ;
        pGVar10 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                  CONCAT44(extraout_var_09,bVar7);
        cVar6 = (char)bVar7;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar6 = *(undefined1 *)((long)&(pGVar15->fields)._attached + 2);
joined_r0x04510440:
      if (cVar6 != '\0') {
        return pGVar10;
      }
    }
    uVar14 = *(undefined8 *)(puVar19 + -0x128);
    puVar19 = puVar19 + -0x120;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetChoiceValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue (UnityEngine_GameObject_o* source, System_String_o* value, const MethodInfo* method);
// 0x45084d0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue
               (UnityEngine_GameObject_o *source,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  long lVar5;
  UnityEngine_Sprite_c *pUVar6;
  uint uVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *pUVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *method_00;
  TMPro_TMP_InputField_o *pTVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar13;
  UnityEngine_Sprite_Fields *pUVar14;
  System_String_o *pSVar15;
  UnityEngine_Sprite_o *pUVar16;
  Il2CppObject *pIVar17;
  System_String_o **ppSVar18;
  int32_t *piVar19;
  long lVar20;
  MethodInfo *in_RCX;
  MethodInfo *pMVar21;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_String_o *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 *unaff_RBP;
  TMPro_TMP_InputField_o *pTVar22;
  char cVar23;
  uint uVar24;
  MethodInfo *pMVar25;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *a;
  UnityEngine_GameObject_o *unaff_R12;
  undefined8 *puVar26;
  System_String_o *pSVar27;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *unaff_R13;
  undefined8 uVar28;
  System_Object_array *unaff_R15;
  undefined8 uStack_70;
  UnityEngine_GameObject_o *pUStack_68;
  undefined8 *puStack_60;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGStack_58;
  System_String_o *pSStack_50;
  System_Object_array *pSStack_48;
  undefined8 *puStack_40;
  
  if (g_data_057aed42 == '\0') {
    puStack_40 = (undefined8 *)0x45084f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo);
    puStack_40 = (undefined8 *)0x4508502;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    puStack_40 = (undefined8 *)0x450850e;
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-type");
    g_data_057aed42 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x450852e;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar25 = (MethodInfo *)0x0;
  puStack_40 = (undefined8 *)0x450853a;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (source == (UnityEngine_GameObject_o *)0x0) {
label_0450865c:
    puStack_40 = (undefined8 *)0x4508661;
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = unaff_R15;
  }
  else {
    pMVar25 = (MethodInfo *)0x0;
    puStack_40 = (undefined8 *)0x4508555;
    pUVar9 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0450865c;
    pMVar25 = (MethodInfo *)0x0;
    puStack_40 = (undefined8 *)0x4508568;
    pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0450865c;
    in_RCX = (MethodInfo *)&MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo;
    pMVar25 = (MethodInfo *)0x1;
    puStack_40 = (undefined8 *)0x4508588;
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)pUVar9,1,MethodInfo_AottgChoiceControl_GetComponentsInChildren_AottgChoiceCo);
    if (pSVar10 == (System_Object_array *)0x0) goto label_0450865c;
    if ((int)pSVar10->max_length < 1) {
      return;
    }
    source = (UnityEngine_GameObject_o *)0x0;
    unaff_RBP = &"profile-character-set-effects-type";
    if ((pSVar10->max_length & 0xffffffff) != 0) {
      do {
        unaff_R13 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar10->m_Items[(long)source];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          puStack_40 = (undefined8 *)0x45085f2;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar25 = (MethodInfo *)0x0;
        puStack_40 = (undefined8 *)0x45085fe;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          unaff_R15 = pSVar10;
          if (unaff_R13 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_0450865c;
          pMVar25 = (MethodInfo *)0x0;
          puStack_40 = (undefined8 *)0x4508611;
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)unaff_R13,(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Object_o *)0x0) goto label_0450865c;
          puStack_40 = (undefined8 *)0x4508620;
          pSVar15 = UnityEngine_Object__get_name(pUVar11,(MethodInfo *)0x0);
          puStack_40 = (undefined8 *)0x450862e;
          pMVar25 = "profile-character-set-effects-type";
          bVar8 = System_String__op_Equality(pSVar15,(System_String_o *)"profile-character-set-effects-type",(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if ((unaff_R13->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
              return;
            }
            __this_00 = unaff_R13;
            uVar7 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(unaff_R13,value,(MethodInfo *)0x0);
            uVar24 = (uint)value;
            pGVar3 = (unaff_R13->fields)._options;
            if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              if ((int)uVar7 < 0) {
                return;
              }
              pGVar4 = (pGVar3->fields)._items;
              if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
              goto label_03b8a9aa;
              uVar1 = (uint)pGVar4->max_length;
              if ((int)uVar1 <= (int)uVar7) {
                return;
              }
              uVar24 = uVar1 - 1;
              if ((int)uVar7 < (int)(uVar1 - 1)) {
                uVar24 = uVar7;
              }
              if (uVar24 < uVar1) {
                if (pGVar4->m_Items[(int)uVar24] !=
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                  if ((char)(pGVar4->m_Items[(int)uVar24]->fields).enabled == '\0') {
                    return;
                  }
                  (unaff_R13->fields)._index = uVar7;
                  Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                            (unaff_R13,(MethodInfo *)(ulong)uVar24);
                  return;
                }
                goto label_03b8a9aa;
              }
            }
            il2cpp_runtime_helper_022b2ca0();
            if ((int)uVar24 < 0) {
              return;
            }
            lVar20 = (__this_00->fields).m_CachedPtr;
            if (lVar20 == 0) {
label_03b8a9fb:
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              uVar7 = *(uint *)(lVar20 + 0x18);
              if ((int)uVar7 <= (int)uVar24) {
                return;
              }
              if ((int)(uVar7 - 1) <= (int)uVar24) {
                uVar24 = uVar7 - 1;
              }
              if (uVar24 < uVar7) {
                if (*(long *)(lVar20 + 0x20 + (long)(int)uVar24 * 8) != 0) {
                  return;
                }
                goto label_03b8a9fb;
              }
            }
            il2cpp_runtime_helper_022b2ca0();
            lVar20 = (__this_00->fields).m_CachedPtr;
            if (lVar20 == 0) goto label_03b8aa59;
            uVar24 = *(uint *)(lVar20 + 0x18);
            if ((int)uVar24 < 1) {
              return;
            }
            uVar7 = 0;
            goto label_03b8aa30;
          }
        }
        source = (UnityEngine_GameObject_o *)((long)&source->klass + 1);
        uVar24 = (uint)pSVar10->max_length;
        in_RCX = (MethodInfo *)(long)(int)uVar24;
        if ((long)in_RCX <= (long)source) {
          return;
        }
      } while (source < (UnityEngine_GameObject_o *)(ulong)uVar24);
    }
  }
  puStack_40 = (undefined8 *)0x4508666;
  uStack_70 = il2cpp_runtime_helper_022b2ca0();
  puStack_60 = &TypeInfo_Object;
  pUStack_68 = source;
  pGStack_58 = unaff_R13;
  pSStack_50 = value;
  pSStack_48 = pSVar10;
  puStack_40 = unaff_RBP;
  if (g_data_057aed36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aed36 = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(unaff_R12,pMVar25);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar16[3].monitor + 1) == '\0') goto label_045088f4;
label_04508764:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    }
    cVar23 = *(char *)&pUVar16[3].monitor;
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  else {
    pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(char *)((long)&pUVar16[3].monitor + 1) != '\0') goto label_04508764;
label_045088f4:
    cVar23 = '\0';
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar12 = (TMPro_TMP_InputField_o *)(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite[3].klass;
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  pMVar25 = "TwoColorGradient";
  bVar8 = System_String__op_Equality
                    ((System_String_o *)pTVar12,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  pTVar22 = (TMPro_TMP_InputField_o *)0x2;
  if ((char)bVar8 == '\0') {
    pMVar25 = "FourColorGradient";
    bVar8 = System_String__op_Equality
                      ((System_String_o *)pTVar12,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    pTVar22 = (TMPro_TMP_InputField_o *)&g_data_00000004;
    if ((char)bVar8 != '\0') goto label_04508803;
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      if (g_data_057aed77 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed77 = '\x01';
      }
      pTVar12 = (__this->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        ppSVar18 = &(__this->fields)._lastText;
      }
      else {
        pTVar22 = (__this->fields)._input;
        if (pTVar22 == (TMPro_TMP_InputField_o *)0x0) goto label_04508be3;
        ppSVar18 = (System_String_o **)&(pTVar22->fields).m_SelectionColor.fields.a;
      }
      method_00 = (System_String_array *)(__this->fields)._colors;
      pTVar12 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          (*ppSVar18,(System_Collections_Generic_IList_string__o *)method_00,method_02);
      goto joined_r0x04508843;
    }
label_04508be3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
label_04508803:
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors
                          ((int32_t)pTVar22,pMVar25);
    pTVar12 = pTVar22;
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_04508be3;
    pTVar12 = (TMPro_TMP_InputField_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                        (__this,(System_Collections_Generic_IList_string__o *)method_00,method_01);
joined_r0x04508843:
    if (cVar23 != '\0') {
      pGVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                          ((System_String_o *)pTVar12,(MethodInfo *)method_00);
      if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) goto label_04508be3;
      pTVar12 = (TMPro_TMP_InputField_o *)(pGVar13->fields).Text;
    }
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              (((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
              (unaff_R12,pSVar15,(System_String_o *)pTVar12,in_RCX);
    pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    pSVar15 = pUVar16[1].monitor;
    if (cVar23 == '\0') {
      uVar24 = 0;
      pUVar14 = (UnityEngine_Sprite_Fields *)&"None";
    }
    else {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      pUVar14 = &pUVar16[2].fields;
      uVar24 = 0x5576901;
    }
    pSVar27 = (System_String_o *)pUVar14->m_CachedPtr;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect(pSVar15,uVar24 & 0xff,pSVar27,in_RCX);
    pMVar25 = extraout_RDX;
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar25 = extraout_RDX_00;
    }
    pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pUVar16[1].monitor,pUVar16[2].monitor,pMVar25);
    pMVar25 = (MethodInfo *)0x0;
    iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    while( true ) {
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      in_RCX = (MethodInfo *)0x0;
      pTVar12 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar16->klass == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      uVar24 = *(uint *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
      pMVar21 = (MethodInfo *)(ulong)uVar24;
      if ((long)*(int *)&(pUVar16->klass->_1).namespaze <= (long)pMVar25) {
        if (uVar24 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
        }
        pMVar25 = (MethodInfo *)(pUVar16->fields).m_CachedPtr;
        pSVar15 = pUVar16[2].monitor;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (unaff_R12,(System_String_o *)pMVar25,pSVar15,pMVar21);
        if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(unaff_R12,pMVar25);
        if (unaff_R12 == (UnityEngine_GameObject_o *)0x0) {
          return;
        }
        pIVar17 = UnityEngine_GameObject__GetComponentInParent_object_(unaff_R12,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if (pIVar17 == (Il2CppObject *)0x0) {
          return;
        }
        if (pIVar17[8].monitor == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pIVar17[8].monitor,1,(MethodInfo *)0x0);
        return;
      }
      if (uVar24 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar16 = (TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite;
      }
      pTVar12 = pUVar16[1].monitor;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      else {
      }
      uStack_70 = CONCAT44((int)pMVar25,(undefined4)uStack_70);
      if (g_data_057aedba == '\0') {
        il2cpp_runtime_helper_023445d0(&"-color-");
        g_data_057aedba = '\x01';
      }
      pSVar15 = System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
      in_RCX = (MethodInfo *)0x0;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)pTVar12,"-color-",pSVar15,(MethodInfo *)0x0);
      pUVar6 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      if (pUVar6 == (UnityEngine_Sprite_c *)0x0) goto label_04508be3;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar6->_1).namespaze;
      if (in_RCX <= pMVar25) break;
      pSVar27 = (&(pUVar6->_1).byval_arg.data)[(long)pMVar25];
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar15,pSVar27,1,unaff_R12,(MethodInfo *)0x0);
      pMVar25 = (MethodInfo *)((long)&pMVar25->methodPointer + 1);
      iVar2 = *(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed77 = '\x01';
  }
  pUVar11 = *(UnityEngine_Object_o **)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    piVar19 = &(pTVar12->fields).m_Transition;
label_04508c54:
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
              (*(System_String_o **)piVar19,
               *(System_Collections_Generic_IList_string__o **)&(pTVar12->fields).m_EnableCalled,method_03);
    return;
  }
  lVar20 = *(long *)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar20 != 0) {
    piVar19 = (int32_t *)(lVar20 + 0x220);
    goto label_04508c54;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed3f = '\x01';
  }
  pMVar25 = (MethodInfo *)((ulong)pUVar11 & 0xffffffff);
  lVar20 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if ((int)pUVar11 < 1) {
    return;
  }
  if (lVar20 == 0) {
    if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar6 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
    pTVar12 = TypeInfo_AottgCharacterSetEffectsDialog;
    if ((pUVar6 != (UnityEngine_Sprite_c *)0x0) && (*(int *)&(pUVar6->_1).namespaze == 0)) {
label_04508d71:
      pTVar12 = TypeInfo_AottgCharacterSetEffectsDialog;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    puVar26 = (undefined8 *)(lVar20 + 0x20);
    pMVar21 = (MethodInfo *)0x0;
    while( true ) {
      if (*(int *)((long)&(TypeInfo_AottgCharacterSetEffectsDialog->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar6 = ((TypeInfo_AottgCharacterSetEffectsDialog->fields).m_SpriteState.fields.m_PressedSprite)->klass;
      pTVar12 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pUVar6 == (UnityEngine_Sprite_c *)0x0) break;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pUVar6->_1).namespaze;
      if ((in_RCX <= pMVar21) || (in_RCX = (MethodInfo *)(ulong)*(uint *)(lVar20 + 0x18), in_RCX <= pMVar21))
      goto label_04508d71;
      pMVar25 = (&(pUVar6->_1).byval_arg.data)[(long)pMVar21];
      *puVar26 = pMVar25;
      il2cpp_runtime_helper_022b4080(puVar26);
      pMVar21 = (MethodInfo *)((long)&pMVar21->methodPointer + 1);
      puVar26 = puVar26 + 1;
      if ((MethodInfo *)((ulong)pUVar11 & 0xffffffff) == pMVar21) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  pSVar15 = *(System_String_o **)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    piVar19 = &(pTVar12->fields).m_Transition;
label_04508de8:
    pSVar15 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                        (*(System_String_o **)piVar19,(System_Collections_Generic_IList_string__o *)pMVar25,
                         method_04);
    pGVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar15,pMVar25);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar12,pGVar13,0,in_RCX);
    return;
  }
  lVar20 = *(long *)&(pTVar12->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar20 != 0) {
    piVar19 = (int32_t *)(lVar20 + 0x220);
    goto label_04508de8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar15,pMVar21);
  if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = pMVar21;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX_01 == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar23 = (char)pMVar25;
    pSVar27 = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    a = (System_String_o *)0x0;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX_01 != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar23 = (char)pMVar25;
    pSVar27 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      a = (System_String_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar25 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_01,(Il2CppObject *)pMVar21,(Il2CppObject *)pSVar27,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  cVar23 = '\0';
  a = pSVar15;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04508f60:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
              (pUVar9,(System_String_o *)pMVar21,pSVar27,pMVar25);
    return;
  }
  if (pSVar15 != (System_String_o *)0x0) {
    cVar23 = '\0';
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
    a = pSVar15;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
      goto label_04508f60;
    }
  }
label_04508f89:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  bVar8 = System_String__op_Equality(a,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar20 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar5 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar20 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar5 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar5;
  if ((char)bVar8 == '\0') {
    *(char *)(lVar20 + 10) = cVar23;
    uVar28 = extraout_RDX_02;
    if (cVar23 == '\0') {
      uVar28 = "None";
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar5);
      lVar20 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar26 = (undefined8 *)(lVar20 + 0x18);
  }
  else {
    *(char *)(lVar20 + 9) = cVar23;
    uVar28 = extraout_RDX_02;
    if (cVar23 == '\0') {
      uVar28 = "None";
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar5);
      lVar20 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar26 = (undefined8 *)(lVar20 + 0x10);
  }
  *puVar26 = uVar28;
  il2cpp_runtime_helper_022b4080(puVar26,uVar28);
  return;
label_03b8aa30:
  if (uVar24 <= uVar7) {
    il2cpp_runtime_helper_022b2ca0();
label_03b8aa59:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return;
  }
  lVar5 = *(long *)(lVar20 + 0x20 + (long)(int)uVar7 * 8);
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
  if (lVar5 == 0) goto label_03b8aa59;
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)*(byte *)(lVar5 + 0x28);
  uVar7 = uVar7 + 1;
  if ((int)uVar24 <= (int)uVar7) {
    return;
  }
  goto label_03b8aa30;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId (int32_t index, const MethodInfo* method);
// 0x4507b90

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (g_data_057aed43 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
    g_data_057aed43 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorVisibleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey (int32_t index, const MethodInfo* method);
// 0x45091c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (g_data_057aed44 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-set-effects.draft-color-");
    il2cpp_runtime_helper_023445d0(&".visible");
    g_data_057aed44 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7150("profile-character-set-effects.draft-color-",pSVar1,".visible",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex (System_String_o* id, const MethodInfo* method);
// 0x4507e00

int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                  (System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *pUVar2;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t iVar7;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  uint uVar8;
  uint uVar9;
  System_String_o *pSVar10;
  TMPro_TMP_InputField_o *__this_00;
  ulong extraout_RAX;
  TMPro_TMP_InputField_o *pTVar11;
  TMPro_TMP_InputField_o *__this_01;
  ulong extraout_RAX_00;
  long extraout_RAX_01;
  long lVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  System_Object_array *call;
  System_Object_array *pSVar15;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  TMPro_TMP_InputField_o *extraout_RAX_02;
  ulong uVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar18;
  MethodInfo_24E85B0 **in_RCX;
  float fVar19;
  int iVar20;
  UnityEngine_GameObject_o *unaff_RBX;
  ulong uVar21;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *x;
  undefined8 *puVar22;
  int index;
  float fVar23;
  ulong unaff_RBP;
  long *plVar24;
  TMPro_TMP_InputField_o *pTVar25;
  MethodInfo *pMVar26;
  System_Object_array *method_00;
  System_Object_array *__this_03;
  System_Object_array *__this_04;
  long unaff_R12;
  System_String_o **ppSVar27;
  MethodInfo_2A669C0 **ppMVar28;
  long *plVar29;
  float fVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined8 auStack_68 [2];
  System_String_o *pSStack_58;
  ulong uStack_50;
  TMPro_TMP_InputField_o *pTStack_48;
  TMPro_TMP_InputField_o *pTStack_40;
  undefined1 auStack_38 [12];
  int local_2c;
  TMPro_TMP_InputField_o *pTVar16;
  
  puVar22 = (undefined8 *)auStack_38;
  if (g_data_057aed45 == '\0') {
    pTStack_40 = (TMPro_TMP_InputField_o *)0x4507e25;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed45 = '\x01';
  }
  uVar21 = 0;
  plVar29 = &TypeInfo_AottgCharacterSetEffectsDialog;
  ppSVar27 = &"profile-character-set-effects-draft-color-";
  iVar20 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  do {
    if (iVar20 == 0) {
      pTStack_40 = (TMPro_TMP_InputField_o *)0x4507e55;
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) == 0) {
      pTStack_40 = (TMPro_TMP_InputField_o *)0x4507f0e;
      il2cpp_runtime_helper_022b2c90();
      pSVar10 = (System_String_o *)(auStack_38 + 8);
      uStack_50 = uVar21;
      pTStack_48 = (TMPro_TMP_InputField_o *)id;
      pTStack_40 = (TMPro_TMP_InputField_o *)&stack0xffffffffffffffd4;
      if (g_data_057aed34 == '\0') {
        pSStack_58 = (System_String_o *)0x4507f2f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
        pSStack_58 = (System_String_o *)0x4507f3b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        pSStack_58 = (System_String_o *)0x4507f47;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        pSStack_58 = (System_String_o *)0x4507f53;
        il2cpp_runtime_helper_023445d0(&"save");
        pSStack_58 = (System_String_o *)0x4507f5f;
        il2cpp_runtime_helper_023445d0(&"cancel");
        pSStack_58 = (System_String_o *)0x4507f6b;
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        pSStack_58 = (System_String_o *)0x4507f77;
        il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-text-picker");
        g_data_057aed34 = '\x01';
      }
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x4507f9a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_58 = (System_String_o *)0x4507fa2;
      __this_00 = (TMPro_TMP_InputField_o *)
                  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(unaff_RBX,method);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x4507fbd;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_58 = (System_String_o *)0x4507fc9;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return bVar6;
      }
      if (unaff_R12 == 0) {
label_04508022:
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          pSStack_58 = (System_String_o *)0x450803a;
          il2cpp_runtime_helper_02337ed0();
        }
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        pSStack_58 = (System_String_o *)0x4508057;
        pTVar25 = "profile-character-set-effects-text-picker";
        pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                            ((System_String_o *)"profile-character-set-effects-text-picker","#FFFFFF",0,(MethodInfo *)0x0);
        if (unaff_R12 == 0) {
          uVar8 = 1;
        }
        else {
label_0450806c:
          pTVar25 = *(TMPro_TMP_InputField_o **)(unaff_R12 + 0x18);
          pSStack_58 = (System_String_o *)0x4508081;
          uVar8 = System_String__op_Equality((System_String_o *)pTVar25,"save",(MethodInfo *)0x0);
        }
        if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
                    ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_00,pSVar10,
                     uVar8 & 0xff,(MethodInfo *)in_RCX);
          return extraout_EAX;
        }
      }
      else {
        pTVar25 = *(TMPro_TMP_InputField_o **)(unaff_R12 + 0x18);
        pSStack_58 = (System_String_o *)0x4507ff1;
        pMVar26 = "cancel";
        bVar6 = System_String__op_Equality
                          ((System_String_o *)pTVar25,(System_String_o *)"cancel",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSStack_58 = (System_String_o *)0x450801e;
          bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(unaff_R12 + 0x50),(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_04508022;
          pSVar10 = *(System_String_o **)(unaff_R12 + 0x50);
          goto label_0450806c;
        }
        if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
          pSStack_58 = (System_String_o *)0x4508006;
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
                    ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_00,pMVar26);
          uVar17 = extraout_RAX;
          uVar21 = uStack_50;
          pTVar16 = __this_00;
          pTVar25 = pTStack_48;
          __this_00 = pTStack_40;
          break;
        }
      }
      pSStack_58 = (System_String_o *)0x450809e;
      auStack_68[0] = il2cpp_runtime_helper_022b2c90();
      puVar22 = auStack_68;
      pSStack_58 = pSVar10;
      if (g_data_057aed41 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed41 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar26 = (MethodInfo *)0x0;
      pTVar16 = pTVar25;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return 0;
      }
      if (pTVar25 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar26 = (MethodInfo *)0x0;
        pTVar16 = pTVar25;
        pTVar11 = (TMPro_TMP_InputField_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pTVar25,(MethodInfo *)0x0)
        ;
        if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
          pMVar26 = (MethodInfo *)0x0;
          __this_01 = (TMPro_TMP_InputField_o *)
                      UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pTVar11,(MethodInfo *)0x0);
          pTVar16 = pTVar11;
          if (__this_01 != (TMPro_TMP_InputField_o *)0x0) {
            in_RCX = &MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil;
            pMVar26 = (MethodInfo *)0x1;
            pSVar15 = UnityEngine_Component__GetComponentsInChildren_object_
                                ((UnityEngine_Component_o *)__this_01,1,MethodInfo_AottgCharacterTextColorEditorRuntime_GetComponentsInChil);
            pTVar16 = __this_01;
            if (pSVar15 != (System_Object_array *)0x0) {
              if (0 < (int)pSVar15->max_length) {
                return (int32_t)pSVar15->m_Items[0];
              }
              return 0;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar16,pMVar26);
      uVar21 = 0;
      uVar17 = extraout_RAX_00;
      break;
    }
    iVar20 = (int)uVar21;
    if (*(int *)(**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x18) <= iVar20) {
      uVar21 = 0xffffffff;
label_04507ef9:
      return (int32_t)uVar21;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      pTStack_40 = (TMPro_TMP_InputField_o *)0x4507ee5;
      il2cpp_runtime_helper_02337ed0();
    }
    local_2c = iVar20;
    if (g_data_057aed43 == '\0') {
      pTStack_40 = (TMPro_TMP_InputField_o *)0x4507e93;
      il2cpp_runtime_helper_023445d0(&"profile-character-set-effects-draft-color-");
      g_data_057aed43 = '\x01';
    }
    pTStack_40 = (TMPro_TMP_InputField_o *)0x4507ea4;
    pSVar10 = System_Int32__ToString
                        ((int32_t)(TMPro_TMP_InputField_o *)&stack0xffffffffffffffd4,(MethodInfo *)0x0);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x4507eb2;
    method = (MethodInfo *)System_String__Concat_3ae5ba0("profile-character-set-effects-draft-color-",pSVar10,(MethodInfo *)0x0);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x4507ebf;
    bVar6 = System_String__op_Equality(id,(System_String_o *)method,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto label_04507ef9;
    uVar21 = (ulong)(iVar20 + 1);
    iVar20 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  } while( true );
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection:
  *(ulong *)((long)puVar22 + -8) = unaff_RBP;
  *(ulong *)((long)puVar22 + -0x10) = uVar21;
  *(ulong *)((long)puVar22 + -0x18) = uVar17;
  if (g_data_057aed8e == '\0') {
    *(undefined8 *)((long)puVar22 + -0x20) = 0x450fb0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)puVar22 + -0x20) = 0x450fb17;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8e = '\x01';
  }
  pUVar2 = *(UnityEngine_Object_o **)&(pTVar16->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar22 + -0x20) = 0x450fb3a;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar22 + -0x20) = 0x450fb46;
  bVar6 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return bVar6;
  }
  fVar23 = (pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.r;
  uVar21 = (ulong)(uint)fVar23;
  pTVar11 = *(TMPro_TMP_InputField_o **)&(pTVar16->fields).m_Colors.fields.m_NormalColor.fields.a;
  if ((int)fVar23 < 0) {
    if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
      *(undefined8 *)((long)puVar22 + -0x20) = 0x450fb86;
      uVar8 = TMPro_TMP_InputField__get_caretPosition(pTVar11,(MethodInfo *)0x0);
      pTVar11 = *(TMPro_TMP_InputField_o **)&(pTVar16->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
        uVar21 = (ulong)uVar8;
        lVar12 = *(long *)&(pTVar11->fields).m_SelectionColor.fields.a;
        if (lVar12 != 0) {
          if (-1 < (int)uVar8) goto label_0450fba1;
          uVar21 = 0;
          goto label_0450fba9;
        }
      }
    }
  }
  else if ((pTVar11 != (TMPro_TMP_InputField_o *)0x0) &&
          (lVar12 = *(long *)&(pTVar11->fields).m_SelectionColor.fields.a, lVar12 != 0)) {
label_0450fba1:
    if ((int)*(uint *)(lVar12 + 0x10) < (int)uVar21) {
      uVar21 = (ulong)*(uint *)(lVar12 + 0x10);
    }
label_0450fba9:
    *(undefined8 *)((long)puVar22 + -0x20) = 0x450fbb2;
    TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar11,(int32_t)uVar21,(MethodInfo *)0x0);
    pTVar11 = *(TMPro_TMP_InputField_o **)&(pTVar16->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
      *(undefined8 *)((long)puVar22 + -0x20) = 0x450fbc4;
      TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar11,(int32_t)uVar21,(MethodInfo *)0x0);
      (pTVar16->fields).m_Colors.fields.m_PressedColor.fields.a = -NAN;
      (pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.r = -NAN;
      (pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.g = -NAN;
      (pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.b = -NAN;
      lVar12 = *(long *)&(pTVar16->fields).m_Navigation.fields;
      if (lVar12 != 0) {
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        iVar7 = *(int32_t *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar7) {
          array = *(System_Array_o **)(lVar12 + 0x10);
          *(undefined8 *)((long)puVar22 + -0x20) = 0x450fbf8;
          System_Array__Clear(array,0,iVar7,(MethodInfo *)0x0);
          lVar12 = extraout_RAX_01;
        }
        *(undefined1 *)((long)&(pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.a + 1) = 0;
        return (int32_t)lVar12;
      }
    }
  }
  *(undefined8 *)((long)puVar22 + -0x20) = 0x450fc0f;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x20) = pTVar25;
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x28) = pTVar16;
  *(undefined8 *)((long)puVar22 + -0x30) = uVar13;
  if (g_data_057aed8d == '\0') {
    *(undefined8 *)((long)puVar22 + -0x38) = 0x450fc2c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8d = '\x01';
  }
  x = *(System_Collections_Generic_List_object__o **)&(pTVar11->fields).m_Colors.fields.m_NormalColor.fields.a
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar22 + -0x38) = 0x450fc4f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar22 + -0x38) = 0x450fc5b;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return bVar6;
  }
  pTVar25 = *(TMPro_TMP_InputField_o **)&(pTVar11->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (pTVar25 != (TMPro_TMP_InputField_o *)0x0) {
    fVar23 = (pTVar11->fields).m_Colors.fields.m_PressedColor.fields.a;
    *(undefined8 *)((long)puVar22 + -0x38) = 0x450fc7e;
    TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar25,(int32_t)fVar23,(MethodInfo *)0x0);
    pTVar25 = *(TMPro_TMP_InputField_o **)&(pTVar11->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar25 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_selectionStringFocusPosition
                (pTVar25,(int32_t)(pTVar11->fields).m_Colors.fields.m_SelectedColor.fields.r,(MethodInfo *)0x0
                );
      return extraout_EAX_00;
    }
  }
  pSVar15 = (System_Object_array *)0x0;
  *(undefined8 *)((long)puVar22 + -0x38) = 0x450fca1;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)puVar22 + -0x38) = uVar21;
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x40) = __this_00;
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x48) = pTVar11;
  *(long **)((long)puVar22 + -0x50) = plVar29;
  *(System_String_o ***)((long)puVar22 + -0x58) = ppSVar27;
  *(System_Collections_Generic_List_object__o **)((long)puVar22 + -0x60) = x;
  *(undefined8 *)((long)puVar22 + -0x68) = uVar13;
  if (g_data_057aed87 == '\0') {
    *(undefined8 *)((long)puVar22 + -0x70) = 0x450fcd3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)puVar22 + -0x70) = 0x450fcdf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)puVar22 + -0x70) = 0x450fceb;
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed87 = '\x01';
  }
  if (*(undefined1 *)((long)pSVar15->m_Items + 0x71) == '\0') {
    return (int32_t)uVar13;
  }
  __this_03 = (System_Object_array *)pSVar15->m_Items[1];
  ppMVar28 = (MethodInfo_2A669C0 **)ppSVar27;
  if (__this_03 != (System_Object_array *)0x0) {
    __this_02 = (System_Collections_Generic_List_object__o *)pSVar15->m_Items[0];
    x = (System_Collections_Generic_List_object__o *)0x0;
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      uVar8 = *(uint *)(pSVar15->m_Items + 0xc);
      uVar21 = (ulong)uVar8;
      uVar9 = (__this_02->fields)._size;
      uVar31 = (int)__this_03->max_length + uVar8;
      if ((int)uVar9 < (int)uVar31) {
        uVar31 = uVar9;
      }
      __this_00 = (TMPro_TMP_InputField_o *)(ulong)uVar31;
      if ((int)uVar8 < (int)uVar31) {
        do {
          index = (int)uVar21;
          iVar20 = *(int *)(pSVar15->m_Items + 0xc);
          *(undefined8 *)((long)puVar22 + -0x70) = 0x450fd62;
          pIVar14 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_03,index - iVar20,
                               MethodInfo_String_get_Item);
          x = (System_Collections_Generic_List_object__o *)0x0;
          ppMVar28 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
          plVar29 = (long *)&MethodInfo_Void_set_Item;
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
          *(undefined8 *)((long)puVar22 + -0x70) = 0x450fd7c;
          in_RCX = (MethodInfo_24E85B0 **)MethodInfo_Void_set_Item;
          System_Collections_Generic_List_object___set_Item
                    (__this_02,index,pIVar14,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
          uVar21 = (ulong)(index + 1U);
          if ((int)uVar31 <= (int)(index + 1U)) goto label_0450fd96;
          __this_02 = (System_Collections_Generic_List_object__o *)pSVar15->m_Items[0];
          __this_03 = (System_Object_array *)pSVar15->m_Items[1];
          x = __this_02;
        } while (__this_03 != (System_Object_array *)0x0);
      }
      else {
label_0450fd96:
        if (g_data_057aed7f == '\0') {
          *(undefined8 *)((long)puVar22 + -0x70) = 0x450fdab;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057aed7f = '\x01';
        }
        x = (System_Collections_Generic_List_object__o *)pSVar15->m_Items[9];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar22 + -0x70) = 0x450fdce;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)puVar22 + -0x70) = 0x450fdda;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return bVar6;
        }
        pIVar14 = pSVar15->m_Items[9];
        __this_03 = (System_Object_array *)0x0;
        if (pIVar14 != (Il2CppObject *)0x0) {
          vtableDispatch = pIVar14->klass->vtable[0x6a].methodPtr;
          iVar7 = (*vtableDispatch)
                            (pIVar14,0,0,pIVar14->klass->vtable[0x6a].method,vtableDispatch);
          return iVar7;
        }
      }
    }
  }
  *(undefined8 *)((long)puVar22 + -0x70) = 0x450fe21;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)puVar22 + -0x70) = uVar21;
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x78) = __this_00;
  *(System_Object_array **)((long)puVar22 + -0x80) = pSVar15;
  *(long **)((long)puVar22 + -0x88) = plVar29;
  *(MethodInfo_2A669C0 ***)((long)puVar22 + -0x90) = ppMVar28;
  *(System_Collections_Generic_List_object__o **)((long)puVar22 + -0x98) = x;
  *(undefined8 *)((long)puVar22 + -0xa0) = uVar13;
  if (g_data_057aed7c == '\0') {
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe57;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe7b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe87;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe93;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fe9f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450feab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450feb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fec3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
    g_data_057aed7c = '\x01';
  }
  call = (System_Object_array *)__this_03->m_Items[8];
  plVar24 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fef3;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (System_Object_array *)0x0;
  *(undefined8 *)((long)puVar22 + -0xa8) = 0x450feff;
  __this_04 = call;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04510010:
    plVar24 = &TypeInfo_Object;
    pUVar2 = (UnityEngine_Object_o *)__this_03->m_Items[9];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510026;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_Object_array *)0x0;
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510032;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0451007e:
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510086;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)pSVar15);
      pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
      if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        return extraout_EAX_01;
      }
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x451009e;
      value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x45100b8;
      System_Action_object____ctor();
      Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar3,value,(MethodInfo *)0x0);
      return extraout_EAX_02;
    }
    pIVar14 = __this_03->m_Items[9];
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510049;
    pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
    in_RCX = (MethodInfo_24E85B0 **)0x0;
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510063;
    method_00 = __this_03;
    __this_04 = pSVar15;
    System_Action_object____ctor();
    call = (System_Object_array *)0x0;
    if (pIVar14 != (Il2CppObject *)0x0) {
      pMVar26 = pIVar14->klass->vtable[0x4f].method;
      vtableDispatch = pIVar14->klass->vtable[0x4f].methodPtr;
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x451007e;
      (*vtableDispatch)(pIVar14,pSVar15,pMVar26);
      goto label_0451007e;
    }
  }
  else if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
    pSVar15 = (System_Object_array *)__this_03->m_Items[8][0x1e].klass;
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ff2a;
    call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    in_RCX = (MethodInfo_24E85B0 **)0x0;
    *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ff44;
    method_00 = __this_03;
    __this_04 = call;
    UnityEngine_Events_UnityAction_object____ctor();
    if (pSVar15 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ff62;
      method_00 = call;
      __this_04 = pSVar15;
      UnityEngine_Events_UnityEvent_object___RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pSVar15,(UnityEngine_Events_UnityAction_T0__o *)call,
                 MethodInfo_Void_RemoveListener);
      if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
        pSVar15 = (System_Object_array *)__this_03->m_Items[8][0x1d].klass;
        plVar29 = &TypeInfo_UnityAction_string_int_int;
        *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ff86;
        call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
        plVar24 = &MethodInfo_Void_OnTextSelection;
        in_RCX = (MethodInfo_24E85B0 **)0x0;
        *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ffa1;
        method_00 = __this_03;
        __this_04 = call;
        UnityEngine_Events_UnityAction_object__int__int____ctor();
        if (pSVar15 != (System_Object_array *)0x0) {
          ppMVar28 = &MethodInfo_Void_RemoveListener;
          *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ffc0;
          method_00 = call;
          __this_04 = pSVar15;
          UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pSVar15,
                     (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
          if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
            __this = __this_03->m_Items[8][0x1d].monitor;
            *(undefined8 *)((long)puVar22 + -0xa8) = 0x450ffdd;
            call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
            in_RCX = (MethodInfo_24E85B0 **)0x0;
            *(undefined8 *)((long)puVar22 + -0xa8) = 0x450fff1;
            method_00 = __this_03;
            __this_04 = call;
            UnityEngine_Events_UnityAction_object__int__int____ctor();
            pSVar15 = (System_Object_array *)0x0;
            if (__this != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
              *(undefined8 *)((long)puVar22 + -0xa8) = 0x4510009;
              UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                        (__this,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
              goto label_04510010;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)puVar22 + -0xa8) = 0x45100e7;
  il2cpp_runtime_helper_022b2c90();
  *(long **)((long)puVar22 + -0xa8) = plVar24;
  *(System_Object_array **)((long)puVar22 + -0xb0) = pSVar15;
  *(System_Object_array **)((long)puVar22 + -0xb8) = call;
  if (g_data_057aed7d == '\0') {
    *(undefined8 *)((long)puVar22 + -0x100) = 0x4510110;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    *(undefined8 *)((long)puVar22 + -0x100) = 0x451011c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7d = '\x01';
  }
  if ((char)*(bool_conflict *)(__this_04->m_Items + 0xe) == '\0') {
    *(undefined8 *)((long)puVar22 + -0x100) = 0x4510134;
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,
               (MethodInfo *)method_00);
  }
  pTVar25 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar22 + -0x100) = 0x4510150;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar26 = (MethodInfo *)0x0;
  *(undefined8 *)((long)puVar22 + -0x100) = 0x451015c;
  __this_00 = pTVar25;
  uVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
  if ((char)uVar8 != '\0') goto label_0451027a;
  pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
  if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
    if (*(char *)&(pTVar16->fields).m_Mesh == '\0') {
label_0451027a:
      return (int32_t)pTVar16;
    }
    pSVar10 = (System_String_o *)__this_04->m_Items[4];
    pMVar26 = (MethodInfo *)0x0;
    *(undefined8 *)((long)puVar22 + -0x100) = 0x4510189;
    uVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
    if ((char)uVar8 == '\0') {
      pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_04->m_Items[7];
      if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_0451027a;
      bVar1 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
      pMVar26 = (MethodInfo *)__this_04->m_Items[4];
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)puVar22 + -0x100) = 0x4510265;
      uVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar3,(System_String_o *)pMVar26,(uint)bVar1,(MethodInfo *)0x0);
      pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
      cVar5 = (char)uVar8;
    }
    else {
      cVar5 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
    }
    if (cVar5 == '\0') goto label_0451027a;
    pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
    __this_00 = (TMPro_TMP_InputField_o *)0x0;
    if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
      pMVar26 = (MethodInfo *)0x0;
      *(undefined8 *)((long)puVar22 + -0x100) = 0x45101b2;
      uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar16,(MethodInfo *)0x0);
      pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
      __this_00 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
        pTVar25 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
        pMVar26 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar22 + -0x100) = 0x45101c8;
        uVar9 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar16,(MethodInfo *)0x0);
        if ((int)uVar8 <= (int)uVar9) {
          uVar9 = uVar8;
        }
        pSVar15 = (System_Object_array *)(ulong)uVar9;
        pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
        __this_00 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
          pMVar26 = (MethodInfo *)0x0;
          *(undefined8 *)((long)puVar22 + -0x100) = 0x45101e5;
          uVar8 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar16,(MethodInfo *)0x0);
          pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
          __this_00 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
            *(undefined8 *)((long)puVar22 + -0x100) = 0x45101fb;
            uVar31 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar16,(MethodInfo *)0x0);
            if ((int)uVar8 < (int)uVar31) {
              uVar8 = uVar31;
            }
            pTVar25 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
            *(undefined8 *)((long)puVar22 + -0x100) = 0x451020d;
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                      ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,uVar9,uVar8,
                       (MethodInfo *)in_RCX);
            uVar8 = *(uint *)(__this_04->m_Items + 0xc);
            pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
            if (((int)uVar8 < 0) || (*(int32_t *)((long)__this_04->m_Items + 100) <= (int)uVar8)) {
              __this_04->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
              goto label_0451027a;
            }
            pMVar26 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar22 + -0x100) = 0x4510228;
            uVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
            pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
            if ((char)uVar8 != '\0') goto label_0451027a;
            uVar8 = *(uint *)(__this_04->m_Items + 0xc);
            pTVar16 = (TMPro_TMP_InputField_o *)(ulong)uVar8;
            if (*(uint *)(__this_04->m_Items + 0xd) == uVar8) {
              uVar9 = *(int32_t *)((long)__this_04->m_Items + 100);
              if (*(int32_t *)((long)__this_04->m_Items + 0x6c) == uVar9) goto label_0451027a;
            }
            else {
              uVar9 = *(int32_t *)((long)__this_04->m_Items + 100);
            }
            in_RCX = (MethodInfo_24E85B0 **)(ulong)uVar9;
            *(uint *)(__this_04->m_Items + 0xd) = uVar8;
            *(uint *)((long)__this_04->m_Items + 0x6c) = uVar9;
            *(undefined8 *)((long)puVar22 + -0x100) = 0x451029d;
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                      ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,pMVar26);
            pTVar16 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
            __this_00 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar16 != (TMPro_TMP_InputField_o *)0x0) {
              pSVar10 = (System_String_o *)__this_04->m_Items[3];
              *(undefined8 *)((long)puVar22 + -0x100) = 0x45102b1;
              node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
              *(undefined8 *)((long)puVar22 + -200) = 0;
              *(undefined8 *)((long)puVar22 + -0xc0) = 0;
              *(undefined8 *)((long)puVar22 + -0xd8) = 0;
              *(undefined8 *)((long)puVar22 + -0xd0) = 0;
              *(undefined8 *)((long)puVar22 + -0x100) = 0x45102d3;
              Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                        ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                         *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)puVar22 + -0xf8),
                         (System_String_o *)((long)puVar22 + -0xd8),(UnityEngine_GameObject_o *)pSVar10,node,
                         (MethodInfo *)0x0);
              pSVar10 = (System_String_o *)__this_04->m_Items[3];
              if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                *(undefined8 *)((long)puVar22 + -0x100) = 0x45102ef;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)puVar22 + -0xe8) = *(undefined8 *)((long)puVar22 + -200);
              *(undefined8 *)((long)puVar22 + -0xe0) = *(undefined8 *)((long)puVar22 + -0xc0);
              *(undefined8 *)((long)puVar22 + -0xf8) = *(undefined8 *)((long)puVar22 + -0xd8);
              *(undefined8 *)((long)puVar22 + -0xf0) = *(undefined8 *)((long)puVar22 + -0xd0);
              *(undefined8 *)((long)puVar22 + -0x100) = 0x451030e;
              Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                        ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                         *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)puVar22 + -0xf8),
                         pSVar10,0,(MethodInfo *)0x0);
              pTVar16 = extraout_RAX_02;
              goto label_0451027a;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)puVar22 + -0x100) = 0x4510318;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x100) = pTVar25;
  *(System_Object_array **)((long)puVar22 + -0x108) = __this_03;
  *(System_Object_array **)((long)puVar22 + -0x110) = pSVar15;
  *(System_Object_array **)((long)puVar22 + -0x118) = __this_04;
  *(long *)((long)puVar22 + -0x120) = auVar32._0_8_;
  pTVar25 = (TMPro_TMP_InputField_o *)(auVar32._8_8_ & 0xffffffff);
  fVar30 = auVar32._8_4_;
  unaff_RBP = (ulong)pMVar26 & 0xffffffff;
  fVar23 = SUB84(pMVar26,0);
  if (g_data_057aed85 == '\0') {
    *(undefined8 *)((long)puVar22 + -0x128) = 0x4510344;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed85 = '\x01';
  }
  pTVar11 = *(TMPro_TMP_InputField_o **)&(__this_00->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar22 + -0x128) = 0x4510367;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)0x0;
  *(undefined8 *)((long)puVar22 + -0x128) = 0x4510373;
  pTVar16 = pTVar11;
  uVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar21 = (ulong)uVar8;
  if ((char)uVar8 != '\0') {
label_045103da:
    return (int32_t)uVar21;
  }
  uVar21 = *(ulong *)&(__this_00->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (uVar21 != 0) {
    in_RCX = (MethodInfo_24E85B0 **)0x0;
    if (*(long *)(uVar21 + 0x220) != 0) {
      fVar18 = *(float *)(*(long *)(uVar21 + 0x220) + 0x10);
      fVar19 = fVar23;
      if ((int)fVar18 <= (int)fVar23) {
        fVar19 = fVar18;
      }
      if ((int)fVar23 < 0) {
        fVar19 = 0.0;
      }
      if ((int)fVar30 < (int)fVar18) {
        fVar18 = fVar30;
      }
      if ((int)fVar30 < 0) {
        fVar18 = 0.0;
      }
      if (fVar19 == fVar18) {
        if (*(char *)(uVar21 + 0x270) != '\0') {
          *(undefined8 *)&(__this_00->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
        }
      }
      else {
        fVar23 = fVar18;
        if ((int)fVar19 <= (int)fVar18) {
          fVar23 = fVar19;
        }
        uVar21 = (ulong)(uint)fVar23;
        (__this_00->fields).m_Colors.fields.m_PressedColor.fields.a = fVar23;
        if ((int)fVar18 <= (int)fVar19) {
          fVar18 = fVar19;
        }
        (__this_00->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar18;
      }
      goto label_045103da;
    }
  }
  *(undefined8 *)((long)puVar22 + -0x128) = 0x45103ea;
  il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)puVar22 + -0x128) = pTVar11;
  pUVar4 = (pTVar16->fields).m_Navigation.fields.m_SelectOnLeft;
  *(undefined8 *)((long)puVar22 + -0x130) = 0x4510405;
  uVar8 = System_String__op_Equality(pSVar10,(System_String_o *)pUVar4,(MethodInfo *)0x0);
  uVar17 = (ulong)uVar8;
  if ((char)uVar8 == '\0') {
label_04510421:
    return (int32_t)uVar17;
  }
  pUVar4 = (pTVar16->fields).m_Navigation.fields.m_SelectOnLeft;
  *(undefined8 *)((long)puVar22 + -0x130) = 0x4510414;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pUVar4,(MethodInfo *)0x0);
  uVar17 = CONCAT44(extraout_var,bVar6);
  if ((char)bVar6 == '\0') {
    pGVar3 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)
              &(pTVar16->fields).m_Colors.fields.m_NormalColor.fields.g;
    if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      bVar1 = *(byte *)((long)&(pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
      pUVar4 = (pTVar16->fields).m_Navigation.fields.m_SelectOnLeft;
      in_RCX = (MethodInfo_24E85B0 **)0x0;
      *(undefined8 *)((long)puVar22 + -0x130) = 0x451043e;
      bVar6 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar3,(System_String_o *)pUVar4,(uint)bVar1,(MethodInfo *)0x0);
      uVar17 = CONCAT44(extraout_var_00,bVar6);
      cVar5 = (char)bVar6;
      goto joined_r0x04510440;
    }
  }
  else {
    cVar5 = *(char *)((long)&(pTVar16->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
joined_r0x04510440:
    if (cVar5 != '\0') goto label_04510421;
  }
  uVar21 = *(ulong *)((long)puVar22 + -0x128);
  puVar22 = (undefined8 *)((long)puVar22 + -0x120);
  ppSVar27 = (System_String_o **)ppMVar28;
  goto Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x45097f0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor (const MethodInfo* method);
// 0x4509800

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  Il2CppObject *__this;
  
  if (g_data_057aed46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"#B7F8C8FF");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"#8CEBFFFF");
    il2cpp_runtime_helper_023445d0(&"#A8F5D6FF");
    il2cpp_runtime_helper_023445d0(&"#97F0E8FF");
    g_data_057aed46 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "#FFFFFFFF";
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "#FFFFFFFF";
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "#FFFFFFFF";
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "#FFFFFFFF";
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38);
            **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) = lVar2;
            il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8),lVar2);
            lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
            if (lVar2 == 0) goto label_04509a86;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = "#B7F8C8FF";
              il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
              if (1 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x28) = "#A8F5D6FF";
                il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x30) = "#97F0E8FF";
                  il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
                  if (3 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x38) = "#8CEBFFFF";
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x38);
                    lVar1 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(long *)(lVar1 + 8) = lVar2;
                    il2cpp_runtime_helper_022b4080(lVar1 + 8,lVar2);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x30) = "Normal";
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x38) = "Normal";
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x38);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x40) = "None";
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x40);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x48) = "Color";
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x48);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04509a86:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aed47 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


