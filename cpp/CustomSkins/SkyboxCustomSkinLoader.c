// Type: CustomSkins.SkyboxCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3___ctor (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42450a0

void CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3___ctor
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_IDisposable_Dispose (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4245390

void CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__System_IDisposable_Dispose
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (DAT_057051c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051c8 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o)in_stack_00000008,
             (MethodInfo_3181150 *)&(__this->fields).__7__wrap1);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$MoveNext
// il2cpp: bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__MoveNext (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x42453e0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__MoveNext
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *path;
  System_Object_array *pSVar3;
  Il2CppClass *url;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_03;
  CustomSkins_BaseCustomSkinPart_o *__this_04;
  UnityEngine_Coroutine_o *pUVar6;
  undefined8 uVar7;
  System_Collections_Generic_List_Enumerator_int__o *method_00;
  undefined1 auVar8 [16];
  undefined8 in_stack_ffffffffffffff88;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *pCVar9;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *pCVar10;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *pCVar11;
  CustomSkins_SkyboxCustomSkinLoader_o *__this_05;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  Il2CppObject *pIStack_38;
  
  if (DAT_057051c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_init_method_metadata(&TypeRef_SkyboxCustomSkinPartId);
    il2cpp_init_method_metadata(&"Skyboxes/EmptySkybox");
    DAT_057051c7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_05 = (__this->fields).__4__this;
  pCVar9 = __this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    if (__this_05 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      __this_01.fields._8_8_ = __this;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_01.fields._16_8_ = 0;
      pCVar11 = __this;
      bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        (__this_01,(MethodInfo_3181160 *)&(__this->fields).__7__wrap1);
      pCVar10 = __this;
      if ((char)bVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto joined_r0x04245793;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar5 = ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (path,"Skyboxes/EmptySkybox",1,MethodInfo_Material_InstantiateAsset_Material);
    **(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8) = pIVar5;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SkyboxCustomSkinLoader + 0xb8));
    handle = TypeRef_SkyboxCustomSkinPartId;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (__this_05 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_057051a0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
      il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32__ToList_Int32);
      DAT_057051a0 = '\x01';
    }
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
    source_00 = System_Linq_Enumerable__Cast<int>(source,MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
    __this_03 = System_Linq_Enumerable__ToList<int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           MethodInfo_List_1_System_Int32__ToList_Int32);
    if (__this_03 == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<int>__GetEnumerator
              (&SStack_60,(System_Collections_Generic_List_int__o *)__this_03,MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    pIStack_38 = SStack_60.fields._current;
    uStack_48 = SStack_60.fields._list._0_4_;
    uStack_44 = SStack_60.fields._list._4_4_;
    iStack_40 = SStack_60.fields._index;
    iStack_3c = SStack_60.fields._version;
    *(Il2CppObject **)&(__this->fields).__7__wrap1.fields._current = SStack_60.fields._current;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._list = SStack_60.fields._list._0_4_;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._list + 4) =
         SStack_60.fields._list._4_4_;
    (__this->fields).__7__wrap1.fields._index = SStack_60.fields._index;
    (__this->fields).__7__wrap1.fields._version = SStack_60.fields._version;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap1,0);
    (__this->fields).__1__state = -3;
  }
  pCVar10 = pCVar9;
  while (__this_00.fields._8_8_ = pCVar10,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
        __this_00.fields._16_8_ = __this_05,
        bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                          (__this_00,(MethodInfo_3181160 *)&(__this->fields).__7__wrap1),
        pCVar11 = pCVar10, (char)bVar4 != '\0') {
    uVar2 = (pCVar9->fields).__7__wrap1.fields._current;
    auVar8 = (*(__this_05->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                       (__this_05,(ulong)uVar2,
                        (__this_05->klass->vtable)._5_GetCustomSkinPart.method);
    __this_04 = auVar8._0_8_;
    pSVar3 = (pCVar9->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uint)pSVar3->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    url = (Il2CppClass *)pSVar3->m_Items[(int)uVar2];
    if ((url != (Il2CppClass *)0x0) && ((url->_1).image != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(url);
    }
    if (__this_04 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_04,(System_String_o *)url,auVar8._8_8_)
    ;
    if ((char)bVar4 == '\0') {
      if (DAT_057051d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
        DAT_057051d1 = '\x01';
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar5[1].klass = 0;
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar5[2].monitor = __this_04;
      il2cpp_runtime_glue(&pIVar5[2].monitor,__this_04);
      pIVar5[2].klass = url;
      il2cpp_runtime_glue(pIVar5 + 2,url);
      pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this_05,
                          (System_Collections_IEnumerator_o *)pIVar5,(MethodInfo *)0x0);
      (pCVar10->fields).__2__current = (Il2CppObject *)pUVar6;
      uVar7 = il2cpp_runtime_glue(&(pCVar10->fields).__2__current,pUVar6);
      (pCVar10->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
    }
  }
joined_r0x04245793:
  if (DAT_057051c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051c8 = '\x01';
  }
  method_00 = &(__this->fields).__7__wrap1;
  (pCVar10->fields).__1__state = -1;
  __this_02.fields._8_8_ = pCVar11;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_02.fields._16_8_ = __this_05;
  System_Collections_Generic_List_Enumerator<int>__Dispose
            (__this_02,(MethodInfo_3181150 *)method_00);
  (method_00->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).__7__wrap1.fields._index = 0;
  (__this->fields).__7__wrap1.fields._version = 0;
  *(undefined8 *)&(__this->fields).__7__wrap1.fields._current = 0;
  return 0;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$<>m__Finally1
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3____m__Finally1 (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4245940

void CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__<>m__Finally1
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_057051c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_057051c8 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o)in_stack_00000008,
             (MethodInfo_3181150 *)&(__this->fields).__7__wrap1);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4245980

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_Reset (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4245990

void CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__System_Collections_IEnumerator_Reset
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,
               MethodInfo *method)

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


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x42459d0

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader_<LoadSkinsFromRPC>d__3__System_Collections_IEnumerator_get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4244ff0

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051c2 == '\0') {
    il2cpp_init_method_metadata(&"skybox");
    DAT_057051c2 = '\x01';
  }
  return "skybox";
}


// CustomSkins.SkyboxCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_SkyboxCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4245020

System_Collections_IEnumerator_o *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  
  if (DAT_057051c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__3);
    DAT_057051c3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinsFromRPC_d__3);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_glue(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.SkyboxCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x42450c0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_c *pCVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o SStack_40;
  int32_t iStack_30;
  
  if (DAT_057051c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinPart);
    DAT_057051c4 = '\x01';
  }
  pCVar1 = (CustomSkins_BaseCustomSkinPart_c *)**(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8);
  if (DAT_057051c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinPartId);
    il2cpp_init_method_metadata(&"_");
    il2cpp_init_method_metadata(&"Tex");
    DAT_057051c5 = '\x01';
  }
  SStack_40.klass = TypeInfo_SkyboxCustomSkinPartId;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  iStack_30 = partId;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat("_",pSVar2,"Tex",(MethodInfo *)0x0);
  SStack_40.klass = (System_Enum_c *)CONCAT44(SStack_40.klass._4_4_,partId);
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
  str1 = System_Int32__ToString((int32_t)&SStack_40,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_SkyboxCustomSkinPart);
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,
             (System_Collections_Generic_List_Renderer__o *)0x0,pSVar3,2000000,
             (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffb0);
  __this_00[1].klass = pCVar1;
  il2cpp_runtime_glue(__this_00 + 1,pCVar1);
  __this_00[1].monitor = pSVar2;
  il2cpp_runtime_glue(&__this_00[1].monitor,pSVar2);
  return __this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$PartIdToTextureName
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4245230

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (DAT_057051c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinPartId);
    il2cpp_init_method_metadata(&"_");
    il2cpp_init_method_metadata(&"Tex");
    DAT_057051c5 = '\x01';
  }
  local_20.klass = TypeInfo_SkyboxCustomSkinPartId;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = partId;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("_",pSVar1,"Tex",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader___ctor (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4245320

void CustomSkins_SkyboxCustomSkinLoader___ctor
               (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051c6 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


