// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypography.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypography$$Resolve
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve (System_String_o* family, int32_t weight, System_String_o* requiredText, const MethodInfo* method);
// 0x3ad90f0

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
          (System_String_o *family,int32_t weight,System_String_o *requiredText,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *str1;
  System_String_o *path;
  TMPro_TMP_FontAsset_o *pTVar3;
  System_String_array *assetNames;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *local_30;
  
  pMVar4 = (MethodInfo *)requiredText;
  if (DAT_05701372 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&"Invalid AoTTG UI font asset ");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Missing AoTTG UI font asset ");
    il2cpp_init_method_metadata(&"UI/Fonts/");
    il2cpp_init_method_metadata(&".");
    DAT_05701372 = '\x01';
    pMVar4 = extraout_RDX;
  }
  local_30 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar4 = extraout_RDX_00;
  }
  str1 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar4);
  path = System_String__Concat("UI/Fonts/",str1,(MethodInfo *)0x0);
  pMVar4 = (MethodInfo *)&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset;
  pTVar3 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
      il2cpp_init_class();
    }
    assetNames = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey
                           (str1,method_01);
    Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks(pTVar3,assetNames,method_00);
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender
                      (pTVar3,requiredText,&local_30,pMVar4);
    if ((char)bVar2 != '\0') {
      return pTVar3;
    }
    System_String__Concat("Invalid AoTTG UI font asset ",str1,": ",local_30,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  else {
    System_String__Concat("Missing AoTTG UI font asset ",str1,".",(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pTVar3 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
  return pTVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Key (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x3ad92c0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Key
          (System_String_o *family,int32_t weight,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05701373 == '\0') {
    il2cpp_init_method_metadata(&"header SDF");
    il2cpp_init_method_metadata(&"subtext");
    il2cpp_init_method_metadata(&"menutext");
    il2cpp_init_method_metadata(&"Barlow-SemiBold SDF");
    il2cpp_init_method_metadata(&"IntensaFuente SDF");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"Barlow-Regular SDF");
    il2cpp_init_method_metadata(&"Barlow-Bold SDF");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"jek5");
    il2cpp_init_method_metadata(&"barlow");
    il2cpp_init_method_metadata(&"Barlow-Medium SDF");
    il2cpp_init_method_metadata(&"JEK5 SDF");
    DAT_05701373 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(family,(MethodInfo *)0x0);
  pSVar2 = "barlow";
  if ((char)bVar1 == '\0') {
    if ((family == (System_String_o *)0x0) ||
       (pSVar2 = System_String__Trim(family,(MethodInfo *)0x0), pSVar2 == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  }
  bVar1 = System_String__op_Equality(pSVar2,"subtext",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(pSVar2,"text",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto LAB_03ad93fe;
    puVar3 = &"barlow";
  }
  else {
    puVar3 = &"jek5";
  }
  pSVar2 = (System_String_o *)*puVar3;
LAB_03ad93fe:
  bVar1 = System_String__op_Equality(pSVar2,"header",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(pSVar2,"menutext",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(pSVar2,"jek5",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (weight < 0x1c3) {
          puVar3 = &"Barlow-Regular SDF";
        }
        else if (weight < 0x227) {
          puVar3 = &"Barlow-Medium SDF";
        }
        else if (weight < 0x28b) {
          puVar3 = &"Barlow-SemiBold SDF";
        }
        else {
          puVar3 = &"Barlow-Bold SDF";
        }
      }
      else {
        puVar3 = &"JEK5 SDF";
      }
    }
    else {
      puVar3 = &"IntensaFuente SDF";
    }
  }
  else {
    puVar3 = &"header SDF";
  }
  return (System_String_o *)*puVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesFor
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x3ad9ba0

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor
          (System_String_o *family,int32_t weight,MethodInfo *method)

{
  System_String_o *key;
  System_String_array *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)weight;
  if (DAT_05701374 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    DAT_05701374 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  key = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,method);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey(key,method_00);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesForKey
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey (System_String_o* key, const MethodInfo* method);
// 0x3ad94c0

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey
          (System_String_o *key,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  
  if (DAT_05701375 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    DAT_05701375 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05701376 == '\0') {
    il2cpp_init_method_metadata(&"header SDF");
    il2cpp_init_method_metadata(&"IntensaFuente SDF");
    DAT_05701376 = '\x01';
  }
  bVar3 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
    bVar2 = true;
    if ((char)bVar3 == '\0') goto LAB_03ad9547;
  }
  bVar2 = false;
LAB_03ad9547:
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_init_class();
  }
  puVar4 = *(undefined8 **)(TypeInfo_GisketchTypography + 0xb8) + 1;
  if (bVar2) {
    puVar4 = *(undefined8 **)(TypeInfo_GisketchTypography + 0xb8);
  }
  return (System_String_array *)*puVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$IsDisplayKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey (System_String_o* key, const MethodInfo* method);
// 0x3ad9c00

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05701376 == '\0') {
    il2cpp_init_method_metadata(&"header SDF");
    il2cpp_init_method_metadata(&"IntensaFuente SDF");
    DAT_05701376 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ValidateFallbacks
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks (TMPro_TMP_FontAsset_o* font, System_String_array* assetNames, const MethodInfo* method);
// 0x3ad95c0

void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks
               (TMPro_TMP_FontAsset_o *font,System_String_array *assetNames,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  TMPro_TMP_FontAsset_array *pTVar3;
  System_Collections_Generic_List_TMP_FontAsset__o *current;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_TMP_FontAsset__o *expected;
  ulong uVar6;
  System_String_o *pSVar7;
  UnityEngine_Object_o *x;
  TMPro_TMP_FontAsset_o *x_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  ulong uVar8;
  
  if (DAT_05701377 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_TMPro_TMP_FontAsset);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_TMP_FontAsset);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&" has stale fallback order. Regenerate typography assets.");
    il2cpp_init_method_metadata(&"Missing AoTTG UI fallback font asset ");
    il2cpp_init_method_metadata(&"AoTTG UI font asset ");
    il2cpp_init_method_metadata(&"UI/Fonts/");
    il2cpp_init_method_metadata(&".");
    DAT_05701377 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((assetNames != (System_String_array *)0x0) && ((char)bVar5 == '\0')) &&
     (assetNames->max_length != 0)) {
    expected = (System_Collections_Generic_List_TMP_FontAsset__o *)il2cpp_runtime_glue(TypeInfo_List_TMP_FontAsset);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)expected,(int32_t)assetNames->max_length
               ,MethodInfo_List_1_TMPro_TMP_FontAsset);
    method_00 = extraout_RDX;
    if (0 < (int)assetNames->max_length) {
      uVar6 = assetNames->max_length & 0xffffffff;
      uVar8 = 0;
      if (expected == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
        do {
          if (uVar6 <= uVar8) {
LAB_03ad99e0:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar7 = System_String__Concat("UI/Fonts/",assetNames->m_Items[uVar8],(MethodInfo *)0x0);
          x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>(pSVar7,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)font,(MethodInfo *)0x0);
            method_00 = extraout_RDX_00;
            if ((char)bVar5 != '\0') goto LAB_03ad99e5;
          }
          else {
            if ((uint)assetNames->max_length <= uVar8) goto LAB_03ad99e0;
            System_String__Concat
                      ("Missing AoTTG UI fallback font asset ",assetNames->m_Items[uVar8],".",(MethodInfo *)0x0);
            method_00 = extraout_RDX_01;
            if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_02;
            }
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)assetNames->max_length;
          uVar6 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
      else {
        do {
          if (uVar6 <= uVar8) goto LAB_03ad99e0;
          pSVar7 = System_String__Concat("UI/Fonts/",assetNames->m_Items[uVar8],(MethodInfo *)0x0);
          x_00 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>(pSVar7,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)font,
                               (MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            method_00 = extraout_RDX_06;
            if ((char)bVar5 != '\0') {
              piVar1 = &(expected->fields)._version;
              *piVar1 = *piVar1 + 1;
              pTVar3 = (expected->fields)._items;
              if (pTVar3 == (TMPro_TMP_FontAsset_array *)0x0) goto LAB_03ad99e5;
              uVar2 = (expected->fields)._size;
              if (uVar2 < (uint)pTVar3->max_length) {
                (expected->fields)._size = uVar2 + 1;
                pTVar3->m_Items[(int)uVar2] = x_00;
                il2cpp_runtime_glue(pTVar3->m_Items + (int)uVar2,x_00);
                method_00 = extraout_RDX_07;
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)expected,
                           (Il2CppObject *)x_00,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                method_00 = extraout_RDX_03;
              }
            }
          }
          else {
            if ((uint)assetNames->max_length <= uVar8) goto LAB_03ad99e0;
            System_String__Concat
                      ("Missing AoTTG UI fallback font asset ",assetNames->m_Items[uVar8],".",(MethodInfo *)0x0);
            method_00 = extraout_RDX_04;
            if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_05;
            }
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)assetNames->max_length;
          uVar6 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
    }
    if (expected == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
LAB_03ad99e5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((expected->fields)._size != 0) {
      if (font == (TMPro_TMP_FontAsset_o *)0x0) goto LAB_03ad99e5;
      current = (font->fields).fallbackFontAssets;
      if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_08;
      }
      bVar5 = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch
                        (current,expected,method_00);
      if ((char)bVar5 == '\0') {
        pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)font,(MethodInfo *)0x0);
        System_String__Concat("AoTTG UI font asset ",pSVar7," has stale fallback order. Regenerate typography assets.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
          il2cpp_init_class();
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbacksMatch
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch (System_Collections_Generic_List_TMP_FontAsset__o* current, System_Collections_Generic_List_TMP_FontAsset__o* expected, const MethodInfo* method);
// 0x3ad9c70

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch
          (System_Collections_Generic_List_TMP_FontAsset__o *current,
          System_Collections_Generic_List_TMP_FontAsset__o *expected,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  int iVar2;
  
  if (DAT_05701378 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_get_Item);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701378 = '\x01';
  }
  if (current != (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    if (expected == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (current->fields)._size;
    if (iVar2 == (expected->fields)._size) {
      if (iVar2 < 1) {
        return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
      iVar2 = 0;
      while( true ) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)current,iVar2,MethodInfo_TMP_FontAsset_get_Item);
        y = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)expected,iVar2,MethodInfo_TMP_FontAsset_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') break;
        iVar2 = iVar2 + 1;
        if ((expected->fields)._size <= iVar2) {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$CanRender
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender (TMPro_TMP_FontAsset_o* font, System_String_o* requiredText, System_String_o** error, const MethodInfo* method);
// 0x3ad99f0

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender
          (TMPro_TMP_FontAsset_o *font,System_String_o *requiredText,System_String_o **error,
          MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this;
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *text;
  undefined8 uVar3;
  MethodInfo *method_00;
  System_UInt32_array *local_30;
  
  if (DAT_05701379 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"required glyphs are missing");
    il2cpp_init_method_metadata(&"_FaceColor");
    il2cpp_init_method_metadata(&"material is missing");
    il2cpp_init_method_metadata(&"material is missing _FaceColor");
    il2cpp_init_method_metadata(&"font is null");
    DAT_05701379 = '\x01';
  }
  local_30 = (System_UInt32_array *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (font == (TMPro_TMP_FontAsset_o *)0x0) {
LAB_03ad9b8c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    x = (UnityEngine_Object_o *)(font->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this = (font->fields).material;
      if (__this == (UnityEngine_Material_o *)0x0) goto LAB_03ad9b8c;
      method_00 = "_FaceColor";
      bVar1 = UnityEngine_Material__HasProperty
                        (__this,(System_String_o *)"_FaceColor",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        puVar2 = &"material is missing _FaceColor";
      }
      else {
        if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
          il2cpp_init_class();
        }
        text = Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
                         (requiredText,method_00);
        bVar1 = TMPro_TMP_FontAsset__HasCharacters(font,text,&local_30,1,0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          *error = (System_String_o *)0x0;
          uVar3 = il2cpp_runtime_glue(error,0);
          return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
        }
        puVar2 = &"required glyphs are missing";
      }
    }
    else {
      puVar2 = &"material is missing";
    }
  }
  else {
    puVar2 = &"font is null";
  }
  *error = (System_String_o *)*puVar2;
  il2cpp_runtime_glue(error,*puVar2);
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$RequiredCharacters
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters (System_String_o* requiredText, const MethodInfo* method);
// 0x3ad9d50

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
          (System_String_o *requiredText,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  System_Text_StringBuilder_o *__this;
  System_Collections_Generic_HashSet_char__o *__this_00;
  System_String_o *pSVar3;
  int iVar4;
  
  if (DAT_0570137a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Char);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_char);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"Aa0");
    DAT_0570137a = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(requiredText,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return "Aa0";
  }
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this,"Aa0",(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_HashSet_char__o *)il2cpp_runtime_glue(TypeInfo_HashSet_char);
  System_Collections_Generic_HashSet<char>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)"Aa0",MethodInfo_HashSet_1_System_Char);
  if (requiredText != (System_String_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) {
      if (0 < (requiredText->fields)._stringLength) {
        iVar4 = 0;
        do {
          uVar1 = System_String__get_Chars(requiredText,iVar4,(MethodInfo *)0x0);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = System_Char__IsControl(uVar1,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') goto LAB_03ad9fb0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (requiredText->fields)._stringLength);
      }
    }
    else {
      iVar4 = (requiredText->fields)._stringLength;
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            uVar1 = System_String__get_Chars(requiredText,iVar4,(MethodInfo *)0x0);
            if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = System_Char__IsControl(uVar1,(MethodInfo *)0x0);
            if (((char)bVar2 == '\0') &&
               (bVar2 = System_Collections_Generic_HashSet<char>__Add(__this_00,uVar1,MethodInfo_Boolean_Add),
               (char)bVar2 != '\0')) goto LAB_03ad9fb0;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (requiredText->fields)._stringLength);
        }
      }
      else if (0 < iVar4) {
        iVar4 = 0;
        do {
          uVar1 = System_String__get_Chars(requiredText,iVar4,(MethodInfo *)0x0);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = System_Char__IsControl(uVar1,(MethodInfo *)0x0);
          if (((char)bVar2 == '\0') &&
             (bVar2 = System_Collections_Generic_HashSet<char>__Add(__this_00,uVar1,MethodInfo_Boolean_Add),
             (char)bVar2 != '\0')) {
            System_Text_StringBuilder__Append(__this,uVar1,(MethodInfo *)0x0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (requiredText->fields)._stringLength);
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
LAB_03ad9fb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportError
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError (System_String_o* message, const MethodInfo* method);
// 0x3ad94b0

void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError
               (System_String_o *message,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportWarning
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning (System_String_o* message, const MethodInfo* method);
// 0x3ad9c60

void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning
               (System_String_o *message,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor (const MethodInfo* method);
// 0x3ad9fc0

void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_0570137b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSansArabic-Bold SDF");
    il2cpp_init_method_metadata(&"ZCOOLKuaiLe-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_init_method_metadata(&"NotoSans-Bold SDF");
    il2cpp_init_method_metadata(&"NotoSansCJK-Bold SDF");
    il2cpp_init_method_metadata(&"Symbola SDF");
    il2cpp_init_method_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSansThai-Bold SDF");
    il2cpp_init_method_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSans-Regular SDF");
    il2cpp_init_method_metadata(&"DoHyeon-Regular SDF");
    il2cpp_init_method_metadata(&"NotoSansTC-Regular SDF");
    il2cpp_init_method_metadata(&"DelaGothicOne-Regular SDF");
    DAT_0570137b = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "NotoSans-Regular SDF";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "NotoSansSC-Regular SDF";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "NotoSansTC-Regular SDF";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "NotoSansJP-Regular SDF";
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = "NotoSansKR-Regular SDF";
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = "NotoSansThai-Regular SDF";
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                  il2cpp_runtime_glue(lVar2 + 0x50);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) = "Symbola SDF";
                    il2cpp_runtime_glue(lVar2 + 0x58);
                    **(long **)(TypeInfo_GisketchTypography + 0xb8) = lVar2;
                    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchTypography + 0xb8),lVar2);
                    lVar2 = il2cpp_glue_02274930(TypeInfo_string,9);
                    if (lVar2 == 0) goto LAB_03ada486;
                    if (*(int *)(lVar2 + 0x18) != 0) {
                      *(undefined8 *)(lVar2 + 0x20) = "DelaGothicOne-Regular SDF";
                      il2cpp_runtime_glue(lVar2 + 0x20);
                      if (1 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x28) = "ZCOOLKuaiLe-Regular SDF";
                        il2cpp_runtime_glue(lVar2 + 0x28);
                        if (2 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x30) = "DoHyeon-Regular SDF";
                          il2cpp_runtime_glue(lVar2 + 0x30);
                          if (3 < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x38) = "NotoSansTC-Regular SDF";
                            il2cpp_runtime_glue(lVar2 + 0x38);
                            if (4 < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x40) = "NotoSansCJK-Bold SDF";
                              il2cpp_runtime_glue(lVar2 + 0x40);
                              if (5 < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x48) = "NotoSansThai-Bold SDF";
                                il2cpp_runtime_glue(lVar2 + 0x48);
                                if (6 < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x50) = "NotoSansArabic-Bold SDF";
                                  il2cpp_runtime_glue(lVar2 + 0x50);
                                  if (7 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0x58) = "NotoSans-Bold SDF";
                                    il2cpp_runtime_glue(lVar2 + 0x58);
                                    if (8 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0x60) = "Symbola SDF";
                                      il2cpp_runtime_glue(lVar2 + 0x60);
                                      lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                      *(long *)(lVar1 + 8) = lVar2;
                                      il2cpp_runtime_glue(lVar1 + 8,lVar2);
                                      lVar2 = il2cpp_glue_02274930(TypeInfo_string,8);
                                      if (lVar2 == 0) goto LAB_03ada486;
                                      if (*(int *)(lVar2 + 0x18) != 0) {
                                        *(undefined8 *)(lVar2 + 0x20) = "NotoSans-Regular SDF";
                                        il2cpp_runtime_glue(lVar2 + 0x20);
                                        if (1 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0x28) = "NotoSansSC-Regular SDF";
                                          il2cpp_runtime_glue(lVar2 + 0x28);
                                          if (2 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0x30) = "NotoSansTC-Regular SDF";
                                            il2cpp_runtime_glue(lVar2 + 0x30);
                                            if (3 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0x38) = "NotoSansJP-Regular SDF";
                                              il2cpp_runtime_glue(lVar2 + 0x38);
                                              if (4 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0x40) = "NotoSansKR-Regular SDF";
                                                il2cpp_runtime_glue(lVar2 + 0x40);
                                                if (5 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0x48) = "NotoSansThai-Regular SDF";
                                                  il2cpp_runtime_glue(lVar2 + 0x48);
                                                  if (6 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                    il2cpp_runtime_glue(lVar2 + 0x50);
                                                    if (7 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x58) = "Symbola SDF";
                                                      il2cpp_runtime_glue(lVar2 + 0x58);
                                                      lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                                      *(long *)(lVar1 + 0x10) = lVar2;
                                                      il2cpp_runtime_glue(lVar1 + 0x10,lVar2);
                                                      return;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ada486:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


