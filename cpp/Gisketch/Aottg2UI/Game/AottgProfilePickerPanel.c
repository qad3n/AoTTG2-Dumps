// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePickerPanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleIcon, Gisketch_Aottg2UI_Code_AottgComponent_o* picker, System_String_o* saveActionId, const MethodInfo* method);
// 0x41ee2b0

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *titleIcon,
               Gisketch_Aottg2UI_Code_AottgComponent_o *picker,System_String_o *saveActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._title = title;
  il2cpp_runtime_glue(&(__this->fields)._title,title);
  (__this->fields)._titleIcon = titleIcon;
  il2cpp_runtime_glue(&(__this->fields)._titleIcon,titleIcon);
  (__this->fields)._picker = picker;
  il2cpp_runtime_glue(&(__this->fields)._picker,picker);
  (__this->fields)._saveActionId = saveActionId;
  il2cpp_runtime_glue(&(__this->fields)._saveActionId,saveActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41f5800

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (DAT_05704f84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&" title=");
    il2cpp_init_method_metadata(&"profilePreviewDialog");
    il2cpp_init_method_metadata(&"ProfilePickerPanel.Build");
    DAT_05704f84 = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pSVar1 = System_String__Concat
                     ((__this->fields)._id," title=",(__this->fields)._title,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"ProfilePickerPanel.Build",pSVar1,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pSVar1 = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(630.0,(MethodInfo *)0x0);
  uVar6 = 0;
  uVar7 = 0;
  uVar5 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (DAT_05704f5c == '\0') {
    il2cpp_init_method_metadata(&"slideRight");
    DAT_05704f5c = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uVar4 = 0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",build,pSVar1,layout,pGVar2,(MethodInfo *)0x0);
    if (DAT_05704f5d == '\0') {
      il2cpp_init_method_metadata(&"slideRight");
      DAT_05704f5d = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).enter = pGVar2;
      il2cpp_runtime_glue(&(pGVar3->fields).enter,pGVar2);
      __this_00.fields._detail = (System_String_o *)uVar5;
      __this_00.fields._area = (System_String_o *)uVar4;
      __this_00.fields._startMs = uVar6;
      __this_00.fields._enabled = (int)uVar7;
      __this_00.fields._hotLoop = (int)((ulong)uVar7 >> 0x20);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&local_68);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x41f5b30

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__<Build>b__6_0
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (DAT_05704f85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgDialogHeader);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_2);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-footer");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"dialogFooter");
    il2cpp_init_method_metadata(&"dialogBody");
    il2cpp_init_method_metadata(&"-body");
    DAT_05704f85 = '\x01';
  }
  pSVar2 = (__this->fields)._title;
  icon = (__this->fields)._titleIcon;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)il2cpp_runtime_glue(TypeInfo_AottgDialogHeader);
  Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
            (__this_00,pSVar2,0,icon,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar2 = System_String__Concat((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogBody",pSVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar2 = System_String__Concat((__this->fields)._id,"-footer",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogFooter",pSVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41f5e50

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__<Build>b__6_1
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,(MethodInfo *)body);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,(__this->fields)._picker,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x41f5e90

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__<Build>b__6_2
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter(footer,(__this->fields)._saveActionId,method);
  return;
}


