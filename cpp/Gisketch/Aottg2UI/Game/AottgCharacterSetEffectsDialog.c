// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterSetEffectsDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor (const MethodInfo* method);
// 0x41d6910

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704e71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704e71 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, const MethodInfo* method);
// 0x41d6980

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_0 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41d6990

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c__<BuildBody>b__31_0
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
  System_Action_GisketchActionContext__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  MethodInfo *method_00;
  undefined1 auStack_4c [12];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  method_00 = (MethodInfo *)row;
  if (DAT_05704e72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_SelectEffect);
    il2cpp_init_method_metadata(&MethodInfo_Void_SelectFont);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"profile-character-set-effects-type");
    il2cpp_init_method_metadata(&"profile-character-set-effects-font");
    DAT_05704e72 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  cVar1 = *(char *)(lVar3 + 0x51);
  cVar2 = *(char *)(lVar3 + 0x50);
  pSVar4 = *(System_String_o **)(lVar3 + 0x40);
  if (DAT_05704e19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectType);
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e19 = '\x01';
  }
  auStack_4c._0_4_ = 0;
  value = "Color";
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    method_00 = (MethodInfo *)auStack_4c;
    bVar5 = PatreonEffects_NameEffectPresets__TryResolve
                      (pSVar4,(int32_t *)method_00,(MethodInfo *)0x0);
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
  pSVar7 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Select
                       (row,"profile-character-set-effects-type",value,pGVar6,pSVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0
                       );
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704e77 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e77 = '\x01';
    }
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).choiceOptions = "profile-character-effect-preview";
      il2cpp_runtime_glue();
    }
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
      il2cpp_runtime_glue(&(pGVar8->fields).search);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38);
      pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options
                         ((uint)*(byte *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51),
                          (MethodInfo *)pGVar10);
      pSVar7 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Select
                         (row,"profile-character-set-effects-font",pSVar4,pGVar6,pSVar7,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,
                          (MethodInfo *)0x0);
      if (DAT_05704e78 == '\0') {
        il2cpp_init_method_metadata();
        DAT_05704e78 = '\x01';
      }
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).choiceOptions = "profile-character-font-preview";
        il2cpp_runtime_glue();
      }
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                           (System_String_o *)0x0,0.0,pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
        il2cpp_runtime_glue(&(pGVar8->fields).search,pGVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_1 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x41d6e90

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c__<BuildBody>b__31_1
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (DAT_05704e73 == '\0') {
    il2cpp_init_method_metadata(&"calloutText");
    il2cpp_init_method_metadata(&"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.");
    il2cpp_init_method_metadata(&"MainMenu.Profile.TextColorHelp");
    DAT_05704e73 = '\x01';
  }
  if (callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (callout,"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.","calloutText",(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "MainMenu.Profile.TextColorHelp";
      il2cpp_runtime_glue(&(pGVar1->fields).textKey);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__31_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__31_2 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41d6f30

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c__<BuildBody>b__31_2
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  MethodInfo *method_00;
  int iVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (DAT_05704e74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass31_0);
    il2cpp_init_method_metadata(&"-slot");
    il2cpp_init_method_metadata(&"clear");
    DAT_05704e74 = '\x01';
  }
  iVar6 = 0;
  iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) == 0) break;
    if (*(int *)(**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x18) <= iVar6) {
      return;
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass31_0);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Il2CppObject *)0x0) break;
    *(int *)&__this_00[1].klass = iVar6;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    uVar2 = *(undefined4 *)&__this_00[1].klass;
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uStack_38 = uVar2;
    if (DAT_05704e6d == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
      DAT_05704e6d = '\x01';
    }
    pSVar4 = System_Int32__ToString((int32_t)&uStack_38,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,"-slot",(MethodInfo *)0x0);
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    method_00 = "clear";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (row,(System_String_o *)"clear",build,pSVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible
                      (*(int32_t *)&__this_00[1].klass,method_00);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    *(char *)((long)&(pGVar5->fields).hasIcon + 2) = (char)bVar3;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
    uStack_34 = *(undefined4 *)&__this_00[1].klass;
    if (DAT_05704e6e == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects.draft-color-");
      il2cpp_init_method_metadata(&".visible");
      DAT_05704e6e = '\x01';
    }
    pSVar4 = System_Int32__ToString((int32_t)&uStack_34,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("profile-character-set-effects.draft-color-",pSVar4,".visible",(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
    (__this_01->fields).alignItems = pSVar4;
    il2cpp_runtime_glue(&(__this_01->fields).alignItems,pSVar4);
    (pGVar5->fields).contentLayout = __this_01;
    il2cpp_runtime_glue(&(pGVar5->fields).contentLayout);
    iVar6 = iVar6 + 1;
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x41d71f0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass31_0$$<BuildBody>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0___BuildBody_b__3 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* swatch, const MethodInfo* method);
// 0x41d7200

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_<>c__DisplayClass31_0__<BuildBody>b__3
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass31_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *swatch,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  System_String_o *value;
  undefined8 in_RAX;
  System_String_o *pSVar4;
  System_String_o *label;
  System_Action_GisketchActionContext__o *save;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704e75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyDraftColor);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_05704e75 = '\x01';
  }
  uStack_38._0_4_ = (uint)(ushort)uStack_38;
  iVar1 = (__this->fields).index;
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uStack_38 = CONCAT44(iVar1,(uint)uStack_38);
  if (DAT_05704e6d == '\0') {
    il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
    DAT_05704e6d = '\x01';
  }
  pSVar4 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
  uStack_38._0_4_ = CONCAT22((short)(__this->fields).index + 0x41,(ushort)uStack_38);
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  label = System_Char__ToString((short)&uStack_38 + 2,(MethodInfo *)0x0);
  lVar3 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  if (lVar3 != 0) {
    uVar2 = (__this->fields).index;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
    save = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIColorPicker);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
              (__this_00,pSVar4,label,value,save,1,1,1,(MethodInfo *)0x0);
    if (swatch != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (swatch,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x41d3040

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704e51 == '\0') {
    il2cpp_init_method_metadata(&"Set Effects");
    DAT_05704e51 = '\x01';
  }
  return "Set Effects";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x41d3070

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704e52 == '\0') {
    il2cpp_init_method_metadata(&"UI/Icons/Profile/SparkleIcon");
    DAT_05704e52 = '\x01';
  }
  return "UI/Icons/Profile/SparkleIcon";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x41d30a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704e53 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704e53 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(760.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x41d3170

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704e54 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_05704e54 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* targetId, System_String_o* label, System_String_o* effectPrefix, bool textEditable, const MethodInfo* method);
// 0x41d3230

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *targetId,
               System_String_o *label,System_String_o *effectPrefix,bool_conflict textEditable,
               MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar4;
  uint uVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  code cVar7;
  ulong uVar8;
  MethodInfo *pMVar9;
  long lVar10;
  
  if (DAT_05704e55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"profile-character-set-effects");
    DAT_05704e55 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x10) = targetId;
  il2cpp_runtime_glue(pIVar2 + 0x10,targetId);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x18) = label;
  il2cpp_runtime_glue(pIVar2 + 0x18,label);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x20) = effectPrefix;
  il2cpp_runtime_glue(pIVar2 + 0x20,effectPrefix);
  TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x52] = SUB41(textEditable,0);
  bVar4 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x51] = SUB41(bVar4,0);
  pSVar6 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value(targetId,pSVar6,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x28) = pSVar6;
  il2cpp_runtime_glue(pIVar2 + 0x28);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  cVar7 = (code)0x0;
  pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(effectPrefix,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x30) = pSVar6;
  il2cpp_runtime_glue(pIVar2 + 0x30,pSVar6);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(undefined8 *)(pIVar2 + 0x38) = *(undefined8 *)(pIVar2 + 0x30);
  il2cpp_runtime_glue(pIVar2 + 0x38);
  if (TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x51] != (Il2CppMethodPointer)0x0) {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                      (effectPrefix,(MethodInfo *)0x0);
    cVar7 = SUB41(bVar4,0);
  }
  pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
    pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
    TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] = cVar7;
  }
  else {
    TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] = cVar7;
  }
  if (cVar7 == (code)0x0) {
    iVar1 = *(int *)((long)&pMVar9[2].parameters + 4);
    pSVar6 = "None";
  }
  else {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType
                       (effectPrefix,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  pIVar2 = pMVar9[2].virtualMethodPointer;
  *(System_String_o **)(pIVar2 + 0x40) = pSVar6;
  il2cpp_runtime_glue(pIVar2 + 0x40,pSVar6);
  pIVar2 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(undefined8 *)(pIVar2 + 0x48) = "Color";
  il2cpp_runtime_glue(pIVar2 + 0x48);
  lVar10 = 0x20;
  uVar8 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar8) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      pMVar9 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)context.fields.GameObject,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) break;
        pMVar9 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo;
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_GameObject__GetComponentInParent<object>
                         (context.fields.GameObject,(MethodInfo_24F1450 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
      }
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
        il2cpp_init_class();
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar9);
        pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
      }
      else {
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar9);
        pMVar9 = TypeInfo_AottgCharacterSetEffectsDialog;
      }
      TypeInfo_AottgCharacterSetEffectsDialog = pMVar9;
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this = (root->fields)._codeActions;
        if (__this != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          if (*(int *)((long)&pMVar9[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar9);
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"profile-character-set-effects.text-colors.enabled",uVar5 & 0xff,
                     (MethodInfo *)0x0);
        }
        __this_00 = (root->fields)._Theme_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"profile-character-set-effects",1
                     ,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
      lVar3 = *(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
                       (effectPrefix,(int32_t)uVar8,(MethodInfo *)0x0);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(System_String_o **)(lVar3 + lVar10) = pSVar6;
    il2cpp_runtime_glue(lVar3 + lVar10);
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 8;
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41d3a30

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
  Il2CppMethodPointer pIVar8;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this_00;
  System_Action_AottgUi__o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  MethodInfo *pMVar13;
  System_String_o *previewEffectType;
  System_Collections_Generic_IList_string__o *previewEffectColors;
  bool_conflict bVar7;
  
  if (DAT_05704e56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_Action_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplySelectedTextColor);
    il2cpp_init_method_metadata(&MethodInfo_Void_ImportedColoredText);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__31_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__31_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__31_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profile-character-set-effects-text-color-help");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"SpaceEvenly");
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"callout");
    il2cpp_init_method_metadata(&"profile-character-set-effects-select-row");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"#FFFFFF");
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_init_method_metadata(&"profile-character-set-effects-text-picker");
    il2cpp_init_method_metadata(&"row");
    il2cpp_init_method_metadata(&"profile-character-set-effects.effect-colors.visible");
    il2cpp_init_method_metadata(&"profile-character-set-effects-effect-colors");
    DAT_05704e56 = '\x01';
  }
  pMVar13 = TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)&TypeInfo_AottgCharacterStyleChoicePreview[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(pMVar13);
  save = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            ("profile-character-set-effects-text-picker","#FFFFFF",save,0,1,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x28);
  uVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(TypeInfo_AottgCharacterSetEffectsDialog);
  cVar1 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x52];
  imported = (System_Action_GameObject__o *)il2cpp_runtime_glue(TypeInfo_Action_GameObject);
  previewEffectType = (System_String_o *)0x0;
  System_Action<object>___ctor();
  colorsEnabledKey = "profile-character-set-effects.text-colors.enabled";
  pickerId = "profile-character-set-effects-text-picker";
  pIVar8 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  if (pIVar8[0x50] != (Il2CppMethodPointer)0x0) {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pIVar8 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    }
    previewEffectType = *(System_String_o **)(pIVar8 + 0x40);
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] == (Il2CppMethodPointer)0x0) goto LAB_041d40bd;
LAB_041d3d08:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    previewEffectColors =
         *(System_Collections_Generic_IList_string__o **)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  else {
    if (TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer[0x50] != (Il2CppMethodPointer)0x0) goto LAB_041d3d08;
LAB_041d40bd:
    previewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
    iVar2 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  previewFont = *(System_String_o **)(TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x38);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)
              il2cpp_runtime_glue(TypeInfo_AottgCharacterTextColorEditor);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
            (__this_00,pSVar3,pickerId,colorsEnabledKey,uVar6 & 0xff,(uint)(byte)cVar1,imported,
             previewEffectType,previewEffectColors,previewFont,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_041d4341;
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "row";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar4 + 8) = pSVar9;
    il2cpp_runtime_glue(lVar4 + 8,pSVar9);
  }
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,10.0,pGVar10,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,pSVar3,pSVar9,"profile-character-set-effects-select-row",pGVar11,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "callout";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar4 + 0x10) = pSVar9;
    il2cpp_runtime_glue(lVar4 + 0x10,pSVar9);
  }
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(84.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                       (System_String_o *)0x0,0.0,pGVar10,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (body,pSVar3,pSVar9,"profile-character-set-effects-text-color-help",pGVar11,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (DAT_05704e63 == '\0') goto LAB_041d40e3;
LAB_041d4082:
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) != 0) goto LAB_041d408f;
LAB_041d4103:
    pMVar13 = TypeInfo_AottgCharacterSetEffectsDialog;
    il2cpp_init_class();
    bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar13);
    uVar5 = (undefined1)bVar7;
  }
  else {
    if (DAT_05704e63 != '\0') goto LAB_041d4082;
LAB_041d40e3:
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    DAT_05704e63 = '\x01';
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) goto LAB_041d4103;
LAB_041d408f:
    bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(TypeInfo_AottgCharacterSetEffectsDialog);
    uVar5 = (undefined1)bVar7;
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    *(undefined1 *)((long)&(pGVar12->fields).hasIcon + 2) = uVar5;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar11,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar11->fields).alignItems = "profile-character-set-effects.text-color-help.visible";
      il2cpp_runtime_glue(&(pGVar11->fields).alignItems);
      (pGVar12->fields).contentLayout = pGVar11;
      il2cpp_runtime_glue(&(pGVar12->fields).contentLayout,pGVar11);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = "row";
      pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
        System_Action<object>___ctor();
        lVar4 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar4 + 0x18) = pSVar9;
        il2cpp_runtime_glue(lVar4 + 0x18,pSVar9);
      }
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Row","SpaceEvenly","Center",(System_String_o *)0x0,
                           (System_String_o *)0x0,10.0,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (body,pSVar3,pSVar9,"profile-character-set-effects-effect-colors",pGVar11,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      pMVar13 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(pMVar13);
      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(char *)((long)&(pGVar12->fields).hasIcon + 2) = (char)bVar7;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar11,(MethodInfo *)0x0
                  );
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar11->fields).alignItems = "profile-character-set-effects.effect-colors.visible";
          il2cpp_runtime_glue(&(pGVar11->fields).alignItems);
          (pGVar12->fields).contentLayout = pGVar11;
          il2cpp_runtime_glue(&(pGVar12->fields).contentLayout,pGVar11);
          return;
        }
      }
    }
  }
