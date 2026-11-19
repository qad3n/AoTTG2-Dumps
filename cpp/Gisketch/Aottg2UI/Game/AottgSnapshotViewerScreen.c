// Type: Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSnapshotViewerScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_ViewerId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_ViewerId (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o* __this, const MethodInfo* method);
// 0x591a2e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_ViewerId
          (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545720 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"snapshot-viewer");
    Il2CppMethodInitialized_07545720 = '\x01';
  }
  return "snapshot-viewer";
}


// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_PanelTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_PanelTitleKey (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o* __this, const MethodInfo* method);
// 0x591a310

System_String_o *
Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_PanelTitleKey
          (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545721 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.SnapshotViewerButton");
    Il2CppMethodInitialized_07545721 = '\x01';
  }
  return "MainMenu.ToolsPopup.SnapshotViewerButton";
}


// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_Options
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_Options (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o* __this, const MethodInfo* method);
// 0x591a340

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen__get_Options
          (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545722 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen);
    Il2CppMethodInitialized_07545722 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen->static_fields->SnapshotOptions;
  }
  return *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)
          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen)->static_fields;
}


// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen___ctor (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o* __this, const MethodInfo* method);
// 0x591a3b0

void Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545723 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_07545723 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Gisketch_Aottg2UI_Code_AottgScreen___ctor
              ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen___cctor (const MethodInfo* method);
// 0x591a420

void Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_GisketchActionContext__o *pSVar7;
  System_String_o *pSVar8;
  bool bVar9;
  undefined7 uVar10;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar11;
  MethodInfo *in_stack_ffffffffffffff98;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o GStack_58;
  
  if (Il2CppMethodInitialized_07545724 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.snapshot.save");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    Il2CppMethodInitialized_07545724 = '\x01';
  }
  pGVar11 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,3);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->StepOptions;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
label_0591a672:
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_0591a672;
    if ((int)pGVar11->max_length != 0) {
      pSVar2 = pGVar1->m_Items[0].fields._text;
      pSVar3 = pGVar1->m_Items[0].fields.Id;
      pSVar4 = pGVar1->m_Items[0].fields.TextKey;
      pSVar5 = pGVar1->m_Items[0].fields.Icon;
      pSVar6 = pGVar1->m_Items[0].fields.ActionId;
      pSVar7 = pGVar1->m_Items[0].fields.Action;
      bVar9 = pGVar1->m_Items[0].fields.Searchable;
      uVar10 = *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31;
      pSVar8 = pGVar1->m_Items[0].fields.Tooltip;
      pGVar11->m_Items[0].fields.StackedOptions = pGVar1->m_Items[0].fields.StackedOptions;
      pGVar11->m_Items[0].fields.Searchable = bVar9;
      *(undefined7 *)&pGVar11->m_Items[0].fields.field_0x31 = uVar10;
      pGVar11->m_Items[0].fields.Tooltip = pSVar8;
      pGVar11->m_Items[0].fields.ActionId = pSVar6;
      pGVar11->m_Items[0].fields.Action = pSVar7;
      pGVar11->m_Items[0].fields.TextKey = pSVar4;
      pGVar11->m_Items[0].fields.Icon = pSVar5;
      pGVar11->m_Items[0].fields._text = pSVar2;
      pGVar11->m_Items[0].fields.Id = pSVar3;
      Il2CppCodeGenWriteBarrier((void **)pGVar11->m_Items);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->static_fields->StepOptions;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_0591a672;
      if (((pGVar1->max_length & 0xfffffffe) != 0) && ((pGVar11->max_length & 0xfffffffe) != 0)) {
        pSVar2 = pGVar1->m_Items[1].fields._text;
        pSVar3 = pGVar1->m_Items[1].fields.Id;
        pSVar4 = pGVar1->m_Items[1].fields.TextKey;
        pSVar5 = pGVar1->m_Items[1].fields.Icon;
        pSVar6 = pGVar1->m_Items[1].fields.ActionId;
        pSVar7 = pGVar1->m_Items[1].fields.Action;
        bVar9 = pGVar1->m_Items[1].fields.Searchable;
        uVar10 = *(undefined7 *)&pGVar1->m_Items[1].fields.field_0x31;
        pSVar8 = pGVar1->m_Items[1].fields.Tooltip;
        pGVar11->m_Items[1].fields.StackedOptions = pGVar1->m_Items[1].fields.StackedOptions;
        pGVar11->m_Items[1].fields.Searchable = bVar9;
        *(undefined7 *)&pGVar11->m_Items[1].fields.field_0x31 = uVar10;
        pGVar11->m_Items[1].fields.Tooltip = pSVar8;
        pGVar11->m_Items[1].fields.ActionId = pSVar6;
        pGVar11->m_Items[1].fields.Action = pSVar7;
        pGVar11->m_Items[1].fields.TextKey = pSVar4;
        pGVar11->m_Items[1].fields.Icon = pSVar5;
        pGVar11->m_Items[1].fields._text = pSVar2;
        pGVar11->m_Items[1].fields.Id = pSVar3;
        Il2CppCodeGenWriteBarrier((void **)(pGVar11->m_Items + 1));
        GStack_58.fields.Searchable = false;
        GStack_58.fields._49_7_ = 0;
        GStack_58.fields.Tooltip = (System_String_o *)0x0;
        GStack_58.fields.ActionId = (System_String_o *)0x0;
        GStack_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
        GStack_58.fields.TextKey = (System_String_o *)0x0;
        GStack_58.fields.Icon = (System_String_o *)0x0;
        GStack_58.fields._text = (System_String_o *)0x0;
        GStack_58.fields.Id = (System_String_o *)0x0;
        GStack_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
        Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
                  (&GStack_58,"save","Common.Save",(System_String_o *)0x0,
                   "viewer.snapshot.save",(System_Action_GisketchActionContext__o *)0x0,"save",
                   false,(System_String_o *)0x0,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
                   in_stack_ffffffffffffff98);
        if (2 < (uint)pGVar11->max_length) {
          pGVar11->m_Items[2].fields.StackedOptions = GStack_58.fields.StackedOptions;
          pGVar11->m_Items[2].fields.Searchable = GStack_58.fields.Searchable;
          *(undefined7 *)&pGVar11->m_Items[2].fields.field_0x31 = GStack_58.fields._49_7_;
          pGVar11->m_Items[2].fields.Tooltip = GStack_58.fields.Tooltip;
          pGVar11->m_Items[2].fields.ActionId = GStack_58.fields.ActionId;
          pGVar11->m_Items[2].fields.Action = GStack_58.fields.Action;
          pGVar11->m_Items[2].fields.TextKey = GStack_58.fields.TextKey;
          pGVar11->m_Items[2].fields.Icon = GStack_58.fields.Icon;
          pGVar11->m_Items[2].fields._text = GStack_58.fields._text;
          pGVar11->m_Items[2].fields.Id = GStack_58.fields.Id;
          Il2CppCodeGenWriteBarrier((void **)(pGVar11->m_Items + 2));
          TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen->static_fields->SnapshotOptions = pGVar11;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSnapshotViewerScreen->static_fields->
                      SnapshotOptions);
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


