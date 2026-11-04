// Type: CustomSkins.HookCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HookCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs
// --------------------------------

// CustomSkins.HookCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HookCustomSkinPart___ctor (CustomSkins_HookCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, float tiling, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x181e8b090

void CustomSkins_HookCustomSkinPart___ctor
               (CustomSkins_HookCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,float tiling,System_Nullable_Vector2__o *textureScale,MethodInfo *method)

{
  System_Nullable_Vector2__Fields local_18;
  
  local_18.hasValue = (textureScale->fields).hasValue;
  local_18._1_3_ = *(undefined3 *)&(textureScale->fields).field_0x1;
  local_18.value.fields.x = (textureScale->fields).value.fields.x;
  local_18.value.fields.y = (textureScale->fields).value.fields.y;
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             (System_Nullable_Vector2__o *)&local_18,true,(MethodInfo *)0x0);
  (__this->fields)._tiling = tiling;
  return;
}


// CustomSkins.HookCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_HookCustomSkinPart__SetMaterial (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e8ae40
// eh: try 0x181e8aef2..0x181e8af80 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8af4f: mov rdx, qword ptr [rip + 0x2208aea]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181e8af56: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e8af5b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e8af60: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e8af65: test rcx, rcx
// asm:   0x181e8af68: jne 0x181e8af80
// asm:   0x181e8af80: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_HookCustomSkinPart__SetMaterial
               (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  Characters_Hook_o *pCVar2;
  undefined1 local_60 [16];
  UnityEngine_Renderer_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184344faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Hook);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    Il2CppMethodInitialized_184344faf = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      __this_01 = local_48.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
        return;
      }
      if ((UnityEngine_Renderer_o *)local_48.fields._current == (UnityEngine_Renderer_o *)0x0) break;
      UnityEngine_Renderer__set_sharedMaterial
                ((UnityEngine_Renderer_o *)local_48.fields._current,material,(MethodInfo *)0x0);
      pCVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_01,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Hook);
      if (pCVar2 == (Characters_Hook_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar2->fields)._tiling = (__this->fields)._tiling;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomSkins.HookCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HookCustomSkinPart__SetNewTexture (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x181e8af90

UnityEngine_Material_o *
CustomSkins_HookCustomSkinPart__SetNewTexture
          (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Materials/TransparentMaterial");
    Il2CppMethodInitialized_184344fb0 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Materials/TransparentMaterial",true,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
    return __this_00;
  }
  ThrowNullReferenceException();
}


