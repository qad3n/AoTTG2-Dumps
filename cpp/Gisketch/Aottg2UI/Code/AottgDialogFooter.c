// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogFooter.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogFooter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3af4480

void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ui = ui;
  il2cpp_runtime_glue(&__this->fields,ui);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af44b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,in_stack_fffffffffffffff8);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3af4640

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_01 = (__this_00->fields)._actions;
    if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,in_stack_ffffffffffffffe8);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Secondary
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af4730

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Workshop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af4770

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,2,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af47b0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3af47f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_01 = (__this_00->fields)._actions;
    if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,in_stack_ffffffffffffffe8);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af4860

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,5,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               in_stack_fffffffffffffff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Negative
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x3af48a0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


