// Type: CustomSkins.BaseCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs
// --------------------------------

// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12___ctor (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4093aa0

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12___ctor
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_IDisposable_Dispose (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x40942e0

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_IDisposable_Dispose
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$MoveNext
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__MoveNext (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x40942f0

bool_conflict
CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__MoveNext
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  undefined1 uVar2;
  int iVar3;
  CustomSkins_BaseCustomSkinPart_o *pCVar4;
  CustomSkins_BaseCustomSkinLoader_o *owner;
  Utility_CoroutineWithData_o *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  UnityEngine_Material_o *material;
  Il2CppObject *__this_00;
  undefined8 uVar10;
  System_String_Fields SVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  undefined4 uVar14;
  MethodInfo *in_RCX;
  undefined1 extraout_DL;
  Il2CppObject *value;
  System_String_o *str2;
  long lVar15;
  
  if (g_data_057ac430 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CoroutineWithData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"http://");
    il2cpp_runtime_helper_023445d0(&"https://");
    g_data_057ac430 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  pCVar4 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    if (pCVar4 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto label_0409461d;
    method = (pCVar4->klass->vtable)._4_IsValidPart.method;
    cVar7 = (*(pCVar4->klass->vtable)._4_IsValidPart.methodPtr)(pCVar4,method);
    if (cVar7 == '\0') {
      return 0;
    }
    pUVar5 = (__this->fields)._cwd_5__2;
    if (pUVar5 == (Utility_CoroutineWithData_o *)0x0) goto label_0409461d;
    method = (MethodInfo *)(pUVar5->fields).Result;
    if ((method == (MethodInfo *)0x0) ||
       (SVar11 = TypeInfo_Texture2D, (System_String_Fields)method->methodPointer == TypeInfo_Texture2D)) {
      material = (UnityEngine_Material_o *)
                 (*(pCVar4->klass->vtable)._7_SetNewTexture.methodPtr)
                           (pCVar4,method,(pCVar4->klass->vtable)._7_SetNewTexture.method);
      pSVar13 = (pCVar4->fields)._rendererId;
      pSVar12 = (__this->fields).url;
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomSkins_MaterialCache__SetMaterial(pSVar13,pSVar12,material,in_RCX);
      return 0;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar13 = (__this->fields).url;
    if (pSVar13 != (System_String_o *)0x0) {
      ppSVar1 = &(__this->fields).url;
      method = (MethodInfo *)System_String__Trim(pSVar13,(MethodInfo *)0x0);
      *ppSVar1 = (System_String_o *)method;
      il2cpp_runtime_helper_022b4080(ppSVar1,method);
      if (*ppSVar1 != (System_String_o *)0x0) {
        method = "http://";
        bVar8 = System_String__Contains(*ppSVar1,(System_String_o *)"http://",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*ppSVar1 == (System_String_o *)0x0) goto label_0409461d;
          in_RCX = (MethodInfo *)0x0;
          method = (MethodInfo *)
                   System_String__Replace_3af9030
                             (*ppSVar1,(System_String_o *)"http://","https://",(MethodInfo *)0x0);
          *ppSVar1 = (System_String_o *)method;
          il2cpp_runtime_helper_022b4080(ppSVar1,method);
        }
        if (pCVar4 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          method = (pCVar4->klass->vtable)._4_IsValidPart.method;
          cVar7 = (*(pCVar4->klass->vtable)._4_IsValidPart.methodPtr)(pCVar4);
          if (cVar7 == '\0') {
            return 0;
          }
          pSVar13 = *ppSVar1;
          if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar8 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar13,method);
            cVar7 = (char)bVar8;
          }
          else {
            bVar8 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar13,method);
            cVar7 = (char)bVar8;
          }
          if (cVar7 == '\0') {
            return 0;
          }
          lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
          if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0xd0), lVar15 != 0)) {
            uVar2 = *(undefined1 *)(lVar15 + 0x11);
            owner = (pCVar4->fields)._loader;
            pSVar13 = *ppSVar1;
            iVar9 = (pCVar4->fields)._maxSize;
            if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ac446 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_DownloadTexture_d__9);
              g_data_057ac446 = '\x01';
            }
            __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DownloadTexture_d__9);
            method = (MethodInfo *)0x0;
            System_Object___ctor(__this_00,(MethodInfo *)0x0);
            *(undefined4 *)&__this_00[1].klass = 0;
            if (__this_00 != (Il2CppObject *)0x0) {
              __this_00[2].monitor = pSVar13;
              il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar13);
              *(undefined1 *)&__this_00[2].klass = uVar2;
              *(int32_t *)&__this_00[3].klass = iVar9;
              method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CoroutineWithData);
              in_RCX = (MethodInfo *)0x0;
              Utility_CoroutineWithData___ctor
                        ((Utility_CoroutineWithData_o *)method,(UnityEngine_MonoBehaviour_o *)owner,
                         (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
              (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)method;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._cwd_5__2,method);
              pUVar5 = (__this->fields)._cwd_5__2;
              if (pUVar5 != (Utility_CoroutineWithData_o *)0x0) {
                (__this->fields).__2__current = (Il2CppObject *)(pUVar5->fields)._Coroutine_k__BackingField;
                uVar10 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
                (__this->fields).__1__state = 1;
                return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
              }
            }
          }
        }
      }
    }
