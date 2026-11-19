// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor (const MethodInfo* method);
// 0x5e83540

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    Il2CppMethodInitialized_07548837 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, const MethodInfo* method);
// 0x5e835b0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildCredits>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* states, const MethodInfo* method);
// 0x5e835c0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *states,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)states;
  if (Il2CppMethodInitialized_07548838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    Il2CppMethodInitialized_07548838 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
  }
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError(states,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildLoading>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x5e83620
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e83676: lea r14, [rip + 0x1454563]  ; "Column"
// asm:   0x5e8367d: lea rbp, [rip + 0x1477ffc]  ; "skeleton"
// asm:   0x5e83684: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07548839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-loading-row-");
    Il2CppMethodInitialized_07548839 = '\x01';
  }
  iStack_34 = 0;
  if (loading == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar1 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
    System_String__Concat_52f0320("credits-loading-row-",pSVar1,(MethodInfo *)0x0);
    pSVar1 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                       (*(float *)(&g_data_0100aee8 +
                                  (ulong)(iStack_34 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) * 4),
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Layout
              (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
               (MethodInfo *)0x0);
    ThrowNullReferenceException();
  }
  do {
    pSVar1 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
    id = System_String__Concat_52f0320("credits-loading-row-",pSVar1,(MethodInfo *)0x0);
    pSVar1 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                       (*(float *)(&g_data_0100aee8 +
                                  (ulong)(iStack_34 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) * 4),
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,id,layout,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_34 = iStack_34 + 1;
  } while (iStack_34 < 6);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildReadyPlaceholder>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x5e83880

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754883a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Loaded");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-ready-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-refreshing-text");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754883a = '\x01';
  }
  if (ready != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ready,"Credits.Loaded","text","credits-ready-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (ready,"Credits.Refreshing","stateMetaText","credits-refreshing-text",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.refreshing";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildEmpty>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x5e839d0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754883b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"credits-empty-text");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Empty");
    Il2CppMethodInitialized_0754883b = '\x01';
  }
  if (empty == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (empty,"Credits.Empty","text","credits-empty-text",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildError>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* error, const MethodInfo* method);
// 0x5e83a50

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754883c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.error");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-error-message");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-error-title");
    Il2CppMethodInitialized_0754883c = '\x01';
  }
  if (error != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (error,"Credits.LoadFailed","text","credits-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (error,"Common.TryAgain","stateMetaText","credits-error-message","credits.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (error,0,"Common.Retry","credits.retry","credits-retry",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "return",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e829a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$<CreditSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e83c70

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
            (content,(__this->fields).category,(__this->fields).index,context,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor (const MethodInfo* method);
// 0x5e81e40

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_c *method_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_0754882c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"screen.main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_0754882c = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"back","Common.Back","screen.main-menu","return"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
  pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
  *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
  pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
  pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
  pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
  pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
  pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
  pGVar1->m_Items[0].fields._text = local_58.fields._text;
  pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer = pGVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory((MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory
            ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x5e82120

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754882d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_0754882d = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x5e82150

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754882e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_0754882e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e82220

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  bool deferScrollSections;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754882f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"credits-screen");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    Il2CppMethodInitialized_0754882f = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
  }
  sections = Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections((MethodInfo *)method_00);
  footerOptions = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer;
  deferScrollSections =
       Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_58165f0
            (__this_00,"Common.Credits",sections,0,footerOptions,"credits-screen",
             (System_Action_AottgUi__o *)0x0,deferScrollSections,false,false,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections (const MethodInfo* method);
// 0x5e82310

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *credits;
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar5;
  System_Action_T1__T2__o *__this;
  ulong uVar6;
  MethodInfo *method_00;
  long lVar7;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_58;
  
  if (Il2CppMethodInitialized_07548830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"credits");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    Il2CppMethodInitialized_07548830 = '\x01';
  }
  if (Il2CppMethodInitialized_07548884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_07548884 = '\x01';
  }
  credits = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
  if (credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    obj = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
    if (obj == (Il2CppObject *)0x0) goto label_05e82541;
    pIVar1 = obj->klass;
    uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory__c **)
             ((long)&pIVar2->interfaceType + lVar7) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory) {
          pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
          goto label_05e82431;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,0);
label_05e82431:
    method_00 = pVVar4->method;
    iVar3 = (*pVVar4->methodPtr)(obj,method_00);
    if (0 < iVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
      }
      pGVar5 = Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections(credits,method_00);
      return pGVar5;
    }
  }
  pGVar5 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,1);
  __this = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits,
             (MethodInfo_4A897E0 *)0x0);
  local_58.fields.Keywords = (System_String_o *)0x0;
  local_58.fields.AutoAddKeywords = false;
  local_58.fields.HideSearch = false;
  local_58.fields.HideHeader = false;
  local_58.fields._59_5_ = 0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.Text = (System_String_o *)0x0;
  local_58.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_58.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
            (&local_58,"credits","Common.Credits","trophy",
             (System_Action_AottgUi__AottgScreenSectionContext__o *)__this,(System_String_o *)0x0,false,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if ((int)pGVar5->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar5->m_Items[0].fields.Keywords = local_58.fields.Keywords;
    pGVar5->m_Items[0].fields.AutoAddKeywords = local_58.fields.AutoAddKeywords;
    pGVar5->m_Items[0].fields.HideSearch = local_58.fields.HideSearch;
    pGVar5->m_Items[0].fields.HideHeader = local_58.fields.HideHeader;
    *(undefined5 *)&pGVar5->m_Items[0].fields.field_0x3b = local_58.fields._59_5_;
    pGVar5->m_Items[0].fields.TextKey = local_58.fields.TextKey;
    pGVar5->m_Items[0].fields.Icon = local_58.fields.Icon;
    pGVar5->m_Items[0].fields.Id = local_58.fields.Id;
    pGVar5->m_Items[0].fields.Text = local_58.fields.Text;
    pGVar5->m_Items[0].fields._buildContent = local_58.fields._buildContent;
    pGVar5->m_Items[0].fields._buildHeaderActions = local_58.fields._buildHeaderActions;
    Il2CppCodeGenWriteBarrier((void **)pGVar5->m_Items);
    return pGVar5;
  }
label_05e82541:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$CreditSections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x5e82630

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_String_o *text;
  Gisketch_Aottg2UI_Game_AottgScreenSection_Fields *pGVar3;
  uint32_t length;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar6;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAVar7;
  System_String_o *id;
  System_Action_T1__T2__o *__this_00;
  ulong uVar8;
  MethodInfo *method_00;
  Il2CppObject *pIVar9;
  long lVar10;
  ulong uVar11;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o GStack_70;
  
  if (Il2CppMethodInitialized_07548831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0_CreditSections_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    Il2CppMethodInitialized_07548831 = '\x01';
  }
  if ((credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) &&
     (pIVar9 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField, pIVar9 != (Il2CppObject *)0x0))
  {
    pIVar1 = pIVar9->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory__c **)
             ((long)&pIVar2->interfaceType + lVar10) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory) {
          pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_05e82721;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar11 * 0x10 != lVar10);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,0);
