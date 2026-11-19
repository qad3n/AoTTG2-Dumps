// Type: CustomSkins.HookCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HookCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs
// --------------------------------

// CustomSkins.HookCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HookCustomSkinPart___ctor (CustomSkins_HookCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, float tiling, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x5961580

void CustomSkins_HookCustomSkinPart___ctor
               (CustomSkins_HookCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,float tiling,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,true,
             in_stack_ffffffffffffffe0);
  (__this->fields)._tiling = tiling;
  return;
}


// CustomSkins.HookCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_HookCustomSkinPart__SetMaterial (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5964ce0
// eh: try 0x5964d94..0x5964e04 -> pad 0x5964e11 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5964e29..0x5964e2e -> pad 0x5964e4d cleanup
// eh: try 0x5964e50..0x5964e5a -> pad 0x5964e62 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5964d8f: nop 
// asm:   0x5964e09: jmp 0x5964e11
// asm:   0x5964e0b: jmp 0x5964e11
// asm:   0x5964e0d: jmp 0x5964e11
// asm:   0x5964e0f: jmp 0x5964e11
// asm:   0x5964e11: mov rbx, rax
// asm:   0x5964e14: cmp edx, 1
// asm:   0x5964e17: jne 0x5964e50
// asm:   0x5964e19: mov rdi, rbx
// asm:   0x5964e1c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5964e21: mov rbx, qword ptr [rax]
// asm:   0x5964e24: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5964e29: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5964e2e: lea rax, [rip + 0x1929a9b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5964e35: mov rsi, qword ptr [rax]
// asm:   0x5964e38: mov rdi, rsp
// asm:   0x5964e3b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5964e40: test rbx, rbx
// asm:   0x5964e43: je 0x5964deb
// asm:   0x5964e45: mov rdi, rbx
// asm:   0x5964e48: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5964e4d: mov rbx, rax
// asm:   0x5964e50: lea rdi, [rsp + 0x18]
// asm:   0x5964e55: call 0x2fd3b30  ; il2cpp_runtime_helper_02fd3b30()
// asm:   0x5964e5a: mov rdi, rbx
// asm:   0x5964e5d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5964e62: mov rdi, rax
// asm:   0x5964e65: call 0x2ab61e0  ; __clang_call_terminate()

void CustomSkins_HookCustomSkinPart__SetMaterial
               (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  Characters_Hook_o *pCVar2;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_0754593d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Hook);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    Il2CppMethodInitialized_0754593d = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
  uStack_40 = 0;
  puStack_38 = (undefined1 *)&SStack_58;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    __this_01 = SStack_58.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose)
      ;
      return;
    }
    if ((UnityEngine_Renderer_o *)SStack_58.fields._current == (UnityEngine_Renderer_o *)0x0) break;
    UnityEngine_Renderer__set_material
              ((UnityEngine_Renderer_o *)SStack_58.fields._current,material,(MethodInfo *)0x0);
    pCVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_01,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Hook);
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pCVar2->fields)._tiling = (__this->fields)._tiling;
  }
  ThrowNullReferenceException();
}


// CustomSkins.HookCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HookCustomSkinPart__SetNewTexture (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5964e70

UnityEngine_Material_o *
CustomSkins_HookCustomSkinPart__SetNewTexture
          (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_0754593e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Materials/TransparentMaterial");
    Il2CppMethodInitialized_0754593e = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Materials/TransparentMaterial",true,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
            (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
  return __this_00;
}