label_0409461d:
    SVar11 = (System_String_Fields)il2cpp_runtime_helper_022b2c90();
  }
  uVar14 = SUB84(in_RCX,0);
  il2cpp_runtime_helper_022b2fd0(method);
  if (g_data_057ac446 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownloadTexture_d__9);
    g_data_057ac446 = '\x01';
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DownloadTexture_d__9);
  str2 = (System_String_o *)0x0;
  pSVar13 = pSVar12;
  System_Object___ctor((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
  (pSVar12->fields)._stringLength = 0;
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar12[1].fields = SVar11;
    il2cpp_runtime_helper_022b4080(&pSVar12[1].fields,SVar11);
    *(undefined1 *)&pSVar12[1].monitor = extraout_DL;
    *(undefined4 *)&pSVar12[2].klass = uVar14;
    return (bool_conflict)pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac43f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43f = '\x01';
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) != 0) goto label_040946ee;
label_04094769:
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) goto label_04094769;
label_040946ee:
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar9 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar6,MethodInfo_Int32_get_Count);
    if (*(int *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) < iVar9) {
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040948ca;
      System_Collections_Generic_Dictionary_object__object___Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),MethodInfo_Void_Clear);
    }
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    pSVar13 = System_String__Concat_3af7150(pSVar13,",",str2,(MethodInfo *)0x0);
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),(Il2CppObject *)pSVar13,MethodInfo_Boolean_ContainsKey);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if ((char)bVar8 == '\0') {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar6,(Il2CppObject *)pSVar13,value,MethodInfo_Void_Add);
          return extraout_EAX_00;
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar6,(Il2CppObject *)pSVar13,value,MethodInfo_Void_set_Item);
        return extraout_EAX;
      }
    }
  }
label_040948ca:
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)*(undefined8 *)(lVar15 + 0x18);
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x40948d0

