// Type: CustomSkins.BaseCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs
// --------------------------------

// CustomSkins.BaseCustomSkinPart.<>c$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___c___cctor (const MethodInfo* method);
// 0x181e9ae10

void CustomSkins_BaseCustomSkinPart___c___cctor(MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart___c_o *__this;
  
  if (Il2CppMethodInitialized_184344fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    Il2CppMethodInitialized_184344fac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9,__this);
  return;
}


// CustomSkins.BaseCustomSkinPart.<>c$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___c___ctor (CustomSkins_BaseCustomSkinPart___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomSkins_BaseCustomSkinPart___c___ctor(CustomSkins_BaseCustomSkinPart___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinPart.<>c$$<CreateMaterial>b__15_0
// il2cpp: bool CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_0 (CustomSkins_BaseCustomSkinPart___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x181e9a4e0

bool CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_0
               (CustomSkins_BaseCustomSkinPart___c_o *__this,UnityEngine_Renderer_o *renderer,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fad = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)renderer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomSkins.BaseCustomSkinPart.<>c$$<CreateMaterial>b__15_1
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_1 (CustomSkins_BaseCustomSkinPart___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x181e9a530

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_1
          (CustomSkins_BaseCustomSkinPart___c_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    pUVar1 = UnityEngine_Renderer__get_sharedMaterial(renderer,(MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11___ctor (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11___ctor(CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_IDisposable_Dispose (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_IDisposable_Dispose(CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, MethodInfo* method)

{
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$MoveNext
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__MoveNext (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x181e99370

bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__MoveNext
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  CustomSkins_BaseCustomSkinPart_o *pCVar3;
  CustomSkins_BaseCustomSkinLoader_o *pCVar4;
  Settings_GraphicsSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  UnityEngine_Coroutine_o *value;
  UnityEngine_Texture2D_o *pUVar7;
  System_String_o *url;
  bool bVar8;
  bool bVar9;
  System_String_o *pSVar10;
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o *target;
  Utility_CoroutineWithData_o *pUVar11;
  UnityEngine_Material_o *material;
  UnityEngine_Texture2D_o *pUVar12;
  
  if (Il2CppMethodInitialized_184344fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"http://");
    il2cpp_codegen_initialize_runtime_metadata(&"https://");
    Il2CppMethodInitialized_184344fae = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pCVar3 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    pSVar10 = (__this->fields).url;
    (__this->fields).__1__state = -1;
    if (pSVar10 != (System_String_o *)0x0) {
      pSVar10 = System_String__Trim(pSVar10,(MethodInfo *)0x0);
      (__this->fields).url = pSVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).url,pSVar10);
      pSVar10 = (__this->fields).url;
      if (pSVar10 != (System_String_o *)0x0) {
        bVar8 = System_String__Contains(pSVar10,"http://",(MethodInfo *)0x0);
        if (bVar8) {
          pSVar10 = (__this->fields).url;
          if (pSVar10 == (System_String_o *)0x0) goto label_181e996ee;
          pSVar10 = System_String__Replace_1970e80
                              (pSVar10,"http://","https://",(MethodInfo *)0x0);
          (__this->fields).url = pSVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields).url,pSVar10);
        }
        if (pCVar3 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          bVar8 = (*(pCVar3->klass->vtable)._4_IsValidPart.methodPtr)
                            (pCVar3,(pCVar3->klass->vtable)._4_IsValidPart.method);
          if (!bVar8) {
            return false;
          }
          pCVar4 = (pCVar3->fields)._loader;
          if (pCVar4 != (CustomSkins_BaseCustomSkinLoader_o *)0x0) {
            pSVar10 = (__this->fields).url;
            bVar8 = (*(pCVar4->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                              (pCVar4,(pCVar4->klass->vtable)._5_get_AllowLocalFileTextures.method);
            if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
            }
            bVar8 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar10,bVar8,(MethodInfo *)0x0);
            if (!bVar8) {
              return false;
            }
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
            if (((pSVar5 != (Settings_GraphicsSettings_o *)0x0) &&
                (pSVar6 = (pSVar5->fields).MipmapEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) &&
               (pCVar4 = (pCVar3->fields)._loader, pCVar4 != (CustomSkins_BaseCustomSkinLoader_o *)0x0)) {
              pSVar10 = (__this->fields).url;
              iVar2 = (pCVar3->fields)._maxSize;
              bVar8 = (pSVar6->fields)._value;
              bVar9 = (*(pCVar4->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                                (pCVar4,(pCVar4->klass->vtable)._5_get_AllowLocalFileTextures.method);
              if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
              }
              if (Il2CppMethodInitialized_184344fc7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
                Il2CppMethodInitialized_184344fc7 = '\x01';
              }
              target = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10)
              ;
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)target,
                         (MethodInfo *)0x0);
              (target->fields).url = pSVar10;
              (target->fields).__1__state = 0;
              Il2CppCodeGenWriteBarrier(&(target->fields).url,pSVar10);
              (target->fields).mipmap = bVar8;
              (target->fields).maxSize = iVar2;
              (target->fields).allowLocalFile = bVar9;
              pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
              Utility_CoroutineWithData___ctor
                        (pUVar11,(UnityEngine_MonoBehaviour_o *)pCVar4,
                         (System_Collections_IEnumerator_o *)target,(MethodInfo *)0x0);
              (__this->fields)._cwd_5__2 = pUVar11;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__2,pUVar11);
              pUVar11 = (__this->fields)._cwd_5__2;
              if (pUVar11 != (Utility_CoroutineWithData_o *)0x0) {
                value = (pUVar11->fields)._Coroutine_k__BackingField;
                (__this->fields).__2__current = (Il2CppObject *)value;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
                (__this->fields).__1__state = 1;
                return true;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pCVar3 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      bVar8 = (*(pCVar3->klass->vtable)._4_IsValidPart.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._4_IsValidPart.method);
      if (!bVar8) {
        return false;
      }
      pUVar11 = (__this->fields)._cwd_5__2;
      if (pUVar11 != (Utility_CoroutineWithData_o *)0x0) {
        pUVar7 = (UnityEngine_Texture2D_o *)(pUVar11->fields).Result;
        pUVar12 = (UnityEngine_Texture2D_o *)0x0;
        if (pUVar7 != (UnityEngine_Texture2D_o *)0x0) {
          if ((Il2CppClass *)pUVar7->klass == (Il2CppClass *)TypeInfo_UnityEngine_Texture2D) {
            pUVar12 = pUVar7;
          }
          if (pUVar12 == (UnityEngine_Texture2D_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar7,TypeInfo_UnityEngine_Texture2D);
          }
        }
        material = (*(pCVar3->klass->vtable)._8_SetNewTexture.methodPtr)
                             (pCVar3,pUVar12,(pCVar3->klass->vtable)._8_SetNewTexture.method);
        pSVar10 = (pCVar3->fields)._rendererId;
        url = (__this->fields).url;
        if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
        }
        CustomSkins_MaterialCache__SetMaterial(pSVar10,url,material,(MethodInfo *)0x0);
        return false;
      }
    }
  }
label_181e996ee:
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_Reset (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x181e99700

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_Reset
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_get_Current(CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___ctor (CustomSkins_BaseCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, bool useTransparentMaterial, const MethodInfo* method);
// 0x181e7d590

void CustomSkins_BaseCustomSkinPart___ctor
               (CustomSkins_BaseCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o *textureScale,bool useTransparentMaterial,
               MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  
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
  (__this->fields)._renderers = renderers;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderers,renderers);
  (__this->fields)._rendererId = rendererId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rendererId,rendererId);
  (__this->fields)._maxSize = maxSize;
  if ((textureScale->fields).hasValue == false) {
    fVar2 = (__this->fields)._defaultTextureScale.fields.x;
    textureScale._4_4_ = (__this->fields)._defaultTextureScale.fields.y;
  }
  else {
    UVar1 = System_Nullable_Vector2___get_Value
                      (textureScale,(MethodInfo_AE2BD0 *)MethodInfo_System_Nullable_Vector2_get_Value);
    fVar2 = UVar1.fields.x;
    textureScale._4_4_ = UVar1.fields.y;
  }
  (__this->fields)._textureScale.fields.x = fVar2;
  (__this->fields)._textureScale.fields.y = textureScale._4_4_;
  (__this->fields)._useTransparentMaterial = useTransparentMaterial;
  return;
}


// CustomSkins.BaseCustomSkinPart$$LoadCache
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadCache (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x181e7cb50

bool CustomSkins_BaseCustomSkinPart__LoadCache
               (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_c *pCVar1;
  CustomSkins_BaseCustomSkinLoader_o *pCVar2;
  System_Collections_Generic_Dictionary_string__Material__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_Material_o *pUVar6;
  
  if (Il2CppMethodInitialized_184344fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fa2 = '\x01';
  }
  if (url != (System_String_o *)0x0) {
    pSVar5 = System_String__ToLower(url,(MethodInfo *)0x0);
    if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
    }
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL,
                       (MethodInfo *)0x0);
    pCVar1 = __this->klass;
    if (bVar4) {
      (*(pCVar1->vtable)._5_DisableRenderers.methodPtr)(__this,(pCVar1->vtable)._5_DisableRenderers.method);
    }
    else {
      bVar4 = (*(pCVar1->vtable)._4_IsValidPart.methodPtr)(__this,(pCVar1->vtable)._4_IsValidPart.method);
      if (bVar4) {
        pCVar2 = (__this->fields)._loader;
        if (pCVar2 != (CustomSkins_BaseCustomSkinLoader_o *)0x0) {
          bVar4 = (*(pCVar2->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                            (pCVar2,(pCVar2->klass->vtable)._5_get_AllowLocalFileTextures.method);
          if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
          }
          bVar4 = CustomSkins_TextureDownloader__ValidTextureURL(url,bVar4,(MethodInfo *)0x0);
          if (!bVar4) {
            return true;
          }
          pSVar5 = (__this->fields)._rendererId;
          if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
          }
          if (Il2CppMethodInitialized_184344fbc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_184344fbc = '\x01';
          }
          if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
          }
          if (Il2CppMethodInitialized_184344fc0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&",");
            Il2CppMethodInitialized_184344fc0 = '\x01';
          }
          pSVar5 = System_String__Concat_1969b70(pSVar5,",",url,(MethodInfo *)0x0);
          __this_00 = TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
          if (__this_00 != (System_Collections_Generic_Dictionary_string__Material__o *)0x0) {
            bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)pSVar5,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
            if (!bVar4) {
              return false;
            }
            if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar3,(Il2CppObject *)pSVar5,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar4) {
                if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
                }
                CustomSkins_MaterialCache__Remove(pSVar5,(MethodInfo *)0x0);
                return false;
              }
              pSVar5 = (__this->fields)._rendererId;
              if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
              }
              if (Il2CppMethodInitialized_184344fbd == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
                Il2CppMethodInitialized_184344fbd = '\x01';
              }
              if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
              }
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
              if (Il2CppMethodInitialized_184344fc0 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&",");
                Il2CppMethodInitialized_184344fc0 = '\x01';
              }
              pSVar5 = System_String__Concat_1969b70(pSVar5,",",url,(MethodInfo *)0x0);
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar3,(Il2CppObject *)pSVar5,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item)
                ;
                (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                          (__this,pUVar6,(__this->klass->vtable)._6_SetMaterial.method);
                return true;
              }
            }
          }
        }
        goto label_181e7cea1;
      }
    }
    return true;
  }
