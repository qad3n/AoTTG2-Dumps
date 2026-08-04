// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBrushButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* style, bool hideSearch, const MethodInfo* method);
// 0x45330b0

void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *style,
               bool_conflict hideSearch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields)._option.fields.ActionId = option.fields.ActionId._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.ActionId + 4) = option.fields.ActionId._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Action = option.fields.Action._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Action + 4) = option.fields.Action._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.TextKey = option.fields.TextKey._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.TextKey + 4) = option.fields.TextKey._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Icon = option.fields.Icon._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Icon + 4) = option.fields.Icon._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields._id = option.fields._id._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields._id + 4) = option.fields._id._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Label = option.fields.Label._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Label + 4) = option.fields.Label._4_4_;
  il2cpp_runtime_helper_022b4080(&__this->fields,0);
  (__this->fields)._enter = enter;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._enter,enter);
  (__this->fields)._style = style;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._style,style);
  *(char *)&(__this->fields)._hideSearch = (char)hideSearch;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushButton$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton__Build (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4533120

void Gisketch_Aottg2UI_Game_AottgBrushButton__Build
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  System_String_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *groups;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  System_Action_GisketchActionContext__o *in_RCX;
  System_String_o *extraout_RDX;
  System_String_Fields value;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *method_00;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value_00;
  System_String_Fields SVar5;
  float fVar6;
  
  if (g_data_057aeec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    g_data_057aeec3 = '\x01';
  }
  pSVar2 = (__this->fields)._option.fields.Label;
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  }
  value_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)(__this->fields)._option.fields.ActionId;
  value._stringLength = 0;
  value._firstChar = 0;
  value._6_2_ = 0;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      in_RCX = (System_Action_GisketchActionContext__o *)(__this->fields)._option.fields.ActionId;
      value._stringLength = 3;
      value._firstChar = 0;
      value._6_2_ = 0;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,3,pSVar2,(System_String_o *)in_RCX,(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
      value_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)ui;
      goto joined_r0x04533214;
    }
  }
  else if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    in_RCX = (__this->fields)._option.fields.Action;
    value._stringLength = 3;
    value._firstChar = 0;
    value._6_2_ = 0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                       (ui,3,pSVar2,in_RCX,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
    value_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)ui;
joined_r0x04533214:
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).style = (__this->fields)._style;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style);
      (pGVar3->fields).sprite = "UI/Sprites/Elements/Brush";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).sprite);
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
      *(byte *)&(pGVar3->fields).hasIcon = (byte)bVar1 ^ 1;
      (pGVar3->fields).motion = (__this->fields)._enter;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).motion);
      (pGVar3->fields).textKey = (__this->fields)._option.fields.TextKey;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).textKey);
      if ((char)(__this->fields)._hideSearch == '\0') {
        return;
      }
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
      value._stringLength = 0;
      value._firstChar = 0;
      value._6_2_ = 0;
      value_00 = __this_00;
      Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        *(undefined1 *)((long)&(__this_00->fields).autoAddKeywords + 1) = 1;
        (pGVar3->fields).popover = (System_String_o *)__this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).popover,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&"OPTIONS");
    g_data_057aeec4 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)value_00,(MethodInfo *)0x0);
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar5 = value;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    value = "OPTIONS";
  }
  if (value_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    (value_00->fields).title = (System_String_o *)value;
    il2cpp_runtime_helper_022b4080(&value_00->fields,value);
    pSVar2 = extraout_RDX;
    if (extraout_RDX == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,0);
    }
    (value_00->fields).keywords = pSVar2;
    il2cpp_runtime_helper_022b4080(&(value_00->fields).keywords,pSVar2);
    if (in_RCX == (System_Action_GisketchActionContext__o *)0x0) {
      in_RCX = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,0);
    }
    (value_00->fields).icon = (System_String_o *)in_RCX;
    il2cpp_runtime_helper_022b4080(&(value_00->fields).icon,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelShell");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    g_data_057aeec5 = '\x01';
  }
  __this_01 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  pSVar2 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_String_o *)0x0) {
    __this_01->fields = SVar5;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,SVar5);
    pSVar2 = TypeInfo_AottgBrushSidePanelOption;
    groups = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)il2cpp_runtime_helper_022b2a40();
    if (groups != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0) {
      if ((int)groups->max_length == 0) goto label_045336d8;
      pSVar2 = (System_String_o *)groups->m_Items;
      groups->m_Items[0] = *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)((long)SVar5 + 0x18);
      il2cpp_runtime_helper_022b4080();
      if ((uint)groups->max_length < 2) goto label_045336d8;
      method_00 = *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)((long)SVar5 + 0x20);
      groups->m_Items[1] = method_00;
      il2cpp_runtime_helper_022b4080(groups->m_Items + 1);
      fVar6 = Gisketch_Aottg2UI_Game_AottgBrushSidePanel__BrushWidth(groups,(MethodInfo *)method_00);
      *(float *)&__this_01[1].klass = fVar6;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexStart","FlexStart",(System_String_o *)0x0
                          ,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
      pSVar2 = "mainMenuPanel";
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                           (__this_02,"brushSidePanelShell",920.0,2400.0,build,"brush-side-panel",layout,contentLayout,pGVar4
                            ,(MethodInfo *)0x0);
        pSVar2 = "mainMenuPanel";
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).enter = pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).enter,pGVar4);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045336d8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}