Il2CppObject *
CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_Reset (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x40948e0

void CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_Reset
               (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomSkins.BaseCustomSkinPart.<LoadSkin>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_get_Current (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o* __this, const MethodInfo* method);
// 0x4094920

Il2CppObject *
CustomSkins_BaseCustomSkinPart__LoadSkin_d__12__System_Collections_IEnumerator_get_Current
          (CustomSkins_BaseCustomSkinPart__LoadSkin_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.BaseCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinPart___ctor (CustomSkins_BaseCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, bool useTransparentMaterial, const MethodInfo* method);
// 0x408e9b0

void CustomSkins_BaseCustomSkinPart___ctor
               (CustomSkins_BaseCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,bool_conflict useTransparentMaterial,
               MethodInfo *method)

{
  System_Nullable_Vector2__o __this_00;
  undefined8 local_40;
  float local_38;
  UnityEngine_Vector2_Fields UVar1;
  
  local_38 = textureScale.fields.value.fields.y;
  local_40 = textureScale.fields._0_8_;
  if (g_data_057ac426 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_get_Value);
    g_data_057ac426 = '\x01';
  }
  (__this->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._loader = loader;
  il2cpp_runtime_helper_022b4080(&__this->fields,loader);
  (__this->fields)._renderers = renderers;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._renderers,renderers);
  (__this->fields)._rendererId = rendererId;
  __this_00.fields.value.fields.y = (float)il2cpp_runtime_helper_022b4080(&(__this->fields)._rendererId,rendererId);
  (__this->fields)._maxSize = maxSize;
  if ((char)textureScale.fields.hasValue == '\0') {
    (__this->fields)._textureScale.fields = (__this->fields)._defaultTextureScale.fields;
  }
  else {
    __this_00.fields._0_8_ = &local_40;
    UVar1 = (UnityEngine_Vector2_Fields)System_Nullable_Vector2___get_Value(__this_00,MethodInfo_Vector2_get_Value);
    (__this->fields)._textureScale.fields = UVar1;
  }
  *(undefined1 *)&(__this->fields)._useTransparentMaterial = (undefined1)useTransparentMaterial;
  return;
}


// CustomSkins.BaseCustomSkinPart$$LoadCache
// il2cpp: bool CustomSkins_BaseCustomSkinPart__LoadCache (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x408ec70

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
  Il2CppObject *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  undefined7 uVar7;
  Il2CppClass *pIVar8;
  long *plVar9;
  Il2CppObject *pIVar10;
  
  pIVar8 = (Il2CppClass *)url;
  plVar9 = (long *)__this;
  if (g_data_057ac427 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    plVar9 = &TypeInfo_TextureDownloader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac427 = '\x01';
  }
  if (url != (System_String_o *)0x0) {
    pSVar5 = System_String__ToLower(url,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      (pSVar5,(System_String_o *)**(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8),(MethodInfo *)0x0);
    pCVar1 = __this->klass;
    uVar7 = (undefined7)((ulong)pSVar5 >> 8);
    if ((char)bVar3 == '\0') {
      pMVar6 = (pCVar1->vtable)._4_IsValidPart.method;
      cVar2 = (*(pCVar1->vtable)._4_IsValidPart.methodPtr)(__this);
      bVar3 = (bool_conflict)CONCAT71(uVar7,1);
      if (cVar2 != '\0') {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = CustomSkins_TextureDownloader__ValidTextureURL(url,pMVar6);
        if ((char)bVar4 != '\0') {
          pSVar5 = (__this->fields)._rendererId;
          pMVar6 = extraout_RDX;
          if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
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
              il2cpp_runtime_helper_02337ed0();
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
      (*(pCVar1->vtable)._5_DisableRenderers.methodPtr)(__this,(pCVar1->vtable)._5_DisableRenderers.method);
      bVar3 = (bool_conflict)CONCAT71(uVar7,1);
    }
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac42a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
    g_data_057ac42a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
  pIVar10 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = plVar9;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,plVar9);
    __this_00[2].klass = pIVar8;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar8);
    return (bool_conflict)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)pIVar10[1].monitor;
}


// CustomSkins.BaseCustomSkinPart$$IsCharacterEffectMaterial
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x40939d0

bool_conflict
CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  UnityEngine_Object_o *pUVar2;
  System_String_o *a;
  undefined4 uVar3;
  UnityEngine_Material_o *__this_00;
  
  if (g_data_057ac428 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    g_data_057ac428 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = 0;
  __this_00 = material;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 0;
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return 0;
    }
    uVar3 = 0;
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    __this_00 = material;
    if (pUVar2 != (UnityEngine_Object_o *)0x0) {
      a = UnityEngine_Object__get_name(pUVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,"Custom/CharacterEffectShader",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar3;
  return extraout_EAX;
}


// CustomSkins.BaseCustomSkinPart$$TryApplyCachedTextureToEffectMaterials
// il2cpp: bool CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* cachedMaterial, const MethodInfo* method);
// 0x4093580

bool_conflict
CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *cachedMaterial,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_Texture_o *value;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar3;
  long *plVar4;
  MethodInfo *method_00;
  CustomSkins_BaseCustomSkinPart_o *__this_05;
  undefined1 auVar5 [12];
  undefined1 in_stack_ffffffffffffff88 [15];
  char in_stack_ffffffffffffff97;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ac429 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac429 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cachedMaterial,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 != '\0') ||
     ((__this->fields)._renderers == (System_Collections_Generic_List_Renderer__o *)0x0)) {
    return 0;
  }
  if (cachedMaterial != (UnityEngine_Material_o *)0x0) {
    value = UnityEngine_Material__get_mainTexture(cachedMaterial,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') &&
       (bVar2 = UnityEngine_Material__HasProperty_4dcb5b0(cachedMaterial,"_MainTex",(MethodInfo *)0x0),
       (char)bVar2 != '\0')) {
      value = UnityEngine_Material__GetTexture(cachedMaterial,"_MainTex",(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return 0;
    }
    __this_00 = (__this->fields)._renderers;
    if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
      x = (UnityEngine_Object_o *)0x0;
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      do {
        in_stack_ffffffffffffff97 = (char)x;
        do {
          do {
            do {
              __this_01.fields._version._3_1_ = in_stack_ffffffffffffff97;
              __this_01.fields._0_15_ = in_stack_ffffffffffffff88;
              __this_01.fields._current = (Il2CppObject *)pSVar6;
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
              if ((char)bVar2 == '\0') {
                __this_02.fields._version._3_1_ = in_stack_ffffffffffffff97;
                __this_02.fields._0_15_ = in_stack_ffffffffffffff88;
                __this_02.fields._current = (Il2CppObject *)pSVar6;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
                goto label_0409383e;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)local_48.fields._current,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
            } while ((char)bVar2 != '\0');
            if ((CustomSkins_BaseCustomSkinPart_o *)local_48.fields._current ==
                (CustomSkins_BaseCustomSkinPart_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0409385c;
            }
            x = (UnityEngine_Object_o *)
                UnityEngine_Renderer__get_material
                          ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while ((char)bVar2 != '\0');
          __this_05 = (CustomSkins_BaseCustomSkinPart_o *)local_48.fields._current;
          pUVar3 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          bVar2 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_05,pUVar3,method_00);
        } while ((char)bVar2 == '\0');
        pUVar3 = UnityEngine_Renderer__get_material
                           ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04093861;
        bVar2 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar3,"_MainTex",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pUVar3 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0409386b;
          UnityEngine_Material__set_mainTexture(pUVar3,value,(MethodInfo *)0x0);
        }
        else {
          pUVar3 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)local_48.fields._current,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04093866;
          UnityEngine_Material__SetTexture(pUVar3,"_MainTex",value,(MethodInfo *)0x0);
        }
        x = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)x >> 8),1);
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)local_48.fields._current,1,(MethodInfo *)0x0);
      } while( true );
    }
  }
