// Type: ApplicationManagers.ResourceManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/ResourceManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// --------------------------------

// ApplicationManagers.ResourceManager$$ClearCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearCache (const MethodInfo* method);
// 0x5e1bbb0

void ApplicationManagers_ResourceManager__ClearCache(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_0754846a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754846a = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear
            );
  return;
}


// ApplicationManagers.ResourceManager$$LoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__LoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x5e1bc40

System_String_o *
ApplicationManagers_ResourceManager__LoadText(System_String_o *path,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar2;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754846b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    Il2CppMethodInitialized_0754846b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(path,name,false,false,in_R8);
  if (__this == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this);
  }
  pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.ResourceManager$$TryLoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__TryLoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x5e18410
// eh: try 0x5e1844a..0x5e1845a -> pad 0x5e18460 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e18479..0x5e18547 -> pad 0x5e1854c (+1 call sites) cleanup
// eh: try 0x5e1854f..0x5e18554 -> pad 0x5e1855c catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e18460: jmp 0x5e18462
// asm:   0x5e18462: mov r14, rax
// asm:   0x5e18465: cmp edx, 1
// asm:   0x5e18468: jne 0x5e18554
// asm:   0x5e1846e: mov rdi, r14
// asm:   0x5e18471: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e18476: mov r14, rax
// asm:   0x5e18479: lea rdi, [rip + 0x145fc40]  ; TypeInfo_System_Exception
// asm:   0x5e18480: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e18485: mov rcx, qword ptr [r14]
// asm:   0x5e18488: mov rsi, qword ptr [rcx]
// asm:   0x5e1848b: mov rdi, rax
// asm:   0x5e1848e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e18493: test al, al
// asm:   0x5e18495: je 0x5e18526
// asm:   0x5e1849b: mov rbx, qword ptr [r14]
// asm:   0x5e1849e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e184a3: test rbx, rbx
// asm:   0x5e184a6: je 0x5e18547
// asm:   0x5e184ac: mov rax, qword ptr [rbx]
// asm:   0x5e184af: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e184b6: mov rdi, rbx
// asm:   0x5e184b9: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e184bf: mov rbx, rax
// asm:   0x5e184c2: lea rdi, [rip + 0x14c2ad7]  ; "Error loading text from asset bundle: {0}, {1}"
// asm:   0x5e184c9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e184ce: mov rdi, rax
// asm:   0x5e184d1: mov rsi, r15
// asm:   0x5e184d4: mov rdx, rbx
// asm:   0x5e184d7: xor ecx, ecx
// asm:   0x5e184d9: call 0x5402c50  ; System_String__Format()
// asm:   0x5e184de: mov rbx, rax
// asm:   0x5e184e1: lea rdi, [rip + 0x145f160]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e184e8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e184ed: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e184f4: jne 0x5e184fe
// asm:   0x5e184f6: mov rdi, rax
// asm:   0x5e184f9: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e184fe: mov rdi, rbx
// asm:   0x5e18501: xor esi, esi
// asm:   0x5e18503: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e18508: lea rax, [rip + 0x173e1b9]
// asm:   0x5e1850f: mov rax, qword ptr [rax + 0x90]
// asm:   0x5e18516: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5e1851d: mov rax, qword ptr [rax]
// asm:   0x5e18520: pop rbx
// asm:   0x5e18521: pop r14
// asm:   0x5e18523: pop r15
// asm:   0x5e18525: ret 
// asm:   0x5e18526: mov edi, 8
// asm:   0x5e1852b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e18530: mov rcx, qword ptr [r14]
// asm:   0x5e18533: mov qword ptr [rax], rcx
// asm:   0x5e18536: lea rsi, [rip + 0x1014fc3]
// asm:   0x5e1853d: mov rdi, rax
// asm:   0x5e18540: xor edx, edx
// asm:   0x5e18542: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e18547: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e1854c: mov r14, rax
// asm:   0x5e1854f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e18554: mov rdi, r14
// asm:   0x5e18557: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1855c: mov rdi, rax
// asm:   0x5e1855f: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
ApplicationManagers_ResourceManager__TryLoadText
          (System_String_o *path,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_0754846c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754846c = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    method = extraout_RDX_00;
  }
  pSVar1 = ApplicationManagers_ResourceManager__LoadText(path,name,method);
  return pSVar1;
}


