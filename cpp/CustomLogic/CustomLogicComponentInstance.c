// Type: CustomLogic.CustomLogicComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicComponentInstance.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x3f4b1c0

void CustomLogic_CustomLogicComponentInstance___ctor
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,
               Map_MapObject_o *obj,Map_MapScriptComponent_o *script,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  
  if (DAT_05703e30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e30 = '\x01';
  }
  CustomLogic_UserClassInstance___ctor
            ((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                       (__this_00,obj,(MethodInfo *)0x0);
    (__this->fields).MapObject = pCVar1;
    il2cpp_runtime_glue(&(__this->fields).MapObject,pCVar1);
    (__this->fields)._script = script;
    il2cpp_runtime_glue(&(__this->fields)._script,script);
    (__this->fields).NetworkView = networkView;
    il2cpp_runtime_glue(&(__this->fields).NetworkView,networkView);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, CustomLogic_CustomLogicMapObjectBuiltin_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x3f4b280

void CustomLogic_CustomLogicComponentInstance___ctor
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,
               CustomLogic_CustomLogicMapObjectBuiltin_o *obj,Map_MapScriptComponent_o *script,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,MethodInfo *method)

{
  CustomLogic_UserClassInstance___ctor
            ((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  il2cpp_runtime_glue(&(__this->fields).MapObject,obj);
  (__this->fields)._script = script;
  il2cpp_runtime_glue(&(__this->fields)._script,script);
  (__this->fields).NetworkView = networkView;
  il2cpp_runtime_glue(&(__this->fields).NetworkView,networkView);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$LoadVariables
// il2cpp: void CustomLogic_CustomLogicComponentInstance__LoadVariables (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x3f4b2e0

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
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar4;
  System_String_array *pSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_String_o *__this_03;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05703e31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&"MapObject");
    il2cpp_init_method_metadata(&"NetworkView");
    DAT_05703e31 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar2,"MapObject",(Il2CppObject *)(__this->fields).MapObject,MethodInfo_Void_Add);
    value = (__this->fields).NetworkView;
    if (value != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables
      ;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f4b56e;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar2,"NetworkView",(Il2CppObject *)value,MethodInfo_Void_Add);
    }
    pMVar3 = (__this->fields)._script;
    if ((pMVar3 != (Map_MapScriptComponent_o *)0x0) &&
       (__this_00 = (pMVar3->fields).Parameters,
       __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar8 = (Il2CppType *)local_48._8_8_;
      __this_03 = local_38;
      while( true ) {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar4 == '\0') {
          __this_02.fields._8_8_ = pIVar8;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_02.fields._current = (Il2CppObject *)__this_03;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        if (__this_03 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar5 = System_String__Split(__this_03,0x3a,0,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar1 = (int)pSVar5->max_length;
        if (iVar1 == 0) break;
        if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).Variables;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        a = pSVar5->m_Items[0];
        value_00 = pSVar5->m_Items[1];
        bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar2,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 != '\0') {
          if (DAT_05703e5e == '\0') {
            il2cpp_init_method_metadata(&"Type");
            DAT_05703e5e = '\x01';
          }
          bVar4 = System_String__op_Equality(a,"Type",(MethodInfo *)0x0);
          if (((char)bVar4 == '\0') || ((char)(__this->fields)._containsTypeOverride != '\0')) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).Variables;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar2,(Il2CppObject *)a,MethodInfo_Object_get_Item);
            pIVar6 = CustomLogic_CustomLogicComponentInstance__DeserializeValue
                               (pIVar6,value_00,method_00);
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar2,(Il2CppObject *)a,pIVar6,MethodInfo_Void_set_Item);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f4b56e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$UsesCollider
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__UsesCollider (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x3f4ba90

bool_conflict
CustomLogic_CustomLogicComponentInstance__UsesCollider
          (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  ulong uVar4;
  
  if (DAT_05703e32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&"OnCollisionStay");
    il2cpp_init_method_metadata(&"OnCollisionEnter");
    il2cpp_init_method_metadata(&"OnGetHit");
    il2cpp_init_method_metadata(&"OnGetHooked");
    il2cpp_init_method_metadata(&"OnCollisionExit");
    DAT_05703e32 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    uVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionStay",
                       (MethodInfo *)0x0);
    uVar4 = (ulong)uVar2;
    if ((char)uVar2 == '\0') {
      uVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionEnter",
                         (MethodInfo *)0x0);
      uVar4 = (ulong)uVar2;
      if ((char)uVar2 == '\0') {
        uVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionExit",
                           (MethodInfo *)0x0);
        uVar4 = (ulong)uVar2;
        if ((char)uVar2 == '\0') {
          uVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHit"
                             ,(MethodInfo *)0x0);
          uVar4 = (ulong)uVar2;
          if ((char)uVar2 == '\0') {
            bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,
                               "OnGetHooked",(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
    }
    return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionStay (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x3f4a810

void CustomLogic_CustomLogicComponentInstance__OnCollisionStay
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05703e33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCollisionStay");
    DAT_05703e33 = '\x01';
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (lVar2 = il2cpp_runtime_glue(other,(((parameterValues->obj).klass)->_1).element_class),
     lVar2 == 0)) {
LAB_03f4a98d:
    uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar3,0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    il2cpp_runtime_glue(parameterValues->m_Items,other);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (lVar2 = il2cpp_runtime_glue(collision,(((parameterValues->obj).klass)->_1).element_class),
       lVar2 == 0)) goto LAB_03f4a98d;
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,collision);
      methodName = "OnCollisionStay";
      if (DAT_05703e38 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703e38 = '\x01';
      }
      if ((char)(__this->fields).Enabled != '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName
                               ,(MethodInfo *)0x0), (char)bVar1 != '\0')) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                     parameterValues,0,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x3f4a4f0

void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05703e34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCollisionEnter");
    DAT_05703e34 = '\x01';
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (lVar2 = il2cpp_runtime_glue(other,(((parameterValues->obj).klass)->_1).element_class),
     lVar2 == 0)) {
LAB_03f4a66d:
    uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar3,0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    il2cpp_runtime_glue(parameterValues->m_Items,other);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (lVar2 = il2cpp_runtime_glue(collision,(((parameterValues->obj).klass)->_1).element_class),
       lVar2 == 0)) goto LAB_03f4a66d;
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,collision);
      methodName = "OnCollisionEnter";
      if (DAT_05703e38 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703e38 = '\x01';
      }
      if ((char)(__this->fields).Enabled != '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName
                               ,(MethodInfo *)0x0), (char)bVar1 != '\0')) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                     parameterValues,0,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionExit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x3f4ab30

