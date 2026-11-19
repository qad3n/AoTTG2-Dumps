// Type: CustomSkins.BaseCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/BaseCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs
// --------------------------------

// CustomSkins.BaseCustomSkinPart.<>c$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___c___cctor (const MethodInfo* method);
// 0x5964060

void CustomSkins_BaseCustomSkinPart___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754593a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    Il2CppMethodInitialized_0754593a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9 =
       (CustomSkins_BaseCustomSkinPart___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields->__9);
  return;
}


// CustomSkins.BaseCustomSkinPart.<>c$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___c___ctor (CustomSkins_BaseCustomSkinPart___c_o* __this, const MethodInfo* method);
// 0x59640d0

void CustomSkins_BaseCustomSkinPart___c___ctor
               (CustomSkins_BaseCustomSkinPart___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinPart.<>c$$<CreateMaterial>b__15_0
// il2cpp: bool CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_0 (CustomSkins_BaseCustomSkinPart___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x59640e0

bool CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_0
               (CustomSkins_BaseCustomSkinPart___c_o *__this,UnityEngine_Renderer_o *renderer,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754593b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754593b = '\x01';
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
// 0x5964130

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart___c___CreateMaterial_b__15_1
          (CustomSkins_BaseCustomSkinPart___c_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (renderer == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Renderer__get_sharedMaterial(renderer,(MethodInfo *)0x0);
  return pUVar1;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11___ctor (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5963610

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11___ctor
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_IDisposable_Dispose (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x5964150

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_IDisposable_Dispose
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$MoveNext
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__MoveNext (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x5964160
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59643a9: jmp 0x5964727
// asm:   0x5964473: jmp 0x5964727
// asm:   0x5964708: mov rsi, qword ptr [rax + 0x10]
// asm:   0x596470c: lea rdi, [rbx + 0x18]
// asm:   0x5964710: mov qword ptr [rbx + 0x18], rsi
// asm:   0x5964714: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5964719: mov dword ptr [rbx + 0x10], 2
// asm:   0x5964720: mov al, 1
// asm:   0x5964722: jmp 0x5964572

bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__MoveNext
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  int iVar1;
  int32_t iVar2;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar3;
  System_String_o *str2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UnityEngine_Texture_o *texture;
  Settings_GraphicsSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  bool bVar8;
  System_String_o *pSVar9;
  UnityEngine_Material_o *material;
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this_01;
  Utility_CoroutineWithData_o *pUVar10;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  
  if (Il2CppMethodInitialized_0754593c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"http://");
    il2cpp_codegen_initialize_runtime_metadata(&"https://");
    Il2CppMethodInitialized_0754593c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pSVar9 = (__this->fields).url;
      if (pSVar9 == (System_String_o *)0x0) goto label_05964727;
      targetAddress = &(__this->fields).url;
      pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
      *targetAddress = pSVar9;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (*targetAddress == (System_String_o *)0x0) goto label_05964727;
      bVar7 = System_String__Contains(*targetAddress,"http://",(MethodInfo *)0x0);
      if (bVar7) {
        if (*targetAddress == (System_String_o *)0x0) goto label_05964727;
        pSVar9 = System_String__Replace_5304550
                           (*targetAddress,"http://","https://",(MethodInfo *)0x0);
        *targetAddress = pSVar9;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
      if (__this_00 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_05964727;
      bVar7 = (*(__this_00->klass->vtable)._4_IsValidPart.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._4_IsValidPart.method);
      if (!bVar7) {
        return false;
      }
      pCVar3 = (__this_00->fields)._loader;
      if (pCVar3 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto label_05964727;
      pSVar9 = *targetAddress;
      bVar7 = (*(pCVar3->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._5_get_AllowLocalFileTextures.method);
      pMVar11 = extraout_RDX;
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        pMVar11 = extraout_RDX_00;
      }
      bVar7 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar9,bVar7,pMVar11);
      if (!bVar7) {
        return false;
      }
      pSVar9 = (__this_00->fields)._rendererId;
      str2 = *targetAddress;
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      if (Il2CppMethodInitialized_0754594b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&",");
        Il2CppMethodInitialized_0754594b = '\x01';
      }
      method = (MethodInfo *)
               System_String__Concat_5301f10(pSVar9,",",str2,(MethodInfo *)0x0);
      (__this->fields)._id_5__2 = (System_String_o *)method;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._id_5__2);
    }
    pSVar9 = (__this->fields)._id_5__2;
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      bVar7 = CustomSkins_MaterialCache__IsDownloading(pSVar9,method);
      pMVar11 = extraout_RDX_02;
    }
    else {
      bVar7 = CustomSkins_MaterialCache__IsDownloading(pSVar9,method);
      pMVar11 = extraout_RDX_01;
    }
    if (bVar7) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (__this_00 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_05964727;
    bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_00,(__this->fields).url,pMVar11);
    if (bVar7) {
      return false;
    }
    pSVar9 = (__this->fields)._id_5__2;
    pCVar3 = (__this_00->fields)._loader;
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      if (g_data_07545950 != '\0') goto label_0596444e;
label_05964593:
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
      g_data_07545950 = '\x01';
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor != 0) goto label_0596445f;
label_059645c3:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
    }
    else {
      if (g_data_07545950 == '\0') goto label_05964593;
label_0596444e:
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) goto label_059645c3;
label_0596445f:
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)pCVar3,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_set_Item);
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
      if (((pSVar5 != (Settings_GraphicsSettings_o *)0x0) &&
          (pSVar6 = (pSVar5->fields).MipmapEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) &&
         (pCVar3 = (__this_00->fields)._loader, pCVar3 != (CustomSkins_BaseCustomSkinLoader_o *)0x0)) {
        bVar7 = (pSVar6->fields)._value;
        pSVar9 = (__this->fields).url;
        iVar2 = (__this_00->fields)._maxSize;
        bVar8 = (*(pCVar3->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                          (pCVar3,(pCVar3->klass->vtable)._5_get_AllowLocalFileTextures.method);
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        if (Il2CppMethodInitialized_0754595a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
          Il2CppMethodInitialized_0754595a = '\x01';
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields).__1__state = 0;
        (__this_01->fields).url = pSVar9;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).url);
        (__this_01->fields).mipmap = bVar7;
        (__this_01->fields).maxSize = iVar2;
        (__this_01->fields).allowLocalFile = bVar8;
        pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
        Utility_CoroutineWithData___ctor
                  (pUVar10,(UnityEngine_MonoBehaviour_o *)pCVar3,(System_Collections_IEnumerator_o *)__this_01
                   ,(MethodInfo *)0x0);
        (__this->fields)._cwd_5__3 = pUVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__3);
        pUVar10 = (__this->fields)._cwd_5__3;
        if (pUVar10 != (Utility_CoroutineWithData_o *)0x0) {
          (__this->fields).__2__current = (Il2CppObject *)(pUVar10->fields)._Coroutine_k__BackingField;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 2;
          return true;
        }
      }
    }
    goto label_05964727;
  }
  (__this->fields).__1__state = -1;
  pSVar9 = (__this->fields)._id_5__2;
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    if (g_data_07545951 != '\0') goto label_05964384;
label_0596448a:
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    g_data_07545951 = '\x01';
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor != 0) goto label_05964395;
label_059644ba:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
  }
  else {
    if (g_data_07545951 == '\0') goto label_0596448a;
label_05964384:
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) goto label_059644ba;
label_05964395:
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
  }
  if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar4,(Il2CppObject *)pSVar9,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Remove),
     __this_00 == (CustomSkins_BaseCustomSkinPart_o *)0x0)) {
label_05964727:
    ThrowNullReferenceException();
  }
  bVar7 = (*(__this_00->klass->vtable)._4_IsValidPart.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._4_IsValidPart.method);
  if (bVar7) {
    pUVar10 = (__this->fields)._cwd_5__3;
    if (pUVar10 == (Utility_CoroutineWithData_o *)0x0) goto label_05964727;
    texture = (UnityEngine_Texture_o *)(pUVar10->fields).Result;
    if ((texture != (UnityEngine_Texture_o *)0x0) &&
       (texture->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(texture);
    }
    pSVar9 = (__this->fields)._id_5__2;
    material = (*(__this_00->klass->vtable)._8_SetNewTexture.methodPtr)
                         (__this_00,(UnityEngine_Texture2D_o *)texture,
                          (__this_00->klass->vtable)._8_SetNewTexture.method);
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    CustomSkins_MaterialCache__SetMaterial(pSVar9,material,texture,in_RCX);
  }
  return false;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x5964c80

Il2CppObject *
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_Reset (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o* __this, const MethodInfo* method);
// 0x5964c90

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
// 0x5964cd0

Il2CppObject *
CustomSkins_BaseCustomSkinPart__LoadSkin_d__11__System_Collections_IEnumerator_get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___ctor (CustomSkins_BaseCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, bool useTransparentMaterial, const MethodInfo* method);
// 0x595ec60

void CustomSkins_BaseCustomSkinPart___ctor
               (CustomSkins_BaseCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,bool useTransparentMaterial,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  System_Nullable_Vector2__Fields local_40;
  
  local_40.value.fields.y = textureScale.fields.value.fields.y;
  local_40._0_8_ = textureScale.fields._0_8_;
  if (Il2CppMethodInitialized_0754592f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_0754592f = '\x01';
  }
  (__this->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._loader = loader;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loader);
  (__this->fields)._renderers = renderers;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderers);
  (__this->fields)._rendererId = rendererId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rendererId);
  (__this->fields)._maxSize = maxSize;
  if (textureScale.fields.hasValue == false) {
    (__this->fields)._textureScale.fields = (__this->fields)._defaultTextureScale.fields;
  }
  else {
    UVar1 = (UnityEngine_Vector2_Fields)
            System_Nullable_Vector2___get_Value
                      ((System_Nullable_Vector2__o *)&local_40,
                       (MethodInfo_3CDC610 *)MethodInfo_System_Nullable_Vector2_get_Value);
    (__this->fields)._textureScale.fields = UVar1;
  }
  (__this->fields)._useTransparentMaterial = useTransparentMaterial;
  return;
}


