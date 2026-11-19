// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogHeader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, System_String_o* title, int32_t variant, System_String_o* icon, System_String_o* closeEnabledKey, System_String_o* titleKey, const MethodInfo* method);
// 0x5365f60

void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,System_String_o *title,int32_t variant,
               System_String_o *icon,System_String_o *closeEnabledKey,System_String_o *titleKey,
               MethodInfo *method)

{
  undefined **ppuVar1;
  uint uVar2;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._variant = variant;
  if (icon == (System_String_o *)0x0) {
    if (Il2CppMethodInitialized_075429e6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"warning");
      il2cpp_codegen_initialize_runtime_metadata(&"question");
      il2cpp_codegen_initialize_runtime_metadata(&"exclamation");
      il2cpp_codegen_initialize_runtime_metadata(&"information");
      Il2CppMethodInitialized_075429e6 = '\x01';
    }
    uVar2 = variant - 1;
    if ((uVar2 < 7) && ((99U >> (uVar2 & 0x1f) & 1) != 0)) {
      ppuVar1 = ((System_String_o **[]){&"question", &"information", &"question", &"question", &"question", &"warning", &"exclamation"}) + (int)uVar2;
    }
    else {
      ppuVar1 = (undefined **)(g_data_07556758 + 0xb8);
    }
    icon = *(System_String_o **)*ppuVar1;
  }
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon);
  (__this->fields)._closeEnabledKey = closeEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._closeEnabledKey);
  (__this->fields)._titleKey = titleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x53660f0

void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  pMVar1 = (MethodInfo *)ui;
  if (Il2CppMethodInitialized_075429e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075429e4 = '\x01';
  }
  style = Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle((__this->fields)._variant,pMVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader_Build_b__6_0,
             (MethodInfo_4A81BE0 *)0x0);
  if (Il2CppMethodInitialized_07542a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542a24 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_01->fields).value = 100.0;
    (__this_01->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
    pMVar1 = (MethodInfo *)0x0;
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,__this_01,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,in_stack_ffffffffffffffd0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,style,__this_00,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleBarStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle (int32_t variant, const MethodInfo* method);
// 0x53662a0

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarSecondary");
    Il2CppMethodInitialized_075429e5 = '\x01';
  }
  if (variant - 1U < 7) {
    return *(System_String_o **)(((System_String_o **[]){&"dialogTitleBarSecondary", &"dialogTitleBarWorkshop", &"dialogTitleBarQuiet", &"dialogTitleBar", &"dialogTitleBar", &"dialogTitleBarDanger", &"dialogTitleBarNegative"}))[(int)(variant - 1U)];
  }
  return "dialogTitleBar";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$DefaultIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon (int32_t variant, const MethodInfo* method);
// 0x5366060

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon(int32_t variant,MethodInfo *method)

{
  uint uVar1;
  
  if (Il2CppMethodInitialized_075429e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    il2cpp_codegen_initialize_runtime_metadata(&"exclamation");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    Il2CppMethodInitialized_075429e6 = '\x01';
  }
  uVar1 = variant - 1;
  if ((uVar1 < 7) && ((99U >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(System_String_o **)(((System_String_o **[]){&"question", &"information", &"question", &"question", &"question", &"warning", &"exclamation"}))[(int)uVar1];
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$CloseButtonStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle (int32_t variant, const MethodInfo* method);
// 0x5366780

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonSecondary");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonWorkshop");
    Il2CppMethodInitialized_075429e7 = '\x01';
  }
  if (variant - 1U < 7) {
    return *(System_String_o **)(((System_String_o **[]){&"dialogTitleCloseButtonSecondary", &"dialogTitleCloseButtonWorkshop", &"dialogTitleCloseButtonQuiet", &"dialogTitleCloseButton", &"dialogTitleCloseButton", &"dialogTitleCloseButtonDanger", &"dialogTitleCloseButtonNegative"}))[(int)(variant - 1U)];
  }
  return "dialogTitleCloseButton";
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleTextStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle (int32_t variant, const MethodInfo* method);
// 0x5366810

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle(int32_t variant,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075429e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleText");
    Il2CppMethodInitialized_075429e8 = '\x01';
  }
  if (variant == 7) {
    ppSVar1 = &"dialogTitleTextNegative";
  }
  else {
    ppSVar1 = &"dialogTitleText";
    if (variant == 3) {
      ppSVar1 = &"dialogTitleTextQuiet";
    }
  }
  return *ppSVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleIconStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle (int32_t variant, const MethodInfo* method);
// 0x5366880

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle(int32_t variant,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075429e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconQuiet");
    Il2CppMethodInitialized_075429e9 = '\x01';
  }
  if (variant == 7) {
    ppSVar1 = &"dialogTitleIconNegative";
  }
  else {
    ppSVar1 = &"dialogTitleIcon";
    if (variant == 3) {
      ppSVar1 = &"dialogTitleIconQuiet";
    }
  }
  return *ppSVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0 (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x53668f0

void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *header,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_075429ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_075429ea = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._icon,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05366d03;
    (pGVar3->fields).type = "Icon";
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
    (pGVar3->fields).icon = (__this->fields)._icon;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).icon);
    iVar1 = (__this->fields)._variant;
    if (Il2CppMethodInitialized_075429e9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconNegative");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIcon");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconQuiet");
      Il2CppMethodInitialized_075429e9 = '\x01';
    }
    if (iVar1 == 7) {
      ppSVar4 = &"dialogTitleIconNegative";
    }
    else {
      ppSVar4 = &"dialogTitleIcon";
      if (iVar1 == 3) {
        ppSVar4 = &"dialogTitleIconQuiet";
      }
    }
    (pGVar3->fields).style = *ppSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
    if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05366d03;
    Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_00);
  }
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
    (pGVar3->fields).text = (__this->fields)._title;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).text);
    iVar1 = (__this->fields)._variant;
    if (Il2CppMethodInitialized_075429e8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextNegative");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextQuiet");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleText");
      Il2CppMethodInitialized_075429e8 = '\x01';
    }
    if (iVar1 == 7) {
      ppSVar4 = &"dialogTitleTextNegative";
    }
    else {
      ppSVar4 = &"dialogTitleText";
      if (iVar1 == 3) {
        ppSVar4 = &"dialogTitleTextQuiet";
      }
    }
    (pGVar3->fields).style = *ppSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,in_stack_ffffffffffffffc0);
    (pGVar3->fields).layout = pGVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05366d03;
      (pGVar6->fields).text = (__this->fields)._titleKey;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).text);
    }
    (pGVar3->fields).bind = pGVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_01);
      pGVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).type = "Button";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
        method_03 = (MethodInfo *)"X";
        (pGVar3->fields).text = "X";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).text);
        pSVar7 = Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle
                           ((__this->fields)._variant,method_03);
        (pGVar3->fields).style = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
        (pGVar3->fields).action = "overlay.close";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).action);
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
        bVar2 = System_String__IsNullOrEmpty((__this->fields)._closeEnabledKey,(MethodInfo *)0x0);
        if (!bVar2) {
          pGVar6 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
          if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05366d03;
          (pGVar6->fields).enabled = (__this->fields)._closeEnabledKey;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enabled);
        }
        (pGVar3->fields).bind = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        Gisketch_Aottg2UI_Code_AottgUi__Add(header,pGVar3,method_02);
        return;
      }
    }
  }
label_05366d03:
  ThrowNullReferenceException();
}