LAB_041d4341:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x41d4640

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  
  if (DAT_05704e57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_Cancel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Save);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704e57 = '\x01';
  }
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel",pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary(footer,"Save",pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Cancel (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d4720

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Cancel
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *prefix;
  System_String_o *font;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (DAT_05704e58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704e58 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  prefix = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
  font = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(prefix,font,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (context.fields.GameObject,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x30),
             method_00);
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponentInParent<object>
                       (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[0xb].klass != (Il2CppClass *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pIVar1[0xb].klass,1,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d4930

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  uint uVar5;
  long lVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Il2CppObject *pIVar7;
  int iVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  byte bVar10;
  MethodInfo *key;
  
  if (DAT_05704e59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_init_method_metadata(&"None");
    DAT_05704e59 = '\x01';
  }
  pSVar2 = "Color";
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = ((context.fields.Node)->fields).value;
  }
  if (DAT_05704e17 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e17 = '\x01';
  }
  bVar4 = System_String__op_Equality(pSVar2,"Color",(MethodInfo *)0x0);
  if ((((char)bVar4 == '\0') &&
      (bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0),
      (char)bVar4 == '\0')) &&
     (bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
     (char)bVar4 == '\0')) {
    iVar8 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    pSVar3 = "Color";
  }
  else {
    iVar8 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    pSVar3 = pSVar2;
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
  }
  lVar6 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  *(System_String_o **)(lVar6 + 0x48) = pSVar3;
  il2cpp_runtime_glue(lVar6 + 0x48,pSVar3);
  if (*(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x51) == '\0') {
    bVar10 = 0;
    iVar8 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    if (DAT_05704e17 == '\0') {
      il2cpp_init_method_metadata(&"FourColorGradient");
      il2cpp_init_method_metadata(&"TwoColorGradient");
      il2cpp_init_method_metadata(&"Color");
      DAT_05704e17 = '\x01';
    }
    bVar4 = System_String__op_Equality(pSVar2,"Color",(MethodInfo *)0x0);
    bVar10 = 1;
    if (((char)bVar4 == '\0') &&
       (bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0)
       , (char)bVar4 == '\0')) {
      bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
      bVar10 = (byte)bVar4;
    }
    bVar10 = bVar10 ^ 1;
    iVar8 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
    iVar8 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  lVar6 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  *(byte *)(lVar6 + 0x50) = bVar10;
  pSVar3 = "None";
  if (bVar10 != 0) {
    pSVar3 = pSVar2;
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
    lVar6 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  }
  *(System_String_o **)(lVar6 + 0x40) = pSVar3;
  il2cpp_runtime_glue(lVar6 + 0x40,pSVar3);
  lVar6 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  if (*(char *)(lVar6 + 0x50) == '\0') {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
    }
    else {
      pSVar2 = *(System_String_o **)(lVar6 + 0x48);
    }
    if (DAT_05704e18 == '\0') {
      il2cpp_init_method_metadata(&"FourColorGradient");
      il2cpp_init_method_metadata(&"TwoColorGradient");
      DAT_05704e18 = '\x01';
    }
    pMVar9 = "TwoColorGradient";
    bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
    if (((char)bVar4 == '\0') &&
       (pMVar9 = "FourColorGradient",
       bVar4 = System_String__op_Equality(pSVar2,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0),
       (char)bVar4 == '\0')) {
      iVar8 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
                (context.fields.GameObject,pMVar9);
      iVar8 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else {
    pMVar9 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      pMVar9 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
              (context.fields.GameObject,*(System_String_o **)(lVar6 + 0x40),pMVar9);
    iVar8 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pMVar9 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar9 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo;
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_GameObject__GetComponentInParent<object>
                     (context.fields.GameObject,(MethodInfo_24F1450 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar9);
  uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled
                    ((MethodInfo *)root);
  key = "profile-character-set-effects.text-colors.enabled";
  if (DAT_05704e6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704e6a = '\x01';
  }
  if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
      (pMVar9 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo,
      pIVar7 = UnityEngine_GameObject__GetComponentInParent<object>
                         (context.fields.GameObject,(MethodInfo_24F1450 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo),
      pIVar7 != (Il2CppObject *)0x0)) && (pIVar7[9].klass != (Il2CppClass *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pIVar7[9].klass,(System_String_o *)key,
               uVar5 & 0xff,(MethodInfo *)0x0);
    pMVar9 = key;
  }
  cVar1 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (cVar1 != '\0') {
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
              (context.fields.GameObject,pMVar9);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
            (context.fields.GameObject,pMVar9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d5460

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_String_o *font;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  
  if (DAT_05704e5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704e5a = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar4 = &"Normal";
  }
  else {
    ppSVar4 = &((context.fields.Node)->fields).value;
  }
  pSVar5 = *ppSVar4;
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
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
      il2cpp_init_class();
    }
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  *(System_String_o **)(lVar3 + 0x38) = pSVar5;
  il2cpp_runtime_glue(lVar3 + 0x38,pSVar5);
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20);
  font = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar5,font,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (context.fields.GameObject,*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38),
             method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadPresetColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors (UnityEngine_GameObject_o* source, System_String_o* type, const MethodInfo* method);
// 0x41d4df0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
               (UnityEngine_GameObject_o *source,System_String_o *type,MethodInfo *method)

{
  int iVar1;
  System_String_o *value;
  undefined8 in_RAX;
  System_String_array *pSVar2;
  long lVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  ulong uVar5;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)type;
  uStack_38 = in_RAX;
  if (DAT_05704e5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_05704e5b = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(type,method_00);
  if (pSVar2 == (System_String_array *)0x0) {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) != 0) {
      if (*(int *)(**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x18) < 1) {
        return;
      }
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
    }
LAB_041d4fe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar5 = 0;
  iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    lVar3 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (lVar3 == 0) goto LAB_041d4fe0;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
      return;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    }
    if ((uint)pSVar2->max_length <= uVar5) break;
    if (lVar3 == 0) goto LAB_041d4fe0;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) break;
    *(System_String_o **)(lVar3 + 0x20 + uVar5 * 8) = pSVar2->m_Items[uVar5];
    il2cpp_runtime_glue(lVar3 + uVar5 * 8 + 0x20);
    uStack_38 = CONCAT44((int)uVar5,(undefined4)uStack_38);
    if (DAT_05704e6d == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
      DAT_05704e6d = '\x01';
    }
    pSVar4 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
    lVar3 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (lVar3 == 0) goto LAB_041d4fe0;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) break;
    value = *(System_String_o **)(lVar3 + 0x20 + uVar5 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar4,value,1,source,(MethodInfo *)0x0);
    uVar5 = uVar5 + 1;
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadGradientColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d4ff0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  System_String_o *value;
  undefined8 in_RAX;
  long *plVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704e5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_05704e5c = '\x01';
  }
  uVar6 = 0;
  iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    plVar4 = *(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (*plVar4 == 0) {
LAB_041d5185:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((long)*(int *)(*plVar4 + 0x18) <= (long)uVar6) {
      return;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      plVar4 = *(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    }
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_041d5185;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_041d518a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_041d5185;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_041d518a;
    *(undefined8 *)(lVar3 + 0x20 + uVar6 * 8) = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
    il2cpp_runtime_glue(lVar3 + uVar6 * 8 + 0x20);
    uStack_38 = CONCAT44((int)uVar6,(undefined4)uStack_38);
    if (DAT_05704e6d == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
      DAT_05704e6d = '\x01';
    }
    pSVar5 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
    lVar2 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (lVar2 == 0) goto LAB_041d5185;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_041d518a;
    value = *(System_String_o **)(lVar2 + 0x20 + uVar6 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar5,value,1,source,(MethodInfo *)0x0);
    uVar6 = uVar6 + 1;
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyDraftColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d5630

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  bool_conflict bVar5;
  int iVar6;
  undefined8 in_RAX;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  long lVar8;
  System_String_o *text;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704e5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"cancel");
    DAT_05704e5d = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,in_RSI);
  }
  else {
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,in_RSI);
  }
  if ((int)uVar4 < 0) {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_041d5846;
  lVar8 = (long)(int)uVar4;
  text = *(System_String_o **)(lVar3 + 0x20 + lVar8 * 8);
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
LAB_041d57b5:
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                          (text,1,(System_String_o *)0x0,(MethodInfo *)0x0);
    uVar1 = *(uint *)(lVar3 + 0x18);
  }
  else {
    bVar5 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      text = ((context.fields.Node)->fields).value;
      goto LAB_041d57b5;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uStack_38 = CONCAT44(uVar4,(undefined4)uStack_38);
    if (DAT_05704e6d == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
      DAT_05704e6d = '\x01';
    }
    pSVar7 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar7,text,1,(MethodInfo *)0x0)
    ;
    uVar1 = *(uint *)(lVar3 + 0x18);
  }
  if (uVar4 < uVar1) {
    *(MethodInfo **)(lVar3 + 0x20 + lVar8 * 8) = method_00;
    il2cpp_runtime_glue(lVar8 * 8 + 0x20 + lVar3);
    iVar6 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    if (iVar6 == 0) {
      il2cpp_init_class();
      iVar6 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
    }
    cVar2 = *(char *)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x50);
    if (iVar6 == 0) {
      il2cpp_init_class();
    }
    if (cVar2 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
                (context.fields.GameObject,method_00);
    }
    else {
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
                (context.fields.GameObject,method_00);
    }
    return;
  }
