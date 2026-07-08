// Type: Controllers.HumanAIStates.Custom
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/Custom.cs
// Prior source: NEW in this update
// --------------------------------

// Controllers.HumanAIStates.Custom$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_Custom__get_Name (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x3f90cf0

System_String_o *
Controllers_HumanAIStates_Custom__get_Name
          (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// Controllers.HumanAIStates.Custom$$Init
// il2cpp: void Controllers_HumanAIStates_Custom__Init (Controllers_HumanAIStates_Custom_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* instance, const MethodInfo* method);
// 0x3f90d00

void Controllers_HumanAIStates_Custom__Init
               (Controllers_HumanAIStates_Custom_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *instance,MethodInfo *method)

{
  CustomLogic_UserClassInstance_o **ppCVar1;
  CustomLogic_UserMethod_o **ppCVar2;
  CustomLogic_UserMethod_o **ppCVar3;
  CustomLogic_UserMethod_o **ppCVar4;
  byte bVar5;
  CustomLogic_UserClassInstance_o *pCVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppClass *pIVar8;
  bool_conflict bVar9;
  CustomLogic_UserMethod_o *pCVar10;
  
  if (DAT_05703fad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_UserMethod);
    il2cpp_init_method_metadata(&"OnStateEntry");
    il2cpp_init_method_metadata(&"OnStateExit");
    il2cpp_init_method_metadata(&"Action");
    DAT_05703fad = '\x01';
  }
  (__this->fields)._name = name;
  il2cpp_runtime_glue(&(__this->fields)._name,name);
  ppCVar1 = &(__this->fields)._instance;
  (__this->fields)._instance = instance;
  il2cpp_runtime_glue(ppCVar1,instance);
  ppCVar2 = &(__this->fields)._onStateEntry;
  (__this->fields)._onStateEntry = (CustomLogic_UserMethod_o *)0x0;
  il2cpp_runtime_glue(ppCVar2,0);
  ppCVar3 = &(__this->fields)._action;
  (__this->fields)._action = (CustomLogic_UserMethod_o *)0x0;
  il2cpp_runtime_glue(ppCVar3,0);
  ppCVar4 = &(__this->fields)._onStateExit;
  (__this->fields)._onStateExit = (CustomLogic_UserMethod_o *)0x0;
  il2cpp_runtime_glue(ppCVar4,0);
  pCVar6 = (__this->fields)._instance;
  if ((pCVar6 != (CustomLogic_UserClassInstance_o *)0x0) &&
     (pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables
     , pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar7,(Il2CppObject *)"OnStateEntry",MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') {
      if (*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) goto LAB_03f9100f;
      pCVar10 = (CustomLogic_UserMethod_o *)
                CustomLogic_CustomLogicClassInstance__GetVariable
                          ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"OnStateEntry",
                           (MethodInfo *)0x0);
      pIVar8 = TypeInfo_UserMethod;
      if (pCVar10 == (CustomLogic_UserMethod_o *)0x0) {
        *ppCVar2 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar5 = (TypeInfo_UserMethod->_2).naturalAligment;
        if (((((Il2CppClass *)pCVar10->klass)->_2).naturalAligment < bVar5) ||
           ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_UserMethod))
        goto LAB_03f90fd8;
        *ppCVar2 = pCVar10;
        if (((((Il2CppClass *)pCVar10->klass)->_2).naturalAligment < bVar5) ||
           ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] != pIVar8))
        goto LAB_03f90fd8;
      }
      il2cpp_runtime_glue(ppCVar2,pCVar10);
    }
    if ((*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) ||
       (pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((*ppCVar1)->fields).Variables,
       pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto LAB_03f9100f;
    bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar7,(Il2CppObject *)"Action",MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') {
      if (*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) goto LAB_03f9100f;
      pCVar10 = (CustomLogic_UserMethod_o *)
                CustomLogic_CustomLogicClassInstance__GetVariable
                          ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"Action",
                           (MethodInfo *)0x0);
      pIVar8 = TypeInfo_UserMethod;
      if (pCVar10 == (CustomLogic_UserMethod_o *)0x0) {
        *ppCVar3 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar5 = (TypeInfo_UserMethod->_2).naturalAligment;
        if (((((Il2CppClass *)pCVar10->klass)->_2).naturalAligment < bVar5) ||
           ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_UserMethod))
        goto LAB_03f90fd8;
        *ppCVar3 = pCVar10;
        if (((((Il2CppClass *)pCVar10->klass)->_2).naturalAligment < bVar5) ||
           ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] != pIVar8))
        goto LAB_03f90fd8;
      }
      il2cpp_runtime_glue(ppCVar3,pCVar10);
    }
    if ((*ppCVar1 != (CustomLogic_UserClassInstance_o *)0x0) &&
       (pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                 ((*ppCVar1)->fields).Variables,
       pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar7,(Il2CppObject *)"OnStateExit",MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*ppCVar1 != (CustomLogic_UserClassInstance_o *)0x0) {
        pCVar10 = (CustomLogic_UserMethod_o *)
                  CustomLogic_CustomLogicClassInstance__GetVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"OnStateExit",
                             (MethodInfo *)0x0);
        pIVar8 = TypeInfo_UserMethod;
        if (pCVar10 == (CustomLogic_UserMethod_o *)0x0) {
          *ppCVar4 = (CustomLogic_UserMethod_o *)0x0;
LAB_03f90ff6:
          il2cpp_runtime_glue(ppCVar4,pCVar10);
          return;
        }
        bVar5 = (TypeInfo_UserMethod->_2).naturalAligment;
        if ((bVar5 <= (((Il2CppClass *)pCVar10->klass)->_2).naturalAligment) &&
           ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_UserMethod))
        {
          *ppCVar4 = pCVar10;
          if ((bVar5 <= (((Il2CppClass *)pCVar10->klass)->_2).naturalAligment) &&
             ((((Il2CppClass *)pCVar10->klass)->_2).typeHierarchy[(ulong)bVar5 - 1] == pIVar8))
          goto LAB_03f90ff6;
        }
LAB_03f90fd8:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pCVar10);
      }
    }
  }
LAB_03f9100f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.Custom$$OnStateEntry
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateEntry (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x3f91020

void Controllers_HumanAIStates_Custom__OnStateEntry
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  CustomLogic_UserMethod_o *userMethod;
  
  if (DAT_05703fae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703fae = '\x01';
  }
  userMethod = (__this->fields)._onStateEntry;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    userMethod = (__this->fields)._onStateEntry;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.Custom$$Action
// il2cpp: void Controllers_HumanAIStates_Custom__Action (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x3f910c0

void Controllers_HumanAIStates_Custom__Action
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  CustomLogic_UserMethod_o *userMethod;
  
  if (DAT_05703faf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703faf = '\x01';
  }
  userMethod = (__this->fields)._action;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    userMethod = (__this->fields)._action;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.Custom$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateExit (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x3f91160

void Controllers_HumanAIStates_Custom__OnStateExit
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05703fb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703fb0 = '\x01';
  }
  if ((__this->fields)._action == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields)._onStateExit;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.Custom$$.ctor
// il2cpp: void Controllers_HumanAIStates_Custom___ctor (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x3f91200

void Controllers_HumanAIStates_Custom___ctor
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)__this,(MethodInfo *)0x0);
  return;
}


