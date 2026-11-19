// Type: Controllers.HumanAIStates.Custom
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/Custom.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.Custom$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_Custom__get_Name (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x5bb0290

System_String_o *
Controllers_HumanAIStates_Custom__get_Name(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// Controllers.HumanAIStates.Custom$$Init
// il2cpp: void Controllers_HumanAIStates_Custom__Init (Controllers_HumanAIStates_Custom_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* instance, const MethodInfo* method);
// 0x5bb02a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb0411: jmp 0x5bb0578
// asm:   0x5bb04cd: jmp 0x5bb0578

void Controllers_HumanAIStates_Custom__Init
               (Controllers_HumanAIStates_Custom_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *instance,MethodInfo *method)

{
  CustomLogic_UserClassInstance_o **targetAddress;
  CustomLogic_UserMethod_o **targetAddress_00;
  CustomLogic_UserMethod_o **targetAddress_01;
  CustomLogic_UserMethod_o **targetAddress_02;
  byte bVar1;
  CustomLogic_UserClassInstance_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_UserMethod_c *pCVar4;
  bool bVar5;
  CustomLogic_UserMethod_o *pCVar6;
  
  if (Il2CppMethodInitialized_075474be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"OnStateEntry");
    il2cpp_codegen_initialize_runtime_metadata(&"OnStateExit");
    il2cpp_codegen_initialize_runtime_metadata(&"Action");
    Il2CppMethodInitialized_075474be = '\x01';
  }
  (__this->fields)._name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  targetAddress = &(__this->fields)._instance;
  (__this->fields)._instance = instance;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._onStateEntry;
  (__this->fields)._onStateEntry = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  targetAddress_01 = &(__this->fields)._action;
  (__this->fields)._action = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  targetAddress_02 = &(__this->fields)._onStateExit;
  (__this->fields)._onStateExit = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_02);
  pCVar2 = (__this->fields)._instance;
  if ((pCVar2 != (CustomLogic_UserClassInstance_o *)0x0) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Variables,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)"OnStateEntry",
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    if (bVar5) {
      if (*targetAddress == (CustomLogic_UserClassInstance_o *)0x0) goto label_05bb05af;
      pCVar6 = (CustomLogic_UserMethod_o *)
               CustomLogic_CustomLogicClassInstance__GetVariable
                         ((CustomLogic_CustomLogicClassInstance_o *)*targetAddress,"OnStateEntry",
                          (MethodInfo *)0x0);
      pCVar4 = TypeInfo_CustomLogic_UserMethod;
      if (pCVar6 == (CustomLogic_UserMethod_o *)0x0) {
        *targetAddress_00 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
        if (((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) goto label_05bb0578;
        *targetAddress_00 = pCVar6;
        if (((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pCVar4))
        goto label_05bb0578;
      }
      Il2CppCodeGenWriteBarrier(targetAddress_00);
    }
    if ((*targetAddress == (CustomLogic_UserClassInstance_o *)0x0) ||
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((*targetAddress)->fields).Variables,
       pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05bb05af;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)"Action",
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    if (bVar5) {
      if (*targetAddress == (CustomLogic_UserClassInstance_o *)0x0) goto label_05bb05af;
      pCVar6 = (CustomLogic_UserMethod_o *)
               CustomLogic_CustomLogicClassInstance__GetVariable
                         ((CustomLogic_CustomLogicClassInstance_o *)*targetAddress,"Action",
                          (MethodInfo *)0x0);
      pCVar4 = TypeInfo_CustomLogic_UserMethod;
      if (pCVar6 == (CustomLogic_UserMethod_o *)0x0) {
        *targetAddress_01 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
        if (((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) goto label_05bb0578;
        *targetAddress_01 = pCVar6;
        if (((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pCVar4))
        goto label_05bb0578;
      }
      Il2CppCodeGenWriteBarrier(targetAddress_01);
    }
    if ((*targetAddress != (CustomLogic_UserClassInstance_o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((*targetAddress)->fields).Variables,
       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)"OnStateExit",
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
      if (!bVar5) {
        return;
      }
      if (*targetAddress != (CustomLogic_UserClassInstance_o *)0x0) {
        pCVar6 = (CustomLogic_UserMethod_o *)
                 CustomLogic_CustomLogicClassInstance__GetVariable
                           ((CustomLogic_CustomLogicClassInstance_o *)*targetAddress,"OnStateExit",
                            (MethodInfo *)0x0);
        pCVar4 = TypeInfo_CustomLogic_UserMethod;
        if (pCVar6 == (CustomLogic_UserMethod_o *)0x0) {
          *targetAddress_02 = (CustomLogic_UserMethod_o *)0x0;
label_05bb0596:
          Il2CppCodeGenWriteBarrier(targetAddress_02);
          return;
        }
        bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
        if ((bVar1 <= (((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth) &&
           ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
          *targetAddress_02 = pCVar6;
          if ((bVar1 <= (((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth) &&
             ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pCVar4))
          goto label_05bb0596;
        }
label_05bb0578:
        il2cpp_codegen_raise_invalid_cast_exception(pCVar6);
      }
    }
  }
label_05bb05af:
  ThrowNullReferenceException();
}


// Controllers.HumanAIStates.Custom$$OnStateEntry
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateEntry (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x5bb05c0

void Controllers_HumanAIStates_Custom__OnStateEntry
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_075474bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075474bf = '\x01';
  }
  if ((__this->fields)._onStateEntry == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,(__this->fields)._onStateEntry,(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIStates.Custom$$Action
// il2cpp: void Controllers_HumanAIStates_Custom__Action (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x5bb0640

void Controllers_HumanAIStates_Custom__Action(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_075474c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075474c0 = '\x01';
  }
  if ((__this->fields)._action == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,(__this->fields)._action,(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIStates.Custom$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateExit (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x5bb06c0

void Controllers_HumanAIStates_Custom__OnStateExit
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_075474c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075474c1 = '\x01';
  }
  if ((__this->fields)._onStateExit == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,(__this->fields)._onStateExit,(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIStates.Custom$$.ctor
// il2cpp: void Controllers_HumanAIStates_Custom___ctor (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x5bb0740

void Controllers_HumanAIStates_Custom___ctor(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


