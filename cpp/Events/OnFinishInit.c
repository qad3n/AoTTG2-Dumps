// Type: Events.OnFinishInit
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Events/OnFinishInit.cs
// Prior source: NEW in this update
// --------------------------------

// Events.OnFinishInit$$.ctor
// il2cpp: void Events_OnFinishInit___ctor (Events_OnFinishInit_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x414cb50

void Events_OnFinishInit___ctor(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_glue(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_glue_02274970();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      uVar3 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(in_RDI + 0x18) = &LAB_021e0d80;
    goto LAB_0414cbb4;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
LAB_0414cbb4:
  *(code **)(in_RDI + 0x38) = il2cpp_glue_021e0d40;
  return;
}


// Events.OnFinishInit$$Invoke
// il2cpp: void Events_OnFinishInit__Invoke (Events_OnFinishInit_o* __this, const MethodInfo* method);
// 0x414cbf0

void Events_OnFinishInit__Invoke(Events_OnFinishInit_o *__this,MethodInfo *method)

{
  code *vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (code *)(__this->fields).invoke_impl;
  (*vtable_dispatch)
            ((__this->fields).method_code,(__this->fields).method,in_RDX,vtable_dispatch);
  return;
}


// Events.OnFinishInit$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnFinishInit__BeginInvoke (Events_OnFinishInit_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x414cc10

System_IAsyncResult_o *
Events_OnFinishInit__BeginInvoke
          (Events_OnFinishInit_o *__this,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_glue_022fd810(__this,&uStack_8,callback,object);
  return pSVar1;
}


// Events.OnFinishInit$$EndInvoke
// il2cpp: void Events_OnFinishInit__EndInvoke (Events_OnFinishInit_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x414cc30

void Events_OnFinishInit__EndInvoke
               (Events_OnFinishInit_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_glue_022fda50(result,0);
  return;
}


