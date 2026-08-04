// Type: CustomSkins.MaterialCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/MaterialCache.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// --------------------------------

// CustomSkins.MaterialCache$$Init
// il2cpp: void CustomSkins_MaterialCache__Init (const MethodInfo* method);
// 0x4095430

void CustomSkins_MaterialCache__Init(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Material_o *__this;
  System_String_o *str2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac43b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"TransparentMaterial");
    il2cpp_runtime_helper_023445d0(&"Map/Materials");
    g_data_057ac43b = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str2 = (System_String_o *)
         ApplicationManagers_ResourceManager__InstantiateAsset_object_
                   ("Map/Materials","TransparentMaterial",0,MethodInfo_Material_InstantiateAsset_Material);
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_MaterialCache + 0xb8);
  *(System_String_o **)(lVar2 + 0x10) = str2;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
  __this = *(UnityEngine_Material_o **)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10);
  if (__this == (UnityEngine_Material_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac43c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
      g_data_057ac43c = '\x01';
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    else {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    System_String__Concat_3af7150((System_String_o *)__this_00,",",str2,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Material__set_color(__this,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$Clear
// il2cpp: void CustomSkins_MaterialCache__Clear (const MethodInfo* method);
// 0x4095520

void CustomSkins_MaterialCache__Clear(MethodInfo *method)

{
  int iVar1;
  System_String_o *in_RSI;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ac43c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43c = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac440 == '\0') {
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac440 = '\x01';
  }
  System_String__Concat_3af7150((System_String_o *)__this,",",in_RSI,(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$ContainsKey
// il2cpp: bool CustomSkins_MaterialCache__ContainsKey (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x40933a0

bool_conflict
CustomSkins_MaterialCache__ContainsKey(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppRGCTXData *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Texture_o *value;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar7;
  long *plVar8;
  MethodInfo *method_00;
  CustomSkins_BaseCustomSkinPart_o *__this_05;
  undefined1 auVar9 [12];
  undefined1 in_stack_ffffffffffffff58 [15];
  char in_stack_ffffffffffffff67;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o SStack_78;
  Il2CppRGCTXData *pIStack_60;
  
  if (g_data_057ac43d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43d = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  if (g_data_057ac440 == '\0') {
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac440 = '\x01';
  }
  pSVar5 = ",";
  pSVar4 = System_String__Concat_3af7150(rendererId,",",url,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this,(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac43e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43e = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    __this_00 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (g_data_057ac440 == '\0') {
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac440 = '\x01';
  }
  pSVar4 = ",";
  pSVar5 = System_String__Concat_3af7150(rendererId,",",pSVar5,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppRGCTXData *)0x0) {
    pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                        (Il2CppObject *)pSVar5,MethodInfo_Material_get_Item);
    return (bool_conflict)pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_60 = __this_00;
  if (g_data_057ac429 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac429 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') || (rendererId[1].klass == (System_String_c *)0x0)) {
    return 0;
  }
  if (pSVar4 != (System_String_o *)0x0) {
    value = UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar3 != '\0') &&
       (bVar3 = UnityEngine_Material__HasProperty_4dcb5b0
                          ((UnityEngine_Material_o *)pSVar4,"_MainTex",(MethodInfo *)0x0),
       (char)bVar3 != '\0')) {
      value = UnityEngine_Material__GetTexture
                        ((UnityEngine_Material_o *)pSVar4,"_MainTex",(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    if (rendererId[1].klass != (System_String_c *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_78,(System_Collections_Generic_List_object__o *)rendererId[1].klass,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
      x = (UnityEngine_Object_o *)0x0;
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_78.fields._list;
      do {
        in_stack_ffffffffffffff67 = (char)x;
        do {
          do {
            do {
              __this_01.fields._version._3_1_ = in_stack_ffffffffffffff67;
              __this_01.fields._0_15_ = in_stack_ffffffffffffff58;
              __this_01.fields._current = (Il2CppObject *)pSVar10;
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
              if ((char)bVar3 == '\0') {
                __this_02.fields._version._3_1_ = in_stack_ffffffffffffff67;
                __this_02.fields._0_15_ = in_stack_ffffffffffffff58;
                __this_02.fields._current = (Il2CppObject *)pSVar10;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
                goto label_0409383e;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar3 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)SStack_78.fields._current,(UnityEngine_Object_o *)0x0
                                 ,(MethodInfo *)0x0);
            } while ((char)bVar3 != '\0');
            if ((CustomSkins_BaseCustomSkinPart_o *)SStack_78.fields._current ==
                (CustomSkins_BaseCustomSkinPart_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0409385c;
            }
            x = (UnityEngine_Object_o *)
                UnityEngine_Renderer__get_material
                          ((UnityEngine_Renderer_o *)SStack_78.fields._current,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while ((char)bVar3 != '\0');
          __this_05 = (CustomSkins_BaseCustomSkinPart_o *)SStack_78.fields._current;
          pUVar7 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)SStack_78.fields._current,(MethodInfo *)0x0);
          bVar3 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_05,pUVar7,method_00);
        } while ((char)bVar3 == '\0');
        pUVar7 = UnityEngine_Renderer__get_material
                           ((UnityEngine_Renderer_o *)SStack_78.fields._current,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_04093861;
        bVar3 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar7,"_MainTex",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pUVar7 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)SStack_78.fields._current,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_0409386b;
          UnityEngine_Material__set_mainTexture(pUVar7,value,(MethodInfo *)0x0);
        }
        else {
          pUVar7 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)SStack_78.fields._current,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_04093866;
          UnityEngine_Material__SetTexture(pUVar7,"_MainTex",value,(MethodInfo *)0x0);
        }
        x = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)x >> 8),1);
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)SStack_78.fields._current,1,(MethodInfo *)0x0);
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
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version._3_1_ = in_stack_ffffffffffffff67;
    __this_03.fields._0_15_ = in_stack_ffffffffffffff58;
    __this_03.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    x = (UnityEngine_Object_o *)0x0;
    if (lVar2 == 0) {
label_0409383e:
      return (bool_conflict)CONCAT71((int7)((ulong)x >> 8),in_stack_ffffffffffffff67 != '\0');
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version._3_1_ = in_stack_ffffffffffffff67;
  __this_04.fields._0_15_ = in_stack_ffffffffffffff58;
  __this_04.fields._current = (Il2CppObject *)pSVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomSkins.MaterialCache$$GetMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_MaterialCache__GetMaterial (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x4093490

UnityEngine_Material_o *
CustomSkins_MaterialCache__GetMaterial(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  Il2CppRGCTXData *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_String_o *key;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Texture_o *value;
  UnityEngine_Object_o *x;
  long *plVar4;
  MethodInfo *method_00;
  ulong uVar5;
  System_String_o *x_00;
  CustomSkins_BaseCustomSkinPart_o *__this_04;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff70 [15];
  char in_stack_ffffffffffffff7f;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057ac43e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43e = '\x01';
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) != 0) goto label_040934bb;
label_0409354d:
    il2cpp_runtime_helper_02337ed0();
    __this = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) goto label_0409354d;
label_040934bb:
    __this = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (g_data_057ac440 == '\0') {
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac440 = '\x01';
  }
  x_00 = ",";
  key = System_String__Concat_3af7150(rendererId,",",url,(MethodInfo *)0x0);
  if (__this != (Il2CppRGCTXData *)0x0) {
    pUVar3 = (UnityEngine_Material_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)key,
                        MethodInfo_Material_get_Item);
    return pUVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = __this;
  if (g_data_057ac429 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac429 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = 0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (rendererId[1].klass != (System_String_c *)0x0) {
      if (x_00 != (System_String_o *)0x0) {
        value = UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)x_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar2 != '\0') &&
           (bVar2 = UnityEngine_Material__HasProperty_4dcb5b0
                              ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0),
           (char)bVar2 != '\0')) {
          value = UnityEngine_Material__GetTexture
                            ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar5 = 0;
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') goto label_04093846;
        if (rendererId[1].klass != (System_String_c *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&SStack_60,(System_Collections_Generic_List_object__o *)rendererId[1].klass,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator)
          ;
          x = (UnityEngine_Object_o *)0x0;
          pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_60.fields._list;
          do {
            in_stack_ffffffffffffff7f = (char)x;
            do {
              do {
                do {
                  __this_00.fields._version._3_1_ = in_stack_ffffffffffffff7f;
                  __this_00.fields._0_15_ = in_stack_ffffffffffffff70;
                  __this_00.fields._current = (Il2CppObject *)pSVar7;
                  bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
                  if ((char)bVar2 == '\0') {
                    __this_01.fields._version._3_1_ = in_stack_ffffffffffffff7f;
                    __this_01.fields._0_15_ = in_stack_ffffffffffffff70;
                    __this_01.fields._current = (Il2CppObject *)pSVar7;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
                    goto label_0409383e;
                  }
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar2 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)SStack_60.fields._current,
                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                } while ((char)bVar2 != '\0');
                if ((CustomSkins_BaseCustomSkinPart_o *)SStack_60.fields._current ==
                    (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_0409385c;
                }
                x = (UnityEngine_Object_o *)
                    UnityEngine_Renderer__get_material
                              ((UnityEngine_Renderer_o *)SStack_60.fields._current,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              } while ((char)bVar2 != '\0');
              __this_04 = (CustomSkins_BaseCustomSkinPart_o *)SStack_60.fields._current;
              pUVar3 = UnityEngine_Renderer__get_material
                                 ((UnityEngine_Renderer_o *)SStack_60.fields._current,(MethodInfo *)0x0);
              bVar2 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_04,pUVar3,method_00);
            } while ((char)bVar2 == '\0');
            pUVar3 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)SStack_60.fields._current,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04093861;
            bVar2 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar3,"_MainTex",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              pUVar3 = UnityEngine_Renderer__get_material
                                 ((UnityEngine_Renderer_o *)SStack_60.fields._current,(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0409386b;
              UnityEngine_Material__set_mainTexture(pUVar3,value,(MethodInfo *)0x0);
            }
            else {
              pUVar3 = UnityEngine_Renderer__get_material
                                 ((UnityEngine_Renderer_o *)SStack_60.fields._current,(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04093866;
              UnityEngine_Material__SetTexture(pUVar3,"_MainTex",value,(MethodInfo *)0x0);
            }
            x = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)x >> 8),1);
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)SStack_60.fields._current,1,(MethodInfo *)0x0);
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
      auVar6 = il2cpp_runtime_helper_022b2c90();
      if (auVar6._8_4_ == 1) {
        plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
        lVar1 = *plVar4;
        __cxa_end_catch();
        __this_02.fields._version._3_1_ = in_stack_ffffffffffffff7f;
        __this_02.fields._0_15_ = in_stack_ffffffffffffff70;
        __this_02.fields._current = (Il2CppObject *)pSVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        x = (UnityEngine_Object_o *)0x0;
        if (lVar1 == 0) {
label_0409383e:
          uVar5 = CONCAT71((int7)((ulong)x >> 8),in_stack_ffffffffffffff7f != '\0');
          goto label_04093846;
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_03.fields._version._3_1_ = in_stack_ffffffffffffff7f;
      __this_03.fields._0_15_ = in_stack_ffffffffffffff70;
      __this_03.fields._current = (Il2CppObject *)pSVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar6._0_8_);
    }
    uVar5 = 0;
  }
label_04093846:
  return (UnityEngine_Material_o *)(uVar5 & 0xffffffff);
}


// CustomSkins.MaterialCache$$SetMaterial
// il2cpp: void CustomSkins_MaterialCache__SetMaterial (System_String_o* rendererId, System_String_o* url, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x40946c0

void CustomSkins_MaterialCache__SetMaterial
               (System_String_o *rendererId,System_String_o *url,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *key;
  
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
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) goto label_04094769;
label_040946ee:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (*(int *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) < iVar2) {
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
    key = System_String__Concat_3af7150(rendererId,",",url,(MethodInfo *)0x0);
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if ((char)bVar3 == '\0') {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)key,(Il2CppObject *)material,MethodInfo_Void_Add);
          return;
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)material,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
label_040948ca:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomSkins.MaterialCache$$GetId
// il2cpp: System_String_o* CustomSkins_MaterialCache__GetId (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x40955b0

System_String_o *
CustomSkins_MaterialCache__GetId(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ac440 == '\0') {
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac440 = '\x01';
  }
  pSVar1 = System_String__Concat_3af7150(rendererId,",",url,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.MaterialCache$$.ctor
// il2cpp: void CustomSkins_MaterialCache___ctor (CustomSkins_MaterialCache_o* __this, const MethodInfo* method);
// 0x4095600

void CustomSkins_MaterialCache___ctor(CustomSkins_MaterialCache_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$.cctor
// il2cpp: void CustomSkins_MaterialCache___cctor (const MethodInfo* method);
// 0x4095610

void CustomSkins_MaterialCache___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ac441 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac441 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MaterialCache + 0xb8),__this);
  *(undefined4 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) = 200;
  return;
}


