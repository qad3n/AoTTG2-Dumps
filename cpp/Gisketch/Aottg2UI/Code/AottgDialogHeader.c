// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogHeader.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, System_String_o* title, int32_t variant, System_String_o* icon, System_String_o* closeEnabledKey, const MethodInfo* method);
// 0x3af48e0

void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,System_String_o *title,
               int32_t variant,System_String_o *icon,System_String_o *closeEnabledKey,
               MethodInfo *method)

{
  undefined **ppuVar1;
  uint uVar2;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._title = title;
  il2cpp_runtime_glue(&__this->fields,title);
  (__this->fields)._variant = variant;
  if (icon == (System_String_o *)0x0) {
    if (DAT_05701447 == '\0') {
      il2cpp_init_method_metadata(&"warning");
      il2cpp_init_method_metadata(&"question");
      il2cpp_init_method_metadata(&"exclamation");
      il2cpp_init_method_metadata(&"information");
      DAT_05701447 = '\x01';
    }
    uVar2 = variant - 1;
    if ((uVar2 < 6) && ((0x33U >> (uVar2 & 0x1f) & 1) != 0)) {
      ppuVar1 = &PTR_DAT_05176070 + (int)uVar2;
    }
    else {
      ppuVar1 = (undefined **)(DAT_057110b0 + 0xb8);
    }
    icon = *(System_String_o **)*ppuVar1;
  }
  (__this->fields)._icon = icon;
  il2cpp_runtime_glue(&(__this->fields)._icon,icon);
  (__this->fields)._closeEnabledKey = closeEnabledKey;
  il2cpp_runtime_glue(&(__this->fields)._closeEnabledKey,closeEnabledKey);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3af4a50

void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  System_String_o *style;
  undefined8 *puVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05701445 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__5_0);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    DAT_05701445 = '\x01';
    iVar1 = (__this->fields)._variant;
  }
  else {
    iVar1 = (__this->fields)._variant;
  }
  if (DAT_05701446 == '\0') {
    il2cpp_init_method_metadata(&"dialogTitleBar");
    il2cpp_init_method_metadata(&"dialogTitleBarWorkshop");
    il2cpp_init_method_metadata(&"dialogTitleBarDanger");
    il2cpp_init_method_metadata(&"dialogTitleBarQuiet");
    il2cpp_init_method_metadata(&"dialogTitleBarNegative");
    il2cpp_init_method_metadata(&"dialogTitleBarSecondary");
    DAT_05701446 = '\x01';
  }
  if (iVar1 - 1U < 6) {
    puVar2 = (undefined8 *)(&PTR_DAT_051760a0)[(int)(iVar1 - 1U)];
  }
  else {
    puVar2 = &"dialogTitleBar";
  }
  style = (System_String_o *)*puVar2;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  if (DAT_0570147d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"percent");
    DAT_0570147d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    il2cpp_runtime_glue(&(__this_00->fields).unit);
    method_00 = (MethodInfo *)0x0;
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,__this_00,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,in_stack_ffffffffffffffd0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,style,build,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleBarStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle (int32_t variant, const MethodInfo* method);
// 0x3af4ca0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle(int32_t variant,MethodInfo *method)

{
  if (DAT_05701446 == '\0') {
    il2cpp_init_method_metadata(&"dialogTitleBar");
    il2cpp_init_method_metadata(&"dialogTitleBarWorkshop");
    il2cpp_init_method_metadata(&"dialogTitleBarDanger");
    il2cpp_init_method_metadata(&"dialogTitleBarQuiet");
    il2cpp_init_method_metadata(&"dialogTitleBarNegative");
    il2cpp_init_method_metadata(&"dialogTitleBarSecondary");
    DAT_05701446 = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&PTR_DAT_051760a0)[(int)(variant - 1U)];
  }
  return "dialogTitleBar";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$DefaultIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon (int32_t variant, const MethodInfo* method);
// 0x3af49c0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon(int32_t variant,MethodInfo *method)

{
  uint uVar1;
  
  if (DAT_05701447 == '\0') {
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"question");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"information");
    DAT_05701447 = '\x01';
  }
  uVar1 = variant - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(System_String_o **)(&PTR_DAT_05176070)[(int)uVar1];
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$CloseButtonStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle (int32_t variant, const MethodInfo* method);
// 0x3af5180

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle(int32_t variant,MethodInfo *method)

{
  if (DAT_05701448 == '\0') {
    il2cpp_init_method_metadata(&"dialogTitleCloseButtonNegative");
    il2cpp_init_method_metadata(&"dialogTitleCloseButtonQuiet");
    il2cpp_init_method_metadata(&"dialogTitleCloseButtonSecondary");
    il2cpp_init_method_metadata(&"dialogTitleCloseButtonDanger");
    il2cpp_init_method_metadata(&"dialogTitleCloseButton");
    il2cpp_init_method_metadata(&"dialogTitleCloseButtonWorkshop");
    DAT_05701448 = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&PTR_DAT_051760d0)[(int)(variant - 1U)];
  }
  return "dialogTitleCloseButton";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleTextStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle (int32_t variant, const MethodInfo* method);
