// Type: Controllers.HumanAIStates.Custom
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/Custom.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.Custom$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_Custom__get_Name (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x429d290

System_String_o *
Controllers_HumanAIStates_Custom__get_Name(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// Controllers.HumanAIStates.Custom$$Init
// il2cpp: void Controllers_HumanAIStates_Custom__Init (Controllers_HumanAIStates_Custom_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* instance, const MethodInfo* method);
// 0x429d2a0

void Controllers_HumanAIStates_Custom__Init
               (Controllers_HumanAIStates_Custom_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *instance,MethodInfo *method)

{
  CustomLogic_UserClassInstance_o **ppCVar1;
  CustomLogic_UserMethod_o **ppCVar2;
  byte bVar3;
  CustomLogic_UserClassInstance_o *pCVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  Characters_Human_o *userMethod;
  Il2CppClass *pIVar6;
  bool_conflict bVar7;
  CustomLogic_UserMethod_o *pCVar8;
  System_Object_array *pSVar9;
  Controllers_HumanAIController_o *userMethod_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  Controllers_HumanAIState_o *pCVar12;
  
  if (g_data_057add1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UserMethod);
    il2cpp_runtime_helper_023445d0(&"OnStateEntry");
    il2cpp_runtime_helper_023445d0(&"OnStateExit");
    il2cpp_runtime_helper_023445d0(&"Action");
    g_data_057add1a = '\x01';
  }
  (__this->fields)._name = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._name,name);
  ppCVar1 = &(__this->fields)._instance;
  (__this->fields)._instance = instance;
  il2cpp_runtime_helper_022b4080(ppCVar1);
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)&(__this->fields)._onStateEntry;
  (__this->fields)._onStateEntry = (CustomLogic_UserMethod_o *)0x0;
  il2cpp_runtime_helper_022b4080(pSVar10);
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)&(__this->fields)._action;
  (__this->fields)._action = (CustomLogic_UserMethod_o *)0x0;
  il2cpp_runtime_helper_022b4080(pSVar11);
  ppCVar2 = &(__this->fields)._onStateExit;
  (__this->fields)._onStateExit = (CustomLogic_UserMethod_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)ppCVar2;
  il2cpp_runtime_helper_022b4080();
  pCVar4 = (__this->fields)._instance;
  if ((pCVar4 != (CustomLogic_UserClassInstance_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Variables,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)"OnStateEntry",MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) goto label_0429d5af;
      pCVar8 = (CustomLogic_UserMethod_o *)
               CustomLogic_CustomLogicClassInstance__GetVariable
                         ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"OnStateEntry",(MethodInfo *)0x0);
      pIVar6 = TypeInfo_UserMethod;
      if (pCVar8 == (CustomLogic_UserMethod_o *)0x0) {
        *(CustomLogic_UserMethod_o **)pSVar10 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar3 = (TypeInfo_UserMethod->_2).naturalAligment;
        if (((((Il2CppClass *)pCVar8->klass)->_2).naturalAligment < bVar3) ||
           ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_UserMethod))
        goto label_0429d578;
        *(CustomLogic_UserMethod_o **)pSVar10 = pCVar8;
        if (((((Il2CppClass *)pCVar8->klass)->_2).naturalAligment < bVar3) ||
           ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar6))
        goto label_0429d578;
      }
      il2cpp_runtime_helper_022b4080();
      __this_00 = pSVar10;
    }
    if ((*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)((*ppCVar1)->fields).Variables,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0429d5af;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)"Action",MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (*ppCVar1 == (CustomLogic_UserClassInstance_o *)0x0) goto label_0429d5af;
      pCVar8 = (CustomLogic_UserMethod_o *)
               CustomLogic_CustomLogicClassInstance__GetVariable
                         ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"Action",(MethodInfo *)0x0);
      pIVar6 = TypeInfo_UserMethod;
      if (pCVar8 == (CustomLogic_UserMethod_o *)0x0) {
        *(CustomLogic_UserMethod_o **)pSVar11 = (CustomLogic_UserMethod_o *)0x0;
      }
      else {
        bVar3 = (TypeInfo_UserMethod->_2).naturalAligment;
        if (((((Il2CppClass *)pCVar8->klass)->_2).naturalAligment < bVar3) ||
           ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_UserMethod))
        goto label_0429d578;
        *(CustomLogic_UserMethod_o **)pSVar11 = pCVar8;
        if (((((Il2CppClass *)pCVar8->klass)->_2).naturalAligment < bVar3) ||
           ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar6))
        goto label_0429d578;
      }
      il2cpp_runtime_helper_022b4080();
      __this_00 = pSVar11;
    }
    if (*ppCVar1 != (CustomLogic_UserClassInstance_o *)0x0) {
      pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)((*ppCVar1)->fields).Variables;
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar10,(Il2CppObject *)"OnStateExit",MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 == '\0') {
          return;
        }
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (*ppCVar1 != (CustomLogic_UserClassInstance_o *)0x0) {
          pCVar8 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicClassInstance__GetVariable
                             ((CustomLogic_CustomLogicClassInstance_o *)*ppCVar1,"OnStateExit",
                              (MethodInfo *)0x0);
          pIVar6 = TypeInfo_UserMethod;
          if (pCVar8 != (CustomLogic_UserMethod_o *)0x0) {
            bVar3 = (TypeInfo_UserMethod->_2).naturalAligment;
            if ((bVar3 <= (((Il2CppClass *)pCVar8->klass)->_2).naturalAligment) &&
               ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_UserMethod)) {
              *ppCVar2 = pCVar8;
              if ((bVar3 <= (((Il2CppClass *)pCVar8->klass)->_2).naturalAligment) &&
                 ((((Il2CppClass *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == pIVar6))
              goto label_0429d596;
            }
label_0429d578:
            il2cpp_runtime_helper_022b2fd0(pCVar8);
            return;
          }
          *ppCVar2 = (CustomLogic_UserMethod_o *)0x0;
label_0429d596:
          il2cpp_runtime_helper_022b4080(ppCVar2,pCVar8);
          return;
        }
      }
    }
  }