label_0409385c:
  il2cpp_runtime_helper_022b2c90();
label_04093861:
  il2cpp_runtime_helper_022b2c90();
label_04093866:
  il2cpp_runtime_helper_022b2c90();
label_0409386b:
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._version._3_1_ = in_stack_ffffffffffffff97;
    __this_03.fields._0_15_ = in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    x = (UnityEngine_Object_o *)0x0;
    if (lVar1 == 0) {
label_0409383e:
      return (bool_conflict)CONCAT71((int7)((ulong)x >> 8),in_stack_ffffffffffffff97 != '\0');
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version._3_1_ = in_stack_ffffffffffffff97;
  __this_04.fields._0_15_ = in_stack_ffffffffffffff88;
  __this_04.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomSkins.BaseCustomSkinPart$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_BaseCustomSkinPart__LoadSkin (CustomSkins_BaseCustomSkinPart_o* __this, System_String_o* url, const MethodInfo* method);
// 0x408edf0

System_Collections_IEnumerator_o *
CustomSkins_BaseCustomSkinPart__LoadSkin
          (CustomSkins_BaseCustomSkinPart_o *__this,System_String_o *url,MethodInfo *method)

{
  Il2CppObject *__this_00;
  Il2CppObject *pIVar1;
  
  if (g_data_057ac42a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
    g_data_057ac42a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
  pIVar1 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)url;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,url);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  return pIVar1[1].monitor;
}


// CustomSkins.BaseCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_BaseCustomSkinPart__IsValidPart (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4093ac0

bool_conflict
CustomSkins_BaseCustomSkinPart__IsValidPart(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

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
  
  if (g_data_057ac42b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42b = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  x = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if ((__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) || ((__this_00->fields)._size == 0)) {
    bVar1 = 0;
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = (Il2CppObject *)x;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        iVar3 = 7;
        bVar2 = 0;
        goto label_04093bba;
      }
      pUVar6 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      x = pUVar6;
    } while ((char)bVar1 == '\0');
    bVar2 = 1;
    iVar3 = 6;
label_04093bba:
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._list = pSVar4;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar3 == 6 & bVar2);
  }
  return bVar1;
}


