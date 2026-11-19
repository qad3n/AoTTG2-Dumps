// Type: Gisketch.Aottg2UI.Building.GisketchComponentFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentFactory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x536b240

void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,Il2CppObject *object,
               intptr_t method,MethodInfo *methodInfo)

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
    if (cVar1 == '\x03') {
      (__this->fields).invoke_impl = (intptr_t)&label_02d4ba20;
      goto label_0536b2b8;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x04') {
    (__this->fields).invoke_impl = (intptr_t)&label_02d4ba50;
    goto label_0536b2b8;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_0536b2b8:
  (__this->fields).extra_arg = (intptr_t)&label_02d4b9b0;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$Invoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x537b6a0

bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke
               (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return (bool)uVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x537b6c0

System_IAsyncResult_o *
Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,UnityEngine_GameObject_o *go,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  UnityEngine_GameObject_o *local_28;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_20;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *local_18;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_28 = go;
  local_20 = node;
  local_18 = context;
  local_10 = view;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_28,callback,object);
  return pSVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$EndInvoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x537b700

bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke
               (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,System_IAsyncResult_o *result,
               MethodInfo *method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_03159300(result,0);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  puVar1 = il2cpp_vm_Object_Unbox(obj);
  return (bool)*puVar1;
}


