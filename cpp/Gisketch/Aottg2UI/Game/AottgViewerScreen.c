// Type: Gisketch.Aottg2UI.Game.AottgViewerScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgViewerScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_Options
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgViewerScreen__get_Options (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, const MethodInfo* method);
// 0x5919620

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgViewerScreen__get_Options
          (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545714 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_07545714 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->StepOptions;
  }
  return *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen)->static_fields + 8);
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgViewerScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, const MethodInfo* method);
// 0x5919690

System_String_o *
Gisketch_Aottg2UI_Game_AottgViewerScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545715 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_07545715 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgViewerScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, const MethodInfo* method);
// 0x59196c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgViewerScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545716 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545716 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen__Build (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5919790

void Gisketch_Aottg2UI_Game_AottgViewerScreen__Build
               (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_07545717 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-side-panel-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-counter-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_07545717 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_0,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._7_unknown.methodPtr)(__this,(__this->klass->vtable)._7_unknown.method);
  pSVar2 = System_String__Concat_52f0320(pSVar2,"-side-panel-layer",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar3,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"default",pSVar1,pSVar2,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_1,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._7_unknown.methodPtr)(__this,(__this->klass->vtable)._7_unknown.method);
  pSVar2 = System_String__Concat_52f0320(pSVar2,"-counter-layer",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexEnd","Absolute"
                      ,(System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,24.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",pSVar1,pSVar2,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$SetCounter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen__SetCounter (int32_t position, int32_t count, const MethodInfo* method);
// 0x5919a70

void Gisketch_Aottg2UI_Game_AottgViewerScreen__SetCounter(int32_t position,int32_t count,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  int32_t local_18;
  int32_t local_14;
  
  _local_18 = CONCAT44(position,count);
  if (Il2CppMethodInitialized_07545718 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.counter");
    Il2CppMethodInitialized_07545718 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (pGVar1->fields)._State_k__BackingField;
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str2 = System_Int32__ToString(&local_18,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_5301f10(pSVar2," / ",str2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"viewer.counter",pSVar2,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen___ctor (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, const MethodInfo* method);
// 0x5919b10

void Gisketch_Aottg2UI_Game_AottgViewerScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen___cctor (const MethodInfo* method);
// 0x5919b20

void Gisketch_Aottg2UI_Game_AottgViewerScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgViewerScreen_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar2;
  MethodInfo *in_stack_fffffffffffffee8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_108;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_b8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_68;
  
  if (Il2CppMethodInitialized_07545719 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.previous");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"arrowLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.exit");
    il2cpp_codegen_initialize_runtime_metadata(&"arrowRight");
    il2cpp_codegen_initialize_runtime_metadata(&"previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Next");
    il2cpp_codegen_initialize_runtime_metadata(&"next");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.next");
    Il2CppMethodInitialized_07545719 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_68.fields.Searchable = false;
  local_68.fields._49_7_ = 0;
  local_68.fields.Tooltip = (System_String_o *)0x0;
  local_68.fields.ActionId = (System_String_o *)0x0;
  local_68.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.TextKey = (System_String_o *)0x0;
  local_68.fields.Icon = (System_String_o *)0x0;
  local_68.fields._text = (System_String_o *)0x0;
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
            (&local_68,"back","Common.Back",(System_String_o *)0x0,
             "viewer.exit",(System_Action_GisketchActionContext__o *)0x0,"exitLeft",false,
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
             in_stack_fffffffffffffee8);
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
label_05919ec1:
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length != 0) {
    pGVar2->m_Items[0].fields.StackedOptions = local_68.fields.StackedOptions;
    pGVar2->m_Items[0].fields.Searchable = local_68.fields.Searchable;
    *(undefined7 *)&pGVar2->m_Items[0].fields.field_0x31 = local_68.fields._49_7_;
    pGVar2->m_Items[0].fields.Tooltip = local_68.fields.Tooltip;
    pGVar2->m_Items[0].fields.ActionId = local_68.fields.ActionId;
    pGVar2->m_Items[0].fields.Action = local_68.fields.Action;
    pGVar2->m_Items[0].fields.TextKey = local_68.fields.TextKey;
    pGVar2->m_Items[0].fields.Icon = local_68.fields.Icon;
    pGVar2->m_Items[0].fields._text = local_68.fields._text;
    pGVar2->m_Items[0].fields.Id = local_68.fields.Id;
    Il2CppCodeGenWriteBarrier((void **)pGVar2->m_Items);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->Footer = pGVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->Footer);
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
    local_b8.fields.Searchable = false;
    local_b8.fields._49_7_ = 0;
    local_b8.fields.Tooltip = (System_String_o *)0x0;
    local_b8.fields.ActionId = (System_String_o *)0x0;
    local_b8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_b8.fields.TextKey = (System_String_o *)0x0;
    local_b8.fields.Icon = (System_String_o *)0x0;
    local_b8.fields._text = (System_String_o *)0x0;
    local_b8.fields.Id = (System_String_o *)0x0;
    local_b8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
              (&local_b8,"previous","Common.Previous",(System_String_o *)0x0,
               "viewer.previous",(System_Action_GisketchActionContext__o *)0x0,"arrowLeft",false
               ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
               in_stack_fffffffffffffee8);
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_05919ec1;
    if ((int)pGVar2->max_length != 0) {
      pGVar2->m_Items[0].fields.StackedOptions = local_b8.fields.StackedOptions;
      pGVar2->m_Items[0].fields.Searchable = local_b8.fields.Searchable;
      *(undefined7 *)&pGVar2->m_Items[0].fields.field_0x31 = local_b8.fields._49_7_;
      pGVar2->m_Items[0].fields.Tooltip = local_b8.fields.Tooltip;
      pGVar2->m_Items[0].fields.ActionId = local_b8.fields.ActionId;
      pGVar2->m_Items[0].fields.Action = local_b8.fields.Action;
      pGVar2->m_Items[0].fields.TextKey = local_b8.fields.TextKey;
      pGVar2->m_Items[0].fields.Icon = local_b8.fields.Icon;
      pGVar2->m_Items[0].fields._text = local_b8.fields._text;
      pGVar2->m_Items[0].fields.Id = local_b8.fields.Id;
      Il2CppCodeGenWriteBarrier((void **)pGVar2->m_Items);
      local_108.fields.Searchable = false;
      local_108.fields._49_7_ = 0;
      local_108.fields.Tooltip = (System_String_o *)0x0;
      local_108.fields.ActionId = (System_String_o *)0x0;
      local_108.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
      local_108.fields.TextKey = (System_String_o *)0x0;
      local_108.fields.Icon = (System_String_o *)0x0;
      local_108.fields._text = (System_String_o *)0x0;
      local_108.fields.Id = (System_String_o *)0x0;
      local_108.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
                (&local_108,"next","Common.Next",(System_String_o *)0x0,
                 "viewer.next",(System_Action_GisketchActionContext__o *)0x0,"arrowRight",
                 false,(System_String_o *)0x0,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
                 in_stack_fffffffffffffee8);
      if ((pGVar2->max_length & 0xfffffffe) != 0) {
        pGVar2->m_Items[1].fields.StackedOptions = local_108.fields.StackedOptions;
        pGVar2->m_Items[1].fields.Searchable = local_108.fields.Searchable;
        *(undefined7 *)&pGVar2->m_Items[1].fields.field_0x31 = local_108.fields._49_7_;
        pGVar2->m_Items[1].fields.Tooltip = local_108.fields.Tooltip;
        pGVar2->m_Items[1].fields.ActionId = local_108.fields.ActionId;
        pGVar2->m_Items[1].fields.Action = local_108.fields.Action;
        pGVar2->m_Items[1].fields.TextKey = local_108.fields.TextKey;
        pGVar2->m_Items[1].fields.Icon = local_108.fields.Icon;
        pGVar2->m_Items[1].fields._text = local_108.fields._text;
        pGVar2->m_Items[1].fields.Id = local_108.fields.Id;
        Il2CppCodeGenWriteBarrier((void **)(pGVar2->m_Items + 1));
        pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields;
        pGVar1->StepOptions = pGVar2;
        Il2CppCodeGenWriteBarrier(&pGVar1->StepOptions);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_0 (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5919ed0

void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_0
               (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *panel,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  System_String_o *titleKey;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_0754571a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_0754571a = '\x01';
  }
  titleKey = (System_String_o *)
             (*(__this->klass->vtable)._8_unknown.methodPtr)(__this,(__this->klass->vtable)._8_unknown.method)
  ;
  options = (*(__this->klass->vtable)._9_get_Options.methodPtr)
                      (__this,(__this->klass->vtable)._9_get_Options.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
  }
  footerOptions = TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->Footer;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
            (__this_00,titleKey,options,footerOptions,0.0,(MethodInfo *)0x0);
  if (panel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_1 (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x5919fb0

void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_1
               (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *layer,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754571b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-counter-card");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    Il2CppMethodInitialized_0754571b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_2,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._7_unknown.methodPtr)(__this,(__this->klass->vtable)._7_unknown.method);
  pSVar1 = System_String__Concat_52f0320(pSVar1,"-counter-card",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (layer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (layer,"card",__this_00,pSVar1,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_2 (Gisketch_Aottg2UI_Game_AottgViewerScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x591a140

void Gisketch_Aottg2UI_Game_AottgViewerScreen___Build_b__15_2
               (Gisketch_Aottg2UI_Game_AottgViewerScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *card,
               MethodInfo *method)

{
  System_String_o *text;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754571c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-counter");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.counter");
    Il2CppMethodInitialized_0754571c = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._7_unknown.methodPtr)(__this,(__this->klass->vtable)._7_unknown.method);
  pSVar1 = System_String__Concat_52f0320(pSVar1,"-counter",(MethodInfo *)0x0);
  if (card == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (card,text,"inGameText",pSVar1,"viewer.counter",
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