// CustomSkins.BaseCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_BaseCustomSkinPart__DisableRenderers (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4093c70

void CustomSkins_BaseCustomSkinPart__DisableRenderers
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Object_o *x;
  
  if (g_data_057ac42c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42c = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pUVar7 = (UnityEngine_Object_o *)0x0;
  if ((char)(__this->fields)._useTransparentMaterial == '\0') {
    __this_00 = (__this->fields)._renderers;
    if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
      while (x = pUVar7, __this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
            __this_01.fields._current = (Il2CppObject *)x,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0')
      {
        pUVar7 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
            auVar4 = il2cpp_runtime_helper_022b2c90();
            if (auVar4._8_4_ == 1) {
              plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
              lVar1 = *plVar3;
              __cxa_end_catch();
              __this_03.fields._8_8_ = pIVar6;
              __this_03.fields._list = pSVar5;
              __this_03.fields._current = (Il2CppObject *)pUVar7;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
              if (lVar1 == 0) {
                return;
              }
              il2cpp_runtime_helper_022fefe0(lVar1);
            }
            __this_04.fields._8_8_ = pIVar6;
            __this_04.fields._list = pSVar5;
            __this_04.fields._current = (Il2CppObject *)pUVar7;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
            _Unwind_Resume(auVar4._0_8_);
          }
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,0,(MethodInfo *)0x0);
        }
      }
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = pSVar5;
      __this_02.fields._current = (Il2CppObject *)x;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    }
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
               (__this->klass->vtable)._6_SetMaterial.method);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_BaseCustomSkinPart__SetMaterial (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4093e70

void CustomSkins_BaseCustomSkinPart__SetMaterial
               (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Object_o *x;
  
  if (g_data_057ac42d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42d = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pUVar7 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    while (x = pUVar7, __this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
          __this_01.fields._current = (Il2CppObject *)x,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar2 != '\0') {
      pUVar7 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
          auVar4 = il2cpp_runtime_helper_022b2c90();
          if (auVar4._8_4_ == 1) {
            plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
            lVar1 = *plVar3;
            __cxa_end_catch();
            __this_03.fields._8_8_ = pIVar6;
            __this_03.fields._list = pSVar5;
            __this_03.fields._current = (Il2CppObject *)pUVar7;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
            if (lVar1 == 0) {
              return;
            }
            il2cpp_runtime_helper_022fefe0(lVar1);
          }
          __this_04.fields._8_8_ = pIVar6;
          __this_04.fields._list = pSVar5;
          __this_04.fields._current = (Il2CppObject *)pUVar7;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
          _Unwind_Resume(auVar4._0_8_);
        }
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x,material,(MethodInfo *)0x0);
      }
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  }
  return;
}


// CustomSkins.BaseCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_BaseCustomSkinPart__SetNewTexture (CustomSkins_BaseCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4094020