// CustomSkins.BaseCustomSkinPart$$LoadCache
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadCache (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x595ef30

bool CustomSkins_BaseCustomSkinPart__LoadCache
               (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_c *pCVar1;
  CustomSkins_BaseCustomSkinLoader_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_07545930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545930 = '\x01';
  }
  if (url == (System_String_o *)0x0) {
label_0595f0dd:
    ThrowNullReferenceException();
  }
  pSVar4 = System_String__ToLower(url,(MethodInfo *)0x0);
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  bVar3 = System_String__op_Equality
                    (pSVar4,TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL,
                     (MethodInfo *)0x0);
  pCVar1 = __this->klass;
  if (bVar3) {
    (*(pCVar1->vtable)._5_DisableRenderers.methodPtr)(__this,(pCVar1->vtable)._5_DisableRenderers.method);
  }
  else {
    bVar3 = (*(pCVar1->vtable)._4_IsValidPart.methodPtr)(__this,(pCVar1->vtable)._4_IsValidPart.method);
    if (!bVar3) {
      return true;
    }
    pCVar2 = (__this->fields)._loader;
    if (pCVar2 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto label_0595f0dd;
    bVar3 = (*(pCVar2->klass->vtable)._5_get_AllowLocalFileTextures.methodPtr)
                      (pCVar2,(pCVar2->klass->vtable)._5_get_AllowLocalFileTextures.method);
    pMVar6 = extraout_RDX;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      pMVar6 = extraout_RDX_00;
    }
    bVar3 = CustomSkins_TextureDownloader__ValidTextureURL(url,bVar3,pMVar6);
    if (!bVar3) {
      return true;
    }
    pSVar4 = (__this->fields)._rendererId;
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    if (Il2CppMethodInitialized_0754594b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&",");
      Il2CppMethodInitialized_0754594b = '\x01';
    }
    pMVar6 = (MethodInfo *)",";
    pSVar4 = System_String__Concat_5301f10(pSVar4,",",url,(MethodInfo *)0x0);
    bVar3 = CustomSkins_MaterialCache__ContainsKey(pSVar4,pMVar6);
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    pUVar5 = CustomSkins_MaterialCache__GetMaterial(pSVar4,pMVar6);
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,pUVar5,(__this->klass->vtable)._6_SetMaterial.method);
  }
  return true;
}


