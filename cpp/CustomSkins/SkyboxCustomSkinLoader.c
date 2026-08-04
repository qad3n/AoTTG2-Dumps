// Type: CustomSkins.SkyboxCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3___ctor (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4092250

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3___ctor
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_IDisposable_Dispose (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092520

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_IDisposable_Dispose
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057ac421 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac421 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            ((System_Collections_Generic_List_Enumerator_int__o)in_stack_00000008,
             (MethodInfo_3215500 *)&(__this->fields).__7__wrap1);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$MoveNext
// il2cpp: bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__MoveNext (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092570

bool_conflict
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__MoveNext
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  CustomSkins_SkyboxCustomSkinLoader_o *__this_00;
  System_String_o *path;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Collections_Generic_List_Enumerator_int__o __this_03;
  System_Collections_Generic_List_Enumerator_int__o __this_04;
  System_Collections_Generic_List_Enumerator_int__o __this_05;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  Il2CppObject *pIVar5;
  System_Type_o *t;
  System_Collections_Generic_List_int__o *__this_06;
  CustomSkins_BaseCustomSkinPart_o *__this_07;
  UnityEngine_Coroutine_o *pUVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *pCVar10;
  System_Collections_Generic_List_Enumerator_int__o *method_00;
  Il2CppClass *unaff_R13;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *in_stack_ffffffffffffff98;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *pCVar13;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffac;
  Il2CppObject *in_stack_ffffffffffffffb0;
  
  if (g_data_057ac420 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeRef_SkyboxCustomSkinPartId);
    il2cpp_runtime_helper_023445d0(&"Skyboxes/EmptySkybox");
    g_data_057ac420 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  pCVar10 = __this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      __this_02.fields._index = in_stack_ffffffffffffffa0;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_02.fields._version = in_stack_ffffffffffffffa4;
      __this_02.fields._current = in_stack_ffffffffffffffa8;
      __this_02.fields._20_4_ = in_stack_ffffffffffffffac;
      bVar4 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        (__this_02,(MethodInfo_3215510 *)&(__this->fields).__7__wrap1);
      if ((char)bVar4 == '\0') {
label_04092899:
        method_00 = &(__this->fields).__7__wrap1;
        if (g_data_057ac421 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac421 = '\x01';
        }
        (pCVar10->fields).__1__state = -1;
        __this_03.fields._index = in_stack_ffffffffffffffa0;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
        __this_03.fields._version = in_stack_ffffffffffffffa4;
        __this_03.fields._current = in_stack_ffffffffffffffa8;
        __this_03.fields._20_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator_int___Dispose(__this_03,(MethodInfo_3215500 *)method_00);
        (method_00->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
        (__this->fields).__7__wrap1.fields._index = 0;
        (__this->fields).__7__wrap1.fields._version = 0;
        *(undefined8 *)&(__this->fields).__7__wrap1.fields._current = 0;
        return 0;
      }
      goto label_04092916;
    }
label_0409274e:
    pCVar13 = __this;
    do {
      in_stack_ffffffffffffff98 = pCVar13;
      __this_01.fields._index = in_stack_ffffffffffffffa0;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_01.fields._version = in_stack_ffffffffffffffa4;
      __this_01.fields._current = in_stack_ffffffffffffffa8;
      __this_01.fields._20_4_ = in_stack_ffffffffffffffac;
      bVar4 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        (__this_01,(MethodInfo_3215510 *)&(__this->fields).__7__wrap1);
      if ((char)bVar4 == '\0') goto label_04092899;
      uVar2 = (pCVar10->fields).__7__wrap1.fields._current;
      auVar12 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                          (__this_00,(ulong)uVar2,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
      __this_07 = auVar12._0_8_;
      pSVar3 = (pCVar10->fields).data;
      if (pSVar3 == (System_Object_array *)0x0) {
label_040928f5:
        il2cpp_runtime_helper_022b2c90();
label_040928fa:
        il2cpp_runtime_helper_022b2ca0();
label_040928ff:
        il2cpp_runtime_helper_022b2fd0(unaff_R13);
        goto label_04092907;
      }
      if ((uint)pSVar3->max_length <= uVar2) goto label_040928fa;
      unaff_R13 = (Il2CppClass *)pSVar3->m_Items[(int)uVar2];
      if ((unaff_R13 != (Il2CppClass *)0x0) && ((unaff_R13->_1).image != g_data_057b9c00)) goto label_040928ff;
      pCVar10 = in_stack_ffffffffffffff98;
      if (__this_07 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_040928f5;
      }
      pCVar13 = in_stack_ffffffffffffff98;
      bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_07,(System_String_o *)unaff_R13,auVar12._8_8_);
    } while ((char)bVar4 != '\0');
    if (g_data_057ac42a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
      g_data_057ac42a = '\x01';
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar5[1].klass = 0;
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar5[2].monitor = __this_07;
      il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor,__this_07);
      pIVar5[2].klass = unaff_R13;
      il2cpp_runtime_helper_022b4080(pIVar5 + 2,unaff_R13);
      pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)pIVar5,
                          (MethodInfo *)0x0);
      (in_stack_ffffffffffffff98->fields).__2__current = (Il2CppObject *)pUVar6;
      uVar7 = il2cpp_runtime_helper_022b4080(&(in_stack_ffffffffffffff98->fields).__2__current,pUVar6);
      (in_stack_ffffffffffffff98->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Skyboxes/EmptySkybox",1,MethodInfo_Material_InstantiateAsset_Material);
    **(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8) = pIVar5;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SkyboxCustomSkinLoader + 0xb8));
    handle = TypeRef_SkyboxCustomSkinPartId;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    t = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
