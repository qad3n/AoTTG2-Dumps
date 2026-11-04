// Type: Events.OnFinishInit
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/OnFinishInit.cs
// Prior real C# source: none
// --------------------------------

// Events.OnFinishInit$$.ctor
// il2cpp: void Events_OnFinishInit___ctor (Events_OnFinishInit_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x18052c830

void
Events_OnFinishInit___ctor(Events_OnFinishInit_o* __this, Il2CppObject* object, intptr_t method, MethodInfo* method)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_1804161b0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\0') {
    puVar3 = &label_180002710;
    goto label_18052c88e;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  puVar3 = (undefined1 *)(__this->fields).method_ptr;
label_18052c88e:
  (__this->fields).invoke_impl = (intptr_t)puVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_1800026b0;
  return;
}


// Events.OnFinishInit$$Invoke
// il2cpp: void Events_OnFinishInit__Invoke (Events_OnFinishInit_o* __this, const MethodInfo* method);
// 0x18052c820

void
Events_OnFinishInit__Invoke(Events_OnFinishInit_o* __this, MethodInfo* method)

{
  (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code,(__this->fields).method);
  return;
}


// Events.OnFinishInit$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnFinishInit__BeginInvoke (Events_OnFinishInit_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x18052c7f0

System_IAsyncResult_o*
Events_OnFinishInit__BeginInvoke(Events_OnFinishInit_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, MethodInfo* method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,local_18,callback,object);
  return pSVar1;
}


// Events.OnFinishInit$$EndInvoke
// il2cpp: void Events_OnFinishInit__EndInvoke (Events_OnFinishInit_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x180528780

void
Events_OnFinishInit__EndInvoke(Events_OnFinishInit_o* __this, System_IAsyncResult_o* result, MethodInfo* method)

{
  il2cpp_runtime_helper_18042b2c0(result,0);
  return;
}


