// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogHeader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, System_String_o* title, int32_t variant, System_String_o* icon, System_String_o* closeEnabledKey, System_String_o* titleKey, const MethodInfo* method);
// 0x3b5e830

void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,System_String_o *title,int32_t variant,
               System_String_o *icon,System_String_o *closeEnabledKey,System_String_o *titleKey,
               MethodInfo *method)

{
  undefined **ppuVar1;
  uint uVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._title = title;
  il2cpp_runtime_helper_022b4080(&__this->fields,title);
  (__this->fields)._variant = variant;
  if (icon == (System_String_o *)0x0) {
    if (g_data_057a9d6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"warning");
      il2cpp_runtime_helper_023445d0(&"question");
      il2cpp_runtime_helper_023445d0(&"exclamation");
      il2cpp_runtime_helper_023445d0(&"information");
      g_data_057a9d6a = '\x01';
    }
    uVar2 = variant - 1;
    if ((uVar2 < 6) && ((0x33U >> (uVar2 & 0x1f) & 1) != 0)) {
      ppuVar1 = &g_data_05215070 + (int)uVar2;
    }
    else {
      ppuVar1 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    icon = *(System_String_o **)*ppuVar1;
  }
  (__this->fields)._icon = icon;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._icon,icon);
  (__this->fields)._closeEnabledKey = closeEnabledKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._closeEnabledKey,closeEnabledKey);
  (__this->fields)._titleKey = titleKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._titleKey,titleKey);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3b5ffe0

void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *style;
  undefined8 *puVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int iVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9d68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057a9d68 = '\x01';
    iVar2 = (__this->fields)._variant;
  }
  else {
    iVar2 = (__this->fields)._variant;
  }
  if (g_data_057a9d69 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleBar");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarWorkshop");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarDanger");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarSecondary");
    g_data_057a9d69 = '\x01';
  }
  if (iVar2 - 1U < 6) {
    puVar1 = (undefined8 *)(&g_data_052150a0)[(int)(iVar2 - 1U)];
  }
  else {
    puVar1 = &"dialogTitleBar";
  }
  style = (System_String_o *)*puVar1;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  if (g_data_057a9d9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"percent");
    g_data_057a9d9b = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pGVar3 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  iVar2 = (int)pGVar3;
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).unit);
    method_00 = (MethodInfo *)0x0;
    pSVar4 = "Row";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        12.0,__this_00,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,in_stack_ffffffffffffffd0);
    iVar2 = (int)pSVar4;
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,style,build,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d69 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleBar");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarWorkshop");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarDanger");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarSecondary");
    g_data_057a9d69 = '\x01';
  }
  if (5 < iVar2 - 1U) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleBarStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle (int32_t variant, const MethodInfo* method);
// 0x3b60230

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle(int32_t variant,MethodInfo *method)

{
  if (g_data_057a9d69 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleBar");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarWorkshop");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarDanger");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleBarSecondary");
    g_data_057a9d69 = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&g_data_052150a0)[(int)(variant - 1U)];
  }
  return "dialogTitleBar";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$DefaultIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon (int32_t variant, const MethodInfo* method);
// 0x3b5ff50

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon(int32_t variant,MethodInfo *method)

{
  uint uVar1;
  
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = variant - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(System_String_o **)(&g_data_05215070)[(int)uVar1];
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$CloseButtonStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle (int32_t variant, const MethodInfo* method);
// 0x3b60460

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle(int32_t variant,MethodInfo *method)

{
  if (g_data_057a9d6b == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonSecondary");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonDanger");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButton");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonWorkshop");
    g_data_057a9d6b = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&g_data_052150d0)[(int)(variant - 1U)];
  }
  return "dialogTitleCloseButton";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleTextStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle (int32_t variant, const MethodInfo* method);
