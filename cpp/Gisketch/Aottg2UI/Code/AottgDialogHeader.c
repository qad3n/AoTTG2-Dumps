// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogHeader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, System_String_o* title, int32_t variant, System_String_o* icon, System_String_o* closeEnabledKey, System_String_o* titleKey, const MethodInfo* method);
// 0x1818c4700

void Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,System_String_o *title,int32_t variant,
               System_String_o *icon,System_String_o *closeEnabledKey,System_String_o *titleKey,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  (__this->fields)._variant = variant;
  if (icon == (System_String_o *)0x0) {
    if (Il2CppMethodInitialized_184342068 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"warning");
      il2cpp_codegen_initialize_runtime_metadata(&"question");
      il2cpp_codegen_initialize_runtime_metadata(&"exclamation");
      il2cpp_codegen_initialize_runtime_metadata(&"information");
      Il2CppMethodInitialized_184342068 = '\x01';
    }
    switch(variant) {
    case 1:
      icon = "question";
      break;
    case 2:
      icon = "information";
      break;
    default:
      icon = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      break;
    case 6:
      icon = "warning";
      break;
    case 7:
      icon = "exclamation";
    }
  }
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,icon);
  (__this->fields)._closeEnabledKey = closeEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._closeEnabledKey,closeEnabledKey);
  (__this->fields)._titleKey = titleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey,titleKey);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1818c3b60

