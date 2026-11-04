// Type: Gisketch.Aottg2UI.Building.GisketchComponentFactory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentFactory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x1818da620

void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,Il2CppObject *object,
               intptr_t method,MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_1804161b0();
  if (cVar2 == '\0') {
    if (cVar1 == '\x03') {
      pcVar3 = il2cpp_runtime_helper_180230760;
      goto label_1818da68e;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x04') {
    pcVar3 = il2cpp_runtime_helper_180002000;
    goto label_1818da68e;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  pcVar3 = (code *)(__this->fields).method_ptr;
label_1818da68e:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_1802306d0;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$Invoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1805289f0

bool
Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke(Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, MethodInfo* method)

{
  (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x1818da5d0

System_IAsyncResult_o *
Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,UnityEngine_GameObject_o *go,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  UnityEngine_GameObject_o *local_38;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_30;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *local_28;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_20;
  undefined8 local_18;
  
  local_20 = view;
  local_18 = 0;
  local_38 = go;
  local_30 = node;
  local_28 = context;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_38,callback,object);
  return pSVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$EndInvoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x18053ea50

bool
Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke(Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, System_IAsyncResult_o* result, MethodInfo* method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_18042b2c0(result,0);
  if (obj != (Il2CppObject *)0x0) {
    puVar1 = il2cpp_object_unbox(obj);
    return (bool)*puVar1;
  }
  ThrowNullReferenceException();
}


