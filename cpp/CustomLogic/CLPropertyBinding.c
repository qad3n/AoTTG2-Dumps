// Type: CustomLogic.CLPropertyBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLPropertyBinding.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLPropertyBinding$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding___ctor (CustomLogic_CLPropertyBinding_o* __this, const MethodInfo* method);
// 0x3db3560

void CustomLogic_CLPropertyBinding___ctor
               (CustomLogic_CLPropertyBinding_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding_object____ctor (CustomLogic_CLPropertyBinding_T__o* __this, System_Func_T__object__o* getter, System_Action_T__object__o* setter, const MethodInfo_2EA7440* method);
// 0x2fa7440

void CustomLogic_CLPropertyBinding<object>___ctor
               (CustomLogic_CLPropertyBinding_T__o *__this,System_Func_T__object__o *getter,
               System_Action_T__object__o *setter,MethodInfo_2EA7440 *method)

{
  CustomLogic_CLPropertyBinding___ctor((CustomLogic_CLPropertyBinding_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._getter = getter;
  il2cpp_runtime_glue(&__this->fields,getter);
  (__this->fields)._setter = setter;
  il2cpp_runtime_glue(&(__this->fields)._setter,setter);
  *(bool *)&(__this->fields)._isReadOnly = setter == (System_Action_T__object__o *)0x0;
  return;
}


// CustomLogic.CLPropertyBinding<object>$$get_IsReadOnly
// il2cpp: bool CustomLogic_CLPropertyBinding_object___get_IsReadOnly (CustomLogic_CLPropertyBinding_T__o* __this, const MethodInfo_2EA7490* method);
// 0x2fa7490

bool_conflict
CustomLogic_CLPropertyBinding<object>__get_IsReadOnly
          (CustomLogic_CLPropertyBinding_T__o *__this,MethodInfo_2EA7490 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isReadOnly);
}


// CustomLogic.CLPropertyBinding<object>$$GetValue
// il2cpp: Il2CppObject* CustomLogic_CLPropertyBinding_object___GetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, const MethodInfo_2EA74A0* method);
// 0x2fa74a0

Il2CppObject *
CustomLogic_CLPropertyBinding<object>__GetValue
          (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,
          MethodInfo_2EA74A0 *method)

{
  System_Func_T__object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  
  pSVar1 = (__this->fields)._getter;
  if (pSVar1 == (System_Func_T__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = method->klass->rgctx_data->_3_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (instance == (Il2CppObject *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = il2cpp_runtime_glue(instance,pIVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(instance,pIVar2);
    }
  }
  pIVar4 = (Il2CppObject *)
           (*(code *)(pSVar1->fields).invoke_impl)
                     ((pSVar1->fields).method_code,lVar3,(pSVar1->fields).method);
  return pIVar4;
}


// CustomLogic.CLPropertyBinding<object>$$SetValue
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_2EA7520* method);
// 0x2fa7520

void CustomLogic_CLPropertyBinding<object>__SetValue
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,
               Il2CppObject *value,MethodInfo_2EA7520 *method)

{
  System_Action_T__object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  
  pSVar1 = (__this->fields)._setter;
  if (pSVar1 == (System_Action_T__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = method->klass->rgctx_data->_3_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (instance == (Il2CppObject *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = il2cpp_runtime_glue(instance,pIVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(instance,pIVar2);
    }
  }
  (*(code *)(pSVar1->fields).invoke_impl)
            ((pSVar1->fields).method_code,lVar3,value,(pSVar1->fields).method);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$SetValueSafe
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValueSafe (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_2EA75B0* method);
// 0x2fa75b0

void CustomLogic_CLPropertyBinding<object>__SetValueSafe
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,
               Il2CppObject *value,MethodInfo_2EA75B0 *method)

{
  System_Action_T__object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  
  if ((char)(__this->fields)._isReadOnly != '\0') {
    return;
  }
  pSVar1 = (__this->fields)._setter;
  if (pSVar1 != (System_Action_T__object__o *)0x0) {
    pIVar2 = method->klass->rgctx_data->_3_T;
    if (((pIVar2->_2).field_0x6d & 1) == 0) {
      pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
    }
    if (instance == (Il2CppObject *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = il2cpp_runtime_glue(instance,pIVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(instance,pIVar2);
      }
    }
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,lVar3,value,(pSVar1->fields).method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