UnityEngine_Material_o *
CustomSkins_BaseCustomSkinPart__SetNewTexture
          (CustomSkins_BaseCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Renderer_o *pUVar6;
  System_Collections_Generic_List_Renderer__o *pSVar7;
  UnityEngine_Material_o *pUVar8;
  System_Collections_Generic_List_Renderer__o *pSVar9;
  float fVar10;
  float fVar11;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057ac42e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42e = '\x01';
  }
  pSVar9 = (__this->fields)._renderers;
  if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) && ((pSVar9->fields)._size != 0)) {
    pUVar5 = (UnityEngine_Object_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar9 = (__this->fields)._renderers;
      if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
         (pUVar6 = (UnityEngine_Renderer_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
         pUVar6 != (UnityEngine_Renderer_o *)0x0)) {
        pUVar5 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(pUVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return (UnityEngine_Material_o *)0x0;
        }
        pSVar9 = (__this->fields)._renderers;
        if (((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
            (pSVar7 = (System_Collections_Generic_List_Renderer__o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
            pSVar7 != (System_Collections_Generic_List_Renderer__o *)0x0)) &&
           (pUVar8 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pSVar7,(MethodInfo *)0x0),
           pSVar9 = pSVar7, pUVar8 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__set_mainTexture(pUVar8,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          UVar1 = (__this->fields)._textureScale.fields;
          UVar2 = (__this->fields)._defaultTextureScale.fields;
          fVar10 = UVar1.x - UVar2.x;
          fVar11 = UVar1.y - UVar2.y;
          if (9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10) {
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar7 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar7 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar7,(MethodInfo *)0x0), pSVar9 = pSVar7,
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar8,(MethodInfo *)0x0);
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar7 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar7 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar7,(MethodInfo *)0x0), pSVar9 = pSVar7,
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UVar1 = (__this->fields)._textureScale.fields;
            fStack_38 = UVar3.fields.x;
            fStack_34 = UVar3.fields.y;
            UVar3.fields.y = fStack_34 * UVar1.y;
            UVar3.fields.x = fStack_38 * UVar1.x;
            UnityEngine_Material__set_mainTextureScale(pUVar8,UVar3,(MethodInfo *)0x0);
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar7 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar7 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar8 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar7,(MethodInfo *)0x0), pSVar9 = pSVar7,
               pUVar8 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UnityEngine_Material__set_mainTextureOffset(pUVar8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          }
          pSVar9 = (__this->fields)._renderers;
          if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
             (pUVar6 = (UnityEngine_Renderer_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
             pUVar6 != (UnityEngine_Renderer_o *)0x0)) {
            pUVar8 = UnityEngine_Renderer__get_material(pUVar6,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                      (__this,pUVar8,(__this->klass->vtable)._6_SetMaterial.method);
            pSVar9 = (__this->fields)._renderers;
            if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
               (pUVar6 = (UnityEngine_Renderer_o *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
               pUVar6 != (UnityEngine_Renderer_o *)0x0)) {
              pUVar8 = UnityEngine_Renderer__get_material(pUVar6,(MethodInfo *)0x0);
              return pUVar8;
            }
          }
        }
      }
label_040942be:
      il2cpp_runtime_helper_022b2c90();
      return (UnityEngine_Material_o *)(pSVar9->fields)._syncRoot;
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


// CustomSkins.BaseCustomSkinPart$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinPart__GetRendererId (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x40942d0

System_String_o *
CustomSkins_BaseCustomSkinPart__GetRendererId(CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  return (__this->fields)._rendererId;
}


// CustomSkins.BaseCustomSkinPart$$ResetToDefault
// il2cpp: void CustomSkins_BaseCustomSkinPart__ResetToDefault (CustomSkins_BaseCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4091e70

void CustomSkins_BaseCustomSkinPart__ResetToDefault
               (CustomSkins_BaseCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *value;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar8;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (g_data_057ac42f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42f = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_IsValidPart.methodPtr)
                    (__this,(__this->klass->vtable)._4_IsValidPart.method);
  if ((cVar2 != '\0') &&
     (__this_00 = (__this->fields)._renderers, __this_00 != (System_Collections_Generic_List_Renderer__o *)0x0
     )) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    pSVar6 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while (x_00 = local_30, __this_01.fields._8_8_ = pSVar7, __this_01.fields._list = pSVar6,
          __this_01.fields._current = (Il2CppObject *)x_00,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0') {
      pUVar8 = x_00;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_30 = pUVar8;
      if ((char)bVar3 != '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
          auVar5 = il2cpp_runtime_helper_022b2c90();
          if (auVar5._8_4_ == 1) {
            plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
            lVar1 = *plVar4;
            __cxa_end_catch();
            __this_03.fields._8_8_ = pSVar7;
            __this_03.fields._list = pSVar6;
            __this_03.fields._current = (Il2CppObject *)pUVar8;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
            if (lVar1 == 0) {
              return;
            }
            il2cpp_runtime_helper_022fefe0(lVar1);
          }
          __this_04.fields._8_8_ = pSVar7;
          __this_04.fields._list = pSVar6;
          __this_04.fields._current = (Il2CppObject *)pUVar8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
          _Unwind_Resume(auVar5._0_8_);
        }
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x_00,1,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pUVar8;
        if ((char)bVar3 != '\0') {
          value = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x_00,value,(MethodInfo *)0x0);
          local_30 = pUVar8;
        }
      }
    }
    __this_02.fields._8_8_ = pSVar7;
    __this_02.fields._list = pSVar6;
    __this_02.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  }
  return;
}