void CustomLogic_CustomLogicComponentInstance__OnCollisionExit
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05703e35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCollisionExit");
    DAT_05703e35 = '\x01';
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (lVar2 = il2cpp_runtime_glue(other,(((parameterValues->obj).klass)->_1).element_class),
     lVar2 == 0)) {
LAB_03f4acad:
    uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar3,0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    il2cpp_runtime_glue(parameterValues->m_Items,other);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (lVar2 = il2cpp_runtime_glue(collision,(((parameterValues->obj).klass)->_1).element_class),
       lVar2 == 0)) goto LAB_03f4acad;
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,collision);
      methodName = "OnCollisionExit";
      if (DAT_05703e38 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703e38 = '\x01';
      }
      if ((char)(__this->fields).Enabled != '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName
                               ,(MethodInfo *)0x0), (char)bVar1 != '\0')) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                     parameterValues,0,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* character, System_String_o* name, int32_t damage, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3f498b0

void CustomLogic_CustomLogicComponentInstance__OnGetHit
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *character,System_String_o *name,
               int32_t damage,System_String_o *type,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  CustomLogic_CustomLogicComponentInstance_o *classInstance;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  int32_t local_3c;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  local_38 = __this;
  if (DAT_05703e36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnGetHit");
    DAT_05703e36 = '\x01';
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (character != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(character,(((parameterValues->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03f49aeb;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)character;
    il2cpp_runtime_glue(parameterValues->m_Items,character);
    if (name != (System_String_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(name,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_03f49aeb;
    }
    if ((uint)parameterValues->max_length < 2) goto LAB_03f49ae6;
    parameterValues->m_Items[1] = (Il2CppObject *)name;
    il2cpp_runtime_glue(parameterValues->m_Items + 1,name);
    local_3c = damage;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
    if (pIVar3 != (Il2CppObject *)0x0) {
      lVar2 = il2cpp_runtime_glue(pIVar3,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_03f49aeb;
    }
    if ((uint)parameterValues->max_length < 3) goto LAB_03f49ae6;
    parameterValues->m_Items[2] = pIVar3;
    il2cpp_runtime_glue(parameterValues->m_Items + 2,pIVar3);
    if (type != (System_String_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(type,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_03f49aeb;
    }
    if (3 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[3] = (Il2CppObject *)type;
      il2cpp_runtime_glue(parameterValues->m_Items + 3,type);
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        lVar2 = il2cpp_runtime_glue(position,(((parameterValues->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
LAB_03f49aeb:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (4 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[4] = (Il2CppObject *)position;
        il2cpp_runtime_glue(parameterValues->m_Items + 4,position);
        methodName = "OnGetHit";
        if (DAT_05703e38 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
          DAT_05703e38 = '\x01';
        }
        classInstance = local_38;
        if ((char)(local_38->fields).Enabled != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)classInstance,
                               methodName,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)classInstance,
                         methodName,parameterValues,0,(MethodInfo *)0x0);
            }
          }
        }
        return;
      }
    }
  }
LAB_03f49ae6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHooked
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHooked (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* human, CustomLogic_CustomLogicVector3Builtin_o* position, bool left, const MethodInfo* method);
// 0x3f49cf0

void CustomLogic_CustomLogicComponentInstance__OnGetHooked
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicHumanBuiltin_o *human,
               CustomLogic_CustomLogicVector3Builtin_o *position,bool_conflict left,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool_conflict bVar1;
  System_Object_array *parameterValues;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  undefined1 local_29;
  
  if (DAT_05703e37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnGetHooked");
    DAT_05703e37 = '\x01';
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (human != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(human,(((parameterValues->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03f49eac;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)human;
    il2cpp_runtime_glue(parameterValues->m_Items,human);
    if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(position,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_03f49eac;
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)position;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,position);
      local_29 = (undefined1)left;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_29);
      if (pIVar3 != (Il2CppObject *)0x0) {
        lVar2 = il2cpp_runtime_glue(pIVar3,(((parameterValues->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
LAB_03f49eac:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (2 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[2] = pIVar3;
        il2cpp_runtime_glue(parameterValues->m_Items + 2,pIVar3);
        methodName = "OnGetHooked";
        if (DAT_05703e38 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
          DAT_05703e38 = '\x01';
        }
        if ((char)(__this->fields).Enabled != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName
                               ,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                         parameterValues,0,(MethodInfo *)0x0);
            }
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicComponentInstance$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x3f4bbf0

void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703e38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e38 = '\x01';
  }
  if ((char)(__this->fields).Enabled != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
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
// 0x3f4b6c0

Il2CppObject *
CustomLogic_CustomLogicComponentInstance__DeserializeValue
          (Il2CppObject *obj,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  bool_conflict bVar3;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  System_String_array *pSVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  CustomLogic_CustomLogicDictBuiltin_o *__this_02;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  float *pfVar7;
  UnityEngine_Vector3_o value_00;
  undefined1 local_65;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  
  if (DAT_05703e39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"true");
    DAT_05703e39 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    System_String__op_Equality(value,"null",(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  pIVar4 = DAT_057110b0;
  if (obj->klass != DAT_057110b0) {
    bVar3 = System_String__op_Equality(value,"null",(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      return (Il2CppObject *)0x0;
    }
    if ((char)bVar3 != '\0') {
      return (Il2CppObject *)0x0;
    }
    pIVar4 = obj->klass;
  }
  if (pIVar4 == DAT_05711068) {
    local_5c = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    pfVar7 = &local_5c;
    pIVar4 = DAT_05711068;
  }
  else if (pIVar4 == DAT_05711098) {
    local_60 = System_Single__Parse(value,(MethodInfo *)0x0);
    pfVar7 = &local_60;
    pIVar4 = DAT_05711098;
  }
  else {
    if (pIVar4 == DAT_057110b0) {
      return (Il2CppObject *)value;
    }
    if (pIVar4 != DAT_05711048) {
      bVar1 = (pIVar4->_2).naturalAligment;
      bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicColorBuiltin)) {
        bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
          bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicDictBuiltin)) {
            __this_02 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_glue();
            CustomLogic_CustomLogicDictBuiltin___ctor(__this_02,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_02;
          }
          bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
            __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue();
            CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_03;
          }
          return (Il2CppObject *)0x0;
        }
        if ((value == (System_String_o *)0x0) ||
           (pSVar6 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
           pSVar6 == (System_String_array *)0x0)) goto LAB_03f4ba7d;
        if (((int)pSVar6->max_length != 0) &&
           ((local_48 = System_Single__Parse(pSVar6->m_Items[0],(MethodInfo *)0x0),
            1 < (uint)pSVar6->max_length &&
            (local_58 = System_Single__Parse(pSVar6->m_Items[1],(MethodInfo *)0x0),
            2 < (uint)pSVar6->max_length)))) {
          local_64 = System_Single__Parse(pSVar6->m_Items[2],(MethodInfo *)0x0);
          __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.y = local_58;
          value_00.fields.x = local_48;
          value_00.fields.z = local_64;
          CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value_00,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
      else {
        if ((value == (System_String_o *)0x0) ||
           (pSVar6 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
           pSVar6 == (System_String_array *)0x0)) {
LAB_03f4ba7d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((((int)pSVar6->max_length != 0) &&
             (r = System_Int32__Parse(pSVar6->m_Items[0],(MethodInfo *)0x0),
             1 < (uint)pSVar6->max_length)) &&
            (g = System_Int32__Parse(pSVar6->m_Items[1],(MethodInfo *)0x0),
            2 < (uint)pSVar6->max_length)) &&
           (b = System_Int32__Parse(pSVar6->m_Items[2],(MethodInfo *)0x0),
           3 < (uint)pSVar6->max_length)) {
          a = System_Int32__Parse(pSVar6->m_Items[3],(MethodInfo *)0x0);
          __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
          __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor(__this_00,__this,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = System_String__op_Equality(value,"true",(MethodInfo *)0x0);
    local_65 = (undefined1)bVar3;
    pfVar7 = (float *)&local_65;
    pIVar4 = DAT_05711048;
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(pIVar4,pfVar7);
  return pIVar5;
}