label_04092907:
      il2cpp_runtime_helper_022b2c90();
      in_stack_ffffffffffffff98 = pCVar10;
    }
    else {
      __this_06 = CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
                            ((CustomSkins_BaseCustomSkinLoader_o *)__this_00,t,(MethodInfo *)0x0);
      in_stack_ffffffffffffff98 = __this;
      if (__this_06 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_06,
                   MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
        *(Il2CppObject **)&(__this->fields).__7__wrap1.fields._current = in_stack_ffffffffffffffb0;
        *(undefined4 *)&(__this->fields).__7__wrap1.fields._list = in_stack_ffffffffffffffa0;
        *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._list + 4) = in_stack_ffffffffffffffa4;
        (__this->fields).__7__wrap1.fields._index = in_stack_ffffffffffffffa8;
        (__this->fields).__7__wrap1.fields._version = in_stack_ffffffffffffffac;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap1,0);
        (__this->fields).__1__state = -3;
        goto label_0409274e;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  __this = in_stack_ffffffffffffff98;
label_04092916:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  uVar7 = auVar11._0_8_;
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(uVar7);
    lVar9 = *plVar8;
    __cxa_end_catch();
    if (lVar9 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234970(__this);
    uVar7 = il2cpp_runtime_helper_022fefe0(lVar9);
    if (lVar9 != 0) {
      iVar1 = (__this->fields).__1__state;
      if ((iVar1 == 1) || (iVar1 == -3)) {
        if (g_data_057ac421 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac421 = '\x01';
        }
        (__this->fields).__1__state = -1;
        __this_04.fields._index = in_stack_ffffffffffffffa0;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)__this;
        __this_04.fields._version = in_stack_ffffffffffffffa4;
        __this_04.fields._current = in_stack_ffffffffffffffa8;
        __this_04.fields._20_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator_int___Dispose
                  (__this_04,(MethodInfo_3215500 *)&(__this->fields).__7__wrap1);
      }
      lVar9 = il2cpp_runtime_helper_022fefe0(lVar9);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057ac421 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac421 = '\x01';
      }
      *(undefined4 *)(lVar9 + 0x10) = 0xffffffff;
      __this_05.fields._list._4_4_ = in_stack_ffffffffffffffa4;
      __this_05.fields._list._0_4_ = in_stack_ffffffffffffffa0;
      __this_05.fields._index = in_stack_ffffffffffffffa8;
      __this_05.fields._version = in_stack_ffffffffffffffac;
      __this_05.fields._16_8_ = in_stack_ffffffffffffffb0;
      System_Collections_Generic_List_Enumerator_int___Dispose(__this_05,(MethodInfo_3215500 *)(lVar9 + 0x30))
      ;
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar7);
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$<>m__Finally1
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3____m__Finally1 (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092a10

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3____m__Finally1
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057ac421 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac421 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            ((System_Collections_Generic_List_Enumerator_int__o)in_stack_00000008,
             (MethodInfo_3215500 *)&(__this->fields).__7__wrap1);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092a50

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_Reset (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092a60

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_Reset
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

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


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o* __this, const MethodInfo* method);
// 0x4092aa0

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3__System_Collections_IEnumerator_get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x40921a0

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac41b == '\0') {
    il2cpp_runtime_helper_023445d0(&"skybox");
    g_data_057ac41b = '\x01';
  }
  return "skybox";
}


// CustomSkins.SkyboxCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_SkyboxCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x40921d0

System_Collections_IEnumerator_o *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac41c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__3);
    g_data_057ac41c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinsFromRPC_d__3);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomSkins.SkyboxCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4092270

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_c *pCVar1;
  System_String_o *pSVar2;
  System_String_o *rendererId;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o SStack_40;
  int32_t iStack_30;
  
  if (g_data_057ac41d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinPart);
    g_data_057ac41d = '\x01';
  }
  pCVar1 = (CustomSkins_BaseCustomSkinPart_c *)**(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8);
  if (g_data_057ac41e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinPartId);
    il2cpp_runtime_helper_023445d0(&"_");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057ac41e = '\x01';
  }
  SStack_40.klass = TypeInfo_SkyboxCustomSkinPartId;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  iStack_30 = partId;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150("_",pSVar2,"Tex",(MethodInfo *)0x0);
  rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                         ((CustomSkins_BaseCustomSkinLoader_o *)__this,partId,(MethodInfo *)0x0);
  __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SkyboxCustomSkinPart);
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,2000000,
             (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffb0);
  __this_00[1].klass = pCVar1;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pCVar1);
  __this_00[1].monitor = pSVar2;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar2);
  return __this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$PartIdToTextureName
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x40923c0

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (g_data_057ac41e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinPartId);
    il2cpp_runtime_helper_023445d0(&"_");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057ac41e = '\x01';
  }
  local_20.klass = TypeInfo_SkyboxCustomSkinPartId;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = partId;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7150("_",pSVar1,"Tex",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader___ctor (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x40924b0

void CustomSkins_SkyboxCustomSkinLoader___ctor
               (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac41f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac41f = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