label_181e7cea1:
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinPart$$IsCharacterEffectMaterial
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e7c900

bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/CharacterEffectShader");
    Il2CppMethodInitialized_184344fa3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Object_o *)0x0) {
      a = UnityEngine_Object__get_name(pUVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,"Custom/CharacterEffectShader",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinPart$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_BaseCustomSkinPart__LoadSkin (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x181e7ceb0

System_Collections_IEnumerator_o *
CustomSkins_BaseCustomSkinPart__LoadSkin
          (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
    Il2CppMethodInitialized_184344fa4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).url,url);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.BaseCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsValidPart (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e7c9e0
// eh: try 0x181e7cab0..0x181e7caf0 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7caa9: nop dword ptr [rax]
// asm:   0x181e7cb1d: mov rdx, qword ptr [rip + 0x2216f1c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181e7cb24: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e7cb29: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7cb2e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e7cb33: test rcx, rcx
// asm:   0x181e7cb36: jne 0x181e7cb45
// asm:   0x181e7cb45: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomSkins_BaseCustomSkinPart__IsValidPart(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fa5 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields)._renderers != (System_Collections_Generic_List_Renderer__o *)0x0) &&
     (__this_00 = (__this->fields)._renderers, (__this_00->fields)._size != 0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
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
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
        return true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return false;
}


// CustomSkins.BaseCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_BaseCustomSkinPart__DisableRenderers (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e7c750
// eh: try 0x181e7c820..0x181e7c878 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181e7c8a4..0x181e7c8b8 -> pad 0x180356390 cleanup
// eh: try 0x181e7c8ed..0x181e7c8f3 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7c889: mov rdx, qword ptr [rip + 0x22171b0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181e7c890: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e7c895: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7c89a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e7c89f: test rcx, rcx
// asm:   0x181e7c8a2: jne 0x181e7c8f3
// asm:   0x181e7c8a4: jmp 0x181e7c8e2
// asm:   0x181e7c8f3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_BaseCustomSkinPart__DisableRenderers
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fa6 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._useTransparentMaterial == false) {
    if ((__this->fields)._renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)(__this->fields)._renderers,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
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
                           MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
        x = local_28.fields._current;
        if (!bVar1) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,false,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    }
  }
  else {
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
               (__this->klass->vtable)._6_SetMaterial.method);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_BaseCustomSkinPart__SetMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e7d110
// eh: try 0x181e7d1d0..0x181e7d267 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7d236: mov rdx, qword ptr [rip + 0x2216803]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181e7d23d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e7d242: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7d247: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e7d24c: test rcx, rcx
// asm:   0x181e7d24f: jne 0x181e7d267
// asm:   0x181e7d267: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_BaseCustomSkinPart__SetMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fa7 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)(__this->fields)._renderers,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
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
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)x,material,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$CreateMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__CreateMaterial (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e7c480

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__CreateMaterial(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *source;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Func_Renderer__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_Renderer__Material__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Func_Material__bool__o *__this_02;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Material_o *__this_03;
  
  if (Il2CppMethodInitialized_184344fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomSkins_BaseCustomSkinPart_CreateMaterial_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Renderer_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Material_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    Il2CppMethodInitialized_184344fa8 = '\x01';
  }
  source = (__this->fields)._renderers;
  if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
  }
  __this_00 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_0;
  if (__this_00 == (System_Func_Renderer__bool__o *)0x0) {
    if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_0,__this_00);
  }
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
  if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
  }
  __this_01 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_1;
  if (__this_01 == (System_Func_Renderer__Material__o *)0x0) {
    if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_Material);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar1,
               (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_1,
               (MethodInfo_16E67D0 *)0x0);
    TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_1 = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9__15_1,__this_01);
  }
  source_01 = System_Linq_Enumerable__Select_Vector3__object_
                        (source_00,(System_Func_TSource__TResult__o *)__this_01,
                         (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Renderer_Material);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Material_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_CreateMaterial_b__15_2,
             (MethodInfo_B61EB0 *)0x0);
  pUVar3 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (System_Func_TSource__bool__o *)__this_02,
                      (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Material);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_2ee55e0(__this_03,pUVar3,(MethodInfo *)0x0);
    return __this_03;
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pUVar3 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
  return pUVar3;
}