// ApplicationManagers.ResourceManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__LoadAsset (System_String_o* path, System_String_o* name, bool cached, bool persistent, const MethodInfo* method);
// 0x5e0cbd0

UnityEngine_Object_o *
ApplicationManagers_ResourceManager__LoadAsset
          (System_String_o *path,System_String_o *name,bool cached,bool persistent,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar5;
  System_Collections_Generic_Dictionary_string__Object__o *cache;
  
  if (Il2CppMethodInitialized_0754846d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754846d = '\x01';
  }
  pMVar5 = (MethodInfo *)"";
  bVar3 = System_String__op_Inequality(path,"",(MethodInfo *)0x0);
  if (bVar3) {
    pMVar5 = (MethodInfo *)"/";
    name = System_String__Concat_5301f10(path,"/",name,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture(name,pMVar5);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
    pMVar5 = extraout_RDX;
    if (persistent) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        pMVar5 = extraout_RDX_00;
      }
      cache = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentCache;
    }
    else {
      if (!cached) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        if (Il2CppMethodInitialized_0754846f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
          Il2CppMethodInitialized_0754846f = '\x01';
        }
        pMVar5 = (MethodInfo *)0x0;
        pUVar4 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Object_o *)0x0) {
          return (UnityEngine_Object_o *)0x0;
        }
        if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles
                    ((UnityEngine_GameObject_o *)pUVar4,pMVar5);
        }
        return pUVar4;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        pMVar5 = extraout_RDX_01;
      }
      cache = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
    }
    pUVar4 = ApplicationManagers_ResourceManager__LoadCached(cache,name,pMVar5);
    return pUVar4;
  }
  if (cached) {
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05e0ce1f:
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    if (!bVar3) {
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e0ce1f;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)name,(Il2CppObject *)x,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item
                );
    }
  }
  return (UnityEngine_Object_o *)x;
}


// ApplicationManagers.ResourceManager$$LoadCached
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__LoadCached (System_Collections_Generic_Dictionary_string__Object__o* cache, System_String_o* name, const MethodInfo* method);
// 0x5e1bde0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1be6b: cmp byte ptr [rip + 0x172c5fd], 0
// asm:   0x5e1be72: jne 0x5e1be93
// asm:   0x5e1bf0c: jmp 0x5e1be93

UnityEngine_Object_o *
ApplicationManagers_ResourceManager__LoadCached
          (System_Collections_Generic_Dictionary_string__Object__o *cache,System_String_o *name,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *prefab;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUStack_28;
  
  if (Il2CppMethodInitialized_0754846e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754846e = '\x01';
  }
  pUStack_28 = (UnityEngine_Object_o *)0x0;
  if (cache == (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)cache,(Il2CppObject *)name,
                     (Il2CppObject **)&pUStack_28,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_TryGetValue);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    if (Il2CppMethodInitialized_0754846f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
      Il2CppMethodInitialized_0754846f = '\x01';
    }
    method_00 = (MethodInfo *)0x0;
    prefab = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
    if ((prefab != (UnityEngine_Object_o *)0x0) &&
       (prefab->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles
                ((UnityEngine_GameObject_o *)prefab,method_00);
    }
    pUStack_28 = prefab;
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)cache,(Il2CppObject *)name,
               (Il2CppObject *)prefab,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_set_Item);
  }
  return pUStack_28;
}


// ApplicationManagers.ResourceManager$$Load
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__Load (System_String_o* name, const MethodInfo* method);
// 0x5e1bf20

UnityEngine_Object_o * ApplicationManagers_ResourceManager__Load(System_String_o *name,MethodInfo *method)

{
  UnityEngine_Object_o *prefab;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754846f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754846f = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  prefab = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)0x0;
  if (prefab != (UnityEngine_Object_o *)0x0) {
    if (prefab->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles
                ((UnityEngine_GameObject_o *)prefab,method_00);
    }
    pUVar1 = prefab;
  }
  return pUVar1;
}


// ApplicationManagers.ResourceManager$$HideUnsupportedMeshParticles
// il2cpp: void ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x5e0c580

void ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar1;
  uint item;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548470 = '\x01';
  }
  bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  if (prefab != (UnityEngine_GameObject_o *)0x0) {
    __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_meshParticlesChecked;
    item = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)prefab,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      method_00 = (MethodInfo *)(ulong)item;
      bVar1 = System_Collections_Generic_HashSet_int___Add
                        (__this,item,
                         (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar1) {
        return;
      }
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__HideMeshParticles(prefab,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$HideMeshParticles
// il2cpp: void ApplicationManagers_ResourceManager__HideMeshParticles (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5e1bfb0

void ApplicationManagers_ResourceManager__HideMeshParticles(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  UnityEngine_ParticleSystemRenderer_o *__this;
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  UnityEngine_ParticleSystem_MainModule_o local_40;
  UnityEngine_ParticleSystem_o *local_38;
  
  if (Il2CppMethodInitialized_07548471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer);
    Il2CppMethodInitialized_07548471 = '\x01';
  }
  local_38 = (UnityEngine_ParticleSystem_o *)0x0;
  local_40.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar4->max_length;
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          __this = (UnityEngine_ParticleSystemRenderer_o *)pSVar4->m_Items[(int)uVar5];
          if (__this == (UnityEngine_ParticleSystemRenderer_o *)0x0) goto label_05e1c0d0;
          UnityEngine_ParticleSystemRenderer__set_enableGPUInstancing(__this,false,(MethodInfo *)0x0);
          iVar3 = UnityEngine_ParticleSystemRenderer__get_renderMode(__this,(MethodInfo *)0x0);
          if (iVar3 == 4) {
            bVar1 = UnityEngine_Component__TryGetComponent_object_
                              ((UnityEngine_Component_o *)__this,(Il2CppObject **)&local_38,
                               (MethodInfo_34B1690 *)
                               MethodInfo_UnityEngine_Component_TryGetComponent_ParticleSystem);
            if (bVar1) {
              if (local_38 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05e1c0d0;
              local_40 = UnityEngine_ParticleSystem__get_main(local_38,(MethodInfo *)0x0);
              UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_40,0,(MethodInfo *)0x0);
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
        } while ((int)uVar5 < (int)uVar2);
      }
      return;
    }
  }
label_05e1c0d0:
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, bool cached, bool persistent, const MethodInfo_3665790* method);
// 0x3765790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x376588b: jmp 0x37657e3

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object_
          (System_String_o *path,System_String_o *name,bool cached,bool persistent,MethodInfo_3665790 *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_3665790_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    if (method->rgctx_data == (MethodInfo_3665790_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
      goto joined_r0x037657e1;
    }
  }
  uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
joined_r0x037657e1:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached,persistent,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = UnityEngine_Object__Instantiate_69209e0(pUVar2,(MethodInfo *)0x0);
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (pUVar2 == (UnityEngine_Object_o *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar2,klass);
    if (pIVar3 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,klass);
    }
  }
  return pIVar3;
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool cached, bool persistent, const MethodInfo_3665890* method);
// 0x3765890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x37659be: jmp 0x37658fd

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
          (System_String_o *path,System_String_o *name,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,bool cached,bool persistent,MethodInfo_3665890 *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_3665890_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    if (method->rgctx_data == (MethodInfo_3665890_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
      goto joined_r0x037658fb;
    }
  }
  uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
joined_r0x037658fb:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached,persistent,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,position,rotation,(MethodInfo *)0x0);
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (pUVar2 == (UnityEngine_Object_o *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar2,klass);
    if (pIVar3 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,klass);
    }
  }
  return pIVar3;
}


// ApplicationManagers.ResourceManager$$GetExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__GetExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x5e1bcf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1bd23: jmp 0x5e1bddb

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__GetExternalTexture(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Texture2D_o *pUVar4;
  
  if (Il2CppMethodInitialized_07548472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548472 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar3) {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
      return pUVar4;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$SetExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__SetExternalTexture (System_String_o* key, UnityEngine_Texture2D_o* texture, bool persistent, const MethodInfo* method);
// 0x5e1c0e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1c11b: jmp 0x5e1c234

void ApplicationManagers_ResourceManager__SetExternalTexture
               (System_String_o *key,UnityEngine_Texture2D_o *texture,bool persistent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548473 = '\x01';
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e1c16a;
label_05e1c10b:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  }
  else {
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e1c10b;
label_05e1c16a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05e1c234:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)key,(Il2CppObject *)texture,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_set_Item)
  ;
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
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_00,(Il2CppObject *)key,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        return;
      }
      goto label_05e1c234;
    }
  }
  return;
}


