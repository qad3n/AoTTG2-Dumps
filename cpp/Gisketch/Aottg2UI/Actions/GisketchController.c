// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchController$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Actions_GisketchController__get_Root (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b93830

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_Root
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (g_data_057a9ed8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed8 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar2 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = (__this->fields)._root;
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_Actions_GisketchController__get_State (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b93890

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_State
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  undefined4 extraout_var;
  UnityEngine_TextAsset_o *pUVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x_00;
  
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  x_00 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9eda == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eda = '\x01';
      }
      x = (UnityEngine_Object_o *)(x_00->fields)._themeJson;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar3 = (UnityEngine_TextAsset_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x_00,MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
        (x_00->fields)._themeJson = pUVar3;
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
                 il2cpp_runtime_helper_022b4080(&(x_00->fields)._themeJson,pUVar3);
        return pGVar4;
      }
      return (Gisketch_Aottg2UI_State_GisketchUIState_o *)CONCAT44(extraout_var,bVar2);
    }
    pGVar5 = (pGVar1->fields)._codeActions;
  }
  return (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar5;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__Awake (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b93900

void Gisketch_Aottg2UI_Actions_GisketchController__Awake
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (g_data_057a9eda == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eda = '\x01';
  }
  pGVar2 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
    (__this->fields)._root = pGVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._root,pGVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b93990

void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  System_Action_string__o *pSVar2;
  intptr_t iVar3;
  intptr_t iVar4;
  code *pcVar5;
  long lVar6;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  UnityEngine_MonoBehaviour_c *__this_00;
  MethodInfo *in_RCX;
  Il2CppObject *value;
  Gisketch_Aottg2UI_State_GisketchUIState_o *message;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar10;
  System_String_o **ppSVar11;
  System_String_o *operationKey;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_MonoBehaviour_o *__this_02;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar13;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_a8;
  Il2CppObject *local_40;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (g_data_057a9edb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"Unhandled Gisketch action: ");
    g_data_057a9edb = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  pSVar9 = (System_String_o *)0x0;
  bVar7 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_03b93a54:
    pSVar9 = System_String__Concat_3ae5ba0("Unhandled Gisketch action: ",actionId,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning_4db7c80
              ((Il2CppObject *)pSVar9,(UnityEngine_Object_o *)context.fields.GameObject,(MethodInfo *)0x0);
    return;
  }
  pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    pSVar9 = actionId;
    bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar12,(Il2CppObject *)actionId,&local_40,(MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
    if ((char)bVar7 == '\0') goto label_03b93a54;
    local_28 = context.fields.Node;
    iStack_20 = context.fields.InputSource;
    uStack_1c = context.fields._28_4_;
    local_38 = context.fields.ElementId;
    pUStack_30 = context.fields.GameObject;
    if (local_40 != (Il2CppObject *)0x0) {
      (*local_40[1].monitor)(local_40[4].klass,local_40[2].monitor);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9edc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9edc = '\x01';
  }
  pSVar8 = (System_String_o *)0x0;
  bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
  if ((value == (Il2CppObject *)0x0) || ((char)bVar7 != '\0')) {
    return;
  }
  pSVar12 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pSVar12->fields)._count;
  if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar12,(Il2CppObject *)pSVar9,value,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_a8 = pSVar9;
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pSVar12->fields)._freeCount;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar10 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  pSVar9 = (System_String_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    lVar6 = *(long *)&(pSVar12->fields)._freeCount;
    if (lVar6 == 0) {
      il2cpp_runtime_helper_022b2c90();
      pSStack_c8 = (System_String_o *)0x0;
      if (g_data_057a9ed9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ed9 = '\x01';
      }
      x_00 = (UnityEngine_Object_o *)x[1].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar10 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      operationKey = (System_String_o *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        lVar6 = x[1].fields.m_CachedPtr;
        if (lVar6 == 0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9ed9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9ed9 = '\x01';
          }
          __this_02 = (UnityEngine_MonoBehaviour_o *)x_00[1].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pGVar10 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            lVar6 = x_00[1].fields.m_CachedPtr;
            if (lVar6 == 0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057a9edd == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9edd = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057a9c88 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9c88 = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                          (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
              __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
              System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,
                         MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
              __this_02[1].klass = __this_00;
              il2cpp_runtime_helper_022b4080(__this_02 + 1);
              UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
              return;
            }
            pGVar10 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
          }
          Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(pGVar10,operationKey,(MethodInfo *)0x0);
          return;
        }
        pGVar10 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
      }
      ppSVar11 = &pSStack_a8;
      pGVar13 = message;
      do {
        __this_01 = pGVar10;
        *(System_String_o **)((long)ppSVar11 + -8) = pSVar8;
        *(Gisketch_Aottg2UI_State_GisketchUIState_o **)((long)ppSVar11 + -0x10) = pGVar13;
        *(System_String_o **)((long)ppSVar11 + -0x18) = pSStack_c8;
        if (__this_01 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b4693a;
        bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (g_data_057a9ca5 == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46959;
          il2cpp_runtime_helper_023445d0(&".busy");
          g_data_057a9ca5 = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46974;
        pSVar8 = System_String__Concat_3ae5ba0(pSVar9,".busy",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b4698c;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46998;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b469b4;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar8,"false",in_RCX);
        if (g_data_057a9ca6 == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b469c9;
          il2cpp_runtime_helper_023445d0(&".idle");
          g_data_057a9ca6 = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b469e4;
        pSVar8 = System_String__Concat_3ae5ba0(pSVar9,".idle",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b469fc;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46a08;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46a24;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar8,"true",in_RCX);
        if (g_data_057a9ca7 == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46a39;
          il2cpp_runtime_helper_023445d0(&".message");
          g_data_057a9ca7 = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0x3b46a54;
        pSStack_c8 = System_String__Concat_3ae5ba0(pSVar9,".message",(MethodInfo *)0x0);
        in_RCX = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
        pSVar8 = (System_String_o *)in_RCX->methodPointer;
        *(undefined8 *)((long)ppSVar11 + -8) = *(undefined8 *)((long)ppSVar11 + -8);
        *(undefined8 *)((long)ppSVar11 + -0x10) = *(undefined8 *)((long)ppSVar11 + -0x10);
        *(undefined8 *)((long)ppSVar11 + -0x18) = *(undefined8 *)((long)ppSVar11 + -0x18);
        if (g_data_057a9caa == '\0') {
          *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b46857;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b46863;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          g_data_057a9caa = '\x01';
        }
        *(undefined8 *)((long)ppSVar11 + -0x20) = 0;
        pSVar9 = (System_String_o *)0x0;
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b4687d;
        bVar7 = System_String__IsNullOrEmpty(pSStack_c8,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (pSVar8 == (System_String_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
        if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b468c2;
          in_RCX = MethodInfo_Boolean_TryGetValue;
          pSVar9 = pSStack_c8;
          bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar12,(Il2CppObject *)pSStack_c8,(Il2CppObject **)((long)ppSVar11 + -0x20),
                             (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if ((char)bVar7 != '\0') {
            *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b468d5;
            pSVar9 = pSVar8;
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)((long)ppSVar11 + -0x20),pSVar8,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              return;
            }
          }
          pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
          if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b468f7;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar12,(Il2CppObject *)pSStack_c8,(Il2CppObject *)pSVar8,MethodInfo_Void_set_Item);
            pSVar2 = (__this_01->fields).Changed;
            if (pSVar2 == (System_Action_string__o *)0x0) {
              return;
            }
            iVar3 = (pSVar2->fields).method;
            iVar4 = (pSVar2->fields).method_code;
            pcVar5 = (code *)(pSVar2->fields).invoke_impl;
            *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b4690e;
            (*pcVar5)(iVar4,pSStack_c8,iVar3);
            return;
          }
        }
        pGVar10 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x3b4691d;
        il2cpp_runtime_helper_022b2c90();
        ppSVar11 = (System_String_o **)((long)ppSVar11 + -0x28);
        pGVar13 = __this_01;
      } while( true );
    }
    pGVar10 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
  }
  Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
            (pGVar10,pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$RegisterAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b93ab0

void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  int iVar1;
  System_Action_string__o *pSVar2;
  intptr_t iVar3;
  intptr_t iVar4;
  code *pcVar5;
  long lVar6;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  UnityEngine_MonoBehaviour_c *__this_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *message;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar9;
  System_String_o **ppSVar10;
  System_String_o *value;
  System_String_o *operationKey;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_MonoBehaviour_o *__this_02;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar12;
  System_String_o *pSStack_60;
  System_String_o *pSStack_40;
  
  if (g_data_057a9edc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9edc = '\x01';
  }
  pSVar8 = (System_String_o *)0x0;
  bVar7 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((action == (System_Action_GisketchActionContext__o *)0x0) || ((char)bVar7 != '\0')) {
    return;
  }
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar11,(Il2CppObject *)actionId,(Il2CppObject *)action,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = actionId;
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pSVar11->fields)._freeCount;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  value = (System_String_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    lVar6 = *(long *)&(pSVar11->fields)._freeCount;
    if (lVar6 == 0) {
      il2cpp_runtime_helper_022b2c90();
      pSStack_60 = (System_String_o *)0x0;
      if (g_data_057a9ed9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ed9 = '\x01';
      }
      x_00 = (UnityEngine_Object_o *)x[1].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      operationKey = (System_String_o *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        lVar6 = x[1].fields.m_CachedPtr;
        if (lVar6 == 0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9ed9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9ed9 = '\x01';
          }
          __this_02 = (UnityEngine_MonoBehaviour_o *)x_00[1].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            lVar6 = x_00[1].fields.m_CachedPtr;
            if (lVar6 == 0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057a9edd == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9edd = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057a9c88 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9c88 = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                          (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
              __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
              System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,
                         MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
              __this_02[1].klass = __this_00;
              il2cpp_runtime_helper_022b4080(__this_02 + 1);
              UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
              return;
            }
            pGVar9 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
          }
          Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(pGVar9,operationKey,(MethodInfo *)0x0);
          return;
        }
        pGVar9 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
      }
      ppSVar10 = &pSStack_40;
      pGVar12 = message;
      do {
        __this_01 = pGVar9;
        *(System_String_o **)((long)ppSVar10 + -8) = pSVar8;
        *(Gisketch_Aottg2UI_State_GisketchUIState_o **)((long)ppSVar10 + -0x10) = pGVar12;
        *(System_String_o **)((long)ppSVar10 + -0x18) = pSStack_60;
        if (__this_01 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b4693a;
        bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (g_data_057a9ca5 == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46959;
          il2cpp_runtime_helper_023445d0(&".busy");
          g_data_057a9ca5 = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46974;
        pSVar8 = System_String__Concat_3ae5ba0(value,".busy",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b4698c;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46998;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b469b4;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar8,"false",method);
        if (g_data_057a9ca6 == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b469c9;
          il2cpp_runtime_helper_023445d0(&".idle");
          g_data_057a9ca6 = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b469e4;
        pSVar8 = System_String__Concat_3ae5ba0(value,".idle",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b469fc;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46a08;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46a24;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar8,"true",method);
        if (g_data_057a9ca7 == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46a39;
          il2cpp_runtime_helper_023445d0(&".message");
          g_data_057a9ca7 = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0x3b46a54;
        pSStack_60 = System_String__Concat_3ae5ba0(value,".message",(MethodInfo *)0x0);
        method = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
        pSVar8 = (System_String_o *)method->methodPointer;
        *(undefined8 *)((long)ppSVar10 + -8) = *(undefined8 *)((long)ppSVar10 + -8);
        *(undefined8 *)((long)ppSVar10 + -0x10) = *(undefined8 *)((long)ppSVar10 + -0x10);
        *(undefined8 *)((long)ppSVar10 + -0x18) = *(undefined8 *)((long)ppSVar10 + -0x18);
        if (g_data_057a9caa == '\0') {
          *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b46857;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b46863;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          g_data_057a9caa = '\x01';
        }
        *(undefined8 *)((long)ppSVar10 + -0x20) = 0;
        value = (System_String_o *)0x0;
        *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b4687d;
        bVar7 = System_String__IsNullOrEmpty(pSStack_60,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (pSVar8 == (System_String_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
        if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b468c2;
          method = MethodInfo_Boolean_TryGetValue;
          value = pSStack_60;
          bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar11,(Il2CppObject *)pSStack_60,(Il2CppObject **)((long)ppSVar10 + -0x20),
                             (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if ((char)bVar7 != '\0') {
            *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b468d5;
            value = pSVar8;
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)((long)ppSVar10 + -0x20),pSVar8,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              return;
            }
          }
          pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
          if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b468f7;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar11,(Il2CppObject *)pSStack_60,(Il2CppObject *)pSVar8,MethodInfo_Void_set_Item);
            pSVar2 = (__this_01->fields).Changed;
            if (pSVar2 == (System_Action_string__o *)0x0) {
              return;
            }
            iVar3 = (pSVar2->fields).method;
            iVar4 = (pSVar2->fields).method_code;
            pcVar5 = (code *)(pSVar2->fields).invoke_impl;
            *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b4690e;
            (*pcVar5)(iVar4,pSStack_60,iVar3);
            return;
          }
        }
        pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        *(undefined8 *)((long)ppSVar10 + -0x30) = 0x3b4691d;
        il2cpp_runtime_helper_022b2c90();
        ppSVar10 = (System_String_o **)((long)ppSVar10 + -0x28);
        pGVar12 = __this_01;
      } while( true );
    }
    pGVar9 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar6 + 0x68);
  }
  Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
            (pGVar9,pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$TryBeginOperation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x3b93b20

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
          System_String_o *message,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Action_string__o *pSVar3;
  intptr_t iVar4;
  intptr_t iVar5;
  code *pcVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  long lVar8;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar9;
  uint uVar10;
  bool_conflict extraout_EAX;
  UnityEngine_TextAsset_o *pUVar11;
  System_String_o *pSVar12;
  UnityEngine_MonoBehaviour_c *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *state;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar13;
  undefined1 *puVar14;
  System_String_o *value;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_MonoBehaviour_o *__this_02;
  System_String_o *pSStack_48;
  
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  state = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  value = (System_String_o *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pGVar7 = (__this->fields)._root;
    if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSStack_48 = (System_String_o *)0x0;
      if (g_data_057a9ed9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ed9 = '\x01';
      }
      x_00 = (UnityEngine_Object_o *)(x->fields)._themeJson;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar13 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      pSVar12 = (System_String_o *)0x0;
      uVar10 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (UnityEngine_TextAsset_o *)(ulong)uVar10;
      if ((char)uVar10 != '\0') {
        pUVar11 = (x->fields)._themeJson;
        if (pUVar11 == (UnityEngine_TextAsset_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9ed9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9ed9 = '\x01';
          }
          __this_02 = (UnityEngine_MonoBehaviour_o *)x_00[1].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pGVar13 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            lVar8 = x_00[1].fields.m_CachedPtr;
            if (lVar8 == 0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057a9edd == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9edd = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057a9c88 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
                g_data_057a9c88 = '\x01';
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                          (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
              __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
              System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,
                         MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
              __this_02[1].klass = __this_00;
              il2cpp_runtime_helper_022b4080(__this_02 + 1);
              UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
              return extraout_EAX;
            }
            pGVar13 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar8 + 0x68);
          }
          bVar9 = Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(pGVar13,pSVar12,(MethodInfo *)0x0);
          return bVar9;
        }
        pGVar13 = pUVar11[4].monitor;
      }
      puVar14 = &stack0xffffffffffffffd8;
      do {
        __this_01 = pGVar13;
        *(System_String_o **)(puVar14 + -8) = operationKey;
        *(System_String_o **)(puVar14 + -0x10) = message;
        *(System_String_o **)(puVar14 + -0x18) = pSStack_48;
        if (__this_01 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return (bool_conflict)pUVar11;
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b4693a;
        bVar9 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return bVar9;
        }
        if (g_data_057a9ca5 == '\0') {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b46959;
          il2cpp_runtime_helper_023445d0(&".busy");
          g_data_057a9ca5 = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b46974;
        pSVar12 = System_String__Concat_3ae5ba0(value,".busy",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b4698c;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)(puVar14 + -0x20) = 0x3b46998;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b469b4;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar12,"false",method);
        if (g_data_057a9ca6 == '\0') {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b469c9;
          il2cpp_runtime_helper_023445d0(&".idle");
          g_data_057a9ca6 = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b469e4;
        pSVar12 = System_String__Concat_3ae5ba0(value,".idle",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b469fc;
          il2cpp_runtime_helper_023445d0(&"false");
          *(undefined8 *)(puVar14 + -0x20) = 0x3b46a08;
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b46a24;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_01,pSVar12,"true",method);
        if (g_data_057a9ca7 == '\0') {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b46a39;
          il2cpp_runtime_helper_023445d0(&".message");
          g_data_057a9ca7 = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0x3b46a54;
        pSStack_48 = System_String__Concat_3ae5ba0(value,".message",(MethodInfo *)0x0);
        method = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
        operationKey = (System_String_o *)method->methodPointer;
        *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        *(undefined8 *)(puVar14 + -0x10) = *(undefined8 *)(puVar14 + -0x10);
        *(undefined8 *)(puVar14 + -0x18) = *(undefined8 *)(puVar14 + -0x18);
        if (g_data_057a9caa == '\0') {
          *(undefined8 *)(puVar14 + -0x30) = 0x3b46857;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          *(undefined8 *)(puVar14 + -0x30) = 0x3b46863;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          g_data_057a9caa = '\x01';
        }
        *(undefined8 *)(puVar14 + -0x20) = 0;
        value = (System_String_o *)0x0;
        *(undefined8 *)(puVar14 + -0x30) = 0x3b4687d;
        bVar9 = System_String__IsNullOrEmpty(pSStack_48,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return bVar9;
        }
        if (operationKey == (System_String_o *)0x0) {
          operationKey = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          *(undefined8 *)(puVar14 + -0x30) = 0x3b468c2;
          method = MethodInfo_Boolean_TryGetValue;
          value = pSStack_48;
          bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar2,(Il2CppObject *)pSStack_48,(Il2CppObject **)(puVar14 + -0x20),
                             (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if ((char)bVar9 != '\0') {
            *(undefined8 *)(puVar14 + -0x30) = 0x3b468d5;
            value = operationKey;
            bVar9 = System_String__op_Equality
                              (*(System_String_o **)(puVar14 + -0x20),operationKey,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return bVar9;
            }
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._values;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            *(undefined8 *)(puVar14 + -0x30) = 0x3b468f7;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)pSStack_48,(Il2CppObject *)operationKey,MethodInfo_Void_set_Item);
            pSVar3 = (__this_01->fields).Changed;
            if (pSVar3 == (System_Action_string__o *)0x0) {
              return 0;
            }
            iVar4 = (pSVar3->fields).method;
            iVar5 = (pSVar3->fields).method_code;
            pcVar6 = (code *)(pSVar3->fields).invoke_impl;
            *(undefined8 *)(puVar14 + -0x30) = 0x3b4690e;
            bVar9 = (*pcVar6)(iVar5,pSStack_48,iVar4);
            return bVar9;
          }
        }
        pGVar13 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        *(undefined8 *)(puVar14 + -0x30) = 0x3b4691d;
        pUVar11 = (UnityEngine_TextAsset_o *)il2cpp_runtime_helper_022b2c90();
        puVar14 = puVar14 + -0x28;
        message = (System_String_o *)__this_01;
      } while( true );
    }
    state = (pGVar7->fields)._codeActions;
  }
  bVar9 = Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)state,operationKey,message,(MethodInfo *)0x0
                    );
  return bVar9;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$EndOperation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x3b93bb0

void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  UnityEngine_TextAsset_o *pUVar8;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  UnityEngine_MonoBehaviour_c *__this_00;
  MethodInfo *in_RCX;
  System_String_o *unaff_RBX;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  UnityEngine_MonoBehaviour_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *unaff_R14;
  System_String_o *unaff_R15;
  
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  if ((char)bVar9 != '\0') {
    pGVar7 = (__this->fields)._root;
    if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ed9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ed9 = '\x01';
      }
      __this_02 = (UnityEngine_MonoBehaviour_o *)(x->fields)._themeJson;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pUVar8 = (x->fields)._themeJson;
        if (pUVar8 == (UnityEngine_TextAsset_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9edd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
            il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
            g_data_057a9edd = '\x01';
            iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057a9c88 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
            g_data_057a9c88 = '\x01';
            iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                      (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
          __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
          System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,
                     MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
          __this_02[1].klass = __this_00;
          il2cpp_runtime_helper_022b4080(__this_02 + 1);
          UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
          return;
        }
        state = pUVar8[4].monitor;
      }
      Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(state,pSVar10,(MethodInfo *)0x0);
      return;
    }
    pGVar11 = (pGVar7->fields)._codeActions;
  }
  do {
    __this_01 = pGVar11;
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_String_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b4693a;
    bVar9 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if (g_data_057a9ca5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46959;
      il2cpp_runtime_helper_023445d0(&".busy");
      g_data_057a9ca5 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46974;
    pSVar10 = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b4698c;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46998;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469b4;
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_01,pSVar10,"false",in_RCX);
    if (g_data_057a9ca6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469c9;
      il2cpp_runtime_helper_023445d0(&".idle");
      g_data_057a9ca6 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469e4;
    pSVar10 = System_String__Concat_3ae5ba0(operationKey,".idle",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469fc;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a08;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a24;
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_01,pSVar10,"true",in_RCX);
    if (g_data_057a9ca7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a39;
      il2cpp_runtime_helper_023445d0(&".message");
      g_data_057a9ca7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a54;
    unaff_RBX = System_String__Concat_3ae5ba0(operationKey,".message",(MethodInfo *)0x0);
    in_RCX = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
    unaff_R15 = (System_String_o *)in_RCX->methodPointer;
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
    if (g_data_057a9caa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46857;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46863;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057a9caa = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    operationKey = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4687d;
    bVar9 = System_String__IsNullOrEmpty(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if (unaff_R15 == (System_String_o *)0x0) {
      unaff_R15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._actions;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468c2;
      in_RCX = MethodInfo_Boolean_TryGetValue;
      operationKey = unaff_RBX;
      bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)unaff_RBX,(Il2CppObject **)((long)register0x00000020 + -0x20),
                         (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
      if ((char)bVar9 != '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468d5;
        operationKey = unaff_R15;
        bVar9 = System_String__op_Equality
                          (*(System_String_o **)((long)register0x00000020 + -0x20),unaff_R15,(MethodInfo *)0x0
                          );
        if ((char)bVar9 != '\0') {
          return;
        }
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._actions;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468f7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)unaff_RBX,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Item);
        lVar3 = *(long *)&(__this_01->fields)._next;
        if (lVar3 == 0) {
          return;
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        pcVar6 = *(code **)(lVar3 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4690e;
        (*pcVar6)(uVar5,unaff_RBX,uVar4);
        return;
      }
    }
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4691d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R14 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchController$$IsOperationActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x3b93c40

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *state;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  
  if (g_data_057a9ed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed9 = '\x01';
  }
  __this_01 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  state = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9edd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9edd = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                  (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
      System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
      (__this_01->fields)._selectedScreenId = (System_String_o *)__this_00;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._selectedScreenId);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    state = (pGVar2->fields)._codeActions;
  }
  bVar3 = Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)state,operationKey,(MethodInfo *)0x0);
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController___ctor (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b93cd0

void Gisketch_Aottg2UI_Actions_GisketchController___ctor
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057a9edd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9edd = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
  (__this->fields)._actions =
       (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actions);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