void Gisketch_Aottg2UI_Code_AottgDialogHeader__Build
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *style;
  
  if (Il2CppMethodInitialized_184342066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184342066 = '\x01';
  }
  iVar1 = (__this->fields)._variant;
  if (Il2CppMethodInitialized_184342067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarSecondary");
    Il2CppMethodInitialized_184342067 = '\x01';
  }
  switch(iVar1) {
  case 1:
    style = "dialogTitleBarSecondary";
    break;
  case 2:
    style = "dialogTitleBarWorkshop";
    break;
  case 3:
    style = "dialogTitleBarQuiet";
    break;
  default:
    style = "dialogTitleBar";
    break;
  case 6:
    style = "dialogTitleBarDanger";
    break;
  case 7:
    style = "dialogTitleBarNegative";
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader_Build_b__6_0,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,(System_String_o *)0x0,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleBarStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle (int32_t variant, const MethodInfo* method);
// 0x1818c3f70

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleBarStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBarSecondary");
    Il2CppMethodInitialized_184342067 = '\x01';
  }
  switch(variant) {
  case 1:
    return "dialogTitleBarSecondary";
  case 2:
    return "dialogTitleBarWorkshop";
  case 3:
    return "dialogTitleBarQuiet";
  default:
    return "dialogTitleBar";
  case 6:
    return "dialogTitleBarDanger";
  case 7:
    return "dialogTitleBarNegative";
  }
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$DefaultIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon (int32_t variant, const MethodInfo* method);
// 0x1818c3ea0

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__DefaultIcon(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    il2cpp_codegen_initialize_runtime_metadata(&"exclamation");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    Il2CppMethodInitialized_184342068 = '\x01';
  }
  switch(variant) {
  case 1:
    return "question";
  case 2:
    return "information";
  default:
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  case 6:
    return "warning";
  case 7:
    return "exclamation";
  }
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$CloseButtonStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle (int32_t variant, const MethodInfo* method);
// 0x1818c3db0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogHeader__CloseButtonStyle(int32_t variant,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonSecondary");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonWorkshop");
    Il2CppMethodInitialized_184342069 = '\x01';
  }
  switch(variant) {
  case 1:
    return "dialogTitleCloseButtonSecondary";
  case 2:
    return "dialogTitleCloseButtonWorkshop";
  case 3:
    return "dialogTitleCloseButtonQuiet";
  default:
    return "dialogTitleCloseButton";
  case 6:
    return "dialogTitleCloseButtonDanger";
  case 7:
    return "dialogTitleCloseButtonNegative";
  }
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleTextStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle (int32_t variant, const MethodInfo* method);
// 0x1818c40d0

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleTextStyle(int32_t variant,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434206a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleText");
    Il2CppMethodInitialized_18434206a = '\x01';
  }
  if (variant == 3) {
    return "dialogTitleTextQuiet";
  }
  pSVar1 = "dialogTitleText";
  if (variant == 7) {
    pSVar1 = "dialogTitleTextNegative";
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleIconStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle (int32_t variant, const MethodInfo* method);
// 0x1818c4060

System_String_o * Gisketch_Aottg2UI_Code_AottgDialogHeader__TitleIconStyle(int32_t variant,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434206b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconQuiet");
    Il2CppMethodInitialized_18434206b = '\x01';
  }
  if (variant == 3) {
    return "dialogTitleIconQuiet";
  }
  pSVar1 = "dialogTitleIcon";
  if (variant == 7) {
    pSVar1 = "dialogTitleIconNegative";
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogHeader$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0 (Gisketch_Aottg2UI_Code_AottgDialogHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1818c4140
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c4273: mov rdx, qword ptr [rip + 0x27fe5be]  ; "dialogTitleIconQuiet"
// asm:   0x1818c427a: jmp 0x1818c428e
// asm:   0x1818c436a: mov rdx, qword ptr [rip + 0x27fe767]  ; "dialogTitleTextQuiet"
// asm:   0x1818c4371: jmp 0x1818c4385
// asm:   0x1818c4461: mov esi, r14d
// asm:   0x1818c4464: jmp 0x1818c4499
// asm:   0x1818c4633: mov rsi, r14
// asm:   0x1818c4636: jmp 0x1818c466b

void Gisketch_Aottg2UI_Code_AottgDialogHeader___Build_b__6_0
               (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *header,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_18434206c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_18434206c = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty((__this->fields)._icon,(MethodInfo *)0x0);
  if (!bVar4) {
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (pGVar5->fields).active = true;
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar5,(MethodInfo *)0x0);
    (pGVar5->fields).type = "Icon";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Icon");
    pSVar6 = (__this->fields)._icon;
    (pGVar5->fields).icon = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).icon,pSVar6);
    iVar1 = (__this->fields)._variant;
    if (Il2CppMethodInitialized_18434206b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconNegative");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIcon");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconQuiet");
      Il2CppMethodInitialized_18434206b = '\x01';
    }
    pSVar6 = "dialogTitleIconQuiet";
    if ((iVar1 != 3) && (pSVar6 = "dialogTitleIcon", iVar1 == 7)) {
      pSVar6 = "dialogTitleIconNegative";
    }
    (pGVar5->fields).style = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,pSVar6);
    if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1818c46dd;
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    if ((header->fields)._children == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0)
    goto label_1818c46dd;
    il2cpp_runtime_helper_180012890();
  }
  pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar5->fields).active = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Text");
    pSVar6 = (__this->fields)._title;
    (pGVar5->fields).text = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,pSVar6);
    iVar1 = (__this->fields)._variant;
    if (Il2CppMethodInitialized_18434206a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextNegative");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextQuiet");
      il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleText");
      Il2CppMethodInitialized_18434206a = '\x01';
    }
    pSVar6 = "dialogTitleTextQuiet";
    if ((iVar1 != 3) && (pSVar6 = "dialogTitleText", iVar1 == 7)) {
      pSVar6 = "dialogTitleTextNegative";
    }
    (pGVar5->fields).style = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,pSVar6);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                       1.0,(MethodInfo *)0x0);
    (pGVar5->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
    bVar4 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
    __this_00 = __this_01;
    if (!bVar4) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818c46dd;
      pSVar6 = (__this->fields)._titleKey;
      (__this_00->fields).text = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar6);
    }
    (pGVar5->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,__this_00);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        Il2CppMethodInitialized_18434209b = '\x01';
      }
      pSVar3 = (header->fields)._children;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar3,pGVar5,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        pGVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        (pGVar5->fields).active = true;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).type = "Button";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Button");
          (pGVar5->fields).text = "X";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,"X");
          iVar2 = (__this->fields)._variant;
          if (Il2CppMethodInitialized_184342069 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonNegative");
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonQuiet");
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonSecondary");
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonDanger");
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
            il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButtonWorkshop");
            Il2CppMethodInitialized_184342069 = '\x01';
          }
          switch(iVar2) {
          case 1:
            pSVar6 = "dialogTitleCloseButtonSecondary";
            break;
          case 2:
            pSVar6 = "dialogTitleCloseButtonWorkshop";
            break;
          case 3:
            pSVar6 = "dialogTitleCloseButtonQuiet";
            break;
          default:
            pSVar6 = "dialogTitleCloseButton";
            break;
          case 6:
            pSVar6 = "dialogTitleCloseButtonDanger";
            break;
          case 7:
            pSVar6 = "dialogTitleCloseButtonNegative";
          }
          (pGVar5->fields).style = pSVar6;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,pSVar6);
          (pGVar5->fields).action = "overlay.close";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).action,"overlay.close");
          bVar4 = System_String__IsNullOrEmpty((__this->fields)._closeEnabledKey,(MethodInfo *)0x0);
          if (!bVar4) {
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,
                       (MethodInfo *)0x0);
            if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818c46dd;
            pSVar6 = (__this->fields)._closeEnabledKey;
            (__this_01->fields).enabled = pSVar6;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled,pSVar6);
          }
          (pGVar5->fields).bind = __this_01;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,__this_01);
          if (Il2CppMethodInitialized_18434209b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
            Il2CppMethodInitialized_18434209b = '\x01';
          }
          pSVar3 = (header->fields)._children;
          if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            il2cpp_runtime_helper_180012890(pSVar3,pGVar5,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add)
            ;
            return;
          }
        }
      }
    }
  }
label_1818c46dd:
  ThrowNullReferenceException();
}


