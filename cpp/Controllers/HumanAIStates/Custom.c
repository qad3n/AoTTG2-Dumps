// Type: Controllers.HumanAIStates.Custom
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/Custom.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.Custom$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_Custom__get_Name (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x1805853c0

System_String_o*
Controllers_HumanAIStates_Custom__get_Name(Controllers_HumanAIStates_Custom_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// Controllers.HumanAIStates.Custom$$Init
// il2cpp: void Controllers_HumanAIStates_Custom__Init (Controllers_HumanAIStates_Custom_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* instance, const MethodInfo* method);
// 0x1821166b0

void Controllers_HumanAIStates_Custom__Init
               (Controllers_HumanAIStates_Custom_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *instance,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_UserClassInstance_o *pCVar2;
  System_Collections_Generic_Dictionary_string__object__o *pSVar3;
  bool bVar4;
  CustomLogic_UserMethod_o *pCVar5;
  CustomLogic_UserMethod_o *pCVar6;
  
  if (Il2CppMethodInitialized_184346af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"OnStateEntry");
    il2cpp_codegen_initialize_runtime_metadata(&"OnStateExit");
    il2cpp_codegen_initialize_runtime_metadata(&"Action");
    Il2CppMethodInitialized_184346af1 = '\x01';
  }
  (__this->fields)._name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,name);
  (__this->fields)._instance = instance;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._instance,instance);
  pCVar6 = (CustomLogic_UserMethod_o *)0x0;
  (__this->fields)._onStateEntry = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onStateEntry,(void *)0x0);
  (__this->fields)._action = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._action,(void *)0x0);
  (__this->fields)._onStateExit = (CustomLogic_UserMethod_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onStateExit,(void *)0x0);
  pCVar2 = (__this->fields)._instance;
  if ((pCVar2 != (CustomLogic_UserClassInstance_o *)0x0) &&
     (pSVar3 = (pCVar2->fields).Variables,
     pSVar3 != (System_Collections_Generic_Dictionary_string__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)"OnStateEntry",
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    if (bVar4) {
      pCVar2 = (__this->fields)._instance;
      if (pCVar2 == (CustomLogic_UserClassInstance_o *)0x0) goto label_1821169ef;
      pCVar5 = (CustomLogic_UserMethod_o *)
               CustomLogic_CustomLogicClassInstance__GetVariable
                         ((CustomLogic_CustomLogicClassInstance_o *)pCVar2,"OnStateEntry",
                          (MethodInfo *)0x0);
      if (pCVar5 == (CustomLogic_UserMethod_o *)0x0) {
        (__this->fields)._onStateEntry = (CustomLogic_UserMethod_o *)0x0;
        pCVar5 = pCVar6;
      }
      else {
        bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
        if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
        }
        (__this->fields)._onStateEntry = pCVar5;
        bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
        if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onStateEntry,pCVar5);
    }
    pCVar2 = (__this->fields)._instance;
    if ((pCVar2 != (CustomLogic_UserClassInstance_o *)0x0) &&
       (pSVar3 = (pCVar2->fields).Variables,
       pSVar3 != (System_Collections_Generic_Dictionary_string__object__o *)0x0)) {
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)"Action",
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
      if (bVar4) {
        pCVar2 = (__this->fields)._instance;
        if (pCVar2 == (CustomLogic_UserClassInstance_o *)0x0) goto label_1821169ef;
        pCVar5 = (CustomLogic_UserMethod_o *)
                 CustomLogic_CustomLogicClassInstance__GetVariable
                           ((CustomLogic_CustomLogicClassInstance_o *)pCVar2,"Action",
                            (MethodInfo *)0x0);
        if (pCVar5 == (CustomLogic_UserMethod_o *)0x0) {
          (__this->fields)._action = (CustomLogic_UserMethod_o *)0x0;
          pCVar5 = pCVar6;
        }
        else {
          bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
          if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
          }
          (__this->fields)._action = pCVar5;
          bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
          if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._action,pCVar5);
      }
      pCVar2 = (__this->fields)._instance;
      if ((pCVar2 != (CustomLogic_UserClassInstance_o *)0x0) &&
         (pSVar3 = (pCVar2->fields).Variables,
         pSVar3 != (System_Collections_Generic_Dictionary_string__object__o *)0x0)) {
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)"OnStateExit",
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
        if (bVar4) {
          pCVar2 = (__this->fields)._instance;
          if (pCVar2 == (CustomLogic_UserClassInstance_o *)0x0) goto label_1821169ef;
          pCVar5 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicClassInstance__GetVariable
                             ((CustomLogic_CustomLogicClassInstance_o *)pCVar2,"OnStateExit",
                              (MethodInfo *)0x0);
          if (pCVar5 == (CustomLogic_UserMethod_o *)0x0) {
            (__this->fields)._onStateExit = (CustomLogic_UserMethod_o *)0x0;
            pCVar5 = pCVar6;
          }
          else {
            bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
            if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
            }
            (__this->fields)._onStateExit = pCVar5;
            bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
            if (((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
            }
          }
          Il2CppCodeGenWriteBarrier(&(__this->fields)._onStateExit,pCVar5);
        }
        return;
      }
    }
  }
label_1821169ef:
  ThrowNullReferenceException();
}


// Controllers.HumanAIStates.Custom$$OnStateEntry
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateEntry (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x182116a30

void Controllers_HumanAIStates_Custom__OnStateEntry
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_184346af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346af2 = '\x01';
  }
  if ((__this->fields)._onStateEntry != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._onStateEntry;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  }
  return;
}


// Controllers.HumanAIStates.Custom$$Action
// il2cpp: void Controllers_HumanAIStates_Custom__Action (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x182116610

void Controllers_HumanAIStates_Custom__Action(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_184346af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346af3 = '\x01';
  }
  if ((__this->fields)._action != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._action;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  }
  return;
}


// Controllers.HumanAIStates.Custom$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateExit (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x182116ad0

void Controllers_HumanAIStates_Custom__OnStateExit
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_184346af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346af4 = '\x01';
  }
  if ((__this->fields)._action != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._onStateExit;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  }
  return;
}


// Controllers.HumanAIStates.Custom$$.ctor
// il2cpp: void Controllers_HumanAIStates_Custom___ctor (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x18054c890

void
Controllers_HumanAIStates_Custom___ctor(Controllers_HumanAIStates_Custom_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


