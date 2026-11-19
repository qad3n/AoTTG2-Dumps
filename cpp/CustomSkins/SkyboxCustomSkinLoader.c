// Type: CustomSkins.SkyboxCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/SkyboxCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5961e90

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x5962180

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07545928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    Il2CppMethodInitialized_07545928 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            (&(__this->fields).__7__wrap1,
             (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext
// il2cpp: bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x59621d0
// eh: try 0x596225f..0x5962572 -> pad 0x5962582 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59625aa..0x59625af -> pad 0x59625c5 cleanup
// eh: try 0x59625c8..0x59625d2 -> pad 0x59625da catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5962399: nop dword ptr [rax]
// asm:   0x5962572: jmp 0x5962592
// asm:   0x5962574: jmp 0x5962592
// asm:   0x5962576: jmp 0x5962592
// asm:   0x5962578: jmp 0x5962592
// asm:   0x596257a: jmp 0x5962592
// asm:   0x596257c: jmp 0x5962592
// asm:   0x596257e: jmp 0x5962592
// asm:   0x5962580: jmp 0x5962592
// asm:   0x5962582: jmp 0x5962592
// asm:   0x5962584: jmp 0x5962592
// asm:   0x5962586: jmp 0x5962592
// asm:   0x5962588: jmp 0x5962592
// asm:   0x596258a: jmp 0x5962592
// asm:   0x596258c: jmp 0x5962592
// asm:   0x596258e: jmp 0x5962592
// asm:   0x5962590: jmp 0x5962592
// asm:   0x5962592: mov rbx, rax
// asm:   0x5962595: cmp edx, 1
// asm:   0x5962598: jne 0x59625c8
// asm:   0x596259a: mov rdi, rbx
// asm:   0x596259d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59625a2: mov rbx, qword ptr [rax]
// asm:   0x59625a5: mov qword ptr [rsp + 8], rbx
// asm:   0x59625aa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59625af: test rbx, rbx
// asm:   0x59625b2: je 0x596253d
// asm:   0x59625b4: mov rdi, qword ptr [rsp]
// asm:   0x59625b8: call 0x2fd3d90  ; il2cpp_runtime_helper_02fd3d90()
// asm:   0x59625bd: mov rdi, rbx
// asm:   0x59625c0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59625c5: mov rbx, rax
// asm:   0x59625c8: lea rdi, [rsp + 8]
// asm:   0x59625cd: call 0x2fd3a50  ; il2cpp_runtime_helper_02fd3a50()
// asm:   0x59625d2: mov rdi, rbx
// asm:   0x59625d5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59625da: mov rdi, rax
// asm:   0x59625dd: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  CustomSkins_SkyboxCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  System_String_o *url;
  Il2CppType *handle;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *pCVar4;
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o **ppCVar5;
  bool bVar6;
  UnityEngine_Material_o *pUVar7;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  CustomSkins_BaseCustomSkinPart_o *__this_02;
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_03;
  UnityEngine_Coroutine_o *pUVar8;
  Il2CppType **method_00;
  undefined1 auVar9 [16];
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *pCStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  System_Collections_Generic_List_T__o *pSStack_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  Il2CppObject *pIStack_38;
  
  method_00 = (Il2CppType **)__this;
  pCStack_78 = __this;
  if (Il2CppMethodInitialized_07545927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    method_00 = &TypeRef_CustomSkins_SkyboxCustomSkinPartId;
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomSkins_SkyboxCustomSkinPartId);
    Il2CppMethodInitialized_07545927 = '\x01';
  }
  puStack_68 = (undefined1 *)&pCStack_78;
  uStack_70 = 0;
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
    ppCVar5 = &pCStack_78;
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      bVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        (&(__this->fields).__7__wrap1,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (bVar6) {
        ThrowNullReferenceException();
      }
      goto label_059624ed;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    puStack_68 = (undefined1 *)&pCStack_78;
    pUVar7 = CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial((MethodInfo *)method_00);
    TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial = pUVar7;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial);
    handle = TypeRef_CustomSkins_SkyboxCustomSkinPartId;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07545910 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
      Il2CppMethodInitialized_07545910 = '\x01';
    }
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
    source_00 = System_Linq_Enumerable__Cast_int_
                          (source,(MethodInfo_34E07A0 *)MethodInfo_System_Linq_Enumerable_Cast_int);
    __this_01 = System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_int___GetEnumerator
              (&SStack_60,(System_Collections_Generic_List_int__o *)__this_01,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    pIStack_38 = SStack_60.fields._current;
    pSStack_48 = SStack_60.fields._list;
    iStack_40 = SStack_60.fields._index;
    iStack_3c = SStack_60.fields._version;
    *(Il2CppObject **)&(pCStack_78->fields).__7__wrap1.fields._current = SStack_60.fields._current;
    (pCStack_78->fields).__7__wrap1.fields._list = SStack_60.fields._list;
    (pCStack_78->fields).__7__wrap1.fields._index = SStack_60.fields._index;
    (pCStack_78->fields).__7__wrap1.fields._version = SStack_60.fields._version;
    Il2CppCodeGenWriteBarrier((void **)&(pCStack_78->fields).__7__wrap1);
    (pCStack_78->fields).__1__state = -3;
    ppCVar5 = (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o **)puStack_68;
  }
  while (puStack_68 = (undefined1 *)ppCVar5,
        bVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          (&(pCStack_78->fields).__7__wrap1,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar6) {
    uVar2 = (pCStack_78->fields).__7__wrap1.fields._current;
    auVar9 = (undefined1  [16])
             (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                       (__this_00,uVar2,(__this_00->klass->vtable)._6_GetCustomSkinPart.method);
    __this_02 = auVar9._0_8_;
    pSVar3 = (pCStack_78->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar3->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    url = (System_String_o *)pSVar3->m_Items[(int)uVar2];
    if ((url != (System_String_o *)0x0) && (url->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(url);
    }
    if (__this_02 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_02,url,auVar9._8_8_);
    ppCVar5 = (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o **)puStack_68;
    if (!bVar6) {
      if (Il2CppMethodInitialized_07545932 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
        Il2CppMethodInitialized_07545932 = '\x01';
      }
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      (__this_03->fields).__1__state = 0;
      (__this_03->fields).__4__this = __this_02;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
      (__this_03->fields).url = url;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).url);
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this_00,
                          (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
      (pCStack_78->fields).__2__current = (Il2CppObject *)pUVar8;
      Il2CppCodeGenWriteBarrier(&(pCStack_78->fields).__2__current);
      (pCStack_78->fields).__1__state = 1;
      return true;
    }
  }
label_059624ed:
  pCVar4 = pCStack_78;
  if (Il2CppMethodInitialized_07545928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    Il2CppMethodInitialized_07545928 = '\x01';
  }
  (pCVar4->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            (&(pCVar4->fields).__7__wrap1,
             (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  (pCStack_78->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (pCStack_78->fields).__7__wrap1.fields._index = 0;
  (pCStack_78->fields).__7__wrap1.fields._version = 0;
  *(undefined8 *)&(pCStack_78->fields).__7__wrap1.fields._current = 0;
  return false;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1 (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x59625f0

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    Il2CppMethodInitialized_07545928 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            (&(__this->fields).__7__wrap1,
             (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x5962630

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x5962640

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x5962680

Il2CppObject *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current
          (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x5961d30

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"skybox");
    Il2CppMethodInitialized_07545921 = '\x01';
  }
  return "skybox";
}


// CustomSkins.SkyboxCustomSkinLoader$$CreateSkyboxMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial (const MethodInfo* method);
// 0x5961d60

UnityEngine_Material_o * CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Skyboxes/EmptySkybox");
    Il2CppMethodInitialized_07545922 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Skyboxes/EmptySkybox",true,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  return pUVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_SkyboxCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x5961e10

System_Collections_IEnumerator_o *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_07545923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4);
    Il2CppMethodInitialized_07545923 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x5961eb0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  CustomSkins_SkyboxCustomSkinPart_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o SStack_40;
  int32_t iStack_30;
  
  if (Il2CppMethodInitialized_07545924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPart);
    Il2CppMethodInitialized_07545924 = '\x01';
  }
  pUVar1 = TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial;
  if (Il2CppMethodInitialized_07545925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPartId);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    Il2CppMethodInitialized_07545925 = '\x01';
  }
  SStack_40.klass = (System_Enum_c *)TypeInfo_CustomSkins_SkyboxCustomSkinPartId;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  iStack_30 = partId;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10("_",pSVar2,"Tex",(MethodInfo *)0x0)
  ;
  SStack_40.klass = (System_Enum_c *)CONCAT44(SStack_40.klass._4_4_,partId);
  pSVar3 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
  str1 = System_Int32__ToString((int32_t *)&SStack_40,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320(pSVar3,str1,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_SkyboxCustomSkinPart);
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,
             (System_Collections_Generic_List_Renderer__o *)0x0,pSVar3,2000000,
             (System_Nullable_Vector2__o)ZEXT812(0),false,in_stack_ffffffffffffffb0);
  (__this_00->fields)._skyboxMaterial = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._skyboxMaterial);
  (__this_00->fields)._textureName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._textureName);
  return (CustomSkins_BaseCustomSkinPart_o *)__this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$PartIdToTextureName
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x5962020

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07545925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPartId);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    Il2CppMethodInitialized_07545925 = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_CustomSkins_SkyboxCustomSkinPartId;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = partId;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("_",pSVar1,"Tex",(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader___ctor (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x5962110

void CustomSkins_SkyboxCustomSkinLoader___ctor
               (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_07545926 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


