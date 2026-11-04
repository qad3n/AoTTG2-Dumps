// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBrushButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* style, bool hideSearch, System_String_o* id, const MethodInfo* method);
// 0x181e28ff0

void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *option,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *style,bool hideSearch
               ,System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  bool bVar5;
  undefined7 uVar6;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  pSVar1 = (option->fields).Label;
  pSVar2 = (option->fields).TextKey;
  pSVar3 = (option->fields).Icon;
  (__this->fields)._option.fields._id = (option->fields)._id;
  (__this->fields)._option.fields.Label = pSVar1;
  pSVar1 = (option->fields).ActionId;
  pSVar4 = (option->fields).Action;
  (__this->fields)._option.fields.TextKey = pSVar2;
  (__this->fields)._option.fields.Icon = pSVar3;
  bVar5 = (option->fields).Searchable;
  uVar6 = *(undefined7 *)&(option->fields).field_0x31;
  pSVar2 = (option->fields).Tooltip;
  (__this->fields)._option.fields.ActionId = pSVar1;
  (__this->fields)._option.fields.Action = pSVar4;
  (__this->fields)._option.fields.Searchable = bVar5;
  *(undefined7 *)&(__this->fields)._option.fields.field_0x31 = uVar6;
  (__this->fields)._option.fields.Tooltip = pSVar2;
  Il2CppCodeGenWriteBarrier((void **)&__this->fields,(void *)0x0);
  (__this->fields)._enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enter,enter);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,style);
  (__this->fields)._hideSearch = hideSearch;
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushButton$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton__Build (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e28dc0

void Gisketch_Aottg2UI_Game_AottgBrushButton__Build
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *tooltip;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_184344d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    Il2CppMethodInitialized_184344d50 = '\x01';
  }
  if ((__this->fields)._option.fields.Label == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar3 = System_String__ToLowerInvariant((__this->fields)._option.fields.Label,(MethodInfo *)0x0);
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._option.fields.ActionId,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar1 = (__this->fields)._option.fields.Icon;
    tooltip = (__this->fields)._option.fields.Tooltip;
    id = (__this->fields)._id;
    if (bVar2) {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                         (ui,3,pSVar3,(__this->fields)._option.fields.Action,id,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar1,(MethodInfo *)0x0);
    }
    else {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,3,pSVar3,(__this->fields)._option.fields.ActionId,id,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar1,(MethodInfo *)0x0);
    }
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar3 = (__this->fields)._style;
      (pGVar4->fields).style = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style,pSVar3);
      (pGVar4->fields).sprite = "UI/Sprites/Elements/Brush";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).sprite,"UI/Sprites/Elements/Brush");
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
      (pGVar4->fields).hasIcon = !bVar2;
      value = (__this->fields)._enter;
      (pGVar4->fields).enter = value;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter,value);
      pSVar3 = (__this->fields)._option.fields.TextKey;
      (pGVar4->fields).textKey = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,pSVar3);
      if ((__this->fields)._option.fields.Searchable == false) {
        if ((__this->fields)._hideSearch != false) {
          pGVar5 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
          Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar5,(MethodInfo *)0x0);
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_181e28fdb;
          (pGVar5->fields).hidden = true;
          (pGVar4->fields).search = pGVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).search,pGVar5);
        }
      }
      else {
        pSVar3 = (__this->fields)._option.fields.TextKey;
        pSVar1 = (__this->fields)._option.fields.Label;
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,pSVar1,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Search
                           (pSVar3,(System_String_o *)0x0,false,(__this->fields)._option.fields.Icon,
                            (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                            (MethodInfo *)0x0);
        (pGVar4->fields).search = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).search,pGVar5);
      }
      return;
    }
  }
label_181e28fdb:
  ThrowNullReferenceException();
}


