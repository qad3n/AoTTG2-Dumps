// Type: CustomSkins.BaseCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinPart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12___ctor (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4246a40

void CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12___ctor
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_IDisposable_Dispose (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x4247280

void CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12__System_IDisposable_Dispose
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$MoveNext
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__MoveNext (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x4247290

bool_conflict
CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12__MoveNext
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  undefined1 uVar2;
  int iVar3;
  int32_t iVar4;
  CustomSkins_BaseCustomSkinPart_o *pCVar5;
  System_String_o *url;
  long lVar6;
  CustomSkins_BaseCustomSkinLoader_o *owner;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UnityEngine_Material_o *material;
  Il2CppObject *pIVar10;
  Utility_CoroutineWithData_o *pUVar11;
  undefined8 uVar12;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_057051d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CoroutineWithData);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"http://");
    il2cpp_init_method_metadata(&"https://");
    DAT_057051d7 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  pCVar5 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    if (pCVar5 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      cVar7 = (*(pCVar5->klass->vtable)._4_IsValidPart.methodPtr)
                        (pCVar5,(pCVar5->klass->vtable)._4_IsValidPart.method);
      if (cVar7 != '\0') {
        pUVar11 = (__this->fields)._cwd_5__2;
        if (pUVar11 == (Utility_CoroutineWithData_o *)0x0) goto LAB_042475bd;
        pIVar10 = (pUVar11->fields).Result;
        if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar10->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar10,TypeInfo_Texture2D);
        }
        material = (UnityEngine_Material_o *)
                   (*(pCVar5->klass->vtable)._7_SetNewTexture.methodPtr)
                             (pCVar5,pIVar10,(pCVar5->klass->vtable)._7_SetNewTexture.method);
        pSVar9 = (pCVar5->fields)._rendererId;
        url = (__this->fields).url;
        if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomSkins_MaterialCache__SetMaterial(pSVar9,url,material,in_RCX);
      }
      return 0;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar9 = (__this->fields).url;
    if (pSVar9 != (System_String_o *)0x0) {
      ppSVar1 = &(__this->fields).url;
      pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
      *ppSVar1 = pSVar9;
      il2cpp_runtime_glue(ppSVar1,pSVar9);
      if (*ppSVar1 != (System_String_o *)0x0) {
        bVar8 = System_String__Contains(*ppSVar1,"http://",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*ppSVar1 == (System_String_o *)0x0) goto LAB_042475bd;
          pSVar9 = System_String__Replace(*ppSVar1,"http://","https://",(MethodInfo *)0x0);
          *ppSVar1 = pSVar9;
          il2cpp_runtime_glue(ppSVar1,pSVar9);
        }
        if (pCVar5 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          method_00 = (pCVar5->klass->vtable)._4_IsValidPart.method;
          cVar7 = (*(pCVar5->klass->vtable)._4_IsValidPart.methodPtr)(pCVar5);
          if (cVar7 == '\0') {
            return 0;
          }
          pSVar9 = *ppSVar1;
          if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
            il2cpp_init_class();
            bVar8 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar9,method_00);
            cVar7 = (char)bVar8;
          }
          else {
            bVar8 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar9,method_00);
            cVar7 = (char)bVar8;
          }
          if (cVar7 == '\0') {
            return 0;
          }
          lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
          if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 != 0)) {
            uVar2 = *(undefined1 *)(lVar6 + 0x11);
            owner = (pCVar5->fields)._loader;
            pSVar9 = *ppSVar1;
            iVar4 = (pCVar5->fields)._maxSize;
            if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057051ed == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_DownloadTexture_d__9);
              DAT_057051ed = '\x01';
            }
            pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DownloadTexture_d__9);
            System_Object___ctor(pIVar10,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar10[1].klass = 0;
            if (pIVar10 != (Il2CppObject *)0x0) {
              pIVar10[2].monitor = pSVar9;
              il2cpp_runtime_glue(&pIVar10[2].monitor,pSVar9);
              *(undefined1 *)&pIVar10[2].klass = uVar2;
              *(int32_t *)&pIVar10[3].klass = iVar4;
              pUVar11 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
              Utility_CoroutineWithData___ctor
                        (pUVar11,(UnityEngine_MonoBehaviour_o *)owner,
                         (System_Collections_IEnumerator_o *)pIVar10,(MethodInfo *)0x0);
              (__this->fields)._cwd_5__2 = pUVar11;
              il2cpp_runtime_glue(&(__this->fields)._cwd_5__2,pUVar11);
              pUVar11 = (__this->fields)._cwd_5__2;
              if (pUVar11 != (Utility_CoroutineWithData_o *)0x0) {
                (__this->fields).__2__current =
                     (Il2CppObject *)(pUVar11->fields)._Coroutine_k__BackingField;
                uVar12 = il2cpp_runtime_glue(&(__this->fields).__2__current);
                (__this->fields).__1__state = 1;
                return (bool_conflict)CONCAT71((int7)((ulong)uVar12 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_042475bd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x4247870

Il2CppObject *
CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_Reset (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x4247880

void CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12__System_Collections_IEnumerator_Reset
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x42478c0

Il2CppObject *
CustomSkins_BaseCustomSkinPart_<LoadSkin>d__12__System_Collections_IEnumerator_get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___ctor (CustomSkins_BaseCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, bool useTransparentMaterial, const MethodInfo* method);
// 0x423f010

void CustomSkins_BaseCustomSkinPart___ctor
               (CustomSkins_BaseCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,
               bool_conflict useTransparentMaterial,MethodInfo *method)

{
  System_Nullable_Vector2__o __this_00;
  undefined8 local_40;
  float local_38;
  UnityEngine_Vector2_Fields UVar1;
  
  local_38 = textureScale.fields.value.fields.y;
  local_40 = textureScale.fields._0_8_;
  if (DAT_057051cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Vector2_get_Value);
    DAT_057051cd = '\x01';
  }
  (__this->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._loader = loader;
  il2cpp_runtime_glue(&__this->fields,loader);
  (__this->fields)._renderers = renderers;
  il2cpp_runtime_glue(&(__this->fields)._renderers,renderers);
  (__this->fields)._rendererId = rendererId;
  __this_00.fields.value.fields.y =
       (float)il2cpp_runtime_glue(&(__this->fields)._rendererId,rendererId);
  (__this->fields)._maxSize = maxSize;
  if ((char)textureScale.fields.hasValue == '\0') {
    (__this->fields)._textureScale.fields = (__this->fields)._defaultTextureScale.fields;
  }
  else {
    __this_00.fields._0_8_ = &local_40;
    UVar1 = (UnityEngine_Vector2_Fields)System_Nullable<Vector2>__get_Value(__this_00,MethodInfo_Vector2_get_Value);
    (__this->fields)._textureScale.fields = UVar1;
  }
  *(undefined1 *)&(__this->fields)._useTransparentMaterial = (undefined1)useTransparentMaterial;
  return;
}


// CustomSkins.BaseCustomSkinPart$$LoadCache
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadCache (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x423f2e0

bool_conflict
CustomSkins_BaseCustomSkinPart__LoadCache
          (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_c *pCVar1;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_Material_o *cachedMaterial;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  undefined7 uVar7;
  
  if (DAT_057051ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051ce = '\x01';
  }
  if (url != (System_String_o *)0x0) {
    pSVar5 = System_String__ToLower(url,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (pSVar5,(System_String_o *)**(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8),
                       (MethodInfo *)0x0);
    pCVar1 = __this->klass;
    uVar7 = (undefined7)((ulong)pSVar5 >> 8);
    if ((char)bVar3 == '\0') {
      pMVar6 = (pCVar1->vtable)._4_IsValidPart.method;
      cVar2 = (*(pCVar1->vtable)._4_IsValidPart.methodPtr)(__this);
      bVar3 = (bool_conflict)CONCAT71(uVar7,1);
      if (cVar2 != '\0') {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = CustomSkins_TextureDownloader__ValidTextureURL(url,pMVar6);
        if ((char)bVar4 != '\0') {
          pSVar5 = (__this->fields)._rendererId;
          pMVar6 = extraout_RDX;
          if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
            il2cpp_init_class();
            pMVar6 = extraout_RDX_00;
          }
          bVar4 = CustomSkins_MaterialCache__ContainsKey(pSVar5,url,pMVar6);
          if ((char)bVar4 == '\0') {
            bVar3 = 0;
          }
          else {
            pSVar5 = (__this->fields)._rendererId;
            pMVar6 = extraout_RDX_01;
            if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar6 = extraout_RDX_02;
            }
            cachedMaterial = CustomSkins_MaterialCache__GetMaterial(pSVar5,url,pMVar6);
            bVar4 = CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials
                              (__this,cachedMaterial,method_00);
            if ((char)bVar4 == '\0') {
              (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                        (__this,cachedMaterial,(__this->klass->vtable)._6_SetMaterial.method);
            }
          }
        }
      }
    }
    else {
      (*(pCVar1->vtable)._5_DisableRenderers.methodPtr)
                (__this,(pCVar1->vtable)._5_DisableRenderers.method);
      bVar3 = (bool_conflict)CONCAT71(uVar7,1);
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinPart$$IsCharacterEffectMaterial
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4246970

bool_conflict
CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,
          MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  System_String_o *a;
  
  if (DAT_057051cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Custom/CharacterEffectShader");
    DAT_057051cf = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 == '\0') {
    return 0;
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return 0;
    }
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Object_o *)0x0) {
      a = UnityEngine_Object__get_name(pUVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,"Custom/CharacterEffectShader",(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinPart$$TryApplyCachedTextureToEffectMaterials
// il2cpp: bool CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* cachedMaterial, const MethodInfo* method);
// 0x4246520

bool_conflict
CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *cachedMaterial,
          MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_Texture_o *value;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_00;
  char cVar3;
  CustomSkins_BaseCustomSkinPart_o *__this_03;
  undefined1 in_stack_ffffffffffffff88 [15];
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057051d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_057051d0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cachedMaterial,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (((char)bVar1 != '\0') ||
     ((__this->fields)._renderers == (System_Collections_Generic_List_Renderer__o *)0x0)) {
    return 0;
  }
  if (cachedMaterial != (UnityEngine_Material_o *)0x0) {
    value = UnityEngine_Material__get_mainTexture(cachedMaterial,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar1 != '\0') &&
       (bVar1 = UnityEngine_Material__HasProperty(cachedMaterial,"_MainTex",(MethodInfo *)0x0),
       (char)bVar1 != '\0')) {
      value = UnityEngine_Material__GetTexture(cachedMaterial,"_MainTex",(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return 0;
    }
    __this_00 = (__this->fields)._renderers;
    if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
      x = (UnityEngine_Object_o *)0x0;
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      do {
        cVar3 = (char)x;
        do {
          do {
            do {
              __this_01.fields._version._3_1_ = cVar3;
              __this_01.fields._0_15_ = in_stack_ffffffffffffff88;
              __this_01.fields._current = (Il2CppObject *)pSVar4;
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
              if ((char)bVar1 == '\0') {
                __this_02.fields._version._3_1_ = cVar3;
                __this_02.fields._0_15_ = in_stack_ffffffffffffff88;
                __this_02.fields._current = (Il2CppObject *)pSVar4;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
                return (bool_conflict)CONCAT71((int7)((ulong)x >> 8),cVar3 != '\0');
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar1 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)local_48.fields._current,
                                 (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while ((char)bVar1 != '\0');
            if ((CustomSkins_BaseCustomSkinPart_o *)local_48.fields._current ==
                (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            x = (UnityEngine_Object_o *)
                UnityEngine_Renderer__get_material
                          ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
          } while ((char)bVar1 != '\0');
          __this_03 = (CustomSkins_BaseCustomSkinPart_o *)local_48.fields._current;
          pUVar2 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          bVar1 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
                            (__this_03,pUVar2,method_00);
        } while ((char)bVar1 == '\0');
        pUVar2 = UnityEngine_Renderer__get_material
                           ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = UnityEngine_Material__HasProperty(pUVar2,"_MainTex",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pUVar2 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Material__set_mainTexture(pUVar2,value,(MethodInfo *)0x0);
        }
        else {
          pUVar2 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Material__SetTexture(pUVar2,"_MainTex",value,(MethodInfo *)0x0);
        }
        x = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)x >> 8),1);
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)local_48.fields._current,1,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinPart$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_BaseCustomSkinPart__LoadSkin (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x423f460

System_Collections_IEnumerator_o *
CustomSkins_BaseCustomSkinPart__LoadSkin
          (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
    DAT_057051d1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)url;
    il2cpp_runtime_glue(__this_00 + 2,url);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsValidPart (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4246a60

bool_conflict
CustomSkins_BaseCustomSkinPart__IsValidPart
          (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  undefined8 in_RCX;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_057051d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051d2 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  x = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if ((__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
     ((__this_00->fields)._size == 0)) {
    bVar1 = 0;
  }
  else {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    do {
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = (Il2CppObject *)x;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        iVar3 = 7;
        bVar2 = 0;
        goto LAB_04246b5a;
      }
      pUVar6 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      x = pUVar6;
    } while ((char)bVar1 == '\0');
    bVar2 = 1;
    iVar3 = 6;
LAB_04246b5a:
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._list = pSVar4;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar3 == 6 & bVar2);
  }
  return bVar1;
}


// CustomSkins.BaseCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_BaseCustomSkinPart__DisableRenderers (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4246c10

void CustomSkins_BaseCustomSkinPart__DisableRenderers
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *x;
  
  if (DAT_057051d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051d3 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pUVar4 = (UnityEngine_Object_o *)0x0;
  if ((char)(__this->fields)._useTransparentMaterial == '\0') {
    __this_00 = (__this->fields)._renderers;
    if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
      while( true ) {
        x = pUVar4;
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        pUVar4 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,0,(MethodInfo *)0x0);
        }
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)x;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
      il2cpp_init_class();
    }
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
               (__this->klass->vtable)._6_SetMaterial.method);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_BaseCustomSkinPart__SetMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4246e10

void CustomSkins_BaseCustomSkinPart__SetMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *x;
  
  if (DAT_057051d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051d4 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pUVar4 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    while( true ) {
      x = pUVar4;
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)x;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') break;
      pUVar4 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x,material,(MethodInfo *)0x0);
      }
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._list = pSVar2;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__SetNewTexture (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4246fc0

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__SetNewTexture
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_List_Renderer__o *pSVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Renderer_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  float fVar9;
  float fVar10;
  float local_38;
  float fStack_34;
  
  if (DAT_057051d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051d5 = '\x01';
  }
  pSVar3 = (__this->fields)._renderers;
  if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
     ((pSVar3->fields)._size != 0)) {
    pUVar6 = (UnityEngine_Object_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pSVar3 = (__this->fields)._renderers;
      if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
         (pUVar7 = (UnityEngine_Renderer_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_Renderer_get_Item),
         pUVar7 != (UnityEngine_Renderer_o *)0x0)) {
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (UnityEngine_Material_o *)0x0;
        }
        pSVar3 = (__this->fields)._renderers;
        if (((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
            (pUVar7 = (UnityEngine_Renderer_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_Renderer_get_Item)
            , pUVar7 != (UnityEngine_Renderer_o *)0x0)) &&
           (pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0),
           pUVar8 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__set_mainTexture
                    (pUVar8,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          UVar1 = (__this->fields)._textureScale.fields;
          UVar2 = (__this->fields)._defaultTextureScale.fields;
          fVar9 = UVar1.x - UVar2.x;
          fVar10 = UVar1.y - UVar2.y;
          if (9.9999994e-11 <= fVar10 * fVar10 + fVar9 * fVar9) {
            pSVar3 = (__this->fields)._renderers;
            if (((pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pUVar7 = (UnityEngine_Renderer_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                     MethodInfo_Renderer_get_Item), pUVar7 == (UnityEngine_Renderer_o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0),
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto LAB_0424725e;
            UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar8,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._renderers;
            if (((pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pUVar7 = (UnityEngine_Renderer_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                     MethodInfo_Renderer_get_Item), pUVar7 == (UnityEngine_Renderer_o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0),
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto LAB_0424725e;
            UVar1 = (__this->fields)._textureScale.fields;
            local_38 = UVar4.fields.x;
            fStack_34 = UVar4.fields.y;
            UVar4.fields.y = fStack_34 * UVar1.y;
            UVar4.fields.x = local_38 * UVar1.x;
            UnityEngine_Material__set_mainTextureScale(pUVar8,UVar4,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._renderers;
            if (((pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pUVar7 = (UnityEngine_Renderer_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                     MethodInfo_Renderer_get_Item), pUVar7 == (UnityEngine_Renderer_o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0),
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto LAB_0424725e;
            UnityEngine_Material__set_mainTextureOffset
                      (pUVar8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          }
          pSVar3 = (__this->fields)._renderers;
          if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
             (pUVar7 = (UnityEngine_Renderer_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_Renderer_get_Item
                                 ), pUVar7 != (UnityEngine_Renderer_o *)0x0)) {
            pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                      (__this,pUVar8,(__this->klass->vtable)._6_SetMaterial.method);
            pSVar3 = (__this->fields)._renderers;
            if ((pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
               (pUVar7 = (UnityEngine_Renderer_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                    MethodInfo_Renderer_get_Item), pUVar7 != (UnityEngine_Renderer_o *)0x0)) {
              pUVar8 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0);
              return pUVar8;
            }
          }
        }
      }
LAB_0424725e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


// CustomSkins.BaseCustomSkinPart$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinPart__GetRendererId (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4247270

System_String_o *
CustomSkins_BaseCustomSkinPart__GetRendererId
          (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  return (__this->fields)._rendererId;
}


// CustomSkins.BaseCustomSkinPart$$ResetToDefault
// il2cpp: void CustomSkins_BaseCustomSkinPart__ResetToDefault (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4244cc0

void CustomSkins_BaseCustomSkinPart__ResetToDefault
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *value;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar5;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_057051d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051d6 = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._4_IsValidPart.methodPtr)
                    (__this,(__this->klass->vtable)._4_IsValidPart.method);
  if ((cVar1 != '\0') &&
     (__this_00 = (__this->fields)._renderers,
     __this_00 != (System_Collections_Generic_List_Renderer__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    pSVar3 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      x_00 = local_30;
      __this_01.fields._8_8_ = pSVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = (Il2CppObject *)x_00;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') break;
      pUVar5 = x_00;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_30 = pUVar5;
      if ((char)bVar2 != '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x_00,1,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Renderer__get_sharedMaterial
                      ((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pUVar5;
        if ((char)bVar2 != '\0') {
          value = UnityEngine_Renderer__get_sharedMaterial
                            ((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x_00,value,(MethodInfo *)0x0)
          ;
          local_30 = pUVar5;
        }
      }
    }
    __this_02.fields._8_8_ = pSVar4;
    __this_02.fields._list = pSVar3;
    __this_02.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  }
  return;
}


