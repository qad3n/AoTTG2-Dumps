// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePickerPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleIcon, Gisketch_Aottg2UI_Code_AottgComponent_o* picker, System_String_o* saveActionId, const MethodInfo* method);
// 0x451f570

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *titleIcon,
               Gisketch_Aottg2UI_Code_AottgComponent_o *picker,System_String_o *saveActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._title = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._title,title);
  (__this->fields)._titleIcon = titleIcon;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._titleIcon,titleIcon);
  (__this->fields)._picker = picker;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._picker,picker);
  (__this->fields)._saveActionId = saveActionId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveActionId,saveActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4527cb0

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (g_data_057aee5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&" title=");
    il2cpp_runtime_helper_023445d0(&"profilePreviewDialog");
    il2cpp_runtime_helper_023445d0(&"ProfilePickerPanel.Build");
    g_data_057aee5f = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pSVar2 = System_String__Concat_3af7150
                     ((__this->fields)._id," title=",(__this->fields)._title,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_48,"ProfilePickerPanel.Build",pSVar2,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar2 = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(630.0,(MethodInfo *)0x0);
  uVar9 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar8 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (g_data_057aee36 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRight");
    g_data_057aee36 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar7 = 0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",build,pSVar2,layout,pGVar3,(MethodInfo *)0x0);
    if (g_data_057aee37 == '\0') {
      il2cpp_runtime_helper_023445d0(&"slideRight");
      g_data_057aee37 = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).enter = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).enter,pGVar3);
      __this_00.fields._detail = (System_String_o *)uVar8;
      __this_00.fields._area = (System_String_o *)uVar7;
      __this_00.fields._startMs = uVar9;
      __this_00.fields._enabled = (int)uVar10;
      __this_00.fields._hotLoop = (int)((ulong)uVar10 >> 0x20);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_68);
      return;
    }
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_01.fields._detail = (System_String_o *)uVar8;
    __this_01.fields._area = (System_String_o *)uVar7;
    __this_01.fields._startMs = uVar9;
    __this_01.fields._enabled = (int)uVar10;
    __this_01.fields._hotLoop = (int)((ulong)uVar10 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_68);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail = (System_String_o *)uVar8;
  __this_02.fields._area = (System_String_o *)uVar7;
  __this_02.fields._startMs = uVar9;
  __this_02.fields._enabled = (int)uVar10;
  __this_02.fields._hotLoop = (int)((ulong)uVar10 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_68);
  _Unwind_Resume(auVar6._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4527fe0

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *method_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *footer;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *pGVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  
  if (g_data_057aee60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogHeader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_2);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-footer");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"dialogFooter");
    il2cpp_runtime_helper_023445d0(&"dialogBody");
    il2cpp_runtime_helper_023445d0(&"-body");
    g_data_057aee60 = '\x01';
  }
  method_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields)._title;
  pSVar2 = (__this->fields)._titleIcon;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogHeader);
  pGVar5 = __this_00;
  Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
            (__this_00,(System_String_o *)method_01,0,pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogBody",pSVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-footer",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        12.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogFooter",pSVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  footer = method_01;
  pGVar6 = method_01;
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(method_01,(MethodInfo *)method_01);
  if (method_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (method_01,(Gisketch_Aottg2UI_Code_AottgComponent_o *)(pGVar5->fields)._closeEnabledKey,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_44227d0(footer,pGVar6[1].monitor,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4528300

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *footer;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar1;
  
  footer = body;
  pGVar1 = body;
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,(MethodInfo *)body);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,(__this->fields)._picker,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_44227d0(footer,pGVar1[1].monitor,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x4528340

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_44227d0(footer,(__this->fields)._saveActionId,method);
  return;
}


