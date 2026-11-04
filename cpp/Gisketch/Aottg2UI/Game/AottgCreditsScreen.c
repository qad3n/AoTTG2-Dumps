// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor (const MethodInfo* method);
// 0x1823bde60

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this;
  
  if (Il2CppMethodInitialized_184347d06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    Il2CppMethodInitialized_184347d06 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor(Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildCredits>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* states, const MethodInfo* method);
// 0x1823b9a20

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *states,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    Il2CppMethodInitialized_184347d07 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
  }
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading(states,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder(states,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty(states,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError(states,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildLoading>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x1823baa80

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  float value;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-loading-row-");
    Il2CppMethodInitialized_184347d08 = '\x01';
  }
  local_res20[0] = 0;
  while( true ) {
    pSVar1 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    id = System_String__Concat_1969e50("credits-loading-row-",pSVar1,(MethodInfo *)0x0);
    pSVar1 = "Column";
    if (local_res20[0] ==
        (local_res20[0] / 3 + (local_res20[0] >> 0x1f) +
        (int)(((longlong)local_res20[0] / 3 + ((longlong)local_res20[0] >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
    {
      value = 72.0;
    }
    else {
      value = 100.0;
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(value,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (loading == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,id,layout,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    local_res20[0] = local_res20[0] + 1;
    if (5 < local_res20[0]) {
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildReadyPlaceholder>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x1823bb2d0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Loaded");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-ready-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-refreshing-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Refreshing credits...");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits loaded.");
    Il2CppMethodInitialized_184347d09 = '\x01';
  }
  if (ready != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ready,"Credits.Loaded","Credits loaded.","text","credits-ready-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (ready,"Credits.Refreshing","Refreshing credits...","stateMetaText",
                        "credits-refreshing-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.refreshing";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"credits.refreshing");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildEmpty>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x1823b9a90

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"credits-empty-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits are empty.");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Empty");
    Il2CppMethodInitialized_184347d0a = '\x01';
  }
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (empty,"Credits.Empty","Credits are empty.","text","credits-empty-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildError>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* error, const MethodInfo* method);
// 0x1823b9b30

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"Try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.error");
    il2cpp_codegen_initialize_runtime_metadata(&"Could not load credits.");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-error-message");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-error-title");
    Il2CppMethodInitialized_184347d0b = '\x01';
  }
  if (error != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (error,"Credits.LoadFailed","Could not load credits.","text","credits-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (error,"Common.TryAgain","Try again.","stateMetaText","credits-error-message",
               "credits.error",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (error,0,"Common.Retry","Retry","credits.retry",
                        "credits-retry",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor(Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$<CreditSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x1823bdcd0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
            (content,(__this->fields).category,(__this->fields).index,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor (const MethodInfo* method);
// 0x1823abca0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *value;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_48;
  
  if (Il2CppMethodInitialized_184347cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"screen.main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"BACK");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_184347cfb = '\x01';
  }
  value = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_48.fields._id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.TextKey = (System_String_o *)0x0;
  local_48.fields.Icon = (System_String_o *)0x0;
  local_48.fields.ActionId = (System_String_o *)0x0;
  local_48.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.Searchable = false;
  local_48.fields._49_7_ = 0;
  local_48.fields.Tooltip = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
            (&local_48,"back","BACK","screen.main-menu","return"
             ,"Common.Back",false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (value != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0].fields._id = local_48.fields._id;
      value->m_Items[0].fields.Label = local_48.fields.Label;
      value->m_Items[0].fields.TextKey = local_48.fields.TextKey;
      value->m_Items[0].fields.Icon = local_48.fields.Icon;
      value->m_Items[0].fields.ActionId = local_48.fields.ActionId;
      value->m_Items[0].fields.Action = local_48.fields.Action;
      value->m_Items[0].fields.Searchable = local_48.fields.Searchable;
      *(undefined7 *)&value->m_Items[0].fields.field_0x31 = local_48.fields._49_7_;
      value->m_Items[0].fields.Tooltip = local_48.fields.Tooltip;
      Il2CppCodeGenWriteBarrier((void **)value->m_Items,(void *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer = value;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer,value);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
      }
      Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
      }
      Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory((MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x1823abf70

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_184347cfc = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x1823abe60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347cfd = '\x01';
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
// 0x1823ab270

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  void *pvVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_01;
  bool deferScrollSections;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_68;
  
  if (Il2CppMethodInitialized_184347cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"CREDITS");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-screen");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    Il2CppMethodInitialized_184347cfe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
  }
  if (Il2CppMethodInitialized_184347cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"credits");
    il2cpp_codegen_initialize_runtime_metadata(&"CREDITS");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    Il2CppMethodInitialized_184347cff = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4a = '\x01';
  }
  pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
  if (pAVar1 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
label_1823ab3fb:
    sections = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,1);
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    System_Action_object__AottgScreenSectionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits,
               (MethodInfo_1467710 *)0x0);
    local_68.fields.AutoAddKeywords = false;
    local_68.fields.HideSearch = false;
    local_68.fields.HideHeader = false;
    local_68.fields._67_5_ = 0;
    local_68.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    local_68.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    local_68.fields.Id = (System_String_o *)0x0;
    local_68.fields.Label = (System_String_o *)0x0;
    local_68.fields.TextKey = (System_String_o *)0x0;
    local_68.fields.Icon = (System_String_o *)0x0;
    local_68.fields.SearchTitle = (System_String_o *)0x0;
    local_68.fields.Keywords = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
              (&local_68,"credits","CREDITS","trophy",
               (System_Action_AottgUi__AottgScreenSectionContext__o *)__this_00,"Common.Credits",
               (System_String_o *)0x0,false,"Credits",
               (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
    if (sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)sections->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    sections->m_Items[0].fields._buildContent = local_68.fields._buildContent;
    sections->m_Items[0].fields._buildHeaderActions = local_68.fields._buildHeaderActions;
    sections->m_Items[0].fields.Id = local_68.fields.Id;
    sections->m_Items[0].fields.Label = local_68.fields.Label;
    sections->m_Items[0].fields.TextKey = local_68.fields.TextKey;
    sections->m_Items[0].fields.Icon = local_68.fields.Icon;
    sections->m_Items[0].fields.SearchTitle = local_68.fields.SearchTitle;
    sections->m_Items[0].fields.Keywords = local_68.fields.Keywords;
    sections->m_Items[0].fields.AutoAddKeywords = local_68.fields.AutoAddKeywords;
    sections->m_Items[0].fields.HideSearch = local_68.fields.HideSearch;
    sections->m_Items[0].fields.HideHeader = local_68.fields.HideHeader;
    *(undefined5 *)&sections->m_Items[0].fields.field_0x43 = local_68.fields._67_5_;
    Il2CppCodeGenWriteBarrier((void **)sections->m_Items,(void *)0x0);
  }
  else {
    pIVar2 = (Il2CppObject *)(pAVar1->fields)._Categories_k__BackingField;
    if (pIVar2 == (Il2CppObject *)0x0) goto label_1823ab661;
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,pIVar2);
    if ((int)pvVar3 < 1) goto label_1823ab3fb;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    }
    sections = Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections(pAVar1,(MethodInfo *)0x0);
  }
  footerOptions = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->static_fields->Footer;
  if (Il2CppMethodInitialized_184347d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    Il2CppMethodInitialized_184347d0e = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4a = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField ==
      (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    deferScrollSections = false;
  }
  else {
    if (Il2CppMethodInitialized_184347d4a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
      Il2CppMethodInitialized_184347d4a = '\x01';
    }
    pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
    if ((pAVar1 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) ||
       (pIVar2 = (Il2CppObject *)(pAVar1->fields)._Categories_k__BackingField, pIVar2 == (Il2CppObject *)0x0))
    goto label_1823ab661;
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,pIVar2);
    deferScrollSections = 0 < (int)pvVar3;
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_1e30470
            (__this_01,"CREDITS",sections,0,footerOptions,"credits-screen",
             (System_Action_AottgUi__o *)0x0,deferScrollSections,false,false,"Common.Credits",0,
             (MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
label_1823ab661:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections (const MethodInfo* method);
// 0x1823aba50

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *credits;
  Il2CppObject *obj;
  void *pvVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar2;
  System_Action_T1__T2__o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_58;
  
  if (Il2CppMethodInitialized_184347cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"credits");
    il2cpp_codegen_initialize_runtime_metadata(&"CREDITS");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    Il2CppMethodInitialized_184347cff = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4a = '\x01';
  }
  credits = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
  if (credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    obj = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,obj);
    if (0 < (int)pvVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen);
      }
      pGVar2 = Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections(credits,(MethodInfo *)0x0);
      return pGVar2;
    }
  }
  pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,1);
  __this = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits,
             (MethodInfo_1467710 *)0x0);
  local_58.fields.AutoAddKeywords = false;
  local_58.fields.HideSearch = false;
  local_58.fields.HideHeader = false;
  local_58.fields._67_5_ = 0;
  local_58.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_58.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.Label = (System_String_o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields.SearchTitle = (System_String_o *)0x0;
  local_58.fields.Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
            (&local_58,"credits","CREDITS","trophy",
             (System_Action_AottgUi__AottgScreenSectionContext__o *)__this,"Common.Credits",
             (System_String_o *)0x0,false,"Credits",
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length != 0) {
    pGVar2->m_Items[0].fields._buildContent = local_58.fields._buildContent;
    pGVar2->m_Items[0].fields._buildHeaderActions = local_58.fields._buildHeaderActions;
    pGVar2->m_Items[0].fields.Id = local_58.fields.Id;
    pGVar2->m_Items[0].fields.Label = local_58.fields.Label;
    pGVar2->m_Items[0].fields.TextKey = local_58.fields.TextKey;
    pGVar2->m_Items[0].fields.Icon = local_58.fields.Icon;
    pGVar2->m_Items[0].fields.SearchTitle = local_58.fields.SearchTitle;
    pGVar2->m_Items[0].fields.Keywords = local_58.fields.Keywords;
    pGVar2->m_Items[0].fields.AutoAddKeywords = local_58.fields.AutoAddKeywords;
    pGVar2->m_Items[0].fields.HideSearch = local_58.fields.HideSearch;
    pGVar2->m_Items[0].fields.HideHeader = local_58.fields.HideHeader;
    *(undefined5 *)&pGVar2->m_Items[0].fields.field_0x43 = local_58.fields._67_5_;
    Il2CppCodeGenWriteBarrier((void **)pGVar2->m_Items,(void *)0x0);
    return pGVar2;
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$CreditSections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x1823ab670
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ab78f: nop 
// asm:   0x1823ab81c: nop dword ptr [rax]

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_o *label;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o *pGVar6;
  ushort uVar7;
  int32_t iVar8;
  void *pvVar9;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar10;
  VirtualInvokeData *pVVar12;
  Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *object;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAVar13;
  System_String_o *id;
  System_Action_T1__T2__o *__this;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_78;
  ulonglong uVar11;
  
  if (Il2CppMethodInitialized_184347d00 == '\0') {
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
    Il2CppMethodInitialized_184347d00 = '\x01';
  }
  if ((credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) &&
     (pIVar3 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField, pIVar3 != (Il2CppObject *)0x0))
  {
    pvVar9 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,pIVar3);
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,(uint32_t)pvVar9);
    uVar16 = 0;
    uVar14 = uVar16;
    while (pIVar3 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField,
          pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = pIVar3->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        uVar11 = uVar16;
        do {
          if (pIVar5[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory) {
            pVVar12 = pIVar4->vtable + pIVar5[uVar11].offset;
            goto label_1823ab7b6;
          }
          uVar7 = (short)uVar11 + 1;
          uVar11 = (ulonglong)uVar7;
        } while (uVar7 < uVar2);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar3,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,
                           0);
label_1823ab7b6:
      iVar8 = (*pVVar12->methodPtr)(pIVar3,pVVar12->method);
      uVar15 = (uint)uVar14;
      if (iVar8 <= (int)uVar15) {
        return pGVar10;
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0
                         );
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *)0x0) {
label_1823aba3f:
        ThrowNullReferenceException();
      }
      (object->fields).index = uVar15;
      pIVar3 = (Il2CppObject *)(credits->fields)._Categories_k__BackingField;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_1823aba3f;
      pIVar4 = pIVar3->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        uVar14 = uVar16;
        do {
          if (pIVar5[uVar14].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditCategory) {
            pVVar12 = pIVar4->vtable + pIVar5[uVar14].offset;
            goto label_1823ab846;
          }
          uVar7 = (short)uVar14 + 1;
          uVar14 = (ulonglong)uVar7;
        } while (uVar7 < uVar2);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar3,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditCategory,0);
label_1823ab846:
      pAVar13 = (ApplicationManagers_Credits_AottgCreditCategory_o *)
                (*pVVar12->methodPtr)(pIVar3,uVar15,pVVar12->method);
      (object->fields).category = pAVar13;
      Il2CppCodeGenWriteBarrier(&(object->fields).category,pAVar13);
      pAVar13 = (object->fields).category;
      if (pAVar13 == (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) goto label_1823aba3f;
      id = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
                     ((pAVar13->fields)._Name_k__BackingField,(object->fields).index,(MethodInfo *)0x0);
      pAVar13 = (object->fields).category;
      if (pAVar13 == (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) goto label_1823aba3f;
      label = (pAVar13->fields)._Name_k__BackingField;
      __this = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0_CreditSections_b__0,
                 (MethodInfo_1467710 *)0x0);
      pAVar13 = (object->fields).category;
      if (pAVar13 == (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) goto label_1823aba3f;
      local_78.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_78.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_78.fields.AutoAddKeywords = false;
      local_78.fields.HideSearch = false;
      local_78.fields.HideHeader = false;
      local_78.fields._67_5_ = 0;
      local_78.fields.Id = (System_String_o *)0x0;
      local_78.fields.Label = (System_String_o *)0x0;
      local_78.fields.TextKey = (System_String_o *)0x0;
      local_78.fields.Icon = (System_String_o *)0x0;
      local_78.fields.SearchTitle = (System_String_o *)0x0;
      local_78.fields.Keywords = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                (&local_78,id,label,"trophy",
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)__this,(System_String_o *)0x0,
                 (System_String_o *)0x0,false,(pAVar13->fields)._Name_k__BackingField,
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,true,true,(MethodInfo *)0x0);
      if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_1823aba3f;
      if ((uint)pGVar10->max_length <= uVar15) {
        ThrowIndexOutOfRangeException();
      }
      pGVar10->m_Items[(int)uVar15].fields._buildContent = local_78.fields._buildContent;
      pGVar10->m_Items[(int)uVar15].fields._buildHeaderActions = local_78.fields._buildHeaderActions;
      ppSVar1 = &pGVar10->m_Items[(int)uVar15].fields.Id;
      *ppSVar1 = local_78.fields.Id;
      ppSVar1[1] = local_78.fields.Label;
      ppSVar1 = &pGVar10->m_Items[(int)uVar15].fields.TextKey;
      *ppSVar1 = local_78.fields.TextKey;
      ppSVar1[1] = local_78.fields.Icon;
      ppSVar1 = &pGVar10->m_Items[(int)uVar15].fields.SearchTitle;
      *ppSVar1 = local_78.fields.SearchTitle;
      ppSVar1[1] = local_78.fields.Keywords;
      pGVar6 = pGVar10->m_Items + (int)uVar15;
      (pGVar6->fields).AutoAddKeywords = local_78.fields.AutoAddKeywords;
      (pGVar6->fields).HideSearch = local_78.fields.HideSearch;
      (pGVar6->fields).HideHeader = local_78.fields.HideHeader;
      *(undefined5 *)&(pGVar6->fields).field_0x43 = local_78.fields._67_5_;
      Il2CppCodeGenWriteBarrier((void **)(pGVar10->m_Items + (int)uVar15),(void *)0x0);
      uVar14 = (ulonglong)(uVar15 + 1);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildCredits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x1823aa590

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (Il2CppMethodInitialized_184347d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildCredits_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-content-mount");
    Il2CppMethodInitialized_184347d01 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__10_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildCredits_b__10_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__10_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__10_0,__this);
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
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion(context,0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,(System_Action_AottgUi__o *)__this,"credits-content-mount",layout,enter,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823aad30

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d02 == '\0') {
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
    Il2CppMethodInitialized_184347d02 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__11_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildLoading_b__11_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__11_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__11_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,(System_Action_AottgUi__o *)__this,"credits-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"credits.loading");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildReadyPlaceholder
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823aafd0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d03 == '\0') {
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
    Il2CppMethodInitialized_184347d03 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__12_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildReadyPlaceholder_b__12_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__12_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__12_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,(System_Action_AottgUi__o *)__this,"credits-ready-placeholder",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"credits.ready");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823aa7f0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d04 == '\0') {
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
    Il2CppMethodInitialized_184347d04 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__13_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildEmpty_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__13_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__13_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,(System_Action_AottgUi__o *)__this,"credits-empty",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.empty";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"credits.empty");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823aaa90

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d05 == '\0') {
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
    Il2CppMethodInitialized_184347d05 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__14_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildError_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__14_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c->static_fields->__9__14_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,(System_Action_AottgUi__o *)__this,"credits-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "credits.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"credits.failed");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor(Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