label_0429d5af:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1b = '\x01';
  }
  pCVar8 = *(CustomLogic_UserMethod_o **)&(__this_00->fields)._freeCount;
  if (pCVar8 == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCVar8 = *(CustomLogic_UserMethod_o **)&(__this_00->fields)._freeCount;
  }
  pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar12 = TypeInfo_object;
  pSVar9 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar5,pCVar8,pSVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1c = '\x01';
  }
  userMethod_00 = pCVar12[1].fields.Controller;
  if (userMethod_00 == (Controllers_HumanAIController_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod_00 = pCVar12[1].fields.Controller;
  }
  pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar12 = TypeInfo_object;
  pSVar9 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
              (pCVar5,(CustomLogic_UserMethod_o *)userMethod_00,pSVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1d = '\x01';
  }
  if (pCVar12[1].fields.Controller != (Controllers_HumanAIController_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    userMethod = pCVar12[1].fields.Human;
    pCVar12 = TypeInfo_object;
    pSVar9 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
    if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                (pCVar5,(CustomLogic_UserMethod_o *)userMethod,pSVar9,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    Controllers_HumanAIState___ctor(pCVar12,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanAIStates.Custom$$OnStateEntry
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateEntry (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x429d5c0

void Controllers_HumanAIStates_Custom__OnStateEntry
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Characters_Human_o *userMethod;
  System_Object_array *pSVar2;
  CustomLogic_UserMethod_o *userMethod_00;
  Controllers_HumanAIController_o *userMethod_01;
  Controllers_HumanAIState_o *pCVar3;
  
  if (g_data_057add1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1b = '\x01';
  }
  userMethod_00 = (__this->fields)._onStateEntry;
  if (userMethod_00 == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod_00 = (__this->fields)._onStateEntry;
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar3 = TypeInfo_object;
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar1,userMethod_00,pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1c = '\x01';
  }
  userMethod_01 = pCVar3[1].fields.Controller;
  if (userMethod_01 == (Controllers_HumanAIController_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod_01 = pCVar3[1].fields.Controller;
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar3 = TypeInfo_object;
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
              (pCVar1,(CustomLogic_UserMethod_o *)userMethod_01,pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1d = '\x01';
  }
  if (pCVar3[1].fields.Controller != (Controllers_HumanAIController_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    userMethod = pCVar3[1].fields.Human;
    pCVar3 = TypeInfo_object;
    pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                (pCVar1,(CustomLogic_UserMethod_o *)userMethod,pSVar2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    Controllers_HumanAIState___ctor(pCVar3,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanAIStates.Custom$$Action
// il2cpp: void Controllers_HumanAIStates_Custom__Action (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x429d660

void Controllers_HumanAIStates_Custom__Action(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Characters_Human_o *userMethod;
  System_Object_array *pSVar2;
  CustomLogic_UserMethod_o *userMethod_00;
  Controllers_HumanAIState_o *pCVar3;
  
  if (g_data_057add1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1c = '\x01';
  }
  userMethod_00 = (__this->fields)._action;
  if (userMethod_00 == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod_00 = (__this->fields)._action;
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar3 = TypeInfo_object;
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar1,userMethod_00,pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1d = '\x01';
  }
  if (pCVar3[1].fields.Controller != (Controllers_HumanAIController_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    userMethod = pCVar3[1].fields.Human;
    pCVar3 = TypeInfo_object;
    pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                (pCVar1,(CustomLogic_UserMethod_o *)userMethod,pSVar2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    Controllers_HumanAIState___ctor(pCVar3,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanAIStates.Custom$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_Custom__OnStateExit (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x429d700

void Controllers_HumanAIStates_Custom__OnStateExit
               (Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  Controllers_HumanAIState_o *__this_01;
  
  if (g_data_057add1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057add1d = '\x01';
  }
  if ((__this->fields)._action == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields)._onStateExit;
  __this_01 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Controllers_HumanAIState___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIStates.Custom$$.ctor
// il2cpp: void Controllers_HumanAIStates_Custom___ctor (Controllers_HumanAIStates_Custom_o* __this, const MethodInfo* method);
// 0x429d7a0

void Controllers_HumanAIStates_Custom___ctor(Controllers_HumanAIStates_Custom_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)__this,(MethodInfo *)0x0);
  return;
}


