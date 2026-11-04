// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogFooter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogFooter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_Code_AottgDialogFooter___ctor(Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._ui = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ui,method);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c36e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,System_String_o *actionId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$PrimaryKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3630

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,System_String_o *fallback,
          System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342060 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Primary
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c3720

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary_18c3720
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this_00->fields)._actions,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0
                           );
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$PrimaryKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c3540

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,System_String_o *fallback,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342061 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this_00->fields)._actions,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0
                           );
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Secondary
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3ac0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Secondary
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$SecondaryKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__SecondaryKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3a10

void Gisketch_Aottg2UI_Code_AottgDialogFooter__SecondaryKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *fallback,System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342062 = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,1,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Workshop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3b10

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Workshop
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,2,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3940

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$QuietKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3890

void Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *fallback,System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342063 = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Quiet
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c3990

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_18c3990
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this_00->fields)._actions,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0
                           );
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$QuietKey
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c37a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey_18c37a0
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,System_String_o *fallback,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342064 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this_00->fields)._actions,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0
                           );
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,3,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3420

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Danger
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c3470

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger_18c3470
          (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((__this_00->fields)._actions,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0
                           );
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    return pGVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$DangerKey
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* key, System_String_o* fallback, System_String_o* actionId, const MethodInfo* method);
// 0x1818c3370

void Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *key,
               System_String_o *fallback,System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342065 = '\x01';
  }
  __this_00 = (__this->fields)._ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,6,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgDialogFooter$$Negative
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* __this, System_String_o* text, System_String_o* actionId, const MethodInfo* method);
// 0x1818c34f0

void Gisketch_Aottg2UI_Code_AottgDialogFooter__Negative
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this,System_String_o *text,
               System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = (__this->fields)._ui;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,7,text,actionId,(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