label_05e82721:
    length = (*pVVar5->methodPtr)(pIVar9,pVVar5->method);
    pGVar6 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,length);
    pIVar9 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
    if (pIVar9 != (Il2CppObject *)0x0) {
      uVar11 = 0;
      do {
        pIVar1 = pIVar9->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory__c **)
                 ((long)&pIVar2->interfaceType + lVar10) ==
                TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory) {
              pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
              goto label_05e827c3;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar8 * 0x10 != lVar10);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory
                            ,0);
label_05e827c3:
        iVar4 = (*pVVar5->methodPtr)(pIVar9,pVVar5->method);
        if ((long)iVar4 <= (long)uVar11) {
          return pGVar6;
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0);
        System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *)0x0) break;
        (__this->fields).index = (int32_t)uVar11;
        pIVar9 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
        if (pIVar9 == (Il2CppObject *)0x0) break;
        pIVar1 = pIVar9->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c **)
                 ((long)&pIVar2->interfaceType + lVar10) ==
                TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditCategory) {
              pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
              goto label_05e82873;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar8 * 0x10 != lVar10);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditCategory,0);
label_05e82873:
        pAVar7 = (ApplicationManagers_Credits_AottgCreditCategory_o *)
                 (*pVVar5->methodPtr)(pIVar9,(int32_t)uVar11,pVVar5->method);
        (__this->fields).category = pAVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).category);
        pAVar7 = (__this->fields).category;
        if (pAVar7 == (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) break;
        id = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
                       ((pAVar7->fields)._Name_k__BackingField,(__this->fields).index,method_00);
        pAVar7 = (__this->fields).category;
        if (pAVar7 == (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) break;
        text = (pAVar7->fields)._Name_k__BackingField;
        __this_00 = (System_Action_T1__T2__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0_CreditSections_b__0
                   ,(MethodInfo_4A897E0 *)0x0);
        Gisketch_Aottg2UI_Game_AottgScreenSection__WithText
                  (&GStack_70,id,text,"trophy",
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)__this_00,(System_String_o *)0x0,
                   false,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,true,true,
                   (MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
        if ((uint)pGVar6->max_length <= uVar11) {
          ThrowIndexOutOfRangeException();
        }
        pGVar3 = &pGVar6->m_Items[uVar11].fields;
        pGVar3->Keywords = GStack_70.fields.Keywords;
        pGVar3->AutoAddKeywords = GStack_70.fields.AutoAddKeywords;
        pGVar3->HideSearch = GStack_70.fields.HideSearch;
        pGVar3->HideHeader = GStack_70.fields.HideHeader;
        *(undefined5 *)&pGVar3->field_0x3b = GStack_70.fields._59_5_;
        pGVar3 = &pGVar6->m_Items[uVar11].fields;
        pGVar3->TextKey = GStack_70.fields.TextKey;
        pGVar3->Icon = GStack_70.fields.Icon;
        pGVar3 = &pGVar6->m_Items[uVar11].fields;
        pGVar3->Id = GStack_70.fields.Id;
        pGVar3->Text = GStack_70.fields.Text;
        pGVar6->m_Items[uVar11].fields._buildContent = GStack_70.fields._buildContent;
        pGVar6->m_Items[uVar11].fields._buildHeaderActions = GStack_70.fields._buildHeaderActions;
        Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + uVar11));
        uVar11 = uVar11 + 1;
        pIVar9 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
      } while (pIVar9 != (Il2CppObject *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildCredits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e829b0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_07548832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildCredits_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-content-mount");
    Il2CppMethodInitialized_07548832 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
  __this = pGVar1->__9__10_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildCredits_b__10_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    pGVar1->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__10_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(&context,0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this,"credits-content-mount",layout,enter,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e82bb0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07548833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildLoading_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-loading");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_07548833 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
  __this = pGVar1->__9__11_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildLoading_b__11_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    pGVar1->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__11_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,__this,"credits-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildReadyPlaceholder
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e82e10

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07548834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildReadyPlaceholder_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-ready-placeholder");
    Il2CppMethodInitialized_07548834 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
  __this = pGVar1->__9__12_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildReadyPlaceholder_b__12_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    pGVar1->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__12_0);
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
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,__this,"credits-ready-placeholder",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e83070

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07548835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildEmpty_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.empty");
    Il2CppMethodInitialized_07548835 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
  __this = pGVar1->__9__13_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildEmpty_b__13_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    pGVar1->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__13_0);
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
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,__this,"credits-empty",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.empty";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e832d0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07548836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildError_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"credits.failed");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-error");
    Il2CppMethodInitialized_07548836 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
  __this = pGVar1->__9__14_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildError_b__14_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields;
    pGVar1->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__14_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,__this,"credits-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x5e83530

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