// ApplicationManagers.ResourceManager$$RemoveExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__RemoveExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x5e1c240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1c273: jmp 0x5e1c35e

void ApplicationManagers_ResourceManager__RemoveExternalTexture(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548474 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar3) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar2,(Il2CppObject *)key,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
      __this = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (__this,(Il2CppObject *)key,
                   (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$LoadExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__LoadExternalTexture (System_String_o* filePath, System_String_o* cacheKey, bool persistent, const MethodInfo* method);
// 0x5e1c370
// eh: try 0x5e1c465..0x5e1c4e1 -> pad 0x5e1c4ff (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e1c516..0x5e1c5e1 -> pad 0x5e1c5e1 (+1 call sites) cleanup
// eh: try 0x5e1c5e4..0x5e1c5e9 -> pad 0x5e1c5f1 catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1c4f7: jmp 0x5e1c4ff
// asm:   0x5e1c4f9: jmp 0x5e1c4ff
// asm:   0x5e1c4fb: jmp 0x5e1c4ff
// asm:   0x5e1c4fd: jmp 0x5e1c4ff
// asm:   0x5e1c4ff: mov rbx, rax
// asm:   0x5e1c502: cmp edx, 1
// asm:   0x5e1c505: jne 0x5e1c5e9
// asm:   0x5e1c50b: mov rdi, rbx
// asm:   0x5e1c50e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1c513: mov rbx, rax
// asm:   0x5e1c516: lea rdi, [rip + 0x145bba3]  ; TypeInfo_System_Exception
// asm:   0x5e1c51d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1c522: mov rcx, qword ptr [rbx]
// asm:   0x5e1c525: mov rsi, qword ptr [rcx]
// asm:   0x5e1c528: mov rdi, rax
// asm:   0x5e1c52b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e1c530: test al, al
// asm:   0x5e1c532: je 0x5e1c5c0
// asm:   0x5e1c538: mov rbx, qword ptr [rbx]
// asm:   0x5e1c53b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1c540: test rbx, rbx
// asm:   0x5e1c543: je 0x5e1c5bb
// asm:   0x5e1c545: mov rax, qword ptr [rbx]
// asm:   0x5e1c548: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e1c54f: mov rdi, rbx
// asm:   0x5e1c552: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e1c558: mov rbx, rax
// asm:   0x5e1c55b: lea rdi, [rip + 0x14bf69e]  ; "Failed to load external texture: "
// asm:   0x5e1c562: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1c567: mov rbp, rax
// asm:   0x5e1c56a: lea rdi, [rip + 0x14b3f17]  ; ", "
// asm:   0x5e1c571: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1c576: mov rdi, rbp
// asm:   0x5e1c579: mov rsi, r14
// asm:   0x5e1c57c: mov rdx, rax
// asm:   0x5e1c57f: mov rcx, rbx
// asm:   0x5e1c582: xor r8d, r8d
// asm:   0x5e1c585: call 0x5402810  ; System_String__Concat()
// asm:   0x5e1c58a: mov rbx, rax
// asm:   0x5e1c58d: lea rdi, [rip + 0x145b0b4]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e1c594: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1c599: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e1c5a0: jne 0x5e1c5aa
// asm:   0x5e1c5a2: mov rdi, rax
// asm:   0x5e1c5a5: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e1c5aa: xor ebp, ebp
// asm:   0x5e1c5ac: mov rdi, rbx
// asm:   0x5e1c5af: xor esi, esi
// asm:   0x5e1c5b1: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5e1c5b6: jmp 0x5e1c4e5
// asm:   0x5e1c5c0: mov edi, 8
// asm:   0x5e1c5c5: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e1c5ca: mov rcx, qword ptr [rbx]
// asm:   0x5e1c5cd: mov qword ptr [rax], rcx
// asm:   0x5e1c5d0: lea rsi, [rip + 0x1010f29]
// asm:   0x5e1c5d7: mov rdi, rax
// asm:   0x5e1c5da: xor edx, edx
// asm:   0x5e1c5dc: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e1c5e1: mov rbx, rax
// asm:   0x5e1c5e4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1c5e9: mov rdi, rbx
// asm:   0x5e1c5ec: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1c5f1: mov rdi, rax
// asm:   0x5e1c5f4: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__LoadExternalTexture
          (System_String_o *filePath,System_String_o *cacheKey,bool persistent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Texture2D_o *pUVar3;
  System_Byte_array *data;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07548475 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(cacheKey,(MethodInfo *)0x0);
  if (bVar2) {
    cacheKey = filePath;
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)cacheKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ContainsKey);
    if (!bVar2) {
      bVar2 = System_IO_File__Exists(filePath,(MethodInfo *)0x0);
      if (bVar2) {
        data = System_IO_File__ReadAllBytes(filePath,(MethodInfo *)0x0);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        method_00 = (MethodInfo *)0x4;
        UnityEngine_Texture2D___ctor_68efe30(pUVar3,2,2,4,false,(MethodInfo *)0x0);
        bVar2 = UnityEngine_ImageConversion__LoadImage_69780a0(pUVar3,data,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          ApplicationManagers_ResourceManager__SetExternalTexture(cacheKey,pUVar3,persistent,method_00);
          return pUVar3;
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
                         (pSVar1,(Il2CppObject *)cacheKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Item);
      return pUVar3;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$ClearExternalTextureCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearExternalTextureCache (const MethodInfo* method);
// 0x5e1c600
// eh: try 0x5e1c72d..0x5e1c775 -> pad 0x5e1c7f3 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e1c80f..0x5e1c814 -> pad 0x5e1c837 cleanup
// eh: try 0x5e1c83a..0x5e1c844 -> pad 0x5e1c84c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1c76e: jmp 0x5e1c720
// asm:   0x5e1c7f1: jmp 0x5e1c7f7
// asm:   0x5e1c7f3: jmp 0x5e1c7f7
// asm:   0x5e1c7f5: jmp 0x5e1c7f7
// asm:   0x5e1c7f7: mov rbx, rax
// asm:   0x5e1c7fa: cmp edx, 1
// asm:   0x5e1c7fd: jne 0x5e1c83a
// asm:   0x5e1c7ff: mov rdi, rbx
// asm:   0x5e1c802: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1c807: mov rbx, qword ptr [rax]
// asm:   0x5e1c80a: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5e1c80f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1c814: lea rax, [rip + 0x14739d5]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_Dispose
// asm:   0x5e1c81b: mov rsi, qword ptr [rax]
// asm:   0x5e1c81e: mov rdi, rsp
// asm:   0x5e1c821: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e1c826: test rbx, rbx
// asm:   0x5e1c829: je 0x5e1c789
// asm:   0x5e1c82f: mov rdi, rbx
// asm:   0x5e1c832: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e1c837: mov rbx, rax
// asm:   0x5e1c83a: lea rdi, [rsp + 0x20]
// asm:   0x5e1c83f: call 0x2fe0530  ; il2cpp_runtime_helper_02fe0530()
// asm:   0x5e1c844: mov rdi, rbx
// asm:   0x5e1c847: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1c84c: mov rdi, rax
// asm:   0x5e1c84f: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_ResourceManager__ClearExternalTextureCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *x;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07548476 == '\0') {
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
    Il2CppMethodInitialized_07548476 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (pSVar1,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_58,__this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Texture2D_GetEnumerator
                );
      local_38 = 0;
      local_30 = (undefined1 *)&local_58;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_58,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_MoveNext
                          );
        x = local_58.fields._currentValue;
        if (!bVar2) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&local_58,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Texture2D_Dispose
                );
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar1,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Clear);
        __this = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
        if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Clear
                    (__this,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$ClearNonPersistentTextures
// il2cpp: void ApplicationManagers_ResourceManager__ClearNonPersistentTextures (const MethodInfo* method);
// 0x5e1c860
// eh: try 0x5e1ca37..0x5e1cca0 -> pad 0x5e1ccab (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e1ccdb..0x5e1cce0 -> pad 0x5e1ccfd cleanup
// eh: try 0x5e1cd00..0x5e1cd0a -> pad 0x5e1cd67 catch (...) [compiler noexcept guard]
// eh: try 0x5e1cd28..0x5e1cd2d -> pad 0x5e1cd52 cleanup
// eh: try 0x5e1cd55..0x5e1cd5f -> pad 0x5e1cd67 catch (...) [compiler noexcept guard]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1ca1b: jmp 0x5e1ca6e
// asm:   0x5e1cacf: nop 
// asm:   0x5e1cca5: jmp 0x5e1ccc3
// asm:   0x5e1cca7: jmp 0x5e1ccc3
// asm:   0x5e1cca9: jmp 0x5e1ccc3
// asm:   0x5e1ccab: jmp 0x5e1ccc3
// asm:   0x5e1ccad: jmp 0x5e1ccc3
// asm:   0x5e1ccaf: jmp 0x5e1ccc3
// asm:   0x5e1ccb1: jmp 0x5e1ccc3
// asm:   0x5e1ccb3: jmp 0x5e1ccc3
// asm:   0x5e1ccb5: jmp 0x5e1ccc3
// asm:   0x5e1ccb7: jmp 0x5e1ccc3
// asm:   0x5e1ccb9: jmp 0x5e1cd10
// asm:   0x5e1ccbb: jmp 0x5e1ccc3
// asm:   0x5e1ccbd: jmp 0x5e1ccc3
// asm:   0x5e1ccbf: jmp 0x5e1ccc3
// asm:   0x5e1ccc1: jmp 0x5e1ccc3
// asm:   0x5e1ccc3: mov r14, rax
// asm:   0x5e1ccc6: cmp edx, 1
// asm:   0x5e1ccc9: jne 0x5e1cd00
// asm:   0x5e1cccb: mov rdi, r14
// asm:   0x5e1ccce: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1ccd3: mov rbx, qword ptr [rax]
// asm:   0x5e1ccd6: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5e1ccdb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1cce0: lea rax, [rip + 0x14734f1]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_Dispose
// asm:   0x5e1cce7: mov rsi, qword ptr [rax]
// asm:   0x5e1ccea: mov rdi, rsp
// asm:   0x5e1cced: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5e1ccf2: test rbx, rbx
// asm:   0x5e1ccf5: je 0x5e1ca90
// asm:   0x5e1ccfb: jmp 0x5e1cd4a
// asm:   0x5e1ccfd: mov r14, rax
// asm:   0x5e1cd00: lea rdi, [rsp + 0x28]
// asm:   0x5e1cd05: call 0x2fe0560  ; il2cpp_runtime_helper_02fe0560()
// asm:   0x5e1cd0a: jmp 0x5e1cd5f
// asm:   0x5e1cd0c: jmp 0x5e1cd10
// asm:   0x5e1cd0e: jmp 0x5e1cd10
// asm:   0x5e1cd10: mov r14, rax
// asm:   0x5e1cd13: cmp edx, 1
// asm:   0x5e1cd16: jne 0x5e1cd55
// asm:   0x5e1cd18: mov rdi, r14
// asm:   0x5e1cd1b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1cd20: mov rbx, qword ptr [rax]
// asm:   0x5e1cd23: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5e1cd28: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1cd2d: lea rax, [rip + 0x1471dc4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5e1cd34: mov rsi, qword ptr [rax]
// asm:   0x5e1cd37: lea rdi, [rsp + 0x50]
// asm:   0x5e1cd3c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e1cd41: test rbx, rbx
// asm:   0x5e1cd44: je 0x5e1cc3f
// asm:   0x5e1cd4a: mov rdi, rbx
// asm:   0x5e1cd4d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e1cd52: mov r14, rax
// asm:   0x5e1cd55: lea rdi, [rsp + 0x28]
// asm:   0x5e1cd5a: call 0x2fe0590  ; il2cpp_runtime_helper_02fe0590()
// asm:   0x5e1cd5f: mov rdi, r14
// asm:   0x5e1cd62: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1cd67: mov rdi, rax
// asm:   0x5e1cd6a: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_ResourceManager__ClearNonPersistentTextures(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  UnityEngine_Object_o *pUVar8;
  Il2CppObject *key;
  undefined1 *puVar9;
  bool bVar10;
  System_Collections_Generic_List_string__o *__this;
  undefined1 local_98 [8];
  undefined1 *puStack_90;
  System_String_o *local_88;
  UnityEngine_Object_o *pUStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  System_String_o *local_60;
  UnityEngine_Object_o *pUStack_58;
  int32_t local_50;
  undefined4 uStack_4c;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07548477 == '\0') {
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
    Il2CppMethodInitialized_07548477 = '\x01';
  }
  local_88 = (System_String_o *)0x0;
  pUStack_80 = (UnityEngine_Object_o *)0x0;
  local_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_70,pSVar3,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_GetEnumerator);
    local_78._0_4_ = local_50;
    local_78._4_4_ = uStack_4c;
    local_88 = local_60;
    pUStack_80 = pUStack_58;
    local_98 = (undefined1  [8])local_70._0_8_;
    puStack_90 = (undefined1 *)local_70._8_8_;
    local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_70._8_8_ = local_98;
    puVar9 = local_98;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      while (local_70._8_8_ = puVar9,
            bVar10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98
                                ,(MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_MoveNext
                               ), pUVar8 = pUStack_80, pSVar7 = local_88, bVar10) {
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05e1cc53:
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar4,(Il2CppObject *)pSVar7,
                            (MethodInfo_4FB3720 *)
                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
        puVar9 = (undefined1 *)local_70._8_8_;
        if (!bVar10) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar10) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__DestroyImmediate_6921750(pUVar8,(MethodInfo *)0x0);
          }
