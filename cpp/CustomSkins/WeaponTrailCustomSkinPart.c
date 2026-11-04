// Type: CustomSkins.WeaponTrailCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/WeaponTrailCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs
// --------------------------------

// CustomSkins.WeaponTrailCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart___ctor (CustomSkins_WeaponTrailCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_MeleeWeaponTrail__o* weaponTrails, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x181e9b270

void CustomSkins_WeaponTrailCustomSkinPart___ctor
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_MeleeWeaponTrail__o *weaponTrails,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o *textureScale,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  System_Nullable_Vector2__Fields local_38 [2];
  
  local_38[0].hasValue = (textureScale->fields).hasValue;
  local_38[0]._1_3_ = *(undefined3 *)&(textureScale->fields).field_0x1;
  local_38[0].value.fields.x = (textureScale->fields).value.fields.x;
  local_38[0].value.fields.y = (textureScale->fields).value.fields.y;
  if (Il2CppMethodInitialized_184344fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_184344fa1 = '\x01';
  }
  (__this->fields)._defaultTextureScale.fields.x = 1.0;
  (__this->fields)._defaultTextureScale.fields.y = 1.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._loader = loader;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loader,loader);
  (__this->fields)._renderers = (System_Collections_Generic_List_Renderer__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderers,(void *)0x0);
  (__this->fields)._rendererId = rendererId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rendererId,rendererId);
  (__this->fields)._maxSize = maxSize;
  if (local_38[0].hasValue == false) {
    fVar2 = (__this->fields)._defaultTextureScale.fields.x;
    textureScale._4_4_ = (__this->fields)._defaultTextureScale.fields.y;
  }
  else {
    UVar1 = System_Nullable_Vector2___get_Value
                      ((System_Nullable_Vector2__o *)local_38,
                       (MethodInfo_AE2BD0 *)MethodInfo_System_Nullable_Vector2_get_Value);
    fVar2 = UVar1.fields.x;
    textureScale._4_4_ = UVar1.fields.y;
  }
  (__this->fields)._textureScale.fields.x = fVar2;
  (__this->fields)._textureScale.fields.y = textureScale._4_4_;
  (__this->fields)._useTransparentMaterial = true;
  (__this->fields)._weaponTrails = weaponTrails;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._weaponTrails,weaponTrails);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e9af60

bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  bool bVar1;
  MeleeWeaponTrail_o *x;
  
  if (Il2CppMethodInitialized_184344fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fb6 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return false;
    }
    x = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                  ((System_Collections_Generic_List_object__o *)__this_00,0,
                   (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomSkins.WeaponTrailCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e9aef0

void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fb7 = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
            (__this,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
             (__this->klass->vtable)._6_SetMaterial.method);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e9b000
// eh: try 0x181e9b0b0..0x181e9b119 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9b0ed: mov rdx, qword ptr [rip + 0x21f20b4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose
// asm:   0x181e9b0f4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e9b0f9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9b0fe: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e9b103: test rcx, rcx
// asm:   0x181e9b106: jne 0x181e9b119
// asm:   0x181e9b119: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  MeleeWeaponTrail_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_GetEnumerator);
    Il2CppMethodInitialized_184344fb8 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_GetEnumerator)
    ;
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose);
        return;
      }
      if ((MeleeWeaponTrail_o *)local_28.fields._current == (MeleeWeaponTrail_o *)0x0) break;
      MeleeWeaponTrail__SetMaterial((MeleeWeaponTrail_o *)local_28.fields._current,material,(MethodInfo *)0x0)
      ;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x181e9b130

UnityEngine_Material_o *
CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method
          )

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  UnityEngine_Material_o *source;
  MeleeWeaponTrail_o *pMVar1;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fVar4;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184344fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    Il2CppMethodInitialized_184344fb9 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    pMVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    if (pMVar1 != (MeleeWeaponTrail_o *)0x0) {
      source = (pMVar1->fields)._material;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor_2ee55e0(__this_01,source,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
        fVar3 = (__this->fields)._textureScale.fields.x - (__this->fields)._defaultTextureScale.fields.x;
        fVar4 = (__this->fields)._textureScale.fields.y - (__this->fields)._defaultTextureScale.fields.y;
        if (9.9999994e-11 <= fVar4 * fVar4 + fVar3 * fVar3) {
          UVar2 = UnityEngine_Material__get_mainTextureScale(__this_01,(MethodInfo *)0x0);
          fStackX_c = UVar2.fields.y;
          UVar2.fields.x = UVar2.fields.x * (__this->fields)._textureScale.fields.x;
          UVar2.fields.y = fStackX_c * (__this->fields)._textureScale.fields.y;
          UnityEngine_Material__set_mainTextureScale(__this_01,UVar2,(MethodInfo *)0x0);
        }
        (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                  (__this,__this_01,(__this->klass->vtable)._6_SetMaterial.method);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


