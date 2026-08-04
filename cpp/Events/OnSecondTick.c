// Type: Events.OnSecondTick
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/OnSecondTick.cs
// Prior real C# source: none
// --------------------------------

// Events.OnSecondTick$$.ctor
// il2cpp: void Events_OnSecondTick___ctor (Events_OnSecondTick_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x447fc50

void Events_OnSecondTick___ctor(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long in_RDX;
  undefined8 extraout_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_runtime_helper_022b2a80();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar3,0);
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),extraout_RDX,
                 *(code **)(lVar3 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(in_RDI + 0x18) = &label_02235560;
    goto label_0447fcb4;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_0447fcb4:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_02235520;
  return;
}


// Events.OnSecondTick$$Invoke
// il2cpp: void Events_OnSecondTick__Invoke (Events_OnSecondTick_o* __this, const MethodInfo* method);
// 0x447fcf0

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
// 0x447fd10

System_IAsyncResult_o *
Events_OnSecondTick__BeginInvoke
          (Events_OnSecondTick_o *__this,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&uStack_8,callback,object);
  return pSVar1;
}


// Events.OnSecondTick$$EndInvoke
// il2cpp: void Events_OnSecondTick__EndInvoke (Events_OnSecondTick_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x447fd30

void Events_OnSecondTick__EndInvoke
               (Events_OnSecondTick_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_runtime_helper_0233bb60(result,0);
  return;
}


