// Type: CustomLogic.CustomLogicComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicComponentInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// --------------------------------

// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x4256640

void CustomLogic_CustomLogicComponentInstance___ctor
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,Map_MapObject_o *obj,
               Map_MapScriptComponent_o *script,CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,
               MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar2;
  System_Collections_Generic_Dictionary_int__CustomLogicMapObjectBuiltin__o *extraout_RDX;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar3;
  
  pSVar2 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)script;
  pCVar3 = networkView;
  if (g_data_057adb9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adb9b = '\x01';
  }
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this_00,obj,(MethodInfo *)0x0);
    (__this->fields).MapObject = pCVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields).MapObject,pCVar1);
    (__this->fields)._script = script;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._script,script);
    (__this->fields).NetworkView = networkView;
    il2cpp_runtime_helper_022b4080(&(__this->fields).NetworkView,networkView);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this_00,name,(MethodInfo *)0x0);
  (__this_00->fields).IdToMapObjectBuiltin = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).IdToMapObjectBuiltin,extraout_RDX);
  (__this_00->fields)._staticClasses = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._staticClasses,pSVar2);
  (__this_00->fields)._start = (CustomLogic_CustomLogicStartAst_o *)pCVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._start,pCVar3);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, CustomLogic_CustomLogicMapObjectBuiltin_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x4256700

void CustomLogic_CustomLogicComponentInstance___ctor_4156700
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,
               CustomLogic_CustomLogicMapObjectBuiltin_o *obj,Map_MapScriptComponent_o *script,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,MethodInfo *method)

{
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapObject,obj);
  (__this->fields)._script = script;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._script,script);
  (__this->fields).NetworkView = networkView;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NetworkView,networkView);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$LoadVariables
// il2cpp: void CustomLogic_CustomLogicComponentInstance__LoadVariables (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x4256760

void CustomLogic_CustomLogicComponentInstance__LoadVariables
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *value;
  Map_MapScriptComponent_o *pMVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  System_String_o *value_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  long *plVar8;
  MethodInfo *method_00;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  System_String_o *__this_05;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057adb9c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&"MapObject");
    il2cpp_runtime_helper_023445d0(&"NetworkView");
    g_data_057adb9c = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  __this_05 = (System_String_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,"MapObject",(Il2CppObject *)(__this->fields).MapObject,MethodInfo_Void_Add);
    value = (__this->fields).NetworkView;
    if (value != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042569ee;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,"NetworkView",(Il2CppObject *)value,MethodInfo_Void_Add);
    }
    pMVar3 = (__this->fields)._script;
    if ((pMVar3 != (Map_MapScriptComponent_o *)0x0) &&
       (__this_00 = (pMVar3->fields).Parameters, __this_00 != (System_Collections_Generic_List_string__o *)0x0
       )) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar11 = (Il2CppType *)local_48._8_8_;
      __this_05 = local_38;
      do {
        do {
          do {
            __this_01.fields._8_8_ = pIVar11;
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
            __this_01.fields._current = (Il2CppObject *)__this_05;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
            if ((char)bVar5 == '\0') {
              __this_02.fields._8_8_ = pIVar11;
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
              __this_02.fields._current = (Il2CppObject *)__this_05;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
              return;
            }
            if (__this_05 == (System_String_o *)0x0) {
label_042569d5:
              il2cpp_runtime_helper_022b2c90();
label_042569da:
              il2cpp_runtime_helper_022b2c90();
label_042569df:
              il2cpp_runtime_helper_022b2ca0();
label_042569e4:
              il2cpp_runtime_helper_022b2ca0();
              goto label_042569e9;
            }
            pSVar6 = System_String__Split(__this_05,0x3a,0,(MethodInfo *)0x0);
            if (pSVar6 == (System_String_array *)0x0) goto label_042569da;
            iVar1 = (int)pSVar6->max_length;
            if (iVar1 == 0) goto label_042569df;
            if (iVar1 == 1) goto label_042569e4;
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_042569d5;
            }
            a = pSVar6->m_Items[0];
            value_00 = pSVar6->m_Items[1];
            bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              (pSVar2,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
          } while ((char)bVar5 == '\0');
          if (g_data_057adbc9 == '\0') {
            il2cpp_runtime_helper_023445d0(&"Type");
            g_data_057adbc9 = '\x01';
          }
          bVar5 = System_String__op_Equality(a,"Type",(MethodInfo *)0x0);
        } while (((char)bVar5 != '\0') && ((char)(__this->fields)._containsTypeOverride == '\0'));
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042569e9:
          il2cpp_runtime_helper_022b2c90();
          break;
        }
        pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)a,MethodInfo_Object_get_Item);
        pIVar7 = CustomLogic_CustomLogicComponentInstance__DeserializeValue(pIVar7,value_00,method_00);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)a,pIVar7,MethodInfo_Void_set_Item);
      } while( true );
    }
  }
