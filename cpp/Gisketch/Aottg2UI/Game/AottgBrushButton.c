// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgBrushButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* style, bool hideSearch, System_String_o* id, float maxWidth, const MethodInfo* method);
// 0x5912240

void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *style,bool hideSearch
               ,System_String_o *id,float maxWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._option.fields.StackedOptions = option.fields.StackedOptions;
  (__this->fields)._option.fields.Searchable = option.fields.Searchable;
  *(undefined7 *)&(__this->fields)._option.fields.field_0x31 = option.fields._49_7_;
  (__this->fields)._option.fields.Tooltip = option.fields.Tooltip;
  (__this->fields)._option.fields.ActionId = option.fields.ActionId;
  (__this->fields)._option.fields.Action = option.fields.Action;
  (__this->fields)._option.fields.TextKey = option.fields.TextKey;
  (__this->fields)._option.fields.Icon = option.fields.Icon;
  (__this->fields)._option.fields._text = option.fields._text;
  (__this->fields)._option.fields.Id = option.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)&__this->fields);
  (__this->fields)._enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enter);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  (__this->fields)._hideSearch = hideSearch;
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._maxWidth = maxWidth;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushButton$$DisplayCase
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBrushButton__DisplayCase (System_String_o* text, const MethodInfo* method);
// 0x59122f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgBrushButton__DisplayCase(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075456c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_075456c8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesDesignedFonts(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__ToLowerInvariant(text,(MethodInfo *)0x0);
    return pSVar2;
  }
  return text;
}


// Gisketch.Aottg2UI.Game.AottgBrushButton$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton__Build (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5912360

void Gisketch_Aottg2UI_Game_AottgBrushButton__Build
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  float value;
  bool bVar1;
  System_String_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_075456c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    Il2CppMethodInitialized_075456c9 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Text
                        (&(__this->fields)._option,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075456c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_075456c8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesDesignedFonts(pSVar2,(MethodInfo *)0x0);
  pSVar2 = __this_00;
  if (bVar1) {
    if (__this_00 == (System_String_o *)0x0) goto label_0591263c;
    pSVar2 = System_String__ToLowerInvariant(__this_00,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._option.fields.ActionId,(MethodInfo *)0x0);
  if (bVar1) {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0591263c;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                       (ui,3,pSVar2,(__this->fields)._option.fields.Action,(__this->fields)._id,
                        (__this->fields)._option.fields.Tooltip,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
  }
  else {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0591263c;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,3,pSVar2,(__this->fields)._option.fields.ActionId,(__this->fields)._id,
                        (__this->fields)._option.fields.Tooltip,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
  }
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_0591263c:
    ThrowNullReferenceException();
  }
  (pGVar3->fields).style = (__this->fields)._style;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
  (pGVar3->fields).sprite = "UI/Sprites/Elements/Brush";
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).sprite);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
  (pGVar3->fields).hasIcon = !bVar1;
  (pGVar3->fields).enter = (__this->fields)._enter;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).enter);
  value = (__this->fields)._maxWidth;
  if (0.0 < value) {
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar3->fields).layout = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
  }
  if ((__this->fields)._option.fields.Searchable == false) {
    if ((__this->fields)._hideSearch == false) {
      return;
    }
    pGVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_0591263c;
    (pGVar5->fields).hidden = true;
    (pGVar3->fields).search = pGVar5;
  }
  else {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       (__this_00,(System_String_o *)0x0,false,(__this->fields)._option.fields.Icon,
                        (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                        (MethodInfo *)0x0);
    (pGVar3->fields).search = pGVar5;
  }
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).search);
  return;
}