// CustomSkins.BaseCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__SetNewTexture (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x181e7d270

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__SetNewTexture
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fVar6;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184344fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fa9 = '\x01';
  }
  if (((__this->fields)._renderers != (System_Collections_Generic_List_Renderer__o *)0x0) &&
     (pSVar1 = (__this->fields)._renderers, (pSVar1->fields)._size != 0)) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar1,0,
                   (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (__this->fields)._renderers;
      if ((pSVar1 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
         (__this_00 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_Renderer_get_Item),
         __this_00 != (UnityEngine_Renderer_o *)0x0)) {
        pUVar3 = UnityEngine_Renderer__get_sharedMaterial(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          return (UnityEngine_Material_o *)0x0;
        }
        pUVar3 = (*(__this->klass->vtable)._7_CreateMaterial.methodPtr)
                           (__this,(__this->klass->vtable)._7_CreateMaterial.method);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_mainTexture(pUVar3,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          fVar5 = (__this->fields)._textureScale.fields.x - (__this->fields)._defaultTextureScale.fields.x;
          fVar6 = (__this->fields)._textureScale.fields.y - (__this->fields)._defaultTextureScale.fields.y;
          if (9.9999994e-11 <= fVar6 * fVar6 + fVar5 * fVar5) {
            UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar3,(MethodInfo *)0x0);
            fStackX_c = UVar4.fields.y;
            UVar4.fields.x = UVar4.fields.x * (__this->fields)._textureScale.fields.x;
            UVar4.fields.y = fStackX_c * (__this->fields)._textureScale.fields.y;
            UnityEngine_Material__set_mainTextureScale(pUVar3,UVar4,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureOffset(pUVar3,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          }
          (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                    (__this,pUVar3,(__this->klass->vtable)._6_SetMaterial.method);
          return pUVar3;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


// CustomSkins.BaseCustomSkinPart$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinPart__GetRendererId (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
CustomSkins_BaseCustomSkinPart__GetRendererId(CustomSkins_BaseCustomSkinPart_o* __this, MethodInfo* method)

{
  return (__this->fields)._rendererId;
}


// CustomSkins.BaseCustomSkinPart$$ResetToDefault
// il2cpp: void CustomSkins_BaseCustomSkinPart__ResetToDefault (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e7cf40
// eh: try 0x181e7d011..0x181e7d101 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7d0d0: mov rdx, qword ptr [rip + 0x2216969]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181e7d0d7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e7d0dc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7d0e1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e7d0e6: test rcx, rcx
// asm:   0x181e7d0e9: jne 0x181e7d101
// asm:   0x181e7d101: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_BaseCustomSkinPart__ResetToDefault
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344faa = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  bVar1 = (*(__this->klass->vtable)._4_IsValidPart.methodPtr)
                    (__this,(__this->klass->vtable)._4_IsValidPart.method);
  if ((bVar1) && ((__this->fields)._renderers != (System_Collections_Generic_List_Renderer__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)(__this->fields)._renderers,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
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
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,true,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar2 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)x,pUVar2,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$<CreateMaterial>b__15_2
// il2cpp: bool CustomSkins_BaseCustomSkinPart___CreateMaterial_b__15_2 (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e7d460

bool CustomSkins_BaseCustomSkinPart___CreateMaterial_b__15_2
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fab = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_184344fa3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&"Custom/CharacterEffectShader");
      Il2CppMethodInitialized_184344fa3 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return true;
    }
    if (material != (UnityEngine_Material_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Object_o *)0x0) {
        a = UnityEngine_Object__get_name(pUVar2,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,"Custom/CharacterEffectShader",(MethodInfo *)0x0);
        return !bVar1;
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


