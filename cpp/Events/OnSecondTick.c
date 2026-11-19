// Type: Events.OnSecondTick
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Events/OnSecondTick.cs
// Prior real C# source: none
// --------------------------------

// Events.OnSecondTick$$.ctor
// il2cpp: void Events_OnSecondTick___ctor (Events_OnSecondTick_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x5dd9e40

void Events_OnSecondTick___ctor
               (Events_OnSecondTick_o *__this,Il2CppObject *object,intptr_t method,MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_030d61c0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\0') {
    (__this->fields).invoke_impl = (intptr_t)&label_02fdea10;
    goto label_05dd9ea5;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_05dd9ea5:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02fde9d0;
  return;
}


// Events.OnSecondTick$$Invoke
// il2cpp: void Events_OnSecondTick__Invoke (Events_OnSecondTick_o* __this, const MethodInfo* method);
// 0x5dd9ee0

void Events_OnSecondTick__Invoke(Events_OnSecondTick_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  (*vtableDispatch)((__this->fields).method_code,(__this->fields).method,in_RDX,vtableDispatch);
  return;
}


// Events.OnSecondTick$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnSecondTick__BeginInvoke (Events_OnSecondTick_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x5dd9f00

System_IAsyncResult_o *
Events_OnSecondTick__BeginInvoke
          (Events_OnSecondTick_o *__this,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&uStack_8,callback,object);
  return pSVar1;
}


// Events.OnSecondTick$$EndInvoke
// il2cpp: void Events_OnSecondTick__EndInvoke (Events_OnSecondTick_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x5dd9f20

void Events_OnSecondTick__EndInvoke
               (Events_OnSecondTick_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_runtime_helper_03159300(result,0);
  return;
}


