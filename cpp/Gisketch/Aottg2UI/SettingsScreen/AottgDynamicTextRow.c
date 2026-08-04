// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgDynamicTextRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, System_String_o* id, System_String_o* label, System_Func_string__o* text, System_String_o* tooltip, System_String_o* fallback, const MethodInfo* method);
// 0x445d580

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,System_String_o *id,
               System_String_o *label,System_Func_string__o *text,System_String_o *tooltip,
               System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._text = text;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._text,text);
  (__this->fields)._tooltip = tooltip;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltip,tooltip);
  (__this->fields)._fallback = fallback;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fallback,fallback);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x445d610

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  void *pvVar1;
  System_Action_AottgUi__o *buildControl;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_00;
  System_String_o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  long lVar5;
  MethodInfo *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  System_String_o *pSVar6;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057ae75b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    g_data_057ae75b = '\x01';
  }
  __this_01 = (MethodInfo *)(__this->fields)._id;
  pSVar6 = (__this->fields)._label;
  buildControl = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar2 = (__this->fields)._tooltip;
  __this_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
  __this_02 = __this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_00,(System_String_o *)__this_01,pSVar6,360.0,buildControl,pSVar2,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,
             in_stack_ffffffffffffffc0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = __this_01;
  if (g_data_057ae75c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-value");
    g_data_057ae75c = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue
                     ((Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *)__this_02,method_00);
  pSVar6 = (__this_02->fields)._id;
  id = System_String__Concat_3ae5ba0(pSVar6,"-value",(MethodInfo *)0x0);
  if (__this_01 != (MethodInfo *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,pSVar2,"text",id,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar6 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar1 = pSVar6[1].monitor;
  if (pvVar1 != (void *)0x0) {
    lVar5 = (**(code **)((long)pvVar1 + 0x18))
                      (*(undefined8 *)((long)pvVar1 + 0x40),*(undefined8 *)((long)pvVar1 + 0x28));
    if (lVar5 != 0) {
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$BuildText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__BuildText (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x445d700

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__BuildText
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  void *pvVar1;
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  long lVar4;
  MethodInfo *method_00;
  System_String_o *str0;
  
  method_00 = (MethodInfo *)control;
  if (g_data_057ae75c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-value");
    g_data_057ae75c = '\x01';
  }
  text = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue(__this,method_00);
  str0 = (__this->fields)._id;
  id = System_String__Concat_3ae5ba0(str0,"-value",(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (control,text,"text",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    str0 = "Column";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar1 = str0[1].monitor;
  if (pvVar1 != (void *)0x0) {
    lVar4 = (**(code **)((long)pvVar1 + 0x18))
                      (*(undefined8 *)((long)pvVar1 + 0x40),*(undefined8 *)((long)pvVar1 + 0x28));
    if (lVar4 != 0) {
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, const MethodInfo* method);
// 0x445d870

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._text;
  if (pSVar1 != (System_Func_string__o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    if (pSVar2 != (System_String_o *)0x0) {
      return pSVar2;
    }
  }
  return (__this->fields)._fallback;
}


