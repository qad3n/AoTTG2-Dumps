// Type: ApplicationManagers.ResourceManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ResourceManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// --------------------------------

// ApplicationManagers.ResourceManager$$ClearCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearCache (const MethodInfo* method);
// 0x182355400

void ApplicationManagers_ResourceManager__ClearCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Object__o *__this;
  
  if (Il2CppMethodInitialized_1843479b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479b5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
  if (__this != (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$LoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__LoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x1823562d0

System_String_o *
ApplicationManagers_ResourceManager__LoadText(System_String_o *path,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    Il2CppMethodInitialized_1843479b6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(path,name,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      pSVar2 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
      return pSVar2;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UnityEngine_TextAsset);
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$TryLoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__TryLoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x1823565e0
// eh: try 0x182356621..0x182356760 -> pad 0x1833197a0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823566c7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823566cc: test rcx, rcx
// asm:   0x1823566cf: je 0x182356749
// asm:   0x1823566d1: mov rax, qword ptr [rcx]
// asm:   0x1823566d4: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823566db: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823566e1: mov rbx, rax
// asm:   0x1823566e4: lea rcx, [rip + 0x1d78905]  ; "Error loading text from asset bundle: {0}, {1}"
// asm:   0x1823566eb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823566f0: mov rcx, rax
// asm:   0x1823566f3: xor r9d, r9d
// asm:   0x1823566f6: mov r8, rbx
// asm:   0x1823566f9: mov rdx, qword ptr [rsp + 0x58]
// asm:   0x1823566fe: call 0x18196d440  ; System_String__Format()
// asm:   0x182356703: mov rbx, rax
// asm:   0x182356706: lea rcx, [rip + 0x1da4d2b]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235670d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182356712: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182356719: jne 0x182356723
// asm:   0x18235671b: mov rcx, rax
// asm:   0x18235671e: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182356723: xor edx, edx
// asm:   0x182356725: mov rcx, rbx
// asm:   0x182356728: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18235672d: mov rax, qword ptr [rip + 0x1ffe71c]
// asm:   0x182356734: mov rax, qword ptr [rax + 0xb8]
// asm:   0x18235673b: mov rax, qword ptr [rax]
// asm:   0x18235673e: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x182356743: add rsp, 0x40
// asm:   0x182356747: pop rdi
// asm:   0x182356748: ret 
// asm:   0x182356749: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

System_String_o *
ApplicationManagers_ResourceManager__TryLoadText
          (System_String_o *path,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479b7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  if (Il2CppMethodInitialized_1843479b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    Il2CppMethodInitialized_1843479b6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(path,name,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      pSVar2 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
      return pSVar2;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UnityEngine_TextAsset);
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__LoadAsset (System_String_o* path, System_String_o* name, bool cached, const MethodInfo* method);
// 0x182355c20

UnityEngine_Object_o *
ApplicationManagers_ResourceManager__LoadAsset
          (System_String_o *path,System_String_o *name,bool cached,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Object__o *pSVar2;
  bool bVar3;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843479b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479b8 = '\x01';
  }
  bVar3 = System_String__op_Inequality(path,"",(MethodInfo *)0x0);
  if (bVar3) {
    name = System_String__Concat_1969b70(path,"/",name,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  if (Il2CppMethodInitialized_1843479b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479b9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)name,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (bVar3) {
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182355f6b;
      x = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar1,(Il2CppObject *)name,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    }
    else {
      x = (UnityEngine_Texture2D_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (cached) {
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar2 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__Object__o *)0x0) goto label_182355f6b;
        bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (Il2CppObject *)name,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
        if (!bVar3) {
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182355f6b;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)name,(Il2CppObject *)x,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
        }
      }
      return (UnityEngine_Object_o *)x;
    }
    if (!cached) {
      pUVar4 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
      return pUVar4;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
      if (!bVar3) {
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
        pUVar4 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182355f6b;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)name,(Il2CppObject *)pUVar4,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
      }
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)name,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
        return pUVar4;
      }
    }
  }
label_182355f6b:
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, bool cached, const MethodInfo_795F00* method);
// 0x180795f00

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object_
          (System_String_o *path,System_String_o *name,bool cached,MethodInfo_795F00 *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_795F00_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    if (method->rgctx_data == (MethodInfo_795F00_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar1 = UnityEngine_Object__Instantiate_2f212a0(pUVar1,(MethodInfo *)0x0);
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (pUVar1 == (UnityEngine_Object_o *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar1,klass);
    if (pIVar2 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,klass);
    }
  }
  return pIVar2;
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool cached, const MethodInfo_795DF0* method);
// 0x180795df0

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
          (System_String_o *path,System_String_o *name,UnityEngine_Vector3_o *position,
          UnityEngine_Quaternion_o *rotation,bool cached,MethodInfo_795DF0 *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  
  if (method->rgctx_data == (MethodInfo_795DF0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    if (method->rgctx_data == (MethodInfo_795DF0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  local_38.x = (rotation->fields).x;
  local_38.y = (rotation->fields).y;
  local_38.z = (rotation->fields).z;
  local_38.w = (rotation->fields).w;
  local_48.z = (position->fields).z;
  local_48.x = (position->fields).x;
  local_48.y = (position->fields).y;
  pUVar1 = UnityEngine_Object__Instantiate
                     (pUVar1,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_38,
                      (MethodInfo *)0x0);
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (pUVar1 == (UnityEngine_Object_o *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar1,klass);
    if (pIVar2 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,klass);
    }
  }
  return pIVar2;
}


// ApplicationManagers.ResourceManager$$GetExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__GetExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x182355ae0

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__GetExternalTexture(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_Texture2D_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843479b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479b9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar1) {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)key,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
      return pUVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$SetExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__SetExternalTexture (System_String_o* key, UnityEngine_Texture2D_o* texture, bool persistent, const MethodInfo* method);
// 0x1823564a0

void ApplicationManagers_ResourceManager__SetExternalTexture
               (System_String_o *key,UnityEngine_Texture2D_o *texture,bool persistent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843479ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479ba = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)key,(Il2CppObject *)texture,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item);
    if (persistent) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)texture,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)
                    TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1823565da;
        System_Collections_Generic_HashSet_object___Add
                  (__this_00,(Il2CppObject *)key,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
    return;
  }
label_1823565da:
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$RemoveExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__RemoveExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x182356390

void ApplicationManagers_ResourceManager__RemoveExternalTexture(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843479bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479bb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar1) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,(Il2CppObject *)key,
                 (MethodInfo_1470BF0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (__this_01,(Il2CppObject *)key,
                   (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$LoadExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__LoadExternalTexture (System_String_o* filePath, System_String_o* cacheKey, bool persistent, const MethodInfo* method);
// 0x182355f80
// eh: try 0x182356035..0x1823562c1 -> pad 0x1833157d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823561c4: nop 
// asm:   0x1823561d7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1823561dc: test rcx, rcx
// asm:   0x1823561df: je 0x1823562af
// asm:   0x1823561e5: mov rax, qword ptr [rcx]
// asm:   0x1823561e8: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823561ef: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823561f5: mov rdi, rax
// asm:   0x1823561f8: lea rcx, [rip + 0x1d73bf9]  ; ", "
// asm:   0x1823561ff: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182356204: mov rbx, rax
// asm:   0x182356207: lea rcx, [rip + 0x1d8eba2]  ; "Failed to load external texture: "
// asm:   0x18235620e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182356213: mov rcx, rax
// asm:   0x182356216: mov qword ptr [rsp + 0x20], 0
// asm:   0x18235621f: mov r9, rdi
// asm:   0x182356222: mov r8, rbx
// asm:   0x182356225: mov rdx, qword ptr [rsp + 0x80]
// asm:   0x18235622d: call 0x181969590  ; System_String__Concat()
// asm:   0x182356232: mov rbx, rax
// asm:   0x182356235: lea rcx, [rip + 0x1da51fc]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235623c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182356241: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182356248: jne 0x182356252
// asm:   0x18235624a: mov rcx, rax
// asm:   0x18235624d: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182356252: xor edx, edx
// asm:   0x182356254: mov rcx, rbx
// asm:   0x182356257: call 0x182ec3a40  ; UnityEngine_Debug__LogWarning()
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__LoadExternalTexture
          (System_String_o *filePath,System_String_o *cacheKey,bool persistent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  System_Byte_array *data;
  UnityEngine_Texture2D_o *pUVar3;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_1843479bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843479bc = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(cacheKey,(MethodInfo *)0x0);
  key = filePath;
  if (!bVar2) {
    key = cacheKey;
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar2) {
      bVar2 = System_IO_File__Exists(filePath,(MethodInfo *)0x0);
      if (bVar2) {
        data = System_IO_File__ReadAllBytes(filePath,(MethodInfo *)0x0);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        UnityEngine_Texture2D___ctor_2efc630(pUVar3,2,2,4,false,(MethodInfo *)0x0);
        bVar2 = UnityEngine_ImageConversion__LoadImage_2f83110(pUVar3,data,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          if (Il2CppMethodInitialized_1843479ba == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_string_Add);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
            Il2CppMethodInitialized_1843479ba = '\x01';
          }
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pUVar3,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item);
            if (persistent) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar2) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                __this_00 = (System_Collections_Generic_HashSet_object__o *)
                            TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
                if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_HashSet_object___Add
                          (__this_00,(Il2CppObject *)key,
                           (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
              }
            }
            return pUVar3;
          }
          ThrowNullReferenceException();
        }
      }
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)key,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
      return pUVar3;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$ClearExternalTextureCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearExternalTextureCache (const MethodInfo* method);
// 0x182355470
// eh: try 0x182355590..0x1823555f1 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182355602: mov rdx, qword ptr [rip + 0x1d699b7]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_Dispose
// asm:   0x182355609: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18235560e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182355613: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182355618: test rcx, rcx
// asm:   0x18235561b: jne 0x18235568c
// asm:   0x18235568c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void ApplicationManagers_ResourceManager__ClearExternalTextureCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *pSVar1;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_1843479bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Texture2D_GetEnumerator
              );
    Il2CppMethodInitialized_1843479bd = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Values);
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Texture2D_GetEnumerator
                );
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_MoveNext
                          );
        x = local_18;
        if (!bVar2) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__DestroyImmediate_2f1fb90(x,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_Dispose
                );
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Clear);
        __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
        if (__this != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                    (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$ClearNonPersistentTextures
// il2cpp: void ApplicationManagers_ResourceManager__ClearNonPersistentTextures (const MethodInfo* method);
// 0x1823556a0
// eh: try 0x182355850..0x182355a4b -> pad 0x183320de0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235584e: nop 
// asm:   0x18235592f: mov rdx, qword ptr [rip + 0x1d693ea]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_Dispose
// asm:   0x182355936: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18235593b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182355940: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182355945: test rcx, rcx
// asm:   0x182355948: jne 0x182355a3f
// asm:   0x18235594e: mov rdi, qword ptr [rsp + 0xd8]
// asm:   0x18235599c: nop dword ptr [rax]
// asm:   0x182355a0b: mov rdx, qword ptr [rip + 0x1d41f06]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182355a12: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182355a17: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182355a1c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182355a21: test rcx, rcx
// asm:   0x182355a24: jne 0x182355a4b
// asm:   0x182355a3f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182355a4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

void ApplicationManagers_ResourceManager__ClearNonPersistentTextures(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_02;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  UnityEngine_Object_o *pUStack_90;
  int32_t local_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  uint64_t uStack_78;
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  Il2CppObject *local_58;
  UnityEngine_Object_o *pUStack_50;
  undefined8 local_48;
  
  if (Il2CppMethodInitialized_1843479be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Texture2D_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Texture2D_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479be = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pUStack_50 = (UnityEngine_Object_o *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_80 = (undefined1  [8])0x0;
  uStack_78 = 0;
  local_70 = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a8,
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_GetEnumerator);
    local_68 = (undefined1  [8])local_a8._0_8_;
    pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
    local_58 = local_98;
    pUStack_50 = pUStack_90;
    local_48._0_4_ = local_88;
    local_48._4_4_ = uStack_84;
    local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_68,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_MoveNext
                        );
      x = pUStack_50;
      pIVar1 = local_58;
      if (!bVar2) break;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,pIVar1,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__DestroyImmediate_2f1fb90(x,(MethodInfo *)0x0);
        }
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_02,pIVar1,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_Dispose);
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_80 = (undefined1  [8])local_a8._0_8_;
      uStack_78 = local_a8._8_8_;
      local_70 = local_98;
      local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pIVar1 = local_70;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (__this_01,pIVar1,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$GetExternalTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount (const MethodInfo* method);
// 0x182355a60

int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843479bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479bf = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Texture2D__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Count);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$GetPersistentTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount (const MethodInfo* method);
// 0x182355bb0

int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843479c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479c0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
  if (pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    return (pSVar1->fields)._count;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$.ctor
// il2cpp: void ApplicationManagers_ResourceManager___ctor (ApplicationManagers_ResourceManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_ResourceManager___ctor(ApplicationManagers_ResourceManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ResourceManager$$.cctor
// il2cpp: void ApplicationManagers_ResourceManager___cctor (const MethodInfo* method);
// 0x182356770

void ApplicationManagers_ResourceManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Object__o *__this;
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  
  if (Il2CppMethodInitialized_1843479c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ctor);
  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures = __this_01;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures,__this_01);
  return;
}