// 0x3b604f0

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle(int32_t variant,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (g_data_057a9d6c == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleTextNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleTextQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleText");
    g_data_057a9d6c = '\x01';
  }
  if (variant == 6) {
    puVar1 = &"dialogTitleTextNegative";
  }
  else {
    puVar1 = &"dialogTitleText";
    if (variant == 3) {
      puVar1 = &"dialogTitleTextQuiet";
    }
  }
  return (System_String_o *)*puVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleIconStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle (int32_t variant, const MethodInfo* method);
// 0x3b60560

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle(int32_t variant,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (g_data_057a9d6d == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleIconNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleIcon");
    il2cpp_runtime_helper_023445d0(&"dialogTitleIconQuiet");
    g_data_057a9d6d = '\x01';
  }
  if (variant == 6) {
    puVar1 = &"dialogTitleIconNegative";
  }
  else {
    puVar1 = &"dialogTitleIcon";
    if (variant == 3) {
      puVar1 = &"dialogTitleIconQuiet";
    }
  }
  return (System_String_o *)*puVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0 (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x3b605d0

void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *header,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  undefined8 *puVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9d6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"X");
    g_data_057a9d6e = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty((__this->fields)._icon,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pGVar11 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b60a59;
    (pGVar6->fields).type = "Icon";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).icon = (__this->fields)._icon;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).icon);
    iVar2 = (__this->fields)._variant;
    if (g_data_057a9d6d == '\0') {
      il2cpp_runtime_helper_023445d0(&"dialogTitleIconNegative");
      il2cpp_runtime_helper_023445d0(&"dialogTitleIcon");
      il2cpp_runtime_helper_023445d0(&"dialogTitleIconQuiet");
      g_data_057a9d6d = '\x01';
    }
    if (iVar2 == 6) {
      puVar7 = &"dialogTitleIconNegative";
    }
    else {
      puVar7 = &"dialogTitleIcon";
      if (iVar2 == 3) {
        puVar7 = &"dialogTitleIconQuiet";
      }
    }
    item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)*puVar7;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).style;
    (pGVar6->fields).style = (System_String_o *)item;
    il2cpp_runtime_helper_022b4080();
    if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_03b60a59;
    Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar6,method_00);
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  pGVar11 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).text = (__this->fields)._title;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text);
    iVar2 = (__this->fields)._variant;
    if (g_data_057a9d6c == '\0') {
      il2cpp_runtime_helper_023445d0(&"dialogTitleTextNegative");
      il2cpp_runtime_helper_023445d0(&"dialogTitleTextQuiet");
      il2cpp_runtime_helper_023445d0(&"dialogTitleText");
      g_data_057a9d6c = '\x01';
    }
    if (iVar2 == 6) {
      puVar7 = &"dialogTitleTextNegative";
    }
    else {
      puVar7 = &"dialogTitleText";
      if (iVar2 == 3) {
        puVar7 = &"dialogTitleTextQuiet";
      }
    }
    (pGVar6->fields).style = (System_String_o *)*puVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,in_stack_ffffffffffffffc0);
    (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
    bVar5 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
    item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if ((char)bVar5 == '\0') {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar11 = pGVar9;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b60a59;
      (pGVar9->fields).type = (__this->fields)._titleKey;
      il2cpp_runtime_helper_022b4080(&pGVar9->fields);
      item = pGVar9;
    }
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).contentLayout;
    (pGVar6->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)item;
    il2cpp_runtime_helper_022b4080();
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar6,method_01);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar11 = pGVar6;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).type = "Button";
        il2cpp_runtime_helper_022b4080(&pGVar6->fields);
        (pGVar6->fields).text = "X";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text);
        iVar2 = (__this->fields)._variant;
        if (g_data_057a9d6b == '\0') {
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonNegative");
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonQuiet");
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonSecondary");
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonDanger");
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButton");
          il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonWorkshop");
          g_data_057a9d6b = '\x01';
        }
        uVar10 = iVar2 - 1;
        if (uVar10 < 6) {
          puVar7 = (undefined8 *)(&g_data_052150d0)[(int)uVar10];
        }
        else {
          puVar7 = &"dialogTitleCloseButton";
        }
        (pGVar6->fields).style = (System_String_o *)*puVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
        (pGVar6->fields).action = "overlay.close";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).action);
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        bVar5 = System_String__IsNullOrEmpty((__this->fields)._closeEnabledKey,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          item = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          pGVar11 = pGVar9;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
          if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b60a59;
          (pGVar9->fields).textKey = (__this->fields)._closeEnabledKey;
          il2cpp_runtime_helper_022b4080(&(pGVar9->fields).textKey);
        }
        (pGVar6->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar9);
        Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar6,method_02);
        return;
      }
    }
  }
label_03b60a59:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057a9d90 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if (item != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pGVar11->fields).type;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar10 = (__this_00->fields)._size;
        if (uVar10 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar10 + 1;
          pSVar3->m_Items[(int)uVar10] = (Il2CppObject *)item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar10,item);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d6f == '\0') {
      il2cpp_runtime_helper_023445d0(&"popover");
      g_data_057a9d6f = '\x01';
    }
    return;
  }
  return;
}