// CustomSkins.BaseCustomSkinPart$$IsCharacterEffectMaterial
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5963540

bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_07545931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/CharacterEffectShader");
    Il2CppMethodInitialized_07545931 = '\x01';
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
// 0x595f0f0

System_Collections_IEnumerator_o *
CustomSkins_BaseCustomSkinPart__LoadSkin
          (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_07545932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
    Il2CppMethodInitialized_07545932 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).url);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.BaseCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsValidPart (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5963630
// eh: try 0x59636f3..0x5963724 -> pad 0x5963766 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x596377e..0x5963783 -> pad 0x59637a9 cleanup
// eh: try 0x59637ac..0x59637b6 -> pad 0x59637be catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5963762: jmp 0x5963766
// asm:   0x5963764: jmp 0x5963766
// asm:   0x5963766: mov rbx, rax
// asm:   0x5963769: cmp edx, 1
// asm:   0x596376c: jne 0x59637ac
// asm:   0x596376e: mov rdi, rbx
// asm:   0x5963771: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5963776: mov r14, qword ptr [rax]
// asm:   0x5963779: mov qword ptr [rsp + 0x20], r14
// asm:   0x596377e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5963783: lea rax, [rip + 0x192b146]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x596378a: mov rsi, qword ptr [rax]
// asm:   0x596378d: mov rdi, rsp
// asm:   0x5963790: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5963795: xor ebp, ebp
// asm:   0x5963797: mov ebx, 0
// asm:   0x596379c: test r14, r14
// asm:   0x596379f: je 0x596374a
// asm:   0x59637a1: mov rdi, r14
// asm:   0x59637a4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59637a9: mov rbx, rax
// asm:   0x59637ac: lea rdi, [rsp + 0x20]
// asm:   0x59637b1: call 0x2fd3a70  ; il2cpp_runtime_helper_02fd3a70()
// asm:   0x59637b6: mov rdi, rbx
// asm:   0x59637b9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59637be: mov rdi, rax
// asm:   0x59637c1: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomSkins_BaseCustomSkinPart__IsValidPart(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (Il2CppMethodInitialized_07545933 == '\0') {
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
    Il2CppMethodInitialized_07545933 = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._renderers;
  if ((__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) || ((__this_00->fields)._size == 0)) {
    bVar1 = false;
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    uStack_38 = 0;
    puStack_30 = (undefined1 *)&SStack_58;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = SStack_58.fields._current;
      if (!bVar1) {
        iVar3 = 7;
        goto label_05963738;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar3 = 6;
label_05963738:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    bVar1 = iVar3 == 6 && bVar1;
  }
  return bVar1;
}


// CustomSkins.BaseCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_BaseCustomSkinPart__DisableRenderers (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x59637d0
// eh: try 0x59638e3..0x596394c -> pad 0x5963954 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x596396c..0x5963971 -> pad 0x5963990 cleanup
// eh: try 0x5963993..0x596399d -> pad 0x59639a5 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596394c: jmp 0x5963954
// asm:   0x596394e: jmp 0x5963954
// asm:   0x5963950: jmp 0x5963954
// asm:   0x5963952: jmp 0x5963954
// asm:   0x5963954: mov rbx, rax
// asm:   0x5963957: cmp edx, 1
// asm:   0x596395a: jne 0x5963993
// asm:   0x596395c: mov rdi, rbx
// asm:   0x596395f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5963964: mov rbx, qword ptr [rax]
// asm:   0x5963967: mov qword ptr [rsp + 0x18], rbx
// asm:   0x596396c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5963971: lea rax, [rip + 0x192af58]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5963978: mov rsi, qword ptr [rax]
// asm:   0x596397b: mov rdi, rsp
// asm:   0x596397e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5963983: test rbx, rbx
// asm:   0x5963986: je 0x596393b
// asm:   0x5963988: mov rdi, rbx
// asm:   0x596398b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5963990: mov rbx, rax
// asm:   0x5963993: lea rdi, [rsp + 0x18]
// asm:   0x5963998: call 0x2fd3aa0  ; il2cpp_runtime_helper_02fd3aa0()
// asm:   0x596399d: mov rdi, rbx
// asm:   0x59639a0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59639a5: mov rdi, rax
// asm:   0x59639a8: call 0x2ab61e0  ; __clang_call_terminate()

void CustomSkins_BaseCustomSkinPart__DisableRenderers
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545934 == '\0') {
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
    Il2CppMethodInitialized_07545934 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._useTransparentMaterial != false) {
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
               (__this->klass->vtable)._6_SetMaterial.method);
    return;
  }
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_30 = 0;
    local_28 = (undefined1 *)&local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_48.fields._current;
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
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_BaseCustomSkinPart__SetMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x59639b0
// eh: try 0x5963a64..0x5963ad0 -> pad 0x5963ad8 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5963af0..0x5963af5 -> pad 0x5963b14 cleanup
// eh: try 0x5963b17..0x5963b21 -> pad 0x5963b29 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5963a5d: nop dword ptr [rax]
// asm:   0x5963ad0: jmp 0x5963ad8
// asm:   0x5963ad2: jmp 0x5963ad8
// asm:   0x5963ad4: jmp 0x5963ad8
// asm:   0x5963ad6: jmp 0x5963ad8
// asm:   0x5963ad8: mov rbx, rax
// asm:   0x5963adb: cmp edx, 1
// asm:   0x5963ade: jne 0x5963b17
// asm:   0x5963ae0: mov rdi, rbx
// asm:   0x5963ae3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5963ae8: mov rbx, qword ptr [rax]
// asm:   0x5963aeb: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5963af0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5963af5: lea rax, [rip + 0x192add4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5963afc: mov rsi, qword ptr [rax]
// asm:   0x5963aff: mov rdi, rsp
// asm:   0x5963b02: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5963b07: test rbx, rbx
// asm:   0x5963b0a: je 0x5963abd
// asm:   0x5963b0c: mov rdi, rbx
// asm:   0x5963b0f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5963b14: mov rbx, rax
// asm:   0x5963b17: lea rdi, [rsp + 0x20]
// asm:   0x5963b1c: call 0x2fd3ad0  ; il2cpp_runtime_helper_02fd3ad0()
// asm:   0x5963b21: mov rdi, rbx
// asm:   0x5963b24: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5963b29: mov rdi, rax
// asm:   0x5963b2c: call 0x2ab61e0  ; __clang_call_terminate()