label_05e1cc9b:
          ThrowNullReferenceException();
        }
      }
    }
    else {
      while (bVar10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                 local_98,(MethodInfo_4CE66D0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_MoveNext
                                ), pUVar8 = pUStack_80, pSVar7 = local_88, bVar10) {
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05e1cc53;
        bVar10 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar4,(Il2CppObject *)pSVar7,
                            (MethodInfo_4FB3720 *)
                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
        if (!bVar10) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar10) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__DestroyImmediate_6921750(pUVar8,(MethodInfo *)0x0);
          }
          pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_05e1cc9b;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Texture2D_Dispose);
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_70._8_8_ = &local_48;
      while( true ) {
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        key = local_48.fields._current;
        if (!bVar10) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar3,key,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_Remove);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ResourceManager$$GetExternalTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount (const MethodInfo* method);
// 0x5e1cd70

int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07548478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548478 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_externalTextureCache;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields + 0x10);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count
                    (__this,(MethodInfo_4AAD0E0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_get_Count);
  return iVar2;
}


// ApplicationManagers.ResourceManager$$GetPersistentTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount (const MethodInfo* method);
// 0x5e1ce00

int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_07548479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_07548479 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    pSVar2 = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_persistentTextures;
  }
  else {
    pSVar2 = *(System_Collections_Generic_HashSet_string__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields + 0x18);
  }
  if (pSVar2 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._count;
}


