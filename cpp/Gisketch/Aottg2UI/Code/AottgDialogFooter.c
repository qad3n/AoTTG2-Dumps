// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogFooter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogFooter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x53655a0

void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ui = ui;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ui);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x53655d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,System_String_o *actionId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_fffffffffffffff8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$PrimaryKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* actionId, const MethodInfo* method);
// 0x5365760

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,System_String_o *actionId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429dd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x53657f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary_52657f0
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffe8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$PrimaryKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x53658f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429de = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Secondary
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x53659c0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button
            (__this_00,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
             in_stack_fffffffffffffff8);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$SecondaryKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__SecondaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* actionId, const MethodInfo* method);
// 0x5365a00

void Gisketch_Aottg2UI_Code_AottgDialogFooter__SecondaryKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429df = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  node = Gisketch_Aottg2UI_Code_AottgUi__Button
                   (__this_00,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                    in_stack_ffffffffffffffd8);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(node,key,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Workshop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x5365aa0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button
            (__this_00,2,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
             in_stack_fffffffffffffff8);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x5365ae0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button
            (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
             in_stack_fffffffffffffff8);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$QuietKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* actionId, const MethodInfo* method);
// 0x5365b20

void Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429e0 = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  node = Gisketch_Aottg2UI_Code_AottgUi__Button
                   (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                    in_stack_ffffffffffffffd8);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(node,key,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5365bc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_5265bc0
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffe8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$QuietKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5365c30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey_5265c30
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429e1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x5365d00

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button
            (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
             in_stack_fffffffffffffff8);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5365d40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger_5265d40
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffe8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$DangerKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* actionId, const MethodInfo* method);
// 0x5365db0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429e2 = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  node = Gisketch_Aottg2UI_Code_AottgUi__Button
                   (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                    in_stack_ffffffffffffffd8);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(node,key,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$DangerKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5365e50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey_5265e50
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075429e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429e3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (__this_00->fields)._actions;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd8);
  pGVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(pGVar1,key,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Negative
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x5365f20

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff8;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button
            (__this_00,7,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
             in_stack_fffffffffffffff8);
  return;
}