label_042569ee:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicComponentInstance$$UsesCollider
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__UsesCollider (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x4256f10

bool_conflict
CustomLogic_CustomLogicComponentInstance__UsesCollider
          (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (g_data_057adb9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"OnCollisionStay");
    il2cpp_runtime_helper_023445d0(&"OnCollisionEnter");
    il2cpp_runtime_helper_023445d0(&"OnGetHit");
    il2cpp_runtime_helper_023445d0(&"OnGetHooked");
    il2cpp_runtime_helper_023445d0(&"OnCollisionExit");
    g_data_057adb9d = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_04256f3b;
label_0425702f:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425702f;
label_04256f3b:
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    uVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionStay",
                       (MethodInfo *)0x0);
    uVar3 = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      uVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionEnter",
                         (MethodInfo *)0x0);
      uVar3 = (ulong)uVar1;
      if ((char)uVar1 == '\0') {
        uVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionExit",
                           (MethodInfo *)0x0);
        uVar3 = (ulong)uVar1;
        if ((char)uVar1 == '\0') {
          uVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHit",
                             (MethodInfo *)0x0);
          uVar3 = (ulong)uVar1;
          if ((char)uVar1 == '\0') goto label_04257050;
        }
      }
    }
    return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
label_04257050:
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHooked",(MethodInfo *)0x0
                    );
  return bVar2;
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionStay (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x4255c90

void CustomLogic_CustomLogicComponentInstance__OnCollisionStay
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  long *plVar3;
  UnityEngine_Collision_o *__this_05;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  
  if (g_data_057adb9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnCollisionStay");
    g_data_057adb9e = '\x01';
  }
  __this_05 = (UnityEngine_Collision_o *)0x2;
  lVar2 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_04255e1c;
  if ((other == (CustomLogic_BuiltinClassInstance_o *)0x0) || (lVar2 = il2cpp_runtime_helper_023051f0(other), lVar2 != 0))
  {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)other;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
         (lVar2 = il2cpp_runtime_helper_023051f0(collision), lVar2 == 0)) goto label_04255e0d;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)collision;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,collision);
        methodName = "OnCollisionStay";
        if (g_data_057adba3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adba3 = '\x01';
        }
        if ((char)(__this->fields).Enabled != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          else {
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                                 (MethodInfo *)0x0), (char)bVar1 != '\0')) {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0
                       ,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04255e0d:
  lVar2 = il2cpp_runtime_helper_0231b270();
  __this_05 = (UnityEngine_Collision_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_04255e1c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb95 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_06 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (__this_05 != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(__this_05,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    if (*(System_Collections_Generic_List_object__o **)(lVar2 + 0x20) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                 *(System_Collections_Generic_List_object__o **)(lVar2 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = (Il2CppObject *)__this_06;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
          return;
        }
        if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                  (__this_06,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,method);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar2 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x4255970

void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  long *plVar3;
  UnityEngine_Collision_o *__this_05;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  
  if (g_data_057adb9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnCollisionEnter");
    g_data_057adb9f = '\x01';
  }
  __this_05 = (UnityEngine_Collision_o *)0x2;
  lVar2 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_04255afc;
  if ((other == (CustomLogic_BuiltinClassInstance_o *)0x0) || (lVar2 = il2cpp_runtime_helper_023051f0(other), lVar2 != 0))
  {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)other;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
         (lVar2 = il2cpp_runtime_helper_023051f0(collision), lVar2 == 0)) goto label_04255aed;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)collision;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,collision);
        methodName = "OnCollisionEnter";
        if (g_data_057adba3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adba3 = '\x01';
        }
        if ((char)(__this->fields).Enabled != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          else {
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                                 (MethodInfo *)0x0), (char)bVar1 != '\0')) {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0
                       ,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04255aed:
  lVar2 = il2cpp_runtime_helper_0231b270();
  __this_05 = (UnityEngine_Collision_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_04255afc:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb94 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_06 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (__this_05 != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(__this_05,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    if (*(System_Collections_Generic_List_object__o **)(lVar2 + 0x20) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                 *(System_Collections_Generic_List_object__o **)(lVar2 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = (Il2CppObject *)__this_06;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
          return;
        }
        if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                  (__this_06,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,method);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar2 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionExit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x4255fb0

void CustomLogic_CustomLogicComponentInstance__OnCollisionExit
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  CustomLogic_BuiltinClassInstance_o *other_00;
  long *plVar3;
  MethodInfo *other_01;
  MethodInfo *method_00;
  float fVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  if (g_data_057adba0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnCollisionExit");
    g_data_057adba0 = '\x01';
  }
  other_01 = (MethodInfo *)0x2;
  lVar2 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_0425613c;
  if ((other == (CustomLogic_BuiltinClassInstance_o *)0x0) || (lVar2 = il2cpp_runtime_helper_023051f0(other), lVar2 != 0))
  {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)other;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
         (lVar2 = il2cpp_runtime_helper_023051f0(collision), lVar2 == 0)) goto label_0425612d;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)collision;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,collision);
        methodName = "OnCollisionExit";
        if (g_data_057adba3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adba3 = '\x01';
        }
        if ((char)(__this->fields).Enabled != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          else {
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          }
          if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                                 (MethodInfo *)0x0), (char)bVar1 != '\0')) {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0
                       ,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0425612d:
  lVar2 = il2cpp_runtime_helper_0231b270();
  other_01 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_0425613c:
  il2cpp_runtime_helper_022b2c90();
  method_00 = other_01;
  if (g_data_057adb96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0();
    g_data_057adb96 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  fVar4 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
  if ((fVar4 != *(float *)(lVar2 + 0x28)) || (NAN(fVar4) || NAN(*(float *)(lVar2 + 0x28)))) {
    fVar4 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    *(float *)(lVar2 + 0x28) = fVar4;
    other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin
                         ((UnityEngine_Collider_o *)other_01,method_00);
    if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      if (*(System_Collections_Generic_List_object__o **)(lVar2 + 0x20) ==
          (System_Collections_Generic_List_object__o *)0x0) {
label_04256256:
        auVar5 = il2cpp_runtime_helper_022b2c90();
        if (auVar5._8_4_ == 1) {
          plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
          lVar2 = *plVar3;
          __cxa_end_catch();
          __this_03.fields._8_8_ = pIVar7;
          __this_03.fields._list = pSVar6;
          __this_03.fields._current = (Il2CppObject *)__this_05;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
          if (lVar2 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar2);
        }
        __this_04.fields._8_8_ = pIVar7;
        __this_04.fields._list = pSVar6;
        __this_04.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        _Unwind_Resume(auVar5._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                 *(System_Collections_Generic_List_object__o **)(lVar2 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while (__this_01.fields._8_8_ = pIVar7, __this_01.fields._list = pSVar6,
            __this_01.fields._current = (Il2CppObject *)__this_05,
            bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0), (char)bVar1 != '\0')
      {
        if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04256256;
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_05,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,method);
      }
      __this_02.fields._8_8_ = pIVar7;
      __this_02.fields._list = pSVar6;
      __this_02.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    }
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* character, System_String_o* name, int32_t damage, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x4254dd0

void CustomLogic_CustomLogicComponentInstance__OnGetHit
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *character,System_String_o *name,int32_t damage,
               System_String_o *type,CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined8 uVar1;
  System_String_o *methodName;
  bool_conflict bVar2;
  System_Object_array *parameterValues;
  long lVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *__this_06;
  long *plVar5;
  Characters_Human_o *human;
  float in_XMM1_Da;
  undefined1 auVar6 [12];
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff40 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  
  if (g_data_057adba1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnGetHit");
    g_data_057adba1 = '\x01';
  }
  human = (Characters_Human_o *)&g_data_00000005;
  lVar3 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_0425501a;
  if ((character == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (lVar3 = il2cpp_runtime_helper_023051f0(character), lVar3 != 0)) {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)character;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((name != (System_String_o *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(name), lVar3 == 0))
      goto label_0425500b;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)name;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,name);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar4 != (Il2CppObject *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pIVar4), lVar3 == 0))
        goto label_0425500b;
        if (2 < (uint)parameterValues->max_length) {
          parameterValues->m_Items[2] = pIVar4;
          il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 2);
          if ((type != (System_String_o *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(type), lVar3 == 0))
          goto label_0425500b;
          if (3 < (uint)parameterValues->max_length) {
            parameterValues->m_Items[3] = (Il2CppObject *)type;
            il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 3);
            if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
               (lVar3 = il2cpp_runtime_helper_023051f0(position), lVar3 == 0)) goto label_0425500b;
            if (4 < (uint)parameterValues->max_length) {
              parameterValues->m_Items[4] = (Il2CppObject *)position;
              il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 4,position);
              methodName = "OnGetHit";
              if (g_data_057adba3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057adba3 = '\x01';
              }
              if ((char)(__this->fields).Enabled != '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
                   (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                                       (MethodInfo *)0x0), (char)bVar2 != '\0')) {
                  CustomLogic_CustomLogicEvaluator__EvaluateMethod
                            (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                             parameterValues,0,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0425500b:
  lVar3 = il2cpp_runtime_helper_0231b270();
  human = (Characters_Human_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_0425501a:
  uVar1 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb92 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  __this_05 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(__this_05,human,(MethodInfo *)0x0);
  if (*(System_Collections_Generic_List_object__o **)(lVar3 + 0x20) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff50,
               *(System_Collections_Generic_List_object__o **)(lVar3 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_01.fields._version = (int32_t)in_XMM1_Da;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff40._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar7;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = (int32_t)in_XMM1_Da;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff40._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
      return;
    }
    __this_06 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = in_XMM1_Da;
    value.fields.x = (float)(int)uVar1;
    value.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_06,value,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_XMM1_Da;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff40._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._version = (int32_t)in_XMM1_Da;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff40._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar6._0_8_);
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHooked
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHooked (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* human, CustomLogic_CustomLogicVector3Builtin_o* position, bool left, const MethodInfo* method);
// 0x4255210

void CustomLogic_CustomLogicComponentInstance__OnGetHooked
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicHumanBuiltin_o *human,CustomLogic_CustomLogicVector3Builtin_o *position,
               bool_conflict left,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *other_00;
  long *plVar4;
  undefined4 in_register_0000000c;
  MethodInfo *method_00;
  UnityEngine_Collision_o *__this_05;
  MethodInfo *method_01;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000000c,left);
  if (g_data_057adba2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnGetHooked");
    g_data_057adba2 = '\x01';
  }
  __this_05 = (UnityEngine_Collision_o *)0x3;
  lVar2 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_042553db;
  if ((human == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) ||
     (lVar2 = il2cpp_runtime_helper_023051f0(human), lVar2 != 0)) {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)human;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (lVar2 = il2cpp_runtime_helper_023051f0(position), lVar2 == 0)) goto label_042553cc;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)position;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,position);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar3 != (Il2CppObject *)0x0) && (lVar2 = il2cpp_runtime_helper_023051f0(pIVar3), lVar2 == 0))
        goto label_042553cc;
        if (2 < (uint)parameterValues->max_length) {
          parameterValues->m_Items[2] = pIVar3;
          il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 2,pIVar3);
          methodName = "OnGetHooked";
          if (g_data_057adba3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
            g_data_057adba3 = '\x01';
          }
          if ((char)(__this->fields).Enabled != '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
               (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                                  (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                                   (MethodInfo *)0x0), (char)bVar1 != '\0')) {
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues
                         ,0,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042553cc:
  lVar2 = il2cpp_runtime_helper_0231b270();
  __this_05 = (UnityEngine_Collision_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_042553db:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb93 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_06 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (__this_05 != (UnityEngine_Collision_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    other = UnityEngine_Collision__get_collider(__this_05,(MethodInfo *)0x0);
    other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_01);
    if (other_00 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    if (*(System_Collections_Generic_List_object__o **)(lVar2 + 0x20) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff90,
                 *(System_Collections_Generic_List_object__o **)(lVar2 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = pSVar6;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar7;
          __this_02.fields._list = pSVar6;
          __this_02.fields._current = (Il2CppObject *)__this_06;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
          return;
        }
        if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_06,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,method_00);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.CustomLogicComponentInstance$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x4257070

void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar1;
  
  if (g_data_057adba3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adba3 = '\x01';
  }
  if ((char)(__this->fields).Enabled != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                           (MethodInfo *)0x0), (char)bVar1 != '\0')) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameters,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$DeserializeValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicComponentInstance__DeserializeValue (Il2CppObject* obj, System_String_o* value, const MethodInfo* method);
// 0x4256b40

Il2CppObject *
CustomLogic_CustomLogicComponentInstance__DeserializeValue
          (Il2CppObject *obj,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar3;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  System_String_array *pSVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  CustomLogic_CustomLogicDictBuiltin_o *__this_03;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  undefined8 uVar7;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  float *pfVar8;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  UnityEngine_Vector3_o value_00;
  undefined1 local_65;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  undefined4 extraout_var;
  
  if (g_data_057adba4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057adba4 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    System_String__op_Equality(value,"null",(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  pIVar4 = g_data_057b9c00;
  if (obj->klass != g_data_057b9c00) {
    bVar3 = System_String__op_Equality(value,"null",(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      return (Il2CppObject *)0x0;
    }
    if ((char)bVar3 != '\0') {
      return (Il2CppObject *)0x0;
    }
    pIVar4 = obj->klass;
  }
  if (pIVar4 == g_data_057b9bb8) {
    local_5c = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    pfVar8 = &local_5c;
    pIVar4 = g_data_057b9bb8;
label_04256d48:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(pIVar4,pfVar8);
    return pIVar5;
  }
  if (pIVar4 == g_data_057b9be8) {
    local_60 = System_Single__Parse(value,(MethodInfo *)0x0);
    pfVar8 = &local_60;
    pIVar4 = g_data_057b9be8;
    goto label_04256d48;
  }
  if (pIVar4 == g_data_057b9c00) {
    return (Il2CppObject *)value;
  }
  if (pIVar4 == g_data_057b9b98) {
    bVar3 = System_String__op_Equality(value,"true",(MethodInfo *)0x0);
    local_65 = (undefined1)bVar3;
    pfVar8 = (float *)&local_65;
    pIVar4 = g_data_057b9b98;
    goto label_04256d48;
  }
  bVar1 = (pIVar4->_2).naturalAligment;
  if ((bVar1 < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) ||
     (classInstance = (CustomLogic_CustomLogicClassInstance_o *)(pIVar4->_2).typeHierarchy,
     *(long *)((long)classInstance + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8 + -8) != TypeInfo_CustomLogicColorBuiltin)) {
    if ((bVar1 < *(byte *)(TypeInfo_CustomLogicVector3Builtin + 0x130)) ||
       (classInstance = (CustomLogic_CustomLogicClassInstance_o *)(pIVar4->_2).typeHierarchy,
       *(long *)((long)classInstance + (ulong)*(byte *)(TypeInfo_CustomLogicVector3Builtin + 0x130) * 8 + -8) != TypeInfo_CustomLogicVector3Builtin)) {
      bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicDictBuiltin)) {
        __this_03 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0();
        CustomLogic_CustomLogicDictBuiltin___ctor(__this_03,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_03;
      }
      bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
        __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0();
        CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_04;
      }
      return (Il2CppObject *)0x0;
    }
    if ((value != (System_String_o *)0x0) &&
       (pSVar6 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
       classInstance = (CustomLogic_CustomLogicClassInstance_o *)value, pSVar6 != (System_String_array *)0x0))
    {
      if ((int)pSVar6->max_length != 0) {
        value = pSVar6->m_Items[0];
        local_48 = System_Single__Parse(value,(MethodInfo *)0x0);
        if (1 < (uint)pSVar6->max_length) {
          value = pSVar6->m_Items[1];
          local_58 = System_Single__Parse(value,(MethodInfo *)0x0);
          if (2 < (uint)pSVar6->max_length) {
            local_64 = System_Single__Parse(pSVar6->m_Items[2],(MethodInfo *)0x0);
            __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            value_00.fields.y = local_58;
            value_00.fields.x = local_48;
            value_00.fields.z = local_64;
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_02,value_00,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_02;
          }
        }
      }
      goto label_04256ef8;
    }
  }
  else if ((value != (System_String_o *)0x0) &&
          (pSVar6 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
          classInstance = (CustomLogic_CustomLogicClassInstance_o *)value,
          pSVar6 != (System_String_array *)0x0)) {
    if ((int)pSVar6->max_length != 0) {
      value = pSVar6->m_Items[0];
      r = System_Int32__Parse(value,(MethodInfo *)0x0);
      if (1 < (uint)pSVar6->max_length) {
        value = pSVar6->m_Items[1];
        g = System_Int32__Parse(value,(MethodInfo *)0x0);
        if (2 < (uint)pSVar6->max_length) {
          value = pSVar6->m_Items[2];
          b = System_Int32__Parse(value,(MethodInfo *)0x0);
          if (3 < (uint)pSVar6->max_length) {
            a = System_Int32__Parse(pSVar6->m_Items[3],(MethodInfo *)0x0);
            __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(__this_01,__this_00,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_01;
          }
        }
      }
    }
label_04256ef8:
    il2cpp_runtime_helper_022b2ca0();
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)value;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"OnCollisionStay");
    il2cpp_runtime_helper_023445d0(&"OnCollisionEnter");
    il2cpp_runtime_helper_023445d0(&"OnGetHit");
    il2cpp_runtime_helper_023445d0(&"OnGetHooked");
    il2cpp_runtime_helper_023445d0(&"OnCollisionExit");
    g_data_057adb9d = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_04256f3b;
label_0425702f:
    il2cpp_runtime_helper_02337ed0();
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_0425702f;
label_04256f3b:
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,classInstance,"OnCollisionStay",(MethodInfo *)0x0);
    uVar7 = CONCAT44(extraout_var,bVar3);
    if ((char)bVar3 == '\0') {
      bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,classInstance,"OnCollisionEnter",(MethodInfo *)0x0)
      ;
      uVar7 = CONCAT44(extraout_var_00,bVar3);
      if ((char)bVar3 == '\0') {
        bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this,classInstance,"OnCollisionExit",(MethodInfo *)0x0);
        uVar7 = CONCAT44(extraout_var_01,bVar3);
        if ((char)bVar3 == '\0') {
          bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this,classInstance,"OnGetHit",(MethodInfo *)0x0);
          uVar7 = CONCAT44(extraout_var_02,bVar3);
          if ((char)bVar3 == '\0') goto label_04257050;
        }
      }
    }
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar7 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
label_04257050:
  bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,classInstance,"OnGetHooked",(MethodInfo *)0x0);
  return (Il2CppObject *)CONCAT44(extraout_var_03,bVar3);
}