// ApplicationManagers.ResourceManager$$.ctor
// il2cpp: void ApplicationManagers_ResourceManager___ctor (ApplicationManagers_ResourceManager_o* __this, const MethodInfo* method);
// 0x5e1ce90

void ApplicationManagers_ResourceManager___ctor
               (ApplicationManagers_ResourceManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ResourceManager$$.cctor
// il2cpp: void ApplicationManagers_ResourceManager___cctor (const MethodInfo* method);
// 0x5e1cea0

void ApplicationManagers_ResourceManager___cctor(MethodInfo *method)

{
  ApplicationManagers_ResourceManager_StaticFields *pAVar1;
  System_Collections_Generic_Dictionary_string__Object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Texture2D__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  
  if (Il2CppMethodInitialized_0754847a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754847a = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
  TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
  pAVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields;
  pAVar1->_persistentCache = pSVar2;
  Il2CppCodeGenWriteBarrier(&pAVar1->_persistentCache);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Texture2D_ctor);
  pAVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields;
  pAVar1->_externalTextureCache = __this;
  Il2CppCodeGenWriteBarrier(&pAVar1->_externalTextureCache);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pAVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields;
  pAVar1->_persistentTextures = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar1->_persistentTextures);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pAVar1 = TypeInfo_ApplicationManagers_ResourceManager->static_fields;
  pAVar1->_meshParticlesChecked = __this_01;
  Il2CppCodeGenWriteBarrier(&pAVar1->_meshParticlesChecked);
  return;
}


