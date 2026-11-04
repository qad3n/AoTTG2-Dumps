// Type: Gisketch.Aottg2UI.Actions.GisketchTransformSearch
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchTransformSearch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchTransformSearch$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x18190fa30
// eh: try 0x18190fb20..0x18190fbd7 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x18190fc21..0x18190fc49 -> pad 0x180026a30 cleanup
// eh: try 0x18190fc49..0x18190fc59 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190fc0d: lea rcx, [rsp + 0x30]
// asm:   0x18190fc12: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18190fc17: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18190fc1c: test rcx, rcx
// asm:   0x18190fc1f: jne 0x18190fc59
// asm:   0x18190fc21: jmp 0x18190fc35
// asm:   0x18190fc59: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *a;
  void *pvVar3;
  UnityEngine_Transform_o *root_00;
  Il2CppObject *local_res8;
  Il2CppObject *local_res20;
  Il2CppObject **local_28;
  Il2CppObject **local_20;
  
  if (Il2CppMethodInitialized_184342288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184342288 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_Transform_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
  if (!bVar2) {
    local_res8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
    local_28 = &local_res8;
    local_20 = &local_res20;
    do {
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if ((char)pvVar3 == '\0') {
        local_res20 = il2cpp_vm_Object_IsInst(local_res8,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (local_res20 == (Il2CppObject *)0x0) {
          return (UnityEngine_Transform_o *)0x0;
        }
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
        return (UnityEngine_Transform_o *)0x0;
      }
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      root_00 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if (root_00 != (UnityEngine_Transform_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((root_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((root_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(root_00,TypeInfo_UnityEngine_Transform);
        }
      }
      root = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(root_00,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar2);
    il2cpp_runtime_helper_1806aa210(&local_28);
  }
  return root;
}