void CustomSkins_BaseCustomSkinPart__SetMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07545935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545935 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_58.fields._current;
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
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x,material,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$CreateMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__CreateMaterial (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5963b40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5963c24: jmp 0x5963c3f
// asm:   0x5963cd4: jmp 0x5963cef

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__CreateMaterial(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *source;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Func_Renderer__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  CustomSkins_BaseCustomSkinPart___c_StaticFields *pCVar3;
  System_Func_Renderer__Material__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Func_Material__bool__o *__this_02;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_o *__this_03;
  
  if (Il2CppMethodInitialized_07545936 == '\0') {
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
    Il2CppMethodInitialized_07545936 = '\x01';
  }
  source = (__this->fields)._renderers;
  if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    __this_00 = pCVar3->__9__15_0;
  }
  else {
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    __this_00 = pCVar3->__9__15_0;
  }
  if (__this_00 == (System_Func_Renderer__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
      pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pCVar3->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_0,
               (MethodInfo_4F19300 *)0x0);
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    pCVar3->__9__15_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pCVar3->__9__15_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
  if ((TypeInfo_CustomSkins_BaseCustomSkinPart_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    __this_01 = pCVar3->__9__15_1;
  }
  else {
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    __this_01 = pCVar3->__9__15_1;
  }
  if (__this_01 == (System_Func_Renderer__Material__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_c);
      pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pCVar3->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_Material);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_01,pIVar1,
               (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_c_CreateMaterial_b__15_1,
               (MethodInfo_4F19B50 *)0x0);
    pCVar3 = TypeInfo_CustomSkins_BaseCustomSkinPart_c->static_fields;
    pCVar3->__9__15_1 = __this_01;
    Il2CppCodeGenWriteBarrier(&pCVar3->__9__15_1);
  }
  source_01 = System_Linq_Enumerable__Select_object__object_
                        (source_00,(System_Func_TSource__TResult__o *)__this_01,
                         (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_Renderer_Material);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Material_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomSkins_BaseCustomSkinPart_CreateMaterial_b__15_2,
             (MethodInfo_4F19300 *)0x0);
  pUVar4 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (System_Func_TSource__bool__o *)__this_02,
                      (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Material);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_68dcfd0(__this_03,pUVar4,(MethodInfo *)0x0);
    return __this_03;
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pUVar4 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
  return pUVar4;
}


// CustomSkins.BaseCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__SetNewTexture (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5963e30

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__SetNewTexture
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_List_Renderer__o *pSVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *pUVar5;
  float fVar6;
  float fVar8;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_07545937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545937 = '\x01';
  }
  pSVar3 = (__this->fields)._renderers;
  if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) && ((pSVar3->fields)._size != 0)) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar3,0,
                   (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar3 = (__this->fields)._renderers;
      if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
         (__this_00 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_Renderer_get_Item),
         __this_00 != (UnityEngine_Renderer_o *)0x0)) {
        pUVar5 = UnityEngine_Renderer__get_sharedMaterial(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return (UnityEngine_Material_o *)0x0;
        }
        pUVar5 = (*(__this->klass->vtable)._7_CreateMaterial.methodPtr)
                           (__this,(__this->klass->vtable)._7_CreateMaterial.method);
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_mainTexture(pUVar5,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          UVar1 = (__this->fields)._textureScale.fields;
          UVar2 = (__this->fields)._defaultTextureScale.fields;
          fVar6 = UVar1.x - UVar2.x;
          fVar8 = UVar1.y - UVar2.y;
          if (9.9999994e-11 <= fVar8 * fVar8 + fVar6 * fVar6) {
            UVar7 = UnityEngine_Material__get_mainTextureScale(pUVar5,(MethodInfo *)0x0);
            UVar1 = (__this->fields)._textureScale.fields;
            value.fields.x = UVar7.fields.x * UVar1.x;
            value.fields.y = UVar7.fields.y * UVar1.y;
            UnityEngine_Material__set_mainTextureScale(pUVar5,value,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureOffset(pUVar5,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          }
          (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                    (__this,pUVar5,(__this->klass->vtable)._6_SetMaterial.method);
          return pUVar5;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


// CustomSkins.BaseCustomSkinPart$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinPart__GetRendererId (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5963fe0

System_String_o *
CustomSkins_BaseCustomSkinPart__GetRendererId(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  return (__this->fields)._rendererId;
}


// CustomSkins.BaseCustomSkinPart$$ResetToDefault
// il2cpp: void CustomSkins_BaseCustomSkinPart__ResetToDefault (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5961ad0
// eh: try 0x5961ba4..0x5961c61 -> pad 0x5961c6f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5961c87..0x5961c8c -> pad 0x5961cad cleanup
// eh: try 0x5961cb0..0x5961cba -> pad 0x5961cc2 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5961b9d: nop dword ptr [rax]
// asm:   0x5961c61: jmp 0x5961c6f
// asm:   0x5961c63: jmp 0x5961c6f
// asm:   0x5961c65: jmp 0x5961c6f
// asm:   0x5961c67: jmp 0x5961c6f
// asm:   0x5961c69: jmp 0x5961c6f
// asm:   0x5961c6b: jmp 0x5961c6f
// asm:   0x5961c6d: jmp 0x5961c6f
// asm:   0x5961c6f: mov rbx, rax
// asm:   0x5961c72: cmp edx, 1
// asm:   0x5961c75: jne 0x5961cb0
// asm:   0x5961c77: mov rdi, rbx
// asm:   0x5961c7a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5961c7f: mov rbx, qword ptr [rax]
// asm:   0x5961c82: mov qword ptr [rsp + 8], rbx
// asm:   0x5961c87: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5961c8c: lea rax, [rip + 0x192cc3d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5961c93: mov rsi, qword ptr [rax]
// asm:   0x5961c96: lea rdi, [rsp + 0x20]
// asm:   0x5961c9b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5961ca0: test rbx, rbx
// asm:   0x5961ca3: je 0x5961c4e
// asm:   0x5961ca5: mov rdi, rbx
// asm:   0x5961ca8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5961cad: mov rbx, rax
// asm:   0x5961cb0: lea rdi, [rsp + 8]
// asm:   0x5961cb5: call 0x2fd3b00  ; il2cpp_runtime_helper_02fd3b00()
// asm:   0x5961cba: mov rdi, rbx
// asm:   0x5961cbd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5961cc2: mov rdi, rax
// asm:   0x5961cc5: call 0x2ab61e0  ; __clang_call_terminate()

void CustomSkins_BaseCustomSkinPart__ResetToDefault
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07545938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545938 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._4_IsValidPart.methodPtr)
                    (__this,(__this->klass->vtable)._4_IsValidPart.method);
  if ((bVar1) &&
     (__this_00 = (__this->fields)._renderers, __this_00 != (System_Collections_Generic_List_Renderer__o *)0x0
     )) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_48.fields._current = (Il2CppObject *)local_50;
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_48.fields._current;
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
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x,pUVar2,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$<CreateMaterial>b__15_2
// il2cpp: bool CustomSkins_BaseCustomSkinPart___CreateMaterial_b__15_2 (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5963ff0

bool CustomSkins_BaseCustomSkinPart___CreateMaterial_b__15_2
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  
  if (Il2CppMethodInitialized_07545939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545939 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)material;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar2 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_00,material,method_00);
    bVar2 = !bVar2;
  }
  return bVar2;
}


