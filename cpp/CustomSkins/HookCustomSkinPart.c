// Type: CustomSkins.HookCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/HookCustomSkinPart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.HookCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HookCustomSkinPart___ctor (CustomSkins_HookCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, float tiling, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x4244740

void CustomSkins_HookCustomSkinPart___ctor
               (CustomSkins_HookCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,float tiling,System_Nullable_Vector2__o textureScale,
               MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             textureScale,1,in_stack_ffffffffffffffe0);
  (__this->fields)._tiling = tiling;
  return;
}


// CustomSkins.HookCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_HookCustomSkinPart__SetMaterial (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x42478d0

void CustomSkins_HookCustomSkinPart__SetMaterial
               (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  UnityEngine_Renderer_o *__this_03;
  UnityEngine_Renderer_o *pUVar5;
  
  if (DAT_057051d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Hook_GetComponent_Hook);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    DAT_057051d8 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_03 = (UnityEngine_Renderer_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    while( true ) {
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar4;
        __this_02.fields._list = pSVar3;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        return;
      }
      if (__this_03 == (UnityEngine_Renderer_o *)0x0) break;
      pUVar5 = __this_03;
      UnityEngine_Renderer__set_material(__this_03,material,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this_03,MethodInfo_Hook_GetComponent_Hook);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(float *)&pIVar2[0xb].monitor = (__this->fields)._tiling;
      __this_03 = pUVar5;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.HookCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HookCustomSkinPart__SetNewTexture (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4247a90

UnityEngine_Material_o *
CustomSkins_HookCustomSkinPart__SetNewTexture
          (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_057051d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&"Transparent/Diffuse");
    DAT_057051d9 = '\x01';
  }
  shader = UnityEngine_Shader__Find("Transparent/Diffuse",(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__set_mainTexture
              (__this_00,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