LAB_041d5846:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplySelectedTextColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d5960

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_o *hex;
  MethodInfo *in_RSI;
  
  if (DAT_05704e5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"save");
    il2cpp_init_method_metadata(&"cancel");
    il2cpp_init_method_metadata(&"#FFFFFF");
    il2cpp_init_method_metadata(&"profile-character-set-effects-text-picker");
    DAT_05704e5e = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
                     (context.fields.GameObject,in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
LAB_041d5a6c:
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    hex = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                    ("profile-character-set-effects-text-picker","#FFFFFF",0,(MethodInfo *)0x0);
    if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
    goto LAB_041d5ab6;
    uVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview
                  (__this,(MethodInfo *)0x0);
        return;
      }
      goto LAB_041d5ae5;
    }
    bVar1 = System_String__IsNullOrEmpty(((context.fields.Node)->fields).value,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto LAB_041d5a6c;
    hex = ((context.fields.Node)->fields).value;
LAB_041d5ab6:
    uVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"save",(MethodInfo *)0x0);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
              (__this,hex,uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
LAB_041d5ae5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ImportedColoredText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d5bb0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  System_String_o *value;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  ulong uVar6;
  MethodInfo *pMVar7;
  
  if (DAT_05704e5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_init_method_metadata(&"None");
    DAT_05704e5f = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  *(System_String_o **)(pIVar1 + 0x48) = "Color";
  il2cpp_runtime_glue(pIVar1 + 0x48);
  pIVar1 = TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer;
  pIVar1[0x50] = (code)0x0;
  *(undefined8 *)(pIVar1 + 0x40) = "None";
  il2cpp_runtime_glue(pIVar1 + 0x40);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pMVar7 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (source == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar7 = MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo;
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_GameObject__GetComponentInParent<object>
                     (source,(MethodInfo_24F1450 *)MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar7);
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._codeActions,
     __this != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
    pMVar7 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar7);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,"profile-character-set-effects.text-colors.enabled",uVar3 & 0xff,
               (MethodInfo *)0x0);
  }
  if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  value = "Color";
  if (DAT_05704e6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgChoiceControl___GetComponentsInChildren_Aot);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile-character-set-effects-type");
    DAT_05704e6c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar4 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0),
        pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar4,1,MethodInfo_AottgChoiceControl___GetComponentsInChildren_Aot),
       pSVar5 == (System_Object_array *)0x0)) {
LAB_041d5ecc:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar5->max_length) {
      uVar6 = 0;
      if ((pSVar5->max_length & 0xffffffff) != 0) {
        do {
          __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar5->m_Items[uVar6];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) ||
               (__this_01 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               __this_01 == (UnityEngine_Object_o *)0x0)) goto LAB_041d5ecc;
            a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,"profile-character-set-effects-type",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify
                        (__this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
          uVar6 = uVar6 + 1;
          uVar3 = (uint)pSVar5->max_length;
          if ((long)(int)uVar3 <= (long)uVar6) {
            return;
          }
        } while (uVar6 < uVar3);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41d5ee0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *method_00;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar5;
  undefined8 *puVar6;
  long *plVar8;
  Il2CppObject *pIVar9;
  int32_t count;
  MethodInfo *in_RSI;
  MethodInfo *pMVar10;
  char cVar11;
  ulong uVar12;
  long lVar7;
  
  if (DAT_05704e60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"None");
    DAT_05704e60 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
                     (context.fields.GameObject,in_RSI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
    lVar7 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (*(char *)(lVar7 + 0x51) != '\0') goto LAB_041d5fd6;
LAB_041d615f:
    cVar11 = '\0';
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    lVar7 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (*(char *)(lVar7 + 0x51) == '\0') goto LAB_041d615f;
LAB_041d5fd6:
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar7 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    }
    cVar11 = *(char *)(lVar7 + 0x50);
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  if (DAT_05704e18 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    DAT_05704e18 = '\x01';
  }
  pMVar10 = "TwoColorGradient";
  bVar3 = System_String__op_Equality(pSVar4,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  count = 2;
  if ((char)bVar3 == '\0') {
    pMVar10 = "FourColorGradient";
    bVar3 = System_String__op_Equality(pSVar4,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    count = 4;
    if ((char)bVar3 != '\0') goto LAB_041d6077;
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)
    goto LAB_041d63ad;
    method_00 = (System_String_array *)0x0;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
                       (__this,(MethodInfo *)0x0);
  }
  else {
LAB_041d6077:
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar10)
    ;
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)
    goto LAB_041d63ad;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                       (__this,(System_Collections_Generic_IList_string__o *)method_00,
                        (MethodInfo *)0x0);
  }
  if (cVar11 != '\0') {
    pGVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       (pSVar4,(MethodInfo *)method_00);
    if (pGVar5 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
    goto LAB_041d63ad;
    pSVar4 = (pGVar5->fields).Text;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = 0;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
            (context.fields.GameObject,pSVar2,pSVar4,(MethodInfo *)0x0);
  lVar7 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
  pSVar4 = *(System_String_o **)(lVar7 + 0x20);
  if (cVar11 == '\0') {
    puVar6 = &"None";
  }
  else {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar7 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    }
    puVar6 = (undefined8 *)(lVar7 + 0x40);
    bVar3 = 1;
  }
  pSVar2 = (System_String_o *)*puVar6;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect(pSVar4,bVar3,pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
            (*(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x20),
             *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x38),(MethodInfo *)0x0);
  iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    plVar8 = *(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (*plVar8 == 0) break;
    if ((long)*(int *)(*plVar8 + 0x18) <= (long)uVar12) {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
        plVar8 = *(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      }
      pMVar10 = (MethodInfo *)plVar8[2];
      pSVar4 = (System_String_o *)plVar8[7];
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                (context.fields.GameObject,(System_String_o *)pMVar10,pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
        il2cpp_init_class();
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,pMVar10)
        ;
      }
      else {
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,pMVar10)
        ;
      }
      if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
          (pIVar9 = UnityEngine_GameObject__GetComponentInParent<object>
                              (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo),
          pIVar9 != (Il2CppObject *)0x0)) && (pIVar9[0xb].klass != (Il2CppClass *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pIVar9[0xb].klass,1,
                   (MethodInfo *)0x0);
        return;
      }
      return;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      plVar8 = *(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    }
    pSVar4 = (System_String_o *)plVar8[4];
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
                       (pSVar4,(int32_t)uVar12,(MethodInfo *)0x0);
    lVar7 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = *(System_String_o **)(lVar7 + 0x20 + uVar12 * 8);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (pSVar4,pSVar2,1,context.fields.GameObject,(MethodInfo *)0x0);
    uVar12 = uVar12 + 1;
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
LAB_041d63ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled (const MethodInfo* method);
// 0x41d3940

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  long lVar4;
  
  if (DAT_05704e61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e61 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x52);
  }
  else {
    lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x52);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      cVar1 = *(char *)(lVar4 + 0x50);
    }
    else {
      cVar1 = *(char *)(lVar4 + 0x50);
    }
    if (cVar1 == '\0') {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
        lVar4 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      }
      bVar3 = System_String__op_Equality
                        (*(System_String_o **)(lVar4 + 0x48),"Color",(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorPanelVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible (const MethodInfo* method);
// 0x41d4530

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *a;
  uint uVar3;
  bool_conflict bVar4;
  ulong uVar5;
  
  if (DAT_05704e62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    DAT_05704e62 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    uVar5 = *(ulong *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(uVar5 + 0x50);
  }
  else {
    uVar5 = *(ulong *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
    cVar1 = *(char *)(uVar5 + 0x50);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
      a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
    }
    else {
      a = *(System_String_o **)(uVar5 + 0x48);
    }
    if (DAT_05704e18 == '\0') {
      il2cpp_init_method_metadata(&"FourColorGradient");
      il2cpp_init_method_metadata(&"TwoColorGradient");
      DAT_05704e18 = '\x01';
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
// 0x41d44d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_05704e63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    DAT_05704e63 = '\x01';
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
  il2cpp_init_class();
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(method_00);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible (int32_t index, const MethodInfo* method);
// 0x41d64f0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible
          (int32_t index,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  uint uVar2;
  undefined7 uVar3;
  int iVar4;
  
  if (DAT_05704e64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    DAT_05704e64 = '\x01';
    iVar4 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  else {
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  if (DAT_05704e18 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    DAT_05704e18 = '\x01';
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
// 0x41d36e0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  bool_conflict bVar3;
  uint uVar4;
  undefined8 in_RAX;
  MethodInfo *pMVar5;
  System_String_o *key;
  int index;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704e65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_init_method_metadata(&"profile-character-set-effects.effect-colors.visible");
    DAT_05704e65 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = (root->fields)._codeActions;
    if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return;
    }
    pMVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(pMVar5);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"profile-character-set-effects.effect-colors.visible",uVar4 & 0xff,
               (MethodInfo *)0x0);
    pGVar2 = (root->fields)._codeActions;
    if (DAT_05704e63 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
      DAT_05704e63 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      pMVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      pMVar5 = TypeInfo_AottgCharacterSetEffectsDialog;
    }
    TypeInfo_AottgCharacterSetEffectsDialog = pMVar5;
    if (iVar1 == 0) {
      il2cpp_init_class();
      uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar5);
    }
    else {
      uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(pMVar5);
    }
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      index = 0;
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,"profile-character-set-effects.text-color-help.visible",uVar4 & 0xff,
                 (MethodInfo *)0x0);
      iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        if (*(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer == 0) break;
        if (*(int *)(*(long *)TypeInfo_AottgCharacterSetEffectsDialog[2].virtualMethodPointer + 0x18) <= index) {
          return;
        }
        pGVar2 = (root->fields)._codeActions;
        if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        else {
        }
        uStack_38 = CONCAT44(index,(undefined4)uStack_38);
        if (DAT_05704e6e == '\0') {
          il2cpp_init_method_metadata(&"profile-character-set-effects.draft-color-");
          il2cpp_init_method_metadata(&".visible");
          DAT_05704e6e = '\x01';
        }
        pMVar5 = (MethodInfo *)System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
        key = System_String__Concat
                        ("profile-character-set-effects.draft-color-",(System_String_o *)pMVar5,".visible",(MethodInfo *)0x0);
        uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(index,pMVar5);
        if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) break;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar2,key,uVar4 & 0xff,
                   (MethodInfo *)0x0);
        index = index + 1;
        iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyGradientPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d52c0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  System_String_o *a;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *stops;
  int32_t count;
  MethodInfo *pMVar4;
  
  if (DAT_05704e66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e66 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  else {
    a = *(System_String_o **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x48);
  }
  if (DAT_05704e18 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    DAT_05704e18 = '\x01';
  }
  pMVar4 = "TwoColorGradient";
  bVar2 = System_String__op_Equality(a,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
  count = 2;
  if ((char)bVar2 == '\0') {
    pMVar4 = "FourColorGradient";
    uVar3 = System_String__op_Equality(a,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
    count = (uVar3 & 0xff) << 2;
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar4);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (count == 0) {
      if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  (__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient
                  (__this,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      stops = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar4);
      if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
                  (__this,(System_Collections_Generic_IList_string__o *)stops,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d5200

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  
  if (DAT_05704e67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e67 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview
              (__this,(System_String_o *)(*(undefined8 **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8))[8],
               (System_Collections_Generic_IList_string__o *)**(undefined8 **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyFontPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview (UnityEngine_GameObject_o* source, System_String_o* font, const MethodInfo* method);
// 0x41d4820

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
               (UnityEngine_GameObject_o *source,System_String_o *font,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  MethodInfo *pMVar2;
  
  if (DAT_05704e68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e68 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar2 = *(MethodInfo **)(*(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
            (source,(System_String_o *)pMVar2,font,(MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar2);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
              (__this,font,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)font;
  }
  if (*(int *)(TypeInfo_AottgCharacterNamePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(source,pMVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$GradientColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors (int32_t count, const MethodInfo* method);
// 0x41d63c0

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors
          (int32_t count,MethodInfo *method)

{
  long lVar1;
  System_String_array *pSVar2;
  ulong uVar3;
  System_String_o **ppSVar4;
  
  if (DAT_05704e69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05704e69 = '\x01';
  }
  pSVar2 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,count);
  if (0 < count) {
    if (pSVar2 == (System_String_array *)0x0) {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) != 0) &&
         (*(int *)(**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x18) == 0)) {
LAB_041d64c1:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_041d64c6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar4 = pSVar2->m_Items;
    uVar3 = 0;
    do {
      if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
      if (lVar1 == 0) goto LAB_041d64c6;
      if ((*(uint *)(lVar1 + 0x18) <= uVar3) || ((uint)pSVar2->max_length <= uVar3))
      goto LAB_041d64c1;
      *ppSVar4 = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
      il2cpp_runtime_glue(ppSVar4);
      uVar3 = uVar3 + 1;
      ppSVar4 = ppSVar4 + 1;
    } while ((uint)count != uVar3);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x41d5190

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,
               bool_conflict value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05704e6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    DAT_05704e6a = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d5af0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  
  if (DAT_05704e6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgCharacterTextColorEditorRuntime___GetCompon);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e6b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  if ((((source != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)pUVar2,1,MethodInfo_AottgCharacterTextColorEditorRuntime___GetCompon),
     pSVar3 != (System_Object_array *)0x0)) {
    if (0 < (int)pSVar3->max_length) {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pSVar3->m_Items[0];
    }
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetChoiceValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue (UnityEngine_GameObject_o* source, System_String_o* value, const MethodInfo* method);
// 0x41d5d40

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue
               (UnityEngine_GameObject_o *source,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  ulong uVar5;
  
  if (DAT_05704e6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgChoiceControl___GetComponentsInChildren_Aot);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile-character-set-effects-type");
    DAT_05704e6c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
        pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_AottgChoiceControl___GetComponentsInChildren_Aot),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_041d5ecc:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) ||
               (__this_00 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_Object_o *)0x0)) goto LAB_041d5ecc;
            a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,"profile-character-set-effects-type",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify
                        (__this,value,(MethodInfo *)0x0);
              return;
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar5) {
            return;
          }
        } while (uVar5 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId (int32_t index, const MethodInfo* method);
// 0x41d55e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId
          (int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_05704e6d == '\0') {
    il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
    DAT_05704e6d = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorVisibleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey (int32_t index, const MethodInfo* method);
// 0x41d6610

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey
          (int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_05704e6e == '\0') {
    il2cpp_init_method_metadata(&"profile-character-set-effects.draft-color-");
    il2cpp_init_method_metadata(&".visible");
    DAT_05704e6e = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-character-set-effects.draft-color-",pSVar1,".visible",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex (System_String_o* id, const MethodInfo* method);
// 0x41d5850

int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                  (System_String_o *id,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  int iVar4;
  int local_2c;
  
  if (DAT_05704e6f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    DAT_05704e6f = '\x01';
  }
  iVar4 = 0;
  iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(int *)(**(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) + 0x18) <= iVar4) {
      return -1;
    }
    if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = iVar4;
    if (DAT_05704e6d == '\0') {
      il2cpp_init_method_metadata(&"profile-character-set-effects-draft-color-");
      DAT_05704e6d = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(id,pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') break;
    iVar4 = iVar4 + 1;
    iVar1 = *(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4);
  }
  return iVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x41d6670

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor (const MethodInfo* method);
// 0x41d6680

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05704e70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"#B7F8C8FF");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"#8CEBFFFF");
    il2cpp_init_method_metadata(&"#A8F5D6FF");
    il2cpp_init_method_metadata(&"#97F0E8FF");
    DAT_05704e70 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "#FFFFFFFF";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "#FFFFFFFF";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "#FFFFFFFF";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "#FFFFFFFF";
            il2cpp_runtime_glue(lVar2 + 0x38);
            **(long **)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8) = lVar2;
            il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8),lVar2);
            lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
            if (lVar2 == 0) goto LAB_041d6906;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = "#B7F8C8FF";
              il2cpp_runtime_glue(lVar2 + 0x20);
              if (1 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x28) = "#A8F5D6FF";
                il2cpp_runtime_glue(lVar2 + 0x28);
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x30) = "#97F0E8FF";
                  il2cpp_runtime_glue(lVar2 + 0x30);
                  if (3 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x38) = "#8CEBFFFF";
                    il2cpp_runtime_glue(lVar2 + 0x38);
                    lVar1 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(long *)(lVar1 + 8) = lVar2;
                    il2cpp_runtime_glue(lVar1 + 8,lVar2);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x30) = "Normal";
                    il2cpp_runtime_glue(lVar2 + 0x30);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x38) = "Normal";
                    il2cpp_runtime_glue(lVar2 + 0x38);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x40) = "None";
                    il2cpp_runtime_glue(lVar2 + 0x40);
                    lVar2 = *(long *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xb8);
                    *(undefined8 *)(lVar2 + 0x48) = "Color";
                    il2cpp_runtime_glue(lVar2 + 0x48);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041d6906:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


