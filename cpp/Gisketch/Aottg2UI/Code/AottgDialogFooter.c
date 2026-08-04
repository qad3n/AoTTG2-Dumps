// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogFooter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogFooter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3b5f5f0

void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ui = ui;
  il2cpp_runtime_helper_022b4080(&__this->fields,ui);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5fb20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,System_String_o *actionId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *actionId_00;
  System_Action_GisketchActionContext__o *action;
  System_String_o *extraout_RDX;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text_00;
  System_String_o *text_01;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar5;
  System_String_o *in_R8;
  System_String_o *in_R9;
  System_String_o *tooltip;
  MethodInfo *in_stack_ffffffffffffff30;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_stack_ffffffffffffff80;
  MethodInfo *in_stack_ffffffffffffff88;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_stack_fffffffffffffff0;
  MethodInfo *in_stack_fffffffffffffff8;
  
  pGVar5 = (__this->fields)._ui;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar5,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        in_stack_fffffffffffffff8);
    return pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  action = (System_Action_GisketchActionContext__o *)method;
  pSVar4 = in_R8;
  tooltip = in_R9;
  if (g_data_057a9d93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9d93 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  text_01 = (System_String_o *)0x0;
  pGVar3 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = in_R8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,in_R8);
    (__this_00->fields).text = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).text,extraout_RDX);
    (__this_00->fields).icon = (System_String_o *)in_stack_fffffffffffffff8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
    method_01 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)in_stack_fffffffffffffff8,(MethodInfo *)0x0);
    *(byte *)&(__this_00->fields).hasIcon = (byte)bVar2 ^ 1;
    pSVar4 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle((int32_t)text,method_01);
    (__this_00->fields).style = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style,pSVar4);
    (__this_00->fields).action = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).action,method);
    (__this_00->fields).choiceOptionRenderer = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).choiceOptionRenderer,in_R9);
    (__this_00->fields).motion = in_stack_fffffffffffffff0;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).motion);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(pGVar5,__this_00,method_00);
    return pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar5 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar3->fields).type;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = (pGVar5->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar4 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(pGVar5->fields)._ownerId,action_00,(MethodInfo *)0x0);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar5,0,text_01,pSVar4,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        in_stack_ffffffffffffff88);
    return pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar1 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar3->fields).id;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (pGVar1,(pGVar3->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,(int32_t)text_01,text_00,actionId_00,pSVar4,
                      tooltip,in_stack_ffffffffffffff80,(System_String_o *)in_stack_ffffffffffffff88,
                      in_stack_ffffffffffffff30);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b5fcb0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary_3a5fcb0
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *text_00;
  System_String_o *in_R8;
  System_String_o *in_R9;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_stack_ffffffffffffffe0;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = (__this_00->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        in_stack_ffffffffffffffe8);
    return pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar1 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._actions;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (pGVar1,(((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._ownerId,
                        (System_Action_GisketchActionContext__o *)method,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this,(int32_t)text,text_00,pSVar2,in_R8,in_R9,
                      in_stack_ffffffffffffffe0,(System_String_o *)in_stack_ffffffffffffffe8,
                      in_stack_ffffffffffffff90);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Secondary
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5fda0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId_00;
  System_String_o *actionId_01;
  System_String_o *actionId_02;
  System_Action_GisketchActionContext__o *action;
  System_String_o *actionId_03;
  System_String_o *actionId_04;
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_01;
  MethodInfo *in_stack_ffffffffffffffa0;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_fffffffffffffff8;
  
  pGVar2 = (__this->fields)._ui;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar2,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5fdd4;
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pGVar2->fields)._children;
  if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar3,2,text,actionId_01,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar4);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5fe14;
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (pSVar3->fields)._items;
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,3,text,actionId_02,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01->bounds;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_00 = (pGVar2->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                              (__this_00,(pGVar2->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar2,3,text,actionId_00,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_ffffffffffffffa0);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5fece;
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01->bounds;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar2,5,text,actionId_03,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,pMVar4);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5ff04;
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pGVar2->fields)._children;
  if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar3,6,text,actionId_04,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = (int)pSVar3 - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Workshop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5fde0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  System_String_o *actionId_00;
  System_String_o *actionId_01;
  System_Action_GisketchActionContext__o *action;
  System_String_o *actionId_02;
  System_String_o *actionId_03;
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *in_stack_ffffffffffffffb8;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_fffffffffffffff8;
  
  pGVar2 = (__this->fields)._ui;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar2,2,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5fe14;
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (pGVar2->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,3,text,actionId_01,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar3 = (__this_00->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar3->max_length ==
        (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                              ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar3->max_length,
                               (System_String_o *)pGVar3->m_Items[0],action,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,3,text,actionId_00,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,in_stack_ffffffffffffffb8);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5fece;
  il2cpp_runtime_helper_022b2c90();
  pGVar3 = (__this_00->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,5,text,actionId_02,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar4);
    return;
  }
  pMVar4 = (MethodInfo *)0x3b5ff04;
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3->bounds;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar2,6,text,actionId_03,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = (int)pGVar2 - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5fe20

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId_00;
  System_Action_GisketchActionContext__o *action;
  System_String_o *actionId_01;
  System_String_o *actionId_02;
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_02;
  MethodInfo *pMVar3;
  MethodInfo *in_stack_ffffffffffffffd0;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_01 = (__this->fields)._ui;
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_01,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = (__this_01->fields)._children;
  if (pSVar2 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    __this_00 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)&(pSVar2->fields)._size;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                              (__this_00,(System_String_o *)(pSVar2->fields)._syncRoot,action,
                               (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar2,3,text,actionId_00,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,in_stack_ffffffffffffffd0);
    return;
  }
  pMVar3 = (MethodInfo *)0x3b5fece;
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = (__this_01->fields)._children;
  if (pSVar2 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar2,5,text,actionId_01,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar3);
    return;
  }
  pMVar3 = (MethodInfo *)0x3b5ff04;
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (pSVar2->fields)._items;
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,6,text,actionId_02,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,pMVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = (int)__this_02 - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b5fe60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *actionId_00;
  System_String_o *actionId_01;
  uint uVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar3;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_01;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  pGVar3 = (__this->fields)._ui;
  if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_00 = (pGVar3->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (__this_00,(pGVar3->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar3,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        in_stack_ffffffffffffffe8);
    return pGVar1;
  }
  pMVar4 = (MethodInfo *)0x3b5fece;
  il2cpp_runtime_helper_022b2c90();
  pGVar3 = (__this->fields)._ui;
  if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar3,5,text,actionId_00,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,pMVar4
                       );
    return pGVar1;
  }
  pMVar4 = (MethodInfo *)0x3b5ff04;
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (pGVar3->fields)._children;
  if (__this_01 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,6,text,actionId_01,
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,pMVar4
                       );
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar2 = (int)__this_01 - 1;
  if ((uVar2 < 6) && ((0x33U >> (uVar2 & 0x1f) & 1) != 0)) {
    return *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(&g_data_05215070)[(int)uVar2];
  }
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5fed0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  System_String_o *actionId_00;
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,5,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
  method_00 = (MethodInfo *)0x3b5ff04;
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (__this_00->fields)._children;
  if (__this_01 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,6,text,actionId_00,(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = (int)__this_01 - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Negative
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3b5ff10

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"exclamation");
    il2cpp_runtime_helper_023445d0(&"information");
    g_data_057a9d6a = '\x01';
  }
  uVar1 = (int)__this_00 - 1;
  if ((uVar1 < 6) && ((0x33U >> (uVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  return;
}