// 0x3af5210

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle(int32_t variant,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05701449 == '\0') {
    il2cpp_init_method_metadata(&"dialogTitleTextNegative");
    il2cpp_init_method_metadata(&"dialogTitleTextQuiet");
    il2cpp_init_method_metadata(&"dialogTitleText");
    DAT_05701449 = '\x01';
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
// 0x3af5280

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle(int32_t variant,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_0570144a == '\0') {
    il2cpp_init_method_metadata(&"dialogTitleIconNegative");
    il2cpp_init_method_metadata(&"dialogTitleIcon");
    il2cpp_init_method_metadata(&"dialogTitleIconQuiet");
    DAT_0570144a = '\x01';
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


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__5_0 (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x3af52f0

void Gisketch_Aottg2UI_Code_AottgDialogHeader__<Build>b__5_0
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  undefined8 *puVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar6;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_0570144b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"X");
    DAT_0570144b = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._icon,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03af5713;
    (pGVar3->fields).type = "Icon";
    il2cpp_runtime_glue(&pGVar3->fields);
    (pGVar3->fields).icon = (__this->fields)._icon;
    il2cpp_runtime_glue(&(pGVar3->fields).icon);
    iVar1 = (__this->fields)._variant;
    if (DAT_0570144a == '\0') {
      il2cpp_init_method_metadata(&"dialogTitleIconNegative");
      il2cpp_init_method_metadata(&"dialogTitleIcon");
      il2cpp_init_method_metadata(&"dialogTitleIconQuiet");
      DAT_0570144a = '\x01';
    }
    if (iVar1 == 6) {
      puVar4 = &"dialogTitleIconNegative";
    }
    else {
      puVar4 = &"dialogTitleIcon";
      if (iVar1 == 3) {
        puVar4 = &"dialogTitleIconQuiet";
      }
    }
    (pGVar3->fields).style = (System_String_o *)*puVar4;
    il2cpp_runtime_glue(&(pGVar3->fields).style);
    if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_03af5713;
    Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_00);
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = "Text";
    il2cpp_runtime_glue(&pGVar3->fields);
    (pGVar3->fields).text = (__this->fields)._title;
    il2cpp_runtime_glue(&(pGVar3->fields).text);
    iVar1 = (__this->fields)._variant;
    if (DAT_05701449 == '\0') {
      il2cpp_init_method_metadata(&"dialogTitleTextNegative");
      il2cpp_init_method_metadata(&"dialogTitleTextQuiet");
      il2cpp_init_method_metadata(&"dialogTitleText");
      DAT_05701449 = '\x01';
    }
    if (iVar1 == 6) {
      puVar4 = &"dialogTitleTextNegative";
    }
    else {
      puVar4 = &"dialogTitleText";
      if (iVar1 == 3) {
        puVar4 = &"dialogTitleTextQuiet";
      }
    }
    (pGVar3->fields).style = (System_String_o *)*puVar4;
    il2cpp_runtime_glue(&(pGVar3->fields).style);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,in_stack_ffffffffffffffd0);
    (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar5);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_01);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).type = "Button";
        il2cpp_runtime_glue(&pGVar3->fields);
        (pGVar3->fields).text = "X";
        il2cpp_runtime_glue(&(pGVar3->fields).text);
        iVar1 = (__this->fields)._variant;
        if (DAT_05701448 == '\0') {
          il2cpp_init_method_metadata(&"dialogTitleCloseButtonNegative");
          il2cpp_init_method_metadata(&"dialogTitleCloseButtonQuiet");
          il2cpp_init_method_metadata(&"dialogTitleCloseButtonSecondary");
          il2cpp_init_method_metadata(&"dialogTitleCloseButtonDanger");
          il2cpp_init_method_metadata(&"dialogTitleCloseButton");
          il2cpp_init_method_metadata(&"dialogTitleCloseButtonWorkshop");
          DAT_05701448 = '\x01';
        }
        uVar6 = iVar1 - 1;
        if (uVar6 < 6) {
          puVar4 = (undefined8 *)(&PTR_DAT_051760d0)[(int)uVar6];
        }
        else {
          puVar4 = &"dialogTitleCloseButton";
        }
        (pGVar3->fields).style = (System_String_o *)*puVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).style);
        (pGVar3->fields).action = "overlay.close";
        il2cpp_runtime_glue(&(pGVar3->fields).action);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
        bVar2 = System_String__IsNullOrEmpty((__this->fields)._closeEnabledKey,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,
                     (MethodInfo *)0x0);
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_03af5713;
          (pGVar5->fields).alignSelf = (__this->fields)._closeEnabledKey;
          il2cpp_runtime_glue(&(pGVar5->fields).alignSelf);
        }
        (pGVar3->fields).contentLayout = pGVar5;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar5);
        Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_02);
        return;
      }
    }
  }
LAB_03af5713:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


